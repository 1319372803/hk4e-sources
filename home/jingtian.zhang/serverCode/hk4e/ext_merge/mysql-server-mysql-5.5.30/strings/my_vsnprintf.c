// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/my_vsnprintf.c

// Line 68: range 000000000CFB3370-000000000CFB33B9
const char *__fastcall get_length(const char *fmt, size_t *length, uint *pre_zero)
{
  const char *result; // rax
  int v4; // edi
  uchar *ctype; // r9
  __int64 v6; // rcx

  result = fmt;
  v4 = *fmt;
  ctype = my_charset_latin1.ctype;
  if ( (ctype[(unsigned __int8)v4 + 1] & 4) != 0 )
  {
    v6 = *length;
    do
    {
      v6 = (unsigned int)(v4 - 48) + 10 * v6;
      *length = v6;
      if ( !v6 )
        *pre_zero |= 4u;
      v4 = *++result;
    }
    while ( (ctype[*(unsigned __int8 *)result + 1] & 4) != 0 );
  }
  return result;
};

// Line 189: range 000000000CFB35F0-000000000CFB373F
char *__fastcall process_str_arg(CHARSET_INFO *cs_0, char *to, char *end, size_t width, char *par, uint print_type)
{
  char *v6; // r14
  unsigned __int64 v8; // rbp
  char *v9; // rbx
  unsigned __int64 v10; // r15
  size_t v11; // rax
  size_t v12; // rax
  char *v14; // rbp
  __int64 v15; // r15
  char *v16; // rax
  char v17; // r15
  uint v18; // eax
  char *v20; // [rsp+0h] [rbp-58h]
  char print_typea; // [rsp+Ch] [rbp-4Ch]
  int well_formed_error[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v6 = to;
  v8 = end - to;
  v9 = par;
  v10 = end - to + 1;
  if ( !par )
    v9 = "(null)";
  print_typea = print_type;
  v11 = strnlen(v9, width);
  if ( v10 <= v11 )
    v11 = v8;
  v12 = cs_0->cset->well_formed_len(cs_0, v9, &v9[v11], width, well_formed_error);
  if ( (print_typea & 8) != 0 )
  {
    if ( v8 <= v12 )
    {
LABEL_20:
      *to = 0;
      return v6;
    }
    v14 = to + 1;
    *to = 96;
    v20 = &v9[v12];
    if ( v9 >= &v9[v12] )
    {
LABEL_19:
      if ( end > v14 + 1 )
      {
        *v14 = 96;
        return v14 + 1;
      }
      goto LABEL_20;
    }
    while ( 1 )
    {
      v17 = *v9;
      v18 = cs_0->cset->mbcharlen(cs_0, (unsigned __int8)*v9);
      if ( !v18 )
        break;
      if ( v18 == 1 )
        goto LABEL_12;
LABEL_15:
      v15 = v18;
      if ( end <= &v14[v18] )
        goto LABEL_20;
      v16 = strnmov(v14, v9, v18);
      v9 += v15;
      v14 = v16;
      if ( v20 <= v9 )
        goto LABEL_19;
    }
    v18 = 1;
LABEL_12:
    if ( v17 == 96 )
    {
      if ( end <= v14 + 1 )
        goto LABEL_20;
      *v14++ = 96;
    }
    goto LABEL_15;
  }
  return strnmov(to, v9, v12);
};

// Line 230: range 000000000CFB33C0-000000000CFB341E
char *__fastcall process_dbl_arg(char *to, char *end, size_t width, double par, char arg_type)
{
  size_t v5; // r8
  unsigned __int64 v7; // rsi
  int v8; // edi

  v5 = 6LL;
  if ( width != -1LL )
  {
    LOBYTE(v5) = 30;
    if ( width <= 0x1E )
      v5 = width;
  }
  v7 = end - to - 1;
  v8 = v7;
  if ( v5 <= v7 )
    v8 = v5;
  if ( arg_type == 102 )
    return &to[my_fcvt(par, v8, to, 0LL)];
  else
    return &to[my_gcvt(par, MY_GCVT_ARG_DOUBLE, v8, to, 0LL)];
};

// Line 250: range 000000000CFB3420-000000000CFB35E7
char *__fastcall process_int_arg(char *to, char *end, size_t length, longlong par, char arg_type, uint print_type)
{
  char *v7; // r12
  size_t v9; // rbx
  char *v10; // r13
  char *v11; // r15
  char *v12; // rax
  char v13; // r9
  size_t v14; // r13
  char *result; // rax
  size_t v16; // rbx
  char print_typea; // [rsp+8h] [rbp-60h]
  char buff[32]; // [rsp+10h] [rbp-58h] BYREF

  v7 = to;
  v9 = end - to;
  if ( (unsigned __int64)(end - to) <= 0xF || length )
  {
    v10 = buff;
    print_typea = print_type;
    v11 = buff;
    if ( arg_type == 105 )
    {
LABEL_15:
      v12 = int10_to_str(par, v11, -10);
      v13 = print_typea;
      goto LABEL_10;
    }
  }
  else
  {
    v10 = to;
    v11 = to;
    print_typea = print_type;
    if ( arg_type == 105 )
      goto LABEL_15;
  }
  if ( arg_type == 100 )
    goto LABEL_15;
  if ( arg_type == 117 )
  {
    v12 = int10_to_str(par, v11, 10);
    v13 = print_typea;
  }
  else if ( arg_type == 112 )
  {
    *v11 = 48;
    v11[1] = 120;
    v12 = int2str(par, v11 + 2, 16, 0);
    v13 = print_typea;
  }
  else
  {
    if ( arg_type == 111 )
      v12 = int2str(par, v11, 8, 0);
    else
      v12 = int2str(par, v11, 16, arg_type == 88);
    v13 = print_typea;
  }
LABEL_10:
  v14 = v12 - v10;
  result = to;
  if ( v9 >= v14 )
  {
    if ( v11 == buff )
    {
      if ( v9 > length )
        v9 = length;
      if ( v14 < v9 )
      {
        v16 = v9 - v14;
        if ( (v13 & 4) != 0 )
        {
          memset(to, 48, v16);
          if ( arg_type == 112 )
          {
            if ( v16 <= 1 )
              buff[0] = 120;
            else
              to[1] = 120;
            buff[1] = 48;
          }
        }
        else
        {
          memset(to, 32, v16);
        }
        v7 = &to[v16];
      }
      memmove(v7, buff, v14);
    }
    return &v7[v14];
  }
  return result;
};

// Line 321: range 000000000CFB3750-000000000CFB3E64
char *__fastcall process_args(
        CHARSET_INFO *cs_0,
        char *to,
        char *end,
        const char *fmt,
        size_t arg_index,
        __va_list_tag *ap)
{
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  size_t *i; // r15
  char v12; // al
  size_t v13; // rbp
  const char *v14; // rdi
  const char *v15; // rax
  char *v16; // rdx
  _OWORD *v17; // rsi
  const char *v18; // rcx
  char v19; // r8
  char *v20; // rax
  uchar *v21; // rsi
  int v22; // edx
  unsigned int v23; // r10d
  uchar *v24; // rdi
  __int64 v25; // rcx
  const char *length; // rax
  unsigned __int64 v27; // rdx
  unsigned int v28; // r10d
  unsigned __int64 v29; // rcx
  int v30; // eax
  uchar *ctype; // rsi
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  ARGS_INFO *p_double_arg; // rax
  char str_arg; // cl
  unsigned int v36; // ecx
  int *v37; // rdx
  unsigned int v38; // r15d
  size_t *p_length; // r12
  char v40; // r8
  unsigned int v41; // ecx
  longlong *v42; // rdx
  unsigned int gp_offset; // edx
  double *overflow_arg_area; // rcx
  unsigned int fp_offset; // ecx
  _QWORD *v46; // rdx
  uint v47; // r9d
  size_t v48; // rcx
  const char *v49; // rsi
  signed __int64 v50; // rdx
  size_t v52; // rdx
  size_t v53; // rcx
  uint v54; // r9d
  size_t longlong_arg; // rdx
  __int64 v56; // rax
  longlong longlong_arg_low; // rcx
  unsigned int v58; // ecx
  unsigned int *v59; // rdx
  size_t v61; // [rsp+10h] [rbp-B48h]
  ARGS_INFO args_arr[32]; // [rsp+20h] [rbp-B38h] BYREF
  PRINT_INFO print_arr[32]; // [rsp+420h] [rbp-738h] BYREF
  _OWORD v65[3]; // [rsp+B20h] [rbp-38h] BYREF

  v8 = arg_index;
  v9 = 0;
  for ( i = &print_arr[0].width; ; i += 7 )
  {
    *((_DWORD *)i + 2) = 0;
    v12 = *fmt;
    v13 = arg_index - 1;
    if ( *fmt == 96 )
    {
      *((_DWORD *)i + 2) = 8;
      v12 = *++fmt;
    }
    *i = 0LL;
    *(i - 1) = 0LL;
    v14 = &fmt[v12 == 45];
    if ( *v14 == 42 )
    {
      length = get_length(v14 + 1, i - 1, (uint *)i + 2);
      v27 = *(i - 1);
      v28 = v8;
      *((_DWORD *)i + 2) |= 1u;
      *(i - 1) = v27 - 1;
      v29 = v27 - 1;
      if ( v27 >= v8 )
        v28 = v27;
      args_arr[v29].arg_type = 100;
      args_arr[v29].have_longlong = 0;
      v8 = v28;
      v15 = length + 1;
    }
    else
    {
      v15 = get_length(v14, i - 1, (uint *)i + 2);
    }
    if ( *v15 == 46 )
    {
      LODWORD(v16) = v15[1];
      if ( v15[1] == 42 )
      {
        v16 = (char *)(v15 + 2);
        v30 = v15[2];
        ctype = my_charset_latin1.ctype;
        v32 = *i;
        if ( (ctype[(unsigned __int8)v30 + 1] & 4) != 0 )
        {
          do
          {
            ++v16;
            v32 = (unsigned int)(v30 - 48) + 10 * v32;
            *i = v32;
            v30 = *v16;
          }
          while ( (ctype[(unsigned __int8)*v16 + 1] & 4) != 0 );
        }
        *((_DWORD *)i + 2) |= 2u;
        *i = v32 - 1;
        v33 = v32 - 1;
        if ( v8 >= v32 )
          LODWORD(v32) = v8;
        args_arr[v33].arg_type = 100;
        args_arr[v33].have_longlong = 0;
        v8 = v32;
        v15 = v16 + 1;
        LOBYTE(v16) = v16[1];
      }
      else
      {
        ++v15;
        v24 = my_charset_latin1.ctype;
        if ( (v24[(unsigned __int8)v16 + 1] & 4) != 0 )
        {
          v25 = *i;
          do
          {
            ++v15;
            v25 = (unsigned int)((_DWORD)v16 - 48) + 10 * v25;
            *i = v25;
            LODWORD(v16) = *v15;
          }
          while ( (v24[*(unsigned __int8 *)v15 + 1] & 4) != 0 );
        }
      }
    }
    else
    {
      *i = -1LL;
      LOBYTE(v16) = *v15;
    }
    v17 = &v65[2 * v13];
    args_arr[v13].have_longlong = 0;
    if ( (_BYTE)v16 == 108 )
    {
      LOBYTE(v16) = v15[1];
      if ( (_BYTE)v16 == 108 )
      {
        LOBYTE(v16) = v15[2];
        *((_DWORD *)v17 - 703) = 1;
        v15 += 2;
      }
      else
      {
        ++v15;
        *((_DWORD *)v17 - 703) = 1;
      }
    }
    else if ( (_BYTE)v16 == 122 )
    {
      LOBYTE(v16) = v15[1];
      *((_DWORD *)v17 - 703) = 1;
      ++v15;
    }
    if ( (_BYTE)v16 == 112 )
      args_arr[v13].have_longlong = 1;
    *((_BYTE *)i - 24) = (_BYTE)v16;
    *(i - 2) = v13;
    args_arr[v13].arg_type = (char)v16;
    v18 = v15 + 1;
    i[2] = (size_t)(v15 + 1);
    v19 = v15[1];
    if ( v19 != 37 )
    {
      do
      {
        if ( !v19 )
          break;
        v19 = *++v18;
      }
      while ( *v18 != 37 );
    }
    if ( !v19 )
      break;
    ++v9;
    arg_index = 0LL;
    i[3] = (size_t)(v18 - 1);
    v20 = (char *)(v18 + 1);
    v21 = my_charset_latin1.ctype;
    v22 = v18[1];
    if ( (v21[*((unsigned __int8 *)v18 + 1) + 1] & 4) != 0 )
    {
      do
      {
        ++v20;
        arg_index = (unsigned int)(v22 - 48) + 10 * arg_index;
        v22 = *v20;
      }
      while ( (v21[(unsigned __int8)*v20 + 1] & 4) != 0 );
    }
    v23 = v8;
    fmt = v20 + 1;
    if ( arg_index >= v8 )
      v23 = arg_index;
    v8 = v23;
  }
  print_arr[v9].end = v18;
  if ( v8 )
  {
    p_double_arg = (ARGS_INFO *)&args_arr[0].double_arg;
    do
    {
      str_arg = (char)p_double_arg[-1].str_arg;
      switch ( str_arg )
      {
        case 'X':
        case 'd':
        case 'i':
        case 'o':
        case 'p':
        case 'u':
        case 'x':
          if ( HIDWORD(p_double_arg[-1].str_arg) )
          {
            gp_offset = ap->gp_offset;
            if ( ap->gp_offset >= 0x30 )
            {
              overflow_arg_area = (double *)ap->overflow_arg_area;
              ap->overflow_arg_area = overflow_arg_area + 1;
            }
            else
            {
              overflow_arg_area = (double *)((char *)ap->reg_save_area + gp_offset);
              ap->gp_offset = gp_offset + 8;
            }
            p_double_arg[-1].double_arg = *overflow_arg_area;
          }
          else
          {
            if ( str_arg == 105 || str_arg == 100 )
              goto LABEL_42;
            v58 = ap->gp_offset;
            if ( ap->gp_offset >= 0x30 )
            {
              v59 = (unsigned int *)ap->overflow_arg_area;
              ap->overflow_arg_area = v59 + 2;
            }
            else
            {
              v59 = (unsigned int *)((char *)ap->reg_save_area + v58);
              ap->gp_offset = v58 + 8;
            }
            *(_QWORD *)&p_double_arg[-1].double_arg = *v59;
          }
          break;
        case 'b':
        case 's':
          v41 = ap->gp_offset;
          if ( ap->gp_offset >= 0x30 )
          {
            v42 = (longlong *)ap->overflow_arg_area;
            ap->overflow_arg_area = v42 + 1;
          }
          else
          {
            v42 = (longlong *)((char *)ap->reg_save_area + v41);
            ap->gp_offset = v41 + 8;
          }
          p_double_arg[-1].longlong_arg = *v42;
          break;
        case 'c':
LABEL_42:
          v36 = ap->gp_offset;
          if ( ap->gp_offset >= 0x30 )
          {
            v37 = (int *)ap->overflow_arg_area;
            ap->overflow_arg_area = v37 + 2;
          }
          else
          {
            v37 = (int *)((char *)ap->reg_save_area + v36);
            ap->gp_offset = v36 + 8;
          }
          *(_QWORD *)&p_double_arg[-1].double_arg = *v37;
          break;
        case 'f':
        case 'g':
          fp_offset = ap->fp_offset;
          if ( fp_offset >= 0xB0 )
          {
            v46 = ap->overflow_arg_area;
            ap->overflow_arg_area = v46 + 1;
          }
          else
          {
            v46 = (char *)ap->reg_save_area + fp_offset;
            ap->fp_offset = fp_offset + 16;
          }
          *(_QWORD *)&p_double_arg->arg_type = *v46;
          break;
        default:
          break;
      }
      ++p_double_arg;
    }
    while ( p_double_arg != (ARGS_INFO *)&args_arr[v8].double_arg );
  }
  v38 = 0;
  p_length = &print_arr[0].length;
  while ( 2 )
  {
    v40 = *((_BYTE *)p_length - 16);
    switch ( v40 )
    {
      case 'X':
      case 'd':
      case 'i':
      case 'o':
      case 'p':
      case 'u':
      case 'x':
        v54 = *((_DWORD *)p_length + 4);
        if ( (v54 & 1) != 0 )
          longlong_arg = args_arr[*p_length].longlong_arg;
        else
          longlong_arg = *p_length;
        v56 = *(p_length - 1);
        if ( args_arr[v56].have_longlong )
        {
          longlong_arg_low = args_arr[v56].longlong_arg;
        }
        else if ( v40 == 105 || v40 == 100 )
        {
          longlong_arg_low = SLODWORD(args_arr[*(p_length - 1)].longlong_arg);
        }
        else
        {
          longlong_arg_low = LODWORD(args_arr[v56].longlong_arg);
        }
        to = process_int_arg(to, end, longlong_arg, longlong_arg_low, v40, v54);
        goto LABEL_61;
      case 'b':
        if ( (p_length[2] & 2) != 0 )
          v53 = args_arr[p_length[1]].longlong_arg;
        else
          v53 = p_length[1];
        if ( end < &to[v53 + 1] )
          v53 = end - to - 1;
        v61 = v53;
        memmove(to, args_arr[*(p_length - 1)].str_arg, v53);
        to += v61;
        goto LABEL_61;
      case 'c':
        if ( to == end )
          goto LABEL_65;
        *to++ = args_arr[*(p_length - 1)].longlong_arg;
LABEL_61:
        if ( to != end )
        {
          v49 = (const char *)p_length[3];
          v50 = end - to;
          if ( end - to > (__int64)(p_length[4] - (_QWORD)v49) )
            v50 = p_length[4] - (_QWORD)v49;
          ++v38;
          p_length += 7;
          to = strnmov(to, v49, (&to[v50] < end) + v50);
          if ( v38 <= v9 )
            continue;
        }
LABEL_65:
        *to = 0;
        return to;
      case 'f':
      case 'g':
        if ( (p_length[2] & 2) != 0 )
          v52 = LODWORD(args_arr[p_length[1]].longlong_arg);
        else
          v52 = p_length[1];
        to = process_dbl_arg(to, end, v52, args_arr[*(p_length - 1)].double_arg, *((_BYTE *)p_length - 16));
        goto LABEL_61;
      case 's':
        v47 = *((_DWORD *)p_length + 4);
        if ( (v47 & 2) != 0 )
          v48 = args_arr[p_length[1]].longlong_arg;
        else
          v48 = p_length[1];
        to = process_str_arg(cs_0, to, end, v48, args_arr[*(p_length - 1)].str_arg, v47);
        goto LABEL_61;
      default:
        goto LABEL_61;
    }
  }
};

// Line 541: range 000000000CFB3E70-000000000CFB43BE
size_t __fastcall my_vsnprintf_ex(CHARSET_INFO *cs_0, char *to, size_t n, const char *fmt, __va_list_tag *ap)
{
  char *v5; // r15
  char v6; // al
  char *v8; // rbp
  const char *v9; // rbx
  const char *v10; // rdi
  unsigned __int8 v11; // al
  unsigned int v12; // eax
  int *v13; // rdx
  size_t v14; // r12
  int v15; // eax
  uchar *ctype; // rcx
  int v17; // edx
  unsigned int v18; // edx
  char **v19; // rax
  size_t result; // rax
  unsigned int v21; // eax
  int *v22; // rdx
  longlong v23; // rcx
  unsigned int v24; // eax
  const void **v25; // rdx
  char *v26; // rdi
  unsigned int v27; // edx
  longlong *v28; // rax
  unsigned int fp_offset; // edx
  double *v30; // rax
  unsigned int gp_offset; // eax
  int *overflow_arg_area; // rdx
  unsigned int v33; // eax
  unsigned int *v34; // rdx
  unsigned int v35; // edx
  _DWORD *v36; // rax
  uint print_type; // [rsp+24h] [rbp-44h] BYREF
  size_t length[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = &to[n - 1];
  v6 = *fmt;
  if ( *fmt )
  {
    v8 = to;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v6 != 37 )
        {
          if ( v8 == v5 )
            goto LABEL_26;
          *v8 = v6;
          v9 = fmt;
          ++v8;
          goto LABEL_5;
        }
        length[0] = 0LL;
        v10 = fmt + 1;
        print_type = 0;
        v11 = fmt[1];
        if ( (my_charset_latin1.ctype[v11 + 1] & 4) == 0 )
          break;
        v9 = get_length(v10, length, &print_type);
        LOBYTE(v15) = *v9;
        if ( *v9 == 36 )
          return process_args(cs_0, v8, v5, v9 + 1, length[0], ap) - to;
LABEL_29:
        v14 = -1LL;
        if ( (_BYTE)v15 != 46 )
          goto LABEL_30;
LABEL_16:
        v15 = v9[1];
        if ( v9[1] == 42 )
        {
          gp_offset = ap->gp_offset;
          if ( ap->gp_offset >= 0x30 )
          {
            overflow_arg_area = (int *)ap->overflow_arg_area;
            ap->overflow_arg_area = overflow_arg_area + 2;
          }
          else
          {
            overflow_arg_area = (int *)((char *)ap->reg_save_area + gp_offset);
            ap->gp_offset = gp_offset + 8;
          }
          LOBYTE(v15) = v9[2];
          v14 = *overflow_arg_area;
          v9 += 2;
          goto LABEL_30;
        }
        ++v9;
        v14 = 0LL;
        ctype = my_charset_latin1.ctype;
        if ( (ctype[(unsigned __int8)v15 + 1] & 4) == 0 )
          goto LABEL_30;
        do
        {
          ++v9;
          v14 = (unsigned int)(v15 - 48) + 10 * v14;
          v15 = *v9;
        }
        while ( (ctype[*(unsigned __int8 *)v9 + 1] & 4) != 0 );
        if ( (_BYTE)v15 != 108 )
          goto LABEL_31;
LABEL_20:
        LOBYTE(v15) = v9[1];
        if ( (_BYTE)v15 == 108 )
        {
          LOBYTE(v15) = v9[2];
          v9 += 2;
        }
        else
        {
          ++v9;
        }
        v17 = 1;
        if ( (_BYTE)v15 != 115 )
          goto LABEL_34;
LABEL_23:
        v18 = ap->gp_offset;
        if ( ap->gp_offset >= 0x30 )
        {
          v19 = (char **)ap->overflow_arg_area;
          ap->overflow_arg_area = v19 + 1;
        }
        else
        {
          v19 = (char **)((char *)ap->reg_save_area + v18);
          ap->gp_offset = v18 + 8;
        }
        v8 = process_str_arg(cs_0, v8, v5, v14, *v19, print_type);
        v6 = v9[1];
        fmt = v9 + 1;
        if ( !v6 )
        {
LABEL_26:
          result = v8 - to;
          goto LABEL_27;
        }
      }
      if ( v11 == 96 )
      {
        print_type = 8;
        v10 = fmt + 2;
        v11 = fmt[2];
      }
      if ( v11 == 45 )
        v11 = *++v10;
      if ( v11 != 42 )
      {
        v9 = get_length(v10, length, &print_type);
        LOBYTE(v15) = *v9;
        goto LABEL_29;
      }
      v12 = ap->gp_offset;
      v9 = v10 + 1;
      if ( ap->gp_offset >= 0x30 )
      {
        v13 = (int *)ap->overflow_arg_area;
        ap->overflow_arg_area = v13 + 2;
      }
      else
      {
        v13 = (int *)((char *)ap->reg_save_area + v12);
        ap->gp_offset = v12 + 8;
      }
      v14 = -1LL;
      length[0] = *v13;
      LOBYTE(v15) = v10[1];
      if ( (_BYTE)v15 == 46 )
        goto LABEL_16;
LABEL_30:
      if ( (_BYTE)v15 == 108 )
        goto LABEL_20;
LABEL_31:
      v17 = 0;
      if ( (_BYTE)v15 == 122 )
      {
        LOBYTE(v15) = v9[1];
        LOBYTE(v17) = 1;
        ++v9;
      }
      if ( (_BYTE)v15 == 115 )
        goto LABEL_23;
LABEL_34:
      if ( (_BYTE)v15 == 98 )
      {
        v24 = ap->gp_offset;
        if ( ap->gp_offset >= 0x30 )
        {
          v25 = (const void **)ap->overflow_arg_area;
          ap->overflow_arg_area = v25 + 1;
        }
        else
        {
          v25 = (const void **)((char *)ap->reg_save_area + v24);
          ap->gp_offset = v24 + 8;
        }
        if ( v5 < &v8[v14 + 1] )
          v14 = v5 - v8 - 1;
        v26 = v8;
        v8 += v14;
        memmove(v26, *v25, v14);
        goto LABEL_5;
      }
      if ( (unsigned __int8)(v15 - 102) <= 1u )
      {
        fp_offset = ap->fp_offset;
        if ( fp_offset >= 0xB0 )
        {
          v30 = (double *)ap->overflow_arg_area;
          ap->overflow_arg_area = v30 + 1;
        }
        else
        {
          v30 = (double *)((char *)ap->reg_save_area + fp_offset);
          ap->fp_offset = fp_offset + 16;
        }
        v8 = process_dbl_arg(v8, v5, v14, *v30, *v9);
        goto LABEL_5;
      }
      if ( (_BYTE)v15 == 105 || (_BYTE)v15 == 100 )
      {
        if ( !v17 )
        {
          v21 = ap->gp_offset;
          if ( ap->gp_offset >= 0x30 )
          {
            v22 = (int *)ap->overflow_arg_area;
            ap->overflow_arg_area = v22 + 2;
          }
          else
          {
            v22 = (int *)((char *)ap->reg_save_area + v21);
            ap->gp_offset = v21 + 8;
          }
          v23 = *v22;
          goto LABEL_61;
        }
        goto LABEL_58;
      }
      if ( (_BYTE)v15 == 117 || (v15 & 0xDF) == 88 )
        goto LABEL_74;
      switch ( (_BYTE)v15 )
      {
        case 'p':
          goto LABEL_58;
        case 'o':
LABEL_74:
          if ( !v17 )
          {
            v33 = ap->gp_offset;
            if ( ap->gp_offset >= 0x30 )
            {
              v34 = (unsigned int *)ap->overflow_arg_area;
              ap->overflow_arg_area = v34 + 2;
            }
            else
            {
              v34 = (unsigned int *)((char *)ap->reg_save_area + v33);
              ap->gp_offset = v33 + 8;
            }
            v23 = *v34;
LABEL_61:
            v8 = process_int_arg(v8, v5, length[0], v23, *v9, print_type);
            break;
          }
LABEL_58:
          v27 = ap->gp_offset;
          if ( ap->gp_offset >= 0x30 )
          {
            v28 = (longlong *)ap->overflow_arg_area;
            ap->overflow_arg_area = v28 + 1;
          }
          else
          {
            v28 = (longlong *)((char *)ap->reg_save_area + v27);
            ap->gp_offset = v27 + 8;
          }
          v23 = *v28;
          goto LABEL_61;
        case 'c':
          if ( v8 == v5 )
            goto LABEL_26;
          v35 = ap->gp_offset;
          if ( ap->gp_offset >= 0x30 )
          {
            v36 = ap->overflow_arg_area;
            ap->overflow_arg_area = v36 + 2;
          }
          else
          {
            v36 = (char *)ap->reg_save_area + v35;
            ap->gp_offset = v35 + 8;
          }
          *v8++ = *v36;
          break;
        default:
          if ( v8 == v5 )
            goto LABEL_26;
          *v8++ = 37;
          break;
      }
LABEL_5:
      v6 = v9[1];
      fmt = v9 + 1;
      if ( !v6 )
        goto LABEL_26;
    }
  }
  v8 = to;
  result = 0LL;
LABEL_27:
  *v8 = 0;
  return result;
};

// Line 669: range 000000000CFB43C0-000000000CFB43D3
size_t __fastcall my_vsnprintf(char *to, size_t n, const char *fmt, __va_list_tag *ap)
{
  return my_vsnprintf_ex(&my_charset_latin1, to, n, fmt, ap);
};

// Line 675: range 000000000CFB43E0-000000000CFB4469
size_t my_snprintf(char *to, size_t n, const char *fmt, ...)
{
  va_list args; // [rsp+8h] [rbp-D0h] BYREF

  va_start(args, fmt);
  return my_vsnprintf(to, n, fmt, (__va_list_tag *)args);
};
