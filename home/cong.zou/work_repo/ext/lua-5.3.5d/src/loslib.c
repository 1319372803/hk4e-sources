// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/loslib.c

// Line 69: range 00000000153039DE-00000000153039EB
time_t __fastcall l_checktime(lua_State_0 *L, int arg)
{
  return luaL_checkinteger(L, arg);
};

// Line 141: range 0000000015303991-00000000153039DC
int __fastcall os_execute(lua_State_0 *L)
{
  const char *v1; // rbp
  int v2; // esi

  v1 = luaL_optlstring(L, 1, 0LL, 0LL);
  v2 = system(v1);
  if ( v1 )
    return luaL_execresult(L, v2);
  lua_pushboolean(L, v2);
  return 1;
};

// Line 153: range 00000000153038AD-00000000153038EB
int __fastcall os_remove(lua_State_0 *L)
{
  const char *v1; // rbp
  int v2; // eax

  v1 = luaL_checklstring(L, 1, 0LL);
  v2 = remove(v1);
  return luaL_fileresult(L, v2 == 0, v1);
};

// Line 159: range 0000000015303857-00000000153038AC
int __fastcall os_rename(lua_State_0 *L)
{
  const char *v1; // rbp
  const char *v2; // rax
  int v3; // eax

  v1 = luaL_checklstring(L, 1, 0LL);
  v2 = luaL_checklstring(L, 2, 0LL);
  v3 = rename(v1, v2);
  return luaL_fileresult(L, v3 == 0, 0LL);
};

// Line 166: range 0000000015303463-0000000015303496
int __fastcall os_tmpname(lua_State_0 *L)
{
  char buff[20]; // [rsp+0h] [rbp-28h] BYREF

  if ( !tmpnam(buff) )
    luaL_error(L, "unable to generate a unique filename");
  lua_pushstring(L, buff);
  return 1;
};

// Line 177: range 00000000153038EC-0000000015303918
int __fastcall os_getenv(lua_State_0 *L)
{
  const char *v1; // rax
  char *v2; // rax

  v1 = luaL_checklstring(L, 1, 0LL);
  v2 = getenv(v1);
  lua_pushstring(L, v2);
  return 1;
};

// Line 183: range 0000000015303C8B-0000000015303CB3
int __fastcall os_clock(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  int v2; // eax

  v2 = clock();
  lua_pushnumber(L, (double)v2 / 1000000.0, v1);
  return 1;
};

// Line 197: range 00000000153035AE-00000000153035D8
void __fastcall setfield(lua_State_0 *L, const char *key, int value)
{
  lua_pushinteger(L, value);
  lua_setfield(L, -2, key);
};

// Line 203: range 00000000153035D9-0000000015303607
void __fastcall setboolfield(lua_State_0 *L, const char *key, int value)
{
  if ( value >= 0 )
  {
    lua_pushboolean(L, value);
    lua_setfield(L, -2, key);
  }
};

// Line 213: range 0000000015303608-00000000153036B5
void __fastcall setallfields(lua_State_0 *L, tm_0 *stm)
{
  setfield(L, off_1B2392B4, stm->tm_sec);
  setfield(L, off_1A1B0387, stm->tm_min);
  setfield(L, "hour", stm->tm_hour);
  setfield(L, off_1B2392C9, stm->tm_mday);
  setfield(L, "month", stm->tm_mon + 1);
  setfield(L, "year", stm->tm_year + 1900);
  setfield(L, aW_1, stm->tm_wday + 1);
  setfield(L, "yday", stm->tm_yday + 1);
  setboolfield(L, "isdst", stm->tm_isdst);
};

// Line 226: range 0000000015303568-00000000153035AC
int __fastcall getboolfield(lua_State_0 *L, const char *key)
{
  int v2; // ebp

  if ( lua_getfield(L, -1, key) )
    v2 = lua_toboolean(L, -1);
  else
    v2 = -1;
  lua_settop(L, -2);
  return v2;
};

// Line 239: range 000000001530349D-0000000015303561
int __fastcall getfield(lua_State_0 *L, const char *key, int d, int delta)
{
  int v6; // r14d
  lua_Integer v7; // rax
  int isnum[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v6 = lua_getfield(L, -1, key);
  v7 = lua_tointegerx(L, -1, isnum);
  if ( isnum[0] )
  {
    if ( (unsigned __int64)(v7 + 0x3FFFFFFF) > 0x7FFFFFFE )
      luaL_error(L, "field '%s' is out-of-bound", key);
    d = v7 - delta;
  }
  else
  {
    if ( v6 )
      luaL_error(L, "field '%s' is not an integer", key);
    if ( d < 0 )
      luaL_error(L, "field '%s' missing in date table", key);
  }
  lua_settop(L, -2);
  return d;
};

// Line 261: range 0000000015303A2E-0000000015303ADC
const char *__fastcall checkoption(lua_State_0 *L, const char *conv, ptrdiff_t convlen, char *buff)
{
  int v5; // ebp
  const char *i; // rbx
  const char *v8; // rax

  v5 = 1;
  for ( i = "aAbBcCdDeFgGhHIjmMnprRStTuUVwWxXyYzZ%||EcECExEXEyEYOdOeOHOIOmOMOSOuOUOVOwOWOy"; ; i += v5 )
  {
    if ( !*i || v5 > convlen )
    {
      v8 = lua_pushfstring(L, "invalid conversion specifier '%%%s'", conv);
      luaL_argerror(L, 1, v8);
    }
    if ( *i == 124 )
    {
      ++v5;
      continue;
    }
    if ( !memcmp(conv, i, v5) )
      break;
  }
  memcpy(buff, conv, v5);
  buff[v5] = 0;
  return &conv[v5];
};

// Line 283: range 0000000015303ADD-0000000015303C8A
int __fastcall os_date(lua_State_0 *L)
{
  const char *v1; // rbx
  time_t v2; // rax
  const char *v3; // r12
  struct tm *v4; // r13
  int v5; // eax
  size_t v7; // rax
  char *v8; // r14
  size_t v9; // rax
  char cc[4]; // [rsp+Ch] [rbp-205Ch] BYREF
  luaL_Buffer_0 b; // [rsp+10h] [rbp-2058h] BYREF
  time_t t; // [rsp+2030h] [rbp-38h] BYREF
  size_t slen[6]; // [rsp+2038h] [rbp-30h] BYREF

  v1 = luaL_optlstring(L, 1, "%c", slen);
  if ( lua_type(L, 2) <= 0 )
    v2 = time(0LL);
  else
    v2 = l_checktime(L, 2);
  t = v2;
  v3 = &v1[slen[0]];
  if ( *v1 == 33 )
  {
    v4 = gmtime(&t);
    ++v1;
  }
  else
  {
    v4 = localtime(&t);
  }
  if ( !v4 )
    luaL_error(L, "time result cannot be represented in this installation");
  v5 = *(unsigned __int8 *)v1 - 42;
  if ( *v1 == 42 )
  {
    v5 = *((unsigned __int8 *)v1 + 1) - 116;
    if ( v1[1] == 116 )
      v5 = *((unsigned __int8 *)v1 + 2);
  }
  if ( v5 )
  {
    cc[0] = 37;
    luaL_buffinit(L, &b);
    while ( v1 < v3 )
    {
      if ( *v1 == 37 )
      {
        v8 = luaL_prepbuffsize(&b, 0xFAuLL);
        v1 = checkoption(L, v1 + 1, v3 - (v1 + 1), &cc[1]);
        v9 = strftime(v8, 0xFAuLL, cc, v4);
        b.n += v9;
      }
      else
      {
        if ( b.n >= b.size )
          luaL_prepbuffsize(&b, 1uLL);
        v7 = b.n++;
        b.b[v7] = *v1++;
      }
    }
    luaL_pushresult(&b);
    return 1;
  }
  else
  {
    lua_createtable(L, 0, 9);
    setallfields(L, (tm_0 *)v4);
    return 1;
  }
};

// Line 325: range 00000000153036B6-00000000153037F1
int __fastcall os_time(lua_State_0 *L)
{
  time_t v1; // rbp
  tm_0 ts; // [rsp+0h] [rbp-58h] BYREF

  if ( lua_type(L, 1) <= 0 )
  {
    v1 = time(0LL);
  }
  else
  {
    luaL_checktype(L, 1, 5);
    lua_settop(L, 1);
    ts.tm_sec = getfield(L, off_1B2392B4, 0, 0);
    ts.tm_min = getfield(L, off_1A1B0387, 0, 0);
    ts.tm_hour = getfield(L, "hour", 12, 0);
    ts.tm_mday = getfield(L, off_1B2392C9, -1, 0);
    ts.tm_mon = getfield(L, "month", -1, 1);
    ts.tm_year = getfield(L, "year", -1, 1900);
    ts.tm_isdst = getboolfield(L, "isdst");
    v1 = mktime((struct tm *)&ts);
    setallfields(L, &ts);
  }
  if ( v1 == -1 )
    luaL_error(L, "time result cannot be represented in this installation");
  lua_pushinteger(L, v1);
  return 1;
};

// Line 351: range 00000000153039EC-0000000015303A2D
int __fastcall os_difftime(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  time_t v2; // rbp
  time_t v3; // rax
  double v4; // xmm0_8

  v2 = l_checktime(L, 1);
  v3 = l_checktime(L, 2);
  v4 = difftime(v2, v3);
  lua_pushnumber(L, v4, v1);
  return 1;
};

// Line 361: range 00000000153037F8-0000000015303856
int __fastcall os_setlocale(lua_State_0 *L)
{
  const char *v1; // rbp
  int v2; // eax
  char *v3; // rax

  v1 = luaL_optlstring(L, 1, 0LL, 0LL);
  v2 = luaL_checkoption(L, 2, off_1A1920B2, catnames_3731);
  v3 = setlocale(cat_3730[v2], v1);
  lua_pushstring(L, v3);
  return 1;
};

// Line 373: range 0000000015303919-000000001530398C
int __fastcall os_exit(lua_State_0 *L)
{
  int v1; // ebp

  if ( lua_type(L, 1) == 1 )
    v1 = lua_toboolean(L, 1) == 0;
  else
    v1 = luaL_optinteger(L, 1, 0LL);
  if ( lua_toboolean(L, 2) )
    lua_close(L);
  if ( L )
    exit(v1);
  return 0;
};

// Line 405: range 0000000015303CB4-0000000015303CF4
int __fastcall luaopen_os(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 11);
  luaL_setfuncs(L, syslib, 0);
  return 1;
};
