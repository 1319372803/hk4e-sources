// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/dtoa.c

// Line 90: range 000000000CFB10E0-000000000CFB12F4
// local variable allocation has failed, the output may be wrong!
size_t __fastcall my_fcvt(double x, int precision, char *to, my_bool *error)
{
  char *v7; // rax
  int v8; // esi
  char *v9; // r8
  int v10; // edi
  int v11; // r9d
  char *v12; // r10
  int v13; // ecx
  char *v14; // rbx
  int v15; // edx
  int v16; // edi
  int v17; // r12d
  int v18; // r12d
  char *v19; // rdx
  char *v21; // r10
  char *v22; // rdx
  size_t decpt; // [rsp+0h] [rbp-E98h] OVERLAPPED BYREF
  char *end; // [rsp+8h] [rbp-E90h] BYREF
  char buf[3680]; // [rsp+10h] [rbp-E88h] BYREF
  char v26[40]; // [rsp+E70h] [rbp-28h] BYREF

  v7 = dtoa(x, 5, precision, (int *)&decpt, (int *)&decpt + 1, &end, buf, decpt);
  v8 = decpt;
  if ( (_DWORD)decpt == 9999 )
  {
    if ( v7 < buf || v7 >= v26 )
      free(v7);
    *to = 48;
    to[1] = 0;
    if ( error )
      *error = 1;
    return 1LL;
  }
  v9 = to;
  v10 = (_DWORD)end - (_DWORD)v7;
  v11 = (_DWORD)end - (_DWORD)v7;
  if ( HIDWORD(decpt) )
  {
    v9 = to + 1;
    *to = 45;
    if ( v8 > 0 )
      goto LABEL_4;
LABEL_27:
    *v9 = 48;
    v21 = v9 + 2;
    v9[1] = 46;
    if ( v8 )
    {
      v22 = v9 + 2;
      do
        *v22++ = 48;
      while ( v22 != &v21[~v8 + 1] );
      v9 = &v21[~v8 + 1];
    }
    else
    {
      v9 += 2;
    }
    goto LABEL_4;
  }
  if ( (int)decpt <= 0 )
    goto LABEL_27;
LABEL_4:
  v12 = v7;
  v13 = 1;
  v14 = v9;
  v15 = 2;
  if ( v10 > 0 )
  {
    while ( 1 )
    {
      ++v12;
      v14 = v9 + 1;
      *v9 = *(v12 - 1);
      if ( v13 == v8 && v13 < v11 )
      {
        v14 = v9 + 2;
        v9[1] = 46;
      }
      if ( v11 < ++v13 )
        break;
      v9 = v14;
    }
    v15 = v10 + 2;
    if ( v8 >= v10 + 1 )
      goto LABEL_10;
  }
  else
  {
    while ( v8 >= v13 )
    {
LABEL_10:
      ++v15;
      *v14++ = 48;
      v13 = v15 - 1;
    }
  }
  if ( precision > 0 )
  {
    if ( v8 >= v10 )
      *v14++ = 46;
    v16 = v10 - v8;
    if ( v16 < 0 )
      v16 = 0;
    v17 = precision - v16;
    if ( v17 > 0 )
    {
      v18 = v17 - 1;
      v19 = v14;
      do
        *v19++ = 48;
      while ( v19 != &v14[v18 + 1] );
      v14 += v18 + 1;
    }
  }
  *v14 = 0;
  if ( error )
    *error = 0;
  if ( v7 < buf || v7 >= v26 )
    free(v7);
  return v14 - to;
};

// Line 214: range 000000000CFB1300-000000000CFB19F8
size_t __fastcall my_gcvt(double x, my_gcvt_arg_type type, int width, char *to, my_bool *error)
{
  __int64 v7; // rbx
  int v8; // ebp
  int v9; // esi
  char *v10; // rax
  int v11; // edx
  char *v12; // rdi
  double v13; // xmm1_8
  char *v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r10d
  int v18; // esi
  bool v19; // si
  bool v20; // r9
  char *v21; // rbx
  int v22; // edx
  int v23; // r11d
  int v24; // ebp
  int v25; // edx
  char *v26; // rcx
  int v27; // eax
  int v28; // ebp
  char *v29; // rbp
  char *v31; // rsi
  char *v32; // rdx
  int v33; // esi
  int v34; // esi
  int v35; // esi
  char *v36; // rax
  int v37; // edx
  int v38; // eax
  bool v39; // dl
  char *v40; // rcx
  bool v41; // r9
  bool v42; // zf
  size_t buf_size; // [rsp+0h] [rbp-EC8h]
  int buf_sizea; // [rsp+0h] [rbp-EC8h]
  int buf_sizeb; // [rsp+0h] [rbp-EC8h]
  int decpt; // [rsp+20h] [rbp-EA8h] BYREF
  int sign; // [rsp+24h] [rbp-EA4h] BYREF
  char *end; // [rsp+28h] [rbp-EA0h] BYREF
  char buf[3680]; // [rsp+30h] [rbp-E98h] BYREF
  char v50[56]; // [rsp+E90h] [rbp-38h] BYREF

  v7 = width;
  v8 = width - 1;
  if ( x >= 0.0 )
    v8 = width;
  v9 = v8;
  if ( type != MY_GCVT_ARG_DOUBLE )
  {
    v9 = 6;
    if ( v8 <= 6 )
      v9 = v8;
  }
  v10 = dtoa(x, 4, v9, &decpt, &sign, &end, buf, *(size_t *)&x);
  v11 = decpt;
  v12 = v10;
  v13 = *(double *)&buf_size;
  if ( decpt == 9999 )
  {
    if ( v10 < buf || v10 >= v50 )
      free(v10);
    *to = 48;
    to[1] = 0;
    if ( error )
      *error = 1;
    return 1LL;
  }
  if ( error )
    *error = 0;
  v14 = end;
  v15 = (_DWORD)end - (_DWORD)v12;
  v16 = (_DWORD)end - (_DWORD)v12;
  v17 = ((__PAIR64__((unsigned int)(v11 + 8) > 0x12, v11 + 98) - 199) >> 32) + 2;
  if ( v11 > 0 )
  {
    v18 = v15 + 1;
    if ( v11 >= v15 )
      v18 = v11;
    v19 = v18 <= v8;
    goto LABEL_13;
  }
  v19 = v8 >= v15 - v11 + 2;
  if ( v8 > 2 - v11 )
  {
LABEL_13:
    v20 = 0;
    goto LABEL_14;
  }
  v20 = v8 > (int)(((__PAIR64__((unsigned int)(v11 + 8) > 0x12, v11 + 98) - 199) >> 32) + 4);
LABEL_14:
  v21 = &to[v7];
  if ( !v19 )
  {
    if ( v8 < v11 )
      goto LABEL_16;
    if ( v11 < -1 )
    {
      if ( v11 != -2 )
        goto LABEL_16;
      if ( v20 && v15 <= 1 )
      {
        v22 = -3;
LABEL_95:
        --v8;
        v23 = 1;
        decpt = -v22;
LABEL_17:
        v24 = ~v17 + v8 - (v15 >= 2);
        if ( v24 <= 0 )
        {
          if ( error )
            *error = 1;
          v24 = 0;
        }
        if ( v24 < v15 )
        {
          if ( v12 < buf || v12 >= v50 )
          {
            buf_sizea = v23;
            free(v12);
            v23 = buf_sizea;
          }
          LODWORD(buf_size) = v23;
          v12 = dtoa(v13, 4, v24, &decpt, &sign, &end, buf, buf_size);
          v14 = end;
          v23 = buf_sizeb;
          v16 = (_DWORD)end - (_DWORD)v12;
          v25 = decpt - 1;
          if ( decpt - 1 < 0 )
            v25 = 1 - decpt;
          decpt = v25;
        }
        if ( sign )
        {
          if ( to >= v21 )
          {
            v26 = to;
            goto LABEL_59;
          }
          v26 = to + 1;
          *to = 45;
        }
        else
        {
          v26 = to;
        }
        if ( v26 >= v21 )
          goto LABEL_63;
        v31 = v26 + 1;
        v32 = v12 + 1;
        *v26 = *v12;
        if ( v21 <= v26 + 1 || v16 <= 1 || (v31 = v26 + 2, v26[1] = 46, v32 >= v14) )
        {
          v26 = v31;
        }
        else
        {
          v26 += 2;
          if ( v21 <= v31 )
            goto LABEL_63;
          while ( 1 )
          {
            *v26++ = *v32++;
            if ( v32 == v14 )
              break;
            if ( v26 == v21 )
              goto LABEL_63;
          }
        }
LABEL_59:
        if ( v26 < v21 )
        {
          *v26 = 101;
          if ( v21 > v26 + 1 && v23 )
          {
            v26[1] = 45;
            v26 += 2;
          }
          else
          {
            ++v26;
          }
        }
LABEL_63:
        v33 = decpt;
        if ( decpt <= 99 )
        {
          if ( decpt > 9 )
          {
            if ( v26 >= v21 )
              goto LABEL_65;
            *v26++ = decpt / 10 + 48;
          }
        }
        else
        {
          if ( v26 >= v21 )
          {
LABEL_65:
            v29 = v26;
            goto LABEL_66;
          }
          *v26 = decpt / 100 + 48;
          v34 = v33 % 100;
          decpt = v34;
          if ( v21 <= v26 + 1 )
          {
            ++v26;
            goto LABEL_65;
          }
          v26 += 2;
          *(v26 - 1) = v34 / 10 + 48;
        }
        if ( v26 < v21 )
        {
          v29 = v26 + 1;
          *v26 = decpt % 10 + 48;
          goto LABEL_66;
        }
        goto LABEL_65;
      }
    }
    if ( !v20 )
      goto LABEL_31;
LABEL_16:
    v22 = v11 - 1;
    v23 = 0;
    decpt = v22;
    if ( v22 >= 0 )
      goto LABEL_17;
    goto LABEL_95;
  }
  if ( v11 < -14 || v11 > 15 && v11 >= v15 )
    goto LABEL_16;
LABEL_31:
  v27 = 0;
  if ( v11 <= 0 )
  {
    LOBYTE(v27) = 1;
    v27 -= v11;
  }
  v28 = v8 - ((v11 < v15) + v27);
  if ( v15 > v28 )
  {
    if ( v11 > v28 )
    {
      if ( error )
        *error = 1;
      v28 = v11;
    }
    if ( v12 < buf || v12 >= v50 )
    {
      free(v12);
      v11 = decpt;
    }
    v12 = dtoa(*(double *)&buf_size, 5, v28 - v11, &decpt, &sign, &end, buf, buf_size);
    v16 = (_DWORD)end - (_DWORD)v12;
  }
  if ( !v16 )
  {
    v29 = to + 1;
    *to = 48;
    goto LABEL_66;
  }
  if ( sign )
  {
    if ( to >= v21 )
    {
      v35 = decpt;
      if ( decpt > 0 )
      {
        v36 = to;
LABEL_87:
        v29 = v36;
        v37 = 1;
        v38 = 2;
        goto LABEL_111;
      }
      v36 = to;
      v39 = v16 > 0;
      goto LABEL_122;
    }
    v36 = to + 1;
    *to = 45;
  }
  else
  {
    v36 = to;
  }
  v35 = decpt;
  if ( decpt <= 0 )
  {
    if ( v36 < v21 )
    {
      *v36 = 48;
      v39 = v16 > 0 && v21 > v36 + 1;
      if ( v39 )
      {
        v36[1] = 46;
        v36 += 2;
      }
      else
      {
        v39 = v16 > 0;
        ++v36;
      }
    }
    else
    {
      v39 = v16 > 0;
    }
LABEL_122:
    if ( v35 && v21 > v36 )
    {
      while ( 1 )
      {
        ++v36;
        v42 = v35++ == -1;
        *(v36 - 1) = 48;
        if ( v42 )
          break;
        if ( v36 == v21 )
          goto LABEL_87;
      }
      decpt = 0;
      v35 = 0;
    }
    goto LABEL_99;
  }
  v39 = v16 > 0;
LABEL_99:
  if ( v36 >= v21 || !v39 )
    goto LABEL_87;
  v40 = v12;
  v37 = 1;
  while ( 1 )
  {
    ++v40;
    v29 = v36 + 1;
    *v36 = *(v40 - 1);
    if ( v37 != v35 )
      goto LABEL_102;
    v41 = v29 < v21;
    if ( v29 < v21 && v16 > v37 )
    {
      v29 = v36 + 2;
      v36[1] = 46;
LABEL_102:
      v41 = v21 > v29;
    }
    ++v37;
    if ( !v41 || v16 < v37 )
      break;
    v36 = v29;
  }
  v38 = v37 + 1;
LABEL_111:
  if ( v37 <= v35 && v21 > v29 )
  {
    do
    {
      *v29++ = 48;
      if ( v35 < v38 )
        break;
      ++v38;
    }
    while ( v29 != v21 );
  }
LABEL_66:
  if ( v12 < buf || v12 >= v50 )
    free(v12);
  *v29 = 0;
  return v29 - to;
};

// Line 462: range 000000000CFB1A00-000000000CFB2DDF
double __fastcall my_strtod(const char *str, char **end, int *error)
{
  int v3; // r11d
  char *v4; // r13
  char *v6; // rdx
  const char *v7; // rbp
  double result; // xmm0_8
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  char *v12; // r14
  int v13; // r12d
  int v14; // r15d
  int v15; // eax
  int v16; // esi
  int v17; // r10d
  int v18; // edi
  char *v19; // rcx
  int v20; // r11d
  int v21; // r13d
  char v22; // r13
  char *v23; // r9
  char v24; // r11
  int v25; // ebp
  int v26; // edx
  int v27; // edx
  int i; // r9d
  int v29; // r11d
  int v30; // r14d
  int v31; // eax
  int v32; // eax
  int v33; // eax
  double v34; // xmm0_8
  int v35; // ecx
  double *v36; // rdx
  int v37; // edi
  int v38; // edx
  int j; // eax
  Bigint_0 *v40; // r13
  int v41; // r10d
  const char *v42; // rax
  __int64 v43; // rbp
  char *v44; // r12
  Bigint_0 *v45; // rax
  int v46; // r13d
  char *v47; // r12
  Bigint_0 *v48; // rax
  __int64 v49; // rbp
  int v50; // eax
  Bigint_0 *v51; // rbp
  Bigint_0 *v52; // r14
  Bigint_0 *v53; // r15
  int v54; // r9d
  int v55; // ecx
  int v56; // r12d
  int v57; // eax
  int v58; // r8d
  int v59; // ecx
  int v60; // eax
  Bigint_0 *v61; // rax
  Bigint_0 *v62; // rax
  Bigint_0 *v63; // rax
  int sign; // ecx
  Bigint_0 *wds; // rsi
  int v66; // edx
  Bigint_0 *x; // rdi
  __int64 v68; // r8
  Bigint_0 *v69; // rdx
  ULong *v70; // r8
  Bigint_0 *v71; // r12
  int v72; // esi
  ULong *v73; // r8
  __int64 v74; // rcx
  ULong *v75; // rdx
  ULong *v76; // rcx
  int v77; // r9d
  double v78; // r12
  double v79; // xmm0_8
  double v80; // xmm1_8
  int v81; // edx
  double v82; // xmm1_8
  double v83; // xmm0_8
  double v84; // xmm1_8
  ULong v85; // esi
  ULong v86; // edx
  double v87; // xmm0_8
  ULong v88; // esi
  int v89; // esi
  double v90; // xmm1_8
  double v91; // r8
  int v92; // eax
  int v93; // eax
  double d; // xmm0_8
  double *v95; // rdx
  signed int v96; // ecx
  int v97; // esi
  int v; // [rsp+0h] [rbp-FC8h]
  int va; // [rsp+0h] [rbp-FC8h]
  Bigint_0 *vb; // [rsp+0h] [rbp-FC8h]
  int k; // [rsp+8h] [rbp-FC0h]
  int kd; // [rsp+8h] [rbp-FC0h]
  const char *ka; // [rsp+8h] [rbp-FC0h]
  int kb; // [rsp+8h] [rbp-FC0h]
  Bigint_0 *kc; // [rsp+8h] [rbp-FC0h]
  Bigint_0 *v106; // [rsp+10h] [rbp-FB8h]
  Bigint_0 *v107; // [rsp+10h] [rbp-FB8h]
  int v108; // [rsp+10h] [rbp-FB8h]
  int v109; // [rsp+10h] [rbp-FB8h]
  int v110; // [rsp+18h] [rbp-FB0h]
  int v111; // [rsp+18h] [rbp-FB0h]
  int v112; // [rsp+20h] [rbp-FA8h]
  Bigint_0 *v113; // [rsp+20h] [rbp-FA8h]
  int v114; // [rsp+2Ch] [rbp-F9Ch]
  int v115; // [rsp+2Ch] [rbp-F9Ch]
  int v117; // [rsp+58h] [rbp-F70h]
  int v118; // [rsp+5Ch] [rbp-F6Ch]
  char *v120; // [rsp+68h] [rbp-F60h]
  int v121; // [rsp+70h] [rbp-F58h] BYREF
  int v122; // [rsp+74h] [rbp-F54h] BYREF
  int v123; // [rsp+78h] [rbp-F50h] BYREF
  int v124; // [rsp+7Ch] [rbp-F4Ch] BYREF
  U v125; // [rsp+80h] [rbp-F48h] BYREF
  Stack_alloc_0 alloc; // [rsp+90h] [rbp-F38h] BYREF
  char buf[3680]; // [rsp+130h] [rbp-E98h] BYREF
  char v128; // [rsp+F90h] [rbp-38h] BYREF

  v4 = (char *)str;
  v6 = *end;
  *error = 0;
  alloc.free = buf;
  alloc.begin = buf;
  v125.d = 0.0;
  alloc.end = &v128;
  memset(alloc.freelist, 0, sizeof(alloc.freelist));
  if ( str >= v6 )
    goto LABEL_5;
  v7 = str;
  while ( 2 )
  {
    switch ( *v7 )
    {
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0x20:
        if ( ++v7 == v6 )
          goto LABEL_5;
        continue;
      case 0x2B:
        v118 = 0;
        goto LABEL_11;
      case 0x2D:
        v118 = 1;
LABEL_11:
        ++v7;
        break;
      default:
        v118 = 0;
        break;
    }
    break;
  }
  if ( v6 <= v7 )
    goto LABEL_5;
  v10 = *v7;
  v11 = 0;
  if ( *v7 != 48 )
    goto LABEL_14;
  v12 = (char *)v7;
  do
  {
    if ( ++v12 == v6 )
      goto LABEL_60;
    v10 = *v12;
  }
  while ( *v12 == 48 );
  v7 = v12;
  v11 = 1;
  if ( v6 > v12 )
  {
LABEL_14:
    v3 = (char)v10;
    v12 = (char *)v7;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( (unsigned __int8)(v10 - 48) > 9u )
      goto LABEL_22;
    while ( v14 > 8 )
    {
      if ( v14 > 15 )
        goto LABEL_17;
      ++v12;
      ++v14;
      v15 = v10 + 10 * v15 - 48;
      if ( v6 <= v12 )
        goto LABEL_22;
LABEL_18:
      v10 = *v12;
      v3 = v10;
      if ( (unsigned __int8)(*v12 - 48) > 9u )
        goto LABEL_22;
    }
    v13 = v10 + 10 * v13 - 48;
LABEL_17:
    ++v12;
    ++v14;
    if ( v6 <= v12 )
      goto LABEL_22;
    goto LABEL_18;
  }
  v15 = 0;
  v13 = 0;
  v14 = 0;
LABEL_22:
  v16 = 0;
  v17 = v14;
  if ( v12 < v6 - 1 && v3 == 46 )
  {
    v19 = v12 + 1;
    v3 = v12[1];
    if ( v14 )
    {
      v18 = 0;
      goto LABEL_78;
    }
    if ( v6 <= v19 )
    {
      v18 = 0;
    }
    else
    {
      if ( v3 != 48 )
      {
        v77 = v12[1];
        v18 = 0;
LABEL_250:
        if ( (unsigned int)(v77 - 49) > 8 || v6 <= v19 )
        {
          v12 = v19;
          v16 = v18;
          v17 = 0;
          v3 = v77;
          goto LABEL_24;
        }
        v7 = v19;
LABEL_78:
        if ( v6 <= v19 )
        {
          v17 = v14;
          v16 = 0;
          goto LABEL_56;
        }
        v3 = *v19;
        v16 = 0;
        v17 = v14;
        for ( i = v3 - 48; (unsigned int)(v3 - 48) <= 9; i = v3 - 48 )
        {
          if ( v17 <= 29 )
          {
            if ( i )
            {
              v18 += v16 + 1;
              if ( v16 )
              {
                v29 = v16 + v17;
                v30 = v16 + v17;
                do
                {
                  if ( v17++ <= 8 )
                  {
                    v13 *= 10;
                  }
                  else if ( v17 <= 16 )
                  {
                    v15 *= 10;
                  }
                }
                while ( v17 != v29 );
              }
              else
              {
                v30 = v17;
              }
              v17 = v30 + 1;
              if ( v30 > 8 )
              {
                v16 = 0;
                if ( v17 <= 16 )
                  v15 = i + 10 * v15;
              }
              else
              {
                v13 = i + 10 * v13;
                v16 = 0;
              }
            }
            else
            {
              ++v16;
            }
          }
          if ( ++v19 == v6 )
            goto LABEL_56;
          v3 = *v19;
        }
        v12 = v19;
        goto LABEL_25;
      }
      v18 = 0;
      while ( 1 )
      {
        ++v19;
        ++v18;
        if ( v19 == v6 )
          break;
        v77 = *v19;
        if ( v77 != 48 )
          goto LABEL_250;
      }
    }
    v12 = v19;
    v16 = v18;
    v17 = 0;
  }
LABEL_24:
  v18 = 0;
  if ( v6 <= v12 )
  {
LABEL_57:
    v26 = 0;
    goto LABEL_58;
  }
LABEL_25:
  if ( (v3 & 0xFFFFFFDF) != 69 )
    goto LABEL_57;
  if ( !(v11 | v16 | v17) )
    goto LABEL_5;
  v19 = v12 + 1;
  if ( v6 <= v12 + 1 )
  {
    v4 = v12;
    v26 = 0;
    goto LABEL_58;
  }
  v20 = v12[1];
  if ( v12[1] == 43 )
  {
    k = 0;
    goto LABEL_31;
  }
  if ( (_BYTE)v20 == 45 )
  {
    k = 1;
LABEL_31:
    v20 = v12[2];
    v19 = v12 + 2;
    goto LABEL_32;
  }
  k = 0;
LABEL_32:
  v21 = v20 - 48;
  if ( (unsigned int)(v20 - 48) > 9 || v6 <= v19 )
  {
    v4 = v12;
    goto LABEL_57;
  }
  if ( v20 == 48 )
  {
    do
      v22 = *++v19;
    while ( v6 > v19 && v22 == 48 );
    if ( (unsigned __int8)(v22 - 49) > 8u || v6 <= v19 )
      goto LABEL_55;
    v21 = v22 - 48;
  }
  else if ( v20 <= 48 )
  {
LABEL_55:
    v4 = v12;
LABEL_56:
    v12 = v19;
    goto LABEL_57;
  }
  v23 = v19 + 1;
  v = v21;
  if ( v19 + 1 < v6 )
  {
    v24 = v19[1];
    if ( (unsigned __int8)(v24 - 48) <= 9u )
    {
      v106 = (Bigint_0 *)v7;
      v25 = v24;
      do
      {
        ++v23;
        v21 = v25 + 10 * v21 - 48;
        if ( v23 == v6 )
          break;
        v25 = *v23;
      }
      while ( (unsigned __int8)(*v23 - 48) <= 9u );
      v7 = (const char *)v106;
      v = v21;
    }
  }
  v26 = 19999;
  if ( v23 - v19 <= 8 && v <= 19999 )
    v26 = v;
  v4 = v12;
  if ( k )
    v26 = -v26;
  v12 = v23;
LABEL_58:
  if ( !v17 )
  {
    if ( v11 | v16 )
    {
LABEL_60:
      result = 0.0;
      v9 = 0;
      goto LABEL_61;
    }
LABEL_5:
    result = 0.0;
    *end = v4;
    v9 = 0;
    goto LABEL_6;
  }
  v117 = v26 - v18;
  if ( !v14 )
    v14 = v17;
  v27 = 16;
  if ( v17 <= 16 )
    v27 = v17;
  v125.d = (double)v13;
  if ( v27 > 9 )
    v125.d = (double)v13 * tens[v27 - 9] + (double)v15;
  if ( v17 <= 15 )
  {
    if ( !v117 )
    {
      result = v125.d;
      v9 = 0;
      goto LABEL_61;
    }
    if ( v117 <= 0 )
    {
      if ( v117 >= -22 )
      {
        result = v125.d / tens[-v117];
        v9 = 0;
        goto LABEL_61;
      }
    }
    else
    {
      if ( v117 <= 22 )
      {
        result = v125.d * tens[v117];
        v9 = 0;
        goto LABEL_61;
      }
      if ( v117 <= 37 - v17 )
      {
        result = v125.d * tens[15 - v17] * tens[v117 - (15 - v17)];
        v9 = 0;
        goto LABEL_61;
      }
    }
  }
  v31 = v117 + v17 - v27;
  if ( v31 <= 0 )
  {
    if ( v31 )
    {
      v92 = -v31;
      if ( (v92 & 0xF) != 0 )
        v125.d = v125.d / tens[v92 & 0xF];
      v93 = v92 >> 4;
      if ( v93 )
      {
        result = 0.0;
        if ( v93 > 31 )
          goto LABEL_246;
        d = v125.d;
        v95 = (double *)tinytens;
        va = (v93 << 27 >> 31) & 0x6A;
        if ( v93 > 0 )
        {
          do
          {
            if ( (v93 & 1) != 0 )
              d = d * *v95;
            ++v95;
            v93 >>= 1;
          }
          while ( v93 );
          v125.d = d;
        }
        if ( va )
        {
          v96 = 107 - ((v125.L[1] & 0x7FF00000) >> 20);
          if ( v96 > 0 )
          {
            if ( v96 <= 31 )
            {
              v125.L[0] &= -1 << v96;
            }
            else
            {
              v125.L[0] = 0;
              if ( v96 <= 52 )
                v125.L[1] &= -1 << (v96 - 32);
              else
                v125.L[1] = 57671680;
            }
          }
        }
        result = 0.0;
        if ( v125.d == 0.0 )
        {
LABEL_246:
          v9 = 0;
          goto LABEL_61;
        }
        goto LABEL_109;
      }
    }
  }
  else
  {
    if ( (v31 & 0xF) != 0 )
      v125.d = v125.d * tens[v31 & 0xF];
    v32 = v31 & 0x7FFFFFF0;
    if ( v32 )
    {
      if ( v32 > 308 )
        goto LABEL_229;
      v33 = v32 >> 4;
      if ( v33 <= 1 )
      {
        v35 = 0;
      }
      else
      {
        v34 = v125.d;
        v35 = 0;
        v36 = (double *)bigtens;
        do
        {
          if ( (v33 & 1) != 0 )
            v34 = v34 * *v36;
          v33 >>= 1;
          ++v35;
          ++v36;
        }
        while ( v33 > 1 );
        v125.d = v34;
      }
      v125.L[1] -= 55574528;
      v125.d = v125.d * bigtens[v35];
      if ( (v125.L[1] & 0x7FF00000) > 0x7CA00000 )
      {
LABEL_229:
        v125.d = INFINITY;
        result = INFINITY;
        *error = 75;
        v9 = 75;
        goto LABEL_61;
      }
      if ( (v125.L[1] & 0x7FF00000) <= 0x7C900000 )
      {
        va = 0;
        v125.L[1] += 55574528;
        goto LABEL_109;
      }
      v125.d = 1.797693134862316e308;
    }
  }
  va = 0;
LABEL_109:
  v37 = 0;
  v38 = (v17 + 8) / 9;
  if ( v38 > 1 )
  {
    for ( j = 1; j < v38; j *= 2 )
      ++v37;
  }
  kd = v17;
  v40 = Balloc(v37, &alloc);
  v41 = kd;
  *v40->p.x = v13;
  v40->wds = 1;
  if ( v14 <= 9 )
  {
    v47 = (char *)(v7 + 10);
    v14 = 9;
  }
  else
  {
    v42 = v7 + 9;
    v43 = (__int64)&v7[v14 - 10 + 10];
    ka = v42;
    v44 = (char *)v42;
    v45 = v40;
    v46 = v41;
    do
      v45 = multadd(v45, 10, *v44++ - 48, &alloc);
    while ( v44 != (char *)v43 );
    v41 = v46;
    v40 = v45;
    v47 = (char *)&ka[v14 - 10 + 2];
  }
  if ( v41 > v14 )
  {
    v48 = v40;
    v49 = (__int64)&v47[v41 - 1 - v14 + 1];
    do
      v48 = multadd(v48, 10, *v47++ - 48, &alloc);
    while ( v47 != (char *)v49 );
    v40 = v48;
  }
  v120 = v12;
  v50 = -v117;
  if ( v117 >= 0 )
    v50 = 0;
  kb = v50;
  while ( 1 )
  {
    v51 = Balloc(v40->k, &alloc);
    memcpy(&v51->sign, &v40->sign, 4LL * v40->wds + 8);
    v52 = d2b(&v125, &v121, &v122, &alloc);
    v53 = Balloc(1, &alloc);
    v54 = 0;
    *v53->p.x = 1;
    v53->wds = 1;
    if ( v117 > 0 )
      v54 = v117;
    if ( v121 < 0 )
    {
      v56 = kb;
      v55 = v54 - v121;
    }
    else
    {
      v55 = v54;
      v56 = v121 + kb;
    }
    v57 = v121 - va + 1075;
    if ( v121 - va + v122 >= -1021 )
      v57 = 54 - v122;
    v58 = v56 + v57;
    v59 = va + v57 + v55;
    v60 = v56;
    if ( v58 <= v56 )
      v60 = v58;
    if ( v60 > v59 )
      v60 = v59;
    if ( v60 > 0 )
    {
      v58 -= v60;
      v59 -= v60;
      v56 -= v60;
    }
    if ( kb )
    {
      v114 = v59;
      v112 = v58;
      v110 = v54;
      v53 = pow5mult(v53, kb, &alloc);
      v107 = mult(v53, v52, &alloc);
      Bfree(v52, &alloc);
      v59 = v114;
      v58 = v112;
      v54 = v110;
      v52 = v107;
    }
    if ( v58 > 0 )
    {
      v111 = v59;
      v108 = v54;
      v61 = lshift(v52, v58, &alloc);
      v59 = v111;
      v54 = v108;
      v52 = v61;
    }
    if ( v54 )
    {
      v109 = v59;
      v62 = pow5mult(v51, v54, &alloc);
      v59 = v109;
      v51 = v62;
    }
    if ( v59 > 0 )
      v51 = lshift(v51, v59, &alloc);
    if ( v56 > 0 )
      v53 = lshift(v53, v56, &alloc);
    v63 = diff(v52, v51, &alloc);
    sign = v63->sign;
    wds = (Bigint_0 *)(unsigned int)v63->wds;
    v63->sign = 0;
    v66 = v53->wds;
    x = (Bigint_0 *)v63->p.x;
    if ( (_DWORD)wds == v66 )
    {
      v68 = v66;
      v69 = (Bigint_0 *)((char *)x + v68 * 4);
      v70 = &v53->p.x[v68];
      do
      {
        v69 = (Bigint_0 *)((char *)v69 - 4);
        if ( LODWORD(v69->p.x) != *--v70 )
        {
          if ( *v70 <= LODWORD(v69->p.x) )
            goto LABEL_175;
          goto LABEL_150;
        }
      }
      while ( x < v69 );
      kc = v52;
      v71 = v53;
      v12 = v120;
      if ( sign )
      {
        if ( (v125.L[1] & 0xFFFFF) != 0xFFFFF )
          goto LABEL_214;
        v97 = -1;
        if ( va && (v125.L[1] & 0x7FF00000) <= 0x6A00000 )
          v97 = -1 << (107 - ((v125.L[1] & 0x7FF00000) >> 20));
        if ( v125.L[0] == v97 )
        {
          v125.L[0] = 0;
          v125.L[1] = (v125.L[1] & 0x7FF00000) + 0x100000;
        }
        else
        {
LABEL_214:
          if ( (LOBYTE(v125.d) & 1) != 0 )
            v125.d = COERCE_DOUBLE((unsigned __int64)((v125.L[1] & 0x7FF00000) - 54525952) << 32) + v125.d;
        }
        goto LABEL_216;
      }
      if ( (*(_QWORD *)&v125.d & 0xFFFFFFFFFFFFFLL) == 0 )
        goto LABEL_160;
      if ( (LOBYTE(v125.d) & 1) != 0 )
      {
        v125.d = v125.d - COERCE_DOUBLE((unsigned __int64)((v125.L[1] & 0x7FF00000) - 54525952) << 32);
        if ( v125.d == 0.0 )
          goto LABEL_163;
      }
      goto LABEL_216;
    }
    if ( (int)wds - v66 < 0 )
    {
LABEL_150:
      kc = v52;
      v71 = v53;
      v12 = v120;
      if ( sign
        || (*(_QWORD *)&v125.d & 0xFFFFFFFFFFFFFLL) != 0
        || (v125.L[1] & 0x7FF00000) <= 0x6B00000
        || !LODWORD(x->p.x) && (int)wds <= 1 )
      {
        goto LABEL_216;
      }
      v63 = lshift(v63, 1, &alloc);
      v72 = v53->wds;
      v73 = v63->p.x;
      if ( v63->wds == v72 )
      {
        v74 = v72;
        v75 = &v73[v74];
        v76 = &v53->p.x[v74];
        while ( *--v75 == *--v76 )
        {
          if ( v73 >= v75 )
            goto LABEL_216;
        }
        if ( *v76 > *v75 )
          goto LABEL_216;
      }
      else if ( v63->wds - v72 <= 0 )
      {
        goto LABEL_216;
      }
LABEL_160:
      if ( va && (v125.L[1] & 0x7FF00000) <= 0x6B00000 )
      {
        if ( (v125.L[1] & 0x7FF00000) <= 0x3700000 )
        {
LABEL_163:
          v125.d = 0.0;
          goto LABEL_164;
        }
LABEL_217:
        v125.d = v125.d * 1.232595164407831e-32;
        goto LABEL_164;
      }
      v125.L[0] = -1;
      v125.L[1] = ((v125.L[1] & 0x7FF00000) - 0x100000) | 0xFFFFF;
LABEL_216:
      if ( !va )
        goto LABEL_164;
      goto LABEL_217;
    }
LABEL_175:
    v115 = sign;
    v113 = v63;
    v78 = b2d(x, wds, &v123);
    v79 = b2d(v53->p.next, (Bigint_0 *)(unsigned int)v53->wds, &v124);
    v63 = v113;
    v80 = v78;
    v81 = v123 - v124 + 32 * (v113->wds - v53->wds);
    if ( v81 <= 0 )
      *(_QWORD *)&v79 = ((unsigned __int64)(unsigned int)(HIDWORD(v79) - (v81 << 20)) << 32) | LODWORD(v79);
    else
      *(_QWORD *)&v80 = ((unsigned __int64)(unsigned int)(HIDWORD(v78) + (v81 << 20)) << 32) | LODWORD(v78);
    v82 = v80 / v79;
    if ( v82 > 2.0 )
    {
      v84 = v82 * 0.5;
      v83 = v84;
      if ( !v115 )
        v83 = -v84;
    }
    else if ( v115 )
    {
      v83 = 1.0;
      v84 = 1.0;
    }
    else if ( (*(_QWORD *)&v125.d & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      if ( *(_QWORD *)&v125.d == 1LL )
        goto LABEL_260;
      v83 = -1.0;
      v84 = 1.0;
    }
    else if ( v82 < 1.0 )
    {
      v83 = -0.5;
      v84 = 0.5;
    }
    else
    {
      v84 = v82 * 0.5;
      v83 = -v84;
    }
    v85 = v125.L[1];
    v86 = v125.L[1] & 0x7FF00000;
    if ( (v125.L[1] & 0x7FF00000) == 2145386496 )
      break;
    if ( va && v86 <= 0x6A00000 )
    {
      if ( v84 <= 2147483647.0 )
      {
        v83 = 1.0;
        if ( (int)v84 )
          v83 = (double)(int)v84;
        if ( !v115 )
          v83 = -v83;
      }
      v87 = COERCE_DOUBLE(((unsigned __int64)(HIDWORD(v83) + 112197632 - v86) << 32) | LODWORD(v83))
          * COERCE_DOUBLE((unsigned __int64)(v86 - 54525952) << 32)
          + v125.d;
      v125.d = v87;
      if ( v87 == 0.0 )
      {
LABEL_260:
        kc = v52;
        v71 = v53;
        v12 = v120;
        goto LABEL_163;
      }
      goto LABEL_191;
    }
    v125.d = COERCE_DOUBLE((unsigned __int64)(v86 - 54525952) << 32) * v83 + v125.d;
    v88 = v125.L[1];
LABEL_196:
    v89 = v88 & 0x7FF00000;
    if ( !va && v86 == v89 )
    {
      v90 = v84 - (double)(int)v84;
      if ( v115 || (*(_QWORD *)&v125.d & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        if ( v90 < 0.4999999 || v90 > 0.5000000999999999 )
        {
LABEL_201:
          kc = v52;
          v71 = v53;
          v12 = v120;
          goto LABEL_164;
        }
      }
      else if ( v90 < 0.24999995 )
      {
        goto LABEL_201;
      }
    }
LABEL_191:
    Bfree(v52, &alloc);
    Bfree(v51, &alloc);
    Bfree(v53, &alloc);
    Bfree(v113, &alloc);
  }
  v91 = v125.d;
  v125.L[1] -= 55574528;
  v125.d = COERCE_DOUBLE((unsigned __int64)(((v85 - 55574528) & 0x7FF00000) - 54525952) << 32) * v83 + v125.d;
  if ( (v125.L[1] & 0x7FF00000) <= 0x7C9FFFFF )
  {
    v88 = v125.L[1] + 55574528;
    v125.L[1] += 55574528;
    goto LABEL_196;
  }
  if ( v91 != 1.797693134862316e308 )
  {
    v125.d = 1.797693134862316e308;
    goto LABEL_191;
  }
  kc = v52;
  v71 = v53;
  v12 = v120;
  v125.d = INFINITY;
  *error = 75;
LABEL_164:
  vb = v63;
  Bfree(kc, &alloc);
  Bfree(v51, &alloc);
  Bfree(v71, &alloc);
  Bfree(v40, &alloc);
  Bfree(vb, &alloc);
  result = v125.d;
  v9 = *error;
LABEL_61:
  *end = v12;
  if ( v118 )
    result = -result;
LABEL_6:
  if ( v9 )
  {
    if ( result < 0.0 )
      return -1.797693134862316e308;
    else
      return 1.797693134862316e308;
  }
  return result;
};

// Line 475: range 000000000CFB2DF0-000000000CFB2E13
double __fastcall my_atof(const char *nptr)
{
  int error; // [rsp+4h] [rbp-14h] BYREF
  const char *end; // [rsp+8h] [rbp-10h] BYREF

  end = nptr + 0xFFFF;
  return my_strtod(nptr, (char **)&end, &error);
};

// Line 660: range 000000000CFAF310-000000000CFAF395
Bigint_0 *__fastcall Balloc(int k, Stack_alloc_0 *alloc)
{
  char **v3; // rdx
  Bigint_0 *result; // rax
  size_t v5; // rdi

  if ( k <= 15 && (v3 = &alloc->begin + k, (result = (Bigint_0 *)v3[3]) != 0LL) )
  {
    v3[3] = (char *)result->p.x;
  }
  else
  {
    result = (Bigint_0 *)alloc->free;
    v5 = (int)((4 * (1 << k) + 31) & 0xFFFFFFF8);
    if ( (char *)((unsigned __int64)result + v5) > alloc->end )
      result = (Bigint_0 *)malloc(v5);
    else
      alloc->free = (char *)result + v5;
    result->k = k;
    result->maxwds = 1 << k;
  }
  result->wds = 0;
  result->sign = 0;
  result->p.x = (ULong *)&result[1];
  return result;
};

// Line 700: range 000000000CFAF850-000000000CFAF878
void __fastcall Bfree(Bigint_0 *v, Stack_alloc_0 *alloc)
{
  __int64 k; // rax
  char **v3; // rax

  if ( (char *)v < alloc->begin || (char *)v >= alloc->end )
  {
    free(v);
  }
  else
  {
    k = v->k;
    if ( (int)k <= 15 )
    {
      v3 = &alloc->begin + k;
      v->p.x = (ULong *)v3[3];
      v3[3] = (char *)v;
    }
  }
};

// Line 754: range 000000000CFAF880-000000000CFAF936
Bigint_0 *__fastcall multadd(Bigint_0 *b, int m, int a, Stack_alloc_0 *alloc)
{
  __int64 v4; // r8
  Bigint_0 *v5; // r12
  unsigned __int64 v6; // rbx
  int wds; // ebp
  ULong *x; // r10
  unsigned __int64 v9; // r9
  Bigint_0 *v11; // r13

  v4 = 0LL;
  v5 = b;
  v6 = a;
  wds = b->wds;
  x = b->p.x;
  do
  {
    v9 = v6 + m * (unsigned __int64)x[v4];
    x[v4++] = v9;
    v6 = HIDWORD(v9);
  }
  while ( wds > (int)v4 );
  if ( v6 )
  {
    if ( wds >= b->maxwds )
    {
      v11 = Balloc(b->k + 1, alloc);
      memcpy(&v11->sign, &b->sign, 4LL * b->wds + 8);
      v5 = v11;
      Bfree(b, alloc);
    }
    v5->p.x[wds] = v6;
    v5->wds = wds + 1;
  }
  return v5;
};

// Line 832: range 000000000CFAF070-000000000CFAF0C3
int __fastcall hi0bits(ULong x)
{
  int v1; // edx
  int result; // eax

  v1 = 0;
  if ( (x & 0xFFFF0000) == 0 )
  {
    x <<= 16;
    LOBYTE(v1) = 16;
  }
  if ( (x & 0xFF000000) == 0 )
  {
    v1 += 8;
    x <<= 8;
  }
  if ( (x & 0xF0000000) == 0 )
  {
    v1 += 4;
    x *= 16;
  }
  if ( (x & 0xC0000000) == 0 )
  {
    v1 += 2;
    x *= 4;
  }
  result = v1;
  if ( (x & 0x80000000) == 0 )
  {
    result = 32;
    if ( (x & 0x40000000) != 0 )
      return v1 + 1;
  }
  return result;
};

// Line 867: range 000000000CFAF0D0-000000000CFAF13E
int __fastcall lo0bits(ULong *y)
{
  ULong v1; // edx
  int result; // eax
  ULong v3; // edx
  int v4; // ecx

  v1 = *y;
  if ( (*y & 7) != 0 )
  {
    result = 0;
    if ( (v1 & 1) == 0 )
    {
      if ( (v1 & 2) != 0 )
      {
        v3 = v1 >> 1;
        LOBYTE(result) = 1;
      }
      else
      {
        v3 = v1 >> 2;
        result = 2;
      }
      *y = v3;
    }
  }
  else
  {
    v4 = 0;
    if ( !(_WORD)v1 )
    {
      v1 >>= 16;
      LOBYTE(v4) = 16;
    }
    if ( !(_BYTE)v1 )
    {
      v4 += 8;
      v1 >>= 8;
    }
    if ( (v1 & 0xF) == 0 )
    {
      v4 += 4;
      v1 >>= 4;
    }
    if ( (v1 & 3) == 0 )
    {
      v4 += 2;
      v1 >>= 2;
    }
    if ( (v1 & 1) == 0 )
    {
      v1 >>= 1;
      result = 32;
      if ( !v1 )
        return result;
      ++v4;
    }
    *y = v1;
    return v4;
  }
  return result;
};

// Line 930: range 000000000CFAF4D0-000000000CFAF600
Bigint_0 *__fastcall mult(Bigint_0 *a, Bigint_0 *b, Stack_alloc_0 *alloc)
{
  Bigint_0 *v3; // rcx
  Bigint_0 *v4; // r12
  __int64 wds; // r15
  int v6; // r8d
  int v7; // ebx
  __int64 v8; // r14
  Bigint_0 *result; // rax
  ULong *x; // rbp
  ULong *v11; // rdx
  ULong *v12; // r11
  ULong *v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // r9
  ULong *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  ULong *v20; // r14
  ULong *i; // rdx
  int wa; // [rsp+4h] [rbp-44h]
  Bigint_0 *ba; // [rsp+8h] [rbp-40h]

  v3 = b;
  v4 = a;
  wds = b->wds;
  v6 = a->wds;
  if ( v6 < (int)wds )
  {
    v4 = b;
    v6 = b->wds;
    v3 = a;
    wds = a->wds;
  }
  v7 = v6 + wds;
  ba = v3;
  wa = v6;
  v8 = v6 + (int)wds;
  result = Balloc(v4->k + (unsigned int)(v6 + (int)wds > v4->maxwds), alloc);
  x = result->p.x;
  v11 = &result->p.x[v8];
  if ( result->p.x < v11 )
  {
    do
      *x++ = 0;
    while ( v11 > x );
    x = result->p.x;
  }
  v12 = ba->p.x;
  v13 = v4->p.x;
  v14 = (unsigned __int64)&ba->p.x[wds];
  if ( ba->p.x < (ULong *)v14 )
  {
    do
    {
      v15 = *v12++;
      if ( (_DWORD)v15 )
      {
        v16 = x;
        v17 = (unsigned __int64)v13;
        v18 = 0LL;
        while ( 1 )
        {
          v17 += 4LL;
          v19 = v18 + *v16 + v15 * *(unsigned int *)(v17 - 4);
          *v16 = v19;
          v18 = HIDWORD(v19);
          if ( (unsigned __int64)&v13[wa] <= v17 )
            break;
          ++v16;
        }
        v16[1] = HIDWORD(v19);
      }
      ++x;
    }
    while ( v14 > (unsigned __int64)v12 );
    x = result->p.x;
  }
  v20 = &x[v8];
  if ( v7 > 0 )
  {
    for ( i = v20 - 1; !*i; --i )
    {
      if ( !--v7 )
        break;
    }
  }
  result->wds = v7;
  return result;
};

// Line 1022: range 000000000CFAF940-000000000CFAFA54
Bigint_0 *__fastcall pow5mult(Bigint_0 *b, int k, Stack_alloc_0 *alloc)
{
  Bigint_0 *v3; // r12
  int v5; // ebx
  Bigint_0 *v6; // r15
  char v7; // r13
  Bigint_0 *v8; // r14
  Bigint_0 *b1; // [rsp+8h] [rbp-40h]

  v3 = b;
  if ( (k & 3) != 0 )
    v3 = multadd(b, p05_10137[(k & 3) - 1], 0, alloc);
  v5 = k >> 2;
  if ( k >> 2 )
  {
    v6 = p5_a;
    v7 = 0;
    v8 = 0LL;
LABEL_5:
    if ( (v5 & 1) != 0 )
    {
      while ( 1 )
      {
        b1 = mult(v3, v6, alloc);
        Bfree(v3, alloc);
        v5 >>= 1;
        v3 = b1;
        if ( !v5 )
          break;
LABEL_7:
        if ( v7 )
        {
          v8 = mult(v6, v6, alloc);
          Bfree(v6, alloc);
          v6 = v8;
          goto LABEL_5;
        }
        if ( v6 >= &p5_a[6] )
        {
          if ( v6 == &p5_a[6] )
          {
            v7 = 1;
            v6 = mult(v6, v6, alloc);
          }
          goto LABEL_5;
        }
        ++v6;
        if ( (v5 & 1) == 0 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v5 >>= 1;
      if ( v5 )
        goto LABEL_7;
    }
    if ( v8 )
      Bfree(v8, alloc);
  }
  return v3;
};

// Line 1066: range 000000000CFAFA60-000000000CFAFB75
Bigint_0 *__fastcall lshift(Bigint_0 *b, int k, Stack_alloc_0 *alloc)
{
  int wds; // r13d
  int maxwds; // eax
  int v7; // edi
  int v8; // r13d
  int i; // ebx
  Bigint_0 *v10; // r15
  ULong *x; // r9
  __int64 v12; // r8
  ULong *v13; // r8
  char v14; // r14
  ULong *v15; // rax
  ULong v16; // r11d
  int v17; // r10d
  int v18; // r13d
  int n; // [rsp+Ch] [rbp-3Ch]

  wds = b->wds;
  maxwds = b->maxwds;
  v7 = b->k;
  v8 = (k >> 5) + wds;
  for ( i = v8 + 1; i > maxwds; ++v7 )
    maxwds *= 2;
  n = k >> 5;
  v10 = Balloc(v7, alloc);
  x = v10->p.x;
  if ( k >> 5 > 0 )
  {
    v12 = 0LL;
    do
      x[v12++] = 0;
    while ( n > (int)v12 );
    x += (unsigned int)(n - 1) + 1;
  }
  v13 = b->p.x;
  v14 = k & 0x1F;
  v15 = &b->p.x[b->wds];
  if ( (k & 0x1F) != 0 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = *v13++;
      *x = v16 | (v17 << v14);
      v16 = *(v13 - 1) >> (32 - v14);
      if ( v15 <= v13 )
        break;
      ++x;
    }
    v18 = v8 + 2;
    x[1] = v16;
    if ( v16 )
      i = v18;
  }
  else
  {
    do
      *x++ = *v13++;
    while ( v15 > v13 );
  }
  v10->wds = i - 1;
  Bfree(b, alloc);
  return v10;
};

// Line 1130: range 000000000CFAF610-000000000CFAF76B
Bigint_0 *__fastcall diff(Bigint_0 *a, Bigint_0 *b, Stack_alloc_0 *alloc)
{
  Bigint_0 *v3; // rbp
  int wds; // eax
  Bigint_0 *v5; // rbx
  ULong *x; // r10
  __int64 v7; // rcx
  ULong *v8; // rax
  ULong *v9; // rcx
  int v10; // r12d
  Bigint_0 *result; // rax
  int v12; // r9d
  ULong *v13; // rdi
  ULong *v14; // r8
  ULong *v15; // rsi
  unsigned __int64 v16; // r11
  ULong *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULong *v20; // r8
  ULong *v21; // r10
  ULong *v22; // rsi
  ULong *v23; // rdx

  v3 = b;
  wds = b->wds;
  v5 = a;
  x = a->p.x;
  if ( a->wds == wds )
  {
    v7 = wds;
    v8 = &x[v7];
    v9 = &b->p.x[v7];
    while ( *--v8 == *--v9 )
    {
      if ( x >= v8 )
      {
        result = Balloc(0, alloc);
        v23 = result->p.x;
        result->wds = 1;
        *v23 = 0;
        return result;
      }
    }
    if ( *v9 > *v8 )
      goto LABEL_16;
    goto LABEL_6;
  }
  if ( a->wds - wds >= 0 )
  {
LABEL_6:
    v10 = 0;
    goto LABEL_7;
  }
LABEL_16:
  v10 = 1;
  v5 = b;
  v3 = a;
LABEL_7:
  result = Balloc(v5->k, alloc);
  v12 = v5->wds;
  v13 = v5->p.x;
  v14 = v3->p.x;
  v15 = result->p.x;
  result->sign = v10;
  v16 = (unsigned __int64)&v13[v12];
  v17 = &v14[v3->wds];
  v18 = 0LL;
  do
  {
    ++v13;
    ++v14;
    ++v15;
    v19 = *(v13 - 1) - (unsigned __int64)*(v14 - 1) - v18;
    *(v15 - 1) = v19;
    v18 = BYTE4(v19) & 1;
  }
  while ( v17 > v14 );
  v20 = v15;
  v21 = v13;
  if ( v16 > (unsigned __int64)v13 )
  {
    do
    {
      ++v13;
      ++v15;
      v19 = *(v13 - 1) - v18;
      *(v15 - 1) = v19;
      v18 = BYTE4(v19) & 1;
    }
    while ( v16 > (unsigned __int64)v13 );
    v15 = &v20[((~(unsigned __int64)v21 + v16) >> 2) + 1];
  }
  v22 = v15 - 1;
  if ( !(_DWORD)v19 )
  {
    do
    {
      --v22;
      --v12;
    }
    while ( !*v22 );
  }
  result->wds = v12;
  return result;
};

// Line 1195: range 000000000CFAF770-000000000CFAF84E
double __fastcall b2d(Bigint_0 *a, Bigint_0 *a2, int *e)
{
  char *v5; // rbx
  ULong v6; // ebp
  unsigned __int64 v7; // r13
  int v8; // eax
  int v9; // esi
  double v10; // rax
  __int64 v12; // rdx
  char v13; // di
  unsigned int v14; // r8d
  unsigned __int64 v15; // rbp

  v5 = (char *)a + 4 * (int)a2;
  v6 = *((_DWORD *)v5 - 1);
  v7 = (unsigned __int64)(v5 - 4);
  v8 = hi0bits(v6);
  *e = 32 - v8;
  if ( v8 > 10 )
  {
    v12 = 0LL;
    if ( v7 > (unsigned __int64)a )
    {
      v12 = *((unsigned int *)v5 - 2);
      v7 = (unsigned __int64)(v5 - 8);
    }
    v13 = v8 - 11;
    if ( v8 == 11 )
    {
      *(_QWORD *)&v10 = v12 | ((unsigned __int64)(v6 | 0x3FF00000) << 32);
    }
    else
    {
      v14 = 0;
      v15 = (unsigned __int64)(((unsigned int)v12 >> (43 - v8)) | (v6 << v13) | 0x3FF00000) << 32;
      if ( v7 > (unsigned __int64)a )
        v14 = *(_DWORD *)(v7 - 4) >> (43 - v8);
      *(_QWORD *)&v10 = v15 | v14 | ((_DWORD)v12 << v13);
    }
  }
  else
  {
    v9 = 0;
    if ( v7 > (unsigned __int64)a )
      v9 = *((_DWORD *)v5 - 2) >> (11 - v8);
    *(_QWORD *)&v10 = ((unsigned __int64)((v6 >> (11 - v8)) | 0x3FF00000) << 32) | v9 | (v6 << (v8 + 21));
  }
  return v10;
};

// Line 1235: range 000000000CFAF3A0-000000000CFAF4C8
Bigint_0 *__fastcall d2b(U *d, int *e, int *bits, Stack_alloc_0 *alloc)
{
  Bigint_0 *v5; // rax
  ULong *x; // r15
  Bigint_0 *v7; // rbp
  unsigned int v8; // r12d
  ULong v9; // eax
  int v10; // eax
  ULong v11; // edx
  int v12; // ebx
  ULong y; // [rsp+8h] [rbp-40h] BYREF
  ULong z[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v5 = Balloc(1, alloc);
  x = v5->p.x;
  v7 = v5;
  LODWORD(v5) = d->L[1];
  d->L[1] = (unsigned int)v5 & 0x7FFFFFFF;
  v8 = ((unsigned int)v5 & 0x7FFFFFFF) >> 20;
  v9 = (unsigned int)v5 & 0xFFFFF;
  z[0] = v9;
  if ( v8 )
    z[0] = v9 | 0x100000;
  y = d->L[0];
  if ( y )
  {
    v10 = lo0bits(&y);
    if ( v10 )
    {
      *x = y | (z[0] << (32 - v10));
      v11 = z[0] >> v10;
      z[0] >>= v10;
    }
    else
    {
      *x = y;
      v11 = z[0];
    }
    x[1] = v11;
    v12 = 2 - (v11 == 0);
    v7->wds = v12;
    if ( v8 )
      goto LABEL_7;
LABEL_9:
    *e = v10 - 1074;
    *bits = 32 * v12 - hi0bits(x[v12 - 1]);
    return v7;
  }
  v12 = 1;
  v10 = lo0bits(z) + 32;
  *x = z[0];
  v7->wds = 1;
  if ( !v8 )
    goto LABEL_9;
LABEL_7:
  *e = v10 + v8 - 1075;
  *bits = 53 - v10;
  return v7;
};

// Line 2084: range 000000000CFAF140-000000000CFAF307
int __fastcall quorem(Bigint_0 *b, Bigint_0 *S)
{
  __int64 wds; // r9
  int v3; // r10d
  int result; // eax
  ULong *x; // rcx
  int v6; // ebx
  ULong *v7; // r8
  __int64 v8; // r13
  ULong *v9; // rbp
  ULong *v10; // r13
  unsigned int v11; // eax
  int v12; // r12d
  unsigned __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r9
  ULong *j; // rdx
  bool v20; // sf
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  ULong *v24; // rax
  ULong *v25; // rcx
  ULong *i; // rdx
  __int64 v27; // r9
  ULong *v28; // rsi
  ULong *v29; // r9
  int v30; // r10d

  wds = S->wds;
  v3 = b->wds;
  result = 0;
  if ( (int)wds <= v3 )
  {
    x = b->p.x;
    v6 = wds - 1;
    v7 = S->p.x;
    v8 = (int)wds - 1;
    v9 = &S->p.x[v8];
    v10 = &b->p.x[v8];
    v11 = *v10 / (*v9 + 1);
    v12 = v11;
    if ( v11 )
    {
      v13 = 0LL;
      v14 = 0LL;
      do
      {
        ++v7;
        v15 = *x++;
        v16 = v13 + v11 * (unsigned __int64)*(v7 - 1);
        v17 = v15 - (unsigned int)v16;
        v13 = HIDWORD(v16);
        v18 = v17 - v14;
        *(x - 1) = v18;
        v14 = BYTE4(v18) & 1;
      }
      while ( v9 >= v7 );
      if ( *v10 )
      {
        wds = S->wds;
        v30 = b->wds;
        v7 = S->p.x;
        x = b->p.x;
        v20 = v30 - (int)wds < 0;
        if ( v30 != (_DWORD)wds )
        {
LABEL_13:
          if ( v20 )
            return v12;
LABEL_14:
          v12 = v11 + 1;
          v21 = 0LL;
          do
          {
            ++v7;
            v22 = *x++;
            v23 = v22 - *(v7 - 1) - v21;
            *(x - 1) = v23;
            v21 = BYTE4(v23) & 1;
          }
          while ( v9 >= v7 );
          v24 = b->p.x;
          v25 = &b->p.x[v6];
          if ( !*v25 )
          {
            for ( i = v25 - 1; v24 < i && !*i; --v6 )
              --i;
            b->wds = v6;
          }
          return v12;
        }
LABEL_25:
        v27 = wds;
        v28 = &x[v27];
        v29 = &v7[v27];
        while ( *--v28 == *--v29 )
        {
          if ( v28 <= x )
            goto LABEL_14;
        }
        if ( *v29 > *v28 )
          return v12;
        goto LABEL_14;
      }
      x = b->p.x;
      for ( j = v10 - 1; x < j && !*j; --v6 )
        --j;
      b->wds = v6;
      wds = S->wds;
      v3 = v6;
      v7 = S->p.x;
    }
    v20 = v3 - (int)wds < 0;
    if ( v3 != (_DWORD)wds )
      goto LABEL_13;
    goto LABEL_25;
  }
  return result;
};

// Line 2177: range 000000000CFAFB80-000000000CFB10DA
char *__fastcall dtoa(double dd, unsigned int mode, unsigned int ndigits, int *decpt, int *sign, char **rve, char *buf)
{
  int v7; // r13d
  int v9; // eax
  char *result; // rax
  Bigint_0 *v11; // r14
  int v12; // r11d
  int v13; // edx
  signed int v14; // eax
  signed int v15; // edx
  int v16; // ebp
  double v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  unsigned __int64 v20; // rax
  double v21; // xmm1_8
  int v22; // ecx
  int v23; // r8d
  char v24; // bl
  int v25; // eax
  size_t v26; // rdi
  __int64 v27; // rax
  char *v28; // rax
  double v29; // xmm6_8
  double v30; // xmm1_8
  int v31; // eax
  double v32; // xmm2_8
  int v33; // edx
  double *v34; // rsi
  double v35; // xmm2_8
  double v36; // rdx
  double v37; // rax
  int v38; // r9d
  int v39; // edx
  __int64 v40; // rdi
  char *v41; // rbx
  int v42; // eax
  double v43; // xmm1_8
  double v44; // xmm2_8
  __int64 v45; // rdx
  double v46; // xmm2_8
  double v47; // xmm4_8
  int v48; // eax
  double d; // xmm1_8
  int v50; // ebx
  Bigint_0 *v51; // rbp
  int v52; // eax
  Bigint_0 *v53; // rax
  int v54; // ecx
  Bigint_0 *v55; // rax
  char v56; // dl
  char v57; // al
  int v58; // edx
  Bigint_0 *v59; // rax
  Bigint_0 *v60; // rax
  ULong *x; // rdi
  __int64 wds; // rax
  __int64 v63; // rcx
  ULong *v64; // rax
  ULong *v65; // rdx
  int v66; // eax
  int v67; // edx
  ULong *v68; // rax
  int v69; // r12d
  __int64 v70; // rcx
  ULong *v71; // rdx
  ULong *v72; // rcx
  Bigint_0 *v73; // rax
  int v74; // edx
  ULong *v75; // rsi
  int v76; // r13d
  __int64 v77; // rcx
  ULong *v78; // rdx
  ULong *v79; // rcx
  int v80; // eax
  char v81; // r13
  int v82; // r9d
  char *v83; // rax
  double v84; // rdx
  double v85; // xmm2_8
  int v86; // eax
  int v87; // eax
  char v88; // r13
  ULong *v89; // rdi
  int v90; // ecx
  int v91; // eax
  __int64 v92; // rdx
  ULong *v93; // rax
  ULong *v94; // rdx
  char v95; // dl
  char *v96; // rcx
  char *v97; // rax
  int v98; // eax
  double *v99; // rsi
  int v100; // eax
  double v101; // xmm5_8
  char *v102; // rsi
  __int64 v103; // rdx
  char *v104; // rcx
  char *v105; // rdx
  int v106; // ecx
  ULong *v107; // rdi
  __int64 v108; // rdx
  ULong *v109; // rax
  ULong *v110; // rdx
  Bigint_0 *v111; // rax
  double v112; // rdx
  int v113; // r10d
  char v114; // r13
  char *v115; // rcx
  ULong *v116; // r9
  int v117; // esi
  int v118; // eax
  __int64 v119; // rdx
  ULong *v120; // rax
  ULong *v121; // rdx
  double v122; // xmm1_8
  Bigint_0 *v123; // rbx
  char *v124; // rax
  Bigint_0 *v125; // rax
  int mhi; // [rsp+8h] [rbp-150h]
  Bigint_0 *mhia; // [rsp+8h] [rbp-150h]
  int mhib; // [rsp+8h] [rbp-150h]
  int k0_0; // [rsp+10h] [rbp-148h]
  Bigint_0 *Sa; // [rsp+18h] [rbp-140h]
  Bigint_0 *Sb; // [rsp+18h] [rbp-140h]
  Bigint_0 *S; // [rsp+18h] [rbp-140h]
  int Sc; // [rsp+18h] [rbp-140h]
  int Sd; // [rsp+18h] [rbp-140h]
  Bigint_0 *Se; // [rsp+18h] [rbp-140h]
  int Sf; // [rsp+18h] [rbp-140h]
  int mlo; // [rsp+20h] [rbp-138h]
  int mloa; // [rsp+20h] [rbp-138h]
  Bigint_0 *mlob; // [rsp+20h] [rbp-138h]
  char *s; // [rsp+28h] [rbp-130h]
  int leftright; // [rsp+30h] [rbp-128h]
  bool leftrighta; // [rsp+30h] [rbp-128h]
  int k_check; // [rsp+3Ch] [rbp-11Ch]
  int k_checka; // [rsp+3Ch] [rbp-11Ch]
  char k_checkb; // [rsp+3Ch] [rbp-11Ch]
  int s5; // [rsp+40h] [rbp-118h]
  int s5b; // [rsp+40h] [rbp-118h]
  int s5c; // [rsp+40h] [rbp-118h]
  int s5d; // [rsp+40h] [rbp-118h]
  __int64 s5a; // [rsp+40h] [rbp-118h]
  int ilim1; // [rsp+48h] [rbp-110h]
  char **ilim1a; // [rsp+48h] [rbp-110h]
  int spec_caseb; // [rsp+50h] [rbp-108h]
  int spec_case; // [rsp+50h] [rbp-108h]
  int spec_casea; // [rsp+50h] [rbp-108h]
  int spec_casec; // [rsp+50h] [rbp-108h]
  int spec_cased; // [rsp+50h] [rbp-108h]
  int spec_casee; // [rsp+50h] [rbp-108h]
  int v160; // [rsp+54h] [rbp-104h]
  int v161; // [rsp+54h] [rbp-104h]
  int v162; // [rsp+54h] [rbp-104h]
  int v163; // [rsp+54h] [rbp-104h]
  int v164; // [rsp+54h] [rbp-104h]
  int v165; // [rsp+54h] [rbp-104h]
  int bbits; // [rsp+68h] [rbp-F0h] BYREF
  int be; // [rsp+6Ch] [rbp-ECh] BYREF
  U u; // [rsp+70h] [rbp-E8h] BYREF
  Stack_alloc_0 alloc; // [rsp+80h] [rbp-D8h] BYREF

  v7 = mode;
  u.d = dd;
  alloc.free = buf;
  alloc.begin = buf;
  alloc.end = buf + 3680;
  memset(alloc.freelist, 0, sizeof(alloc.freelist));
  v9 = HIDWORD(dd);
  if ( dd < 0.0 )
  {
    v9 = HIDWORD(dd) & 0x7FFFFFFF;
    *sign = 1;
    u.L[1] = HIDWORD(dd) & 0x7FFFFFFF;
  }
  else
  {
    *sign = 0;
  }
  if ( (v9 & 0x7FF00000) == 2146435072 )
  {
    *decpt = 9999;
    goto LABEL_6;
  }
  if ( u.d == 0.0 )
  {
    *decpt = 1;
LABEL_6:
    result = alloc.free;
    if ( alloc.end < alloc.free + 8 )
      result = (char *)malloc(2uLL);
    *result = 48;
    result[1] = 0;
    if ( rve )
      *rve = result + 1;
    return result;
  }
  v11 = d2b(&u, &be, &bbits, &alloc);
  v12 = ndigits;
  if ( ((u.L[1] >> 20) & 0x7FF) != 0 )
  {
    v16 = 0;
    v20 = ((u.L[1] & 0xFFFFF | 0x3FF00000LL) << 32) | u.L[0];
    v15 = ((u.L[1] >> 20) & 0x7FF) - 1023;
    v19 = bbits;
  }
  else
  {
    v13 = bbits + be;
    if ( bbits + be < -1041 )
      v14 = u.L[0] << (-18 - v13);
    else
      v14 = (u.L[1] << (14 - v13)) | (u.L[0] >> (v13 + 18));
    v15 = v13 - 1;
    v16 = 1;
    v17 = (double)v14;
    v18 = LODWORD(v17);
    v19 = bbits;
    v20 = ((unsigned __int64)(unsigned int)(HIDWORD(v17) - 32505856) << 32) | v18;
  }
  v21 = (*(double *)&v20 - 1.5) * 0.289529654602168 + 0.1760912590558 + (double)v15 * 0.301029995663981;
  k0_0 = (int)v21;
  if ( v21 < 0.0 && v21 != (double)(int)v21 )
    --k0_0;
  k_check = 1;
  if ( (unsigned int)k0_0 <= 0x16 )
  {
    if ( tens[k0_0] > u.d )
      --k0_0;
    k_check = 0;
  }
  mhi = 0;
  v22 = v19 - v15 - 1;
  if ( v22 < 0 )
  {
    mhi = -v22;
    v22 = 0;
  }
  if ( k0_0 < 0 )
  {
    s5 = 0;
    mhi -= k0_0;
    v23 = -k0_0;
  }
  else
  {
    v22 += k0_0;
    s5 = k0_0;
    v23 = 0;
  }
  if ( mode <= 9 )
  {
    if ( (int)mode <= 5 )
    {
      v24 = 1;
    }
    else
    {
      v7 = mode - 4;
      v24 = 0;
    }
    if ( v7 == 3 )
    {
      leftright = 0;
LABEL_31:
      ilim1 = ndigits + k0_0;
      v25 = ndigits + k0_0 + 1;
      mlo = v25;
      if ( v25 <= 0 )
      {
        v26 = 1LL;
        v24 &= (unsigned int)v25 <= 0xE;
        v27 = 8LL;
      }
      else
      {
        v26 = v25;
        v27 = (int)((ilim1 + 8) & 0xFFFFFFF8);
        v24 &= (unsigned int)mlo <= 0xE;
      }
      goto LABEL_38;
    }
    if ( v7 <= 3 )
    {
      leftright = 0;
      if ( v7 != 2 )
      {
LABEL_190:
        v24 = 0;
        v27 = 24LL;
        goto LABEL_138;
      }
    }
    else
    {
      leftright = 1;
      if ( v7 != 4 )
      {
        if ( v7 == 5 )
          goto LABEL_31;
        goto LABEL_190;
      }
    }
    if ( (int)ndigits <= 0 )
    {
      v27 = 8LL;
      ilim1 = 1;
      mlo = 1;
      v26 = 1LL;
      v12 = 1;
    }
    else
    {
      ilim1 = ndigits;
      mlo = ndigits;
      v26 = (int)ndigits;
      v27 = (int)((ndigits + 7) & 0xFFFFFFF8);
      v24 &= ndigits <= 0xE;
    }
    goto LABEL_38;
  }
  v24 = 0;
  v27 = 24LL;
  v7 = 0;
LABEL_138:
  leftright = 1;
  v26 = 18LL;
  ilim1 = -1;
  mlo = -1;
  v12 = 0;
LABEL_38:
  v28 = &alloc.free[v27];
  s = alloc.free;
  if ( alloc.end < v28 )
  {
    v164 = v12;
    spec_casec = v23;
    Sc = v22;
    s = (char *)malloc(v26);
    v12 = v164;
    v23 = spec_casec;
    v22 = Sc;
  }
  else
  {
    alloc.free = v28;
  }
  if ( !v24 )
  {
LABEL_64:
    if ( be >= 0 && k0_0 <= 14 )
    {
      v47 = tens[k0_0];
      if ( mlo > 0 || v12 >= 0 )
      {
        v41 = s + 1;
        v48 = (int)(u.d / v47);
        u.d = u.d - (double)v48 * v47;
        *s = v48 + 48;
        d = u.d;
        if ( u.d != 0.0 )
        {
          if ( mlo == 1 )
          {
LABEL_258:
            v122 = d + d;
            u.d = v122;
            if ( v122 > v47 || v47 == v122 && (v48 & 1) != 0 )
            {
              LOBYTE(v42) = *(v41 - 1);
              v38 = k0_0;
              v104 = s;
              goto LABEL_210;
            }
          }
          else
          {
            while ( 1 )
            {
              ++v41;
              v48 = (int)(d * 10.0 / v47);
              u.d = d * 10.0 - (double)v48 * v47;
              *(v41 - 1) = v48 + 48;
              d = u.d;
              if ( u.d == 0.0 )
                break;
              if ( v41 == &s[mlo - 2 + 2] )
                goto LABEL_258;
            }
          }
        }
        goto LABEL_73;
      }
      if ( !mlo )
      {
        S = 0LL;
        v51 = 0LL;
        if ( v47 * 5.0 < u.d )
          goto LABEL_200;
LABEL_164:
        v41 = s;
        mlob = 0LL;
        k0_0 = ~v12;
        goto LABEL_156;
      }
LABEL_163:
      S = 0LL;
      v51 = 0LL;
      goto LABEL_164;
    }
    if ( leftright )
    {
      v80 = be + 1075;
      if ( !v16 )
        v80 = 54 - bbits;
      v165 = v12;
      spec_cased = v23;
      Sd = v80 + v22;
      v50 = v80 + mhi;
      v51 = Balloc(1, &alloc);
      v22 = Sd;
      v23 = spec_cased;
      v12 = v165;
      *v51->p.x = 1;
      v51->wds = 1;
    }
    else
    {
      v50 = mhi;
      v51 = 0LL;
    }
    if ( v22 > 0 && mhi > 0 )
    {
      v52 = mhi;
      if ( v22 <= mhi )
        v52 = v22;
      mhi -= v52;
      v50 -= v52;
      v22 -= v52;
    }
    if ( v23 )
    {
      if ( leftright )
      {
        v160 = v12;
        spec_caseb = v22;
        v51 = pow5mult(v51, v23, &alloc);
        Sb = mult(v51, v11, &alloc);
        Bfree(v11, &alloc);
        v22 = spec_caseb;
        v12 = v160;
        v11 = Sb;
      }
      else
      {
        spec_casee = v12;
        Sf = v22;
        v111 = pow5mult(v11, v23, &alloc);
        v12 = spec_casee;
        v11 = v111;
        v22 = Sf;
      }
    }
    v161 = v12;
    spec_case = v22;
    v53 = Balloc(1, &alloc);
    S = v53;
    v54 = spec_case;
    v12 = v161;
    *v53->p.x = 1;
    v53->wds = 1;
    if ( s5 )
    {
      v55 = pow5mult(v53, s5, &alloc);
      v12 = v161;
      v54 = spec_case;
      S = v55;
    }
    if ( leftright || (spec_casea = 0, v7 <= 1) )
    {
      spec_casea = 0;
      if ( (*(_QWORD *)&u.d & 0xFFFFFFFFFFFFFLL) == 0 && (u.L[1] & 0x7FE00000) != 0 )
      {
        ++v50;
        ++v54;
        spec_casea = 1;
      }
    }
    v56 = 1;
    if ( s5 )
    {
      v162 = v12;
      s5b = v54;
      v57 = hi0bits(S->p.x[S->wds - 1]);
      v12 = v162;
      v54 = s5b;
      v56 = 32 - v57;
    }
    v58 = ((_BYTE)v54 + v56) & 0x1F;
    if ( v58 )
    {
      if ( 32 - v58 > 4 )
      {
        mhi += 28 - v58;
        v50 += 28 - v58;
        v54 += 28 - v58;
        goto LABEL_98;
      }
      if ( v58 == 28 )
      {
LABEL_98:
        if ( v50 > 0 )
        {
          v163 = v12;
          s5c = v54;
          v59 = lshift(v11, v50, &alloc);
          v12 = v163;
          v54 = s5c;
          v11 = v59;
        }
        if ( v54 > 0 )
        {
          s5d = v12;
          v60 = lshift(S, v54, &alloc);
          v12 = s5d;
          S = v60;
        }
        if ( !k_check )
          goto LABEL_110;
        x = v11->p.x;
        wds = S->wds;
        if ( v11->wds == (_DWORD)wds )
        {
          v63 = wds;
          v64 = &x[wds];
          v65 = &S->p.x[v63];
          while ( *--v64 == *--v65 )
          {
            if ( x >= v64 )
              goto LABEL_110;
          }
          if ( *v65 <= *v64 )
            goto LABEL_110;
        }
        else if ( v11->wds - (int)wds >= 0 )
        {
LABEL_110:
          if ( mlo <= 0 && (v7 == 5 || v7 == 3) )
          {
            if ( mlo )
              goto LABEL_164;
            mhib = v12;
            S = multadd(S, 5, 0, &alloc);
            v106 = S->wds;
            v107 = v11->p.x;
            v12 = mhib;
            if ( v11->wds == v106 )
            {
              v108 = v106;
              v109 = &v107[v108];
              v110 = &S->p.x[v108];
              while ( *--v109 == *--v110 )
              {
                if ( v107 >= v109 )
                  goto LABEL_164;
              }
              if ( *v110 <= *v109 )
                goto LABEL_200;
              goto LABEL_164;
            }
            if ( v11->wds - v106 <= 0 )
              goto LABEL_164;
LABEL_200:
            ++k0_0;
            mlob = 0LL;
            v41 = s + 1;
            *s = 49;
            goto LABEL_156;
          }
          if ( !leftright )
          {
            v41 = s;
            while ( 1 )
            {
              ++v41;
              v87 = quorem(v11, S) + 48;
              *(v41 - 1) = v87;
              if ( !*v11->p.x && v11->wds <= 1 )
              {
                mlob = 0LL;
                goto LABEL_156;
              }
              if ( mlo <= (int)v41 - (int)s )
                break;
              v11 = multadd(v11, 10, 0, &alloc);
            }
            v88 = v87;
            mlob = 0LL;
LABEL_174:
            v11 = lshift(v11, 1, &alloc);
            v89 = v11->p.x;
            v90 = S->wds;
            v91 = v11->wds - v90;
            if ( v91 )
            {
              if ( v91 > 0 )
                goto LABEL_179;
            }
            else
            {
              v92 = v90;
              v93 = &v89[v92];
              v94 = &S->p.x[v92];
              while ( *--v93 == *--v94 )
              {
                if ( v89 >= v93 )
                {
                  if ( (v88 & 1) == 0 )
                    goto LABEL_185;
LABEL_179:
                  v95 = *(v41 - 1);
                  v96 = s;
                  goto LABEL_182;
                }
              }
              if ( *v94 <= *v93 )
                goto LABEL_179;
            }
LABEL_185:
            while ( *(v41 - 1) == 48 )
              --v41;
            goto LABEL_156;
          }
          if ( mhi > 0 )
            v51 = lshift(v51, mhi, &alloc);
          mhia = v51;
          if ( spec_casea )
          {
            v123 = Balloc(v51->k, &alloc);
            memcpy(&v123->sign, &v51->sign, 4LL * v51->wds + 8);
            mhia = lshift(v123, 1, &alloc);
          }
          v41 = s;
          leftrighta = v7 != 1;
          ilim1a = rve;
          s5a = (__int64)&s[mlo - 1 + 1];
          while ( 1 )
          {
            v66 = quorem(v11, S);
            v67 = v51->wds;
            k_checkb = v66;
            mloa = v66 + 48;
            v68 = v11->p.x;
            v69 = v11->wds - v67;
            if ( !v69 )
            {
              v70 = v67;
              v71 = &v68[v70];
              v72 = &v51->p.x[v70];
              do
              {
                if ( *--v71 != *--v72 )
                {
                  v69 = *v71 < *v72 ? -1 : 1;
                  goto LABEL_122;
                }
              }
              while ( v68 < v71 );
              v69 = 0;
            }
LABEL_122:
            v73 = diff(S, mhia, &alloc);
            if ( v73->sign )
              break;
            v74 = v73->wds;
            v75 = v11->p.x;
            v76 = v11->wds - v74;
            if ( v76 )
              goto LABEL_128;
            v77 = v74;
            v78 = &v75[v77];
            v79 = &v73->p.x[v77];
            do
            {
              if ( *--v78 != *--v79 )
              {
                v76 = *v78 < *v79 ? -1 : 1;
                goto LABEL_128;
              }
            }
            while ( v75 < v78 );
            Bfree(v73, &alloc);
            if ( leftrighta && (LOBYTE(u.d) & 1) == 0 )
            {
              v81 = mloa;
              v82 = v69;
              v83 = v41;
              rve = ilim1a;
              if ( mloa != 57 )
              {
                if ( v82 > 0 )
                  v81 = k_checkb + 49;
                ++v41;
                *v83 = v81;
                mlob = v51;
                v51 = mhia;
                goto LABEL_156;
              }
LABEL_268:
              *v41 = 57;
              mlob = v51;
              ++v41;
              v51 = mhia;
              v95 = 57;
              v96 = s;
              while ( 1 )
              {
LABEL_182:
                v97 = v41 - 1;
                if ( v95 != 57 )
                {
                  *v97 = v95 + 1;
                  goto LABEL_156;
                }
                if ( v96 == v97 )
                  break;
                v95 = *(v41 - 2);
                --v41;
              }
              ++k0_0;
              *s = 49;
LABEL_156:
              Bfree(S, &alloc);
              if ( v51 )
              {
                if ( v51 != mlob && mlob )
                  Bfree(mlob, &alloc);
                Bfree(v51, &alloc);
              }
              goto LABEL_73;
            }
LABEL_129:
            if ( v69 < 0 || leftrighta && !v69 && (LOBYTE(u.d) & 1) == 0 )
            {
              v113 = v76;
              rve = ilim1a;
              v114 = mloa;
              v115 = v41;
              if ( (*v11->p.x || v11->wds > 1) && v113 > 0 )
              {
                v11 = lshift(v11, 1, &alloc);
                v116 = v11->p.x;
                v115 = v41;
                v117 = S->wds;
                v118 = v11->wds - v117;
                if ( v118 )
                {
                  if ( v118 > 0 )
                  {
LABEL_247:
                    if ( mloa == 57 )
                      goto LABEL_268;
                    v114 = k_checkb + 49;
                  }
                }
                else
                {
                  v119 = v117;
                  v120 = &v116[v119];
                  v121 = &S->p.x[v119];
                  do
                  {
                    if ( *--v120 != *--v121 )
                    {
                      if ( *v121 > *v120 )
                        goto LABEL_249;
                      goto LABEL_247;
                    }
                  }
                  while ( v116 < v120 );
                  if ( (mloa & 1) != 0 )
                    goto LABEL_247;
                }
              }
LABEL_249:
              mlob = v51;
              ++v41;
              *v115 = v114;
              v51 = mhia;
              goto LABEL_156;
            }
            if ( v76 > 0 )
            {
              rve = ilim1a;
              v124 = v41;
              if ( mloa != 57 )
              {
                ++v41;
                *v124 = mloa + 1;
                mlob = v51;
                v51 = mhia;
                goto LABEL_156;
              }
              goto LABEL_268;
            }
            *v41++ = mloa;
            if ( v41 == (char *)s5a )
            {
              v88 = mloa;
              rve = ilim1a;
              mlob = v51;
              v51 = mhia;
              goto LABEL_174;
            }
            v11 = multadd(v11, 10, 0, &alloc);
            if ( v51 == mhia )
            {
              v51 = multadd(v51, 10, 0, &alloc);
              mhia = v51;
            }
            else
            {
              v51 = multadd(v51, 10, 0, &alloc);
              mhia = multadd(mhia, 10, 0, &alloc);
            }
          }
          v76 = 1;
LABEL_128:
          Bfree(v73, &alloc);
          goto LABEL_129;
        }
        k_checka = v12;
        --k0_0;
        v11 = multadd(v11, 10, 0, &alloc);
        v12 = k_checka;
        mlo = ilim1;
        if ( leftright )
        {
          v125 = multadd(v51, 10, 0, &alloc);
          v12 = k_checka;
          v51 = v125;
        }
        goto LABEL_110;
      }
      v86 = 60 - v58;
    }
    else
    {
      v86 = 28;
    }
    v50 += v86;
    mhi += v86;
    v54 += v86;
    goto LABEL_98;
  }
  v29 = u.d;
  if ( k0_0 <= 0 )
  {
    if ( k0_0 )
    {
      v98 = -k0_0 >> 4;
      v35 = tens[-(char)k0_0 & 0xF] * u.d;
      if ( v98 )
      {
        v99 = (double *)bigtens;
        v33 = 2;
        do
        {
          if ( (v98 & 1) != 0 )
          {
            v35 = v35 * *v99;
            ++v33;
          }
          ++v99;
          v98 >>= 1;
        }
        while ( v98 );
      }
      else
      {
        v33 = 2;
      }
    }
    else
    {
      v35 = u.d;
      v33 = 2;
    }
  }
  else
  {
    v30 = tens[k0_0 & 0xF];
    v31 = k0_0 >> 4;
    if ( ((k0_0 >> 4) & 0x10) != 0 )
    {
      v31 = (k0_0 >> 4) & 0xF;
      v33 = 3;
      v32 = u.d / 1.0e256;
    }
    else
    {
      v32 = u.d;
      v33 = 2;
    }
    if ( v31 )
    {
      v34 = (double *)bigtens;
      do
      {
        if ( (v31 & 1) != 0 )
        {
          v30 = v30 * *v34;
          ++v33;
        }
        ++v34;
        v31 >>= 1;
      }
      while ( v31 );
    }
    v35 = v32 / v30;
  }
  if ( !k_check || v35 >= 1.0 )
  {
    v36 = (double)v33 * v35 + 7.0;
    *(_QWORD *)&v37 = ((unsigned __int64)(unsigned int)(HIDWORD(v36) - 54525952) << 32) | LODWORD(v36);
    if ( mlo )
    {
      v38 = k0_0;
      v39 = mlo;
      goto LABEL_54;
    }
LABEL_161:
    v85 = v35 - 5.0;
    u.d = v85;
    if ( v85 > v37 )
    {
      S = 0LL;
      v51 = 0LL;
      goto LABEL_200;
    }
    if ( -v37 > v85 )
      goto LABEL_163;
    goto LABEL_63;
  }
  if ( !mlo )
  {
    v84 = (double)v33 * v35 + 7.0;
    *(_QWORD *)&v37 = ((unsigned __int64)(unsigned int)(HIDWORD(v84) - 54525952) << 32) | LODWORD(v84);
    goto LABEL_161;
  }
  if ( ilim1 <= 0 )
  {
LABEL_63:
    u.d = v29;
    goto LABEL_64;
  }
  v35 = v35 * 10.0;
  v38 = k0_0 - 1;
  v112 = (double)(v33 + 1) * v35 + 7.0;
  *(_QWORD *)&v37 = ((unsigned __int64)(unsigned int)(HIDWORD(v112) - 54525952) << 32) | LODWORD(v112);
  v39 = ilim1;
LABEL_54:
  v40 = v39 - 1;
  if ( !leftright )
  {
    *(double *)&Se = v37;
    v100 = (int)v35;
    v101 = *(double *)&Se * tens[v40];
    u.d = v35 - (double)(int)v35;
    if ( u.d == 0.0 )
    {
      v102 = s;
    }
    else
    {
      v102 = s + 1;
      *s = v100 + 48;
      if ( v39 == 1 )
      {
LABEL_213:
        v41 = v102;
LABEL_206:
        if ( u.d > v101 + 0.5 )
        {
          LOBYTE(v42) = *(v41 - 1);
          v104 = s;
          goto LABEL_210;
        }
        if ( 0.5 - v101 > u.d )
        {
          while ( *(v41 - 1) == 48 )
            --v41;
          goto LABEL_62;
        }
        goto LABEL_63;
      }
      v103 = (__int64)&s[v39 - 2 + 2];
      while ( 1 )
      {
        v100 = (int)(u.d * 10.0);
        u.d = u.d * 10.0 - (double)v100;
        if ( u.d == 0.0 )
          break;
        *v102++ = v100 + 48;
        if ( v102 == (char *)v103 )
          goto LABEL_213;
      }
    }
    v41 = v102 + 1;
    *v102 = v100 + 48;
    goto LABEL_206;
  }
  *(double *)&Sa = v37;
  v41 = s + 1;
  v42 = (int)v35 + 48;
  v43 = 0.5 / tens[v40] - *(double *)&Sa;
  u.d = v35 - (double)(int)v35;
  *s = (int)v35 + 48;
  v44 = u.d;
  if ( v43 > u.d )
    goto LABEL_62;
  if ( v43 <= 1.0 - u.d )
  {
    if ( v39 > 1 )
    {
      v45 = (__int64)&s[v39 - 2 + 2];
      while ( 1 )
      {
        v46 = v44 * 10.0;
        ++v41;
        v43 = v43 * 10.0;
        v42 = (int)v46 + 48;
        u.d = v46 - (double)(int)v46;
        *(v41 - 1) = (int)v46 + 48;
        v44 = u.d;
        if ( v43 > u.d )
          break;
        if ( v43 > 1.0 - u.d )
          goto LABEL_265;
        if ( v41 == (char *)v45 )
          goto LABEL_63;
      }
LABEL_62:
      k0_0 = v38;
      goto LABEL_73;
    }
    goto LABEL_63;
  }
LABEL_265:
  v104 = s;
  while ( 1 )
  {
LABEL_210:
    v105 = v41 - 1;
    if ( (_BYTE)v42 != 57 )
    {
      s = v104;
      k0_0 = v38;
      *v105 = v42 + 1;
      goto LABEL_73;
    }
    if ( v105 == v104 )
      break;
    LOBYTE(v42) = *(v41 - 2);
    --v41;
  }
  *v104 = 48;
  s = v104;
  *v105 = 49;
  k0_0 = v38 + 1;
LABEL_73:
  Bfree(v11, &alloc);
  *v41 = 0;
  *decpt = k0_0 + 1;
  if ( rve )
    *rve = v41;
  return s;
};
