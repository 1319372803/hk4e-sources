// File: /home/cong.zou/work_repo/ext/luabind_d/src/object_rep.cpp

// Line 40: range 000000001530DD40-000000001530DD4F
void __fastcall luabind::detail::object_rep::object_rep(
        luabind::detail::object_rep_0 *const this,
        luabind::detail::instance_holder *instance,
        luabind::detail::class_rep *crep)
{
  this->m_instance = instance;
  this->m_classrep = crep;
  this->m_dependency_cnt = 0LL;
};

// Line 43: range 000000001530DD50-000000001530DD79
void __fastcall luabind::detail::object_rep::~object_rep(luabind::detail::object_rep_0 *const this)
{
  luabind::detail::instance_holder *m_instance; // rdi
  boost::aligned_storage<32,18446744073709551615>_0 *p_m_instance_buffer; // rbx
  boost::aligned_storage<32,18446744073709551615>_0 *v4; // rdi

  m_instance = this->m_instance;
  if ( m_instance )
  {
    p_m_instance_buffer = &this->m_instance_buffer;
    (*m_instance->_vptr_instance_holder)(m_instance);
    v4 = (boost::aligned_storage<32,18446744073709551615>_0 *)*((_QWORD *)&p_m_instance_buffer[-1].data_.align_ + 2);
    if ( v4 != p_m_instance_buffer )
      free(v4);
  }
};

// Line 52: range 000000001530DD80-000000001530DDDE
void __fastcall luabind::detail::object_rep::add_dependency(
        luabind::detail::object_rep_0 *const this,
        lua_State_0 *L,
        int index)
{
  std::size_t m_dependency_cnt; // rsi

  m_dependency_cnt = this->m_dependency_cnt;
  if ( m_dependency_cnt > 0x3F )
    __assert_fail(
      "m_dependency_cnt < sizeof(object_rep)",
      "src/object_rep.cpp",
      0x35u,
      "void luabind::detail::object_rep::add_dependency(lua_State*, int)");
  lua_pushlightuserdata(L, (char *)this + m_dependency_cnt);
  lua_pushvalue(L, index);
  lua_rawset(L, -1001000);
  ++this->m_dependency_cnt;
};

// Line 66: range 000000001530DDF0-000000001530DE40
void __fastcall luabind::detail::object_rep::release_dependency_refs(
        luabind::detail::object_rep_0 *const this,
        lua_State_0 *L)
{
  std::size_t v3; // rbx
  char *v4; // rsi

  if ( this->m_dependency_cnt )
  {
    v3 = 0LL;
    do
    {
      v4 = (char *)this + v3++;
      lua_pushlightuserdata(L, v4);
      lua_pushnil(L);
      lua_rawset(L, -1001000);
    }
    while ( this->m_dependency_cnt > v3 );
  }
};

// Line 76: range 000000001530DE50-000000001530DEF9
int __fastcall luabind::detail::destroy_instance(lua_State_0 *L)
{
  luabind::detail::object_rep_0 *v1; // r12

  v1 = (luabind::detail::object_rep_0 *)lua_touserdata(L, 1);
  lua_pushstring(L, "__finalize");
  lua_gettable(L, 1);
  if ( lua_type(L, -1) )
  {
    lua_pushvalue(L, 1);
    lua_callk(L, 1, 0, 0LL, 0LL);
  }
  else
  {
    lua_settop(L, -2);
  }
  luabind::detail::object_rep::release_dependency_refs(v1, L);
  luabind::detail::object_rep::~object_rep(v1);
  lua_pushnil(L);
  lua_setmetatable(L, 1);
  return 0;
};

// Line 104: range 000000001530D8B0-000000001530DB5E
int __fastcall luabind::detail::`anonymous namespace'::set_instance_value(lua_State_0 *L)
{
  const char *v2; // rax

  lua_getuservalue(L, 1);
  lua_pushvalue(L, 2);
  lua_rawget(L, -2);
  if ( !lua_type(L, -1) && lua_getmetatable(L, -2) )
  {
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
    lua_copy(L, -1, -3);
    lua_settop(L, -2);
    lua_settop(L, -2);
  }
  if ( lua_tocfunction(L, -1) == luabind::detail::property_tag )
  {
    lua_getupvalue(L, -1, 2);
    if ( !lua_type(L, -1) )
    {
      v2 = lua_tolstring(L, 2, 0LL);
      lua_pushfstring(L, "property '%s' is read only", v2);
      lua_error(L);
    }
    lua_pushvalue(L, 1);
    lua_pushvalue(L, 3);
    lua_callk(L, 2, 0, 0LL, 0LL);
    return 0;
  }
  else
  {
    if ( !lua_type(L, -1) )
    {
      if ( !lua_getmetatable(L, -2) )
        lua_pushvalue(L, -2);
      lua_pushstring(L, "__newindex");
      lua_rawget(L, -2);
      if ( lua_type(L, -1) )
      {
        lua_pushvalue(L, 1);
        lua_pushvalue(L, 2);
        lua_pushvalue(L, 3);
        lua_callk(L, 3, 0, 0LL, 0LL);
      }
      else
      {
        lua_settop(L, -2);
      }
      lua_settop(L, -2);
    }
    lua_settop(L, -2);
    if ( lua_getmetatable(L, 4) )
    {
      lua_settop(L, -2);
    }
    else
    {
      lua_createtable(L, 0, 0);
      lua_pushvalue(L, -1);
      lua_setuservalue(L, 1);
      lua_pushvalue(L, 4);
      lua_setmetatable(L, -2);
    }
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
    return 0;
  }
};

// Line 185: range 000000001530DB70-000000001530DD2D
int __fastcall luabind::detail::`anonymous namespace'::get_instance_value(lua_State_0 *L)
{
  lua_getuservalue(L, 1);
  lua_pushvalue(L, 2);
  lua_rawget(L, -2);
  if ( !lua_type(L, -1) && lua_getmetatable(L, -2) )
  {
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  if ( lua_tocfunction(L, -1) == luabind::detail::property_tag )
  {
    lua_getupvalue(L, -1, 1);
    lua_pushvalue(L, 1);
    lua_callk(L, 1, 1, 0LL, 0LL);
    return 1;
  }
  else if ( lua_type(L, -1)
         || lua_isstring(L, 2) && !lua_isnumber(L, 2) && !strcmp(lua_tolstring(L, 2, 0LL), "__finalize") )
  {
    return 1;
  }
  else
  {
    lua_pushstring(L, "__index");
    lua_rawget(L, -3);
    if ( lua_type(L, -1) )
    {
      lua_pushvalue(L, 1);
      lua_pushvalue(L, 2);
      lua_callk(L, 2, 1, 0LL, 0LL);
    }
    else
    {
      lua_settop(L, -2);
    }
    return 1;
  }
};

// Line 235: range 000000001530E0B0-000000001530E1CF
int __fastcall luabind::detail::`anonymous namespace'::dispatch_operator(lua_State_0 *L)
{
  int i; // eax
  int v2; // ebx
  int v3; // r12d
  int v5; // eax

  for ( i = 0; ; i = 1 )
  {
    v2 = i + 1;
    if ( luabind::detail::get_instance(L, i + 1) )
      break;
LABEL_10:
    if ( v2 == 2 )
    {
      v5 = lua_gettop(L);
      lua_settop(L, ~v5);
      lua_pushstring(L, "No such operator defined");
      lua_error(L);
    }
  }
  v3 = lua_gettop(L);
  lua_pushvalue(L, -1001001);
  lua_gettable(L, v2);
  if ( !lua_type(L, -1) )
  {
    lua_settop(L, -2);
    goto LABEL_10;
  }
  lua_rotate(L, 1, 1);
  if ( lua_toboolean(L, -1001002) )
    v3 = 1;
  if ( lua_toboolean(L, -1001002) )
  {
    lua_rotate(L, 3, -1);
    lua_settop(L, -2);
  }
  lua_callk(L, v3, 1, 0LL, 0LL);
  return 1;
};

// Line 273: range 000000001530DF00-000000001530E02E
void __fastcall luabind::detail::push_instance_metatable(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  __int64 v2; // rbx
  bool v3; // si
  bool v4; // al

  v2 = 0LL;
  lua_createtable(L, 0, 0);
  lua_pushnumber(L, 1.0, v1);
  lua_pushcclosure(L, luabind::detail::`anonymous namespace'::get_instance_value, 0);
  lua_rawset(L, -3);
  lua_pushcclosure(L, luabind::detail::destroy_instance, 0);
  lua_setfield(L, -2, "__gc");
  lua_pushcclosure(L, luabind::detail::`anonymous namespace'::get_instance_value, 0);
  lua_setfield(L, -2, "__index");
  lua_pushcclosure(L, luabind::detail::`anonymous namespace'::set_instance_value, 0);
  lua_setfield(L, -2, "__newindex");
  do
  {
    lua_pushstring(L, luabind::detail::get_operator_name(int)::a[v2]);
    lua_pushvalue(L, -1);
    v3 = (_DWORD)v2 == 10;
    v4 = (_DWORD)v2++ == 13;
    lua_pushboolean(L, v4 || v3);
    lua_pushcclosure(L, luabind::detail::`anonymous namespace'::dispatch_operator, 2);
    lua_settable(L, -3);
  }
  while ( v2 != 14 );
};

// Line 302: range 000000001530E030-000000001530E0AB
luabind::detail::object_rep_0 *__fastcall luabind::detail::get_instance(lua_State_0 *L, int index)
{
  luabind::detail::object_rep_0 *v2; // rax
  luabind::detail::object_rep_0 *v3; // r12

  v2 = (luabind::detail::object_rep_0 *)lua_touserdata(L, index);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  if ( !lua_getmetatable(L, index) )
    return 0LL;
  lua_rawgeti(L, -1, 1LL);
  if ( luabind::detail::`anonymous namespace'::get_instance_value != lua_tocfunction(L, -1) )
    v3 = 0LL;
  lua_settop(L, -3);
  return v3;
};

// Line 319: range 000000001530E1E0-000000001530E247
luabind::detail::object_rep_0 *__fastcall luabind::detail::push_new_instance(
        lua_State_0 *L,
        luabind::detail::class_rep *cls)
{
  luabind::detail::object_rep_0 *v2; // r12

  v2 = (luabind::detail::object_rep_0 *)lua_newuserdata(L, 0x40uLL);
  luabind::detail::object_rep::object_rep(v2, 0LL, cls);
  lua_rawgeti(L, -1001000, cls->m_table.m_index);
  lua_setuservalue(L, -2);
  lua_rawgeti(L, -1001000, cls->m_instance_metatable);
  lua_setmetatable(L, -2);
  return v2;
};
