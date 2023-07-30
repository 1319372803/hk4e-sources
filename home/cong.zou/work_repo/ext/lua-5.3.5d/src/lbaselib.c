// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lbaselib.c

// Line 24: range 00000000152FF803-00000000152FF922
int __fastcall luaB_print(lua_State_0 *L)
{
  int v1; // r13d
  int i; // ebp
  const char *v3; // r12
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = lua_gettop(L);
  lua_getglobal(L, "tostring");
  for ( i = 1; i <= v1; ++i )
  {
    lua_pushvalue(L, -1);
    lua_pushvalue(L, i);
    lua_callk(L, 1, 1, 0LL, 0LL);
    v3 = lua_tolstring(L, -1, len);
    if ( !v3 )
      luaL_error(L, "'tostring' must return a string to 'print'");
    if ( i > 1 )
      fwrite("\t", 1uLL, 1uLL, stdout);
    fwrite(v3, 1uLL, len[0], stdout);
    lua_settop(L, -2);
  }
  fwrite("\n", 1uLL, 1uLL, stdout);
  fflush(stdout);
  return 0;
};

// Line 48: range 00000000152FF437-00000000152FF529
const char *__fastcall b_str2int(const char *s, int base, lua_Integer *pn)
{
  const char *v3; // rbx
  int v4; // r15d
  const unsigned __int16 **v5; // rax
  const unsigned __int16 *v6; // r13
  lua_Integer v7; // r14
  int v8; // eax
  __int64 v9; // rbp
  const char *result; // rax

  v3 = &s[strspn(s, asc_1B2381FB)];
  if ( *v3 == 45 )
  {
    ++v3;
    v4 = 1;
  }
  else
  {
    if ( *v3 == 43 )
      ++v3;
    v4 = 0;
  }
  v5 = __ctype_b_loc();
  v6 = *v5;
  if ( ((*v5)[*(unsigned __int8 *)v3] & 8) == 0 )
    return 0LL;
  v7 = 0LL;
  do
  {
    if ( (v6[*(unsigned __int8 *)v3] & 0x800) != 0 )
    {
      v8 = *v3 - 48;
    }
    else
    {
      v9 = *(unsigned __int8 *)v3;
      v8 = (*__ctype_toupper_loc())[v9] - 55;
    }
    if ( v8 >= base )
      return 0LL;
    v7 = v8 + base * v7;
    ++v3;
  }
  while ( (v6[*(unsigned __int8 *)v3] & 8) != 0 );
  result = &v3[strspn(v3, asc_1B2381FB)];
  if ( v4 )
    v7 = -v7;
  *pn = v7;
  return result;
};

// Line 69: range 00000000152FF52A-00000000152FF64E
int __fastcall luaB_tonumber(lua_State_0 *L)
{
  lua_Integer v1; // r12
  const char *v2; // rbp
  const char *v3; // rax
  const char *v5; // rax
  size_t v6; // rax
  size_t v7; // [rsp+0h] [rbp-28h] BYREF
  lua_Integer n[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( lua_type(L, 2) > 0 )
  {
    n[0] = 0LL;
    v1 = luaL_checkinteger(L, 2);
    luaL_checktype(L, 1, 4);
    v2 = lua_tolstring(L, 1, &v7);
    if ( (unsigned __int64)(v1 - 2) > 0x22 )
      luaL_argerror(L, 2, "base out of range");
    v3 = b_str2int(v2, v1, n);
    if ( &v2[v7] == v3 )
    {
      lua_pushinteger(L, n[0]);
      return 1;
    }
LABEL_4:
    lua_pushnil(L);
    return 1;
  }
  luaL_checkany(L, 1);
  if ( lua_type(L, 1) == 3 )
  {
    lua_settop(L, 1);
    return 1;
  }
  v5 = lua_tolstring(L, 1, (size_t *)n);
  if ( !v5 )
    goto LABEL_4;
  v6 = lua_stringtonumber(L, v5);
  if ( v6 != n[0] + 1 )
    goto LABEL_4;
  return 1;
};

// Line 102: range 00000000152FFD78-00000000152FFDE9
int __fastcall __noreturn luaB_error(lua_State_0 *L)
{
  int v1; // ebp

  v1 = luaL_optinteger(L, 2, 1LL);
  lua_settop(L, 1);
  if ( lua_type(L, 1) == 4 && v1 > 0 )
  {
    luaL_where(L, v1);
    lua_pushvalue(L, 1);
    lua_concat(L, 2);
  }
  lua_error(L);
};

// Line 114: range 00000000152FFD36-00000000152FFD76
int __fastcall luaB_getmetatable(lua_State_0 *L)
{
  luaL_checkany(L, 1);
  if ( lua_getmetatable(L, 1) )
    luaL_getmetafield(L, 1, "__metatable");
  else
    lua_pushnil(L);
  return 1;
};

// Line 125: range 00000000152FF653-00000000152FF6E6
int __fastcall luaB_setmetatable(lua_State_0 *L)
{
  int v1; // ebp

  v1 = lua_type(L, 2);
  luaL_checktype(L, 1, 5);
  if ( v1 != 5 && v1 != 0 )
    luaL_argerror(L, 2, "nil or table expected");
  if ( luaL_getmetafield(L, 1, "__metatable") )
    luaL_error(L, "cannot change a protected metatable");
  lua_settop(L, 2);
  lua_setmetatable(L, 1);
  return 1;
};

// Line 138: range 00000000152FF7C5-00000000152FF802
int __fastcall luaB_rawequal(lua_State_0 *L)
{
  int v1; // eax

  luaL_checkany(L, 1);
  luaL_checkany(L, 2);
  v1 = lua_rawequal(L, 1, 2);
  lua_pushboolean(L, v1);
  return 1;
};

// Line 146: range 00000000152FF77C-00000000152FF7BE
int __fastcall luaB_rawlen(lua_State_0 *L)
{
  size_t v1; // rax

  if ( (unsigned int)(lua_type(L, 1) - 4) > 1 )
    luaL_argerror(L, 1, "table or string expected");
  v1 = lua_rawlen(L, 1);
  lua_pushinteger(L, v1);
  return 1;
};

// Line 155: range 00000000152FF73B-00000000152FF77B
int __fastcall luaB_rawget(lua_State_0 *L)
{
  luaL_checktype(L, 1, 5);
  luaL_checkany(L, 2);
  lua_settop(L, 2);
  lua_rawget(L, 1);
  return 1;
};

// Line 163: range 00000000152FF6ED-00000000152FF73A
int __fastcall luaB_rawset(lua_State_0 *L)
{
  luaL_checktype(L, 1, 5);
  luaL_checkany(L, 2);
  luaL_checkany(L, 3);
  lua_settop(L, 3);
  lua_rawset(L, 1);
  return 1;
};

// Line 173: range 00000000152FFE6C-00000000152FFF1C
int __fastcall luaB_collectgarbage(lua_State_0 *L)
{
  int v1; // r12d
  int v2; // eax
  int v3; // eax
  int v4; // ebp
  int v5; // eax

  v1 = optsnum_3616[luaL_checkoption(L, 1, "collect", opts_3615)];
  v2 = luaL_optinteger(L, 2, 0LL);
  v3 = lua_gc(L, v1, v2);
  v4 = v3;
  if ( v1 == 5 || v1 == 9 )
  {
    lua_pushboolean(L, v3);
  }
  else if ( v1 == 3 )
  {
    v5 = lua_gc(L, 4, 0);
    lua_pushnumber(L, (double)v4 + (double)v5 * 0.0009765625, (double)v5 * 0.0009765625);
  }
  else
  {
    lua_pushinteger(L, v3);
  }
  return 1;
};

// Line 201: range 00000000152FF2C6-00000000152FF30E
int __fastcall luaB_type(lua_State_0 *L)
{
  int v1; // eax
  const char *v2; // rax

  v1 = lua_type(L, 1);
  if ( v1 == -1 )
    luaL_argerror(L, 1, "value expected");
  v2 = lua_typename(L, v1);
  lua_pushstring(L, v2);
  return 1;
};

// Line 210: range 00000000152FF923-00000000152FF9CB
int __fastcall pairsmeta(lua_State_0 *L, const char *method, int iszero, lua_CFunction iter)
{
  luaL_checkany(L, 1);
  if ( luaL_getmetafield(L, 1, method) )
  {
    lua_pushvalue(L, 1);
    lua_callk(L, 1, 3, 0LL, 0LL);
  }
  else
  {
    lua_pushcclosure(L, iter, 0);
    lua_pushvalue(L, 1);
    if ( iszero )
      lua_pushinteger(L, 0LL);
    else
      lua_pushnil(L);
  }
  return 3;
};

// Line 226: range 00000000152FFA06-00000000152FFA4B
int __fastcall luaB_next(lua_State_0 *L)
{
  luaL_checktype(L, 1, 5);
  lua_settop(L, 2);
  if ( lua_next(L, 1) )
    return 2;
  lua_pushnil(L);
  return 1;
};

// Line 238: range 00000000152FF9CC-00000000152FF9E8
int __fastcall luaB_pairs(lua_State_0 *L)
{
  return pairsmeta(L, "__pairs", 0, luaB_next);
};

// Line 246: range 00000000152FFCED-00000000152FFD34
int __fastcall ipairsaux(lua_State_0 *L)
{
  lua_Integer v1; // rbp

  v1 = luaL_checkinteger(L, 2) + 1;
  lua_pushinteger(L, v1);
  if ( lua_geti(L, 1, v1) )
    return 2;
  else
    return 1;
};

// Line 257: range 00000000152FF9E9-00000000152FFA05
int __fastcall luaB_ipairs(lua_State_0 *L)
{
  return pairsmeta(L, "__ipairs", 1, ipairsaux);
};

// Line 270: range 00000000152FFB15-00000000152FFB71
int __fastcall load_aux(lua_State_0 *L, int status, int envidx)
{
  if ( status )
  {
    lua_pushnil(L);
    lua_rotate(L, -2, 1);
    return 2;
  }
  else
  {
    if ( envidx )
    {
      lua_pushvalue(L, envidx);
      if ( !lua_setupvalue(L, -2, 1) )
        lua_settop(L, -2);
    }
    return 1;
  }
};

// Line 287: range 00000000152FFC69-00000000152FFCEB
int __fastcall luaB_loadfile(lua_State_0 *L)
{
  const char *v1; // rbp
  const char *v2; // r12
  int v3; // r13d
  int v4; // eax

  v1 = luaL_optlstring(L, 1, 0LL, 0LL);
  v2 = luaL_optlstring(L, 2, 0LL, 0LL);
  if ( lua_type(L, 3) == -1 )
    v3 = 0;
  else
    v3 = 3;
  v4 = luaL_loadfilex(L, v1, v2);
  return load_aux(L, v4, v3);
};

// Line 317: range 00000000152FFA4D-00000000152FFB0E
const char *__fastcall generic_reader(lua_State_0 *L, void *ud, size_t *size)
{
  luaL_checkstack(L, 2, "too many nested functions");
  lua_pushvalue(L, 1);
  lua_callk(L, 0, 1, 0LL, 0LL);
  if ( lua_type(L, -1) )
  {
    if ( !lua_isstring(L, -1) )
      luaL_error(L, "reader function must return a string");
    lua_copy(L, -1, 5);
    lua_settop(L, -2);
    return lua_tolstring(L, 5, size);
  }
  else
  {
    lua_settop(L, -2);
    *size = 0LL;
    return 0LL;
  }
};

// Line 334: range 00000000152FFB73-00000000152FFC67
int __fastcall luaB_load(lua_State_0 *L)
{
  const char *v1; // rbp
  const char *v2; // r13
  int v3; // r12d
  const char *v4; // rax
  int v5; // esi
  const char *v7; // rbp
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = lua_tolstring(L, 1, len);
  v2 = luaL_optlstring(L, 3, "bt", 0LL);
  if ( lua_type(L, 4) == -1 )
    v3 = 0;
  else
    v3 = 4;
  if ( v1 )
  {
    v4 = luaL_optlstring(L, 2, v1, 0LL);
    v5 = luaL_loadbufferx(L, v1, len[0], v4, v2);
  }
  else
  {
    v7 = luaL_optlstring(L, 2, "=(load)", 0LL);
    luaL_checktype(L, 1, 6);
    lua_settop(L, 5);
    v5 = lua_load(L, generic_reader, 0LL, v7, v2);
  }
  return load_aux(L, v5, v3);
};

// Line 356: range 00000000152FF1F3-00000000152FF203
int __fastcall dofilecont(lua_State_0 *L, int d1, lua_KContext d2)
{
  return lua_gettop(L) - 1;
};

// Line 362: range 00000000152FFDEB-00000000152FFE65
int __fastcall luaB_dofile(lua_State_0 *L)
{
  const char *v1; // rbp

  v1 = luaL_optlstring(L, 1, 0LL, 0LL);
  lua_settop(L, 1);
  if ( luaL_loadfilex(L, v1, 0LL) )
    lua_error(L);
  lua_callk(L, 0, -1, 0LL, dofilecont);
  return dofilecont(L, 0, 0LL);
};

// Line 372: range 00000000152FFF1E-00000000152FFF83
int __fastcall luaB_assert(lua_State_0 *L)
{
  if ( !lua_toboolean(L, 1) )
  {
    luaL_checkany(L, 1);
    lua_rotate(L, 1, -1);
    lua_settop(L, -2);
    lua_pushstring(L, "assertion failed!");
    lua_settop(L, 1);
    luaB_error(L);
  }
  return lua_gettop(L);
};

// Line 385: range 00000000152FF3A3-00000000152FF430
int __fastcall luaB_select(lua_State_0 *L)
{
  int v1; // ebx
  lua_Integer v2; // rax
  __int64 v3; // r12

  v1 = lua_gettop(L);
  if ( lua_type(L, 1) == 4 && *lua_tolstring(L, 1, 0LL) == 35 )
  {
    lua_pushinteger(L, v1 - 1);
    return 1;
  }
  else
  {
    v2 = luaL_checkinteger(L, 1);
    if ( v2 < 0 )
    {
      v3 = v2 + v1;
    }
    else
    {
      v3 = v1;
      if ( v1 >= v2 )
        v3 = v2;
    }
    if ( v3 <= 0 )
      luaL_argerror(L, 1, "index out of range");
    return v1 - v3;
  }
};

// Line 408: range 00000000152FF204-00000000152FF23F
int __fastcall finishpcall(lua_State_0 *L, int status, lua_KContext extra)
{
  if ( (unsigned int)status <= 1 )
    return lua_gettop(L) - extra;
  lua_pushboolean(L, 0);
  lua_pushvalue(L, -2);
  return 2;
};

// Line 419: range 00000000152FF315-00000000152FF37B
int __fastcall luaB_pcall(lua_State_0 *L)
{
  int v1; // eax
  int v2; // eax

  luaL_checkany(L, 1);
  lua_pushboolean(L, 1);
  lua_rotate(L, 1, 1);
  v1 = lua_gettop(L);
  v2 = lua_pcallk(L, v1 - 2, -1, 0, 0LL, finishpcall);
  return finishpcall(L, v2, 0LL);
};

// Line 434: range 00000000152FF241-00000000152FF2C5
int __fastcall luaB_xpcall(lua_State_0 *L)
{
  int v1; // ebp
  int v2; // eax

  v1 = lua_gettop(L);
  luaL_checktype(L, 2, 6);
  lua_pushboolean(L, 1);
  lua_pushvalue(L, 1);
  lua_rotate(L, 3, 2);
  v2 = lua_pcallk(L, v1 - 2, -1, 2, 2LL, finishpcall);
  return finishpcall(L, v2, 2LL);
};

// Line 446: range 00000000152FF37C-00000000152FF3A2
int __fastcall luaB_tostring(lua_State_0 *L)
{
  luaL_checkany(L, 1);
  luaL_tolstring(L, 1, 0LL);
  return 1;
};

// Line 486: range 00000000152FFF8A-00000000152FFFF3
int __fastcall luaopen_base(lua_State_0 *L)
{
  lua_rawgeti(L, -1001000, 2LL);
  luaL_setfuncs(L, base_funcs, 0);
  lua_pushvalue(L, -1);
  lua_setfield(L, -2, "_G");
  lua_pushstring(L, "Lua 5.3");
  lua_setfield(L, -2, "_VERSION");
  return 1;
};
