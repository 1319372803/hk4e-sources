// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lapi.c

// Line 61: range 00000000152EC14B-00000000152EC1C9
TValue *__fastcall index2addr(lua_State_0 *L, int idx)
{
  CallInfo_0 *ci; // rdx
  TValue *result; // rax
  StkId func; // rdx
  Value_0 v5; // rdx

  ci = L->ci;
  if ( idx <= 0 )
  {
    if ( idx >= -1000999 )
    {
      return &L->top[idx];
    }
    else if ( idx == -1001000 )
    {
      return &L->l_G->l_registry;
    }
    else
    {
      func = ci->func;
      if ( func->tt_ == 22 )
      {
        return (TValue *)&luaO_nilobject_;
      }
      else
      {
        v5.gc = (GCObject_0 *)func->value_;
        if ( *(unsigned __int8 *)(v5.i + 10) < -1001000 - idx )
          return (TValue *)&luaO_nilobject_;
        else
          return (TValue *)(v5.i + 16 * (-1001001 - idx + 2LL));
      }
    }
  }
  else
  {
    result = &ci->func[idx];
    if ( L->top <= result )
      return (TValue *)&luaO_nilobject_;
  }
  return result;
};

// Line 91: range 00000000152EC2CC-00000000152EC2DB
void __fastcall growstack(lua_State_0 *L, void *ud)
{
  luaD_growstack(L, *(_DWORD *)ud);
};

// Line 97: range 00000000152EC45D-00000000152EC4E4
int __fastcall lua_checkstack(lua_State_0 *L, int n)
{
  CallInfo_0 *ci; // rbp
  StkId top; // rdx
  int v4; // edx
  int v6; // eax
  TValue *v7; // rax
  int ud[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  ud[0] = n;
  ci = L->ci;
  top = L->top;
  if ( L->stack_last - top > n )
  {
    v4 = 1;
  }
  else
  {
    if ( 1000000 - n < (int)(top - L->stack + 5) )
      return 0;
    v6 = luaD_rawrunprotected(L, growstack, ud);
    v4 = v6 == 0;
    if ( v6 )
      return v4;
  }
  v7 = &L->top[ud[0]];
  if ( ci->top < v7 )
    ci->top = v7;
  return v4;
};

// Line 118: range 00000000152EC4E6-00000000152EC531
void __fastcall lua_xmove(lua_State_0 *from, lua_State_0 *to, int n)
{
  int i; // ecx
  StkId top; // r8
  TValue *v6; // rax
  __int64 v7; // rdx

  if ( from != to )
  {
    from->top -= n;
    for ( i = 0; i < n; ++i )
    {
      top = to->top;
      v6 = &from->top[i];
      v7 = *(_QWORD *)&v6->tt_;
      top->value_.i = v6->value_.i;
      *(_QWORD *)&top->tt_ = v7;
      ++to->top;
    }
  }
};

// Line 137: range 00000000152EC532-00000000152EC547
lua_CFunction __fastcall lua_atpanic(lua_State_0 *L, lua_CFunction panicf)
{
  global_State_0 *l_G; // rax
  int (*panic)(lua_State_0 *); // rdx

  l_G = L->l_G;
  panic = l_G->panic;
  l_G->panic = panicf;
  return panic;
};

// Line 146: range 00000000152EC548-00000000152EC55E
const lua_Number *__fastcall lua_version(lua_State_0 *L)
{
  if ( L )
    return L->l_G->version;
  else
    return &version_3784;
};

// Line 160: range 00000000152EC55F-00000000152EC580
int __fastcall lua_absindex(lua_State_0 *L, int idx)
{
  int result; // eax

  result = idx;
  if ( (unsigned int)idx >= 0xFFF0B9D9 || idx == 0 )
    return L->top - L->ci->func + idx;
  return result;
};

// Line 168: range 00000000152EC581-00000000152EC597
int __fastcall lua_gettop(lua_State_0 *L)
{
  return L->top - &L->ci->func[1];
};

// Line 173: range 00000000152EC598-00000000152EC5DD
void __fastcall lua_settop(lua_State_0 *L, int idx)
{
  StkId func; // rcx
  StkId top; // rdx
  TValue *v4; // rax

  func = L->ci->func;
  if ( idx >= 0 )
  {
    while ( 1 )
    {
      top = L->top;
      v4 = &func[idx + 1];
      if ( top >= v4 )
        break;
      L->top = top + 1;
      top->tt_ = 0;
    }
    L->top = v4;
  }
  else
  {
    L->top += idx + 1;
  }
};

// Line 194: range 00000000152EC1CA-00000000152EC1EE
void __fastcall reverse(lua_State_0 *L, StkId from, StkId to)
{
  Value_0 v3; // r8
  __int64 v4; // r9

  while ( from < to )
  {
    v3.gc = (GCObject_0 *)from->value_;
    v4 = *(_QWORD *)&from->tt_;
    *(__m128i *)from = _mm_loadu_si128((const __m128i *)to);
    to->value_ = v3;
    *(_QWORD *)&to->tt_ = v4;
    ++from;
    --to;
  }
};

// Line 207: range 00000000152EC5DE-00000000152EC656
void __fastcall lua_rotate(lua_State_0 *L, int idx, int n)
{
  TValue *v4; // r12
  TValue *v5; // rax
  TValue *v6; // r13
  TValue *v7; // rbx

  v4 = L->top - 1;
  v5 = index2addr(L, idx);
  v6 = v5;
  if ( n < 0 )
    v7 = (TValue *)((char *)v5 - 16 - 16LL * n);
  else
    v7 = &v4[-n];
  reverse(L, v5, v7);
  reverse(L, v7 + 1, v4);
  reverse(L, v6, v4);
};

// Line 222: range 00000000152EC658-00000000152EC6B3
void __fastcall lua_copy(lua_State_0 *L, int fromidx, int toidx)
{
  const __m128i *v4; // r12
  StkId func; // rax

  v4 = (const __m128i *)index2addr(L, fromidx);
  *(__m128i *)index2addr(L, toidx) = _mm_loadu_si128(v4);
  if ( toidx < -1001000 && (v4->m128i_i8[8] & 0x40) != 0 )
  {
    func = L->ci->func;
    if ( (*(_BYTE *)(func->value_.i + 9) & 4) != 0 && (*(_BYTE *)(v4->m128i_i64[0] + 9) & 3) != 0 )
      luaC_barrier_(L, func->value_.gc, (GCObject_0 *)v4->m128i_i64[0]);
  }
};

// Line 237: range 00000000152EC6B5-00000000152EC6E0
void __fastcall lua_pushvalue(lua_State_0 *L, int idx)
{
  StkId top; // rbp
  TValue *v3; // rax
  __int64 v4; // rdx

  top = L->top;
  v3 = index2addr(L, idx);
  v4 = *(_QWORD *)&v3->tt_;
  top->value_.i = v3->value_.i;
  *(_QWORD *)&top->tt_ = v4;
  ++L->top;
};

// Line 252: range 00000000152EC6E1-00000000152EC6FA
int __fastcall lua_type(lua_State_0 *L, int idx)
{
  TValue *v2; // rax

  v2 = index2addr(L, idx);
  if ( v2 == &luaO_nilobject_ )
    return -1;
  else
    return v2->tt_ & 0xF;
};

// Line 260: range 00000000152EC6FB-00000000152EC709
const char *__fastcall lua_typename(lua_State_0 *L, int t)
{
  return luaT_typenames_[t + 1];
};

// Line 265: range 00000000152EC70A-00000000152EC723
int __fastcall lua_iscfunction(lua_State_0 *L, int idx)
{
  TValue *v2; // rax

  v2 = index2addr(L, idx);
  return v2->tt_ == 102 || v2->tt_ == 22;
};

// Line 271: range 00000000152EC724-00000000152EC733
int __fastcall lua_isinteger(lua_State_0 *L, int idx)
{
  return index2addr(L, idx)->tt_ == 19;
};

// Line 276: range 00000000152EC734-00000000152EC75A
int __fastcall lua_isnumber(lua_State_0 *L, int idx)
{
  TValue *v2; // rax
  lua_Number n[2]; // [rsp+8h] [rbp-10h] BYREF

  v2 = index2addr(L, idx);
  if ( v2->tt_ == 3 )
    return 1;
  else
    return luaV_tonumber_(v2, n);
};

// Line 284: range 00000000152EC75C-00000000152EC773
int __fastcall lua_isstring(lua_State_0 *L, int idx)
{
  return (index2addr(L, idx)->tt_ & 0xFu) - 3 <= 1;
};

// Line 290: range 00000000152EC774-00000000152EC78D
int __fastcall lua_isuserdata(lua_State_0 *L, int idx)
{
  TValue *v2; // rax

  v2 = index2addr(L, idx);
  return v2->tt_ == 2 || v2->tt_ == 71;
};

// Line 295: range 00000000152EC78E-00000000152EC7DD
int __fastcall lua_rawequal(lua_State_0 *L, int index1, int index2)
{
  TValue *v4; // rbp
  TValue *v5; // rax

  v4 = index2addr(L, index1);
  v5 = index2addr(L, index2);
  if ( v4 == &luaO_nilobject_ )
    return 0;
  if ( v5 == &luaO_nilobject_ )
    return 0;
  return luaV_equalobj(0LL, v4, v5);
};

// Line 302: range 00000000152EC7DF-00000000152EC828
void __fastcall lua_arith(lua_State_0 *L, int op)
{
  if ( (unsigned int)(op - 12) <= 1 )
  {
    *(__m128i *)L->top = _mm_loadu_si128((const __m128i *)&L->top[-1]);
    ++L->top;
  }
  luaO_arith(L, op, (const TValue *)L->top - 2, (const TValue *)L->top - 1, L->top - 2);
  --L->top;
};

// Line 318: range 00000000152EC82A-00000000152EC8BA
int __fastcall lua_compare(lua_State_0 *L, int index1, int index2, int op)
{
  TValue *v6; // r12
  TValue *v7; // rax

  v6 = index2addr(L, index1);
  v7 = index2addr(L, index2);
  if ( v6 == &luaO_nilobject_ )
    return 0;
  if ( v7 == &luaO_nilobject_ )
    return 0;
  if ( op == 1 )
    return luaV_lessthan(L, v6, v7);
  if ( op == 2 )
    return luaV_lessequal(L, v6, v7);
  if ( op )
    return 0;
  return luaV_equalobj(L, v6, v7);
};

// Line 337: range 00000000152EC8BC-00000000152EC8DE
size_t __fastcall lua_stringtonumber(lua_State_0 *L, const char *s)
{
  size_t result; // rax

  result = luaO_str2num(s, L->top);
  if ( result )
    ++L->top;
  return result;
};

// Line 345: range 00000000152EC8DF-00000000152EC92E
lua_Number __fastcall lua_tonumberx(lua_State_0 *L, int idx, int *pisnum)
{
  TValue *v4; // rax
  int v5; // eax
  lua_Number n[2]; // [rsp+8h] [rbp-10h] BYREF

  v4 = index2addr(L, idx);
  if ( v4->tt_ == 3 )
  {
    n[0] = v4->value_.n;
    v5 = 1;
  }
  else
  {
    v5 = luaV_tonumber_(v4, n);
    if ( !v5 )
      n[0] = 0.0;
  }
  if ( pisnum )
    *pisnum = v5;
  return n[0];
};

// Line 356: range 00000000152EC930-00000000152EC981
lua_Integer __fastcall lua_tointegerx(lua_State_0 *L, int idx, int *pisnum)
{
  TValue *v4; // rax
  int v5; // eax
  lua_Integer res[2]; // [rsp+8h] [rbp-10h] BYREF

  v4 = index2addr(L, idx);
  if ( v4->tt_ == 19 )
  {
    res[0] = v4->value_.i;
    v5 = 1;
  }
  else
  {
    v5 = luaV_tointeger(v4, res, 0);
    if ( !v5 )
      res[0] = 0LL;
  }
  if ( pisnum )
    *pisnum = v5;
  return res[0];
};

// Line 366: range 00000000152EC983-00000000152EC9D4
lua_Integer __fastcall lua_tointegerx_HK4E(lua_State_0 *L, int idx, int *pisnum)
{
  TValue *v4; // rax
  int v5; // eax
  lua_Integer res[2]; // [rsp+8h] [rbp-10h] BYREF

  v4 = index2addr(L, idx);
  if ( v4->tt_ == 19 )
  {
    res[0] = v4->value_.i;
    v5 = 1;
  }
  else
  {
    v5 = luaV_tointeger(v4, res, 1);
    if ( !v5 )
      res[0] = 0LL;
  }
  if ( pisnum )
    *pisnum = v5;
  return res[0];
};

// Line 378: range 00000000152EC9D6-00000000152ECA00
int __fastcall lua_toboolean(lua_State_0 *L, int idx)
{
  TValue *v2; // rdx
  int result; // eax

  v2 = index2addr(L, idx);
  result = v2->tt_;
  if ( !result )
    return 0;
  if ( result != 1 )
    return 1;
  if ( !v2->value_.b )
    return 0;
  return result;
};

// Line 383: range 00000000152ECA01-00000000152ECA8B
const char *__fastcall lua_tolstring(lua_State_0 *L, int idx, size_t *len)
{
  TValue *v5; // rsi
  int v6; // eax
  Value_0 v7; // rax
  size_t v8; // rax

  v5 = index2addr(L, idx);
  v6 = v5->tt_ & 0xF;
  if ( v6 == 4 )
  {
LABEL_6:
    if ( len )
    {
      v7.gc = (GCObject_0 *)v5->value_;
      if ( *(_BYTE *)(v5->value_.i + 8) == 4 )
        v8 = *(unsigned __int8 *)(v7.i + 11);
      else
        v8 = *(_QWORD *)(v7.i + 16);
      *len = v8;
    }
    return (const char *)(v5->value_.i + 24);
  }
  if ( v6 == 3 )
  {
    luaO_tostring(L, v5);
    if ( L->l_G->GCdebt > 0 )
      luaC_step(L);
    v5 = index2addr(L, idx);
    goto LABEL_6;
  }
  if ( len )
    *len = 0LL;
  return 0LL;
};

// Line 402: range 00000000152ECA8D-00000000152ECAE6
size_t __fastcall lua_rawlen(lua_State_0 *L, int idx)
{
  TValue *v2; // rax
  int v3; // edx

  v2 = index2addr(L, idx);
  v3 = v2->tt_ & 0x3F;
  if ( v3 == 7 )
    return *(_QWORD *)(v2->value_.i + 24);
  if ( (v2->tt_ & 0x3Fu) > 7 )
  {
    if ( v3 == 20 )
      return *(_QWORD *)(v2->value_.i + 16);
    else
      return 0LL;
  }
  else if ( v3 == 4 )
  {
    return *(unsigned __int8 *)(v2->value_.i + 11);
  }
  else if ( v3 == 5 )
  {
    return luaH_getn((Table_0 *)v2->value_.gc);
  }
  else
  {
    return 0LL;
  }
};

// Line 415: range 00000000152ECAE8-00000000152ECB0B
lua_CFunction __fastcall lua_tocfunction(lua_State_0 *L, int idx)
{
  TValue *v2; // rax
  int tt; // edx

  v2 = index2addr(L, idx);
  tt = v2->tt_;
  if ( tt == 22 )
    return (lua_CFunction)v2->value_.i;
  if ( tt == 102 )
    return *(lua_CFunction *)(v2->value_.i + 24);
  return 0LL;
};

// Line 424: range 00000000152ECB0C-00000000152ECB32
void *__fastcall lua_touserdata(lua_State_0 *L, int idx)
{
  TValue *v2; // rax
  int v3; // edx

  v2 = index2addr(L, idx);
  v3 = v2->tt_ & 0xF;
  if ( v3 == 2 )
    return (void *)v2->value_.i;
  if ( v3 == 7 )
    return (void *)(v2->value_.i + 40);
  return 0LL;
};

// Line 434: range 00000000152ECB33-00000000152ECB47
lua_State_0 *__fastcall lua_tothread(lua_State_0 *L, int idx)
{
  TValue *v2; // rax

  v2 = index2addr(L, idx);
  if ( v2->tt_ == 72 )
    return (lua_State_0 *)v2->value_.i;
  else
    return 0LL;
};

// Line 440: range 00000000152ECB48-00000000152ECB86
const void *__fastcall lua_topointer(lua_State_0 *L, int idx)
{
  TValue *v2; // rax
  const void *result; // rax

  v2 = index2addr(L, idx);
  switch ( v2->tt_ & 0x3F )
  {
    case 2:
      result = (const void *)v2->value_.i;
      break;
    case 5:
      result = (const void *)v2->value_.i;
      break;
    case 6:
      result = (const void *)v2->value_.i;
      break;
    case 7:
      result = (const void *)(v2->value_.i + 40);
      break;
    case 8:
      result = (const void *)v2->value_.i;
      break;
    case 0x16:
      result = (const void *)v2->value_.i;
      break;
    case 0x26:
      result = (const void *)v2->value_.i;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
};

// Line 462: range 00000000152ECB87-00000000152ECB9E
void __fastcall lua_pushnil(lua_State_0 *L)
{
  L->top->tt_ = 0;
  ++L->top;
};

// Line 470: range 00000000152ECB9F-00000000152ECBBA
void __fastcall lua_pushnumber(lua_State_0 *L, lua_Number a2, lua_Number n)
{
  StkId top; // rax

  top = L->top;
  top->value_.n = a2;
  top->tt_ = 3;
  ++L->top;
};

// Line 478: range 00000000152ECBBB-00000000152ECBD5
void __fastcall lua_pushinteger(lua_State_0 *L, lua_Integer n)
{
  StkId top; // rax

  top = L->top;
  top->value_.i = n;
  top->tt_ = 19;
  ++L->top;
};

// Line 489: range 00000000152ECBD6-00000000152ECC39
const char *__fastcall lua_pushlstring(lua_State_0 *L, const char *s, size_t len)
{
  TString_0 *v3; // rbp
  StkId top; // rdx

  if ( len )
    v3 = luaS_newlstr(L, s, len);
  else
    v3 = luaS_new(L, &off_1B23A528[4]);
  top = L->top;
  top->value_.i = (lua_Integer)v3;
  top->tt_ = v3->tt | 0x40;
  ++L->top;
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
  return (const char *)&v3[1];
};

// Line 501: range 00000000152ECC3B-00000000152ECC9F
const char *__fastcall lua_pushstring(lua_State_0 *L, const char *s)
{
  TString_0 *v2; // rax
  StkId top; // rcx
  const char *v4; // rbx

  if ( s )
  {
    v2 = luaS_new(L, s);
    top = L->top;
    top->value_.i = (lua_Integer)v2;
    top->tt_ = v2->tt | 0x40;
    v4 = (const char *)&v2[1];
  }
  else
  {
    L->top->tt_ = 0;
    v4 = 0LL;
  }
  ++L->top;
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
  return v4;
};

// Line 519: range 00000000152ECCA1-00000000152ECCCF
const char *__fastcall lua_pushvfstring(lua_State_0 *L, const char *fmt, __va_list_tag *argp)
{
  const char *v3; // rbp

  v3 = luaO_pushvfstring(L, fmt, argp);
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
  return v3;
};

// Line 529: range 00000000152ECCD1-00000000152ECD83
const char *lua_pushfstring(lua_State_0 *L, const char *fmt, ...)
{
  const char *v2; // rbp
  va_list argp; // [rsp+8h] [rbp-E0h] BYREF

  va_start(argp, fmt);
  v2 = luaO_pushvfstring(L, fmt, (__va_list_tag *)argp);
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
  return v2;
};

// Line 542: range 00000000152ECD85-00000000152ECE20
void __fastcall lua_pushcclosure(lua_State_0 *L, lua_CFunction fn, int n)
{
  StkId v3; // rax
  int v4; // ebx
  CClosure_0 *v5; // rax
  StkId top; // rdx

  if ( n )
  {
    v4 = n;
    v5 = luaF_newCclosure(L, n);
    v5->f = fn;
    L->top -= v4;
    while ( v4 )
    {
      *(__m128i *)&(&v5->gclist)[2 * v4] = _mm_loadu_si128((const __m128i *)&L->top[v4 - 1]);
      --v4;
    }
    top = L->top;
    top->value_.i = (lua_Integer)v5;
    top->tt_ = 102;
    ++L->top;
    if ( L->l_G->GCdebt > 0 )
      luaC_step(L);
  }
  else
  {
    v3 = L->top;
    v3->value_.i = (lua_Integer)fn;
    v3->tt_ = 22;
    ++L->top;
  }
};

// Line 569: range 00000000152ECE22-00000000152ECE43
void __fastcall lua_pushboolean(lua_State_0 *L, int b)
{
  StkId top; // rax

  top = L->top;
  top->value_.b = b != 0;
  top->tt_ = 1;
  ++L->top;
};

// Line 577: range 00000000152ECE44-00000000152ECE5E
void __fastcall lua_pushlightuserdata(lua_State_0 *L, void *p)
{
  StkId top; // rax

  top = L->top;
  top->value_.i = (lua_Integer)p;
  top->tt_ = 2;
  ++L->top;
};

// Line 585: range 00000000152ECE5F-00000000152ECE8A
int __fastcall lua_pushthread(lua_State_0 *L)
{
  StkId top; // rax

  top = L->top;
  top->value_.i = (lua_Integer)L;
  top->tt_ = 72;
  ++L->top;
  return L->l_G->mainthread == L;
};

// Line 598: range 00000000152EC2DC-00000000152EC36F
int __fastcall auxgetstr(lua_State_0 *L, const TValue *t, const char *k)
{
  TString_0 *v4; // rax
  TString_0 *v5; // r12
  const TValue *v6; // r8
  StkId v7; // rax
  StkId v8; // rdx
  StkId top; // rax
  __int64 v11; // rdi

  v4 = luaS_new(L, k);
  v5 = v4;
  if ( t->tt_ == 69 )
  {
    v6 = luaH_getstr((Table_0 *)t->value_.gc, v4);
    if ( v6->tt_ )
    {
      top = L->top;
      v11 = *(_QWORD *)&v6->tt_;
      top->value_.i = v6->value_.i;
      *(_QWORD *)&top->tt_ = v11;
      ++L->top;
      return L->top[-1].tt_ & 0xF;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = L->top;
  v7->value_.i = (lua_Integer)v5;
  v7->tt_ = v5->tt | 0x40;
  v8 = L->top;
  L->top = v8 + 1;
  luaV_finishget(L, t, v8, v8, v6);
  return L->top[-1].tt_ & 0xF;
};

// Line 615: range 00000000152ECE8B-00000000152ECEBD
int __fastcall lua_getglobal(lua_State_0 *L, const char *name)
{
  const TValue *v2; // rax

  v2 = luaH_getint((Table_0 *)L->l_G->l_registry.value_.gc, 2LL);
  return auxgetstr(L, v2, name);
};

// Line 622: range 00000000152ECEBE-00000000152ECF2F
int __fastcall lua_gettable(lua_State_0 *L, int idx)
{
  TValue *v3; // rbp
  const TValue *v4; // r8
  StkId top; // rax
  __int64 v7; // rdi

  v3 = index2addr(L, idx);
  if ( v3->tt_ == 69 )
  {
    v4 = luaH_get((Table_0 *)v3->value_.gc, (const TValue *)L->top - 1);
    if ( v4->tt_ )
    {
      top = L->top;
      v7 = *(_QWORD *)&v4->tt_;
      top[-1].value_.i = v4->value_.i;
      *(_QWORD *)&top[-1].tt_ = v7;
      return L->top[-1].tt_ & 0xF;
    }
  }
  else
  {
    v4 = 0LL;
  }
  luaV_finishget(L, v3, L->top - 1, L->top - 1, v4);
  return L->top[-1].tt_ & 0xF;
};

// Line 632: range 00000000152ECF31-00000000152ECF56
int __fastcall lua_getfield(lua_State_0 *L, int idx, const char *k)
{
  TValue *v4; // rax

  v4 = index2addr(L, idx);
  return auxgetstr(L, v4, k);
};

// Line 638: range 00000000152ECF57-00000000152ECFDE
int __fastcall lua_geti(lua_State_0 *L, int idx, lua_Integer n)
{
  TValue *v5; // rax
  const TValue *v6; // rbp
  const TValue *v7; // r8
  StkId v8; // rax
  StkId v9; // rdx
  StkId top; // rax
  __int64 v12; // rdi

  v5 = index2addr(L, idx);
  v6 = v5;
  if ( v5->tt_ == 69 )
  {
    v7 = luaH_getint((Table_0 *)v5->value_.gc, n);
    if ( v7->tt_ )
    {
      top = L->top;
      v12 = *(_QWORD *)&v7->tt_;
      top->value_.i = v7->value_.i;
      *(_QWORD *)&top->tt_ = v12;
      ++L->top;
      return L->top[-1].tt_ & 0xF;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = L->top;
  v8->value_.i = n;
  v8->tt_ = 19;
  v9 = L->top;
  L->top = v9 + 1;
  luaV_finishget(L, v6, v9, v9, v7);
  return L->top[-1].tt_ & 0xF;
};

// Line 657: range 00000000152ECFE0-00000000152ED016
int __fastcall lua_rawget(lua_State_0 *L, int idx)
{
  Table_0 **v2; // rax

  v2 = (Table_0 **)index2addr(L, idx);
  L->top[-1] = (TValue)_mm_loadu_si128((const __m128i *)luaH_get(*v2, (const TValue *)L->top - 1));
  return L->top[-1].tt_ & 0xF;
};

// Line 668: range 00000000152ED017-00000000152ED054
int __fastcall lua_rawgeti(lua_State_0 *L, int idx, lua_Integer n)
{
  Table_0 **v4; // rax
  TValue *v5; // rax

  v4 = (Table_0 **)index2addr(L, idx);
  *(__m128i *)L->top = _mm_loadu_si128((const __m128i *)luaH_getint(*v4, n));
  v5 = L->top + 1;
  L->top = v5;
  return v5[-1].tt_ & 0xF;
};

// Line 680: range 00000000152ED055-00000000152ED0A1
int __fastcall lua_rawgetp(lua_State_0 *L, int idx, const void *p)
{
  Table_0 **v4; // rax
  TValue *v5; // rax
  TValue k; // [rsp+0h] [rbp-28h] BYREF

  v4 = (Table_0 **)index2addr(L, idx);
  k.value_.i = (lua_Integer)p;
  k.tt_ = 2;
  *(__m128i *)L->top = _mm_loadu_si128((const __m128i *)luaH_get(*v4, &k));
  v5 = L->top + 1;
  L->top = v5;
  return v5[-1].tt_ & 0xF;
};

// Line 694: range 00000000152ED0A2-00000000152ED106
void __fastcall lua_createtable(lua_State_0 *L, int narray, int nrec)
{
  Table_0 *v5; // rsi
  StkId top; // rax

  v5 = luaH_new(L);
  top = L->top;
  top->value_.i = (lua_Integer)v5;
  top->tt_ = 69;
  ++L->top;
  if ( nrec > 0 || narray > 0 )
    luaH_resize(L, v5, narray, nrec);
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
};

// Line 707: range 00000000152ED108-00000000152ED16D
int __fastcall lua_getmetatable(lua_State_0 *L, int objindex)
{
  TValue *v2; // rax
  int v3; // edx
  Table *v4; // rax
  StkId top; // rdx

  v2 = index2addr(L, objindex);
  v3 = v2->tt_ & 0xF;
  if ( v3 == 5 )
  {
    v4 = *(Table **)(v2->value_.i + 40);
  }
  else if ( v3 == 7 )
  {
    v4 = *(Table **)(v2->value_.i + 16);
  }
  else
  {
    v4 = L->l_G->mt[v3];
  }
  if ( !v4 )
    return 0;
  top = L->top;
  top->value_.i = (lua_Integer)v4;
  top->tt_ = 69;
  ++L->top;
  return 1;
};

// Line 734: range 00000000152ED16F-00000000152ED1A3
int __fastcall lua_getuservalue(lua_State_0 *L, int idx)
{
  TValue *v2; // rdx
  StkId top; // rax
  Value_0 v4; // rdx
  TValue *v5; // rax

  v2 = index2addr(L, idx);
  top = L->top;
  v4.gc = (GCObject_0 *)v2->value_;
  top->value_.i = *(_QWORD *)(v4.i + 32);
  top->tt_ = *(unsigned __int8 *)(v4.i + 10);
  v5 = L->top + 1;
  L->top = v5;
  return v5[-1].tt_ & 0xF;
};

// Line 753: range 00000000152EC371-00000000152EC447
void __fastcall auxsetstr(lua_State_0 *L, const TValue *t, const char *k)
{
  TString_0 *v3; // rax
  TString_0 *v4; // r12
  TValue *v5; // r13
  StkId top; // rdx
  StkId v7; // rdx
  StkId v8; // rax
  char v9; // al

  v3 = luaS_new(L, k);
  v4 = v3;
  if ( t->tt_ != 69 )
  {
    v5 = 0LL;
LABEL_3:
    top = L->top;
    top->value_.i = (lua_Integer)v4;
    top->tt_ = v4->tt | 0x40;
    v7 = L->top;
    L->top = v7 + 1;
    luaV_finishset(L, t, v7, v7 - 1, v5);
    L->top -= 2;
    return;
  }
  v5 = (TValue *)luaH_getstr((Table_0 *)t->value_.gc, v3);
  if ( v5->tt_ )
  {
    v8 = L->top;
    if ( (v8[-1].tt_ & 0x40) != 0
      && (*(_BYTE *)(t->value_.i + 9) & 4) != 0
      && (*(_BYTE *)(v8[-1].value_.i + 9) & 3) != 0 )
    {
      luaC_barrierback_(L, (Table_0 *)t->value_.gc);
    }
    *(__m128i *)v5 = _mm_loadu_si128((const __m128i *)&L->top[-1]);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( !v9 )
    goto LABEL_3;
  --L->top;
};

// Line 769: range 00000000152ED1A4-00000000152ED1D6
void __fastcall lua_setglobal(lua_State_0 *L, const char *name)
{
  const TValue *v2; // rax

  v2 = luaH_getint((Table_0 *)L->l_G->l_registry.value_.gc, 2LL);
  auxsetstr(L, v2, name);
};

// Line 776: range 00000000152ED1D7-00000000152ED276
void __fastcall lua_settable(lua_State_0 *L, int idx)
{
  TValue *v2; // rbp
  TValue *v3; // r12
  StkId top; // rax
  char v5; // al

  v2 = index2addr(L, idx);
  if ( v2->tt_ != 69 )
  {
    v3 = 0LL;
LABEL_3:
    luaV_finishset(L, v2, L->top - 2, L->top - 1, v3);
    goto LABEL_4;
  }
  v3 = (TValue *)luaH_get((Table_0 *)v2->value_.gc, (const TValue *)L->top - 2);
  if ( v3->tt_ )
  {
    top = L->top;
    if ( (top[-1].tt_ & 0x40) != 0
      && (*(_BYTE *)(v2->value_.i + 9) & 4) != 0
      && (*(_BYTE *)(top[-1].value_.i + 9) & 3) != 0 )
    {
      luaC_barrierback_(L, (Table_0 *)v2->value_.gc);
    }
    *(__m128i *)v3 = _mm_loadu_si128((const __m128i *)&L->top[-1]);
    v5 = 0;
  }
  else
  {
    v5 = 1;
  }
  if ( v5 )
    goto LABEL_3;
LABEL_4:
  L->top -= 2;
};

// Line 787: range 00000000152ED278-00000000152ED29D
void __fastcall lua_setfield(lua_State_0 *L, int idx, const char *k)
{
  TValue *v4; // rax

  v4 = index2addr(L, idx);
  auxsetstr(L, v4, k);
};

// Line 793: range 00000000152ED29E-00000000152ED368
void __fastcall lua_seti(lua_State_0 *L, int idx, lua_Integer n)
{
  TValue *v4; // rax
  const TValue *v5; // rbp
  TValue *v6; // r13
  StkId top; // rax
  StkId v8; // rdx
  StkId v9; // rax
  char v10; // al

  v4 = index2addr(L, idx);
  v5 = v4;
  if ( v4->tt_ != 69 )
  {
    v6 = 0LL;
LABEL_3:
    top = L->top;
    top->value_.i = n;
    top->tt_ = 19;
    v8 = L->top;
    L->top = v8 + 1;
    luaV_finishset(L, v5, v8, v8 - 1, v6);
    L->top -= 2;
    return;
  }
  v6 = (TValue *)luaH_getint((Table_0 *)v4->value_.gc, n);
  if ( v6->tt_ )
  {
    v9 = L->top;
    if ( (v9[-1].tt_ & 0x40) != 0
      && (*(_BYTE *)(v5->value_.i + 9) & 4) != 0
      && (*(_BYTE *)(v9[-1].value_.i + 9) & 3) != 0 )
    {
      luaC_barrierback_(L, (Table_0 *)v5->value_.gc);
    }
    *(__m128i *)v6 = _mm_loadu_si128((const __m128i *)&L->top[-1]);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( !v10 )
    goto LABEL_3;
  --L->top;
};

// Line 811: range 00000000152ED36A-00000000152ED3D5
void __fastcall lua_rawset(lua_State_0 *L, int idx)
{
  Table_0 **v2; // rbp
  StkId top; // rax

  v2 = (Table_0 **)index2addr(L, idx);
  *(__m128i *)luaH_set(L, *v2, (const TValue *)L->top - 2) = _mm_loadu_si128((const __m128i *)&L->top[-1]);
  (*v2)->flags = 0;
  top = L->top;
  if ( (top[-1].tt_ & 0x40) != 0 && ((*v2)->marked & 4) != 0 && (*(_BYTE *)(top[-1].value_.i + 9) & 3) != 0 )
    luaC_barrierback_(L, *v2);
  L->top -= 2;
};

// Line 827: range 00000000152ED3D7-00000000152ED436
void __fastcall lua_rawseti(lua_State_0 *L, int idx, lua_Integer n)
{
  Table_0 **v4; // rbp
  StkId top; // rax

  v4 = (Table_0 **)index2addr(L, idx);
  luaH_setint(L, *v4, n, L->top - 1);
  top = L->top;
  if ( (top[-1].tt_ & 0x40) != 0 && ((*v4)->marked & 4) != 0 && (*(_BYTE *)(top[-1].value_.i + 9) & 3) != 0 )
    luaC_barrierback_(L, *v4);
  --L->top;
};

// Line 840: range 00000000152ED438-00000000152ED4AF
void __fastcall lua_rawsetp(lua_State_0 *L, int idx, const void *p)
{
  Table_0 **v4; // rbp
  StkId top; // rax
  TValue k; // [rsp+0h] [rbp-28h] BYREF

  v4 = (Table_0 **)index2addr(L, idx);
  k.value_.i = (lua_Integer)p;
  k.tt_ = 2;
  *(__m128i *)luaH_set(L, *v4, &k) = _mm_loadu_si128((const __m128i *)&L->top[-1]);
  top = L->top;
  if ( (top[-1].tt_ & 0x40) != 0 && ((*v4)->marked & 4) != 0 && (*(_BYTE *)(top[-1].value_.i + 9) & 3) != 0 )
    luaC_barrierback_(L, *v4);
  --L->top;
};

// Line 856: range 00000000152ED4B1-00000000152ED585
int __fastcall lua_setmetatable(lua_State_0 *L, int objindex)
{
  TValue *v2; // rbp
  StkId top; // rax
  GCObject_0 *gc; // r12
  int v5; // eax

  v2 = index2addr(L, objindex);
  top = L->top;
  if ( top[-1].tt_ )
    gc = top[-1].value_.gc;
  else
    gc = 0LL;
  v5 = v2->tt_ & 0xF;
  if ( v5 == 5 )
  {
    *(_QWORD *)(v2->value_.i + 40) = gc;
    if ( !gc )
      goto LABEL_6;
    if ( (*(_BYTE *)(v2->value_.i + 9) & 4) != 0 && (gc->marked & 3) != 0 )
      luaC_barrier_(L, v2->value_.gc, gc);
LABEL_12:
    luaC_checkfinalizer(L, v2->value_.gc, (Table_0 *)gc);
    goto LABEL_6;
  }
  if ( v5 == 7 )
  {
    *(_QWORD *)(v2->value_.i + 16) = gc;
    if ( !gc )
      goto LABEL_6;
    if ( (*(_BYTE *)(v2->value_.i + 9) & 4) != 0 && (gc->marked & 3) != 0 )
      luaC_barrier_(L, v2->value_.gc, gc);
    goto LABEL_12;
  }
  L->l_G->mt[v5] = (Table *)gc;
LABEL_6:
  --L->top;
  return 1;
};

// Line 896: range 00000000152ED587-00000000152ED5D8
void __fastcall lua_setuservalue(lua_State_0 *L, int idx)
{
  TValue *v2; // rax
  StkId top; // rcx
  GCObject_0 *i; // rdx
  StkId v5; // rdx
  GCObject_0 *gc; // rdx

  v2 = index2addr(L, idx);
  top = L->top;
  i = (GCObject_0 *)v2->value_.i;
  i[2].next = top[-1].value_.gc;
  *(&i->marked + 1) = top[-1].tt_;
  v5 = L->top;
  if ( (v5[-1].tt_ & 0x40) != 0 && (*(_BYTE *)(v2->value_.i + 9) & 4) != 0 )
  {
    gc = v5[-1].value_.gc;
    if ( (gc->marked & 3) != 0 )
      luaC_barrier_(L, v2->value_.gc, gc);
  }
  --L->top;
};

// Line 920: range 00000000152ED5DA-00000000152ED64B
void __fastcall lua_callk(lua_State_0 *L, int nargs, int nresults, lua_KContext ctx, lua_KFunction k)
{
  TValue *v6; // rsi
  CallInfo_0 *ci; // rax
  StkId top; // rdx

  v6 = (StkId)((char *)L->top - 16 - 16LL * nargs);
  if ( k && !L->nny )
  {
    L->ci->u.l.base = (StkId)k;
    L->ci->u.c.ctx = ctx;
    luaD_call(L, v6, nresults);
  }
  else
  {
    luaD_callnoyield(L, v6, nresults);
  }
  if ( nresults == -1 )
  {
    ci = L->ci;
    top = L->top;
    if ( ci->top < top )
      ci->top = top;
  }
};

// Line 951: range 00000000152EC449-00000000152EC45C
void __fastcall f_call(lua_State_0 *L, void *ud)
{
  luaD_callnoyield(L, *(StkId *)ud, *((_DWORD *)ud + 2));
};

// Line 959: range 00000000152ED64D-00000000152ED750
int __fastcall lua_pcallk(lua_State_0 *L, int nargs, int nresults, int errfunc, lua_KContext ctx, lua_KFunction k)
{
  ptrdiff_t v10; // r8
  TValue *v11; // rsi
  TValue *v12; // rcx
  int result; // eax
  CallInfo_0 *ci; // r14
  CallInfo_0 *v15; // rdx
  StkId top; // rcx
  CallS c; // [rsp+0h] [rbp-38h] BYREF

  if ( errfunc )
    v10 = (char *)index2addr(L, errfunc) - (char *)L->stack;
  else
    v10 = 0LL;
  v11 = (StkId)((char *)L->top - 16 - 16LL * nargs);
  v12 = (StkId)((char *)L->top - 16 - 16LL * nargs);
  c.func = v12;
  if ( k && !L->nny )
  {
    ci = L->ci;
    ci->u.l.base = (StkId)k;
    ci->u.c.ctx = ctx;
    ci->extra = (char *)v11 - (char *)L->stack;
    ci->u.c.old_errfunc = L->errfunc;
    L->errfunc = v10;
    ci->callstatus = L->allowhook | ci->callstatus & 0xFFFE | 0x10;
    luaD_call(L, v11, nresults);
    ci->callstatus &= ~0x10u;
    L->errfunc = ci->u.c.old_errfunc;
    result = 0;
  }
  else
  {
    c.nresults = nresults;
    result = luaD_pcall(L, f_call, &c, (char *)v12 - (char *)L->stack, v10);
  }
  if ( nresults == -1 )
  {
    v15 = L->ci;
    top = L->top;
    if ( v15->top < top )
      v15->top = top;
  }
  return result;
};

// Line 1003: range 00000000152ED755-00000000152ED7F8
int __fastcall lua_load(lua_State_0 *L, lua_Reader reader, void *data, const char *chunkname, const char *mode)
{
  const char *v5; // rbp
  int v7; // ebp
  Value_0 v8; // r12
  UpVal_0 *v10; // rsi
  ZIO z; // [rsp+0h] [rbp-48h] BYREF

  v5 = chunkname;
  if ( !chunkname )
    v5 = "?";
  luaZ_init(L, &z, reader, data);
  v7 = luaD_protectedparser(L, &z, v5, mode);
  if ( !v7 )
  {
    v8.gc = (GCObject_0 *)L->top[-1].value_;
    if ( *(_BYTE *)(v8.i + 10) )
    {
      *(__m128i *)**(_QWORD **)(v8.i + 32) = _mm_loadu_si128((const __m128i *)luaH_getint(
                                                                                (Table_0 *)L->l_G->l_registry.value_.gc,
                                                                                2LL));
      v10 = *(UpVal_0 **)(v8.i + 32);
      if ( (v10->v->tt_ & 0x40) != 0 && ($0F107F72300CBA7FB0D49582F1E3FF2F *)v10->v == &v10->u )
        luaC_upvalbarrier_(L, v10);
    }
  }
  return v7;
};

// Line 1031: range 00000000152ED7FA-00000000152ED82B
int __fastcall lua_dump(lua_State_0 *L, lua_Writer writer, void *data, int strip)
{
  StkId top; // rax

  top = L->top;
  if ( top[-1].tt_ == 70 )
    return luaU_dump(L, *(const Proto_0 **)(top[-1].value_.i + 24), writer, data, strip);
  else
    return 1;
};

// Line 1042: range 00000000152ED82C-00000000152ED830
int __fastcall lua_status(lua_State_0 *L)
{
  return L->status;
};

// Line 1050: range 00000000152ED831-00000000152ED971
int __fastcall lua_gc(lua_State_0 *L, int what, int data)
{
  global_State_0 *l_G; // rbp
  int result; // eax
  lu_byte gcrunning; // r13
  l_mem v6; // r12

  l_G = L->l_G;
  switch ( what )
  {
    case 0:
      l_G->gcrunning = 0;
      return what;
    case 1:
      luaE_setdebt(L->l_G, 0LL);
      l_G->gcrunning = 1;
      return 0;
    case 2:
      luaC_fullgc(L, 0);
      return 0;
    case 3:
      return (unsigned __int64)(l_G->totalbytes + l_G->GCdebt) >> 10;
    case 4:
      return (LOWORD(l_G->totalbytes) + (unsigned __int16)l_G->GCdebt) & 0x3FF;
    case 5:
      gcrunning = l_G->gcrunning;
      l_G->gcrunning = 1;
      if ( !data )
      {
        luaE_setdebt(l_G, -2400LL);
        luaC_step(L);
        l_G->gcrunning = gcrunning;
        return l_G->gcstate == 7;
      }
      v6 = l_G->GCdebt + ((__int64)data << 10);
      luaE_setdebt(l_G, v6);
      if ( L->l_G->GCdebt > 0 )
        luaC_step(L);
      l_G->gcrunning = gcrunning;
      if ( v6 > 0 )
        return l_G->gcstate == 7;
      return 0;
    case 6:
      result = l_G->gcpause;
      l_G->gcpause = data;
      return result;
    case 7:
      result = l_G->gcstepmul;
      if ( data <= 39 )
        data = 40;
      l_G->gcstepmul = data;
      return result;
    case 9:
      return l_G->gcrunning;
    default:
      return -1;
  }
};

// Line 1124: range 00000000152ED976-00000000152ED97A
int __fastcall __noreturn lua_error(lua_State_0 *L)
{
  luaG_errormsg(L);
};

// Line 1133: range 00000000152ED97F-00000000152ED9B2
int __fastcall lua_next(lua_State_0 *L, int idx)
{
  Table_0 **v2; // rax
  int result; // eax

  v2 = (Table_0 **)index2addr(L, idx);
  result = luaH_next(L, *v2, L->top - 1);
  if ( result )
    ++L->top;
  else
    --L->top;
  return result;
};

// Line 1150: range 00000000152ED9B4-00000000152EDA17
void __fastcall lua_concat(lua_State_0 *L, int n)
{
  StkId top; // rbp
  TString_0 *v3; // rax

  if ( n > 1 )
  {
    luaV_concat(L, n);
  }
  else if ( !n )
  {
    top = L->top;
    v3 = luaS_newlstr(L, &off_1B23A528[4], 0LL);
    top->value_.i = (lua_Integer)v3;
    top->tt_ = v3->tt | 0x40;
    ++L->top;
  }
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
};

// Line 1166: range 00000000152EDA19-00000000152EDA3E
void __fastcall lua_len(lua_State_0 *L, int idx)
{
  TValue *v2; // rax

  v2 = index2addr(L, idx);
  luaV_objlen(L, L->top, v2);
  ++L->top;
};

// Line 1179: range 00000000152EDA3F-00000000152EDA56
lua_Alloc __fastcall lua_getallocf(lua_State_0 *L, void **ud)
{
  if ( ud )
    *ud = L->l_G->ud;
  return L->l_G->frealloc;
};

// Line 1188: range 00000000152EDA57-00000000152EDA66
void __fastcall lua_setallocf(lua_State_0 *L, lua_Alloc f, void *ud)
{
  L->l_G->ud = ud;
  L->l_G->frealloc = f;
};

// Line 1194: range 00000000152EDA67-00000000152EDAB0
void *__fastcall lua_newuserdata(lua_State_0 *L, size_t size)
{
  Udata_0 *v2; // rbp
  StkId top; // rax

  v2 = luaS_newudata(L, size);
  top = L->top;
  top->value_.i = (lua_Integer)v2;
  top->tt_ = 71;
  ++L->top;
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
  return &v2[1];
};

// Line 1209: range 00000000152EC1EF-00000000152EC2A5
const char *__fastcall aux_upvalue(StkId fi, int n, TValue **val, CClosure_0 **owner, UpVal_0 **uv)
{
  int v5; // eax
  CClosure_0 *i; // rdi
  Value_0 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax

  v5 = fi->tt_ & 0x3F;
  if ( v5 == 6 )
  {
    v8.gc = (GCObject_0 *)fi->value_;
    v9 = *(_QWORD *)(fi->value_.i + 24);
    if ( n <= 0 )
    {
      return 0LL;
    }
    else if ( *(_DWORD *)(v9 + 16) < n )
    {
      return 0LL;
    }
    else
    {
      *val = **(TValue ***)(v8.i + 8LL * (n - 1) + 32);
      if ( uv )
        *uv = *(UpVal_0 **)(v8.i + 8LL * (n - 1) + 32);
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 88) + 16LL * n - 16);
      if ( v10 )
        return (const char *)(v10 + 24);
      else
        return "(*no name)";
    }
  }
  else if ( v5 == 38 )
  {
    i = (CClosure_0 *)fi->value_.i;
    if ( n <= 0 )
    {
      return 0LL;
    }
    else if ( i->nupvalues < n )
    {
      return 0LL;
    }
    else
    {
      *val = (TValue *)&(&i->gclist)[2 * n];
      if ( owner )
        *owner = i;
      return &off_1B23A528[4];
    }
  }
  else
  {
    return 0LL;
  }
};

// Line 1232: range 00000000152EDAB2-00000000152EDB13
const char *__fastcall lua_getupvalue(lua_State_0 *L, int funcindex, int n)
{
  TValue *v5; // rax
  const char *result; // rax
  StkId top; // rdx
  __int64 v8; // rdi
  TValue *val; // [rsp+8h] [rbp-18h] BYREF

  val = 0LL;
  v5 = index2addr(L, funcindex);
  result = aux_upvalue(v5, n, &val, 0LL, 0LL);
  if ( result )
  {
    top = L->top;
    v8 = *(_QWORD *)&val->tt_;
    top->value_.i = val->value_.i;
    *(_QWORD *)&top->tt_ = v8;
    ++L->top;
  }
  return result;
};

// Line 1246: range 00000000152EDB14-00000000152EDBDB
const char *__fastcall lua_setupvalue(lua_State_0 *L, int funcindex, int n)
{
  TValue *v5; // rax
  const char *v6; // rbp
  StkId top; // rax
  Value_0 v8; // rsi
  __int64 v9; // rdi
  TValue *v10; // rax
  StkId v11; // rax
  UpVal_0 *uv; // [rsp+8h] [rbp-30h] BYREF
  CClosure_0 *owner; // [rsp+10h] [rbp-28h] BYREF
  TValue *io1; // [rsp+18h] [rbp-20h] BYREF

  io1 = 0LL;
  owner = 0LL;
  uv = 0LL;
  v5 = index2addr(L, funcindex);
  v6 = aux_upvalue(v5, n, &io1, &owner, &uv);
  if ( v6 )
  {
    top = L->top;
    L->top = top - 1;
    v8.gc = (GCObject_0 *)top[-1].value_;
    v9 = *(_QWORD *)&top[-1].tt_;
    v10 = io1;
    io1->value_ = v8;
    *(_QWORD *)&v10->tt_ = v9;
    if ( owner )
    {
      v11 = L->top;
      if ( (v11->tt_ & 0x40) != 0 && (owner->marked & 4) != 0 && (*(_BYTE *)(v11->value_.i + 9) & 3) != 0 )
        luaC_barrier_(L, (GCObject_0 *)owner, v11->value_.gc);
    }
    else if ( uv && (uv->v->tt_ & 0x40) != 0 && ($0F107F72300CBA7FB0D49582F1E3FF2F *)uv->v == &uv->u )
    {
      luaC_upvalbarrier_(L, uv);
    }
  }
  return v6;
};

// Line 1267: range 00000000152EC2A6-00000000152EC2CB
UpVal_0 **__fastcall getupvalref(lua_State_0 *L, int fidx, int n, LClosure_0 **pf_0)
{
  LClosure_0 *i; // rax

  i = (LClosure_0 *)index2addr(L, fidx)->value_.i;
  if ( pf_0 )
    *pf_0 = i;
  return &i->upvals[n - 1];
};

// Line 1278: range 00000000152EDBDD-00000000152EDC33
void *__fastcall lua_upvalueid(lua_State_0 *L, int fidx, int n)
{
  TValue *v4; // rax
  int v5; // edx

  v4 = index2addr(L, fidx);
  v5 = v4->tt_ & 0x3F;
  if ( v5 == 6 )
    return *getupvalref(L, fidx, n, 0LL);
  if ( v5 == 38 )
    return (void *)(v4->value_.i + 16 * (n - 1 + 2LL));
  return 0LL;
};

// Line 1298: range 00000000152EDC35-00000000152EDCC4
void __fastcall lua_upvaluejoin(lua_State_0 *L, int fidx1, int n1, int fidx2, int n2)
{
  UpVal_0 **v7; // rbx
  UpVal_0 **v8; // r12
  UpVal_0 *v9; // rax
  UpVal_0 *v10; // rsi
  TValue *v; // rax
  LClosure_0 *f1; // [rsp+8h] [rbp-30h] BYREF

  v7 = getupvalref(L, fidx1, n1, &f1);
  v8 = getupvalref(L, fidx2, n2, 0LL);
  luaC_upvdeccount(L, *v7);
  v9 = *v8;
  *v7 = *v8;
  ++v9->refcount;
  if ( ($0F107F72300CBA7FB0D49582F1E3FF2F *)(*v7)->v != &(*v7)->u )
    (*v7)->u.open.touched = 1;
  v10 = *v7;
  v = (*v7)->v;
  if ( (v->tt_ & 0x40) != 0 && v == (TValue *)&v10->u )
    luaC_upvalbarrier_(L, v10);
};
