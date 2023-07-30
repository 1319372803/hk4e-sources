// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lmathlib.c

// Line 39: range 000000001530318E-00000000153031EB
int __fastcall math_abs(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  lua_Integer v2; // rax
  lua_Integer v3; // rsi
  double v5; // xmm0_8

  if ( lua_isinteger(L, 1) )
  {
    v2 = lua_tointegerx(L, 1, 0LL);
    v3 = v2;
    if ( v2 < 0 )
      v3 = -v2;
    lua_pushinteger(L, v3);
  }
  else
  {
    v5 = luaL_checknumber(L, 1);
    lua_pushnumber(L, fabs(v5), v1);
  }
  return 1;
};

// Line 50: range 0000000015302B81-0000000015302BA2
int __fastcall math_sin(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = sin(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 55: range 00000000153032E1-0000000015303302
int __fastcall math_cos(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = cos(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 60: range 0000000015302B3D-0000000015302B5E
int __fastcall math_tan(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = tan(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 65: range 0000000015303352-0000000015303373
int __fastcall math_asin(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = asin(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 70: range 0000000015303374-0000000015303395
int __fastcall math_acos(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = acos(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 75: range 0000000015303303-0000000015303351
int __fastcall math_atan(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm1_8
  double v3; // xmm0_8
  double y; // [rsp+8h] [rbp-10h]

  y = luaL_checknumber(L, 1);
  v2 = luaL_optnumber(L, 2, 1.0, v1);
  v3 = atan2(y, v2);
  lua_pushnumber(L, v3, v2);
  return 1;
};

// Line 83: range 0000000015303143-000000001530318C
int __fastcall math_toint(lua_State_0 *L)
{
  lua_Integer v1; // rax
  int valid[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v1 = lua_tointegerx(L, 1, valid);
  if ( valid[0] )
  {
    lua_pushinteger(L, v1);
  }
  else
  {
    luaL_checkany(L, 1);
    lua_pushnil(L);
  }
  return 1;
};

// Line 96: range 0000000015302912-0000000015302942
void __fastcall pushnumint(lua_State_0 *L, lua_Number a2, lua_Number d)
{
  if ( a2 >= -9.223372036854776e18 && (d = 9.223372036854776e18, a2 < 9.223372036854776e18) )
    lua_pushinteger(L, (unsigned int)(int)a2);
  else
    lua_pushnumber(L, a2, d);
};

// Line 105: range 0000000015302ECC-0000000015302F61
int __fastcall math_floor(lua_State_0 *L)
{
  __m128d v1; // xmm0
  unsigned __int64 v2; // xmm2_8
  double v3; // xmm1_8
  __m128d v4; // xmm1

  if ( lua_isinteger(L, 1) )
  {
    lua_settop(L, 1);
  }
  else
  {
    v1.m128d_f64[0] = luaL_checknumber(L, 1);
    v2 = *(_QWORD *)&v1.m128d_f64[0];
    v3 = fabs(v1.m128d_f64[0]);
    if ( v3 < 4.503599627370496e15 )
    {
      v4 = 0LL;
      v4.m128d_f64[0] = (double)(int)v1.m128d_f64[0];
      v3 = v4.m128d_f64[0] - COERCE_DOUBLE(*(_OWORD *)&_mm_cmpgt_sd(v4, v1) & 0x3FF0000000000000LL);
      v2 = *(_QWORD *)&v3 | *(_QWORD *)&v1.m128d_f64[0] & 0x8000000000000000LL;
    }
    pushnumint(L, *(lua_Number *)&v2, v3);
  }
  return 1;
};

// Line 116: range 0000000015302CEA-0000000015302D77
int __fastcall math_ceil(lua_State_0 *L)
{
  __m128d v1; // xmm0
  unsigned __int64 v2; // xmm1_8
  __m128d v3; // xmm2

  if ( lua_isinteger(L, 1) )
  {
    lua_settop(L, 1);
  }
  else
  {
    v1.m128d_f64[0] = luaL_checknumber(L, 1);
    v2 = *(_QWORD *)&v1.m128d_f64[0];
    if ( fabs(v1.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v3.m128d_f64[0] = (double)(int)v1.m128d_f64[0];
      v2 = COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_OWORD *)&_mm_cmpgt_sd(v1, v3) & 0x3FF0000000000000LL) + v3.m128d_f64[0]) | *(_QWORD *)&v1.m128d_f64[0] & 0x8000000000000000LL;
    }
    pushnumint(L, *(lua_Number *)&v2, *(lua_Number *)&v2);
  }
  return 1;
};

// Line 127: range 00000000153031ED-00000000153032BD
int __fastcall math_fmod(lua_State_0 *L)
{
  double v1; // xmm0_8
  double v2; // xmm0_8
  lua_Integer v4; // rbp
  lua_Integer v5; // rax
  double v6; // [rsp+8h] [rbp-20h]

  if ( lua_isinteger(L, 1) && lua_isinteger(L, 2) )
  {
    v4 = lua_tointegerx(L, 2, 0LL);
    if ( v4 == -1 || v4 == 0 )
    {
      if ( !v4 )
        luaL_argerror(L, 2, "zero");
      lua_pushinteger(L, 0LL);
    }
    else
    {
      v5 = lua_tointegerx(L, 1, 0LL);
      lua_pushinteger(L, v5 % v4);
    }
  }
  else
  {
    v6 = luaL_checknumber(L, 2);
    v1 = luaL_checknumber(L, 1);
    v2 = fmod(v1, v6);
    lua_pushnumber(L, v2, v6);
  }
  return 1;
};

// Line 149: range 0000000015302D78-0000000015302ECA
int __fastcall math_modf(lua_State_0 *L)
{
  __m128d v1; // xmm0
  lua_Number v2; // xmm1_8
  __m128d v4; // xmm1
  __m128d v5; // xmm0
  double v6; // xmm0_8
  double v7; // [rsp+0h] [rbp-18h]
  double n; // [rsp+8h] [rbp-10h]

  if ( lua_isinteger(L, 1) )
  {
    lua_settop(L, 1);
    lua_pushnumber(L, 0.0, v2);
  }
  else
  {
    v1.m128d_f64[0] = luaL_checknumber(L, 1);
    n = v1.m128d_f64[0];
    if ( v1.m128d_f64[0] < 0.0 )
    {
      v4.m128d_f64[0] = fabs(v1.m128d_f64[0]);
      if ( v4.m128d_f64[0] < 4.503599627370496e15 )
      {
        v4.m128d_f64[0] = (double)(int)v1.m128d_f64[0];
        *(_QWORD *)&v1.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                        COERCE_DOUBLE(*(_OWORD *)&_mm_cmpgt_sd(v1, v4) & 0x3FF0000000000000LL)
                                      + v4.m128d_f64[0]) | *(_QWORD *)&v1.m128d_f64[0] & 0x8000000000000000LL;
      }
      v7 = v1.m128d_f64[0];
      pushnumint(L, v1.m128d_f64[0], v4.m128d_f64[0]);
    }
    else
    {
      v4.m128d_f64[0] = v1.m128d_f64[0];
      if ( fabs(v1.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v5 = 0LL;
        v5.m128d_f64[0] = (double)(int)n;
        *(_QWORD *)&v4.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                        v5.m128d_f64[0]
                                      - COERCE_DOUBLE(*(_OWORD *)&_mm_cmpgt_sd(v5, (__m128d)*(unsigned __int64 *)&n) & 0x3FF0000000000000LL)) | *(_QWORD *)&n & 0x8000000000000000LL;
      }
      v7 = v4.m128d_f64[0];
      pushnumint(L, v4.m128d_f64[0], v4.m128d_f64[0]);
    }
    if ( v7 == n )
      v6 = 0.0;
    else
      v6 = n - v7;
    lua_pushnumber(L, v6, v4.m128d_f64[0]);
  }
  return 2;
};

// Line 166: range 0000000015302B5F-0000000015302B80
int __fastcall math_sqrt(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = sqrt(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 172: range 0000000015303101-0000000015303142
int __fastcall math_ult(lua_State_0 *L)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rax

  v1 = luaL_checkinteger(L, 1);
  v2 = luaL_checkinteger(L, 2);
  lua_pushboolean(L, v1 < v2);
  return 1;
};

// Line 179: range 000000001530304A-00000000153030FF
int __fastcall math_log(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v5; // [rsp+0h] [rbp-18h]
  double v6; // [rsp+0h] [rbp-18h]
  double base; // [rsp+8h] [rbp-10h]

  v5 = luaL_checknumber(L, 1);
  if ( lua_type(L, 2) <= 0 )
  {
    v3 = log(v5);
  }
  else
  {
    v2 = luaL_checknumber(L, 2);
    base = v2;
    if ( v2 == 2.0 )
    {
      v3 = log2(v5);
    }
    else if ( v2 == 10.0 )
    {
      v3 = log10(v5);
    }
    else
    {
      v6 = log(v5);
      v3 = v6 / log(base);
    }
  }
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 199: range 00000000153032BF-00000000153032E0
int __fastcall math_exp(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = exp(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 204: range 0000000015302969-000000001530298D
int __fastcall math_deg(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  lua_Number v2; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  lua_pushnumber(L, v2 * 57.29577951308232, v1);
  return 1;
};

// Line 209: range 0000000015302944-0000000015302968
int __fastcall math_rad(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  lua_Number v2; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  lua_pushnumber(L, v2 * 0.0174532925199433, v1);
  return 1;
};

// Line 215: range 0000000015302F62-0000000015302FD5
int __fastcall math_min(lua_State_0 *L)
{
  int v1; // r13d
  int v2; // ebx
  int v3; // ebp

  v1 = lua_gettop(L);
  if ( v1 <= 0 )
    luaL_argerror(L, 1, "value expected");
  v2 = 2;
  v3 = 1;
  while ( v2 <= v1 )
  {
    if ( lua_compare(L, v2, v3, 1) )
      v3 = v2;
    ++v2;
  }
  lua_pushvalue(L, v3);
  return 1;
};

// Line 229: range 0000000015302FD6-0000000015303049
int __fastcall math_max(lua_State_0 *L)
{
  int v1; // r13d
  int v2; // ebx
  int v3; // ebp

  v1 = lua_gettop(L);
  if ( v1 <= 0 )
    luaL_argerror(L, 1, "value expected");
  v2 = 2;
  v3 = 1;
  while ( v2 <= v1 )
  {
    if ( lua_compare(L, v3, v2, 1) )
      v3 = v2;
    ++v2;
  }
  lua_pushvalue(L, v3);
  return 1;
};

// Line 247: range 0000000015302BCA-0000000015302CE0
int __fastcall math_random(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  int v2; // eax
  lua_Integer v4; // rbx
  lua_Integer v5; // r12
  double r; // [rsp+8h] [rbp-20h]

  r = (double)rand() * 4.656612873077393e-10;
  v2 = lua_gettop(L);
  if ( v2 == 1 )
  {
    v4 = luaL_checkinteger(L, 1);
    v5 = 1LL;
  }
  else
  {
    if ( v2 != 2 )
    {
      if ( v2 )
        luaL_error(L, "wrong number of arguments");
      lua_pushnumber(L, r, v1);
      return 1;
    }
    v5 = luaL_checkinteger(L, 1);
    v4 = luaL_checkinteger(L, 2);
  }
  if ( v5 > v4 )
    luaL_argerror(L, 1, "interval is empty");
  if ( v5 < 0 && v5 + 0x7FFFFFFFFFFFFFFFLL < v4 )
    luaL_argerror(L, 1, "interval too large");
  lua_pushinteger(L, v5 + (unsigned int)(int)(((double)((int)v4 - (int)v5) + 1.0) * r));
  return 1;
};

// Line 277: range 0000000015302BA3-0000000015302BC9
int __fastcall math_randomseed(lua_State_0 *L)
{
  lua_Number v1; // xmm0_8

  v1 = luaL_checknumber(L, 1);
  srand((int)v1);
  rand();
  return 0;
};

// Line 284: range 0000000015302ADF-0000000015302B3B
int __fastcall math_type(lua_State_0 *L)
{
  if ( lua_type(L, 1) == 3 )
  {
    if ( lua_isinteger(L, 1) )
      lua_pushstring(L, "integer");
    else
      lua_pushstring(L, "float");
  }
  else
  {
    luaL_checkany(L, 1);
    lua_pushnil(L);
  }
  return 1;
};

// Line 306: range 0000000015302ABD-0000000015302ADE
int __fastcall math_cosh(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = cosh(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 311: range 0000000015302A9B-0000000015302ABC
int __fastcall math_sinh(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = sinh(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 316: range 0000000015302A79-0000000015302A9A
int __fastcall math_tanh(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = tanh(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 321: range 0000000015302A32-0000000015302A78
int __fastcall math_pow(lua_State_0 *L)
{
  double v1; // xmm1_8
  double v2; // xmm0_8
  double x; // [rsp+8h] [rbp-10h]

  x = luaL_checknumber(L, 1);
  v1 = luaL_checknumber(L, 2);
  v2 = pow(x, v1);
  lua_pushnumber(L, v2, v1);
  return 1;
};

// Line 328: range 00000000153029F6-0000000015302A31
int __fastcall math_frexp(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8
  int e[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v2 = luaL_checknumber(L, 1);
  v3 = frexp(v2, e);
  lua_pushnumber(L, v3, v1);
  lua_pushinteger(L, e[0]);
  return 2;
};

// Line 335: range 00000000153029B0-00000000153029F5
int __fastcall math_ldexp(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  int v2; // eax
  double v3; // xmm0_8
  double x; // [rsp+8h] [rbp-10h]

  x = luaL_checknumber(L, 1);
  v2 = luaL_checkinteger(L, 2);
  v3 = ldexp(x, v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 342: range 000000001530298E-00000000153029AF
int __fastcall math_log10(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = luaL_checknumber(L, 1);
  v3 = log10(v2);
  lua_pushnumber(L, v3, v1);
  return 1;
};

// Line 398: range 0000000015303396-0000000015303462
int __fastcall luaopen_math(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 35);
  luaL_setfuncs(L, mathlib, 0);
  lua_pushnumber(L, 3.141592653589793, v1);
  lua_setfield(L, -2, "pi");
  lua_pushnumber(L, INFINITY, v1);
  lua_setfield(L, -2, "huge");
  lua_pushinteger(L, 0x7FFFFFFFFFFFFFFFLL);
  lua_setfield(L, -2, "maxinteger");
  lua_pushinteger(L, 0x8000000000000000LL);
  lua_setfield(L, -2, "mininteger");
  return 1;
};
