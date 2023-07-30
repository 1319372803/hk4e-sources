// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/liolib.c

// Line 41: range 00000000153022F4-0000000015302378
int __fastcall l_checkmode(const char *mode)
{
  const char *v1; // rbp
  __int64 i; // rdx

  if ( !*mode )
    return 0;
  v1 = mode + 1;
  if ( !strchr(off_1B238BDB, *mode) )
    return 0;
  if ( mode[1] == 43 )
    v1 = mode + 2;
  for ( i = 0LL; v1[i] == 98; ++i )
    ;
  return strlen(v1) == i;
};

// Line 150: range 0000000015301871-00000000153018C8
int __fastcall io_type(lua_State_0 *L)
{
  _QWORD *v1; // rax

  luaL_checkany(L, 1);
  v1 = luaL_testudata(L, 1, "FILE*");
  if ( v1 )
  {
    if ( v1[1] )
      lua_pushstring(L, "file");
    else
      lua_pushstring(L, "closed file");
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
};

// Line 164: range 0000000015302745-0000000015302788
int __fastcall f_tostring(lua_State_0 *L)
{
  const void **v1; // rax

  v1 = (const void **)luaL_checkudata(L, 1, "FILE*");
  if ( v1[1] )
    lua_pushfstring(L, "file (%p)", *v1);
  else
    lua_pushstring(L, "file (closed)");
  return 1;
};

// Line 174: range 00000000153018CA-0000000015301903
FILE *__fastcall tofile(lua_State_0 *L)
{
  FILE **v1; // rax

  v1 = (FILE **)luaL_checkudata(L, 1, "FILE*");
  if ( !v1[1] )
    luaL_error(L, "attempt to use a closed file");
  return *v1;
};

// Line 188: range 0000000015301A20-0000000015301A54
LStream *__fastcall newprefile(lua_State_0 *L)
{
  LStream *v1; // rbx

  v1 = (LStream *)lua_newuserdata(L, 0x10uLL);
  v1->closef = 0LL;
  luaL_setmetatable(L, "FILE*");
  return v1;
};

// Line 201: range 000000001530190A-0000000015301941
int __fastcall aux_close(lua_State_0 *L)
{
  void *v1; // rax
  volatile lua_CFunction cf_0; // [rsp+8h] [rbp-10h]

  v1 = luaL_checkudata(L, 1, "FILE*");
  cf_0 = (volatile lua_CFunction)*((_QWORD *)v1 + 1);
  *((_QWORD *)v1 + 1) = 0LL;
  return cf_0(L);
};

// Line 209: range 0000000015301942-0000000015301954
int __fastcall f_close(lua_State_0 *L)
{
  tofile(L);
  return aux_close(L);
};

// Line 215: range 0000000015301955-0000000015301984
int __fastcall io_close(lua_State_0 *L)
{
  if ( lua_type(L, 1) == -1 )
    lua_getfield(L, -1001000, "_IO_output");
  return f_close(L);
};

// Line 222: range 0000000015301986-00000000153019B4
int __fastcall f_gc(lua_State_0 *L)
{
  _QWORD *v1; // rax

  v1 = luaL_checkudata(L, 1, "FILE*");
  if ( v1[1] && *v1 )
    aux_close(L);
  return 0;
};

// Line 233: range 00000000153019EC-0000000015301A1F
int __fastcall io_fclose(lua_State_0 *L)
{
  FILE **v1; // rax
  int v2; // eax

  v1 = (FILE **)luaL_checkudata(L, 1, "FILE*");
  v2 = fclose(*v1);
  return luaL_fileresult(L, v2 == 0, 0LL);
};

// Line 240: range 0000000015301A55-0000000015301A71
LStream *__fastcall newfile(lua_State_0 *L)
{
  LStream *result; // rax

  result = newprefile(L);
  result->f = 0LL;
  result->closef = io_fclose;
  return result;
};

// Line 248: range 00000000153021E1-000000001530223A
void __fastcall opencheck(lua_State_0 *L, const char *fname, const char *mode)
{
  LStream *v4; // r12
  FILE *v5; // rax
  int *v6; // rax
  char *v7; // rax

  v4 = newfile(L);
  v5 = fopen64(fname, mode);
  v4->f = v5;
  if ( !v5 )
  {
    v6 = __errno_location();
    v7 = strerror(*v6);
    luaL_error(L, "cannot open file '%s' (%s)", fname, v7);
  }
};

// Line 256: range 000000001530237A-0000000015302412
int __fastcall io_open(lua_State_0 *L)
{
  const char *v1; // r12
  const char *v2; // rbp
  LStream *v3; // r13
  FILE *v4; // rax

  v1 = luaL_checklstring(L, 1, 0LL);
  v2 = luaL_optlstring(L, 2, "r", 0LL);
  v3 = newfile(L);
  if ( !l_checkmode(v2) )
    luaL_argerror(L, 2, "invalid mode");
  v4 = fopen64(v1, v2);
  v3->f = v4;
  if ( v4 )
    return 1;
  else
    return luaL_fileresult(L, 0, v1);
};

// Line 270: range 0000000015302127-0000000015302148
int __fastcall io_pclose(lua_State_0 *L)
{
  luaL_checkudata(L, 1, "FILE*");
  return luaL_execresult(L, -1);
};

// Line 276: range 00000000153020B5-00000000153020FD
int __fastcall __noreturn io_popen(lua_State_0 *L)
{
  luaL_checklstring(L, 1, 0LL);
  luaL_optlstring(L, 2, "r", 0LL);
  newprefile(L);
  luaL_error(L, "'popen' not supported");
};

// Line 286: range 0000000015301A72-0000000015301AAF
int __fastcall io_tmpfile(lua_State_0 *L)
{
  LStream *v1; // rbp
  FILE *v2; // rax

  v1 = newfile(L);
  v2 = tmpfile64();
  v1->f = v2;
  if ( v2 )
    return 1;
  else
    return luaL_fileresult(L, 0, 0LL);
};

// Line 293: range 00000000153016F7-0000000015301740
FILE *__fastcall getiofile(lua_State_0 *L, const char *findex)
{
  FILE **v2; // rax

  lua_getfield(L, -1001000, findex);
  v2 = (FILE **)lua_touserdata(L, -1);
  if ( !v2[1] )
    luaL_error(L, "standard %s file is closed", findex + 4);
  return *v2;
};

// Line 303: range 0000000015302241-00000000153022C2
int __fastcall g_iofile(lua_State_0 *L, const char *f, const char *mode)
{
  const char *v6; // rsi

  if ( lua_type(L, 1) > 0 )
  {
    v6 = lua_tolstring(L, 1, 0LL);
    if ( v6 )
    {
      opencheck(L, v6, mode);
    }
    else
    {
      tofile(L);
      lua_pushvalue(L, 1);
    }
    lua_setfield(L, -1001000, f);
  }
  lua_getfield(L, -1001000, f);
  return 1;
};

// Line 320: range 00000000153022DC-00000000153022F3
int __fastcall io_input(lua_State_0 *L)
{
  return g_iofile(L, "_IO_input", "r");
};

// Line 325: range 00000000153022C4-00000000153022DB
int __fastcall io_output(lua_State_0 *L)
{
  return g_iofile(L, "_IO_output", "w");
};

// Line 339: range 0000000015302414-0000000015302488
void __fastcall aux_lines(lua_State_0 *L, int toclose)
{
  int v2; // ebp

  v2 = lua_gettop(L);
  if ( v2 - 1 > 250 )
    luaL_argerror(L, 252, "too many arguments");
  lua_pushinteger(L, v2 - 1);
  lua_pushboolean(L, toclose);
  lua_rotate(L, 2, 2);
  lua_pushcclosure(L, io_readline, v2 + 2);
};

// Line 349: range 000000001530255B-0000000015302577
int __fastcall f_lines(lua_State_0 *L)
{
  tofile(L);
  aux_lines(L, 0);
  return 1;
};

// Line 356: range 000000001530248F-0000000015302559
int __fastcall io_lines(lua_State_0 *L)
{
  int v1; // ebp
  const char *v3; // rax

  if ( lua_type(L, 1) == -1 )
    lua_pushnil(L);
  v1 = lua_type(L, 1);
  if ( v1 )
  {
    v3 = luaL_checklstring(L, 1, 0LL);
    opencheck(L, v3, "r");
    lua_copy(L, -1, 1);
    lua_settop(L, -2);
    v1 = 1;
  }
  else
  {
    lua_getfield(L, -1001000, "_IO_input");
    lua_copy(L, -1, 1);
    lua_settop(L, -2);
    tofile(L);
  }
  aux_lines(L, v1);
  return 1;
};

// Line 401: range 0000000015301AB1-0000000015301AE9
int __fastcall nextc(RN *rn)
{
  int n; // eax
  int c; // edx

  n = rn->n;
  if ( n <= 199 )
  {
    c = rn->c;
    rn->n = n + 1;
    rn->buff[n] = c;
    rn->c = _IO_getc(rn->f);
    return 1;
  }
  else
  {
    rn->buff[0] = 0;
    return 0;
  }
};

// Line 418: range 0000000015301AEB-0000000015301B10
int __fastcall test2(RN *rn, const char *set)
{
  int c; // eax

  c = rn->c;
  if ( c == *set || c == set[1] )
    return nextc(rn);
  else
    return 0;
};

// Line 427: range 0000000015301BF5-0000000015301C46
int __fastcall readdigits(RN *rn, int hex)
{
  int v2; // ebp

  v2 = 0;
  while ( !hex )
  {
    if ( ((*__ctype_b_loc())[rn->c] & 0x800) == 0 )
      return v2;
LABEL_3:
    if ( !nextc(rn) )
      return v2;
    ++v2;
  }
  if ( ((*__ctype_b_loc())[rn->c] & 0x1000) != 0 )
    goto LABEL_3;
  return v2;
};

// Line 440: range 0000000015301C47-0000000015301DCA
int __fastcall read_number(lua_State_0 *L, FILE *f)
{
  int v2; // ebx
  int v3; // r12d
  int v4; // ebx
  const char *v5; // rsi
  char decp[2]; // [rsp+Eh] [rbp-FAh] BYREF
  RN rn; // [rsp+10h] [rbp-F8h] BYREF

  rn.f = f;
  rn.n = 0;
  decp[0] = *localeconv()->decimal_point;
  decp[1] = 46;
  do
    rn.c = _IO_getc(rn.f);
  while ( ((*__ctype_b_loc())[rn.c] & 0x2000) != 0 );
  test2(&rn, "-+");
  v2 = test2(&rn, "00");
  if ( v2 )
  {
    v3 = test2(&rn, "xX");
    if ( v3 )
    {
      v3 = 1;
      v2 = 0;
    }
    else
    {
      v2 = 1;
    }
  }
  else
  {
    v3 = 0;
  }
  v4 = readdigits(&rn, v3) + v2;
  if ( test2(&rn, decp) )
    v4 += readdigits(&rn, v3);
  if ( v4 > 0 )
  {
    v5 = v3 ? "pP" : "eE";
    if ( test2(&rn, v5) )
    {
      test2(&rn, "-+");
      readdigits(&rn, 0);
    }
  }
  ungetc(rn.c, rn.f);
  rn.buff[rn.n] = 0;
  if ( lua_stringtonumber(L, rn.buff) )
    return 1;
  lua_pushnil(L);
  return 0;
};

// Line 474: range 0000000015301B11-0000000015301B49
int __fastcall test_eof(lua_State_0 *L, FILE *f)
{
  int v2; // ebx

  v2 = _IO_getc(f);
  ungetc(v2, f);
  lua_pushstring(L, &off_1B23A528[4]);
  return v2 != -1;
};

// Line 482: range 0000000015301DCF-0000000015301EC7
int __fastcall read_line(lua_State_0 *L, FILE *f, int chop)
{
  int v4; // ebx
  int i; // ebp
  int v6; // eax
  char *v7; // r15
  size_t v8; // rax
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2058h] BYREF

  luaL_buffinit(L, &b);
  v4 = 0;
  while ( v4 != 10 && v4 != -1 )
  {
    v7 = luaL_prepbuffsize(&b, 0x2000uLL);
    for ( i = 0; i <= 0x1FFF; ++i )
    {
      v6 = _IO_getc(f);
      v4 = v6;
      if ( v6 == -1 || v6 == 10 )
        break;
      v7[i] = v6;
    }
    b.n += i;
  }
  if ( v4 == 10 && chop == 0 )
  {
    if ( b.n >= b.size )
      luaL_prepbuffsize(&b, 1uLL);
    v8 = b.n++;
    b.b[v8] = v4;
  }
  luaL_pushresult(&b);
  return v4 == 10 || lua_rawlen(L, -1) != 0;
};

// Line 503: range 0000000015301BA2-0000000015301BF4
void __fastcall read_all(lua_State_0 *L, FILE *f)
{
  char *v2; // rax
  size_t v3; // rax
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2028h] BYREF

  luaL_buffinit(L, &b);
  do
  {
    v2 = luaL_prepbuffsize(&b, 0x2000uLL);
    v3 = fread(v2, 1uLL, 0x2000uLL, f);
    b.n += v3;
  }
  while ( v3 == 0x2000 );
  luaL_pushresult(&b);
};

// Line 516: range 0000000015301B4A-0000000015301BA1
int __fastcall read_chars(lua_State_0 *L, FILE *f, size_t n)
{
  char *v4; // rax
  size_t v5; // rbx
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2038h] BYREF

  luaL_buffinit(L, &b);
  v4 = luaL_prepbuffsize(&b, n);
  v5 = fread(v4, 1uLL, n, f);
  b.n += v5;
  luaL_pushresult(&b);
  return v5 != 0;
};

// Line 529: range 0000000015301EC9-0000000015302075
int __fastcall g_read(lua_State_0 *L, FILE *f, int first)
{
  int v4; // ebx
  int v5; // r13d
  int line; // r12d
  int v7; // ebx
  size_t v9; // rax
  const char *v10; // rax
  char v11; // al

  v4 = lua_gettop(L);
  v5 = v4 - 1;
  clearerr(f);
  if ( v4 == 1 )
  {
    line = read_line(L, f, 1);
    v7 = first + 1;
  }
  else
  {
    luaL_checkstack(L, v4 + 19, "too many arguments");
    v7 = first;
    line = 1;
    while ( v5 && line )
    {
      if ( lua_type(L, v7) == 3 )
      {
        v9 = luaL_checkinteger(L, v7);
        if ( v9 )
          line = read_chars(L, f, v9);
        else
          line = test_eof(L, f);
      }
      else
      {
        v10 = luaL_checklstring(L, v7, 0LL);
        if ( *v10 == 42 )
          ++v10;
        v11 = *v10;
        if ( v11 == 108 )
        {
          line = read_line(L, f, 1);
        }
        else if ( v11 > 108 )
        {
          if ( v11 != 110 )
LABEL_26:
            luaL_argerror(L, v7, "invalid format");
          line = read_number(L, f);
        }
        else if ( v11 == 76 )
        {
          line = read_line(L, f, 0);
        }
        else
        {
          if ( v11 != 97 )
            goto LABEL_26;
          read_all(L, f);
          line = 1;
        }
      }
      ++v7;
      --v5;
    }
  }
  if ( ferror(f) )
    return luaL_fileresult(L, 0, 0LL);
  if ( !line )
  {
    lua_settop(L, -2);
    lua_pushnil(L);
  }
  return v7 - first;
};

// Line 579: range 000000001530207A-0000000015302099
int __fastcall io_read(lua_State_0 *L)
{
  FILE *v1; // rax

  v1 = getiofile(L, "_IO_input");
  return g_read(L, v1, 1);
};

// Line 584: range 000000001530209A-00000000153020B4
int __fastcall f_read(lua_State_0 *L)
{
  FILE *v1; // rax

  v1 = tofile(L);
  return g_read(L, v1, 2);
};

// Line 589: range 0000000015302578-000000001530269C
int __fastcall io_readline(lua_State_0 *L)
{
  FILE **v1; // r13
  int v2; // eax
  int v3; // ebx
  int v4; // r12d
  int i; // ebx
  int v6; // ebx
  int v7; // r12d
  const char *v8; // rax

  v1 = (FILE **)lua_touserdata(L, -1001001);
  v2 = lua_tointegerx(L, -1001002, 0LL);
  if ( !v1[1] )
    luaL_error(L, "file is already closed");
  v3 = v2;
  v4 = v2;
  lua_settop(L, 1);
  luaL_checkstack(L, v3, "too many arguments");
  for ( i = 1; i <= v4; ++i )
    lua_pushvalue(L, -1001003 - i);
  v6 = g_read(L, *v1, 2);
  v7 = lua_toboolean(L, -v6);
  if ( !v7 )
  {
    if ( v6 > 1 )
    {
      v8 = lua_tolstring(L, 1 - v6, 0LL);
      luaL_error(L, "%s", v8);
    }
    if ( lua_toboolean(L, -1001003) )
    {
      lua_settop(L, 0);
      lua_pushvalue(L, -1001001);
      aux_close(L);
    }
    return v7;
  }
  return v6;
};

// Line 620: range 0000000015301747-000000001530184F
int __fastcall g_write(lua_State_0 *L, FILE *f, int arg)
{
  int v3; // ebx
  int v4; // eax
  int v5; // r14d
  lua_Integer v6; // rax
  int v7; // eax
  int v8; // r12d
  const char *v9; // rax
  size_t v10; // rax
  lua_Number v11; // xmm0_8
  size_t n[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = arg;
  v4 = lua_gettop(L) - arg;
  v5 = 1;
  while ( 1 )
  {
    v8 = v4 - 1;
    if ( !v4 )
      break;
    if ( lua_type(L, v3) == 3 )
    {
      if ( lua_isinteger(L, v3) )
      {
        v6 = lua_tointegerx(L, v3, 0LL);
        v7 = fprintf(f, "%lld", v6);
      }
      else
      {
        v11 = lua_tonumberx(L, v3, 0LL);
        v7 = fprintf(f, "%.14g", v11);
      }
      LOBYTE(v7) = v7 > 0;
      v5 &= v7;
    }
    else
    {
      v9 = luaL_checklstring(L, v3, n);
      if ( v5 )
      {
        v10 = fwrite(v9, 1uLL, n[0], f);
        v5 = v10 == n[0];
      }
    }
    ++v3;
    v4 = v8;
  }
  if ( v5 )
    return 1;
  else
    return luaL_fileresult(L, 0, 0LL);
};

// Line 644: range 0000000015301851-0000000015301870
int __fastcall io_write(lua_State_0 *L)
{
  FILE *v1; // rax

  v1 = getiofile(L, "_IO_output");
  return g_write(L, v1, 1);
};

// Line 649: range 0000000015302149-000000001530217D
int __fastcall f_write(lua_State_0 *L)
{
  FILE *v1; // rbp

  v1 = tofile(L);
  lua_pushvalue(L, 1);
  return g_write(L, v1, 2);
};

// Line 656: range 00000000153027FA-000000001530287C
int __fastcall f_seek(lua_State_0 *L)
{
  FILE *v1; // r12
  int v2; // ebp
  __int64 v3; // rax
  __int64 v5; // rax

  v1 = tofile(L);
  v2 = luaL_checkoption(L, 2, off_1B238C1B, modenames_3813);
  v3 = luaL_optinteger(L, 3, 0LL);
  if ( fseek(v1, v3, mode_3812[v2]) )
    return luaL_fileresult(L, 0, 0LL);
  v5 = ftell(v1);
  lua_pushinteger(L, v5);
  return 1;
};

// Line 675: range 000000001530278A-00000000153027F9
int __fastcall f_setvbuf(lua_State_0 *L)
{
  FILE *v1; // r12
  int v2; // ebp
  size_t v3; // rax
  int v4; // eax

  v1 = tofile(L);
  v2 = luaL_checkoption(L, 2, 0LL, modenames_3822);
  v3 = luaL_optinteger(L, 3, 0x2000LL);
  v4 = setvbuf(v1, 0LL, mode_3821[v2], v3);
  return luaL_fileresult(L, v4 == 0, 0LL);
};

// Line 687: range 000000001530269E-00000000153026CC
int __fastcall io_flush(lua_State_0 *L)
{
  FILE *v1; // rax
  int v2; // eax

  v1 = getiofile(L, "_IO_output");
  v2 = fflush(v1);
  return luaL_fileresult(L, v2 == 0, 0LL);
};

// Line 692: range 00000000153026CD-00000000153026F6
int __fastcall f_flush(lua_State_0 *L)
{
  FILE *v1; // rax
  int v2; // eax

  v1 = tofile(L);
  v2 = fflush(v1);
  return luaL_fileresult(L, v2 == 0, 0LL);
};

// Line 733: range 00000000153026F7-0000000015302744
void __fastcall createmeta(lua_State_0 *L)
{
  luaL_newmetatable(L, "FILE*");
  lua_pushvalue(L, -1);
  lua_setfield(L, -2, "__index");
  luaL_setfuncs(L, flib, 0);
  lua_settop(L, -2);
};

// Line 745: range 00000000153019B5-00000000153019EB
int __fastcall io_noclose(lua_State_0 *L)
{
  *((_QWORD *)luaL_checkudata(L, 1, "FILE*") + 1) = io_noclose;
  lua_pushnil(L);
  lua_pushstring(L, "cannot close standard file");
  return 2;
};

// Line 755: range 000000001530217E-00000000153021E0
void __fastcall createstdfile(lua_State_0 *L, FILE *f, const char *k, const char *fname)
{
  LStream *v6; // rax

  v6 = newprefile(L);
  v6->f = f;
  v6->closef = io_noclose;
  if ( k )
  {
    lua_pushvalue(L, -1);
    lua_setfield(L, -1001000, k);
  }
  lua_setfield(L, -2, fname);
};

// Line 767: range 000000001530287E-0000000015302911
int __fastcall luaopen_io(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 11);
  luaL_setfuncs(L, iolib, 0);
  createmeta(L);
  createstdfile(L, stdin, "_IO_input", "stdin");
  createstdfile(L, stdout, "_IO_output", "stdout");
  createstdfile(L, stderr, 0LL, "stderr");
  return 1;
};
