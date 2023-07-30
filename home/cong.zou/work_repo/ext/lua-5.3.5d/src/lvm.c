// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lvm.c

// Line 72: range 00000000152F7E08-00000000152F7E95
int __fastcall luaV_tonumber_(const TValue *obj, lua_Number *n)
{
  size_t v3; // rax
  Value_0 v4; // rdx
  __int64 v5; // rdx
  double b; // xmm0_8
  TValue v; // [rsp+0h] [rbp-28h] BYREF

  if ( obj->tt_ == 19 )
  {
    *n = (double)(int)obj->value_.i;
    return 1;
  }
  else if ( (obj->tt_ & 0xF) == 4
         && ((v3 = luaO_str2num((const char *)(obj->value_.i + 24), &v),
              v4.gc = (GCObject_0 *)obj->value_,
              *(_BYTE *)(obj->value_.i + 8) == 4)
           ? (v5 = *(unsigned __int8 *)(v4.i + 11))
           : (v5 = *(_QWORD *)(v4.i + 16)),
             v3 == v5 + 1) )
  {
    if ( v.tt_ == 19 )
      b = (double)v.value_.b;
    else
      b = v.value_.n;
    *n = b;
    return 1;
  }
  else
  {
    return 0;
  }
};

// Line 94: range 00000000152F7E97-00000000152F7FC8
int __fastcall luaV_tointeger(const TValue *obj, lua_Integer *p, int mode)
{
  __m128d v5; // xmm1
  double n; // xmm0_8
  __m128d v7; // xmm2
  __int64 v9; // rdx
  int tt; // eax
  size_t v11; // rax
  Value_0 v12; // rdx
  TValue v; // [rsp+0h] [rbp-28h] BYREF

  while ( 1 )
  {
    tt = obj->tt_;
    if ( tt == 3 )
      break;
    if ( tt == 19 )
    {
      *p = obj->value_.i;
      return 1;
    }
    if ( (obj->tt_ & 0xF) != 4 )
      return 0;
    v11 = luaO_str2num((const char *)(obj->value_.i + 24), &v);
    v12.gc = (GCObject_0 *)obj->value_;
    if ( *(_BYTE *)(obj->value_.i + 8) == 4 )
      v9 = *(unsigned __int8 *)(v12.i + 11);
    else
      v9 = *(_QWORD *)(v12.i + 16);
    obj = &v;
    if ( v11 != v9 + 1 )
      return 0;
  }
  *(_QWORD *)&v5.m128d_f64[0] = obj->value_.i;
  n = obj->value_.n;
  if ( fabs(obj->value_.n) < 4.503599627370496e15 )
  {
    v7 = 0LL;
    v7.m128d_f64[0] = (double)(int)v5.m128d_f64[0];
    *(_QWORD *)&n = COERCE_UNSIGNED_INT64(v7.m128d_f64[0] - COERCE_DOUBLE(*(_OWORD *)&_mm_cmpgt_sd(v7, v5) & 0x3FF0000000000000LL)) | *(_QWORD *)&v5.m128d_f64[0] & 0x8000000000000000LL;
  }
  if ( v5.m128d_f64[0] != n )
  {
    if ( !mode )
      return 0;
    if ( mode > 1 )
      n = n + 1.0;
  }
  if ( n < -9.223372036854776e18 )
    return 0;
  if ( n >= 9.223372036854776e18 )
    return 0;
  *p = (unsigned int)(int)n;
  return 1;
};

// Line 136: range 00000000152F7FCA-00000000152F8090
int __fastcall forlimit(const TValue *obj, lua_Integer *p, lua_Integer step, int *stopnow)
{
  int v6; // edx
  int v7; // ebx
  lua_Number n[6]; // [rsp+8h] [rbp-30h] BYREF

  *stopnow = 0;
  if ( step < 0 )
    v6 = 2;
  else
    v6 = 1;
  v7 = luaV_tointeger(obj, p, v6);
  if ( v7 )
    return 1;
  if ( obj->tt_ == 3 )
  {
    n[0] = obj->value_.n;
  }
  else if ( !luaV_tonumber_(obj, n) )
  {
    return v7;
  }
  if ( n[0] <= 0.0 )
  {
    *p = 0x8000000000000000LL;
    if ( step >= 0 )
      *stopnow = 1;
  }
  else
  {
    *p = 0x7FFFFFFFFFFFFFFFLL;
    if ( step < 0 )
      *stopnow = 1;
  }
  return 1;
};

// Line 161: range 00000000152F8091-00000000152F81A8
void __fastcall luaV_finishget(lua_State_0 *L, const TValue *t, TValue *key, StkId val, const TValue *slot)
{
  int i; // ebp
  const TValue *v11; // rbx
  Table_0 *v12; // rdi

  for ( i = 0; ; ++i )
  {
    if ( i > 1999 )
      luaG_runerror(L, "'__index' chain too long; possible loop");
    if ( slot )
    {
      v12 = *(Table_0 **)(t->value_.i + 40);
      if ( !v12 || (v12->flags & 1) != 0 || (v11 = luaT_gettm(v12, TM_INDEX_0, L->l_G->tmname[0])) == 0LL )
      {
        val->tt_ = 0;
        return;
      }
    }
    else
    {
      v11 = luaT_gettmbyobj(L, t, TM_INDEX_0);
      if ( !v11->tt_ )
        luaG_typeerror(L, t, "index");
    }
    if ( (v11->tt_ & 0xF) == 6 )
    {
      luaT_callTM(L, v11, t, key, val, 1);
      return;
    }
    if ( v11->tt_ == 69 )
      break;
    slot = 0LL;
LABEL_7:
    t = v11;
  }
  slot = luaH_get((Table_0 *)v11->value_.gc, key);
  if ( !slot->tt_ )
    goto LABEL_7;
  *(__m128i *)val = _mm_loadu_si128((const __m128i *)slot);
};

// Line 204: range 00000000152F81AD-00000000152F8383
void __fastcall luaV_finishset(lua_State_0 *L, const TValue *t, TValue *key, StkId val, const TValue *slot);

// Line 248: range 00000000152F7C5E-00000000152F7CE9
int __fastcall l_strcmp(const TString_0 *ls, const TString_0 *rs)
{
  const char *v2; // rbx
  size_t shrlen; // r12
  const char *v4; // rbp
  size_t lnglen; // r13
  int result; // eax
  unsigned __int64 v7; // kr08_8
  unsigned __int64 v8; // rcx

  v2 = (const char *)&ls[1];
  if ( ls->tt == 4 )
    shrlen = ls->shrlen;
  else
    shrlen = ls->u.lnglen;
  v4 = (const char *)&rs[1];
  if ( rs->tt == 4 )
    lnglen = rs->shrlen;
  else
    lnglen = rs->u.lnglen;
  while ( 1 )
  {
    result = strcoll(v2, v4);
    if ( result )
      break;
    v7 = strlen(v2) + 1;
    v8 = v7 - 1;
    if ( lnglen == v7 - 1 )
      return shrlen != v8;
    if ( shrlen == v8 )
      return -1;
    v2 += v7;
    shrlen -= v7;
    v4 += v7;
    lnglen -= v7;
  }
  return result;
};

// Line 283: range 00000000152F7A8B-00000000152F7AE9
__int64 __fastcall LTintfloat(lua_Integer i, double a2, lua_Number f)
{
  if ( (unsigned __int64)(i + 0x20000000000000LL) <= 0x40000000000000LL )
    return a2 > (double)(int)i;
  if ( a2 >= 9.223372036854776e18 )
    return 1LL;
  if ( a2 <= -9.223372036854776e18 )
    return 0LL;
  return (unsigned int)(int)a2 > i;
};

// Line 302: range 00000000152F7AEA-00000000152F7B48
__int64 __fastcall LEintfloat(lua_Integer i, double a2, lua_Number f)
{
  if ( (unsigned __int64)(i + 0x20000000000000LL) <= 0x40000000000000LL )
    return a2 >= (double)(int)i;
  if ( a2 >= 9.223372036854776e18 )
    return 1LL;
  if ( a2 < -9.223372036854776e18 )
    return 0LL;
  return (unsigned int)(int)a2 >= i;
};

// Line 319: range 00000000152F7B49-00000000152F7BA3
int __fastcall LTnum(const TValue *l, const TValue *r)
{
  lua_Number v2; // xmm1_8
  double n; // xmm0_8
  lua_Integer i; // rdi

  if ( l->tt_ == 19 )
  {
    i = l->value_.i;
    if ( r->tt_ == 19 )
      return r->value_.i > i;
    else
      return LTintfloat(i, r->value_.n, v2);
  }
  else
  {
    n = l->value_.n;
    if ( r->tt_ == 3 )
      return r->value_.n > n;
    else
      return LEintfloat(r->value_.i, n, v2) == 0;
  }
};

// Line 342: range 00000000152F7BA4-00000000152F7BFE
int __fastcall LEnum(const TValue *l, const TValue *r)
{
  lua_Number v2; // xmm1_8
  double n; // xmm0_8
  lua_Integer i; // rdi

  if ( l->tt_ == 19 )
  {
    i = l->value_.i;
    if ( r->tt_ == 19 )
      return r->value_.i >= i;
    else
      return LEintfloat(i, r->value_.n, v2);
  }
  else
  {
    n = l->value_.n;
    if ( r->tt_ == 3 )
      return r->value_.n >= n;
    else
      return LTintfloat(r->value_.i, n, v2) == 0;
  }
};

// Line 364: range 00000000152F8388-00000000152F83FE
int __fastcall luaV_lessthan(lua_State_0 *L, const TValue *l, const TValue *r)
{
  int v4; // eax
  int result; // eax

  v4 = l->tt_ & 0xF;
  if ( v4 == 3 && (r->tt_ & 0xF) == 3 )
    return LTnum(l, r);
  if ( v4 == 4 && (r->tt_ & 0xF) == 4 )
    return (unsigned int)l_strcmp((const TString_0 *)l->value_.gc, (const TString_0 *)r->value_.gc) >> 31;
  result = luaT_callorderTM(L, l, r, TM_LT_0);
  if ( result < 0 )
    luaG_ordererror(L, l, r);
  return result;
};

// Line 384: range 00000000152F8403-00000000152F84B3
int __fastcall luaV_lessequal(lua_State_0 *L, const TValue *l, const TValue *r)
{
  int v4; // eax
  int result; // eax
  int v6; // eax

  v4 = l->tt_ & 0xF;
  if ( v4 == 3 && (r->tt_ & 0xF) == 3 )
    return LEnum(l, r);
  if ( v4 == 4 && (r->tt_ & 0xF) == 4 )
    return l_strcmp((const TString_0 *)l->value_.gc, (const TString_0 *)r->value_.gc) <= 0;
  result = luaT_callorderTM(L, l, r, TM_LE_0);
  if ( result < 0 )
  {
    L->ci->callstatus |= 0x80u;
    v6 = luaT_callorderTM(L, r, l, TM_LT_0);
    L->ci->callstatus ^= 0x80u;
    if ( v6 < 0 )
      luaG_ordererror(L, l, r);
    return v6 == 0;
  }
  return result;
};

// Line 407: range 00000000152F84B8-00000000152F878A
int __fastcall luaV_equalobj(lua_State_0 *L, const TValue *t1, const TValue *t2)
{
  int tt; // eax
  int v5; // edx
  int v6; // r12d
  Table_0 *v9; // rdi
  Table_0 *v10; // rdi
  const TValue *v11; // rax
  StkId top; // rdx
  int v13; // eax
  Table_0 *v14; // rdi
  lua_Integer i1; // [rsp+0h] [rbp-38h] BYREF
  lua_Integer i2[6]; // [rsp+8h] [rbp-30h] BYREF

  tt = t1->tt_;
  v5 = t2->tt_ ^ tt;
  v6 = v5 & 0x3F;
  if ( (v5 & 0x3F) != 0 )
  {
    v6 = v5 & 0xF;
    if ( (v5 & 0xF) != 0 )
      return 0;
    if ( (tt & 0xF) == 3 )
    {
      if ( tt == 19 )
      {
        i1 = t1->value_.i;
      }
      else if ( !luaV_tointeger(t1, &i1, 0) )
      {
        return 0;
      }
      if ( t2->tt_ == 19 )
      {
        i2[0] = t2->value_.i;
      }
      else if ( !luaV_tointeger(t2, i2, 0) )
      {
        return 0;
      }
      if ( i1 == i2[0] )
        return 1;
    }
  }
  else
  {
    switch ( tt & 0x3F )
    {
      case 0:
        return 1;
      case 1:
        return t1->value_.b == t2->value_.b;
      case 2:
        return t1->value_.i == t2->value_.i;
      case 3:
        return t1->value_.n == t2->value_.n;
      case 4:
        return t1->value_.i == t2->value_.i;
      case 5:
        if ( t1->value_.i == t2->value_.i )
          return 1;
        if ( L )
        {
          v14 = *(Table_0 **)(t1->value_.i + 40);
          if ( v14 )
          {
            if ( (v14->flags & 0x20) == 0 )
            {
              v11 = luaT_gettm(v14, TM_EQ_0, L->l_G->tmname[5]);
              if ( v11 )
                goto LABEL_30;
            }
          }
          v10 = *(Table_0 **)(t2->value_.i + 40);
          if ( v10 && (v10->flags & 0x20) == 0 )
            goto LABEL_29;
        }
        return v6;
      case 7:
        if ( t1->value_.i == t2->value_.i )
          return 1;
        if ( !L )
          return v6;
        v9 = *(Table_0 **)(t1->value_.i + 16);
        if ( v9 )
        {
          if ( (v9->flags & 0x20) == 0 )
          {
            v11 = luaT_gettm(v9, TM_EQ_0, L->l_G->tmname[5]);
            if ( v11 )
              goto LABEL_30;
          }
        }
        v10 = *(Table_0 **)(t2->value_.i + 16);
        if ( v10 && (v10->flags & 0x20) == 0 )
        {
LABEL_29:
          v11 = luaT_gettm(v10, TM_EQ_0, L->l_G->tmname[5]);
LABEL_30:
          if ( v11 )
          {
            luaT_callTM(L, v11, t1, t2, L->top, 1);
            top = L->top;
            v13 = top->tt_;
            if ( v13 )
            {
              if ( v13 == 1 )
              {
                if ( top->value_.b )
                  v6 = 1;
              }
              else
              {
                v6 = 1;
              }
            }
          }
        }
        break;
      case 0x13:
        return t1->value_.i == t2->value_.i;
      case 0x14:
        return luaS_eqlngstr((TString_0 *)t1->value_.gc, (TString_0 *)t2->value_.gc);
      case 0x16:
        return t1->value_.i == t2->value_.i;
      default:
        return t1->value_.i == t2->value_.i;
    }
  }
  return v6;
};

// Line 460: range 00000000152F7CEB-00000000152F7D46
void __fastcall copy2buff(StkId top, int n, char *buff)
{
  __int64 v5; // rbp
  size_t v6; // r12
  Value_0 v7; // rsi

  v5 = 0LL;
  do
  {
    v7.gc = (GCObject_0 *)top[-n].value_;
    if ( *(_BYTE *)(v7.i + 8) == 4 )
      v6 = *(unsigned __int8 *)(v7.i + 11);
    else
      v6 = *(_QWORD *)(v7.i + 16);
    memcpy(&buff[v5], (const void *)(v7.i + 24), v6);
    v5 += v6;
    --n;
  }
  while ( n > 0 );
};

// Line 474: range 00000000152F878F-00000000152F8988
void __fastcall luaV_concat(lua_State_0 *L, int total)
{
  int i; // ebx
  TValue *top; // r14
  int v5; // eax
  int v6; // eax
  Value_0 v7; // rax
  size_t v8; // r15
  unsigned __int64 v9; // rdx
  Value_0 v10; // rax
  TValue *v11; // r13
  int v12; // eax
  TString_0 *v13; // r13
  TValue *v14; // r14
  char buff[40]; // [rsp+0h] [rbp-68h] BYREF

  do
  {
    top = L->top;
    if ( (top[-2].tt_ & 0xFu) - 3 > 1 )
    {
LABEL_2:
      luaT_trybinTM(L, top - 2, top - 1, top - 2, TM_CONCAT_0);
      i = 2;
      goto LABEL_3;
    }
    v5 = top[-1].tt_ & 0xF;
    if ( v5 != 4 )
    {
      if ( v5 != 3 )
        goto LABEL_2;
      luaO_tostring(L, top - 1);
    }
    if ( top[-1].tt_ != 68 || *(_BYTE *)(top[-1].value_.i + 11) )
    {
      if ( top[-2].tt_ != 68 || *(_BYTE *)(top[-2].value_.i + 11) )
      {
        v7.gc = (GCObject_0 *)top[-1].value_;
        if ( *(_BYTE *)(v7.i + 8) == 4 )
          v8 = *(unsigned __int8 *)(v7.i + 11);
        else
          v8 = *(_QWORD *)(v7.i + 16);
        for ( i = 1; total > i; ++i )
        {
          v11 = (TValue *)((char *)top - 16 - 16LL * i);
          v12 = v11->tt_ & 0xF;
          if ( v12 != 4 )
          {
            if ( v12 != 3 )
              break;
            luaO_tostring(L, (TValue *)((char *)top - 16 - 16LL * i));
          }
          v10.gc = (GCObject_0 *)v11->value_;
          if ( *(_BYTE *)(v11->value_.i + 8) == 4 )
            v9 = *(unsigned __int8 *)(v10.i + 11);
          else
            v9 = *(_QWORD *)(v10.i + 16);
          if ( 0x7FFFFFFFFFFFFFFFLL - v8 <= v9 )
            luaG_runerror(L, "string length overflow");
          v8 += v9;
        }
        if ( v8 > 0x28 )
        {
          v13 = luaS_createlngstrobj(L, v8);
          copy2buff(top, i, (char *)&v13[1]);
        }
        else
        {
          copy2buff(top, i, buff);
          v13 = luaS_newlstr(L, buff, v8);
        }
        v14 = &top[-i];
        v14->value_.i = (lua_Integer)v13;
        v14->tt_ = v13->tt | 0x40;
      }
      else
      {
        top[-2] = (TValue)_mm_loadu_si128((const __m128i *)&top[-1]);
        i = 2;
      }
    }
    else
    {
      v6 = top[-2].tt_ & 0xF;
      if ( v6 == 4 )
      {
        i = 2;
      }
      else
      {
        if ( v6 == 3 )
          luaO_tostring(L, top - 2);
        i = 2;
      }
    }
LABEL_3:
    total -= i - 1;
    L->top += -i + 1;
  }
  while ( total > 1 );
};

// Line 517: range 00000000152F8989-00000000152F8A6D
void __fastcall luaV_objlen(lua_State_0 *L, StkId ra, const TValue *rb)
{
  int v6; // eax
  const TValue *v7; // rsi
  Table_0 *i; // r13
  Table_0 *v9; // rdi

  v6 = rb->tt_ & 0x3F;
  switch ( v6 )
  {
    case 5:
      i = (Table_0 *)rb->value_.i;
      v9 = *(Table_0 **)(rb->value_.i + 40);
      if ( v9 )
      {
        if ( (v9->flags & 0x10) == 0 )
        {
          v7 = luaT_gettm(v9, TM_LEN_0, L->l_G->tmname[4]);
          if ( v7 )
            goto LABEL_5;
        }
      }
      ra->value_.i = luaH_getn(i);
      ra->tt_ = 19;
      break;
    case 20:
      ra->value_.i = *(_QWORD *)(rb->value_.i + 16);
      ra->tt_ = 19;
      break;
    case 4:
      ra->value_.i = *(unsigned __int8 *)(rb->value_.i + 11);
      ra->tt_ = 19;
      break;
    default:
      v7 = luaT_gettmbyobj(L, rb, TM_LEN_0);
      if ( !v7->tt_ )
        luaG_typeerror(L, rb, "get length of");
LABEL_5:
      luaT_callTM(L, v7, rb, rb, ra, 1);
      return;
  }
};

// Line 552: range 00000000152F8A72-00000000152F8AC8
lua_Integer __fastcall luaV_div(lua_State_0 *L, lua_Integer m, lua_Integer n)
{
  lua_Integer v3; // rdi

  if ( (unsigned __int64)(n + 1) > 1 )
  {
    v3 = m / n;
    if ( (m ^ n) < 0 && m % n )
      return m / n - 1;
  }
  else
  {
    if ( !n )
      luaG_runerror(L, "attempt to divide by zero", 0LL, 0LL);
    return -m;
  }
  return v3;
};

// Line 572: range 00000000152F8ACA-00000000152F8B0E
lua_Integer __fastcall luaV_mod(lua_State_0 *L, lua_Integer m, lua_Integer n)
{
  lua_Integer result; // rax
  lua_Integer v5; // rdx

  if ( (unsigned __int64)(n + 1) > 1 )
  {
    v5 = m % n;
    result = m % n;
    if ( m % n && (n ^ m) < 0 )
      return v5 + n;
  }
  else
  {
    if ( !n )
      luaG_runerror(L, "attempt to perform 'n%%0'", 0LL, 0LL);
    return 0LL;
  }
  return result;
};

// Line 594: range 00000000152F8B0F-00000000152F8B3F
lua_Integer __fastcall luaV_shiftl(lua_Integer x, lua_Integer y)
{
  if ( y < 0 )
  {
    if ( y < -63 )
      return 0LL;
    else
      return (unsigned __int64)x >> -(char)y;
  }
  else if ( y > 63 )
  {
    return 0LL;
  }
  else
  {
    return x << y;
  }
};

// Line 611: range 00000000152F7BFF-00000000152F7C5D
LClosure_0 *__fastcall getcached(Proto_0 *p, UpVal_0 **encup, StkId base)
{
  LClosure *cache; // r8
  int i; // ecx
  TValue *v; // rax
  Upvaldesc_0 *v6; // rax

  cache = p->cache;
  if ( cache )
  {
    for ( i = 0; i < p->sizeupvalues; ++i )
    {
      v6 = &p->upvalues[i];
      if ( v6->instack )
        v = &base[v6->idx];
      else
        v = encup[v6->idx]->v;
      if ( cache->upvals[i]->v != v )
        return 0LL;
    }
  }
  return cache;
};

// Line 633: range 00000000152F7D47-00000000152F7E07
void __fastcall pushclosure(lua_State_0 *L, Proto_0 *p, UpVal_0 **encup, StkId base, StkId ra)
{
  int sizeupvalues; // r12d
  Upvaldesc_0 *upvalues; // r13
  LClosure_0 *v9; // rbp
  int i; // ebx
  UpVal_0 *v11; // rdx
  Upvaldesc_0 *v12; // rax

  sizeupvalues = p->sizeupvalues;
  upvalues = p->upvalues;
  v9 = luaF_newLclosure(L, sizeupvalues);
  v9->p = p;
  ra->value_.i = (lua_Integer)v9;
  ra->tt_ = 70;
  for ( i = 0; i < sizeupvalues; ++i )
  {
    v12 = &upvalues[i];
    if ( v12->instack )
      v9->upvals[i] = luaF_findupval(L, &base[v12->idx]);
    else
      v9->upvals[i] = encup[v12->idx];
    v11 = v9->upvals[i];
    ++v11->refcount;
  }
  if ( (p->marked & 4) == 0 )
    p->cache = v9;
};

// Line 656: range 00000000152F8B40-00000000152F8C81
void __fastcall luaV_finishOp(lua_State_0 *L)
{
  CallInfo_0 *ci; // r12
  StkId base; // rdx
  unsigned int v3; // ebx
  TValue *v4; // rcx
  StkId v5; // rdx
  int tt; // eax
  int v7; // eax
  unsigned __int16 callstatus; // dx
  StkId top; // rcx
  __int64 v10; // rsi

  ci = L->ci;
  base = ci->u.l.base;
  v3 = *(_DWORD *)(ci->u.c.old_errfunc - 4);
  switch ( v3 & 0x3F )
  {
    case 6u:
    case 7u:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Cu:
      v4 = L->top - 1;
      L->top = v4;
      base[(unsigned __int8)(v3 >> 6)] = (TValue)_mm_loadu_si128((const __m128i *)v4);
      break;
    case 0x1Du:
      top = L->top;
      v10 = &top[-2] - &base[v3 >> 23];
      top[-3] = (TValue)_mm_loadu_si128((const __m128i *)&top[-1]);
      if ( (int)v10 > 1 )
      {
        L->top = top - 2;
        luaV_concat(L, v10);
      }
      ci->u.l.base[(unsigned __int8)(v3 >> 6)] = (TValue)_mm_loadu_si128((const __m128i *)&L->top[-1]);
      L->top = ci->top;
      break;
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
      v5 = L->top;
      tt = v5[-1].tt_;
      if ( tt )
        v7 = tt != 1 || v5[-1].value_.b != 0;
      else
        v7 = 0;
      L->top = v5 - 1;
      callstatus = ci->callstatus;
      if ( (callstatus & 0x80u) != 0 )
      {
        LOBYTE(callstatus) = callstatus ^ 0x80;
        ci->callstatus = callstatus;
        v7 = v7 == 0;
      }
      if ( (unsigned __int8)(v3 >> 6) != v7 )
        ci->u.c.old_errfunc += 4LL;
      break;
    case 0x24u:
      if ( (v3 & 0x7FC000) != 0 )
        L->top = ci->top;
      break;
    case 0x29u:
      L->top = ci->top;
      break;
    default:
      return;
  }
};

// Line 786: range 00000000152F8C86-00000000152FAA39
void __fastcall luaV_execute(lua_State_0 *L)
{
  CallInfo_0 *ci; // r13
  TValue *base; // r14
  unsigned int *savedpc; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp
  TValue *v6; // r12
  const Instruction *v7; // rax
  unsigned int v8; // ebx
  TValue *v9; // rax
  TValue *v; // rbp
  unsigned int v11; // eax
  TValue *v12; // rbx
  const TValue *v13; // r8
  const __m128i *v14; // rax
  unsigned int v15; // eax
  const TValue *v16; // rbp
  unsigned int v17; // eax
  TValue *v18; // r12
  unsigned int v19; // eax
  TValue *v20; // rbx
  char v21; // al
  UpVal_0 *v22; // rsi
  Value_0 *p_value; // rax
  Value_0 v24; // rbx
  unsigned int v25; // eax
  TValue *v26; // rbp
  unsigned int v27; // eax
  TValue *v28; // rbx
  char v29; // al
  int v30; // ebp
  int v31; // ebx
  int v32; // ebx
  int v33; // eax
  unsigned int v34; // eax
  TString_0 *i; // rsi
  unsigned int v36; // eax
  const TValue *v37; // rbp
  unsigned int v38; // eax
  const TValue *v39; // rbx
  int tt; // eax
  unsigned int v41; // eax
  const TValue *v42; // rbp
  unsigned int v43; // eax
  const TValue *v44; // rbx
  int v45; // eax
  unsigned int v46; // eax
  const TValue *v47; // rbp
  unsigned int v48; // eax
  const TValue *v49; // rbx
  int v50; // eax
  unsigned int v51; // eax
  const TValue *v52; // rbp
  unsigned int v53; // eax
  const TValue *v54; // rbx
  unsigned int v55; // eax
  const TValue *v56; // rbp
  unsigned int v57; // eax
  const TValue *v58; // rbx
  unsigned int v59; // eax
  const TValue *v60; // rbp
  unsigned int v61; // eax
  const TValue *v62; // rbx
  unsigned int v63; // eax
  const TValue *v64; // rbp
  unsigned int v65; // eax
  const TValue *v66; // rbx
  unsigned int v67; // eax
  const TValue *v68; // rbp
  unsigned int v69; // eax
  const TValue *v70; // rbx
  unsigned int v71; // eax
  const TValue *v72; // rbp
  unsigned int v73; // eax
  const TValue *v74; // rbx
  unsigned int v75; // eax
  const TValue *v76; // rbp
  unsigned int v77; // eax
  const TValue *v78; // rbx
  int v79; // eax
  double v80; // xmm0_8
  unsigned int v81; // eax
  const TValue *v82; // rbp
  unsigned int v83; // eax
  const TValue *v84; // rbx
  int v85; // eax
  __m128d v86; // xmm0
  double v87; // xmm2_8
  __m128d v88; // xmm1
  unsigned int v89; // eax
  const TValue *v90; // rbp
  unsigned int v91; // eax
  const TValue *v92; // rbx
  const TValue *v93; // rbx
  int v94; // eax
  const TValue *v95; // rbx
  TValue *v96; // rax
  int v97; // edx
  _BOOL4 v98; // edx
  unsigned int v99; // r12d
  unsigned int v100; // ebx
  __m128i *v101; // rbp
  __m128i *v102; // rax
  unsigned int v103; // eax
  const TValue *v104; // rsi
  unsigned int v105; // edx
  const TValue *v106; // rdx
  Instruction v107; // ebx
  unsigned int v108; // edx
  const TValue *v109; // rdx
  unsigned int v110; // eax
  const TValue *v111; // rsi
  Instruction v112; // ebx
  unsigned int v113; // edx
  const TValue *v114; // rdx
  unsigned int v115; // eax
  const TValue *v116; // rsi
  Instruction v117; // ebx
  int v118; // ebx
  int v119; // eax
  Instruction v120; // ebx
  const __m128i *v121; // rax
  int v122; // ebx
  __int32 v123; // edx
  Instruction v124; // ebx
  int v125; // ebp
  signed int v126; // ebx
  signed int v127; // ebx
  int v128; // ebx
  CallInfo_0 *v129; // r12
  StkId func; // rbp
  LClosure_0 **v131; // r14
  TValue *v132; // r14
  unsigned int v133; // ebx
  int v134; // ecx
  int v135; // eax
  double v136; // xmm1_8
  double n; // xmm2_8
  bool v138; // al
  Value_0 v139; // rdx
  Value_0 v140; // rcx
  bool v141; // al
  Value_0 v142; // rax
  unsigned int *v143; // rax
  int v144; // ebp
  int v145; // ebx
  const Instruction *v146; // rax
  unsigned int v147; // edx
  TValue *v148; // rbx
  unsigned int v149; // eax
  Proto_0 *v150; // rbp
  LClosure_0 *v151; // rax
  int v152; // ecx
  int v153; // ebx
  int j; // eax
  int v155; // edx
  int last; // [rsp+8h] [rbp-90h]
  TValue *lasta; // [rsp+8h] [rbp-90h]
  TValue *lastb; // [rsp+8h] [rbp-90h]
  Table_0 *lastc; // [rsp+8h] [rbp-90h]
  unsigned __int64 lastd; // [rsp+8h] [rbp-90h]
  unsigned int laste; // [rsp+8h] [rbp-90h]
  TValue *k; // [rsp+10h] [rbp-88h]
  Table_0 *t; // [rsp+18h] [rbp-80h]
  LClosure_0 *cl_0; // [rsp+20h] [rbp-78h]
  Table_0 *h; // [rsp+28h] [rbp-70h]
  int stopnow; // [rsp+3Ch] [rbp-5Ch] BYREF
  lua_Integer ilimit; // [rsp+40h] [rbp-58h] BYREF
  lua_Number ninit; // [rsp+48h] [rbp-50h] BYREF
  lua_Number nlimit; // [rsp+50h] [rbp-48h] BYREF
  lua_Number nstep[8]; // [rsp+58h] [rbp-40h] BYREF

  ci = L->ci;
  ci->callstatus |= 8u;
newframe:
  cl_0 = (LClosure_0 *)ci->func->value_.gc;
  k = cl_0->p->k;
  base = ci->u.l.base;
  while ( 2 )
  {
    savedpc = (unsigned int *)ci->u.l.savedpc;
    ci->u.c.old_errfunc = (ptrdiff_t)(savedpc + 1);
    v4 = *savedpc;
    if ( (L->hookmask & 0xC) != 0 )
    {
      luaG_traceexec(L);
      base = ci->u.l.base;
    }
    last = (unsigned __int8)(v4 >> 6);
    v5 = (unsigned __int8)(v4 >> 6);
    v6 = &base[v5];
    switch ( v4 & 0x3F )
    {
      case 0u:
        *(__m128i *)v6 = _mm_loadu_si128((const __m128i *)&base[v4 >> 23]);
        continue;
      case 1u:
        *(__m128i *)v6 = _mm_loadu_si128((const __m128i *)&k[v4 >> 14]);
        continue;
      case 2u:
        v7 = ci->u.l.savedpc;
        ci->u.c.old_errfunc = (ptrdiff_t)(v7 + 1);
        *(__m128i *)v6 = _mm_loadu_si128((const __m128i *)&k[*v7 >> 6]);
        continue;
      case 3u:
        v6->value_.b = v4 >> 23;
        v6->tt_ = 1;
        if ( (v4 & 0x7FC000) != 0 )
          ci->u.c.old_errfunc += 4LL;
        continue;
      case 4u:
        v8 = v4 >> 23;
        do
        {
          v9 = v6++;
          v9->tt_ = 0;
          LODWORD(v9) = v8--;
        }
        while ( (_DWORD)v9 );
        continue;
      case 5u:
        *(__m128i *)v6 = _mm_loadu_si128((const __m128i *)cl_0->upvals[v4 >> 23]->v);
        continue;
      case 6u:
        v = cl_0->upvals[v4 >> 23]->v;
        v11 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v12 = &k[(unsigned __int8)v11];
        else
          v12 = &base[v11 & 0x1FF];
        if ( v->tt_ != 69 )
        {
          v13 = 0LL;
          goto LABEL_77;
        }
        v14 = (const __m128i *)luaH_get((Table_0 *)v->value_.gc, v12);
        v13 = (const TValue *)v14;
        if ( v14->m128i_i32[2] )
          goto LABEL_80;
        goto LABEL_77;
      case 7u:
        v = &base[v4 >> 23];
        v15 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v12 = &k[(unsigned __int8)v15];
        else
          v12 = &base[v15 & 0x1FF];
        if ( v->tt_ != 69 )
        {
          v13 = 0LL;
          goto LABEL_77;
        }
        v14 = (const __m128i *)luaH_get((Table_0 *)v->value_.gc, v12);
        v13 = (const TValue *)v14;
        if ( v14->m128i_i32[2] )
          goto LABEL_80;
        goto LABEL_77;
      case 8u:
        v16 = cl_0->upvals[(unsigned __int8)(v4 >> 6)]->v;
        v17 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v18 = &base[v17];
        else
          v18 = &k[(unsigned __int8)v17];
        v19 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v20 = &k[(unsigned __int8)v19];
        else
          v20 = &base[v19 & 0x1FF];
        if ( v16->tt_ != 69 )
        {
          lasta = 0LL;
LABEL_36:
          luaV_finishset(L, v16, v18, v20, lasta);
          base = ci->u.l.base;
          continue;
        }
        lasta = (TValue *)luaH_get((Table_0 *)v16->value_.gc, v18);
        if ( lasta->tt_ )
        {
          if ( (v20->tt_ & 0x40) != 0
            && (*(_BYTE *)(v16->value_.i + 9) & 4) != 0
            && (*(_BYTE *)(v20->value_.i + 9) & 3) != 0 )
          {
            luaC_barrierback_(L, (Table_0 *)v16->value_.gc);
          }
          *(__m128i *)lasta = _mm_loadu_si128((const __m128i *)v20);
          v21 = 0;
        }
        else
        {
          v21 = 1;
        }
        if ( v21 )
          goto LABEL_36;
        continue;
      case 9u:
        v22 = cl_0->upvals[v4 >> 23];
        p_value = &v22->v->value_;
        v24.gc = *(GCObject_0 **)&v6->tt_;
        p_value->gc = (GCObject_0 *)v6->value_;
        p_value[1].gc = v24.gc;
        if ( (v22->v->tt_ & 0x40) != 0 && ($0F107F72300CBA7FB0D49582F1E3FF2F *)v22->v == &v22->u )
          luaC_upvalbarrier_(L, v22);
        continue;
      case 0xAu:
        v25 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v26 = &base[v25];
        else
          v26 = &k[(unsigned __int8)v25];
        v27 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v28 = &k[(unsigned __int8)v27];
        else
          v28 = &base[v27 & 0x1FF];
        if ( v6->tt_ != 69 )
        {
          lastb = 0LL;
LABEL_57:
          luaV_finishset(L, v6, v26, v28, lastb);
          base = ci->u.l.base;
          continue;
        }
        lastb = (TValue *)luaH_get((Table_0 *)v6->value_.gc, v26);
        if ( lastb->tt_ )
        {
          if ( (v28->tt_ & 0x40) != 0
            && (*(_BYTE *)(v6->value_.i + 9) & 4) != 0
            && (*(_BYTE *)(v28->value_.i + 9) & 3) != 0 )
          {
            luaC_barrierback_(L, (Table_0 *)v6->value_.gc);
          }
          *(__m128i *)lastb = _mm_loadu_si128((const __m128i *)v28);
          v29 = 0;
        }
        else
        {
          v29 = 1;
        }
        if ( v29 )
          goto LABEL_57;
        continue;
      case 0xBu:
        v30 = v4 >> 23;
        v31 = (v4 >> 14) & 0x1FF;
        lastc = luaH_new(L);
        v6->value_.i = (lua_Integer)lastc;
        v6->tt_ = 69;
        if ( v31 | v30 )
        {
          v32 = luaO_fb2int(v31);
          v33 = luaO_fb2int(v30);
          luaH_resize(L, lastc, v33, v32);
        }
        if ( L->l_G->GCdebt <= 0 )
          continue;
        goto LABEL_72;
      case 0xCu:
        v = &base[v4 >> 23];
        v34 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v12 = &k[(unsigned __int8)v34];
        else
          v12 = &base[v34 & 0x1FF];
        i = (TString_0 *)v12->value_.i;
        v6[1] = (TValue)_mm_loadu_si128((const __m128i *)v);
        if ( v->tt_ != 69 )
        {
          v13 = 0LL;
LABEL_77:
          luaV_finishget(L, v, v12, v6, v13);
          base = ci->u.l.base;
          continue;
        }
        v14 = (const __m128i *)luaH_getstr((Table_0 *)v->value_.gc, i);
        v13 = (const TValue *)v14;
        if ( !v14->m128i_i32[2] )
          goto LABEL_77;
LABEL_80:
        *(__m128i *)v6 = _mm_loadu_si128(v14);
        continue;
      case 0xDu:
        v36 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v37 = &base[v36];
        else
          v37 = &k[(unsigned __int8)v36];
        v38 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v39 = &k[(unsigned __int8)v38];
        else
          v39 = &base[v38 & 0x1FF];
        tt = v37->tt_;
        if ( tt == 19 && v39->tt_ == 19 )
        {
          v6->value_.i = v37->value_.i + v39->value_.i;
          v6->tt_ = 19;
          continue;
        }
        if ( tt == 3 )
        {
          nlimit = v37->value_.n;
        }
        else if ( !luaV_tonumber_(v37, &nlimit) )
        {
          goto LABEL_96;
        }
        if ( v39->tt_ == 3 )
        {
          nstep[0] = v39->value_.n;
LABEL_90:
          v6->value_.n = nlimit + nstep[0];
          v6->tt_ = 3;
          continue;
        }
        if ( luaV_tonumber_(v39, nstep) )
          goto LABEL_90;
LABEL_96:
        luaT_trybinTM(L, v37, v39, v6, TM_ADD_0);
        base = ci->u.l.base;
        continue;
      case 0xEu:
        v41 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v42 = &base[v41];
        else
          v42 = &k[(unsigned __int8)v41];
        v43 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v44 = &k[(unsigned __int8)v43];
        else
          v44 = &base[v43 & 0x1FF];
        v45 = v42->tt_;
        if ( v45 == 19 && v44->tt_ == 19 )
        {
          v6->value_.i = v42->value_.i - v44->value_.i;
          v6->tt_ = 19;
          continue;
        }
        if ( v45 == 3 )
        {
          nlimit = v42->value_.n;
        }
        else if ( !luaV_tonumber_(v42, &nlimit) )
        {
          goto LABEL_114;
        }
        if ( v44->tt_ == 3 )
        {
          nstep[0] = v44->value_.n;
LABEL_108:
          v6->value_.n = nlimit - nstep[0];
          v6->tt_ = 3;
          continue;
        }
        if ( luaV_tonumber_(v44, nstep) )
          goto LABEL_108;
LABEL_114:
        luaT_trybinTM(L, v42, v44, v6, TM_SUB_0);
        base = ci->u.l.base;
        continue;
      case 0xFu:
        v46 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v47 = &base[v46];
        else
          v47 = &k[(unsigned __int8)v46];
        v48 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v49 = &k[(unsigned __int8)v48];
        else
          v49 = &base[v48 & 0x1FF];
        v50 = v47->tt_;
        if ( v50 == 19 && v49->tt_ == 19 )
        {
          v6->value_.i = v47->value_.i * v49->value_.i;
          v6->tt_ = 19;
          continue;
        }
        if ( v50 == 3 )
        {
          nlimit = v47->value_.n;
        }
        else if ( !luaV_tonumber_(v47, &nlimit) )
        {
          goto LABEL_132;
        }
        if ( v49->tt_ == 3 )
        {
          nstep[0] = v49->value_.n;
LABEL_126:
          v6->value_.n = nlimit * nstep[0];
          v6->tt_ = 3;
          continue;
        }
        if ( luaV_tonumber_(v49, nstep) )
          goto LABEL_126;
LABEL_132:
        luaT_trybinTM(L, v47, v49, v6, TM_MUL_0);
        base = ci->u.l.base;
        continue;
      case 0x10u:
        v75 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v76 = &base[v75];
        else
          v76 = &k[(unsigned __int8)v75];
        v77 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v78 = &k[(unsigned __int8)v77];
        else
          v78 = &base[v77 & 0x1FF];
        v79 = v76->tt_;
        if ( v79 == 19 && v78->tt_ == 19 )
        {
          v6->value_.i = luaV_mod(L, v76->value_.i, v78->value_.i);
          v6->tt_ = 19;
          continue;
        }
        if ( v79 == 3 )
        {
          nlimit = v76->value_.n;
        }
        else if ( !luaV_tonumber_(v76, &nlimit) )
        {
          goto LABEL_242;
        }
        if ( v78->tt_ == 3 )
        {
          nstep[0] = v78->value_.n;
        }
        else if ( !luaV_tonumber_(v78, nstep) )
        {
LABEL_242:
          luaT_trybinTM(L, v76, v78, v6, TM_MOD_0);
          base = ci->u.l.base;
          continue;
        }
        v80 = fmod(nlimit, nstep[0]);
        if ( nstep[0] * v80 < 0.0 )
          v80 = v80 + nstep[0];
        v6->value_.n = v80;
        v6->tt_ = 3;
        continue;
      case 0x11u:
        v89 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v90 = &base[v89];
        else
          v90 = &k[(unsigned __int8)v89];
        v91 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v92 = &k[(unsigned __int8)v91];
        else
          v92 = &base[v91 & 0x1FF];
        if ( v90->tt_ == 3 )
        {
          nlimit = v90->value_.n;
        }
        else if ( !luaV_tonumber_(v90, &nlimit) )
        {
          goto LABEL_277;
        }
        if ( v92->tt_ == 3 )
        {
          nstep[0] = v92->value_.n;
LABEL_273:
          v6->value_.n = pow(nlimit, nstep[0]);
          v6->tt_ = 3;
          continue;
        }
        if ( luaV_tonumber_(v92, nstep) )
          goto LABEL_273;
LABEL_277:
        luaT_trybinTM(L, v90, v92, v6, TM_POW_0);
        base = ci->u.l.base;
        continue;
      case 0x12u:
        v51 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v52 = &base[v51];
        else
          v52 = &k[(unsigned __int8)v51];
        v53 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v54 = &k[(unsigned __int8)v53];
        else
          v54 = &base[v53 & 0x1FF];
        if ( v52->tt_ == 3 )
        {
          nlimit = v52->value_.n;
        }
        else if ( !luaV_tonumber_(v52, &nlimit) )
        {
          goto LABEL_147;
        }
        if ( v54->tt_ == 3 )
        {
          nstep[0] = v54->value_.n;
LABEL_143:
          v6->value_.n = nlimit / nstep[0];
          v6->tt_ = 3;
          continue;
        }
        if ( luaV_tonumber_(v54, nstep) )
          goto LABEL_143;
LABEL_147:
        luaT_trybinTM(L, v52, v54, v6, TM_DIV_0);
        base = ci->u.l.base;
        continue;
      case 0x13u:
        v81 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v82 = &base[v81];
        else
          v82 = &k[(unsigned __int8)v81];
        v83 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v84 = &k[(unsigned __int8)v83];
        else
          v84 = &base[v83 & 0x1FF];
        v85 = v82->tt_;
        if ( v85 == 19 && v84->tt_ == 19 )
        {
          v6->value_.i = luaV_div(L, v82->value_.i, v84->value_.i);
          v6->tt_ = 19;
          continue;
        }
        if ( v85 == 3 )
        {
          nlimit = v82->value_.n;
        }
        else if ( !luaV_tonumber_(v82, &nlimit) )
        {
          goto LABEL_262;
        }
        if ( v84->tt_ == 3 )
        {
          nstep[0] = v84->value_.n;
        }
        else if ( !luaV_tonumber_(v84, nstep) )
        {
LABEL_262:
          luaT_trybinTM(L, v82, v84, v6, TM_IDIV_0);
          base = ci->u.l.base;
          continue;
        }
        v86.m128d_f64[0] = nlimit / nstep[0];
        v87 = nlimit / nstep[0];
        if ( fabs(nlimit / nstep[0]) < 4.503599627370496e15 )
        {
          v88 = 0LL;
          v88.m128d_f64[0] = (double)(int)v86.m128d_f64[0];
          *(_QWORD *)&v87 = COERCE_UNSIGNED_INT64(
                              v88.m128d_f64[0]
                            - COERCE_DOUBLE(*(_OWORD *)&_mm_cmpgt_sd(v88, v86) & 0x3FF0000000000000LL)) | *(_QWORD *)&v86.m128d_f64[0] & 0x8000000000000000LL;
        }
        v6->value_.n = v87;
        v6->tt_ = 3;
        continue;
      case 0x14u:
        v55 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v56 = &base[v55];
        else
          v56 = &k[(unsigned __int8)v55];
        v57 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v58 = &k[(unsigned __int8)v57];
        else
          v58 = &base[v57 & 0x1FF];
        if ( v56->tt_ == 19 )
        {
          nlimit = v56->value_.n;
        }
        else if ( !luaV_tointeger(v56, (lua_Integer *)&nlimit, 0) )
        {
          goto LABEL_162;
        }
        if ( v58->tt_ == 19 )
        {
          nstep[0] = v58->value_.n;
LABEL_158:
          v6->value_.i = *(_QWORD *)&nlimit & *(_QWORD *)&nstep[0];
          v6->tt_ = 19;
          continue;
        }
        if ( luaV_tointeger(v58, (lua_Integer *)nstep, 0) )
          goto LABEL_158;
LABEL_162:
        luaT_trybinTM(L, v56, v58, v6, TM_BAND_0);
        base = ci->u.l.base;
        continue;
      case 0x15u:
        v59 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v60 = &base[v59];
        else
          v60 = &k[(unsigned __int8)v59];
        v61 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v62 = &k[(unsigned __int8)v61];
        else
          v62 = &base[v61 & 0x1FF];
        if ( v60->tt_ == 19 )
        {
          nlimit = v60->value_.n;
        }
        else if ( !luaV_tointeger(v60, (lua_Integer *)&nlimit, 0) )
        {
          goto LABEL_177;
        }
        if ( v62->tt_ == 19 )
        {
          nstep[0] = v62->value_.n;
LABEL_173:
          v6->value_.i = *(_QWORD *)&nlimit | *(_QWORD *)&nstep[0];
          v6->tt_ = 19;
          continue;
        }
        if ( luaV_tointeger(v62, (lua_Integer *)nstep, 0) )
          goto LABEL_173;
LABEL_177:
        luaT_trybinTM(L, v60, v62, v6, TM_BOR_0);
        base = ci->u.l.base;
        continue;
      case 0x16u:
        v63 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v64 = &base[v63];
        else
          v64 = &k[(unsigned __int8)v63];
        v65 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v66 = &k[(unsigned __int8)v65];
        else
          v66 = &base[v65 & 0x1FF];
        if ( v64->tt_ == 19 )
        {
          nlimit = v64->value_.n;
        }
        else if ( !luaV_tointeger(v64, (lua_Integer *)&nlimit, 0) )
        {
          goto LABEL_192;
        }
        if ( v66->tt_ == 19 )
        {
          nstep[0] = v66->value_.n;
LABEL_188:
          v6->value_.i = *(_QWORD *)&nlimit ^ *(_QWORD *)&nstep[0];
          v6->tt_ = 19;
          continue;
        }
        if ( luaV_tointeger(v66, (lua_Integer *)nstep, 0) )
          goto LABEL_188;
LABEL_192:
        luaT_trybinTM(L, v64, v66, v6, TM_BXOR_0);
        base = ci->u.l.base;
        continue;
      case 0x17u:
        v67 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v68 = &base[v67];
        else
          v68 = &k[(unsigned __int8)v67];
        v69 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v70 = &k[(unsigned __int8)v69];
        else
          v70 = &base[v69 & 0x1FF];
        if ( v68->tt_ == 19 )
        {
          nlimit = v68->value_.n;
        }
        else if ( !luaV_tointeger(v68, (lua_Integer *)&nlimit, 0) )
        {
          goto LABEL_207;
        }
        if ( v70->tt_ == 19 )
        {
          nstep[0] = v70->value_.n;
LABEL_203:
          v6->value_.i = luaV_shiftl(*(lua_Integer *)&nlimit, *(lua_Integer *)&nstep[0]);
          v6->tt_ = 19;
          continue;
        }
        if ( luaV_tointeger(v70, (lua_Integer *)nstep, 0) )
          goto LABEL_203;
LABEL_207:
        luaT_trybinTM(L, v68, v70, v6, TM_SHL_0);
        base = ci->u.l.base;
        continue;
      case 0x18u:
        v71 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v72 = &base[v71];
        else
          v72 = &k[(unsigned __int8)v71];
        v73 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v74 = &k[(unsigned __int8)v73];
        else
          v74 = &base[v73 & 0x1FF];
        if ( v72->tt_ == 19 )
        {
          nlimit = v72->value_.n;
        }
        else if ( !luaV_tointeger(v72, (lua_Integer *)&nlimit, 0) )
        {
          goto LABEL_222;
        }
        if ( v74->tt_ == 19 )
        {
          nstep[0] = v74->value_.n;
LABEL_218:
          v6->value_.i = luaV_shiftl(*(lua_Integer *)&nlimit, -*(_QWORD *)&nstep[0]);
          v6->tt_ = 19;
          continue;
        }
        if ( luaV_tointeger(v74, (lua_Integer *)nstep, 0) )
          goto LABEL_218;
LABEL_222:
        luaT_trybinTM(L, v72, v74, v6, TM_SHR_0);
        base = ci->u.l.base;
        continue;
      case 0x19u:
        v93 = &base[v4 >> 23];
        v94 = v93->tt_;
        if ( v94 == 19 )
        {
          v6->value_.i = -v93->value_.i;
          v6->tt_ = 19;
        }
        else
        {
          if ( v94 == 3 )
          {
            nstep[0] = v93->value_.n;
LABEL_283:
            v6->value_.n = -nstep[0];
            v6->tt_ = 3;
            continue;
          }
          if ( luaV_tonumber_(v93, nstep) )
            goto LABEL_283;
          luaT_trybinTM(L, v93, v93, &base[v5], TM_UNM_0);
          base = ci->u.l.base;
        }
        continue;
      case 0x1Au:
        v95 = &base[v4 >> 23];
        if ( v95->tt_ == 19 )
        {
          nstep[0] = v95->value_.n;
LABEL_289:
          v6->value_.i = ~*(_QWORD *)&nstep[0];
          v6->tt_ = 19;
          continue;
        }
        if ( luaV_tointeger(v95, (lua_Integer *)nstep, 0) )
          goto LABEL_289;
        luaT_trybinTM(L, v95, v95, &base[v5], TM_BNOT_0);
        base = ci->u.l.base;
        continue;
      case 0x1Bu:
        v96 = &base[v4 >> 23];
        v97 = v96->tt_;
        if ( v97 )
          v98 = v97 == 1 && v96->value_.b == 0;
        else
          v98 = 1;
        v6->value_.b = v98;
        v6->tt_ = 1;
        continue;
      case 0x1Cu:
        luaV_objlen(L, &base[v5], &base[v4 >> 23]);
        base = ci->u.l.base;
        continue;
      case 0x1Du:
        v99 = v4 >> 23;
        v100 = v4 >> 14;
        L->top = &base[(v100 & 0x1FF) + 1];
        luaV_concat(L, (v100 & 0x1FF) - v99 + 1);
        base = ci->u.l.base;
        v101 = (__m128i *)&base[v5];
        v102 = (__m128i *)&base[v99];
        *v101 = _mm_loadu_si128(v102);
        if ( L->l_G->GCdebt > 0 )
        {
          if ( v101 >= v102 )
            v102 = v101 + 1;
          L->top = (StkId)v102;
          luaC_step(L);
          L->top = ci->top;
          base = ci->u.l.base;
        }
        L->top = ci->top;
        continue;
      case 0x1Eu:
        if ( (unsigned __int8)(v4 >> 6) )
          luaF_close(L, &ci->u.l.base[v5 - 1]);
        ci->u.c.old_errfunc += 4LL * (int)((v4 >> 14) - 0x1FFFF);
        continue;
      case 0x1Fu:
        v103 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v104 = &base[v103];
        else
          v104 = &k[(unsigned __int8)v103];
        v105 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v106 = &k[(unsigned __int8)v105];
        else
          v106 = &base[v105 & 0x1FF];
        if ( last == luaV_equalobj(L, v104, v106) )
        {
          v107 = *ci->u.l.savedpc;
          if ( (unsigned __int8)(v107 >> 6) )
            luaF_close(L, &ci->u.l.base[(unsigned __int8)(*ci->u.l.savedpc >> 6) - 1]);
          ci->u.c.old_errfunc += 4LL * (int)((v107 >> 14) - 0x1FFFF) + 4;
        }
        else
        {
          ci->u.c.old_errfunc += 4LL;
        }
        base = ci->u.l.base;
        continue;
      case 0x20u:
        v108 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v109 = &k[(unsigned __int8)v108];
        else
          v109 = &base[v108 & 0x1FF];
        v110 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v111 = &base[v110];
        else
          v111 = &k[(unsigned __int8)v110];
        if ( last == luaV_lessthan(L, v111, v109) )
        {
          v112 = *ci->u.l.savedpc;
          if ( (unsigned __int8)(v112 >> 6) )
            luaF_close(L, &ci->u.l.base[(unsigned __int8)(*ci->u.l.savedpc >> 6) - 1]);
          ci->u.c.old_errfunc += 4LL * (int)((v112 >> 14) - 0x1FFFF) + 4;
        }
        else
        {
          ci->u.c.old_errfunc += 4LL;
        }
        base = ci->u.l.base;
        continue;
      case 0x21u:
        v113 = v4 >> 14;
        if ( (v4 & 0x400000) != 0 )
          v114 = &k[(unsigned __int8)v113];
        else
          v114 = &base[v113 & 0x1FF];
        v115 = v4 >> 23;
        if ( (v4 & 0x80000000) == 0 )
          v116 = &base[v115];
        else
          v116 = &k[(unsigned __int8)v115];
        if ( last == luaV_lessequal(L, v116, v114) )
        {
          v117 = *ci->u.l.savedpc;
          if ( (unsigned __int8)(v117 >> 6) )
            luaF_close(L, &ci->u.l.base[(unsigned __int8)(*ci->u.l.savedpc >> 6) - 1]);
          ci->u.c.old_errfunc += 4LL * (int)((v117 >> 14) - 0x1FFFF) + 4;
        }
        else
        {
          ci->u.c.old_errfunc += 4LL;
        }
        base = ci->u.l.base;
        continue;
      case 0x22u:
        v118 = (v4 >> 14) & 0x1FF;
        if ( v118 )
        {
          v118 = v6->tt_;
          if ( v118 )
          {
            if ( v118 == 1 )
            {
              if ( v6->value_.b )
                LOBYTE(v118) = 0;
            }
            else
            {
              LOBYTE(v118) = 0;
            }
          }
          else
          {
            LOBYTE(v118) = 1;
          }
        }
        else
        {
          v119 = v6->tt_;
          if ( v119 )
          {
            if ( v119 == 1 )
            {
              if ( v6->value_.b )
                LOBYTE(v118) = 1;
            }
            else
            {
              LOBYTE(v118) = 1;
            }
          }
        }
        if ( (_BYTE)v118 )
        {
          ci->u.c.old_errfunc += 4LL;
        }
        else
        {
          v120 = *ci->u.l.savedpc;
          if ( (unsigned __int8)(v120 >> 6) )
            luaF_close(L, &ci->u.l.base[(unsigned __int8)(*ci->u.l.savedpc >> 6) - 1]);
          ci->u.c.old_errfunc += 4LL * (int)((v120 >> 14) - 0x1FFFF) + 4;
        }
        continue;
      case 0x23u:
        v121 = (const __m128i *)&base[v4 >> 23];
        v122 = (v4 >> 14) & 0x1FF;
        if ( v122 )
        {
          v122 = v121->m128i_i32[2];
          if ( v122 )
          {
            if ( v122 == 1 )
            {
              if ( v121->m128i_i32[0] )
                LOBYTE(v122) = 0;
            }
            else
            {
              LOBYTE(v122) = 0;
            }
          }
          else
          {
            LOBYTE(v122) = 1;
          }
        }
        else
        {
          v123 = v121->m128i_i32[2];
          if ( v123 )
          {
            if ( v123 == 1 )
            {
              if ( v121->m128i_i32[0] )
                LOBYTE(v122) = 1;
            }
            else
            {
              LOBYTE(v122) = 1;
            }
          }
        }
        if ( (_BYTE)v122 )
        {
          ci->u.c.old_errfunc += 4LL;
        }
        else
        {
          *(__m128i *)v6 = _mm_loadu_si128(v121);
          v124 = *ci->u.l.savedpc;
          if ( (unsigned __int8)(v124 >> 6) )
            luaF_close(L, &ci->u.l.base[(unsigned __int8)(*ci->u.l.savedpc >> 6) - 1]);
          ci->u.c.old_errfunc += 4LL * (int)((v124 >> 14) - 0x1FFFF) + 4;
        }
        continue;
      case 0x24u:
        v125 = ((v4 >> 14) & 0x1FF) - 1;
        v126 = v4 >> 23;
        if ( v126 )
          L->top = &v6[v126];
        if ( !luaD_precall(L, v6, v125) )
        {
          ci = L->ci;
          goto newframe;
        }
        if ( v125 >= 0 )
          L->top = ci->top;
        base = ci->u.l.base;
        continue;
      case 0x25u:
        v127 = v4 >> 23;
        if ( v127 )
          L->top = &v6[v127];
        v128 = luaD_precall(L, &base[v5], -1);
        if ( v128 )
        {
          base = ci->u.l.base;
          continue;
        }
        v129 = L->ci;
        ci = v129->previous;
        func = v129->func;
        v131 = (LClosure_0 **)ci->func;
        lastd = (unsigned __int64)&v129->u.l.base[*(unsigned __int8 *)(*(_QWORD *)&v129->func->value_.gc[1].tt + 10LL)];
        if ( cl_0->p->sizep > 0 )
          luaF_close(L, ci->u.l.base);
        while ( (unsigned __int64)&func[v128] < lastd )
        {
          *(__m128i *)&v131[2 * v128] = _mm_loadu_si128((const __m128i *)&func[v128]);
          ++v128;
        }
        ci->u.l.base = (StkId)((char *)v131 + (char *)v129->u.l.base - (char *)func);
        v132 = (TValue *)((char *)v131 + (char *)L->top - (char *)func);
        L->top = v132;
        ci->top = v132;
        ci->u.c.old_errfunc = v129->u.c.old_errfunc;
        ci->callstatus |= 0x20u;
        L->ci = ci;
        goto newframe;
      case 0x26u:
        v133 = v4 >> 23;
        if ( cl_0->p->sizep > 0 )
          luaF_close(L, base);
        if ( v133 )
          v134 = v133 - 1;
        else
          v134 = L->top - v6;
        v135 = luaD_poscall(L, ci, &base[v5], v134);
        if ( (ci->callstatus & 8) == 0 )
        {
          ci = L->ci;
          if ( v135 )
            L->top = ci->top;
          goto newframe;
        }
        return;
      case 0x27u:
        if ( v6->tt_ == 19 )
        {
          v139.i = v6->value_.i + v6[2].value_.i;
          v140.gc = (GCObject_0 *)v6[1].value_;
          if ( v6[2].value_.i <= 0 )
            v141 = v139.i >= v140.i;
          else
            v141 = v139.i <= v140.i;
          if ( v141 )
          {
            ci->u.c.old_errfunc += 4LL * (v4 >> 14) - 524284;
            v6->value_ = v139;
            v6[3].value_ = v139;
            v6[3].tt_ = 19;
          }
        }
        else
        {
          v136 = v6[2].value_.n + v6->value_.n;
          n = v6[1].value_.n;
          if ( v6[2].value_.n <= 0.0 )
            v138 = v136 >= n;
          else
            v138 = n >= v136;
          if ( v138 )
          {
            ci->u.c.old_errfunc += 4LL * (v4 >> 14) - 524284;
            v6->value_.n = v136;
            v6[3].value_.n = v136;
            v6[3].tt_ = 3;
          }
        }
        continue;
      case 0x28u:
        if ( v6->tt_ == 19 && v6[2].tt_ == 19 && forlimit(v6 + 1, &ilimit, v6[2].value_.i, &stopnow) )
        {
          if ( stopnow )
            v142.i = 0LL;
          else
            v142.gc = (GCObject_0 *)v6->value_;
          v6[1].value_.i = ilimit;
          v6[1].tt_ = 19;
          v6->value_.i = v142.i - v6[2].value_.i;
          v6->tt_ = 19;
        }
        else
        {
          if ( v6[1].tt_ == 3 )
          {
            nlimit = v6[1].value_.n;
          }
          else if ( !luaV_tonumber_(v6 + 1, &nlimit) )
          {
            luaG_runerror(L, "'for' limit must be a number");
          }
          v6[1].value_.n = nlimit;
          v6[1].tt_ = 3;
          if ( v6[2].tt_ == 3 )
          {
            nstep[0] = v6[2].value_.n;
          }
          else if ( !luaV_tonumber_(v6 + 2, nstep) )
          {
            luaG_runerror(L, "'for' step must be a number");
          }
          v6[2].value_.n = nstep[0];
          v6[2].tt_ = 3;
          if ( v6->tt_ == 3 )
          {
            ninit = v6->value_.n;
          }
          else if ( !luaV_tonumber_(v6, &ninit) )
          {
            luaG_runerror(L, "'for' initial value must be a number");
          }
          v6->value_.n = ninit - nstep[0];
          v6->tt_ = 3;
        }
        ci->u.c.old_errfunc += 4LL * (v4 >> 14) - 524284;
        continue;
      case 0x29u:
        v6[5] = (TValue)_mm_loadu_si128((const __m128i *)&v6[2]);
        v6[4] = (TValue)_mm_loadu_si128((const __m128i *)&v6[1]);
        v6[3] = (TValue)_mm_loadu_si128((const __m128i *)v6);
        L->top = v6 + 6;
        luaD_call(L, v6 + 3, (v4 >> 14) & 0x1FF);
        base = ci->u.l.base;
        L->top = ci->top;
        v143 = (unsigned int *)ci->u.l.savedpc;
        ci->u.c.old_errfunc = (ptrdiff_t)(v143 + 1);
        v4 = *v143;
        v6 = &base[(unsigned __int8)(*v143 >> 6)];
        goto l_tforloop;
      case 0x2Au:
l_tforloop:
        if ( v6[1].tt_ )
        {
          *(__m128i *)v6 = _mm_loadu_si128((const __m128i *)&v6[1]);
          ci->u.c.old_errfunc += 4LL * (v4 >> 14) - 524284;
        }
        continue;
      case 0x2Bu:
        v144 = v4 >> 23;
        v145 = (v4 >> 14) & 0x1FF;
        if ( !v144 )
          v144 = L->top - v6 - 1;
        if ( !v145 )
        {
          v146 = ci->u.l.savedpc;
          ci->u.c.old_errfunc = (ptrdiff_t)(v146 + 1);
          v145 = *v146 >> 6;
        }
        h = (Table_0 *)v6->value_.i;
        t = (Table_0 *)v6->value_.i;
        v147 = v144 + 50 * (v145 - 1);
        laste = v147;
        if ( *(_DWORD *)(v6->value_.i + 12) < v147 )
          luaH_resizearray(L, (Table_0 *)v6->value_.gc, v147);
        while ( v144 > 0 )
        {
          v148 = &v6[v144];
          v149 = laste--;
          luaH_setint(L, t, v149, v148);
          if ( (v148->tt_ & 0x40) != 0 && (h->marked & 4) != 0 && (*(_BYTE *)(v148->value_.i + 9) & 3) != 0 )
            luaC_barrierback_(L, t);
          --v144;
        }
        L->top = ci->top;
        continue;
      case 0x2Cu:
        v150 = cl_0->p->p[v4 >> 14];
        v151 = getcached(v150, cl_0->upvals, base);
        if ( v151 )
        {
          v6->value_.i = (lua_Integer)v151;
          v6->tt_ = 70;
        }
        else
        {
          pushclosure(L, v150, cl_0->upvals, base, v6);
        }
        if ( L->l_G->GCdebt <= 0 )
          continue;
LABEL_72:
        L->top = v6 + 1;
        luaC_step(L);
        L->top = ci->top;
        base = ci->u.l.base;
        continue;
      case 0x2Du:
        v152 = (v4 >> 23) - 1;
        v153 = base - ci->func - cl_0->p->numparams - 1;
        if ( v153 < 0 )
          v153 = 0;
        if ( v152 < 0 )
        {
          if ( L->stack_last - L->top <= v153 )
            luaD_growstack(L, v153);
          base = ci->u.l.base;
          v6 = &base[v5];
          L->top = &base[v5 + v153];
          v152 = v153;
        }
        for ( j = 0; ; ++j )
        {
          v155 = v153;
          if ( v152 <= v153 )
            v155 = v152;
          if ( j >= v155 )
            break;
          v6[j] = (TValue)_mm_loadu_si128((const __m128i *)&base[j - (__int64)v153]);
        }
        while ( v152 > j )
          v6[j++].tt_ = 0;
        continue;
      default:
        continue;
    }
  }
};
