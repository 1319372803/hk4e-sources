// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/ldblib.c

// Line 35: range 0000000015300AE9-0000000015300B0A
void __fastcall checkstack(lua_State_0 *L, lua_State_0 *L1, int n)
{
  if ( L != L1 && !lua_checkstack(L1, n) )
    luaL_error(L, "stack overflow");
};

// Line 41: range 000000001530089F-00000000153008B6
int __fastcall db_getregistry(lua_State_0 *L)
{
  lua_pushvalue(L, -1001000);
  return 1;
};

// Line 47: range 0000000015301041-000000001530106F
int __fastcall db_getmetatable(lua_State_0 *L)
{
  luaL_checkany(L, 1);
  if ( !lua_getmetatable(L, 1) )
    lua_pushnil(L);
  return 1;
};

// Line 56: range 0000000015300A97-0000000015300AE2
int __fastcall db_setmetatable(lua_State_0 *L)
{
  int v1; // eax

  v1 = lua_type(L, 2);
  if ( v1 != 5 && v1 != 0 )
    luaL_argerror(L, 2, "nil or table expected");
  lua_settop(L, 2);
  lua_setmetatable(L, 1);
  return 1;
};

// Line 66: range 0000000015301568-0000000015301597
int __fastcall db_getuservalue(lua_State_0 *L)
{
  if ( lua_type(L, 1) == 7 )
    lua_getuservalue(L, 1);
  else
    lua_pushnil(L);
  return 1;
};

// Line 75: range 0000000015300F34-0000000015300F74
int __fastcall db_setuservalue(lua_State_0 *L)
{
  luaL_checktype(L, 1, 7);
  luaL_checkany(L, 2);
  lua_settop(L, 2);
  lua_setuservalue(L, 1);
  return 1;
};

// Line 90: range 00000000153008B7-00000000153008F7
lua_State_0 *__fastcall getthread(lua_State_0 *L, int *arg)
{
  if ( lua_type(L, 1) == 8 )
  {
    *arg = 1;
    return lua_tothread(L, 1);
  }
  else
  {
    *arg = 0;
    return L;
  }
};

// Line 107: range 0000000015300C0D-0000000015300C37
void __fastcall settabss(lua_State_0 *L, const char *k, const char *v)
{
  lua_pushstring(L, v);
  lua_setfield(L, -2, k);
};

// Line 112: range 0000000015300C81-0000000015300CAB
void __fastcall settabsi(lua_State_0 *L, const char *k, int v)
{
  lua_pushinteger(L, v);
  lua_setfield(L, -2, k);
};

// Line 117: range 00000000153011AB-00000000153011D4
void __fastcall settabsb(lua_State_0 *L, const char *k, int v)
{
  lua_pushboolean(L, v);
  lua_setfield(L, -2, k);
};

// Line 130: range 0000000015300C38-0000000015300C7F
void __fastcall treatstackoption(lua_State_0 *L, lua_State_0 *L1, const char *fname)
{
  if ( L == L1 )
    lua_rotate(L, -2, 1);
  else
    lua_xmove(L1, L, 1);
  lua_setfield(L, -2, fname);
};

// Line 145: range 00000000153011D5-0000000015301473
int __fastcall db_getinfo(lua_State_0 *L)
{
  lua_State_0 *v1; // r12
  const char *v2; // rbp
  int v3; // eax
  int arg; // [rsp+Ch] [rbp-9Ch] BYREF
  lua_Debug_0 ar; // [rsp+10h] [rbp-98h] BYREF

  v1 = getthread(L, &arg);
  v2 = luaL_optlstring(L, arg + 2, "flnStu", 0LL);
  checkstack(L, v1, 3);
  if ( lua_type(L, arg + 1) == 6 )
  {
    v2 = lua_pushfstring(L, off_1B2388A6, v2);
    lua_pushvalue(L, arg + 1);
    lua_xmove(L, v1, 1);
  }
  else
  {
    v3 = luaL_checkinteger(L, arg + 1);
    if ( !lua_getstack(v1, v3, &ar) )
    {
      lua_pushnil(L);
      return 1;
    }
  }
  if ( !lua_getinfo(v1, v2, &ar) )
    luaL_argerror(L, arg + 2, "invalid option");
  lua_createtable(L, 0, 0);
  if ( strchr(v2, 83) )
  {
    settabss(L, "source", ar.source);
    settabss(L, "short_src", ar.short_src);
    settabsi(L, "linedefined", ar.linedefined);
    settabsi(L, "lastlinedefined", ar.lastlinedefined);
    settabss(L, "what", ar.what);
  }
  if ( strchr(v2, 108) )
    settabsi(L, "currentline", ar.currentline);
  if ( strchr(v2, 117) )
  {
    settabsi(L, "nups", ar.nups);
    settabsi(L, "nparams", ar.nparams);
    settabsb(L, "isvararg", ar.isvararg);
  }
  if ( strchr(v2, 110) )
  {
    settabss(L, "name", ar.name);
    settabss(L, "namewhat", ar.namewhat);
  }
  if ( strchr(v2, 116) )
    settabsb(L, "istailcall", ar.istailcall);
  if ( strchr(v2, 76) )
    treatstackoption(L, v1, "activelines");
  if ( strchr(v2, 102) )
    treatstackoption(L, v1, "func");
  return 1;
};

// Line 193: range 0000000015301071-00000000153011A9
int __fastcall db_getlocal(lua_State_0 *L)
{
  lua_State_0 *v1; // rbp
  int v2; // r12d
  int v3; // eax
  const char *v4; // r12
  const char *v6; // rax
  lua_Debug_0 ar; // [rsp+0h] [rbp-A8h] BYREF
  int arg[7]; // [rsp+8Ch] [rbp-1Ch] BYREF

  v1 = getthread(L, arg);
  v2 = luaL_checkinteger(L, arg[0] + 2);
  if ( lua_type(L, arg[0] + 1) == 6 )
  {
    lua_pushvalue(L, arg[0] + 1);
    v6 = lua_getlocal(L, 0LL, v2);
    lua_pushstring(L, v6);
    return 1;
  }
  else
  {
    v3 = luaL_checkinteger(L, arg[0] + 1);
    if ( !lua_getstack(v1, v3, &ar) )
      luaL_argerror(L, arg[0] + 1, "level out of range");
    checkstack(L, v1, 1);
    v4 = lua_getlocal(v1, &ar, v2);
    if ( v4 )
    {
      lua_xmove(v1, L, 1);
      lua_pushstring(L, v4);
      lua_rotate(L, -2, 1);
      return 2;
    }
    else
    {
      lua_pushnil(L);
      return 1;
    }
  }
};

// Line 224: range 0000000015300B11-0000000015300C0B
int __fastcall db_setlocal(lua_State_0 *L)
{
  lua_State_0 *v1; // rbp
  int v2; // r12d
  int v3; // r13d
  const char *v4; // r12
  lua_Debug_0 ar; // [rsp+0h] [rbp-B8h] BYREF
  int arg[11]; // [rsp+8Ch] [rbp-2Ch] BYREF

  v1 = getthread(L, arg);
  v2 = luaL_checkinteger(L, arg[0] + 1);
  v3 = luaL_checkinteger(L, arg[0] + 2);
  if ( !lua_getstack(v1, v2, &ar) )
    luaL_argerror(L, arg[0] + 1, "level out of range");
  luaL_checkany(L, arg[0] + 3);
  lua_settop(L, arg[0] + 3);
  checkstack(L, v1, 1);
  lua_xmove(L, v1, 1);
  v4 = lua_setlocal(v1, &ar, v3);
  if ( !v4 )
    lua_settop(v1, -2);
  lua_pushstring(L, v4);
  return 1;
};

// Line 248: range 0000000015300988-0000000015300A07
int __fastcall auxupvalue(lua_State_0 *L, int get)
{
  int v3; // r12d
  const char *v4; // rsi

  v3 = luaL_checkinteger(L, 2);
  luaL_checktype(L, 1, 6);
  if ( get )
    v4 = lua_getupvalue(L, 1, v3);
  else
    v4 = lua_setupvalue(L, 1, v3);
  if ( !v4 )
    return 0;
  lua_pushstring(L, v4);
  lua_rotate(L, ~get, 1);
  return get + 1;
};

// Line 260: range 0000000015300A26-0000000015300A38
int __fastcall db_getupvalue(lua_State_0 *L)
{
  return auxupvalue(L, 1);
};

// Line 265: range 0000000015300A09-0000000015300A25
int __fastcall db_setupvalue(lua_State_0 *L)
{
  luaL_checkany(L, 3);
  return auxupvalue(L, 0);
};

// Line 275: range 0000000015300A39-0000000015300A90
int __fastcall checkupval(lua_State_0 *L, int argf, int argnup)
{
  int v4; // ebp

  v4 = luaL_checkinteger(L, argnup);
  luaL_checktype(L, argf, 6);
  if ( !lua_getupvalue(L, argf, v4) )
    luaL_argerror(L, argnup, "invalid upvalue index");
  return v4;
};

// Line 284: range 0000000015300F75-0000000015300FA8
int __fastcall db_upvalueid(lua_State_0 *L)
{
  int v1; // eax
  void *v2; // rax

  v1 = checkupval(L, 1, 2);
  v2 = lua_upvalueid(L, 1, v1);
  lua_pushlightuserdata(L, v2);
  return 1;
};

// Line 291: range 0000000015300FA9-000000001530103A
int __fastcall db_upvaluejoin(lua_State_0 *L)
{
  int v1; // ebp
  int v2; // r12d

  v1 = checkupval(L, 1, 2);
  v2 = checkupval(L, 3, 4);
  if ( lua_iscfunction(L, 1) )
    luaL_argerror(L, 1, "Lua function expected");
  if ( lua_iscfunction(L, 3) )
    luaL_argerror(L, 3, "Lua function expected");
  lua_upvaluejoin(L, 1, v1, 3, v2);
  return 0;
};

// Line 305: range 0000000015300CAC-0000000015300D35
void __fastcall hookf(lua_State_0 *L, lua_Debug_0 *ar)
{
  int currentline; // esi

  lua_rawgetp(L, -1001000, &HOOKKEY);
  lua_pushthread(L);
  if ( lua_rawget(L, -2) == 6 )
  {
    lua_pushstring(L, hooknames_3589[ar->event]);
    currentline = ar->currentline;
    if ( currentline < 0 )
      lua_pushnil(L);
    else
      lua_pushinteger(L, currentline);
    lua_callk(L, 2, 0, 0LL, 0LL);
  }
};

// Line 324: range 0000000015300D37-0000000015300D93
int __fastcall makemask(const char *smask, int count)
{
  int v2; // ebp

  v2 = strchr(smask, 99) != 0LL;
  if ( strchr(smask, 114) )
    v2 |= 2u;
  if ( strchr(smask, 108) )
    v2 |= 4u;
  if ( count > 0 )
    return v2 | 8;
  return v2;
};

// Line 337: range 0000000015300865-000000001530089E
char *__fastcall unmakemask(int mask, char *smask)
{
  char *result; // rax
  int v3; // edx

  result = smask;
  v3 = mask & 1;
  if ( (mask & 1) != 0 )
  {
    *smask = 99;
    v3 = 1;
  }
  if ( (mask & 2) != 0 )
    smask[v3++] = 114;
  if ( (mask & 4) != 0 )
    smask[v3++] = 108;
  smask[v3] = 0;
  return result;
};

// Line 347: range 0000000015300D95-0000000015300F2F
int __fastcall db_sethook(lua_State_0 *L)
{
  lua_State_0 *v1; // rbp
  const char *v2; // r12
  int v3; // r13d
  int v4; // r12d
  void (*v5)(lua_State_0 *, lua_Debug_0 *); // r14
  int arg[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v1 = getthread(L, arg);
  if ( lua_type(L, arg[0] + 1) <= 0 )
  {
    lua_settop(L, arg[0] + 1);
    v5 = 0LL;
    v3 = 0;
    v4 = 0;
  }
  else
  {
    v2 = luaL_checklstring(L, arg[0] + 2, 0LL);
    luaL_checktype(L, arg[0] + 1, 6);
    v3 = luaL_optinteger(L, arg[0] + 3, 0LL);
    v4 = makemask(v2, v3);
    v5 = hookf;
  }
  if ( !lua_rawgetp(L, -1001000, &HOOKKEY) )
  {
    lua_createtable(L, 0, 2);
    lua_pushvalue(L, -1);
    lua_rawsetp(L, -1001000, &HOOKKEY);
    lua_pushstring(L, "k");
    lua_setfield(L, -2, "__mode");
    lua_pushvalue(L, -1);
    lua_setmetatable(L, -2);
  }
  checkstack(L, v1, 1);
  lua_pushthread(v1);
  lua_xmove(v1, L, 1);
  lua_pushvalue(L, arg[0] + 1);
  lua_rawset(L, -3);
  lua_sethook(v1, v5, v4, v3);
  return 0;
};

// Line 379: range 0000000015301475-0000000015301563
int __fastcall db_gethook(lua_State_0 *L)
{
  lua_State_0 *v1; // rbp
  int v2; // r12d
  void (__fastcall *v3)(lua_State_0 *, lua_Debug_0 *); // rax
  char *v4; // rax
  int v5; // eax
  char buff[5]; // [rsp+7h] [rbp-21h] BYREF
  int arg[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v1 = getthread(L, arg);
  v2 = lua_gethookmask(v1);
  v3 = lua_gethook(v1);
  if ( v3 )
  {
    if ( v3 == hookf )
    {
      lua_rawgetp(L, -1001000, &HOOKKEY);
      checkstack(L, v1, 1);
      lua_pushthread(v1);
      lua_xmove(v1, L, 1);
      lua_rawget(L, -2);
      lua_rotate(L, -2, -1);
      lua_settop(L, -2);
    }
    else
    {
      lua_pushstring(L, "external hook");
    }
  }
  else
  {
    lua_pushnil(L);
  }
  v4 = unmakemask(v2, buff);
  lua_pushstring(L, v4);
  v5 = lua_gethookcount(v1);
  lua_pushinteger(L, v5);
  return 3;
};

// Line 402: range 0000000015301599-00000000153016B5
int __fastcall db_debug(lua_State_0 *L)
{
  const char *v1; // rax
  char buffer[250]; // [rsp+0h] [rbp-108h] BYREF

  while ( 1 )
  {
    fwrite("lua_debug> ", 1uLL, 0xBuLL, stderr);
    fflush(stderr);
    if ( !fgets(buffer, 250, stdin) || !strcmp(buffer, "cont\n") )
      break;
    if ( luaL_loadbufferx(L, buffer, strlen(buffer), "=(debug command)", 0LL) || lua_pcallk(L, 0, 0, 0, 0LL, 0LL) )
    {
      v1 = lua_tolstring(L, -1, 0LL);
      fprintf(stderr, "%s\n", v1);
      fflush(stderr);
    }
    lua_settop(L, 0);
  }
  return 0;
};

// Line 417: range 00000000153008F9-0000000015300986
int __fastcall db_traceback(lua_State_0 *L)
{
  lua_State_0 *v1; // r12
  const char *v2; // rbp
  int v3; // eax
  int arg[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v1 = getthread(L, arg);
  v2 = lua_tolstring(L, arg[0] + 1, 0LL);
  if ( v2 || lua_type(L, arg[0] + 1) <= 0 )
  {
    v3 = luaL_optinteger(L, arg[0] + 2, L == v1);
    luaL_traceback(L, v1, v2, v3);
  }
  else
  {
    lua_pushvalue(L, arg[0] + 1);
  }
  return 1;
};

// Line 452: range 00000000153016B6-00000000153016F6
int __fastcall luaopen_debug(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 16);
  luaL_setfuncs(L, dblib, 0);
  return 1;
};
