// File: /home/cong.zou/work_repo/ext/luabind_d/src/class_rep.cpp

// Line 43: range 000000001530AC20-000000001530AC33
int __fastcall __noreturn luabind::detail::property_tag(lua_State_0 *L)
{
  lua_pushstring(L, "luabind: property_tag function can't be called");
  lua_error(L);
};

// Line 50: range 000000001530B430-000000001530B4CF
void __fastcall luabind::detail::class_rep::class_rep(
        luabind::detail::class_rep *this,
        const luabind::type_id *a2,
        const char *a3,
        lua_State *a4)
{
  const std::type_info *id; // rax

  id = a2->id;
  this->m_name = a3;
  this->m_bases._M_impl._M_end_of_storage = 0LL;
  this->m_type.id = id;
  this->m_self_ref.L = 0LL;
  this->m_self_ref.m_ref = -2;
  this->m_table.m_interpreter = 0LL;
  this->m_table.m_index = -2;
  this->m_default_table.m_interpreter = 0LL;
  this->m_default_table.m_index = -2;
  this->m_class_type = cpp_class;
  this->m_static_constants._M_t._M_impl._M_header._M_color = _S_red;
  this->m_static_constants._M_t._M_impl._M_header._M_parent = 0LL;
  this->m_static_constants._M_t._M_impl._M_header._M_left = &this->m_static_constants._M_t._M_impl._M_header;
  this->m_static_constants._M_t._M_impl._M_header._M_right = &this->m_static_constants._M_t._M_impl._M_header;
  this->m_static_constants._M_t._M_impl._M_node_count = 0LL;
  this->m_operator_cache = 0;
  *(_OWORD *)&this->m_bases._M_impl._M_start = 0LL;
  luabind::detail::class_rep::shared_init(this, a4);
};

// Line 63: range 000000001530AC40-000000001530AE29
void __fastcall luabind::detail::class_rep::shared_init(luabind::detail::class_rep *const this, lua_State_0 *L)
{
  int v3; // eax
  int m_index; // edx
  lua_State_0 *m_interpreter; // rdi
  int v6; // eax
  int v7; // edx
  lua_State_0 *v8; // rdi
  luabind::detail::class_registry *registry; // rax
  lua_Integer m_cpp_class_metatable; // rdx
  luabind::detail::class_registry *v11; // r12
  lua_State_0 *v12; // rdi
  int m_ref; // edx

  lua_createtable(L, 0, 0);
  lua_pushvalue(L, -1);
  v3 = luaL_ref(L, -1001000);
  m_index = this->m_table.m_index;
  m_interpreter = this->m_table.m_interpreter;
  this->m_table.m_interpreter = L;
  this->m_table.m_index = v3;
  if ( m_index != -2 && m_interpreter )
    luaL_unref(m_interpreter, -1001000, m_index);
  lua_createtable(L, 0, 0);
  lua_pushvalue(L, -1);
  v6 = luaL_ref(L, -1001000);
  v7 = this->m_default_table.m_index;
  v8 = this->m_default_table.m_interpreter;
  this->m_default_table.m_interpreter = L;
  this->m_default_table.m_index = v6;
  if ( v7 != -2 && v8 )
    luaL_unref(v8, -1001000, v7);
  lua_settop(L, -3);
  registry = luabind::detail::class_registry::get_registry(L);
  m_cpp_class_metatable = registry->m_cpp_class_metatable;
  v11 = registry;
  if ( (_DWORD)m_cpp_class_metatable == -2 )
    __assert_fail(
      "(r->cpp_class() != (-2)) && \"you must call luabind::open()\"",
      "src/class_rep.cpp",
      0x48u,
      "void luabind::detail::class_rep::shared_init(lua_State*)");
  if ( this->m_class_type )
    m_cpp_class_metatable = registry->m_lua_class_metatable;
  lua_rawgeti(L, -1001000, m_cpp_class_metatable);
  lua_setmetatable(L, -2);
  lua_pushvalue(L, -1);
  v12 = this->m_self_ref.L;
  if ( v12 )
  {
    m_ref = this->m_self_ref.m_ref;
    if ( m_ref != -2 )
      luaL_unref(v12, -1001000, m_ref);
  }
  this->m_self_ref.L = L;
  this->m_self_ref.m_ref = -2;
  this->m_self_ref.m_ref = luaL_ref(L, -1001000);
  this->m_instance_metatable = v11->m_instance_metatable;
  lua_pushstring(L, "__luabind_cast_graph");
  lua_gettable(L, -1001000);
  this->m_casts = (luabind::detail::cast_graph *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  lua_pushstring(L, "__luabind_class_id_map");
  lua_gettable(L, -1001000);
  this->m_classes = (luabind::detail::class_id_map *)lua_touserdata(L, -1);
  lua_settop(L, -2);
};

// Line 94: range 000000001530B4E0-000000001530B585
void __fastcall luabind::detail::class_rep::class_rep(luabind::detail::class_rep *this, lua_State *a2, const char *a3)
{
  this->m_name = a3;
  this->m_bases._M_impl._M_start = 0LL;
  this->m_type.id = (const std::type_info *)&`typeinfo for'luabind::detail::null_type;
  this->m_bases._M_impl._M_finish = 0LL;
  this->m_bases._M_impl._M_end_of_storage = 0LL;
  this->m_self_ref.L = 0LL;
  this->m_self_ref.m_ref = -2;
  this->m_table.m_interpreter = 0LL;
  this->m_table.m_index = -2;
  this->m_default_table.m_interpreter = 0LL;
  this->m_default_table.m_index = -2;
  this->m_class_type = lua_class;
  this->m_static_constants._M_t._M_impl._M_header._M_color = _S_red;
  this->m_static_constants._M_t._M_impl._M_header._M_parent = 0LL;
  this->m_static_constants._M_t._M_impl._M_header._M_left = &this->m_static_constants._M_t._M_impl._M_header;
  this->m_static_constants._M_t._M_impl._M_header._M_right = &this->m_static_constants._M_t._M_impl._M_header;
  this->m_static_constants._M_t._M_impl._M_node_count = 0LL;
  this->m_operator_cache = 0;
  luabind::detail::class_rep::shared_init(this, a2);
};

// Line 103: range 000000001530B590-000000001530B64A
void __fastcall luabind::detail::class_rep::~class_rep(luabind::detail::class_rep *const this)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbp
  std::map<char const*,int,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > > *p_m_static_constants; // r12
  std::_Rb_tree_node_base::_Base_ptr v4; // rdi
  lua_State_0 *m_interpreter; // rdi
  int m_index; // edx
  lua_State_0 *v7; // rdi
  int v8; // edx
  lua_State_0 *L; // rdi
  int m_ref; // edx
  std::_Vector_base<luabind::detail::class_rep::base_info>::pointer M_start; // rdi

  M_parent = this->m_static_constants._M_t._M_impl._M_header._M_parent;
  if ( M_parent )
  {
    p_m_static_constants = &this->m_static_constants;
    do
    {
      std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int>>,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int>>>::_M_erase(
        &p_m_static_constants->_M_t,
        (std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > >::_Link_type)M_parent->_M_right);
      v4 = M_parent;
      M_parent = M_parent->_M_left;
      operator delete(v4);
    }
    while ( M_parent );
  }
  m_interpreter = this->m_default_table.m_interpreter;
  if ( m_interpreter )
  {
    m_index = this->m_default_table.m_index;
    if ( m_index != -2 )
      luaL_unref(m_interpreter, -1001000, m_index);
  }
  v7 = this->m_table.m_interpreter;
  if ( v7 )
  {
    v8 = this->m_table.m_index;
    if ( v8 != -2 )
      luaL_unref(v7, -1001000, v8);
  }
  L = this->m_self_ref.L;
  if ( !L || (m_ref = this->m_self_ref.m_ref, m_ref == -2) )
  {
    M_start = this->m_bases._M_impl._M_start;
    if ( !M_start )
      return;
    goto LABEL_13;
  }
  luaL_unref(L, -1001000, m_ref);
  M_start = this->m_bases._M_impl._M_start;
  if ( M_start )
LABEL_13:
    operator delete(M_start);
};

// Line 110: range 000000001530AE30-000000001530AE47
std::pair<void*,void*> __fastcall luabind::detail::class_rep::allocate(
        const luabind::detail::class_rep *const this,
        lua_State_0 *L)
{
  return (std::pair<void*,void*>)(unsigned __int64)lua_newuserdata(L, 0x40uLL);
};

// Line 125: range 000000001530AE50-000000001530AFB3
int __fastcall luabind::detail::class_rep::constructor_dispatcher(lua_State_0 *L)
{
  luabind::detail::class_rep *v1; // rbx
  int v2; // r12d

  v1 = (luabind::detail::class_rep *)lua_touserdata(L, 1);
  v2 = lua_gettop(L);
  luabind::detail::push_new_instance(L, v1);
  if ( `anonymous namespace'::super_deprecation_disabled
    && v1->m_class_type == lua_class
    && v1->m_bases._M_impl._M_start != v1->m_bases._M_impl._M_finish )
  {
    lua_pushvalue(L, 1);
    lua_pushvalue(L, -2);
    lua_pushcclosure(L, luabind::detail::class_rep::super_callback, 2);
    lua_setglobal(L, "super");
  }
  lua_pushvalue(L, -1);
  lua_copy(L, -1, 1);
  lua_settop(L, -2);
  lua_rawgeti(L, -1001000, v1->m_table.m_index);
  lua_pushstring(L, "__init");
  lua_gettable(L, -2);
  lua_rotate(L, 1, 1);
  lua_settop(L, -2);
  lua_rotate(L, 1, 1);
  lua_callk(L, v2, 0, 0LL, 0LL);
  if ( `anonymous namespace'::super_deprecation_disabled )
  {
    lua_pushnil(L);
    lua_setglobal(L, "super");
  }
  return 1;
};

// Line 166: range 000000001530B650-000000001530B816
void __fastcall luabind::detail::class_rep::add_base_class(
        luabind::detail::class_rep *const this,
        const luabind::detail::class_rep::base_info *binfo)
{
  luabind::detail::class_rep *base; // r13
  std::_Rb_tree_node_base::_Base_ptr M_left; // r14
  std::map<char const*,int,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > > *p_m_static_constants; // rcx
  std::_Rb_tree_header *v6; // r12
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  const char *v8; // r13
  std::_Rb_tree_node_base *p_M_header; // r15
  luabind::detail::class_rep::base_info *M_finish; // rsi
  luabind::detail::class_rep::base_info *v11; // rsi
  luabind::detail::class_rep *v12; // rax
  std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > >::const_iterator v13; // rsi
  __int64 v14; // rax
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  bool v16; // di
  std::_Rb_tree_node_base *v17; // rdi
  std::_Rb_tree_header *v18; // [rsp+0h] [rbp-58h]
  std::map<char const*,int,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > > *i; // [rsp+8h] [rbp-50h]
  std::_Rb_tree_node_base *second; // [rsp+18h] [rbp-40h]

  base = binfo->base;
  if ( !base )
    __assert_fail(
      "binfo.base && \"You cannot derive from an unregistered type\"",
      "src/class_rep.cpp",
      0xACu,
      "void luabind::detail::class_rep::add_base_class(const luabind::detail::class_rep::base_info&)");
  M_left = base->m_static_constants._M_t._M_impl._M_header._M_left;
  p_m_static_constants = &this->m_static_constants;
  v18 = &base->m_static_constants._M_t._M_impl.std::_Rb_tree_header;
  v6 = &this->m_static_constants._M_t._M_impl.std::_Rb_tree_header;
  for ( i = &this->m_static_constants;
        M_left != (std::_Rb_tree_node_base::_Base_ptr)v18;
        M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left) )
  {
    M_parent = this->m_static_constants._M_t._M_impl._M_header._M_parent;
    if ( M_parent )
    {
      v8 = *(const char **)&M_left[1]._M_color;
      p_M_header = &v6->_M_header;
      do
      {
        while ( strcmp(*(const char **)&M_parent[1]._M_color, v8) >= 0 )
        {
          p_M_header = M_parent;
          M_parent = M_parent->_M_left;
          if ( !M_parent )
            goto LABEL_8;
        }
        M_parent = M_parent->_M_right;
      }
      while ( M_parent );
LABEL_8:
      if ( p_M_header != (std::_Rb_tree_node_base *)v6 && strcmp(v8, *(const char **)&p_M_header[1]._M_color) >= 0 )
        goto LABEL_10;
    }
    else
    {
      p_M_header = &v6->_M_header;
    }
    v13._M_node = p_M_header;
    p_M_header = (std::_Rb_tree_node_base *)operator new(0x30uLL);
    v14 = *(_QWORD *)&M_left[1]._M_color;
    LODWORD(p_M_header[1]._M_parent) = 0;
    *(_QWORD *)&p_M_header[1]._M_color = v14;
    insert_hint_unique_pos = std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int>>,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int>>>::_M_get_insert_hint_unique_pos(
                               &i->_M_t,
                               v13,
                               (const std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > >::key_type *)&p_M_header[1]);
    if ( insert_hint_unique_pos.second )
    {
      if ( v6 == (std::_Rb_tree_header *)insert_hint_unique_pos.second || insert_hint_unique_pos.first )
      {
        v16 = 1;
      }
      else
      {
        second = insert_hint_unique_pos.second;
        LODWORD(insert_hint_unique_pos.first) = strcmp(
                                                  *(const char **)&p_M_header[1]._M_color,
                                                  *(const char **)&insert_hint_unique_pos.second[1]._M_color);
        insert_hint_unique_pos.second = second;
        v16 = SLODWORD(insert_hint_unique_pos.first) < 0;
      }
      std::_Rb_tree_insert_and_rebalance(v16, p_M_header, insert_hint_unique_pos.second, &v6->_M_header);
      ++this->m_static_constants._M_t._M_impl._M_node_count;
    }
    else
    {
      v17 = p_M_header;
      p_M_header = insert_hint_unique_pos.first;
      operator delete(v17);
    }
LABEL_10:
    LODWORD(p_M_header[1]._M_parent) = M_left[1]._M_parent;
  }
  M_finish = this->m_bases._M_impl._M_finish;
  if ( M_finish == this->m_bases._M_impl._M_end_of_storage )
  {
    std::vector<luabind::detail::class_rep::base_info>::_M_realloc_insert<luabind::detail::class_rep::base_info const&>(
      &this->m_bases,
      (std::vector<luabind::detail::class_rep::base_info>::iterator)M_finish,
      binfo,
      (const luabind::detail::class_rep::base_info *)p_m_static_constants);
  }
  else
  {
    v11 = M_finish + 1;
    v12 = binfo->base;
    v11[-1].pointer_offset = binfo->pointer_offset;
    v11[-1].base = v12;
    this->m_bases._M_impl._M_finish = v11;
  }
};

// Line 190: range 000000001530AFC0-000000001530AFC7
void __cdecl luabind::disable_super_deprecation()
{
  `anonymous namespace'::super_deprecation_disabled = 1;
};

// Line 194: range 000000001530AAF0-000000001530AC17
int __fastcall luabind::detail::class_rep::super_callback(lua_State_0 *L)
{
  int v1; // ebx
  __int64 v2; // r12

  v1 = lua_gettop(L);
  v2 = *(_QWORD *)(*((_QWORD *)lua_touserdata(L, -1001001) + 1) + 8LL);
  if ( *(_QWORD *)(v2 + 8) == *(_QWORD *)(v2 + 16) )
  {
    lua_pushnil(L);
  }
  else
  {
    lua_pushlightuserdata(L, (void *)v2);
    lua_pushvalue(L, -1001002);
    lua_pushcclosure(L, luabind::detail::class_rep::super_callback, 2);
  }
  lua_setglobal(L, "super");
  lua_rawgeti(L, -1001000, *(int *)(v2 + 64));
  lua_pushstring(L, "__init");
  lua_gettable(L, -2);
  lua_rotate(L, 1, 1);
  lua_settop(L, -2);
  lua_pushvalue(L, -1001002);
  lua_rotate(L, 2, 1);
  lua_callk(L, v1 + 1, 0, 0LL, 0LL);
  lua_pushnil(L);
  lua_setglobal(L, "super");
  return 0;
};

// Line 236: range 000000001530AFD0-000000001530B07A
int __fastcall luabind::detail::class_rep::lua_settable_dispatcher(lua_State_0 *L)
{
  int *v1; // rbx
  int result; // eax

  v1 = (int *)lua_touserdata(L, 1);
  lua_rawgeti(L, -1001000, v1[16]);
  lua_pushvalue(L, -3);
  lua_pushvalue(L, -3);
  lua_rawset(L, -3);
  lua_settop(L, -2);
  lua_rawgeti(L, -1001000, v1[20]);
  lua_copy(L, -1, 1);
  lua_settop(L, -2);
  lua_rawset(L, -3);
  result = 0;
  v1[36] = 0;
  return result;
};

// Line 265: range 000000001530B080-000000001530B1C9
int __fastcall luabind::detail::class_rep::static_class_gettable(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  int *v2; // r12
  const char *v4; // r13
  size_t v5; // rbx
  const char **v6; // rbx
  const char **v7; // r14

  v2 = (int *)lua_touserdata(L, 1);
  lua_rawgeti(L, -1001000, v2[20]);
  lua_pushvalue(L, 2);
  lua_gettable(L, -2);
  if ( !lua_type(L, -1) )
  {
    lua_settop(L, -3);
    v4 = lua_tolstring(L, 2, 0LL);
    v5 = strlen(v4);
    if ( v5 == lua_rawlen(L, 2) )
    {
      v6 = (const char **)*((_QWORD *)v2 + 14);
      if ( !v6 )
        goto LABEL_12;
      v7 = (const char **)(v2 + 26);
      do
      {
        while ( strcmp(v6[4], v4) >= 0 )
        {
          v7 = v6;
          v6 = (const char **)v6[2];
          if ( !v6 )
            goto LABEL_9;
        }
        v6 = (const char **)v6[3];
      }
      while ( v6 );
LABEL_9:
      if ( v2 + 26 == (int *)v7 || strcmp(v4, v7[4]) < 0 )
      {
LABEL_12:
        lua_pushfstring(L, "no static '%s' in class '%s'", v4, *((const char **)v2 + 4));
        lua_error(L);
      }
      lua_pushnumber(L, (double)*((int *)v7 + 10), v1);
    }
    else
    {
      lua_pushnil(L);
    }
  }
  return 1;
};

// Line 304: range 000000001530B1D0-000000001530B255
bool __fastcall luabind::detail::is_class_rep(lua_State_0 *L, int index)
{
  if ( !lua_getmetatable(L, index) )
    return 0;
  lua_pushstring(L, "__luabind_classrep");
  lua_gettable(L, -2);
  if ( lua_toboolean(L, -1) )
  {
    lua_settop(L, -3);
    return 1;
  }
  else
  {
    lua_settop(L, -3);
    return 0;
  }
};

// Line 321: range 000000001530B260-000000001530B34D
void __fastcall luabind::detail::finalize(lua_State_0 *L, luabind::detail::class_rep *crep)
{
  std::_Vector_base<luabind::detail::class_rep::base_info>::pointer M_start; // r12
  std::_Vector_base<luabind::detail::class_rep::base_info>::pointer i; // rax
  luabind::detail::class_rep *base; // rsi

  if ( crep->m_class_type == lua_class )
  {
    lua_rawgeti(L, -1001000, crep->m_table.m_index);
    lua_pushstring(L, "__finalize");
    lua_gettable(L, -2);
    lua_rotate(L, -2, -1);
    lua_settop(L, -2);
    if ( lua_type(L, -1) )
    {
      lua_pushvalue(L, -2);
      lua_callk(L, 1, 0, 0LL, 0LL);
    }
    else
    {
      lua_settop(L, -2);
    }
    M_start = crep->m_bases._M_impl._M_start;
    for ( i = crep->m_bases._M_impl._M_finish; i != M_start; ++M_start )
    {
      while ( 1 )
      {
        base = M_start->base;
        if ( !base )
          break;
        ++M_start;
        luabind::detail::finalize(L, base);
        i = crep->m_bases._M_impl._M_finish;
        if ( M_start == i )
          return;
      }
    }
  }
};

// Line 347: range 000000001530B350-000000001530B3EC
void __fastcall luabind::detail::class_rep::cache_operators(luabind::detail::class_rep *const this, lua_State_0 *L)
{
  __int64 v2; // rbp

  v2 = 1LL;
  this->m_operator_cache = 1;
  do
  {
    lua_rawgeti(L, -1001000, this->m_table.m_index);
    lua_pushstring(L, luabind::detail::get_operator_name(int)::a[v2 - 1]);
    lua_rawget(L, -2);
    if ( lua_type(L, -1) == 6 )
      this->m_operator_cache |= 1 << v2;
    ++v2;
    lua_settop(L, -3);
  }
  while ( v2 != 15 );
};

// Line 363: range 000000001530B3F0-000000001530B42E
bool __fastcall luabind::detail::class_rep::has_operator_in_lua(
        luabind::detail::class_rep *const this,
        lua_State_0 *L,
        int id)
{
  char v3; // bl
  int m_operator_cache; // edx

  v3 = id;
  m_operator_cache = this->m_operator_cache;
  if ( (m_operator_cache & 1) == 0 )
  {
    luabind::detail::class_rep::cache_operators(this, L);
    m_operator_cache = this->m_operator_cache;
  }
  return (m_operator_cache & (1 << (v3 + 1))) != 0;
};
