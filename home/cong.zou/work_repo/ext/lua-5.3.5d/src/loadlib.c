// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/loadlib.c

// Line 236: range 0000000015307D57-0000000015307D6E
void *__fastcall lsys_load(lua_State_0 *L, const char *path, int seeglb)
{
  lua_pushstring(L, "dynamic libraries not enabled; check your Lua installation");
  return 0LL;
};

// Line 243: range 0000000015307D6F-0000000015307D86
lua_CFunction __fastcall lsys_sym(lua_State_0 *L, void *lib, const char *sym)
{
  lua_pushstring(L, "dynamic libraries not enabled; check your Lua installation");
  return 0LL;
};

// Line 278: range 0000000015307D87-0000000015307DC3
int __fastcall noenv(lua_State_0 *L)
{
  int v1; // ebp

  lua_getfield(L, -1001000, "LUA_NOENV");
  v1 = lua_toboolean(L, -1);
  lua_settop(L, -2);
  return v1;
};

// Line 292: range 00000000153088FF-00000000153089CD
void __fastcall setpath(lua_State_0 *L, const char *fieldname, const char *envname, const char *dft)
{
  const char *v6; // rax
  char *v7; // rbp
  const char *v8; // rax

  v6 = lua_pushfstring(L, "%s%s", envname, "_5_3");
  v7 = getenv(v6);
  if ( !v7 )
    v7 = getenv(envname);
  if ( v7 && !noenv(L) )
  {
    v8 = luaL_gsub(L, v7, off_1B23A528, r);
    luaL_gsub(L, v8, &off_1B23A528[3], dft);
    lua_rotate(L, -2, -1);
    lua_settop(L, -2);
  }
  else
  {
    lua_pushstring(L, dft);
  }
  lua_setfield(L, -3, fieldname);
  lua_settop(L, -2);
};

// Line 317: range 0000000015308387-00000000153083D8
void *__fastcall checkclib(lua_State_0 *L, const char *path)
{
  void *v2; // rbp

  lua_rawgetp(L, -1001000, &CLIBS);
  lua_getfield(L, -1, path);
  v2 = lua_touserdata(L, -1);
  lua_settop(L, -3);
  return v2;
};

// Line 331: range 0000000015308430-00000000153084A3
void __fastcall addtoclib(lua_State_0 *L, const char *path, void *plib)
{
  lua_Integer v4; // rax

  lua_rawgetp(L, -1001000, &CLIBS);
  lua_pushlightuserdata(L, plib);
  lua_pushvalue(L, -1);
  lua_setfield(L, -3, path);
  v4 = luaL_len(L, -2);
  lua_rawseti(L, -2, v4 + 1);
  lua_settop(L, -2);
};

// Line 345: range 00000000153083D9-000000001530842F
int __fastcall gctm(lua_State_0 *L)
{
  __int64 i; // rbx

  for ( i = luaL_len(L, 1); i > 0; --i )
  {
    lua_rawgeti(L, 1, i);
    lua_touserdata(L, -1);
    lua_settop(L, -2);
  }
  return 0;
};

// Line 372: range 00000000153084A4-000000001530854C
int __fastcall lookforfunc(lua_State_0 *L, const char *path, const char *sym)
{
  void *v4; // rbp
  int (*v5)(lua_State_0 *); // rsi
  void *v7; // rax

  v4 = checkclib(L, path);
  if ( !v4 )
  {
    v7 = lsys_load(L, path, *sym == 42);
    v4 = v7;
    if ( !v7 )
      return 1;
    addtoclib(L, path, v7);
  }
  if ( *sym == 42 )
  {
    lua_pushboolean(L, 1);
    return 0;
  }
  else
  {
    v5 = lsys_sym(L, v4, sym);
    if ( v5 )
    {
      lua_pushcclosure(L, v5, 0);
      return 0;
    }
    else
    {
      return 2;
    }
  }
};

// Line 393: range 000000001530854E-00000000153085D3
int __fastcall ll_loadlib(lua_State_0 *L)
{
  const char *v1; // rbp
  const char *v2; // rax
  int v3; // eax
  int v5; // ebp
  const char *v6; // rsi

  v1 = luaL_checklstring(L, 1, 0LL);
  v2 = luaL_checklstring(L, 2, 0LL);
  v3 = lookforfunc(L, v1, v2);
  if ( !v3 )
    return 1;
  v5 = v3;
  lua_pushnil(L);
  lua_rotate(L, -2, 1);
  if ( v5 == 1 )
    v6 = "absent";
  else
    v6 = "init";
  lua_pushstring(L, v6);
  return 3;
};

// Line 416: range 00000000153080C5-00000000153080EF
int __fastcall readable(const char *filename)
{
  FILE *v1; // rax

  v1 = fopen64(filename, "r");
  if ( !v1 )
    return 0;
  fclose(v1);
  return 1;
};

// Line 424: range 00000000153080F1-000000001530815A
const char *__fastcall pushnexttemplate(lua_State_0 *L, const char *path)
{
  char *v3; // rbp

  while ( *path == 59 )
    ++path;
  if ( !*path )
    return 0LL;
  v3 = strchr(path, 59);
  if ( !v3 )
    v3 = (char *)&path[strlen(path)];
  lua_pushlstring(L, path, v3 - path);
  return v3;
};

// Line 438: range 000000001530815C-0000000015308269
const char *__fastcall searchpath(
        lua_State_0 *L,
        const char *name,
        const char *path,
        const char *sep,
        const char *dirsep)
{
  const char *v5; // r13
  const char *v9; // rax
  const char *v10; // r12
  luaL_Buffer_0 msg; // [rsp+0h] [rbp-2048h] BYREF

  v5 = name;
  luaL_buffinit(L, &msg);
  if ( *sep )
    v5 = luaL_gsub(L, name, sep, dirsep);
  while ( 1 )
  {
    path = pushnexttemplate(L, path);
    if ( !path )
      break;
    v9 = lua_tolstring(L, -1, 0LL);
    v10 = luaL_gsub(L, v9, "?", v5);
    lua_rotate(L, -2, -1);
    lua_settop(L, -2);
    if ( readable(v10) )
      return v10;
    lua_pushfstring(L, "\n\tno file '%s'", v10);
    lua_rotate(L, -2, -1);
    lua_settop(L, -2);
    luaL_addvalue(&msg);
  }
  luaL_pushresult(&msg);
  return 0LL;
};

// Line 458: range 000000001530826A-0000000015308317
int __fastcall ll_searchpath(lua_State_0 *L)
{
  const char *v1; // r13
  const char *v2; // r12
  const char *v3; // rbp
  const char *v4; // rax

  v1 = luaL_optlstring(L, 4, dirsep, 0LL);
  v2 = luaL_optlstring(L, 3, ".", 0LL);
  v3 = luaL_checklstring(L, 2, 0LL);
  v4 = luaL_checklstring(L, 1, 0LL);
  if ( searchpath(L, v4, v3, v2, v1) )
    return 1;
  lua_pushnil(L);
  lua_rotate(L, -2, 1);
  return 2;
};

// Line 474: range 0000000015308319-0000000015308380
const char *__fastcall findfile(lua_State_0 *L, const char *name, const char *pname, const char *dirsep)
{
  const char *v6; // rax

  lua_getfield(L, -1001001, pname);
  v6 = lua_tolstring(L, -1, 0LL);
  if ( !v6 )
    luaL_error(L, "'package.%s' must be a string", pname);
  return searchpath(L, name, v6, ".", dirsep);
};

// Line 484: range 0000000015307DC4-0000000015307E23
int __fastcall checkload(lua_State_0 *L, int stat, const char *filename)
{
  const char *v4; // r12
  const char *v5; // rax

  if ( !stat )
  {
    v4 = lua_tolstring(L, -1, 0LL);
    v5 = lua_tolstring(L, 1, 0LL);
    luaL_error(L, "error loading module '%s' from file '%s':\n\t%s", v5, filename, v4);
  }
  lua_pushstring(L, filename);
  return 2;
};

// Line 495: range 0000000015308897-00000000153088FD
int __fastcall searcher_Lua(lua_State_0 *L)
{
  const char *v1; // rax
  const char *v2; // rax
  const char *v3; // rbp
  int v4; // eax

  v1 = luaL_checklstring(L, 1, 0LL);
  v2 = findfile(L, v1, "path", dirsep);
  if ( !v2 )
    return 1;
  v3 = v2;
  v4 = luaL_loadfilex(L, v2, 0LL);
  return checkload(L, v4 == 0, v3);
};

// Line 512: range 00000000153085D5-0000000015308679
int __fastcall loadfunc(lua_State_0 *L, const char *filename, const char *modname)
{
  const char *v3; // rbp
  char *v4; // rax
  char *v5; // r13
  const char *v6; // rax
  const char *v7; // rax
  int result; // eax
  const char *v9; // rax

  v3 = luaL_gsub(L, modname, ".", "_");
  v4 = strchr(v3, 45);
  if ( v4 )
  {
    v5 = v4;
    v6 = lua_pushlstring(L, v3, v4 - v3);
    v7 = lua_pushfstring(L, "luaopen_%s", v6);
    result = lookforfunc(L, filename, v7);
    if ( result != 2 )
      return result;
    v3 = v5 + 1;
  }
  v9 = lua_pushfstring(L, "luaopen_%s", v3);
  return lookforfunc(L, filename, v9);
};

// Line 530: range 0000000015308754-00000000153087B7
int __fastcall searcher_C(lua_State_0 *L)
{
  const char *v1; // r12
  const char *v2; // rax
  const char *v3; // rbp
  int v4; // eax

  v1 = luaL_checklstring(L, 1, 0LL);
  v2 = findfile(L, v1, "cpath", dirsep);
  if ( !v2 )
    return 1;
  v3 = v2;
  v4 = loadfunc(L, v2, v1);
  return checkload(L, v4 == 0, v3);
};

// Line 538: range 000000001530867A-0000000015308752
int __fastcall searcher_Croot(lua_State_0 *L)
{
  const char *v1; // rbp
  char *v2; // rax
  const char *v3; // rax
  const char *v4; // rax
  const char *v5; // r12
  int v6; // eax

  v1 = luaL_checklstring(L, 1, 0LL);
  v2 = strchr(v1, 46);
  if ( !v2 )
    return 0;
  lua_pushlstring(L, v1, v2 - v1);
  v3 = lua_tolstring(L, -1, 0LL);
  v4 = findfile(L, v3, "cpath", dirsep);
  v5 = v4;
  if ( !v4 )
    return 1;
  v6 = loadfunc(L, v4, v1);
  if ( v6 )
  {
    if ( v6 == 2 )
    {
      lua_pushfstring(L, "\n\tno module '%s' in file '%s'", v1, v5);
      return 1;
    }
    else
    {
      return checkload(L, 0, v5);
    }
  }
  else
  {
    lua_pushstring(L, v5);
    return 2;
  }
};

// Line 560: range 0000000015308066-00000000153080C3
int __fastcall searcher_preload(lua_State_0 *L)
{
  const char *v1; // rbp

  v1 = luaL_checklstring(L, 1, 0LL);
  lua_getfield(L, -1001000, "_PRELOAD");
  if ( !lua_getfield(L, -1, v1) )
    lua_pushfstring(L, "\n\tno field package.preload['%s']", v1);
  return 1;
};

// Line 569: range 0000000015307E25-0000000015307F42
void __fastcall findloader(lua_State_0 *L, const char *name)
{
  int i; // ebp
  const char *v3; // rax
  luaL_Buffer_0 msg; // [rsp+0h] [rbp-2038h] BYREF

  luaL_buffinit(L, &msg);
  if ( lua_getfield(L, -1001001, "searchers") != 5 )
    luaL_error(L, "'package.searchers' must be a table");
  for ( i = 1; ; ++i )
  {
    if ( !lua_rawgeti(L, 3, i) )
    {
      lua_settop(L, -2);
      luaL_pushresult(&msg);
      v3 = lua_tolstring(L, -1, 0LL);
      luaL_error(L, "module '%s' not found:%s", name, v3);
    }
    lua_pushstring(L, name);
    lua_callk(L, 1, 2, 0LL, 0LL);
    if ( lua_type(L, -2) == 6 )
      break;
    if ( lua_isstring(L, -2) )
    {
      lua_settop(L, -2);
      luaL_addvalue(&msg);
    }
    else
    {
      lua_settop(L, -3);
    }
  }
};

// Line 597: range 0000000015307F43-0000000015308064
int __fastcall ll_require(lua_State_0 *L)
{
  const char *v1; // rbp

  v1 = luaL_checklstring(L, 1, 0LL);
  lua_settop(L, 1);
  lua_getfield(L, -1001000, "_LOADED");
  lua_getfield(L, 2, v1);
  if ( !lua_toboolean(L, -1) )
  {
    lua_settop(L, -2);
    findloader(L, v1);
    lua_pushstring(L, v1);
    lua_rotate(L, -2, 1);
    lua_callk(L, 2, 1, 0LL, 0LL);
    if ( lua_type(L, -1) )
      lua_setfield(L, 2, v1);
    if ( !lua_getfield(L, 2, v1) )
    {
      lua_pushboolean(L, 1);
      lua_pushvalue(L, -1);
      lua_setfield(L, 2, v1);
    }
  }
  return 1;
};

// Line 733: range 00000000153087B9-000000001530882C
void __fastcall createsearcherstable(lua_State_0 *L)
{
  int i; // ebx
  int (*v2)(lua_State_0 *); // r12

  lua_createtable(L, 4, 0);
  for ( i = 0; ; lua_rawseti(L, -2, i) )
  {
    v2 = searchers_3638[i];
    if ( !v2 )
      break;
    lua_pushvalue(L, -2);
    lua_pushcclosure(L, v2, 1);
    ++i;
  }
  lua_setfield(L, -2, "searchers");
};

// Line 757: range 000000001530882D-0000000015308896
void __fastcall createclibstable(lua_State_0 *L)
{
  lua_createtable(L, 0, 0);
  lua_createtable(L, 0, 1);
  lua_pushcclosure(L, gctm, 0);
  lua_setfield(L, -2, "__gc");
  lua_setmetatable(L, -2);
  lua_rawsetp(L, -1001000, &CLIBS);
};

// Line 767: range 00000000153089CF-0000000015308AF2
int __fastcall luaopen_package(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  createclibstable(L);
  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 7);
  luaL_setfuncs(L, pk_funcs, 0);
  createsearcherstable(L);
  setpath(
    L,
    "path",
    &off_1B23A528[5],
    "/usr/local/share/lua/5.3/?.lua;/usr/local/share/lua/5.3/?/init.lua;/usr/local/lib/lua/5.3/?.lua;/usr/local/lib/lua/5"
    ".3/?/init.lua;./?.lua;./?/init.lua");
  setpath(L, "cpath", "LUA_CPATH", "/usr/local/lib/lua/5.3/?.so;/usr/local/lib/lua/5.3/loadall.so;./?.so");
  lua_pushstring(L, off_1B23A540);
  lua_setfield(L, -2, "config");
  luaL_getsubtable(L, -1001000, "_LOADED");
  lua_setfield(L, -2, "loaded");
  luaL_getsubtable(L, -1001000, "_PRELOAD");
  lua_setfield(L, -2, "preload");
  lua_rawgeti(L, -1001000, 2LL);
  lua_pushvalue(L, -2);
  luaL_setfuncs(L, ll_funcs, 1);
  lua_settop(L, -2);
  return 1;
};
