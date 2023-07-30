// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lobject.c

// Line 43: range 00000000152F2125-00000000152F215B
int __fastcall luaO_int2fb(unsigned int x)
{
  int v1; // eax

  if ( x <= 7 )
    return x;
  v1 = 0;
  while ( x > 0x7F )
  {
    x = (x + 15) >> 4;
    v1 += 4;
  }
  while ( x > 0xF )
  {
    x = (x + 1) >> 1;
    ++v1;
  }
  return (8 * v1 + 8) | (x - 8);
};

// Line 57: range 00000000152F215C-00000000152F2175
int __fastcall luaO_fb2int(int x)
{
  int result; // eax

  result = x;
  if ( x > 7 )
    return ((x & 7) + 8) << ((x >> 3) - 1);
  return result;
};

// Line 77: range 00000000152F2176-00000000152F2199
int __fastcall luaO_ceillog2(unsigned int x)
{
  unsigned int v1; // edi
  int v2; // eax

  v1 = x - 1;
  v2 = 0;
  while ( v1 > 0xFF )
  {
    v2 += 8;
    v1 >>= 8;
  }
  return log_2_5284[v1] + v2;
};

// Line 85: range 00000000152F1E1A-00000000152F1E9E
lua_Integer __fastcall intarith(lua_State_0 *L, int op, lua_Integer v1, lua_Integer v2)
{
  lua_Integer result; // rax

  switch ( op )
  {
    case 0:
      result = v2 + v1;
      break;
    case 1:
      result = v1 - v2;
      break;
    case 2:
      result = v2 * v1;
      break;
    case 3:
      result = luaV_mod(L, v1, v2);
      break;
    case 4:
    case 5:
      result = 0LL;
      break;
    case 6:
      result = luaV_div(L, v1, v2);
      break;
    case 7:
      result = v2 & v1;
      break;
    case 8:
      result = v2 | v1;
      break;
    case 9:
      result = v2 ^ v1;
      break;
    case 10:
      result = luaV_shiftl(v1, v2);
      break;
    case 11:
      result = luaV_shiftl(v1, -v2);
      break;
    case 12:
      result = -v1;
      break;
    case 13:
      result = ~v1;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
};

// Line 104: range 00000000152F1E9F-00000000152F1F93
lua_Number __fastcall numarith(lua_State_0 *L, int op, double a3, lua_Number v1, lua_Number v2)
{
  lua_Number result; // xmm0_8
  __m128d v6; // xmm1
  __m128d v7; // xmm2

  switch ( op )
  {
    case 0:
      result = a3 + v1;
      break;
    case 1:
      result = a3 - v1;
      break;
    case 2:
      result = a3 * v1;
      break;
    case 3:
      result = fmod(a3, v1);
      if ( v1 * result < 0.0 )
        result = result + v1;
      break;
    case 4:
      result = pow(a3, v1);
      break;
    case 5:
      result = a3 / v1;
      break;
    case 6:
      v6.m128d_f64[0] = a3 / v1;
      result = v6.m128d_f64[0];
      if ( fabs(v6.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v7 = 0LL;
        v7.m128d_f64[0] = (double)(int)v6.m128d_f64[0];
        *(_QWORD *)&result = COERCE_UNSIGNED_INT64(v7.m128d_f64[0] - COERCE_DOUBLE(*(_OWORD *)&_mm_cmpgt_sd(v7, v6) & 0x3FF0000000000000LL)) | *(_QWORD *)&v6.m128d_f64[0] & 0x8000000000000000LL;
      }
      break;
    case 12:
      result = -a3;
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
};

// Line 124: range 00000000152F219A-00000000152F2383
void __fastcall luaO_arith(lua_State_0 *L, int op, const TValue *p1, const TValue *p2, TValue *res)
{
  lua_Number v5; // xmm2_8
  int tt; // eax
  lua_Number n1; // [rsp+0h] [rbp-38h] BYREF
  lua_Number n2[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( op > 11 )
  {
    if ( op != 13 )
      goto LABEL_22;
LABEL_10:
    if ( p1->tt_ == 19 )
    {
      n1 = p1->value_.n;
    }
    else if ( !luaV_tointeger(p1, (lua_Integer *)&n1, 0) )
    {
      goto LABEL_14;
    }
    if ( p2->tt_ == 19 )
    {
      n2[0] = p2->value_.n;
    }
    else if ( !luaV_tointeger(p2, (lua_Integer *)n2, 0) )
    {
      goto LABEL_14;
    }
    res->value_.i = intarith(L, op, *(lua_Integer *)&n1, *(lua_Integer *)&n2[0]);
    res->tt_ = 19;
    return;
  }
  if ( op >= 7 )
    goto LABEL_10;
  if ( (unsigned int)(op - 4) <= 1 )
  {
    if ( p1->tt_ == 3 )
    {
      n1 = p1->value_.n;
    }
    else if ( !luaV_tonumber_(p1, &n1) )
    {
      goto LABEL_14;
    }
    if ( p2->tt_ != 3 )
    {
      if ( luaV_tonumber_(p2, n2) )
        goto LABEL_33;
LABEL_14:
      luaT_trybinTM(L, p1, p2, res, (TMS)(op + 6));
      return;
    }
    n2[0] = p2->value_.n;
    goto LABEL_33;
  }
LABEL_22:
  tt = p1->tt_;
  if ( tt == 19 && p2->tt_ == 19 )
  {
    res->value_.i = intarith(L, op, p1->value_.i, p2->value_.i);
    res->tt_ = 19;
    return;
  }
  if ( tt == 3 )
  {
    n1 = p1->value_.n;
  }
  else if ( !luaV_tonumber_(p1, &n1) )
  {
    goto LABEL_14;
  }
  if ( p2->tt_ != 3 )
  {
    if ( luaV_tonumber_(p2, n2) )
      goto LABEL_33;
    goto LABEL_14;
  }
  n2[0] = p2->value_.n;
LABEL_33:
  res->value_.n = numarith(L, op, n1, n2[0], v5);
  res->tt_ = 3;
};

// Line 164: range 00000000152F2388-00000000152F23A0
int __fastcall luaO_hexavalue(int c)
{
  if ( (luai_ctype_[c + 1] & 2) != 0 )
    return c - 48;
  else
    return (c | 0x20) - 87;
};

// Line 170: range 00000000152F1DEA-00000000152F1E19
int __fastcall isneg(const char **s)
{
  const char *v1; // rax
  char v2; // dl

  v1 = *s;
  v2 = **s;
  if ( v2 == 45 )
  {
    *s = v1 + 1;
    return 1;
  }
  else
  {
    if ( v2 == 43 )
      *s = v1 + 1;
    return 0;
  }
};

// Line 251: range 00000000152F1F94-00000000152F2003
const char *__fastcall l_str2dloc(const char *s, lua_Number *result, int mode)
{
  char *v3; // rdx
  char *endptr; // [rsp+8h] [rbp-20h] BYREF

  *result = strtod(s, &endptr);
  if ( endptr == s )
    return 0LL;
  while ( 1 )
  {
    v3 = endptr;
    if ( (luai_ctype_[(unsigned __int8)*endptr + 1] & 8) == 0 )
      break;
    ++endptr;
  }
  if ( *endptr )
    return 0LL;
  return v3;
};

// Line 274: range 00000000152F2005-00000000152F20EE
const char *__fastcall l_str2d(const char *s, lua_Number *result)
{
  char *v2; // rax
  unsigned __int8 v3; // al
  int v4; // r13d
  const char *v5; // rbx
  char *v7; // r14
  char buff[201]; // [rsp+0h] [rbp-F8h] BYREF

  v2 = strpbrk(s, ".xXnN");
  if ( v2 )
  {
    v3 = *v2 | 0x20;
    v4 = v3;
    if ( v3 == 110 )
      return 0LL;
  }
  else
  {
    v4 = 0;
  }
  v5 = l_str2dloc(s, result, v4);
  if ( !v5 )
  {
    v7 = strchr(s, 46);
    if ( strlen(s) <= 0xC8 )
    {
      if ( v7 )
      {
        strcpy(buff, s);
        buff[v7 - s] = *localeconv()->decimal_point;
        v5 = l_str2dloc(buff, result, v4);
        if ( v5 )
          return &s[v5 - buff];
      }
    }
  }
  return v5;
};

// Line 299: range 00000000152F23A1-00000000152F2524
const char *__fastcall l_str2int(const char *s, lua_Integer *result)
{
  int v2; // ebx
  int v3; // r8d
  unsigned __int64 v4; // rcx
  const char *v5; // r12
  int v6; // eax
  const char *i; // [rsp+0h] [rbp-28h] BYREF

  for ( i = s; (luai_ctype_[*(unsigned __int8 *)i + 1] & 8) != 0; ++i )
    ;
  v2 = isneg(&i);
  if ( *i != 48 )
  {
    v3 = 1;
    v4 = 0LL;
    goto LABEL_12;
  }
  if ( i[1] == 88 || i[1] == 120 )
  {
    i += 2;
    v3 = 1;
    v4 = 0LL;
    while ( 1 )
    {
      v5 = i;
      if ( (luai_ctype_[*(unsigned __int8 *)i + 1] & 0x10) == 0 )
        break;
      v4 = 16 * v4 + luaO_hexavalue(*i);
      i = v5 + 1;
      v3 = 0;
    }
  }
  else
  {
    v3 = 1;
    v4 = 0LL;
LABEL_12:
    while ( (luai_ctype_[*(unsigned __int8 *)i + 1] & 2) != 0 )
    {
      v6 = *i - 48;
      if ( v4 > 0xCCCCCCCCCCCCCCBLL )
      {
        if ( v4 > 0xCCCCCCCCCCCCCCCLL )
          return 0LL;
        if ( v2 + 7 < v6 )
          return 0LL;
      }
      v4 = v6 + 10 * v4;
      ++i;
      v3 = 0;
    }
  }
  while ( (luai_ctype_[*(unsigned __int8 *)i + 1] & 8) != 0 )
    ++i;
  if ( v3 )
    return 0LL;
  if ( *i )
    return 0LL;
  if ( v2 )
    v4 = -(__int64)v4;
  *result = v4;
  return i;
};

// Line 331: range 00000000152F2526-00000000152F2587
size_t __fastcall luaO_str2num(const char *s, TValue *o)
{
  const char *v2; // rax
  lua_Number n; // [rsp+0h] [rbp-28h] BYREF
  lua_Integer i[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = l_str2int(s, i);
  if ( v2 )
  {
    o->value_.i = i[0];
    o->tt_ = 19;
    return v2 - s + 1;
  }
  v2 = l_str2d(s, &n);
  if ( v2 )
  {
    o->value_.n = n;
    o->tt_ = 3;
    return v2 - s + 1;
  }
  return 0LL;
};

// Line 349: range 00000000152F2589-00000000152F25E6
int __fastcall luaO_utf8esc(char *buff, unsigned __int64 x)
{
  int v2; // r8d
  unsigned int v3; // ecx
  int v4; // r9d

  if ( x > 0x7F )
  {
    v3 = 63;
    v2 = 1;
    do
    {
      v4 = v2++;
      buff[8 - v4] = x & 0x3F | 0x80;
      x >>= 6;
      v3 >>= 1;
    }
    while ( v3 < x );
    buff[8 - v2] = (2 * ~(_BYTE)v3) | x;
  }
  else
  {
    buff[7] = x;
    return 1;
  }
  return v2;
};

// Line 371: range 00000000152F25E7-00000000152F268C
void __fastcall luaO_tostring(lua_State_0 *L, StkId obj)
{
  size_t v2; // rbp
  TString_0 *v3; // rax
  char *decimal_point; // rdx
  size_t v5; // rax
  char buff[50]; // [rsp+0h] [rbp-58h] BYREF

  if ( obj->tt_ == 19 )
  {
    v2 = snprintf(buff, 0x32uLL, "%lld", obj->value_.i);
  }
  else
  {
    v2 = snprintf(buff, 0x32uLL, "%.14g", obj->value_.n);
    if ( !buff[strspn(buff, "-0123456789")] )
    {
      decimal_point = localeconv()->decimal_point;
      v5 = v2 + 1;
      buff[v2] = *decimal_point;
      v2 += 2LL;
      buff[v5] = 48;
    }
  }
  v3 = luaS_newlstr(L, buff, v2);
  obj->value_.i = (lua_Integer)v3;
  obj->tt_ = v3->tt | 0x40;
};

// Line 390: range 00000000152F20F3-00000000152F2124
void __fastcall pushstr(lua_State_0 *L, const char *str, size_t l)
{
  StkId top; // rbp
  TString_0 *v4; // rax

  top = L->top;
  v4 = luaS_newlstr(L, str, l);
  top->value_.i = (lua_Integer)v4;
  top->tt_ = v4->tt | 0x40;
  luaD_inctop(L);
};

// Line 400: range 00000000152F271D-00000000152F2A40
const char *__fastcall luaO_pushvfstring(lua_State_0 *L, const char *fmt, __va_list_tag *argp)
{
  int i; // r13d
  const char **v6; // rax
  const char *v7; // rsi
  _DWORD *v8; // rax
  StkId v9; // rdx
  int *v10; // rax
  char *v11; // rax
  char *v12; // rbx
  char v13; // al
  StkId top; // rdx
  Value_0 *overflow_arg_area; // rax
  StkId v16; // rdx
  Value_0 *v17; // rax
  const void **v18; // rax
  int v19; // eax
  unsigned __int64 *v20; // rax
  int v21; // eax
  char buff[88]; // [rsp+0h] [rbp-58h] BYREF

  for ( i = 0; ; i += 2 )
  {
    v11 = strchr(fmt, 37);
    v12 = v11;
    if ( !v11 )
      break;
    pushstr(L, fmt, v11 - fmt);
    v13 = v12[1];
    if ( v13 != 37 )
    {
      if ( v13 >= 37 && v13 <= 115 && v13 >= 73 )
      {
        switch ( v13 )
        {
          case 'I':
            top = L->top;
            if ( argp->gp_offset > 0x2F )
            {
              overflow_arg_area = (Value_0 *)argp->overflow_arg_area;
              argp->overflow_arg_area = &overflow_arg_area[1];
            }
            else
            {
              overflow_arg_area = (Value_0 *)((char *)argp->reg_save_area + argp->gp_offset);
              argp->gp_offset += 8;
            }
            top->value_ = (Value_0)overflow_arg_area->gc;
            top->tt_ = 19;
            goto top2str;
          case 'U':
            if ( argp->gp_offset > 0x2F )
            {
              v20 = (unsigned __int64 *)argp->overflow_arg_area;
              argp->overflow_arg_area = v20 + 1;
            }
            else
            {
              v20 = (unsigned __int64 *)((char *)argp->reg_save_area + argp->gp_offset);
              argp->gp_offset += 8;
            }
            v21 = luaO_utf8esc(buff, *v20);
            pushstr(L, &buff[8LL - v21], v21);
            goto LABEL_18;
          case 'c':
            if ( argp->gp_offset > 0x2F )
            {
              v8 = argp->overflow_arg_area;
              argp->overflow_arg_area = v8 + 2;
            }
            else
            {
              v8 = (char *)argp->reg_save_area + argp->gp_offset;
              argp->gp_offset += 8;
            }
            buff[0] = *v8;
            if ( (luai_ctype_[(unsigned __int8)buff[0] + 1] & 4) != 0 )
              pushstr(L, buff, 1uLL);
            else
              luaO_pushfstring(L, "<\\%d>", (unsigned __int8)buff[0]);
            goto LABEL_18;
          case 'd':
            v9 = L->top;
            if ( argp->gp_offset > 0x2F )
            {
              v10 = (int *)argp->overflow_arg_area;
              argp->overflow_arg_area = v10 + 2;
            }
            else
            {
              v10 = (int *)((char *)argp->reg_save_area + argp->gp_offset);
              argp->gp_offset += 8;
            }
            v9->value_.i = *v10;
            v9->tt_ = 19;
            goto top2str;
          case 'f':
            v16 = L->top;
            if ( argp->fp_offset > 0xAF )
            {
              v17 = (Value_0 *)argp->overflow_arg_area;
              argp->overflow_arg_area = &v17[1];
            }
            else
            {
              v17 = (Value_0 *)((char *)argp->reg_save_area + argp->fp_offset);
              argp->fp_offset += 16;
            }
            v16->value_ = (Value_0)v17->gc;
            v16->tt_ = 3;
top2str:
            luaD_inctop(L);
            luaO_tostring(L, L->top - 1);
            goto LABEL_18;
          case 'p':
            if ( argp->gp_offset > 0x2F )
            {
              v18 = (const void **)argp->overflow_arg_area;
              argp->overflow_arg_area = v18 + 1;
            }
            else
            {
              v18 = (const void **)((char *)argp->reg_save_area + argp->gp_offset);
              argp->gp_offset += 8;
            }
            v19 = snprintf(buff, 0x28uLL, "%p", *v18);
            pushstr(L, buff, v19);
            goto LABEL_18;
          case 's':
            if ( argp->gp_offset > 0x2F )
            {
              v6 = (const char **)argp->overflow_arg_area;
              argp->overflow_arg_area = v6 + 1;
            }
            else
            {
              v6 = (const char **)((char *)argp->reg_save_area + argp->gp_offset);
              argp->gp_offset += 8;
            }
            v7 = *v6;
            if ( !*v6 )
              v7 = "(null)";
            pushstr(L, v7, strlen(v7));
            goto LABEL_18;
          default:
            break;
        }
      }
      luaG_runerror(L, "invalid option '%%%c' to 'lua_pushfstring'", (unsigned int)v13);
    }
    pushstr(L, "%", 1uLL);
LABEL_18:
    fmt = v12 + 2;
  }
  if ( (char *)L->stack_last - (char *)L->top <= 16 )
    luaD_growstack(L, 1);
  pushstr(L, fmt, strlen(fmt));
  if ( i > 0 )
    luaV_concat(L, i + 1);
  return (const char *)(L->top[-1].value_.i + 24);
};

// Line 468: range 00000000152F268E-00000000152F271C
const char *luaO_pushfstring(lua_State_0 *L, const char *fmt, ...)
{
  va_list argp; // [rsp+8h] [rbp-D0h] BYREF

  va_start(argp, fmt);
  return luaO_pushvfstring(L, fmt, (__va_list_tag *)argp);
};

// Line 487: range 00000000152F2A42-00000000152F2B78
void __fastcall luaO_chunkid(char *out, const char *source, size_t bufflen)
{
  unsigned __int64 v4; // rcx
  size_t v5; // rbx
  size_t v6; // r13
  char *v7; // rax
  char *v8; // rbp
  size_t v9; // r13
  char *v10; // rbp
  char *v11; // rbp

  v4 = strlen(source) + 1;
  v5 = v4 - 1;
  if ( *source == 61 )
  {
    if ( v5 <= bufflen )
      goto LABEL_4;
    v6 = bufflen - 1;
    memcpy(out, source + 1, bufflen - 1);
    out[v6] = 0;
  }
  else if ( *source == 64 )
  {
    if ( v5 <= bufflen )
    {
LABEL_4:
      memcpy(out, source + 1, v4 - 1);
      return;
    }
    *(_WORD *)out = 11822;
    out[2] = 46;
    memcpy(out + 3, &source[v4 - (bufflen - 3)], bufflen - 3);
  }
  else
  {
    v7 = strchr(source, 10);
    *(_QWORD *)out = 0x20676E697274735BLL;
    out[8] = 34;
    v8 = out + 9;
    v9 = bufflen - 15;
    if ( v7 == 0LL && v5 < v9 )
    {
      memcpy(v8, source, v5);
      v11 = &v8[v5];
    }
    else
    {
      if ( v7 )
        v5 = v7 - source;
      if ( v5 <= v9 )
        v9 = v5;
      memcpy(v8, source, v9);
      v10 = &v8[v9];
      *(_WORD *)v10 = 11822;
      v10[2] = 46;
      v11 = v10 + 3;
    }
    strcpy(v11, "\"]");
  }
};
