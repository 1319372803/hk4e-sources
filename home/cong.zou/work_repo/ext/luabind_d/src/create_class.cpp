// File: /home/cong.zou/work_repo/ext/luabind_d/src/create_class.cpp

// Line 43: range 000000001530EDF0-000000001530EED6
void __fastcall luabind::detail::`anonymous namespace'::copy_member_table(lua_State_0 *L)
{
  lua_pushnil(L);
  while ( lua_next(L, -2) )
  {
    lua_pushstring(L, "__init");
    if ( lua_compare(L, -1, -3, 0) || (lua_settop(L, -2), lua_pushstring(L, "__finalize"), lua_compare(L, -1, -3, 0)) )
    {
      lua_settop(L, -3);
    }
    else
    {
      lua_settop(L, -2);
      lua_pushvalue(L, -2);
      lua_rotate(L, -2, 1);
      lua_settable(L, -5);
    }
  }
};

// Line 73: range 000000001530EEE0-000000001530F015
int __fastcall luabind::detail::create_class::stage2(lua_State_0 *L)
{
  luabind::detail::class_rep *v1; // rax
  luabind::detail::class_rep *v2; // rbx
  luabind::detail::class_rep *v3; // r12
  luabind::detail::class_rep::base_info binfo; // [rsp+0h] [rbp-28h] BYREF

  v1 = (luabind::detail::class_rep *)lua_touserdata(L, -1001001);
  if ( !v1 )
    __assert_fail(
      "(crep != 0) && \"internal error, please report\"",
      "src/create_class.cpp",
      0x4Bu,
      "static int luabind::detail::create_class::stage2(lua_State*)");
  v2 = v1;
  if ( !luabind::detail::is_class_rep(L, -1001001) )
    __assert_fail(
      "(is_class_rep(L, ((-1000000 - 1000) - (1)))) && \"internal error, please report\"",
      "src/create_class.cpp",
      0x4Cu,
      "static int luabind::detail::create_class::stage2(lua_State*)");
  if ( !luabind::detail::is_class_rep(L, 1) )
  {
    lua_pushstring(L, "expected class to derive from or a newline");
    lua_error(L);
  }
  binfo.pointer_offset = 0;
  v3 = (luabind::detail::class_rep *)lua_touserdata(L, 1);
  binfo.base = v3;
  luabind::detail::class_rep::add_base_class(v2, &binfo);
  lua_rawgeti(L, -1001000, v2->m_table.m_index);
  lua_rawgeti(L, -1001000, v3->m_table.m_index);
  luabind::detail::`anonymous namespace'::copy_member_table(L);
  lua_rawgeti(L, -1001000, v2->m_default_table.m_index);
  lua_rawgeti(L, -1001000, v3->m_default_table.m_index);
  luabind::detail::`anonymous namespace'::copy_member_table(L);
  v2->m_type.id = v3->m_type.id;
  return 0;
};

// Line 111: range 000000001530F020-000000001530F12B
int __fastcall luabind::detail::create_class::stage1(lua_State_0 *L)
{
  const char *v1; // rax
  size_t v2; // r12
  const char *v3; // r12
  luabind::detail::class_rep *v4; // rax

  if ( lua_gettop(L) != 1 || lua_type(L, 1) != 4 || lua_isnumber(L, 1) )
  {
    lua_pushstring(L, "invalid construct, expected class name");
    lua_error(L);
  }
  v1 = lua_tolstring(L, 1, 0LL);
  v2 = strlen(v1);
  if ( v2 != lua_rawlen(L, 1) )
  {
    lua_pushstring(L, "luabind does not support class names with extra nulls");
    lua_error(L);
  }
  v3 = lua_tolstring(L, 1, 0LL);
  v4 = (luabind::detail::class_rep *)lua_newuserdata(L, 0xA8uLL);
  luabind::detail::class_rep::class_rep(v4, L, v3);
  lua_pushvalue(L, -1);
  lua_setglobal(L, v3);
  lua_pushcclosure(L, luabind::detail::create_class::stage2, 1);
  return 1;
};
