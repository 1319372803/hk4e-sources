// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lutf8lib.c

// Line 31: range 00000000153076A8-00000000153076C7
lua_Integer __fastcall u_posrelat(lua_Integer pos, size_t len)
{
  if ( pos >= 0 )
    return pos;
  if ( -pos > len )
    return 0LL;
  return pos + len + 1;
};

// Line 43: range 00000000153076C8-0000000015307753
const char *__fastcall utf8_decode(const char *o, int *val)
{
  unsigned int v2; // ecx
  int v3; // r9d
  int v4; // r8d

  v2 = *(unsigned __int8 *)o;
  if ( *o >= 0 )
  {
LABEL_9:
    if ( val )
      *val = v2;
    return o + 1;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    while ( (v2 & 0x40) != 0 )
    {
      if ( (o[++v3] & 0xC0) != 0x80 )
        return 0LL;
      v4 = o[v3] & 0x3F | (v4 << 6);
      LOBYTE(v2) = 2 * v2;
    }
    v2 = v4 | ((v2 & 0x7F) << (5 * v3));
    if ( v2 > 0x10FFFF || v3 > 3 )
    {
      return 0LL;
    }
    else
    {
      if ( limits_3509[v3] < v2 )
      {
        o += v3;
        goto LABEL_9;
      }
      return 0LL;
    }
  }
};

// Line 71: range 0000000015307868-0000000015307978
int __fastcall utflen(lua_State_0 *L)
{
  const char *v1; // rbp
  size_t v2; // rbx
  lua_Integer v3; // rax
  lua_Integer v4; // rbx
  size_t v5; // r12
  lua_Integer v6; // rax
  lua_Integer v7; // rax
  signed __int64 v8; // rbx
  signed __int64 v9; // r13
  int v10; // r12d
  const char *v11; // rax
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = len[0];
  v3 = luaL_optinteger(L, 2, 1LL);
  v4 = u_posrelat(v3, v2);
  v5 = len[0];
  v6 = luaL_optinteger(L, 3, -1LL);
  v7 = u_posrelat(v6, v5);
  if ( v4 <= 0 || (v8 = v4 - 1, (__int64)len[0] < v8) )
    luaL_argerror(L, 2, "initial position out of string");
  v9 = v7 - 1;
  if ( (__int64)len[0] <= v7 - 1 )
    luaL_argerror(L, 3, "final position out of string");
  v10 = 0;
  while ( v8 <= v9 )
  {
    v11 = utf8_decode(&v1[v8], 0LL);
    if ( !v11 )
    {
      lua_pushnil(L);
      lua_pushinteger(L, v8 + 1);
      return 2;
    }
    v8 = v11 - v1;
    ++v10;
  }
  lua_pushinteger(L, v10);
  return 1;
};

// Line 100: range 0000000015307B9C-0000000015307CF1
int __fastcall codepoint(lua_State_0 *L)
{
  const char *v1; // r13
  size_t v2; // rbx
  lua_Integer v3; // rax
  __int64 v4; // rbx
  size_t v5; // r12
  lua_Integer v6; // rax
  lua_Integer v7; // rax
  lua_Integer v8; // r12
  const char *v9; // r12
  const char *v10; // rbx
  int v11; // r13d
  int code; // [rsp+4h] [rbp-34h] BYREF
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = len[0];
  v3 = luaL_optinteger(L, 2, 1LL);
  v4 = u_posrelat(v3, v2);
  v5 = len[0];
  v6 = luaL_optinteger(L, 3, v4);
  v7 = u_posrelat(v6, v5);
  v8 = v7;
  if ( v4 <= 0 )
    luaL_argerror(L, 2, "out of range");
  if ( (__int64)len[0] < v7 )
    luaL_argerror(L, 3, "out of range");
  if ( v4 > v7 )
    return 0;
  if ( v7 - v4 > 2147483646 )
    luaL_error(L, "string slice too long");
  luaL_checkstack(L, v7 - v4 + 1, "string slice too long");
  v9 = &v1[v8];
  v10 = &v1[v4 - 1];
  v11 = 0;
  while ( v10 < v9 )
  {
    v10 = utf8_decode(v10, &code);
    if ( !v10 )
      luaL_error(L, "invalid UTF-8 code");
    lua_pushinteger(L, code);
    ++v11;
  }
  return v11;
};

// Line 128: range 0000000015307AE7-0000000015307B26
void __fastcall pushutfchar(lua_State_0 *L, int arg)
{
  unsigned __int64 v2; // rax

  v2 = luaL_checkinteger(L, arg);
  if ( v2 > 0x10FFFF )
    luaL_argerror(L, arg, "value out of range");
  lua_pushfstring(L, "%U", v2);
};

// Line 138: range 0000000015307B2D-0000000015307B9B
int __fastcall utfchar(lua_State_0 *L)
{
  int v1; // eax
  int v2; // r12d
  int i; // ebx
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2038h] BYREF

  v1 = lua_gettop(L);
  if ( v1 == 1 )
  {
    pushutfchar(L, 1);
  }
  else
  {
    v2 = v1;
    luaL_buffinit(L, &b);
    for ( i = 1; i <= v2; ++i )
    {
      pushutfchar(L, i);
      luaL_addvalue(&b);
    }
    luaL_pushresult(&b);
  }
  return 1;
};

// Line 160: range 0000000015307979-0000000015307AE2
int __fastcall byteoffset(lua_State_0 *L)
{
  const char *v1; // rbp
  lua_Integer v2; // r13
  lua_Integer v3; // rdx
  size_t v4; // rbx
  lua_Integer v5; // rax
  lua_Integer v6; // rax
  __int64 v7; // rbx
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = luaL_checkinteger(L, 2);
  if ( v2 < 0 )
    v3 = len[0] + 1;
  else
    v3 = 1LL;
  v4 = len[0];
  v5 = luaL_optinteger(L, 3, v3);
  v6 = u_posrelat(v5, v4);
  if ( v6 <= 0 || (v7 = v6 - 1, (__int64)len[0] < v6 - 1) )
    luaL_argerror(L, 3, "position out of range");
  if ( v2 )
  {
    if ( (v1[v7] & 0xC0) == 128 )
      luaL_error(L, "initial position is a continuation byte");
    if ( v2 < 0 )
    {
      while ( v2 < 0 && v7 > 0 )
      {
        do
          --v7;
        while ( v7 > 0 && (v1[v7] & 0xC0) == 128 );
        ++v2;
      }
    }
    else
    {
      --v2;
      while ( v2 > 0 && (__int64)len[0] > v7 )
      {
        do
          ++v7;
        while ( (v1[v7] & 0xC0) == 128 );
        --v2;
      }
    }
  }
  else
  {
    while ( v7 > 0 && (v1[v7] & 0xC0) == 128 )
      --v7;
  }
  if ( v2 )
    lua_pushnil(L);
  else
    lua_pushinteger(L, v7 + 1);
  return 1;
};

// Line 201: range 000000001530779A-0000000015307866
int __fastcall iter_aux(lua_State_0 *L)
{
  const char *v1; // rbx
  lua_Integer v2; // rax
  signed __int64 v3; // r12
  const char *v5; // rax
  int code; // [rsp+4h] [rbp-24h] BYREF
  size_t len[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = lua_tointegerx(L, 2, 0LL);
  v3 = v2 - 1;
  if ( v2 - 1 < 0 )
  {
    v3 = 0LL;
  }
  else if ( (__int64)len[0] > v3 )
  {
    while ( (v1[v2] & 0xC0) == 128 )
      ++v2;
    v3 = v2;
  }
  if ( (__int64)len[0] <= v3 )
    return 0;
  v5 = utf8_decode(&v1[v3], &code);
  if ( !v5 || (*v5 & 0xC0) == 128 )
    luaL_error(L, "invalid UTF-8 code");
  lua_pushinteger(L, v3 + 1);
  lua_pushinteger(L, code);
  return 2;
};

// Line 225: range 0000000015307754-0000000015307799
int __fastcall iter_codes(lua_State_0 *L)
{
  luaL_checklstring(L, 1, 0LL);
  lua_pushcclosure(L, iter_aux, 0);
  lua_pushvalue(L, 1);
  lua_pushinteger(L, 0LL);
  return 3;
};

// Line 250: range 0000000015307CF2-0000000015307D56
int __fastcall luaopen_utf8(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 6);
  luaL_setfuncs(L, funcs, 0);
  lua_pushlstring(L, "[", 0xEuLL);
  lua_setfield(L, -2, "charpattern");
  return 1;
};
