// File: /home/cong.zou/work_repo/ext/luabind_d/src/pcall.cpp

// Line 32: range 000000001530E6E0-000000001530E792
int __fastcall luabind::detail::pcall(lua_State_0 *L, int nargs, int nresults)
{
  luabind::pcall_callback_fun pcall_callback; // rax
  int (*v5)(lua_State_0 *); // r12
  int v6; // r15d
  int v7; // r12d

  pcall_callback = luabind::get_pcall_callback();
  if ( !pcall_callback )
    return lua_pcallk(L, nargs, nresults, 0, 0LL, 0LL);
  v5 = pcall_callback;
  v6 = lua_gettop(L) - nargs;
  lua_pushcclosure(L, v5, 0);
  lua_rotate(L, v6, 1);
  v7 = lua_pcallk(L, nargs, nresults, v6, 0LL, 0LL);
  if ( v6 )
  {
    lua_rotate(L, v6, -1);
    lua_settop(L, -2);
  }
  return v7;
};

// Line 49: range 000000001530E7A0-000000001530E7BC
int __fastcall luabind::detail::resume_impl(lua_State_0 *L, int nargs, int a3)
{
  int result; // eax

  result = lua_resume(L, 0LL, nargs);
  if ( result == 1 )
    return 0;
  return result;
};
