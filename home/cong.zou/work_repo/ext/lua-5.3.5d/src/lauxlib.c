// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lauxlib.c

// Line 47: range 00000000152FABA9-00000000152FAC9C
int __fastcall findfield(lua_State_0 *L, int objidx, int level)
{
  int result; // eax

  if ( !level )
    return 0;
  if ( lua_type(L, -1) != 5 )
    return 0;
  lua_pushnil(L);
  while ( 1 )
  {
    result = lua_next(L, -2);
    if ( !result )
      break;
    if ( lua_type(L, -2) == 4 )
    {
      if ( lua_rawequal(L, objidx, -1) )
      {
        lua_settop(L, -2);
        return 1;
      }
      if ( findfield(L, objidx, level - 1) )
      {
        lua_rotate(L, -2, -1);
        lua_settop(L, -2);
        lua_pushstring(L, ".");
        lua_rotate(L, -2, 1);
        lua_concat(L, 3);
        return 1;
      }
    }
    lua_settop(L, -2);
  }
  return result;
};

// Line 73: range 00000000152FACA1-00000000152FAD8C
int __fastcall pushglobalfuncname(lua_State_0 *L, lua_Debug_0 *ar)
{
  int v3; // r12d
  const char *v4; // rax
  int v5; // ebp

  v3 = lua_gettop(L);
  lua_getinfo(L, "f", ar);
  lua_getfield(L, -1001000, "_LOADED");
  if ( findfield(L, v3 + 1, 2) )
  {
    v4 = lua_tolstring(L, -1, 0LL);
    if ( !memcmp(v4, "_G.", 3uLL) )
    {
      lua_pushstring(L, v4 + 3);
      lua_rotate(L, -2, -1);
      lua_settop(L, -2);
    }
    lua_copy(L, -1, v3 + 1);
    lua_settop(L, -3);
    return 1;
  }
  else
  {
    v5 = 0;
    lua_settop(L, v3);
  }
  return v5;
};

// Line 94: range 00000000152FAD8E-00000000152FAE5F
void __fastcall pushfuncname(lua_State_0 *L, lua_Debug_0 *ar)
{
  const char *namewhat; // rdx
  char v3; // al
  const char *v4; // rax

  if ( pushglobalfuncname(L, ar) )
  {
    v4 = lua_tolstring(L, -1, 0LL);
    lua_pushfstring(L, "function '%s'", v4);
    lua_rotate(L, -2, -1);
    lua_settop(L, -2);
  }
  else
  {
    namewhat = ar->namewhat;
    if ( *namewhat )
    {
      lua_pushfstring(L, "%s '%s'", namewhat, ar->name);
    }
    else
    {
      v3 = *ar->what;
      if ( v3 == 109 )
      {
        lua_pushstring(L, "main chunk");
      }
      else if ( v3 == 67 )
      {
        lua_pushstring(L, "?");
      }
      else
      {
        lua_pushfstring(L, "function <%s:%d>", ar->short_src, (unsigned int)ar->linedefined);
      }
    }
  }
};

// Line 110: range 00000000152FAB3A-00000000152FABA8
int __fastcall lastlevel(lua_State_0 *L)
{
  int v1; // ebx
  int v2; // r12d
  int v3; // ebp
  lua_Debug_0 ar; // [rsp+0h] [rbp-A8h] BYREF

  v1 = 1;
  v2 = 1;
  while ( lua_getstack(L, v1, &ar) )
  {
    v2 = v1;
    v1 *= 2;
  }
  while ( v2 < v1 )
  {
    v3 = (v2 + v1) / 2;
    if ( lua_getstack(L, v3, &ar) )
      v2 = v3 + 1;
    else
      v1 = (v2 + v1) / 2;
  }
  return v1 - 1;
};

// Line 126: range 00000000152FB5BB-00000000152FB732
void __fastcall luaL_traceback(lua_State_0 *L, lua_State_0 *L1, const char *msg, int level)
{
  int v6; // r12d
  int v7; // eax
  int v8; // eax
  int top; // [rsp+8h] [rbp-C0h]
  int last; // [rsp+Ch] [rbp-BCh]
  lua_Debug_0 ar; // [rsp+10h] [rbp-B8h] BYREF

  top = lua_gettop(L);
  last = lastlevel(L1);
  if ( last - level <= 21 )
    v6 = -1;
  else
    v6 = 10;
  if ( msg )
    lua_pushfstring(L, "%s\n", msg);
  luaL_checkstack(L, 10, 0LL);
  lua_pushstring(L, "stack traceback:");
  while ( lua_getstack(L1, level, &ar) )
  {
    if ( v6 )
    {
      lua_getinfo(L1, "Slnt", &ar);
      lua_pushfstring(L, "\n\t%s:", ar.short_src);
      if ( ar.currentline > 0 )
        lua_pushfstring(L, "%d:", (unsigned int)ar.currentline);
      lua_pushstring(L, " in ");
      pushfuncname(L, &ar);
      if ( ar.istailcall )
        lua_pushstring(L, "\n\t(...tail calls...)");
      v7 = lua_gettop(L);
      lua_concat(L, v7 - top);
      ++level;
    }
    else
    {
      lua_pushstring(L, "\n\t...");
      level = last - 10;
    }
    --v6;
  }
  v8 = lua_gettop(L);
  lua_concat(L, v8 - top);
};

// Line 164: range 00000000152FB165-00000000152FB23A
int __fastcall __noreturn luaL_argerror(lua_State_0 *L, int arg, const char *extramsg)
{
  unsigned int v3; // ebp
  const char *v5; // rax
  lua_Debug_0 ar; // [rsp+0h] [rbp-98h] BYREF

  v3 = arg;
  if ( lua_getstack(L, 0, &ar) )
  {
    lua_getinfo(L, "n", &ar);
    if ( strcmp(ar.namewhat, "method") || (v3 = arg - 1, arg != 1) )
    {
      if ( !ar.name )
      {
        if ( pushglobalfuncname(L, &ar) )
          v5 = lua_tolstring(L, -1, 0LL);
        else
          v5 = "?";
        ar.name = v5;
      }
      luaL_error(L, "bad argument #%d to '%s' (%s)", v3, ar.name, extramsg);
    }
    luaL_error(L, "calling '%s' on bad self (%s)", ar.name, extramsg);
  }
  luaL_error(L, "bad argument #%d (%s)", (unsigned int)arg, extramsg);
};

// Line 182: range 00000000152FBD33-00000000152FBDB7
int __fastcall __noreturn typeerror(lua_State_0 *L, int arg, const char *tname)
{
  const char *v4; // rcx
  const char *v5; // rax
  int v6; // eax

  if ( luaL_getmetafield(L, arg, "__name") == 4 )
  {
    v4 = lua_tolstring(L, -1, 0LL);
  }
  else if ( lua_type(L, arg) == 2 )
  {
    v4 = "light userdata";
  }
  else
  {
    v6 = lua_type(L, arg);
    v4 = lua_typename(L, v6);
  }
  v5 = lua_pushfstring(L, "%s expected, got %s", tname, v4);
  luaL_argerror(L, arg, v5);
};

// Line 196: range 00000000152FBDF7-00000000152FBE11
void __fastcall __noreturn tag_error(lua_State_0 *L, int arg, int tag)
{
  const char *v3; // rax

  v3 = lua_typename(L, tag);
  typeerror(L, arg, v3);
};

// Line 205: range 00000000152FB047-00000000152FB0A2
void __fastcall luaL_where(lua_State_0 *L, int level)
{
  lua_Debug_0 ar; // [rsp+0h] [rbp-88h] BYREF

  if ( lua_getstack(L, level, &ar) && (lua_getinfo(L, "Sl", &ar), ar.currentline > 0) )
    lua_pushfstring(L, "%s:%d: ", ar.short_src, (unsigned int)ar.currentline);
  else
    lua_pushfstring(L, &off_1B23A528[4]);
};

// Line 223: range 00000000152FB0A4-00000000152FB156
int __noreturn luaL_error(lua_State_0 *L, const char *fmt, ...)
{
  va_list argp; // [rsp+8h] [rbp-E0h] BYREF

  va_start(argp, fmt);
  luaL_where(L, 1);
  lua_pushvfstring(L, fmt, (__va_list_tag *)argp);
  lua_concat(L, 2);
  lua_error(L);
};

// Line 234: range 00000000152FB2E8-00000000152FB375
int __fastcall luaL_fileresult(lua_State_0 *L, int stat, const char *fname)
{
  int v4; // r12d
  char *v6; // rax

  v4 = *__errno_location();
  if ( stat )
  {
    lua_pushboolean(L, 1);
    return 1;
  }
  else
  {
    lua_pushnil(L);
    v6 = strerror(v4);
    if ( fname )
      lua_pushfstring(L, "%s: %s", fname, v6);
    else
      lua_pushstring(L, v6);
    lua_pushinteger(L, v4);
    return 3;
  }
};

// Line 274: range 00000000152FB377-00000000152FB3CF
int __fastcall luaL_execresult(lua_State_0 *L, int stat)
{
  if ( stat == -1 )
    return luaL_fileresult(L, 0, 0LL);
  if ( stat )
    lua_pushnil(L);
  else
    lua_pushboolean(L, 1);
  lua_pushstring(L, "exit");
  lua_pushinteger(L, stat);
  return 3;
};

// Line 299: range 00000000152FB3D1-00000000152FB458
int __fastcall luaL_newmetatable(lua_State_0 *L, const char *tname)
{
  if ( lua_getfield(L, -1001000, tname) )
    return 0;
  lua_settop(L, -2);
  lua_createtable(L, 0, 2);
  lua_pushstring(L, tname);
  lua_setfield(L, -2, "__name");
  lua_pushvalue(L, -1);
  lua_setfield(L, -1001000, tname);
  return 1;
};

// Line 312: range 00000000152FB4DA-00000000152FB4F9
void __fastcall luaL_setmetatable(lua_State_0 *L, const char *tname)
{
  lua_getfield(L, -1001000, tname);
  lua_setmetatable(L, -2);
};

// Line 318: range 00000000152FB4FA-00000000152FB574
void *__fastcall luaL_testudata(lua_State_0 *L, int ud, const char *tname)
{
  void *v4; // rbx

  v4 = lua_touserdata(L, ud);
  if ( v4 )
  {
    if ( lua_getmetatable(L, ud) )
    {
      lua_getfield(L, -1001000, tname);
      if ( !lua_rawequal(L, -1, -2) )
        v4 = 0LL;
      lua_settop(L, -3);
    }
    else
    {
      return 0LL;
    }
  }
  return v4;
};

// Line 333: range 00000000152FBDB9-00000000152FBDF0
void *__fastcall luaL_checkudata(lua_State_0 *L, int ud, const char *tname)
{
  void *result; // rax

  result = luaL_testudata(L, ud, tname);
  if ( !result )
    typeerror(L, ud, tname);
  return result;
};

// Line 349: range 00000000152FBEE2-00000000152FBF66
int __fastcall luaL_checkoption(lua_State_0 *L, int arg, const char *def, const char *const *lst)
{
  const char *v6; // r12
  int i; // ebx
  const char *v8; // rdi
  const char *v9; // rax

  if ( def )
    v6 = luaL_optlstring(L, arg, def, 0LL);
  else
    v6 = luaL_checklstring(L, arg, 0LL);
  for ( i = 0; ; ++i )
  {
    v8 = lst[i];
    if ( !v8 )
    {
      v9 = lua_pushfstring(L, "invalid option '%s'", v6);
      luaL_argerror(L, arg, v9);
    }
    if ( !strcmp(v8, v6) )
      break;
  }
  return i;
};

// Line 368: range 00000000152FB576-00000000152FB5B4
void __fastcall luaL_checkstack(lua_State_0 *L, int space, const char *msg)
{
  if ( !lua_checkstack(L, space) )
  {
    if ( msg )
      luaL_error(L, "stack overflow (%s)", msg);
    luaL_error(L, "stack overflow");
  }
};

// Line 378: range 00000000152FBE1D-00000000152FBE40
void __fastcall luaL_checktype(lua_State_0 *L, int arg, int t)
{
  if ( lua_type(L, arg) != t )
    tag_error(L, arg, t);
};

// Line 384: range 00000000152FB733-00000000152FB759
void __fastcall luaL_checkany(lua_State_0 *L, int arg)
{
  if ( lua_type(L, arg) == -1 )
    luaL_argerror(L, arg, "value expected");
};

// Line 390: range 00000000152FBE47-00000000152FBE71
const char *__fastcall luaL_checklstring(lua_State_0 *L, int arg, size_t *len)
{
  const char *result; // rax

  result = lua_tolstring(L, arg, len);
  if ( !result )
    tag_error(L, arg, 4);
  return result;
};

// Line 398: range 00000000152FBE78-00000000152FBEE0
const char *__fastcall luaL_optlstring(lua_State_0 *L, int arg, const char *def, size_t *len)
{
  size_t v6; // rcx

  if ( lua_type(L, arg) > 0 )
    return luaL_checklstring(L, arg, len);
  if ( len )
  {
    if ( def )
      v6 = strlen(def);
    else
      v6 = 0LL;
    *len = v6;
  }
  return def;
};

// Line 408: range 00000000152FBF67-00000000152FBFA0
lua_Number __fastcall luaL_checknumber(lua_State_0 *L, int arg)
{
  double d; // [rsp+8h] [rbp-30h]
  int isnum[7]; // [rsp+1Ch] [rbp-1Ch] BYREF

  d = lua_tonumberx(L, arg, isnum);
  if ( !isnum[0] )
    tag_error(L, arg, 3);
  return d;
};

// Line 417: range 00000000152FBFA7-00000000152FBFDE
lua_Number __fastcall luaL_optnumber(lua_State_0 *L, int arg, double a3, lua_Number def)
{
  if ( lua_type(L, arg) > 0 )
    return luaL_checknumber(L, arg);
  return a3;
};

// Line 422: range 00000000152FBFE0-00000000152FC014
void __fastcall __noreturn interror(lua_State_0 *L, int arg)
{
  if ( lua_isnumber(L, arg) )
    luaL_argerror(L, arg, "number has no integer representation");
  tag_error(L, arg, 3);
};

// Line 430: range 00000000152FC01B-00000000152FC04D
lua_Integer __fastcall luaL_checkinteger(lua_State_0 *L, int arg)
{
  lua_Integer result; // rax
  int isnum[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  result = lua_tointegerx(L, arg, isnum);
  if ( !isnum[0] )
    interror(L, arg);
  return result;
};

// Line 441: range 00000000152FC054-00000000152FC080
lua_Integer __fastcall luaL_optinteger(lua_State_0 *L, int arg, lua_Integer def)
{
  if ( lua_type(L, arg) > 0 )
    return luaL_checkinteger(L, arg);
  return def;
};

// Line 461: range 00000000152FB23C-00000000152FB2C4
void *__fastcall resizebox(lua_State_0 *L, int idx, size_t newsize)
{
  lua_Alloc v4; // rbp
  void **v5; // rbx
  void *v6; // rbp
  void *ud; // [rsp+8h] [rbp-30h] BYREF

  v4 = lua_getallocf(L, &ud);
  v5 = (void **)lua_touserdata(L, idx);
  v6 = v4(ud, *v5, (size_t)v5[1], newsize);
  if ( newsize != 0 && v6 == 0LL )
  {
    resizebox(L, idx, 0LL);
    luaL_error(L, "not enough memory for buffer allocation");
  }
  *v5 = v6;
  v5[1] = (void *)newsize;
  return v6;
};

// Line 476: range 00000000152FB2CB-00000000152FB2E7
int __fastcall boxgc(lua_State_0 *L)
{
  resizebox(L, 1, 0LL);
  return 0;
};

// Line 482: range 00000000152FB45A-00000000152FB4D8
void *__fastcall newbox(lua_State_0 *L, size_t newsize)
{
  _QWORD *v2; // rax

  v2 = lua_newuserdata(L, 0x10uLL);
  *v2 = 0LL;
  v2[1] = 0LL;
  if ( luaL_newmetatable(L, "LUABOX") )
  {
    lua_pushcclosure(L, boxgc, 0);
    lua_setfield(L, -2, "__gc");
  }
  lua_setmetatable(L, -2);
  return resizebox(L, -1, newsize);
};

// Line 505: range 00000000152FB760-00000000152FB7FE
char *__fastcall luaL_prepbuffsize(luaL_Buffer_0 *B, size_t sz)
{
  size_t n; // rax
  size_t v3; // rbp
  void *v4; // r12

  n = B->n;
  if ( B->size - n < sz )
  {
    v3 = 2 * B->size;
    if ( v3 - n < sz )
      v3 = n + sz;
    if ( n > v3 || v3 - n < sz )
      luaL_error(B->L, "buffer too large");
    if ( B->b == B->initb )
    {
      v4 = newbox(B->L, v3);
      memcpy(v4, B->b, B->n);
    }
    else
    {
      v4 = resizebox(B->L, -1, v3);
    }
    B->b = (char *)v4;
    B->size = v3;
  }
  return &B->b[B->n];
};

// Line 529: range 00000000152FB800-00000000152FB832
void __fastcall luaL_addlstring(luaL_Buffer_0 *B, const char *s, size_t l)
{
  char *v4; // rax

  if ( l )
  {
    v4 = luaL_prepbuffsize(B, l);
    memcpy(v4, s, l);
    B->n += l;
  }
};

// Line 537: range 00000000152FB833-00000000152FB85E
void __fastcall luaL_addstring(luaL_Buffer_0 *B, const char *s)
{
  luaL_addlstring(B, s, strlen(s));
};

// Line 542: range 00000000152FB85F-00000000152FB8BB
void __fastcall luaL_pushresult(luaL_Buffer_0 *B)
{
  lua_State_0 *L; // rbp

  L = B->L;
  lua_pushlstring(L, B->b, B->n);
  if ( B->b != B->initb )
  {
    resizebox(L, -2, 0LL);
    lua_rotate(L, -2, -1);
    lua_settop(L, -2);
  }
};

// Line 552: range 00000000152FB8BC-00000000152FB8CD
void __fastcall luaL_pushresultsize(luaL_Buffer_0 *B, size_t sz)
{
  B->n += sz;
  luaL_pushresult(B);
};

// Line 558: range 00000000152FB8CE-00000000152FB953
void __fastcall luaL_addvalue(luaL_Buffer_0 *B)
{
  lua_State_0 *L; // rbp
  const char *v2; // r12
  int v3; // esi
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  L = B->L;
  v2 = lua_tolstring(L, -1, len);
  if ( B->b != B->initb )
    lua_rotate(L, -2, 1);
  luaL_addlstring(B, v2, len[0]);
  if ( B->initb == B->b )
    v3 = -1;
  else
    v3 = -2;
  lua_rotate(L, v3, -1);
  lua_settop(L, -2);
};

// Line 570: range 00000000152FB955-00000000152FB970
void __fastcall luaL_buffinit(lua_State_0 *L, luaL_Buffer_0 *B)
{
  B->L = L;
  B->b = B->initb;
  B->n = 0LL;
  B->size = 0x2000LL;
};

// Line 577: range 00000000152FB971-00000000152FB993
char *__fastcall luaL_buffinitsize(lua_State_0 *L, luaL_Buffer_0 *B, size_t sz)
{
  luaL_buffinit(L, B);
  return luaL_prepbuffsize(B, sz);
};

// Line 595: range 00000000152FB994-00000000152FBA50
int __fastcall luaL_ref(lua_State_0 *L, int t)
{
  int v2; // ebp
  int v3; // r12d
  int v4; // r13d

  if ( lua_type(L, -1) )
  {
    v2 = lua_absindex(L, t);
    lua_rawgeti(L, v2, 0LL);
    v3 = lua_tointegerx(L, -1, 0LL);
    v4 = v3;
    lua_settop(L, -2);
    if ( v3 )
    {
      lua_rawgeti(L, v2, v3);
      lua_rawseti(L, v2, 0LL);
    }
    else
    {
      v4 = lua_rawlen(L, v2) + 1;
    }
    lua_rawseti(L, v2, v4);
  }
  else
  {
    lua_settop(L, -2);
    return -1;
  }
  return v4;
};

// Line 617: range 00000000152FBA52-00000000152FBAA7
void __fastcall luaL_unref(lua_State_0 *L, int t, int ref)
{
  int v4; // r12d

  if ( ref >= 0 )
  {
    v4 = lua_absindex(L, t);
    lua_rawgeti(L, v4, 0LL);
    lua_rawseti(L, v4, ref);
    lua_pushinteger(L, ref);
    lua_rawseti(L, v4, 0LL);
  }
};

// Line 642: range 00000000152FAED9-00000000152FAF30
const char *__fastcall getF(lua_State_0 *L, void *ud, size_t *size)
{
  if ( *(int *)ud > 0 )
  {
    *size = *(int *)ud;
    *(_DWORD *)ud = 0;
    return (char *)ud + 16;
  }
  if ( !feof(*((FILE **)ud + 1)) )
  {
    *size = fread((char *)ud + 16, 1uLL, 0x2000uLL, *((FILE **)ud + 1));
    return (char *)ud + 16;
  }
  return 0LL;
};

// Line 660: range 00000000152FAE61-00000000152FAED8
int __fastcall errfile(lua_State_0 *L, const char *what, int fnameindex)
{
  int *v4; // rax
  char *v5; // r13
  const char *v6; // rax

  v4 = __errno_location();
  v5 = strerror(*v4);
  v6 = lua_tolstring(L, fnameindex, 0LL);
  lua_pushfstring(L, "cannot %s %s: %s", what, v6 + 1, v5);
  lua_rotate(L, fnameindex, -1);
  lua_settop(L, -2);
  return 7;
};

// Line 669: range 00000000152FAF32-00000000152FAF8E
int __fastcall skipBOM(LoadF_0 *lf)
{
  void *__ptr32 *i; // rbp
  int result; // eax
  int v3; // edx

  lf->n = 0;
  for ( i = &off_1B237057; ; i = (void *__ptr32 *)((char *)i + 1) )
  {
    result = _IO_getc(lf->f);
    if ( result == -1 || *(unsigned __int8 *)i != result )
      break;
    v3 = lf->n++;
    lf->buff[v3] = result;
    if ( !*((_BYTE *)i + 1) )
    {
      lf->n = 0;
      return _IO_getc(lf->f);
    }
  }
  return result;
};

// Line 690: range 00000000152FAF8F-00000000152FAFDE
int __fastcall skipcomment(LoadF_0 *lf, int *cp)
{
  int v2; // eax
  int v4; // eax

  v2 = skipBOM(lf);
  *cp = v2;
  if ( v2 != 35 )
    return 0;
  do
    v4 = _IO_getc(lf->f);
  while ( v4 != 10 && v4 != -1 );
  *cp = _IO_getc(lf->f);
  return 1;
};

// Line 704: range 00000000152FBAA8-00000000152FBC70
int __fastcall luaL_loadfilex(lua_State_0 *L, const char *filename, const char *mode)
{
  int v4; // r13d
  int v5; // eax
  int v6; // eax
  const char *v7; // rax
  int v8; // r12d
  int v9; // r14d
  int c; // [rsp+Ch] [rbp-203Ch] BYREF
  LoadF_0 lf; // [rsp+10h] [rbp-2038h] BYREF

  v4 = lua_gettop(L) + 1;
  if ( filename )
  {
    lua_pushfstring(L, off_1B23713A, filename);
    lf.f = fopen64(filename, "r");
    if ( !lf.f )
      return errfile(L, "open", v4);
  }
  else
  {
    lua_pushstring(L, "=stdin");
    lf.f = stdin;
  }
  if ( skipcomment(&lf, &c) )
  {
    v5 = lf.n++;
    lf.buff[v5] = 10;
  }
  if ( c == 27 && filename )
  {
    lf.f = freopen64(filename, "rb", lf.f);
    if ( !lf.f )
      return errfile(L, "reopen", v4);
    skipcomment(&lf, &c);
  }
  if ( c != -1 )
  {
    v6 = lf.n++;
    lf.buff[v6] = c;
  }
  v7 = lua_tolstring(L, -1, 0LL);
  v8 = lua_load(L, getF, &lf, v7, mode);
  v9 = ferror(lf.f);
  if ( filename )
    fclose(lf.f);
  if ( v9 )
  {
    lua_settop(L, v4);
    return errfile(L, "read", v4);
  }
  else
  {
    lua_rotate(L, v4, -1);
    lua_settop(L, -2);
  }
  return v8;
};

// Line 748: range 00000000152FAB1C-00000000152FAB39
const char *__fastcall getS(lua_State_0 *L, void *ud, size_t *size)
{
  size_t v3; // rax

  v3 = *((_QWORD *)ud + 1);
  if ( !v3 )
    return 0LL;
  *size = v3;
  *((_QWORD *)ud + 1) = 0LL;
  return *(const char **)ud;
};

// Line 756: range 00000000152FBC75-00000000152FBC93
int __fastcall luaL_loadbufferx(lua_State_0 *L, const char *buff, size_t size, const char *name, const char *mode)
{
  const char *v6; // [rsp+0h] [rbp-18h] BYREF
  size_t sizea; // [rsp+8h] [rbp-10h]

  v6 = buff;
  sizea = size;
  return lua_load(L, getS, &v6, name, mode);
};

// Line 764: range 00000000152FBC94-00000000152FBCC8
int __fastcall luaL_loadstring(lua_State_0 *L, const char *s)
{
  return luaL_loadbufferx(L, s, strlen(s), s, 0LL);
};

// Line 772: range 00000000152FBCC9-00000000152FBD31
int __fastcall luaL_getmetafield(lua_State_0 *L, int obj, const char *event)
{
  int v4; // ebx

  v4 = lua_getmetatable(L, obj);
  if ( v4 )
  {
    lua_pushstring(L, event);
    v4 = lua_rawget(L, -2);
    if ( v4 )
    {
      lua_rotate(L, -2, -1);
      lua_settop(L, -2);
    }
    else
    {
      lua_settop(L, -3);
    }
  }
  return v4;
};

// Line 788: range 00000000152FC082-00000000152FC0D5
int __fastcall luaL_callmeta(lua_State_0 *L, int obj, const char *event)
{
  int v4; // ebp
  int result; // eax

  v4 = lua_absindex(L, obj);
  result = luaL_getmetafield(L, v4, event);
  if ( result )
  {
    lua_pushvalue(L, v4);
    lua_callk(L, 1, 1, 0LL, 0LL);
    return 1;
  }
  return result;
};

// Line 798: range 00000000152FC0D7-00000000152FC125
lua_Integer __fastcall luaL_len(lua_State_0 *L, int idx)
{
  lua_Integer v2; // rbp
  int isnum[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  lua_len(L, idx);
  v2 = lua_tointegerx(L, -1, isnum);
  if ( !isnum[0] )
    luaL_error(L, "object length is not an integer");
  lua_settop(L, -2);
  return v2;
};

// Line 810: range 00000000152FC12C-00000000152FC2E6
const char *__fastcall luaL_tolstring(lua_State_0 *L, int idx, size_t *len)
{
  int v5; // eax
  const char *v6; // rsi
  lua_Integer v7; // rax
  lua_Number v8; // xmm0_8
  int v9; // r13d
  int v10; // eax
  const char *v11; // r14
  const void *v12; // rax

  if ( luaL_callmeta(L, idx, "__tostring") )
  {
    if ( !lua_isstring(L, -1) )
      luaL_error(L, "'__tostring' must return a string");
    return lua_tolstring(L, -1, len);
  }
  v5 = lua_type(L, idx);
  if ( v5 == 3 )
  {
    if ( lua_isinteger(L, idx) )
    {
      v7 = lua_tointegerx(L, idx, 0LL);
      lua_pushfstring(L, "%I", v7);
    }
    else
    {
      v8 = lua_tonumberx(L, idx, 0LL);
      lua_pushfstring(L, "%f", v8);
    }
    return lua_tolstring(L, -1, len);
  }
  if ( v5 > 3 )
  {
    if ( v5 == 4 )
    {
      lua_pushvalue(L, idx);
      return lua_tolstring(L, -1, len);
    }
  }
  else
  {
    if ( !v5 )
    {
      lua_pushstring(L, "nil");
      return lua_tolstring(L, -1, len);
    }
    if ( v5 == 1 )
    {
      if ( lua_toboolean(L, idx) )
        v6 = "true";
      else
        v6 = "false";
      lua_pushstring(L, v6);
      return lua_tolstring(L, -1, len);
    }
  }
  v9 = luaL_getmetafield(L, idx, "__name");
  if ( v9 == 4 )
  {
    v11 = lua_tolstring(L, -1, 0LL);
  }
  else
  {
    v10 = lua_type(L, idx);
    v11 = lua_typename(L, v10);
  }
  v12 = lua_topointer(L, idx);
  lua_pushfstring(L, "%s: %p", v11, v12);
  if ( v9 )
  {
    lua_rotate(L, -2, -1);
    lua_settop(L, -2);
  }
  return lua_tolstring(L, -1, len);
};

// Line 934: range 00000000152FC2E8-00000000152FC364
void __fastcall luaL_setfuncs(lua_State_0 *L, const luaL_Reg_0 *l, int nup)
{
  int i; // ebx

  luaL_checkstack(L, nup, "too many upvalues");
  while ( l->name )
  {
    for ( i = 0; i < nup; ++i )
      lua_pushvalue(L, -nup);
    lua_pushcclosure(L, l->func, nup);
    lua_setfield(L, -2 - nup, l->name);
    ++l;
  }
  lua_settop(L, ~nup);
};

// Line 951: range 00000000152FC365-00000000152FC3D3
int __fastcall luaL_getsubtable(lua_State_0 *L, int idx, const char *fname)
{
  int v5; // r12d

  if ( lua_getfield(L, idx, fname) == 5 )
    return 1;
  lua_settop(L, -2);
  v5 = lua_absindex(L, idx);
  lua_createtable(L, 0, 0);
  lua_pushvalue(L, -1);
  lua_setfield(L, v5, fname);
  return 0;
};

// Line 972: range 00000000152FC3D5-00000000152FC4C9
void __fastcall luaL_requiref(lua_State_0 *L, const char *modname, lua_CFunction openf, int glb)
{
  luaL_getsubtable(L, -1001000, "_LOADED");
  lua_getfield(L, -1, modname);
  if ( !lua_toboolean(L, -1) )
  {
    lua_settop(L, -2);
    lua_pushcclosure(L, openf, 0);
    lua_pushstring(L, modname);
    lua_callk(L, 1, 1, 0LL, 0LL);
    lua_pushvalue(L, -1);
    lua_setfield(L, -3, modname);
  }
  lua_rotate(L, -2, -1);
  lua_settop(L, -2);
  if ( glb )
  {
    lua_pushvalue(L, -1);
    lua_setglobal(L, modname);
  }
};

// Line 992: range 00000000152FC4CE-00000000152FC579
const char *__fastcall luaL_gsub(lua_State_0 *L, const char *s, const char *p, const char *r)
{
  unsigned __int64 v7; // kr08_8
  char *v8; // rax
  char *v9; // rbx
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2058h] BYREF

  v7 = strlen(p) + 1;
  luaL_buffinit(L, &b);
  while ( 1 )
  {
    v8 = strstr(s, p);
    v9 = v8;
    if ( !v8 )
      break;
    luaL_addlstring(&b, s, v8 - s);
    luaL_addstring(&b, r);
    s = &v9[v7 - 1];
  }
  luaL_addstring(&b, s);
  luaL_pushresult(&b);
  return lua_tolstring(L, -1, 0LL);
};

// Line 1008: range 00000000152FB022-00000000152FB045
void *__fastcall l_alloc(void *ud, void *ptr, size_t osize, size_t nsize)
{
  if ( nsize )
    return realloc(ptr, nsize);
  free(ptr);
  return 0LL;
};

// Line 1019: range 00000000152FAFE0-00000000152FB021
int __fastcall panic(lua_State_0 *L)
{
  const char *v1; // rax

  v1 = lua_tolstring(L, -1, 0LL);
  fprintf(stderr, "PANIC: unprotected error in call to Lua API (%s)\n", v1);
  fflush(stderr);
  return 0;
};

// Line 1026: range 00000000152FC57A-00000000152FC5A3
lua_State_0 *__cdecl luaL_newstate()
{
  lua_State_0 *v0; // rax
  lua_State_0 *v1; // rbx

  v0 = lua_newstate(l_alloc, 0LL);
  v1 = v0;
  if ( v0 )
    lua_atpanic(v0, panic);
  return v1;
};

// Line 1033: range 00000000152FC5A4-00000000152FC62D
void __fastcall luaL_checkversion_(lua_State_0 *L, double a2, lua_Number ver, size_t sz)
{
  double *v4; // rbp

  v4 = (double *)lua_version(L);
  if ( sz != 136 )
    luaL_error(L, "core and library have incompatible numeric types", a2, ver);
  if ( v4 != lua_version(0LL) )
    luaL_error(L, "multiple Lua VMs detected", a2, ver);
  if ( *v4 != a2 )
    luaL_error(L, "version mismatch: app. needs %f, Lua core provides %f", a2, *v4, a2);
};
