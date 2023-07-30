// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lstrlib.c

// Line 54: range 0000000015303DE0-0000000015303E0E
int __fastcall str_len(lua_State_0 *L)
{
  size_t len[2]; // [rsp+8h] [rbp-10h] BYREF

  luaL_checklstring(L, 1, len);
  lua_pushinteger(L, len[0]);
  return 1;
};

// Line 64: range 0000000015303CF5-0000000015303D14
lua_Integer __fastcall posrelat(lua_Integer pos, size_t len)
{
  if ( pos >= 0 )
    return pos;
  if ( -pos > len )
    return 0LL;
  return pos + len + 1;
};

// Line 70: range 0000000015304EC9-0000000015304F7B
int __fastcall str_sub(lua_State_0 *L)
{
  const char *v1; // r12
  size_t v2; // rbp
  lua_Integer v3; // rax
  lua_Integer v4; // rbp
  size_t v5; // r13
  lua_Integer v6; // rax
  lua_Integer v7; // rax
  signed __int64 v8; // rdx
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = len[0];
  v3 = luaL_checkinteger(L, 2);
  v4 = posrelat(v3, v2);
  v5 = len[0];
  v6 = luaL_optinteger(L, 3, -1LL);
  v7 = posrelat(v6, v5);
  if ( v4 <= 0 )
    v4 = 1LL;
  v8 = len[0];
  if ( (__int64)len[0] >= v7 )
    v8 = v7;
  if ( v4 > v8 )
    lua_pushstring(L, &off_1B23A528[4]);
  else
    lua_pushlstring(L, &v1[v4 - 1], v8 - v4 + 1);
  return 1;
};

// Line 84: range 0000000015304E5B-0000000015304EC8
int __fastcall str_reverse(lua_State_0 *L)
{
  const char *v1; // rbx
  char *v2; // rax
  unsigned __int64 i; // rdx
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2048h] BYREF
  size_t len[4]; // [rsp+2028h] [rbp-20h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = luaL_buffinitsize(L, &b, len[0]);
  for ( i = 0LL; len[0] > i; ++i )
    v2[i] = v1[len[0] - i - 1];
  luaL_pushresultsize(&b, len[0]);
  return 1;
};

// Line 96: range 0000000015305226-00000000153052A9
int __fastcall str_lower(lua_State_0 *L)
{
  const char *v1; // r12
  char *v2; // rbp
  size_t i; // rbx
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2048h] BYREF
  size_t len[4]; // [rsp+2028h] [rbp-20h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = luaL_buffinitsize(L, &b, len[0]);
  for ( i = 0LL; i < len[0]; ++i )
    v2[i] = (*__ctype_tolower_loc())[(unsigned __int8)v1[i]];
  luaL_pushresultsize(&b, len[0]);
  return 1;
};

// Line 109: range 0000000015304DD7-0000000015304E5A
int __fastcall str_upper(lua_State_0 *L)
{
  const char *v1; // r12
  char *v2; // rbp
  size_t i; // rbx
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2048h] BYREF
  size_t len[4]; // [rsp+2028h] [rbp-20h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = luaL_buffinitsize(L, &b, len[0]);
  for ( i = 0LL; i < len[0]; ++i )
    v2[i] = (*__ctype_toupper_loc())[(unsigned __int8)v1[i]];
  luaL_pushresultsize(&b, len[0]);
  return 1;
};

// Line 122: range 0000000015304F7D-00000000153050D2
int __fastcall str_rep(lua_State_0 *L)
{
  const char *v1; // r12
  lua_Integer v2; // rbx
  const char *v3; // rax
  unsigned __int64 v4; // rdx
  const char *v5; // r14
  size_t v7; // r13
  char *v8; // rbp
  lua_Integer v9; // r15
  char *v10; // rbx
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2068h] BYREF
  size_t lsep; // [rsp+2020h] [rbp-48h] BYREF
  size_t len[8]; // [rsp+2028h] [rbp-40h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = luaL_checkinteger(L, 2);
  v3 = luaL_optlstring(L, 3, &off_1B23A528[4], &lsep);
  if ( v2 <= 0 )
  {
    lua_pushstring(L, &off_1B23A528[4]);
    return 1;
  }
  else
  {
    v5 = v3;
    if ( __CFADD__(lsep, len[0]) || (v4 = 0x7FFFFFFFuLL % v2, lsep + len[0] > 0x7FFFFFFFuLL / v2) )
      luaL_error(L, "resulting string too large", v4);
    v7 = (v2 - 1) * lsep + v2 * len[0];
    v8 = luaL_buffinitsize(L, &b, v7);
    while ( 1 )
    {
      v9 = v2 - 1;
      if ( v2 <= 1 )
        break;
      memcpy(v8, v1, len[0]);
      v10 = &v8[len[0]];
      v8 += len[0];
      if ( lsep )
      {
        memcpy(v10, v5, lsep);
        v8 = &v10[lsep];
      }
      v2 = v9;
    }
    memcpy(v8, v1, len[0]);
    luaL_pushresultsize(&b, v7);
    return 1;
  }
};

// Line 148: range 0000000015304806-00000000153048FA
int __fastcall str_byte(lua_State_0 *L)
{
  const char *v1; // r14
  size_t v2; // rbx
  lua_Integer v3; // rax
  __int64 v4; // r12
  size_t v5; // rbx
  lua_Integer v6; // rax
  lua_Integer v7; // rax
  signed __int64 v8; // rbp
  int v9; // ebp
  int i; // ebx
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = luaL_checklstring(L, 1, len);
  v2 = len[0];
  v3 = luaL_optinteger(L, 2, 1LL);
  v4 = posrelat(v3, v2);
  v5 = len[0];
  v6 = luaL_optinteger(L, 3, v4);
  v7 = posrelat(v6, v5);
  if ( v4 <= 0 )
    v4 = 1LL;
  v8 = len[0];
  if ( (__int64)len[0] >= v7 )
    v8 = v7;
  if ( v4 > v8 )
    return 0;
  if ( v8 - v4 > 2147483646 )
    luaL_error(L, "string slice too long");
  v9 = v8 - v4 + 1;
  luaL_checkstack(L, v9, "string slice too long");
  for ( i = 0; i < v9; ++i )
    lua_pushinteger(L, (unsigned __int8)v1[v4 - 1 + i]);
  return v9;
};

// Line 167: range 000000001530621F-00000000153062AD
int __fastcall str_char(lua_State_0 *L)
{
  int v1; // r13d
  char *v2; // r14
  int i; // ebp
  lua_Integer v4; // rbx
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2058h] BYREF

  v1 = lua_gettop(L);
  v2 = luaL_buffinitsize(L, &b, v1);
  for ( i = 1; i <= v1; ++i )
  {
    v4 = luaL_checkinteger(L, i);
    if ( (unsigned __int8)v4 != v4 )
      luaL_argerror(L, i, "value out of range");
    v2[i - 1] = v4;
  }
  luaL_pushresultsize(&b, v1);
  return 1;
};

// Line 182: range 00000000153049A6-00000000153049BB
int __fastcall writer(lua_State_0 *L, const void *b, size_t size, void *B)
{
  luaL_addlstring((luaL_Buffer_0 *)B, (const char *)b, size);
  return 0;
};

// Line 189: range 0000000015306965-00000000153069E1
int __fastcall str_dump(lua_State_0 *L)
{
  int v1; // ebp
  luaL_Buffer_0 b; // [rsp+0h] [rbp-2038h] BYREF

  v1 = lua_toboolean(L, 2);
  luaL_checktype(L, 1, 6);
  lua_settop(L, 1);
  luaL_buffinit(L, &b);
  if ( lua_dump(L, writer, &b, v1) )
    luaL_error(L, "unable to dump given function");
  luaL_pushresult(&b);
  return 1;
};

// Line 244: range 0000000015304618-0000000015304650
int __fastcall check_capture(MatchState_0 *ms, int l)
{
  int result; // eax

  result = l - 49;
  if ( l - 49 < 0 || ms->level <= result || ms->capture[result].len == -1 )
    luaL_error(ms->L, "invalid capture index %%%d", (unsigned int)(l - 48));
  return result;
};

// Line 251: range 0000000015304556-0000000015304595
int __fastcall capture_to_close(MatchState_0 *ms)
{
  int result; // eax

  for ( result = ms->level - 1; ; --result )
  {
    if ( result < 0 )
      luaL_error(ms->L, "invalid pattern capture");
    if ( ms->capture[result].len == -1 )
      break;
  }
  return result;
};

// Line 258: range 000000001530465A-00000000153046EA
const char *__fastcall classend(MatchState_0 *ms, const char *p)
{
  const char *v2; // rbx

  v2 = p + 1;
  if ( *p == 37 )
  {
    if ( ms->p_end == v2 )
      luaL_error(ms->L, "malformed pattern (ends with '%%')");
    return p + 2;
  }
  else if ( *p == 91 )
  {
    if ( p[1] == 94 )
      v2 = p + 2;
    do
    {
      if ( ms->p_end == v2 )
        luaL_error(ms->L, "malformed pattern (missing ']')");
      if ( *v2 == 37 )
      {
        if ( ms->p_end <= v2 + 1 )
          ++v2;
        else
          v2 += 2;
      }
      else
      {
        ++v2;
      }
    }
    while ( *v2 != 93 );
    ++v2;
  }
  return v2;
};

// Line 282: range 00000000153052AA-0000000015305430
int __fastcall match_class(int c, int cl_0)
{
  int v2; // eax
  int v3; // ebp

  if ( (unsigned int)(cl_0 + 128) > 0x17F )
    v2 = cl_0;
  else
    v2 = (*__ctype_tolower_loc())[cl_0];
  switch ( v2 )
  {
    case 'a':
      v3 = (*__ctype_b_loc())[c] & 0x400;
      goto LABEL_6;
    case 'c':
      v3 = (*__ctype_b_loc())[c] & 2;
      goto LABEL_6;
    case 'd':
      v3 = (*__ctype_b_loc())[c] & 0x800;
      goto LABEL_6;
    case 'g':
      v3 = (*__ctype_b_loc())[c] & 0x8000;
      goto LABEL_6;
    case 'l':
      v3 = (*__ctype_b_loc())[c] & 0x200;
      goto LABEL_6;
    case 'p':
      v3 = (*__ctype_b_loc())[c] & 4;
      goto LABEL_6;
    case 's':
      v3 = (*__ctype_b_loc())[c] & 0x2000;
      goto LABEL_6;
    case 'u':
      v3 = (*__ctype_b_loc())[c] & 0x100;
      goto LABEL_6;
    case 'w':
      v3 = (*__ctype_b_loc())[c] & 8;
      goto LABEL_6;
    case 'x':
      v3 = (*__ctype_b_loc())[c] & 0x1000;
      goto LABEL_6;
    case 'z':
      v3 = c == 0;
LABEL_6:
      if ( ((*__ctype_b_loc())[cl_0] & 0x200) == 0 )
        v3 = v3 == 0;
      break;
    default:
      v3 = cl_0 == c;
      break;
  }
  return v3;
};

// Line 302: range 0000000015305435-00000000153054D0
int __fastcall matchbracketclass(int c, const char *p, const char *ec)
{
  int v4; // r13d
  const char *v5; // rax
  unsigned __int8 v6; // dl
  const char *v7; // rsi

  if ( p[1] == 94 )
  {
    ++p;
    v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  while ( 1 )
  {
    v5 = p + 1;
    if ( p + 1 >= ec )
      break;
    v6 = p[1];
    if ( v6 == 37 )
    {
      if ( match_class(c, *((unsigned __int8 *)p + 2)) )
        return v4;
      v5 = p + 2;
    }
    else if ( p[2] == 45 && (v7 = p + 3, v7 < ec) )
    {
      if ( v6 > c )
      {
        v5 = v7;
      }
      else
      {
        if ( *((unsigned __int8 *)v5 + 2) >= c )
          return v4;
        v5 = v7;
      }
    }
    else if ( v6 == c )
    {
      return v4;
    }
    p = v5;
  }
  return v4 ^ 1;
};

// Line 327: range 00000000153054D1-0000000015305529
int __fastcall singlematch(MatchState_0 *ms, const char *s, const char *p, const char *ep)
{
  unsigned __int8 v5; // si
  char v6; // dl

  if ( ms->src_end <= s )
    return 0;
  v5 = *s;
  v6 = *p;
  switch ( v6 )
  {
    case '.':
      return 1;
    case '[':
      return matchbracketclass(v5, p, ep - 1);
    case '%':
      return match_class(v5, *((unsigned __int8 *)p + 1));
  }
  return v5 == (unsigned __int8)v6;
};

// Line 342: range 0000000015304596-0000000015304616
const char *__fastcall matchbalance(MatchState_0 *ms, const char *s, const char *p)
{
  const char *v4; // rbx
  char v5; // di
  char v6; // si
  int v7; // ecx
  char v8; // dl

  v4 = s;
  if ( ms->p_end - 1 <= p )
    luaL_error(ms->L, "malformed pattern (missing arguments to '%%b')");
  v5 = *p;
  if ( *s != *p )
    return 0LL;
  v6 = p[1];
  v7 = 1;
  while ( ms->src_end > v4 + 1 )
  {
    v8 = v4[1];
    if ( v6 == v8 )
    {
      if ( !--v7 )
        return v4 + 2;
    }
    else if ( v5 == v8 )
    {
      ++v7;
    }
    ++v4;
  }
  return 0LL;
};

// Line 362: range 0000000015305810-0000000015305872
const char *__fastcall max_expand(MatchState_0 *ms, const char *s, const char *p, const char *ep)
{
  __int64 i; // rbx
  const char *result; // rax

  for ( i = 0LL; singlematch(ms, &s[i], p, ep); ++i )
    ;
  while ( i >= 0 )
  {
    result = match(ms, &s[i], ep + 1);
    if ( result )
      return result;
    --i;
  }
  return 0LL;
};

// Line 377: range 000000001530552A-000000001530557C
const char *__fastcall min_expand(MatchState_0 *ms, const char *s, const char *p, const char *ep)
{
  const char *v7; // rbx

  while ( 1 )
  {
    v7 = match(ms, s, ep + 1);
    if ( v7 || !singlematch(ms, s, p, ep) )
      break;
    ++s;
  }
  return v7;
};

// Line 390: range 0000000015305AA8-0000000015305B32
const char *__fastcall start_capture(MatchState_0 *ms, const char *s, const char *p, int what)
{
  unsigned __int8 level; // r14
  int *v5; // rbx
  const char *result; // rax

  level = ms->level;
  if ( level > 0x1Fu )
    luaL_error(ms->L, "too many captures");
  v5 = &ms->matchdepth + 4 * level;
  *((_QWORD *)v5 + 1) = s;
  *((_QWORD *)v5 + 2) = what;
  ms->level = level + 1;
  result = match(ms, s, p);
  if ( !result )
    --ms->level;
  return result;
};

// Line 404: range 0000000015305B34-0000000015305B98
const char *__fastcall end_capture(MatchState_0 *ms, const char *s, const char *p)
{
  int v4; // ebp
  const char *result; // rax

  v4 = capture_to_close(ms);
  ms->capture[v4].len = s - ms->capture[v4].init;
  result = match(ms, s, p);
  if ( !result )
    ms->capture[v4].len = -1LL;
  return result;
};

// Line 414: range 0000000015305134-0000000015305194
const char *__fastcall match_capture(MatchState_0 *ms, const char *s, int l)
{
  int v3; // eax
  size_t len; // r12

  v3 = check_capture(ms, l);
  len = ms->capture[v3].len;
  if ( ms->src_end - s < len )
    return 0LL;
  if ( !memcmp(ms->capture[v3].init, s, len) )
    return &s[len];
  return 0LL;
};

// Line 425: range 000000001530557D-000000001530580B
const char *__fastcall match(MatchState_0 *ms, const char *s, const char *p)
{
  int matchdepth; // eax
  const char *p_end; // rax
  char v8; // dl
  char v9; // dl
  const char *result; // rax
  const char *v11; // r13
  char v12; // al
  const char *v13; // r13
  const char *v14; // rax
  unsigned __int8 v15; // di
  char v16; // al

  matchdepth = ms->matchdepth;
  ms->matchdepth = matchdepth - 1;
  if ( !matchdepth )
    luaL_error(ms->L, "pattern too complex");
  while ( 1 )
  {
    p_end = ms->p_end;
    if ( p_end == p )
    {
      result = s;
      goto LABEL_15;
    }
    v8 = *p;
    if ( *p == 40 )
      break;
    if ( v8 > 40 )
    {
      if ( v8 == 41 )
      {
        result = end_capture(ms, s, p + 1);
        goto LABEL_15;
      }
      goto dflt;
    }
    if ( v8 == 36 )
    {
      if ( p_end == p + 1 )
      {
        if ( ms->src_end == s )
          result = s;
        else
          result = 0LL;
        goto LABEL_15;
      }
      goto dflt;
    }
    if ( v8 == 37 )
    {
      v9 = p[1];
      if ( v9 == 98 )
      {
        result = matchbalance(ms, s, p + 2);
        s = result;
        if ( !result )
          goto LABEL_15;
        p += 4;
      }
      else if ( v9 > 98 )
      {
        if ( v9 != 102 )
          goto dflt;
        v13 = p + 2;
        if ( p[2] != 91 )
          luaL_error(ms->L, "missing '[' after '%%f' in pattern");
        v14 = classend(ms, p + 2);
        p = v14;
        if ( ms->src_init == s )
          v15 = 0;
        else
          v15 = *(s - 1);
        if ( matchbracketclass(v15, v13, v14 - 1) )
        {
          result = 0LL;
          goto LABEL_15;
        }
        if ( !matchbracketclass(*(unsigned __int8 *)s, v13, p - 1) )
        {
          result = 0LL;
          goto LABEL_15;
        }
      }
      else
      {
        if ( (unsigned __int8)(v9 - 48) > 9u )
          goto dflt;
        result = match_capture(ms, s, (unsigned __int8)v9);
        s = result;
        if ( !result )
          goto LABEL_15;
        p += 2;
      }
    }
    else
    {
dflt:
      v11 = classend(ms, p);
      if ( singlematch(ms, s, p, v11) )
      {
        v16 = *v11;
        if ( *v11 == 45 )
        {
          result = min_expand(ms, s, p, v11);
          goto LABEL_15;
        }
        if ( v16 > 45 )
        {
          if ( v16 != 63 )
            goto LABEL_48;
          p = v11 + 1;
          result = match(ms, s + 1, v11 + 1);
          if ( result )
            goto LABEL_15;
        }
        else
        {
          if ( v16 == 42 )
            goto LABEL_43;
          if ( v16 == 43 )
          {
            ++s;
LABEL_43:
            result = max_expand(ms, s, p, v11);
            goto LABEL_15;
          }
LABEL_48:
          ++s;
          p = v11;
        }
      }
      else
      {
        v12 = *v11;
        if ( v12 != 63 && v12 != 42 && v12 != 45 )
        {
          result = 0LL;
          goto LABEL_15;
        }
        p = v11 + 1;
      }
    }
  }
  if ( p[1] == 41 )
    result = start_capture(ms, s, p + 2, -2);
  else
    result = start_capture(ms, s, p + 1, -1);
LABEL_15:
  ++ms->matchdepth;
  return result;
};

// Line 529: range 0000000015305196-0000000015305224
const char *__fastcall lmemfind(const char *s1, size_t l1, const char *s2, size_t l2)
{
  const char *v4; // rbp
  size_t v6; // r13
  size_t v7; // rbx
  const char *v8; // rax
  const char *v9; // r14
  const char *v10; // r15

  v4 = s1;
  if ( !l2 )
    return s1;
  if ( l2 > l1 )
    return 0LL;
  v6 = l2 - 1;
  v7 = l1 - (l2 - 1);
  while ( v7 )
  {
    v8 = (const char *)memchr(v4, *s2, v7);
    v9 = v8;
    if ( !v8 )
      return v9;
    v10 = v8 + 1;
    if ( !memcmp(v8 + 1, s2 + 1, v6) )
      return v9;
    v7 -= v10 - v4;
    v4 = v10;
  }
  return 0LL;
};

// Line 551: range 00000000153046EC-00000000153047A0
void __fastcall push_onecapture(MatchState_0 *ms, int i, const char *s, const char *e)
{
  size_t len; // r12

  if ( ms->level > i )
  {
    len = ms->capture[i].len;
    if ( len == -1LL )
      luaL_error(ms->L, "unfinished capture", s, e);
    if ( len == -2LL )
      lua_pushinteger(ms->L, ms->capture[i].init - ms->src_init + 1);
    else
      lua_pushlstring(ms->L, ms->capture[i].init, len);
  }
  else
  {
    if ( i )
      luaL_error(ms->L, "invalid capture index %%%d", (unsigned int)(i + 1));
    lua_pushlstring(ms->L, s, e - s);
  }
};

// Line 569: range 00000000153047A2-0000000015304805
int __fastcall push_captures(MatchState_0 *ms, const char *s, const char *e)
{
  int v4; // ebp
  int i; // ebx

  LOBYTE(v4) = ms->level;
  if ( (_BYTE)v4 || !s )
    v4 = (unsigned __int8)v4;
  else
    v4 = 1;
  luaL_checkstack(ms->L, v4, "too many captures");
  for ( i = 0; i < v4; ++i )
    push_onecapture(ms, i, s, e);
  return v4;
};

// Line 580: range 00000000153050D7-0000000015305133
int __fastcall nospecials(const char *p, size_t l)
{
  size_t v2; // rbx

  v2 = 0LL;
  while ( !strpbrk(&p[v2], "^$*+?.([%-") )
  {
    v2 += strlen(&p[v2]) + 1;
    if ( v2 > l )
      return 1;
  }
  return 0;
};

// Line 593: range 0000000015303D15-0000000015303D31
void __fastcall prepstate(MatchState_0 *ms, lua_State_0 *L, const char *s, size_t ls, const char *p, size_t lp)
{
  ms->L = L;
  ms->matchdepth = 200;
  ms->src_init = s;
  ms->src_end = &s[ls];
  ms->p_end = &p[lp];
};

// Line 602: range 0000000015303D32-0000000015303D36
void __fastcall reprepstate(MatchState_0 *ms)
{
  ms->level = 0;
};

// Line 607: range 0000000015305873-0000000015305A80
int __fastcall str_find_aux(lua_State_0 *L, int find)
{
  const char *v2; // r15
  const char *v3; // r12
  size_t v4; // rbx
  lua_Integer v5; // rax
  lua_Integer v6; // rax
  __int64 v7; // rbx
  const char *v8; // rbp
  char v9; // r14
  const char *v11; // rax
  signed __int64 v12; // rbx
  const char *v13; // rax
  const char *v14; // rbx
  MatchState_0 ms; // [rsp+10h] [rbp-278h] BYREF
  size_t lp; // [rsp+240h] [rbp-48h] BYREF
  size_t ls[8]; // [rsp+248h] [rbp-40h] BYREF

  v2 = luaL_checklstring(L, 1, ls);
  v3 = luaL_checklstring(L, 2, &lp);
  v4 = ls[0];
  v5 = luaL_optinteger(L, 3, 1LL);
  v6 = posrelat(v5, v4);
  if ( v6 <= 0 )
  {
    v7 = 1LL;
  }
  else
  {
    v7 = v6;
    if ( (signed __int64)(ls[0] + 1) < v6 )
    {
      lua_pushnil(L);
      return 1;
    }
  }
  if ( find && (lua_toboolean(L, 4) || nospecials(v3, lp)) )
  {
    v11 = lmemfind(&v2[v7 - 1], ls[0] - v7 + 1, v3, lp);
    if ( v11 )
    {
      v12 = v11 - v2;
      lua_pushinteger(L, v11 - v2 + 1);
      lua_pushinteger(L, lp + v12);
      return 2;
    }
    else
    {
LABEL_17:
      lua_pushnil(L);
      return 1;
    }
  }
  else
  {
    v8 = &v2[v7 - 1];
    v9 = *v3;
    if ( *v3 == 94 )
    {
      ++v3;
      --lp;
    }
    prepstate(&ms, L, v2, ls[0], v3, lp);
    while ( 1 )
    {
      reprepstate(&ms);
      v13 = match(&ms, v8, v3);
      v14 = v13;
      if ( v13 )
        break;
      if ( ms.src_end <= v8 || v9 == 94 )
        goto LABEL_17;
      ++v8;
    }
    if ( find )
    {
      lua_pushinteger(L, v8 - v2 + 1);
      lua_pushinteger(L, v14 - v2);
      return push_captures(&ms, 0LL, 0LL) + 2;
    }
    else
    {
      return push_captures(&ms, v8, v13);
    }
  }
};

// Line 654: range 0000000015305A95-0000000015305AA7
int __fastcall str_find(lua_State_0 *L)
{
  return str_find_aux(L, 1);
};

// Line 659: range 0000000015305A82-0000000015305A94
int __fastcall str_match(lua_State_0 *L)
{
  return str_find_aux(L, 0);
};

// Line 673: range 00000000153061B1-000000001530621E
int __fastcall gmatch_aux(lua_State_0 *L)
{
  char *v1; // rbx
  const char *i; // rbp
  const char *v3; // rax

  v1 = (char *)lua_touserdata(L, -1001003);
  *((_QWORD *)v1 + 6) = L;
  for ( i = *(const char **)v1; *((_QWORD *)v1 + 4) >= (unsigned __int64)i; ++i )
  {
    reprepstate((MatchState_0 *)(v1 + 24));
    v3 = match((MatchState_0 *)(v1 + 24), i, *((const char **)v1 + 1));
    if ( v3 && *((const char **)v1 + 2) != v3 )
    {
      *((_QWORD *)v1 + 2) = v3;
      *(_QWORD *)v1 = v3;
      return push_captures((MatchState_0 *)(v1 + 24), i, v3);
    }
  }
  return 0;
};

// Line 689: range 0000000015306115-00000000153061B0
int __fastcall gmatch(lua_State_0 *L)
{
  const char *v1; // r13
  const char *v2; // r12
  char *v3; // rbp
  size_t lp; // [rsp+0h] [rbp-38h] BYREF
  size_t ls[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = luaL_checklstring(L, 1, ls);
  v2 = luaL_checklstring(L, 2, &lp);
  lua_settop(L, 2);
  v3 = (char *)lua_newuserdata(L, 0x240uLL);
  prepstate((MatchState_0 *)(v3 + 24), L, v1, ls[0], v2, lp);
  *(_QWORD *)v3 = v1;
  *((_QWORD *)v3 + 1) = v2;
  *((_QWORD *)v3 + 2) = 0LL;
  lua_pushcclosure(L, gmatch_aux, 3);
  return 1;
};

// Line 704: range 0000000015305C99-0000000015305E16
void __fastcall add_s(MatchState_0 *ms, luaL_Buffer_0 *b, const char *s, const char *e)
{
  lua_State_0 *v5; // r14
  const char *v6; // r13
  size_t i; // rbx
  size_t v8; // rax
  const unsigned __int16 **v9; // rax
  char v10; // si
  size_t n; // rax
  size_t l[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = ms->L;
  v6 = lua_tolstring(v5, 3, l);
  for ( i = 0LL; l[0] > i; ++i )
  {
    if ( v6[i] == 37 )
    {
      ++i;
      v9 = __ctype_b_loc();
      v10 = v6[i];
      if ( ((*v9)[(unsigned __int8)v10] & 0x800) != 0 )
      {
        if ( v10 == 48 )
        {
          luaL_addlstring(b, s, e - s);
        }
        else
        {
          push_onecapture(ms, v10 - 49, s, e);
          luaL_tolstring(v5, -1, 0LL);
          lua_rotate(v5, -2, -1);
          lua_settop(v5, -2);
          luaL_addvalue(b);
        }
      }
      else
      {
        if ( v10 != 37 )
          luaL_error(v5, "invalid use of '%c' in replacement string", 37LL);
        if ( b->n >= b->size )
          luaL_prepbuffsize(b, 1uLL);
        n = b->n;
        b->n = n + 1;
        b->b[n] = v6[i];
      }
    }
    else
    {
      if ( b->n >= b->size )
        luaL_prepbuffsize(b, 1uLL);
      v8 = b->n;
      b->n = v8 + 1;
      b->b[v8] = v6[i];
    }
  }
};

// Line 732: range 0000000015305E17-0000000015305F0C
void __fastcall add_value(MatchState_0 *ms, luaL_Buffer_0 *b, const char *s, const char *e, int tr)
{
  lua_State_0 *L; // r14
  int v8; // eax
  int v9; // eax
  const char *v10; // rax

  L = ms->L;
  if ( tr == 5 )
  {
    push_onecapture(ms, 0, s, e);
    lua_gettable(L, 3);
  }
  else
  {
    if ( tr != 6 )
    {
      add_s(ms, b, s, e);
      return;
    }
    lua_pushvalue(ms->L, 3);
    v8 = push_captures(ms, s, e);
    lua_callk(L, v8, 1, 0LL, 0LL);
  }
  if ( lua_toboolean(L, -1) )
  {
    if ( !lua_isstring(L, -1) )
    {
      v9 = lua_type(L, -1);
      v10 = lua_typename(L, v9);
      luaL_error(L, "invalid replacement value (a %s)", v10);
    }
  }
  else
  {
    lua_settop(L, -2);
    lua_pushlstring(L, s, e - s);
  }
  luaL_addvalue(b);
};

// Line 762: range 0000000015305F13-0000000015306114
int __fastcall str_gsub(lua_State_0 *L)
{
  char *v1; // rbp
  const char *v2; // r13
  int v3; // r12d
  lua_Integer v4; // r14
  char v5; // r15
  lua_Integer v6; // r12
  size_t v7; // rax
  const char *v8; // rax
  const char *v9; // rbx
  const char *lastmatch; // [rsp+8h] [rbp-22B0h]
  int tr; // [rsp+14h] [rbp-22A4h]
  luaL_Buffer_0 b; // [rsp+20h] [rbp-2298h] BYREF
  MatchState_0 ms; // [rsp+2040h] [rbp-278h] BYREF
  size_t lp; // [rsp+2270h] [rbp-48h] BYREF
  size_t srcl[8]; // [rsp+2278h] [rbp-40h] BYREF

  v1 = (char *)luaL_checklstring(L, 1, srcl);
  v2 = luaL_checklstring(L, 2, &lp);
  v3 = lua_type(L, 3);
  tr = v3;
  v4 = luaL_optinteger(L, 4, srcl[0] + 1);
  v5 = *v2;
  if ( v3 != 6 && (unsigned int)(v3 - 3) > 1 && v3 != 5 )
    luaL_argerror(L, 3, "string/function/table expected");
  luaL_buffinit(L, &b);
  if ( v5 == 94 )
  {
    ++v2;
    --lp;
  }
  prepstate(&ms, L, v1, srcl[0], v2, lp);
  v6 = 0LL;
  lastmatch = 0LL;
  do
  {
    if ( v6 >= v4 )
      break;
    reprepstate(&ms);
    v8 = match(&ms, v1, v2);
    v9 = v8;
    if ( !v8 || lastmatch == v8 )
    {
      if ( ms.src_end <= v1 )
        break;
      if ( b.n >= b.size )
        luaL_prepbuffsize(&b, 1uLL);
      v7 = b.n++;
      b.b[v7] = *v1++;
    }
    else
    {
      ++v6;
      add_value(&ms, &b, v1, v8, tr);
      v1 = (char *)v9;
      lastmatch = v9;
    }
  }
  while ( v5 != 94 );
  luaL_addlstring(&b, v1, ms.src_end - (const char *)v1);
  luaL_pushresult(&b);
  lua_pushinteger(L, v6);
  return 2;
};

// Line 908: range 000000001530630E-00000000153064B3
void __fastcall addquoted(luaL_Buffer_0 *b, const char *s, size_t len)
{
  size_t n; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // r13
  unsigned __int8 v9; // r12
  const unsigned __int16 *v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  char buff[10]; // [rsp+6h] [rbp-32h] BYREF

  if ( b->n >= b->size )
    luaL_prepbuffsize(b, 1uLL);
  n = b->n;
  b->n = n + 1;
  b->b[n] = 34;
  while ( 1 )
  {
    v8 = len - 1;
    if ( !len )
      break;
    v9 = *s;
    if ( v9 == 92 || v9 == 34 || v9 == 10 )
    {
      if ( b->n >= b->size )
        luaL_prepbuffsize(b, 1uLL);
      v6 = b->n;
      b->n = v6 + 1;
      b->b[v6] = 92;
      if ( b->n >= b->size )
        luaL_prepbuffsize(b, 1uLL);
      v7 = b->n;
      b->n = v7 + 1;
      b->b[v7] = *s;
    }
    else
    {
      v10 = *__ctype_b_loc();
      if ( (v10[v9] & 2) != 0 )
      {
        if ( (v10[*((unsigned __int8 *)s + 1)] & 0x800) != 0 )
          snprintf(buff, 0xAuLL, "\\%03d", v9);
        else
          snprintf(buff, 0xAuLL, off_1B23989B, v9);
        luaL_addstring(b, buff);
      }
      else
      {
        if ( b->n >= b->size )
          luaL_prepbuffsize(b, 1uLL);
        v11 = b->n;
        b->n = v11 + 1;
        b->b[v11] = *s;
      }
    }
    ++s;
    len = v8;
  }
  if ( b->n >= b->size )
    luaL_prepbuffsize(b, 1uLL);
  v12 = b->n;
  b->n = v12 + 1;
  b->b[v12] = 34;
};

// Line 934: range 00000000153064B5-00000000153064F8
void __fastcall checkdp(char *buff, int nb)
{
  struct lconv *v2; // rax
  _BYTE *v3; // rax

  if ( !memchr(buff, 46, nb) )
  {
    v2 = localeconv();
    v3 = memchr(buff, *v2->decimal_point, nb);
    if ( v3 )
      *v3 = 46;
  }
};

// Line 943: range 00000000153064FA-0000000015306616
void __fastcall addliteral(lua_State_0 *L, luaL_Buffer_0 *b, int arg)
{
  int v4; // eax
  const char *v5; // rax
  char *v6; // r13
  lua_Number v7; // xmm0_8
  int v8; // ebx
  int v9; // eax
  size_t len[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = lua_type(L, arg);
  if ( v4 == 3 )
  {
    v6 = luaL_prepbuffsize(b, 0x1ACuLL);
    if ( lua_isinteger(L, arg) )
    {
      if ( lua_tointegerx(L, arg, 0LL) == 0x8000000000000000LL )
        v9 = snprintf(v6, 0x1ACuLL, "0x%llx");
      else
        v9 = snprintf(v6, 0x1ACuLL, "%lld");
      v8 = v9;
    }
    else
    {
      v7 = lua_tonumberx(L, arg, 0LL);
      v8 = snprintf(v6, 0x1ACuLL, "%a", v7);
      checkdp(v6, v8);
    }
    b->n += v8;
  }
  else
  {
    if ( v4 <= 3 )
    {
      if ( (unsigned int)v4 <= 1 )
      {
        luaL_tolstring(L, arg, 0LL);
        luaL_addvalue(b);
        return;
      }
LABEL_14:
      luaL_argerror(L, arg, "value has no literal form");
    }
    if ( v4 != 4 )
      goto LABEL_14;
    v5 = lua_tolstring(L, arg, len);
    addquoted(b, v5, len[0]);
  }
};

// Line 981: range 0000000015305B9A-0000000015305C8F
const char *__fastcall scanformat(lua_State_0 *L, const char *strfrmt, char *form)
{
  const char *i; // rbx
  const unsigned __int16 *v5; // rax
  const char *v7; // rdx

  for ( i = strfrmt; *i && strchr("-+ #0", *i); ++i )
    ;
  if ( (unsigned __int64)(i - strfrmt) > 5 )
    luaL_error(L, "invalid format (repeated flags)");
  v5 = *__ctype_b_loc();
  if ( (v5[*(unsigned __int8 *)i] & 0x800) != 0 )
    ++i;
  if ( (v5[*(unsigned __int8 *)i] & 0x800) != 0 )
    ++i;
  if ( *i == 46 )
  {
    v7 = i + 1;
    if ( (v5[*((unsigned __int8 *)i + 1)] & 0x800) != 0 )
      v7 = i + 2;
    if ( (v5[*(unsigned __int8 *)v7] & 0x800) != 0 )
      i = v7 + 1;
    else
      i = v7;
  }
  if ( (v5[*(unsigned __int8 *)i] & 0x800) != 0 )
    luaL_error(L, "invalid format (width or precision too long)");
  *form = 37;
  memcpy(form + 1, strfrmt, i - strfrmt + 1);
  form[i - strfrmt + 2] = 0;
  return i;
};

// Line 1006: range 00000000153062AE-000000001530630D
void __fastcall addlenmod(char *form, const char *lenmod)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // kr08_8
  char *v6; // rdi
  char v7; // r13
  unsigned __int64 v8; // rbx

  v3 = strlen(form) + 1;
  v4 = v3 - 1;
  v5 = strlen(lenmod) + 1;
  v6 = &form[v3 - 2];
  v7 = *v6;
  strcpy(v6, lenmod);
  v8 = v4 + v5 - 1;
  form[v8 - 1] = v7;
  form[v8] = 0;
};

// Line 1016: range 0000000015306620-0000000015306964
int __fastcall str_format(lua_State_0 *L)
{
  int v1; // r15d
  const char *v2; // rbx
  const char *v3; // rbp
  int v4; // r13d
  size_t v5; // rax
  size_t v6; // rax
  const char *v7; // rax
  char v8; // al
  lua_Integer v9; // rax
  int v10; // r14d
  lua_Integer v11; // r14
  lua_Number v12; // xmm0_8
  const char *v13; // r14
  int result; // eax
  char *v15; // [rsp+0h] [rbp-20A8h]
  double v16; // [rsp+8h] [rbp-20A0h]
  size_t len; // [rsp+18h] [rbp-2090h] BYREF
  char form[32]; // [rsp+20h] [rbp-2088h] BYREF
  luaL_Buffer_0 b; // [rsp+40h] [rbp-2068h] BYREF
  size_t sfl[8]; // [rsp+2068h] [rbp-40h] BYREF

  v1 = lua_gettop(L);
  v2 = luaL_checklstring(L, 1, sfl);
  v3 = &v2[sfl[0]];
  luaL_buffinit(L, &b);
  v4 = 1;
  while ( v2 < v3 )
  {
    if ( *v2 == 37 )
    {
      if ( v2[1] == 37 )
      {
        if ( b.n >= b.size )
          luaL_prepbuffsize(&b, 1uLL);
        v6 = b.n++;
        b.b[v6] = v2[1];
        v2 += 2;
      }
      else
      {
        v15 = luaL_prepbuffsize(&b, 0x1ACuLL);
        if ( v1 < ++v4 )
          luaL_argerror(L, v4, "no value");
        v7 = scanformat(L, v2 + 1, form);
        v2 = v7 + 1;
        v8 = *v7;
        switch ( v8 )
        {
          case 'A':
          case 'a':
            addlenmod(form, &off_1B23A528[4]);
            v12 = luaL_checknumber(L, v4);
            v10 = snprintf(v15, 0x1ACuLL, form, v12);
            break;
          case 'E':
          case 'G':
          case 'e':
          case 'f':
          case 'g':
            v16 = luaL_checknumber(L, v4);
            addlenmod(form, &off_1B23A528[4]);
            v10 = snprintf(v15, 0x1ACuLL, form, v16);
            break;
          case 'X':
          case 'd':
          case 'i':
          case 'o':
          case 'u':
          case 'x':
            v11 = luaL_checkinteger(L, v4);
            addlenmod(form, &off_1A1920A6[1]);
            v10 = snprintf(v15, 0x1ACuLL, form, v11);
            break;
          case 'c':
            v9 = luaL_checkinteger(L, v4);
            v10 = snprintf(v15, 0x1ACuLL, form, v9);
            break;
          case 'q':
            addliteral(L, &b, v4);
            v10 = 0;
            break;
          case 's':
            v13 = luaL_tolstring(L, v4, &len);
            if ( !form[2] )
              goto LABEL_27;
            if ( strlen(v13) != len )
              luaL_argerror(L, v4, "string contains zeros");
            if ( strchr(form, 46) || len <= 0x63 )
            {
              v10 = snprintf(v15, 0x1ACuLL, form, v13);
              lua_settop(L, -2);
            }
            else
            {
LABEL_27:
              luaL_addvalue(&b);
              v10 = 0;
            }
            break;
          default:
            luaL_error(L, "invalid option '%%%c' to 'format'", (unsigned int)v8);
            return result;
        }
        b.n += v10;
      }
    }
    else
    {
      if ( b.n >= b.size )
        luaL_prepbuffsize(&b, 1uLL);
      v5 = b.n++;
      b.b[v5] = *v2++;
    }
  }
  luaL_pushresult(&b);
  return 1;
};

// Line 1180: range 0000000015303D37-0000000015303D43
int __fastcall digit(int c)
{
  return (unsigned int)(c - 48) <= 9;
};

// Line 1182: range 0000000015303D44-0000000015303D8E
int __fastcall getnum(const char **fmt, int df_0)
{
  const char *v3; // rax

  if ( digit(**fmt) )
  {
    df_0 = 0;
    do
    {
      v3 = (*fmt)++;
      df_0 = *v3 + 10 * df_0 - 48;
    }
    while ( digit(v3[1]) && df_0 <= 214748363 );
  }
  return df_0;
};

// Line 1199: range 0000000015303E0F-0000000015303E3B
int __fastcall getnumlimit(Header_0 *h, const char **fmt, int df_0)
{
  int result; // eax

  result = getnum(fmt, df_0);
  if ( (unsigned int)(result - 1) > 0xF )
    luaL_error(h->L, "integral size (%d) out of limits [1,%d]", (unsigned int)result, 16LL);
  return result;
};

// Line 1212: range 0000000015303D8F-0000000015303DA0
void __fastcall initheader(lua_State_0 *L, Header_0 *h)
{
  h->L = L;
  h->islittle = 1;
  h->maxalign = 1;
};

// Line 1221: range 0000000015303E42-0000000015304049
KOption_0 __fastcall getoption(Header_0 *h, const char **fmt, int *size)
{
  const char *v4; // rax
  char v5; // al
  KOption_0 result; // eax
  int v7; // eax

  v4 = (*fmt)++;
  v5 = *v4;
  *size = 0;
  switch ( v5 )
  {
    case ' ':
      result = Knop;
      break;
    case '!':
      h->maxalign = getnumlimit(h, fmt, 8);
      result = Knop;
      break;
    case '<':
      h->islittle = 1;
      result = Knop;
      break;
    case '=':
      h->islittle = 1;
      result = Knop;
      break;
    case '>':
      h->islittle = 0;
      result = Knop;
      break;
    case 'B':
      *size = 1;
      result = Kuint;
      break;
    case 'H':
      *size = 2;
      result = Kuint;
      break;
    case 'I':
      *size = getnumlimit(h, fmt, 4);
      result = Kuint;
      break;
    case 'J':
      *size = 8;
      result = Kuint;
      break;
    case 'L':
      *size = 8;
      result = Kuint;
      break;
    case 'T':
      *size = 8;
      result = Kuint;
      break;
    case 'X':
      result = Kpaddalign;
      break;
    case 'b':
      *size = 1;
      result = Kint;
      break;
    case 'c':
      v7 = getnum(fmt, -1);
      *size = v7;
      if ( v7 == -1 )
        luaL_error(h->L, "missing size for format option 'c'");
      result = Kchar;
      break;
    case 'd':
      *size = 8;
      result = Kfloat;
      break;
    case 'f':
      *size = 4;
      result = Kfloat;
      break;
    case 'h':
      *size = 2;
      result = Kint;
      break;
    case 'i':
      *size = getnumlimit(h, fmt, 4);
      result = Kint;
      break;
    case 'j':
      *size = 8;
      result = Kint;
      break;
    case 'l':
      *size = 8;
      result = Kint;
      break;
    case 'n':
      *size = 8;
      result = Kfloat;
      break;
    case 's':
      *size = getnumlimit(h, fmt, 8);
      result = Kstring;
      break;
    case 'x':
      *size = 1;
      result = Kpadding;
      break;
    case 'z':
      result = Kzstr;
      break;
    default:
      luaL_error(h->L, "invalid format option '%c'", (unsigned int)v5);
      return result;
  }
  return result;
};

// Line 1269: range 000000001530404E-000000001530411E
KOption_0 __fastcall getdetails(Header_0 *h, size_t totalsize, const char **fmt, int *psize, int *ntoalign)
{
  KOption_0 v8; // ebx
  int align[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v8 = getoption(h, fmt, psize);
  align[0] = *psize;
  if ( v8 == Kpaddalign && (!**fmt || getoption(h, fmt, align) == Kchar || !align[0]) )
    luaL_argerror(h->L, 1, "invalid next option for option 'X'");
  if ( align[0] <= 1 || v8 == Kchar )
  {
    *ntoalign = 0;
  }
  else
  {
    if ( align[0] > h->maxalign )
      align[0] = h->maxalign;
    if ( ((align[0] - 1) & align[0]) != 0 )
      luaL_argerror(h->L, 1, "format asks for alignment not power of 2");
    *ntoalign = (align[0] - ((align[0] - 1) & totalsize)) & (align[0] - 1);
  }
  return v8;
};

// Line 1296: range 00000000153048FC-00000000153049A4
void __fastcall packint(luaL_Buffer_0 *b, lua_Unsigned n, int islittle, int size, int neg)
{
  lua_Unsigned v5; // rbx
  __int64 v9; // r15
  char *v10; // rax
  __int64 v11; // rdx
  int i; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int j; // edx

  v5 = n;
  v9 = size;
  v10 = luaL_prepbuffsize(b, size);
  if ( islittle )
    v11 = 0LL;
  else
    v11 = size - 1;
  v10[v11] = n;
  for ( i = 1; i < size; ++i )
  {
    v5 >>= 8;
    if ( islittle )
      v13 = i;
    else
      v13 = size - 1 - i;
    v10[v13] = v5;
  }
  if ( size > 8 && neg != 0 )
  {
    for ( j = 8; j < size; ++j )
    {
      if ( islittle )
        v14 = j;
      else
        v14 = size - 1 - j;
      v10[v14] = -1;
    }
  }
  b->n += v9;
};

// Line 1318: range 0000000015303DA1-0000000015303DDF
void __fastcall copywithendian(volatile char *dest, const volatile char *src, int size, int islittle)
{
  volatile char *v4; // rax

  if ( islittle == 1 )
  {
    while ( size )
    {
      *dest = *src;
      --size;
      ++src;
      ++dest;
    }
  }
  else
  {
    v4 = &dest[size - 1];
    while ( size )
    {
      *v4 = *src;
      --size;
      ++src;
      --v4;
    }
  }
};

// Line 1330: range 00000000153049BC-0000000015304DD6
int __fastcall str_pack(lua_State_0 *L)
{
  size_t v1; // rbp
  int v2; // r12d
  KOption_0 v3; // ebx
  size_t v4; // rax
  int v5; // eax
  int v6; // r14d
  lua_Integer v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  char *v10; // rbx
  lua_Number v11; // xmm0_8
  float v12; // xmm0_4
  const char *v13; // rbx
  size_t v14; // rax
  unsigned __int64 v15; // rax
  const char *v16; // rbx
  const char *v17; // rbx
  size_t v18; // rax
  size_t v19; // rax
  int size; // [rsp+0h] [rbp-2098h] BYREF
  int ntoalign; // [rsp+4h] [rbp-2094h] BYREF
  size_t len; // [rsp+8h] [rbp-2090h] BYREF
  Ftypes_0 u; // [rsp+10h] [rbp-2088h] BYREF
  const char *fmt; // [rsp+38h] [rbp-2060h] BYREF
  Header_0 h; // [rsp+40h] [rbp-2058h] BYREF
  luaL_Buffer_0 b; // [rsp+50h] [rbp-2048h] BYREF

  fmt = luaL_checklstring(L, 1, 0LL);
  initheader(L, &h);
  lua_pushnil(L);
  luaL_buffinit(L, &b);
  v1 = 0LL;
  v2 = 1;
LABEL_2:
  while ( *fmt )
  {
    v3 = getdetails(&h, v1, &fmt, &size, &ntoalign);
    v1 += ntoalign + size;
    while ( 1 )
    {
      v5 = ntoalign--;
      if ( v5 <= 0 )
        break;
      if ( b.n >= b.size )
        luaL_prepbuffsize(&b, 1uLL);
      v4 = b.n++;
      b.b[v4] = 0;
    }
    v6 = v2 + 1;
    switch ( v3 )
    {
      case Kint:
        v7 = luaL_checkinteger(L, v6);
        if ( size <= 7 )
        {
          v8 = 1LL << (8 * (unsigned __int8)size - 1);
          if ( -v8 > v7 || v7 >= v8 )
            luaL_argerror(L, v6, "integer overflow");
        }
        packint(&b, v7, h.islittle, size, (unsigned __int64)v7 >> 63);
        ++v2;
        break;
      case Kuint:
        v9 = luaL_checkinteger(L, v6);
        if ( size <= 7 && 1LL << (8 * (unsigned __int8)size) <= v9 )
          luaL_argerror(L, v6, "unsigned overflow");
        packint(&b, v9, h.islittle, size, 0);
        ++v2;
        break;
      case Kfloat:
        v10 = luaL_prepbuffsize(&b, size);
        v11 = luaL_checknumber(L, v6);
        if ( size == 4 )
        {
          v12 = v11;
          u.f = v12;
        }
        else
        {
          u.d = v11;
        }
        copywithendian(v10, (const volatile char *)&u, size, h.islittle);
        b.n += size;
        ++v2;
        break;
      case Kchar:
        v13 = luaL_checklstring(L, v6, &len);
        if ( size < len )
          luaL_argerror(L, v6, "string longer than given size");
        luaL_addlstring(&b, v13, len);
        while ( 1 )
        {
          v15 = len++;
          if ( v15 >= size )
            break;
          if ( b.n >= b.size )
            luaL_prepbuffsize(&b, 1uLL);
          v14 = b.n++;
          b.b[v14] = 0;
        }
        ++v2;
        break;
      case Kstring:
        v16 = luaL_checklstring(L, v6, &len);
        if ( size <= 7 && 1LL << (8 * (unsigned __int8)size) <= len )
          luaL_argerror(L, v6, "string length does not fit in given size");
        packint(&b, len, h.islittle, size, 0);
        luaL_addlstring(&b, v16, len);
        v1 += len;
        ++v2;
        break;
      case Kzstr:
        v17 = luaL_checklstring(L, v6, &len);
        if ( strlen(v17) != len )
          luaL_argerror(L, v6, "string contains zeros");
        luaL_addlstring(&b, v17, len);
        if ( b.n >= b.size )
          luaL_prepbuffsize(&b, 1uLL);
        v18 = b.n++;
        b.b[v18] = 0;
        v1 += len + 1;
        ++v2;
        break;
      case Kpadding:
        if ( b.n >= b.size )
          luaL_prepbuffsize(&b, 1uLL);
        v19 = b.n++;
        b.b[v19] = 0;
        break;
      case Kpaddalign:
      case Knop:
        goto LABEL_2;
      default:
        ++v2;
        break;
    }
  }
  luaL_pushresult(&b);
  return 1;
};

// Line 1417: range 0000000015304125-00000000153041E6
int __fastcall str_packsize(lua_State_0 *L)
{
  unsigned __int64 v1; // rbp
  KOption_0 v2; // ebx
  int size; // [rsp+0h] [rbp-38h] BYREF
  int ntoalign; // [rsp+4h] [rbp-34h] BYREF
  const char *fmt; // [rsp+8h] [rbp-30h] BYREF
  Header_0 h; // [rsp+10h] [rbp-28h] BYREF

  fmt = luaL_checklstring(L, 1, 0LL);
  initheader(L, &h);
  v1 = 0LL;
  while ( *fmt )
  {
    v2 = getdetails(&h, v1, &fmt, &size, &ntoalign);
    size += ntoalign;
    if ( 0x7FFFFFFFLL - size < v1 )
      luaL_argerror(L, 1, "format result too large");
    v1 += size;
    if ( (unsigned int)(v2 - 4) <= 1 )
      luaL_argerror(L, 1, "variable-length format");
  }
  lua_pushinteger(L, v1);
  return 1;
};

// Line 1451: range 00000000153041E7-00000000153042CF
lua_Integer __fastcall unpackint(lua_State_0 *L, const char *str, int islittle, int size, int issigned)
{
  int v6; // r14d
  int v7; // eax
  lua_Integer v8; // rbx
  __int64 v9; // rdx
  lua_Integer v10; // rbx
  int v12; // r15d
  __int64 v13; // rax

  v6 = 8;
  if ( size <= 8 )
    v6 = size;
  v7 = v6 - 1;
  v8 = 0LL;
  while ( v7 >= 0 )
  {
    v10 = v8 << 8;
    if ( islittle )
      v9 = v7;
    else
      v9 = size - 1 - v7;
    v8 = (unsigned __int8)str[v9] | (unsigned __int64)v10;
    --v7;
  }
  if ( size > 7 )
  {
    if ( size > 8 )
    {
      if ( v8 >= 0 || issigned == 0 )
        v12 = 0;
      else
        v12 = 255;
      while ( v6 < size )
      {
        if ( islittle )
          v13 = v6;
        else
          v13 = size - 1 - v6;
        if ( (unsigned __int8)str[v13] != v12 )
          luaL_error(L, "%d-byte integer does not fit into Lua Integer", (unsigned int)size);
        ++v6;
      }
    }
  }
  else if ( issigned )
  {
    return ((1LL << (8 * (unsigned __int8)size - 1)) ^ v8) - (1LL << (8 * (unsigned __int8)size - 1));
  }
  return v8;
};

// Line 1476: range 00000000153042D6-0000000015304555
int __fastcall str_unpack(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8
  const char *v2; // r14
  size_t v3; // rbx
  lua_Integer v4; // rax
  size_t v5; // rbx
  int v6; // r13d
  lua_Integer v7; // rax
  KOption_0 v8; // ebp
  size_t v9; // rbx
  int v10; // r15d
  double f; // xmm0_8
  size_t v12; // r13
  size_t v13; // rbp
  size_t v14; // rbp
  int size; // [rsp+8h] [rbp-90h] BYREF
  int ntoalign; // [rsp+Ch] [rbp-8Ch] BYREF
  Ftypes_0 u; // [rsp+10h] [rbp-88h] BYREF
  size_t ld; // [rsp+40h] [rbp-58h] BYREF
  const char *fmt; // [rsp+48h] [rbp-50h] BYREF
  Header_0 h; // [rsp+50h] [rbp-48h] BYREF

  fmt = luaL_checklstring(L, 1, 0LL);
  v2 = luaL_checklstring(L, 2, &ld);
  v3 = ld;
  v4 = luaL_optinteger(L, 3, 1LL);
  v5 = posrelat(v4, v3) - 1;
  if ( ld < v5 )
    luaL_argerror(L, 3, "initial position out of string");
  initheader(L, &h);
  v6 = 0;
  while ( *fmt )
  {
    v8 = getdetails(&h, v5, &fmt, &size, &ntoalign);
    if ( ntoalign + (__int64)size > ~v5 || v5 + ntoalign + size > ld )
      luaL_argerror(L, 2, "data string too short");
    v9 = ntoalign + v5;
    luaL_checkstack(L, 2, "too many results");
    v10 = v6 + 1;
    switch ( v8 )
    {
      case Kint:
      case Kuint:
        v7 = unpackint(L, &v2[v9], h.islittle, size, v8 == Kint);
        lua_pushinteger(L, v7);
        ++v6;
        break;
      case Kfloat:
        copywithendian((volatile char *)&u, &v2[v9], size, h.islittle);
        if ( size == 4 )
          f = u.f;
        else
          f = u.d;
        lua_pushnumber(L, f, v1);
        ++v6;
        break;
      case Kchar:
        lua_pushlstring(L, &v2[v9], size);
        ++v6;
        break;
      case Kstring:
        v12 = unpackint(L, &v2[v9], h.islittle, size, 0);
        v13 = v9 + v12;
        if ( v9 + v12 + size > ld )
          luaL_argerror(L, 2, "data string too short");
        lua_pushlstring(L, &v2[size + v9], v12);
        v6 = v10;
        v9 = v13;
        break;
      case Kzstr:
        v14 = (int)strlen(&v2[v9]);
        lua_pushlstring(L, &v2[v9], v14);
        v9 += v14 + 1;
        ++v6;
        break;
      case Kpadding:
      case Kpaddalign:
      case Knop:
        break;
      default:
        ++v6;
        break;
    }
    v5 = size + v9;
  }
  lua_pushinteger(L, v5 + 1);
  return v6 + 1;
};

// Line 1564: range 00000000153069E8-0000000015306A5C
void __fastcall createmetatable(lua_State_0 *L)
{
  lua_createtable(L, 0, 1);
  lua_pushstring(L, &off_1B23A528[4]);
  lua_pushvalue(L, -2);
  lua_setmetatable(L, -2);
  lua_settop(L, -2);
  lua_pushvalue(L, -2);
  lua_setfield(L, -2, "__index");
  lua_settop(L, -2);
};

// Line 1579: range 0000000015306A5D-0000000015306AA5
int __fastcall luaopen_string(lua_State_0 *L)
{
  lua_Number v1; // xmm1_8

  luaL_checkversion_(L, 503.0, v1, 0x88uLL);
  lua_createtable(L, 0, 17);
  luaL_setfuncs(L, strlib, 0);
  createmetatable(L);
  return 1;
};
