// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/linit.c

// Line 60: range 00000000152FC634-00000000152FC674
void __fastcall luaL_openlibs(lua_State_0 *L)
{
  const luaL_Reg_0 *i; // rbx
  int (*func)(lua_State_0 *); // rdx

  for ( i = loadedlibs; ; ++i )
  {
    func = i->func;
    if ( !func )
      break;
    luaL_requiref(L, i->name, func, 1);
    lua_settop(L, -2);
  }
};
