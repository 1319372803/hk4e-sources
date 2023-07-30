// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lbitlib.c

// Line 49: range 0000000015300332-0000000015300376
lua_Unsigned __fastcall andaux(lua_State_0 *L)
{
  int v1; // r12d
  unsigned int v2; // ebp
  int i; // ebx

  v1 = lua_gettop(L);
  v2 = -1;
  for ( i = 1; i <= v1; ++i )
    v2 &= luaL_checkinteger(L, i);
  return v2;
};

// Line 58: range 000000001530039A-00000000153003B4
int __fastcall b_and(lua_State_0 *L)
{
  lua_Integer v1; // rax

  v1 = andaux(L);
  lua_pushinteger(L, v1);
  return 1;
};

// Line 65: range 0000000015300377-0000000015300399
int __fastcall b_test(lua_State_0 *L)
{
  lua_Unsigned v1; // rax

  v1 = andaux(L);
  lua_pushboolean(L, v1 != 0);
  return 1;
};

// Line 72: range 0000000015300405-0000000015300454
int __fastcall b_or(lua_State_0 *L)
{
  int v1; // r13d
  unsigned int v2; // ebp
  int i; // ebx

  v1 = lua_gettop(L);
  v2 = 0;
  for ( i = 1; i <= v1; ++i )
    v2 |= luaL_checkinteger(L, i);
  lua_pushinteger(L, v2);
  return 1;
};

// Line 82: range 00000000153003B5-0000000015300404
int __fastcall b_xor(lua_State_0 *L)
{
  int v1; // r13d
  unsigned int v2; // ebp
  int i; // ebx

  v1 = lua_gettop(L);
  v2 = 0;
  for ( i = 1; i <= v1; ++i )
    v2 ^= luaL_checkinteger(L, i);
  lua_pushinteger(L, v2);
  return 1;
};

// Line 92: range 000000001530012E-000000001530014E
int __fastcall b_not(lua_State_0 *L)
{
  int v1; // eax

  v1 = luaL_checkinteger(L, 1);
  lua_pushinteger(L, (unsigned int)~v1);
  return 1;
};

// Line 99: range 00000000152FFFF4-0000000015300038
int __fastcall b_shift(lua_State_0 *L, lua_Unsigned r, lua_Integer i)
{
  unsigned __int64 v3; // rsi

  if ( i < 0 )
  {
    if ( i < -31 )
      v3 = 0LL;
    else
      v3 = (unsigned __int64)(unsigned int)r >> -(char)i;
  }
  else
  {
    if ( i > 31 )
      LODWORD(v3) = 0;
    else
      v3 = r << i;
    v3 = (unsigned int)v3;
  }
  lua_pushinteger(L, v3);
  return 1;
};

// Line 116: range 0000000015300075-00000000153000AC
int __fastcall b_lshift(lua_State_0 *L)
{
  lua_Integer v1; // rbp
  lua_Integer v2; // rax

  v1 = luaL_checkinteger(L, 2);
  v2 = luaL_checkinteger(L, 1);
  return b_shift(L, v2, v1);
};

// Line 121: range 000000001530003A-0000000015300074
int __fastcall b_rshift(lua_State_0 *L)
{
  lua_Integer v1; // rbp
  lua_Integer v2; // rax

  v1 = luaL_checkinteger(L, 2);
  v2 = luaL_checkinteger(L, 1);
  return b_shift(L, v2, -v1);
};

// Line 126: range 000000001530014F-00000000153001C3
int __fastcall b_arshift(lua_State_0 *L)
{
  unsigned __int64 v1; // rbp
  lua_Integer v2; // rax
  unsigned __int64 v4; // rsi

  v1 = luaL_checkinteger(L, 1);
  v2 = luaL_checkinteger(L, 2);
  if ( v2 < 0 || (v1 & 0x80000000) == 0LL )
    return b_shift(L, v1, -v2);
  if ( v2 > 31 )
    v4 = 0xFFFFFFFFLL;
  else
    v4 = (unsigned int)(v1 >> v2) | ~(0xFFFFFFFFuLL >> v2);
  lua_pushinteger(L, v4);
  return 1;
};

// Line 141: range 00000000153000AD-00000000153000F4
int __fastcall b_rot(lua_State_0 *L, lua_Integer d)
{
  unsigned __int64 v2; // rax

  LODWORD(v2) = luaL_checkinteger(L, 1);
  if ( (d & 0x1F) != 0 )
    v2 = ((unsigned __int64)(unsigned int)v2 << (d & 0x1F)) | ((unsigned __int64)(unsigned int)v2 >> (32 - ((unsigned __int8)d & 0x1Fu)));
  lua_pushinteger(L, (unsigned int)v2);
  return 1;
};

// Line 152: range 0000000015300113-000000001530012D
int __fastcall b_lrot(lua_State_0 *L)
{
  lua_Integer v1; // rax

  v1 = luaL_checkinteger(L, 2);
  return b_rot(L, v1);
};

// Line 157: range 00000000153000F5-0000000015300112
int __fastcall b_rrot(lua_State_0 *L)
{
  lua_Integer v1; // rax

  v1 = luaL_checkinteger(L, 2);
  return b_rot(L, -v1);
};

// Line 168: range 00000000153001C5-0000000015300254
int __fastcall fieldargs(lua_State_0 *L, int farg, int *width)
{
  lua_Integer v4; // rbx
  lua_Integer v5; // rax

  v4 = luaL_checkinteger(L, farg);
  v5 = luaL_optinteger(L, farg + 1, 1LL);
  if ( v4 < 0 )
    luaL_argerror(L, farg, "field cannot be negative");
  if ( v5 <= 0 )
    luaL_argerror(L, farg + 1, "width must be positive");
  if ( v4 + v5 > 32 )
    luaL_error(L, "trying to access non-existent bits");
  *width = v5;
  return v4;
};

// Line 180: range 00000000153002D8-0000000015300331
int __fastcall b_extract(lua_State_0 *L)
{
  unsigned __int64 v1; // rbx
  char v2; // al
  int w[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v1 = (unsigned int)luaL_checkinteger(L, 1);
  v2 = fieldargs(L, 2, w);
  lua_pushinteger(L, (v1 >> v2) & ~(0x1FFFFFFFELL << (LOBYTE(w[0]) - 1)));
  return 1;
};

// Line 190: range 000000001530025B-00000000153002D7
int __fastcall b_replace(lua_State_0 *L)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  char v3; // al
  int w[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v1 = (unsigned int)luaL_checkinteger(L, 1);
  v2 = (unsigned int)luaL_checkinteger(L, 2);
  v3 = fieldargs(L, 3, w);
  lua_pushinteger(
    L,
    ((~(0x1FFFFFFFELL << (LOBYTE(w[0]) - 1)) & v2) << v3) | v1 & ~(~(0x1FFFFFFFELL << (LOBYTE(w[0]) - 1)) << v3));
  return 1;
};

// Line 220: range 0000000015300455-0000000015300495
int __fastcall luaopen_bit32(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 12);
  luaL_setfuncs(L, bitlib, 0);
  return 1;
};
