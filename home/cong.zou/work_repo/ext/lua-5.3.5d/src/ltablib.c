// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/ltablib.c

// Line 36: range 0000000015306ABD-0000000015306AE7
int __fastcall checkfield(lua_State_0 *L, const char *key, int n)
{
  lua_pushstring(L, key);
  return lua_rawget(L, -n) != 0;
};

// Line 46: range 0000000015306AE8-0000000015306BA1
void __fastcall checktab(lua_State_0 *L, int arg, int what)
{
  char v3; // r12
  int v4; // r13d

  v3 = what;
  if ( lua_type(L, arg) != 5 )
  {
    if ( lua_getmetatable(L, arg) )
    {
      if ( (v3 & 1) == 0 )
      {
        v4 = 1;
        goto LABEL_5;
      }
      if ( checkfield(L, "__index", 2) )
      {
        v4 = 2;
LABEL_5:
        if ( (v3 & 2) == 0 || (++v4, checkfield(L, "__newindex", v4)) )
        {
          if ( (v3 & 4) == 0 || (++v4, checkfield(L, "__len", v4)) )
          {
            lua_settop(L, ~v4);
            return;
          }
        }
      }
    }
    luaL_checktype(L, arg, 5);
  }
};

// Line 79: range 00000000153073D8-00000000153074AB
int __fastcall tinsert(lua_State_0 *L)
{
  lua_Integer v1; // rbx
  int v2; // eax
  lua_Integer v3; // r13

  checktab(L, 1, 7);
  v1 = luaL_len(L, 1) + 1;
  v2 = lua_gettop(L);
  if ( v2 != 2 )
  {
    if ( v2 != 3 )
      luaL_error(L, "wrong number of arguments to 'insert'");
    v3 = luaL_checkinteger(L, 2);
    if ( v1 < v3 || v3 <= 0 )
      luaL_argerror(L, 2, "position out of bounds");
    while ( v1 > v3 )
    {
      lua_geti(L, 1, v1 - 1);
      lua_seti(L, 1, v1--);
    }
    v1 = v3;
  }
  lua_seti(L, 1, v1);
  return 0;
};

// Line 106: range 0000000015307239-0000000015307302
int __fastcall tremove(lua_State_0 *L)
{
  lua_Integer v1; // r13
  __int64 v2; // rax
  lua_Integer v3; // rbx

  checktab(L, 1, 7);
  v1 = luaL_len(L, 1);
  v2 = luaL_optinteger(L, 2, v1);
  v3 = v2;
  if ( v1 != v2 && (v2 <= 0 || v1 + 1 < v2) )
    luaL_argerror(L, 1, "position out of bounds");
  lua_geti(L, 1, v2);
  while ( v3 < v1 )
  {
    lua_geti(L, 1, v3 + 1);
    lua_seti(L, 1, v3++);
  }
  lua_pushnil(L);
  lua_seti(L, 1, v3);
  return 1;
};

// Line 128: range 0000000015307083-0000000015307237
int __fastcall tmove(lua_State_0 *L)
{
  lua_Integer v1; // rbp
  lua_Integer v2; // r13
  int v3; // r14d
  __int64 v4; // r12
  __int64 i; // r12
  lua_Integer e; // [rsp+8h] [rbp-40h]

  v1 = luaL_checkinteger(L, 2);
  e = luaL_checkinteger(L, 3);
  v2 = luaL_checkinteger(L, 4);
  if ( lua_type(L, 5) <= 0 )
    v3 = 1;
  else
    v3 = 5;
  checktab(L, 1, 1);
  checktab(L, v3, 2);
  if ( v1 <= e )
  {
    if ( v1 <= 0 && v1 + 0x7FFFFFFFFFFFFFFELL < e )
      luaL_argerror(L, 3, "too many elements to move");
    v4 = e - v1;
    if ( 0x7FFFFFFFFFFFFFFFLL - (e - v1) < v2 )
      luaL_argerror(L, 4, "destination wrap around");
    if ( v1 < v2 && e >= v2 && (v3 == 1 || lua_compare(L, 1, v3, 0)) )
    {
      while ( v4 >= 0 )
      {
        lua_geti(L, 1, v4 + v1);
        lua_seti(L, v3, v4 + v2);
        --v4;
      }
    }
    else
    {
      for ( i = 0LL; i < e - v1 + 1; ++i )
      {
        lua_geti(L, 1, i + v1);
        lua_seti(L, v3, i + v2);
      }
    }
  }
  lua_pushvalue(L, v3);
  return 1;
};

// Line 160: range 0000000015307525-0000000015307584
void __fastcall addfield(lua_State_0 *L, luaL_Buffer_0 *b, lua_Integer i)
{
  int v4; // eax
  const char *v5; // rax

  lua_geti(L, 1, i);
  if ( !lua_isstring(L, -1) )
  {
    v4 = lua_type(L, -1);
    v5 = lua_typename(L, v4);
    luaL_error(L, "invalid value (%s) at index %d in table for 'concat'", v5, i);
  }
  luaL_addvalue(b);
};

// Line 169: range 000000001530758B-0000000015307665
int __fastcall tconcat(lua_State_0 *L)
{
  lua_Integer v1; // r12
  const char *v2; // r13
  lua_Integer v3; // rbx
  lua_Integer v4; // r12
  size_t lsep; // [rsp+8h] [rbp-2050h] BYREF
  luaL_Buffer_0 b; // [rsp+10h] [rbp-2048h] BYREF

  checktab(L, 1, 5);
  v1 = luaL_len(L, 1);
  v2 = luaL_optlstring(L, 2, &off_1B23A528[4], &lsep);
  v3 = luaL_optinteger(L, 3, 1LL);
  v4 = luaL_optinteger(L, 4, v1);
  luaL_buffinit(L, &b);
  while ( v3 < v4 )
  {
    addfield(L, &b, v3);
    luaL_addlstring(&b, v2, lsep);
    ++v3;
  }
  if ( v3 == v4 )
    addfield(L, &b, v3);
  luaL_pushresult(&b);
  return 1;
};

// Line 194: range 00000000153074B2-0000000015307524
int __fastcall pack(lua_State_0 *L)
{
  int v1; // r12d
  int i; // ebx

  v1 = lua_gettop(L);
  lua_createtable(L, v1, 1);
  lua_rotate(L, 1, 1);
  for ( i = v1; i > 0; --i )
    lua_seti(L, 1, i);
  lua_pushinteger(L, v1);
  lua_setfield(L, 1, "n");
  return 1;
};

// Line 207: range 0000000015307303-00000000153073D6
int __fastcall unpack(lua_State_0 *L)
{
  lua_Integer v1; // rbx
  lua_Integer v2; // r12
  int v3; // esi
  int v4; // r13d

  v1 = luaL_optinteger(L, 2, 1LL);
  if ( lua_type(L, 3) <= 0 )
    v2 = luaL_len(L, 1);
  else
    v2 = luaL_checkinteger(L, 3);
  if ( v2 < v1 )
    return 0;
  v3 = v2 - v1;
  if ( (unsigned __int64)(v2 - v1) > 0x7FFFFFFE || (v4 = v3 + 1, !lua_checkstack(L, v3 + 1)) )
    luaL_error(L, "too many results to unpack");
  while ( v1 < v2 )
    lua_geti(L, 1, v1++);
  lua_geti(L, 1, v2);
  return v4;
};

// Line 258: range 0000000015306D5F-0000000015306D9F
unsigned int __cdecl l_randomizePivot()
{
  unsigned int v0; // edx
  unsigned int i; // eax
  clock_t v3; // [rsp+0h] [rbp-18h]
  time_t t; // [rsp+8h] [rbp-10h]

  v3 = clock();
  t = time(0LL);
  v0 = 0;
  for ( i = 0; i <= 3; ++i )
    v0 += *((_DWORD *)&v3 + i);
  return v0;
};

// Line 277: range 0000000015306C3B-0000000015306C67
void __fastcall set2(lua_State_0 *L, IdxT i, IdxT j)
{
  lua_seti(L, 1, i);
  lua_seti(L, 1, j);
};

// Line 287: range 0000000015306BA6-0000000015306C39
int __fastcall sort_comp(lua_State_0 *L, int a, int b)
{
  int v4; // ebp

  if ( !lua_type(L, 2) )
    return lua_compare(L, a, b, 1);
  lua_pushvalue(L, 2);
  lua_pushvalue(L, a - 1);
  lua_pushvalue(L, b - 2);
  lua_callk(L, 2, 1, 0LL, 0LL);
  v4 = lua_toboolean(L, -1);
  lua_settop(L, -2);
  return v4;
};

// Line 310: range 0000000015306C68-0000000015306D5E
IdxT __fastcall partition(lua_State_0 *L, IdxT lo, IdxT up)
{
  IdxT v4; // r13d
  IdxT i; // ebx

  v4 = up - 1;
  for ( i = up - 1; ; set2(L, lo, i) )
  {
    while ( 1 )
    {
      lua_geti(L, 1, ++lo);
      if ( !sort_comp(L, -1, -2) )
        break;
      if ( v4 == lo )
        luaL_error(L, "invalid order function for sorting");
      lua_settop(L, -2);
    }
    while ( 1 )
    {
      lua_geti(L, 1, --i);
      if ( !sort_comp(L, -3, -1) )
        break;
      if ( lo > i )
        luaL_error(L, "invalid order function for sorting");
      lua_settop(L, -2);
    }
    if ( lo > i )
      break;
  }
  lua_settop(L, -2);
  set2(L, v4, lo);
  return lo;
};

// Line 346: range 0000000015306AA6-0000000015306ABC
IdxT __fastcall choosePivot(IdxT lo, IdxT up, unsigned int rnd)
{
  return rnd % (2 * ((up - lo) >> 2)) + ((up - lo) >> 2) + lo;
};

// Line 358: range 0000000015306DA0-0000000015306FE6
void __fastcall auxsort(lua_State_0 *L, IdxT lo, IdxT up, unsigned int rnd)
{
  IdxT v6; // r13d
  IdxT v7; // eax
  IdxT v8; // r13d
  IdxT v9; // r14d
  IdxT v10; // r15d
  IdxT v11; // r14d

  while ( lo < up )
  {
    lua_geti(L, 1, lo);
    lua_geti(L, 1, up);
    if ( sort_comp(L, -1, -2) )
      set2(L, lo, up);
    else
      lua_settop(L, -3);
    v11 = up - lo;
    if ( up - lo == 1 )
      break;
    v6 = v11 > 0x63 && rnd ? choosePivot(lo, up, rnd) : (lo + up) >> 1;
    lua_geti(L, 1, v6);
    lua_geti(L, 1, lo);
    if ( sort_comp(L, -2, -1) )
    {
      set2(L, v6, lo);
    }
    else
    {
      lua_settop(L, -2);
      lua_geti(L, 1, up);
      if ( sort_comp(L, -1, -2) )
        set2(L, v6, up);
      else
        lua_settop(L, -3);
    }
    if ( v11 == 2 )
      break;
    lua_geti(L, 1, v6);
    lua_pushvalue(L, -1);
    lua_geti(L, 1, up - 1);
    set2(L, v6, up - 1);
    v7 = partition(L, lo, up);
    v8 = v7;
    v9 = v7 - lo;
    v10 = up - v7;
    if ( v7 - lo >= up - v7 )
    {
      auxsort(L, v7 + 1, up, rnd);
      up = v8 - 1;
      v9 = v10;
    }
    else
    {
      auxsort(L, lo, v7 - 1, rnd);
      lo = v8 + 1;
    }
    if ( (up - lo) >> 7 > v9 )
      rnd = l_randomizePivot();
  }
};

// Line 411: range 0000000015306FE7-0000000015307081
int __fastcall sort(lua_State_0 *L)
{
  lua_Integer v1; // rax
  IdxT v2; // ebp

  checktab(L, 1, 7);
  v1 = luaL_len(L, 1);
  if ( v1 > 1 )
  {
    v2 = v1;
    if ( v1 > 2147483646 )
      luaL_argerror(L, 1, "array too big");
    if ( lua_type(L, 2) > 0 )
      luaL_checktype(L, 2, 6);
    lua_settop(L, 2);
    auxsort(L, 1u, v2, 0);
  }
  return 0;
};

// Line 441: range 0000000015307667-00000000153076A7
int __fastcall luaopen_table(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 7);
  luaL_setfuncs(L, tab_funcs, 0);
  return 1;
};
