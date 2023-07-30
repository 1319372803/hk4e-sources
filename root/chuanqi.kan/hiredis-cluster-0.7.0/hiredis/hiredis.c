// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/hiredis.c

// Line 90: range 000000000CAC3660-000000000CAC3726
void __fastcall freeReplyObject(void *reply)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbp
  void *v5; // rdi

  if ( reply )
  {
    v2 = *(_DWORD *)reply - 1;
    if ( v2 > 0xD )
      goto LABEL_10;
    if ( ((1LL << v2) & 0x2071) != 0 )
    {
      hiredisAllocFns.freeFn((void *)*((_QWORD *)reply + 4));
      hiredisAllocFns.freeFn(reply);
      return;
    }
    if ( ((1LL << v2) & 0xB02) == 0 || (v3 = (_QWORD *)*((_QWORD *)reply + 7)) == 0LL )
    {
LABEL_10:
      hiredisAllocFns.freeFn(reply);
      return;
    }
    if ( *((_QWORD *)reply + 6) )
    {
      v4 = 0LL;
      do
      {
        v5 = (void *)v3[v4++];
        freeReplyObject(v5);
        v3 = (_QWORD *)*((_QWORD *)reply + 7);
      }
      while ( *((_QWORD *)reply + 6) > v4 );
    }
    hiredisAllocFns.freeFn(v3);
    hiredisAllocFns.freeFn(reply);
  }
};

// Line 121: range 000000000CAC38F0-000000000CAC3A4D
void *__fastcall createStringObject(const redisReadTask_0 *task, char *str, size_t len)
{
  int type; // r15d
  int *v5; // rax
  int *v6; // rbx
  int v7; // eax
  void *v8; // rax
  char *v9; // rax
  char *v10; // rcx
  redisReadTask *parent; // rax
  _QWORD *obj; // rax
  int v13; // edx
  void *v15; // rax
  char *v16; // rax
  int *v17; // rdi

  type = task->type;
  v5 = (int *)hiredisAllocFns.callocFn(1LL, 64LL);
  v6 = v5;
  if ( !v5 )
    return v6;
  *v5 = type;
  v7 = task->type;
  if ( (unsigned int)(task->type - 5) <= 1 || v7 == 1 )
  {
    if ( v7 != 14 )
    {
      v8 = hiredisAllocFns.mallocFn(len + 1);
      if ( v8 )
      {
        v9 = (char *)memcpy(v8, str, len);
        v9[len] = 0;
        v10 = v9;
        *((_QWORD *)v6 + 3) = len;
        goto LABEL_6;
      }
oom:
      v17 = v6;
      v6 = 0LL;
      freeReplyObject(v17);
      return v6;
    }
  }
  else if ( v7 != 14 )
  {
    __assert_fail(
      "task->type == 6 || task->type == 5 || task->type == 1 || task->type == 14",
      "hiredis.c",
      0x84u,
      "createStringObject");
  }
  v15 = hiredisAllocFns.mallocFn(len - 3);
  if ( !v15 )
    goto oom;
  *((_WORD *)v6 + 20) = *(_WORD *)str;
  *((_WORD *)v6 + 21) = (unsigned __int8)str[2];
  v16 = (char *)memcpy(v15, str + 4, len - 4);
  v16[len - 4] = 0;
  v10 = v16;
  *((_QWORD *)v6 + 3) = len - 4;
LABEL_6:
  parent = task->parent;
  *((_QWORD *)v6 + 4) = v10;
  if ( parent )
  {
    obj = parent->obj;
    v13 = *(_DWORD *)obj;
    if ( *(_DWORD *)obj != 2 && (unsigned int)(v13 - 9) > 1 && v13 != 12 )
      __assert_fail(
        "parent->type == 2 || parent->type == 9 || parent->type == 10 || parent->type == 12",
        "hiredis.c",
        0x9Fu,
        "createStringObject");
    *(_QWORD *)(obj[7] + 8LL * task->idx) = v6;
  }
  return v6;
};

// Line 169: range 000000000CAC3820-000000000CAC38DF
void *__fastcall createArrayObject(const redisReadTask_0 *task, size_t elements)
{
  int type; // r14d
  int *v3; // rax
  int *v4; // rbx
  redisReadTask *parent; // rax
  _QWORD *obj; // rax
  int v7; // edx
  void *v9; // rax
  int *v10; // rdi

  type = task->type;
  v3 = (int *)hiredisAllocFns.callocFn(1LL, 64LL);
  v4 = v3;
  if ( v3 )
  {
    *v3 = type;
    if ( !elements || (v9 = hiredisAllocFns.callocFn(elements, 8LL), (*((_QWORD *)v4 + 7) = v9) != 0LL) )
    {
      parent = task->parent;
      *((_QWORD *)v4 + 6) = elements;
      if ( parent )
      {
        obj = parent->obj;
        v7 = *(_DWORD *)obj;
        if ( *(_DWORD *)obj != 2 && (unsigned int)(v7 - 9) > 1 && v7 != 12 )
          __assert_fail(
            "parent->type == 2 || parent->type == 9 || parent->type == 10 || parent->type == 12",
            "hiredis.c",
            0xBFu,
            "createArrayObject");
        *(_QWORD *)(obj[7] + 8LL * task->idx) = v4;
      }
    }
    else
    {
      v10 = v4;
      v4 = 0LL;
      freeReplyObject(v10);
    }
  }
  return v4;
};

// Line 197: range 000000000CAC3B60-000000000CAC3BE7
void *__fastcall createIntegerObject(const redisReadTask_0 *task, __int64 value)
{
  void *result; // rax
  redisReadTask *parent; // rdx
  _QWORD *obj; // rdx
  int v5; // ecx

  result = hiredisAllocFns.callocFn(1LL, 64LL);
  if ( result )
  {
    parent = task->parent;
    *(_DWORD *)result = 3;
    *((_QWORD *)result + 1) = value;
    if ( parent )
    {
      obj = parent->obj;
      v5 = *(_DWORD *)obj;
      if ( *(_DWORD *)obj != 2 && (unsigned int)(v5 - 9) > 1 && v5 != 12 )
        __assert_fail(
          "parent->type == 2 || parent->type == 9 || parent->type == 10 || parent->type == 12",
          "hiredis.c",
          0xD3u,
          "createIntegerObject");
      *(_QWORD *)(obj[7] + 8LL * task->idx) = result;
    }
  }
  return result;
};

// Line 217: range 000000000CAC3740-000000000CAC381A
double *__fastcall createDoubleObject(const redisReadTask_0 *task, double value, char *str, size_t len)
{
  double *v6; // rax
  double *v7; // rbx
  void *v8; // rdi
  redisReadTask *parent; // rax
  _QWORD *obj; // rax
  double *v12; // rdi

  v6 = (double *)hiredisAllocFns.callocFn(1LL, 64LL);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)v6 = 7;
    v6[2] = value;
    v8 = hiredisAllocFns.mallocFn(len + 1);
    *((_QWORD *)v7 + 4) = v8;
    if ( v8 )
    {
      memcpy(v8, str, len);
      *(_BYTE *)(*((_QWORD *)v7 + 4) + len) = 0;
      parent = task->parent;
      if ( parent )
      {
        obj = parent->obj;
        if ( (unsigned int)(*(_DWORD *)obj - 9) > 1 && *(_DWORD *)obj != 2 )
          __assert_fail(
            "parent->type == 2 || parent->type == 9 || parent->type == 10",
            "hiredis.c",
            0xF3u,
            "createDoubleObject");
        *(_QWORD *)(obj[7] + 8LL * task->idx) = v7;
      }
    }
    else
    {
      v12 = v7;
      v7 = 0LL;
      freeReplyObject(v12);
    }
  }
  return v7;
};

// Line 266: range 000000000CAC3A60-000000000CAC3ADF
void *__fastcall createBoolObject(const redisReadTask_0 *task, int bval)
{
  void *result; // rax
  redisReadTask *parent; // rdx
  _QWORD *obj; // rdx

  result = hiredisAllocFns.callocFn(1LL, 64LL);
  if ( result )
  {
    *(_DWORD *)result = 8;
    *((_QWORD *)result + 1) = bval != 0;
    parent = task->parent;
    if ( parent )
    {
      obj = parent->obj;
      if ( (unsigned int)(*(_DWORD *)obj - 9) > 1 && *(_DWORD *)obj != 2 )
        __assert_fail(
          "parent->type == 2 || parent->type == 9 || parent->type == 10",
          "hiredis.c",
          0x117u,
          "createBoolObject");
      *(_QWORD *)(obj[7] + 8LL * task->idx) = result;
    }
  }
  return result;
};

// Line 304: range 000000000CAC3BF0-000000000CAC474B
int __fastcall redisvFormatCommand(char **target, const char *format, __va_list_tag *ap)
{
  const char *v3; // r12
  char *v5; // rbx
  char v6; // al
  char *i; // r15
  char *v8; // rdx
  sds v9; // rax
  __int64 v10; // rax
  char **v11; // rdi
  int v12; // esi
  char *v13; // r12
  char v14; // r14
  const unsigned __int16 *v15; // rdx
  __int64 j; // rax
  int v17; // r14d
  unsigned int fp_offset; // eax
  char **v19; // rax
  char **v20; // r12
  unsigned __int64 v21; // rdx
  int v22; // r8d
  int v23; // esi
  char v24; // al
  size_t v25; // r14
  unsigned int gp_offset; // eax
  const char **overflow_arg_area; // rdx
  const char *v28; // r14
  size_t v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rdi
  char *reg_save_area; // rdx
  const void *v33; // rsi
  size_t v34; // rdx
  const void **v35; // rax
  size_t *v36; // rdx
  unsigned __int64 v37; // rbp
  int v38; // r15d
  unsigned __int64 v39; // rdx
  int v40; // ecx
  char *v41; // rax
  char *v42; // rbp
  int v43; // r15d
  char **v44; // rbx
  char *v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  char *v48; // rsi
  int v49; // r12d
  size_t v50; // rdx
  char *v51; // rdi
  int v52; // eax
  int v53; // r12d
  int v55; // r13d
  unsigned __int64 v56; // rbp
  __int64 v57; // r14
  char **v58; // r12
  __int64 v59; // r14
  char *v60; // rdi
  int v61; // eax
  unsigned __int64 v62; // rdx
  int v63; // r8d
  int v64; // ecx
  char v65; // al
  int v66; // eax
  char **curargv; // [rsp+0h] [rbp-A8h]
  unsigned int argc; // [rsp+8h] [rbp-A0h]
  __int64 argca; // [rsp+8h] [rbp-A0h]
  char v70; // [rsp+18h] [rbp-90h]
  int v71; // [rsp+18h] [rbp-90h]
  int totlen; // [rsp+24h] [rbp-84h]
  char _format[16]; // [rsp+40h] [rbp-68h] BYREF
  va_list_0 _cpy; // [rsp+58h] [rbp-50h] BYREF

  if ( !target )
    return -1;
  v3 = format;
  v5 = sdsempty();
  if ( !v5 )
    return -1;
  v6 = *format;
  if ( *format )
  {
    totlen = 0;
    format = 0LL;
    argc = 0;
    curargv = 0LL;
    for ( i = (char *)v3; ; i = v8 )
    {
      if ( v6 == 37 )
      {
        v12 = i[1];
        if ( i[1] )
        {
          if ( (_BYTE)v12 != 98 )
          {
            if ( (_BYTE)v12 != 115 )
            {
              v13 = i + 1;
              if ( (_BYTE)v12 == 37 )
              {
                v9 = sdscat(v5, "%");
LABEL_63:
                if ( !v9 )
                  goto LABEL_116;
LABEL_64:
                ++i;
                goto LABEL_11;
              }
              while ( strchr("#0-+ ", v12) )
              {
                v12 = *++v13;
                if ( !*v13 )
                  goto LABEL_31;
              }
              v14 = *v13;
              if ( *v13 )
              {
                v15 = *__ctype_b_loc();
                while ( (v15[v14] & 0x800) != 0 )
                {
                  v14 = *++v13;
                  if ( !*v13 )
                    goto LABEL_31;
                }
                if ( v14 == 46 )
                {
                  for ( j = *++v13; (_BYTE)j; j = *++v13 )
                  {
                    if ( (v15[j] & 0x800) == 0 )
                      break;
                  }
                }
              }
LABEL_31:
              _cpy[0] = *ap;
              v17 = *v13;
              v70 = *v13;
              if ( !strchr("diouxX", v17) )
              {
                if ( strchr("eEfFgGaA", v17) )
                {
                  fp_offset = ap->fp_offset;
                  if ( fp_offset < 0xB0 )
                  {
                    ap->fp_offset = fp_offset + 16;
                    goto fmt_valid;
                  }
LABEL_60:
                  ap->overflow_arg_area = (char *)ap->overflow_arg_area + 8;
                  goto fmt_valid;
                }
                if ( v70 != 104 )
                {
                  if ( v70 != 108 )
                    goto format_err;
                  v24 = v13[1];
                  if ( v24 != 108 )
                    goto LABEL_57;
LABEL_153:
                  v65 = v13[2];
                  if ( !v65 || !strchr("diouxX", v65) )
                  {
format_err:
                    v55 = -2;
                    goto cleanup;
                  }
                  if ( ap->gp_offset >= 0x30 )
                  {
                    ap->overflow_arg_area = (char *)ap->overflow_arg_area + 8;
                    v13 += 2;
                  }
                  else
                  {
                    v13 += 2;
                    ap->gp_offset += 8;
                  }
                  goto fmt_valid;
                }
                v24 = v13[1];
                if ( v24 == 104 )
                  goto LABEL_153;
LABEL_57:
                ++v13;
                if ( !v24 || !strchr("diouxX", v24) )
                  goto format_err;
              }
              if ( ap->gp_offset >= 0x30 )
                goto LABEL_60;
              ap->gp_offset += 8;
fmt_valid:
              v9 = v5;
              v25 = v13 + 1 - i;
              if ( v25 <= 0xD )
              {
                memcpy(_format, i, v25);
                _format[v25] = 0;
                i = v13 - 1;
                v9 = sdscatvprintf(v5, _format, _cpy);
              }
              goto LABEL_63;
            }
            gp_offset = ap->gp_offset;
            if ( ap->gp_offset >= 0x30 )
            {
              overflow_arg_area = (const char **)ap->overflow_arg_area;
              ap->overflow_arg_area = overflow_arg_area + 1;
            }
            else
            {
              overflow_arg_area = (const char **)((char *)ap->reg_save_area + gp_offset);
              ap->gp_offset = gp_offset + 8;
            }
            v28 = *overflow_arg_area;
            v29 = strlen(*overflow_arg_area);
            if ( v29 )
            {
              v9 = sdscatlen(v5, v28, v29);
              goto LABEL_63;
            }
LABEL_72:
            v9 = v5;
            goto LABEL_64;
          }
          v30 = ap->gp_offset;
          if ( ap->gp_offset >= 0x30 )
          {
            v35 = (const void **)ap->overflow_arg_area;
            v36 = (size_t *)(v35 + 1);
            ap->overflow_arg_area = v35 + 1;
            v33 = *v35;
          }
          else
          {
            v31 = v30 + 8;
            reg_save_area = (char *)ap->reg_save_area;
            ap->gp_offset = v31;
            v33 = *(const void **)&reg_save_area[v30];
            if ( (unsigned int)v31 <= 0x2F )
            {
              ap->gp_offset = v30 + 16;
              v34 = *(_QWORD *)&reg_save_area[v31];
              if ( !v34 )
                goto LABEL_72;
LABEL_78:
              v9 = sdscatlen(v5, v33, v34);
              goto LABEL_63;
            }
            v36 = (size_t *)ap->overflow_arg_area;
          }
          ap->overflow_arg_area = v36 + 1;
          v34 = *v36;
          if ( !v34 )
            goto LABEL_72;
          goto LABEL_78;
        }
      }
      else if ( v6 == 32 )
      {
        if ( (_DWORD)format )
        {
          v19 = (char **)hiredisAllocFns.reallocFn(curargv, 8LL * (int)(argc + 1));
          v20 = v19;
          if ( !v19 )
            goto LABEL_116;
          v19[(int)(argc + 1) - 1] = v5;
          switch ( *(v5 - 1) & 7 )
          {
            case 0:
              v21 = (unsigned __int8)*(v5 - 1) >> 3;
              v22 = (unsigned __int8)v21 + 2;
              goto LABEL_38;
            case 1:
              v21 = (unsigned __int8)*(v5 - 3);
              v22 = v21 + 2;
              goto LABEL_38;
            case 2:
              v21 = *(unsigned __int16 *)(v5 - 5);
              v22 = v21 + 2;
              goto LABEL_38;
            case 3:
              v21 = *(unsigned int *)(v5 - 9);
              v22 = v21 + 2;
              goto LABEL_38;
            case 4:
              v21 = *(_QWORD *)(v5 - 17);
              v22 = v21 + 2;
LABEL_38:
              if ( v21 <= 9 )
              {
                v61 = 4;
              }
              else if ( v21 <= 0x63 )
              {
                v61 = 5;
              }
              else if ( v21 <= 0x3E7 )
              {
                v61 = 6;
              }
              else
              {
                v23 = 1;
                if ( v21 <= 0x270F )
                {
                  v61 = 7;
                  goto LABEL_48;
                }
                do
                {
                  v23 += 4;
                  v21 /= 0x2710uLL;
                  if ( v21 <= 9 )
                  {
                    v61 = v23 + 3;
                    goto LABEL_48;
                  }
                  if ( v21 <= 0x63 )
                  {
                    v61 = v23 + 4;
                    goto LABEL_48;
                  }
                  if ( v21 <= 0x3E7 )
                  {
                    v61 = v23 + 5;
                    goto LABEL_48;
                  }
                }
                while ( v21 > 0x270F );
                v61 = v23 + 6;
              }
LABEL_48:
              totlen += v22 + v61;
              v5 = sdsempty();
              if ( !v5 )
              {
                curargv = v20;
                ++argc;
                v55 = -1;
                goto LABEL_119;
              }
              ++argc;
              format = 0LL;
              curargv = v20;
              break;
            default:
              v22 = 2;
              v61 = 4;
              goto LABEL_48;
          }
        }
        v6 = i[1];
        v8 = i + 1;
        if ( !v6 )
          goto LABEL_12;
        continue;
      }
      v9 = sdscatlen(v5, i, 1uLL);
      if ( !v9 )
        goto LABEL_116;
LABEL_11:
      v5 = v9;
      v6 = i[1];
      format = (const char *)1;
      v8 = i + 1;
      if ( !v6 )
      {
LABEL_12:
        if ( !(_DWORD)format )
        {
          v37 = (int)argc;
          v38 = totlen + 3;
          goto LABEL_82;
        }
        format = (const char *)(8LL * (int)(argc + 1));
        v10 = ((__int64 (__fastcall *)(char **, const char *, char *))hiredisAllocFns.reallocFn)(curargv, format, v8);
        v11 = (char **)v10;
        if ( !v10 )
        {
LABEL_116:
          v55 = -1;
          goto cleanup;
        }
        *(_QWORD *)(v10 + 8LL * (int)(argc + 1) - 8) = v5;
        switch ( *(v5 - 1) & 7 )
        {
          case 0:
            v62 = (unsigned __int8)*(v5 - 1) >> 3;
            v63 = v62 + 2;
            goto LABEL_132;
          case 1:
            v62 = (unsigned __int8)*(v5 - 3);
            v63 = v62 + 2;
            goto LABEL_132;
          case 2:
            v62 = *(unsigned __int16 *)(v5 - 5);
            v63 = v62 + 2;
            goto LABEL_132;
          case 3:
            v62 = *(unsigned int *)(v5 - 9);
            v63 = v62 + 2;
            goto LABEL_132;
          case 4:
            v62 = *(_QWORD *)(v5 - 17);
            v63 = v62 + 2;
LABEL_132:
            if ( v62 <= 9 )
            {
              v66 = 4;
            }
            else if ( v62 <= 0x63 )
            {
              v66 = 5;
            }
            else if ( v62 <= 0x3E7 )
            {
              v66 = 6;
            }
            else
            {
              v64 = 1;
              format = (const char *)0x346DC5D63886594BLL;
              if ( v62 <= 0x270F )
              {
                v66 = 7;
                goto LABEL_142;
              }
              do
              {
                v64 += 4;
                v62 /= 0x2710uLL;
                if ( v62 <= 9 )
                {
                  v66 = v64 + 3;
                  goto LABEL_142;
                }
                if ( v62 <= 0x63 )
                {
                  v66 = v64 + 4;
                  goto LABEL_142;
                }
                if ( v62 <= 0x3E7 )
                {
                  v66 = v64 + 5;
                  goto LABEL_142;
                }
              }
              while ( v62 > 0x270F );
              v66 = v64 + 6;
            }
LABEL_142:
            v39 = (int)++argc;
            curargv = v11;
            v38 = totlen + v63 + v66 + 3;
            break;
          default:
            v63 = 2;
            v66 = 4;
            goto LABEL_142;
        }
        goto LABEL_83;
      }
    }
  }
  v38 = 3;
  v37 = 0LL;
  curargv = 0LL;
  argc = 0;
LABEL_82:
  sdsfree(v5);
  v39 = v37;
LABEL_83:
  if ( v39 <= 9 )
  {
    v40 = 1;
  }
  else if ( v39 <= 0x63 )
  {
    v40 = 2;
  }
  else if ( v39 <= 0x3E7 )
  {
    v40 = 3;
  }
  else
  {
    v40 = 1;
    format = (const char *)0x346DC5D63886594BLL;
    if ( v39 > 0x270F )
    {
      while ( 1 )
      {
        v40 += 4;
        v39 /= 0x2710uLL;
        if ( v39 <= 9 )
          break;
        if ( v39 <= 0x63 )
        {
          ++v40;
          break;
        }
        if ( v39 <= 0x3E7 )
        {
          v40 += 2;
          break;
        }
        if ( v39 <= 0x270F )
        {
          v40 += 3;
          break;
        }
      }
    }
    else
    {
      v40 = 4;
    }
  }
  v71 = v40 + v38;
  v41 = (char *)((__int64 (__fastcall *)(_QWORD, const char *))hiredisAllocFns.mallocFn)(v40 + v38 + 1, format);
  v42 = v41;
  if ( v41 )
  {
    v43 = sprintf(v41, off_1A0D71D5, argc);
    if ( argc )
    {
      v44 = curargv;
      argca = (__int64)&curargv[argc];
      do
      {
        v45 = *v44;
        switch ( *(*v44 - 1) & 7 )
        {
          case 0:
            v46 = (unsigned __int8)*(*v44 - 1) >> 3;
            break;
          case 1:
            v46 = (unsigned __int8)*(v45 - 3);
            break;
          case 2:
            v46 = *(unsigned __int16 *)(v45 - 5);
            break;
          case 3:
            v46 = *(unsigned int *)(v45 - 9);
            break;
          case 4:
            v46 = *(_QWORD *)(v45 - 17);
            break;
          default:
            v46 = 0LL;
            break;
        }
        v47 = sprintf(&v42[v43], "$%zu\r\n", v46);
        v48 = *v44;
        v49 = v47 + v43;
        switch ( *(*v44 - 1) & 7 )
        {
          case 0:
            v50 = (unsigned __int8)*(*v44 - 1) >> 3;
            break;
          case 1:
            v50 = (unsigned __int8)*(v48 - 3);
            break;
          case 2:
            v50 = *(unsigned __int16 *)(v48 - 5);
            break;
          case 3:
            v50 = *(unsigned int *)(v48 - 9);
            break;
          case 4:
            v50 = *(_QWORD *)(v48 - 17);
            break;
          default:
            v50 = 0LL;
            break;
        }
        memcpy(&v42[v49], v48, v50);
        v51 = *v44;
        switch ( *(*v44 - 1) & 7 )
        {
          case 0:
            v52 = (unsigned __int8)*(*v44 - 1) >> 3;
            break;
          case 1:
            v52 = (unsigned __int8)*(v51 - 3);
            break;
          case 2:
            v52 = *(unsigned __int16 *)(v51 - 5);
            break;
          case 3:
            v52 = *(_DWORD *)(v51 - 9);
            break;
          case 4:
            v52 = *(_DWORD *)(v51 - 17);
            break;
          default:
            v52 = 0;
            break;
        }
        v53 = v52 + v49;
        ++v44;
        sdsfree(v51);
        v43 = v53 + 2;
        v42[v53] = 13;
        v42[v53 + 1] = 10;
      }
      while ( v44 != (char **)argca );
    }
    if ( v43 != v71 )
      __assert_fail("pos == totlen", "hiredis.c", 0x1FAu, "redisvFormatCommand");
    v42[v43] = 0;
    hiredisAllocFns.freeFn(curargv);
    *target = v42;
    return v43;
  }
  else
  {
    v55 = -1;
    v5 = 0LL;
cleanup:
    if ( curargv )
    {
      if ( argc )
      {
LABEL_119:
        v56 = 0LL;
        v57 = argc - 1;
        v58 = &curargv[(int)v57];
        v59 = 8 * ~v57;
        do
        {
          v60 = v58[v56 / 8];
          v56 -= 8LL;
          sdsfree(v60);
        }
        while ( v56 != v59 );
      }
      hiredisAllocFns.freeFn(curargv);
    }
    sdsfree(v5);
    hiredisAllocFns.freeFn(0LL);
    return v55;
  }
};

// Line 546: range 000000000CAC4750-000000000CAC47E8
int redisFormatCommand(char **target, const char *format, ...)
{
  int result; // eax
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  result = redisvFormatCommand(target, format, (__va_list_tag *)ap);
  if ( result < 0 )
    return -1;
  return result;
};

// Line 569: range 000000000CAC47F0-000000000CAC4BC4
int __fastcall redisFormatSdsCommandArgv(sds *target, int argc, const char **argv, const size_t *argvlen)
{
  unsigned __int64 v5; // rdx
  int v8; // ecx
  unsigned __int64 v9; // r13
  __int64 v10; // r9
  size_t v11; // rsi
  unsigned __int64 v12; // rdx
  int v13; // r8d
  char *v14; // rax
  char *v15; // r14
  char *RoomFor; // rax
  char *v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // r14
  size_t v21; // r13
  char *v22; // rax
  const char *v23; // rsi
  char *v24; // rax
  unsigned __int8 v25; // cl
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rax
  const char **v30; // r14
  const char *v31; // rdi
  size_t v32; // r12
  char *v33; // rax
  char *v34; // rax
  sds v35; // rax
  size_t v36; // rbx
  sds s; // [rsp+0h] [rbp-48h]
  char *sa; // [rsp+0h] [rbp-48h]

  if ( !target )
    return -1;
  v5 = argc;
  if ( (unsigned __int64)argc <= 9 )
  {
    v36 = 4LL;
  }
  else if ( (unsigned __int64)argc <= 0x63 )
  {
    v36 = 5LL;
  }
  else if ( (unsigned __int64)argc <= 0x3E7 )
  {
    v36 = 6LL;
  }
  else
  {
    v8 = 1;
    if ( (unsigned __int64)argc > 0x270F )
    {
      do
      {
        v8 += 4;
        v5 /= 0x2710uLL;
        if ( v5 <= 9 )
        {
          v36 = (unsigned int)(v8 + 3);
          goto LABEL_12;
        }
        if ( v5 <= 0x63 )
        {
          v36 = (unsigned int)(v8 + 4);
          goto LABEL_12;
        }
        if ( v5 <= 0x3E7 )
        {
          v36 = (unsigned int)(v8 + 5);
          goto LABEL_12;
        }
      }
      while ( v5 > 0x270F );
      v36 = (unsigned int)(v8 + 6);
    }
    else
    {
      v36 = 7LL;
    }
  }
LABEL_12:
  if ( argc > 0 )
  {
    v9 = 0LL;
    v10 = 8LL * (unsigned int)(argc - 1) + 8;
    do
    {
      if ( argvlen )
      {
        v11 = argvlen[v9 / 8];
        if ( v11 > 9 )
          goto LABEL_16;
      }
      else
      {
        s = (sds)v10;
        v11 = strlen(argv[v9 / 8]);
        v10 = (__int64)s;
        if ( v11 > 9 )
        {
LABEL_16:
          if ( v11 <= 0x63 )
          {
            v27 = 5LL;
          }
          else if ( v11 <= 0x3E7 )
          {
            v27 = 6LL;
          }
          else
          {
            v12 = v11;
            v13 = 1;
            if ( v11 > 0x270F )
            {
              do
              {
                v13 += 4;
                v12 /= 0x2710uLL;
                if ( v12 <= 9 )
                {
                  v27 = (unsigned int)(v13 + 3);
                  goto LABEL_25;
                }
                if ( v12 <= 0x63 )
                {
                  v27 = (unsigned int)(v13 + 4);
                  goto LABEL_25;
                }
                if ( v12 <= 0x3E7 )
                {
                  v27 = (unsigned int)(v13 + 5);
                  goto LABEL_25;
                }
              }
              while ( v12 > 0x270F );
              v27 = (unsigned int)(v13 + 6);
            }
            else
            {
              v27 = 7LL;
            }
          }
          goto LABEL_25;
        }
      }
      v27 = 4LL;
LABEL_25:
      v9 += 8LL;
      v36 += v27 + v11 + 2;
    }
    while ( v9 != v10 );
  }
  v14 = sdsempty();
  v15 = v14;
  if ( !v14 )
    return -1;
  RoomFor = sdsMakeRoomFor(v14, v36);
  if ( !RoomFor )
  {
    sdsfree(v15);
    return -1;
  }
  v17 = sdscatfmt(RoomFor, off_1A0D71F0, (unsigned int)argc);
  if ( argc <= 0 )
  {
LABEL_31:
    v25 = *(v17 - 1);
    v26 = v25 & 7;
    goto LABEL_32;
  }
  v18 = (unsigned int)(argc - 1);
  v19 = 0LL;
  v20 = 8 * v18 + 8;
  if ( argvlen )
  {
    do
    {
      v21 = argvlen[v19 / 8];
      v22 = sdscatfmt(v17, &off_1A0D71F0[6], v21);
      v23 = argv[v19 / 8];
      v19 += 8LL;
      v24 = sdscatlen(v22, v23, v21);
      v17 = sdscatlen(v24, &off_19EB3611[2], 2uLL);
    }
    while ( v19 != v20 );
    goto LABEL_31;
  }
  v30 = &argv[v18 + 1];
  do
  {
    v31 = *argv;
    sa = v17;
    ++argv;
    v32 = strlen(v31);
    v33 = sdscatfmt(sa, &off_1A0D71F0[6], v32);
    v34 = sdscatlen(v33, *(argv - 1), v32);
    v35 = sdscatlen(v34, &off_19EB3611[2], 2uLL);
    v17 = v35;
  }
  while ( argv != v30 );
  v25 = *(v35 - 1);
  v26 = v25 & 7;
  if ( (v25 & 7u) <= 4 )
  {
LABEL_32:
    switch ( v26 )
    {
      case 0:
        v28 = v25 >> 3;
        break;
      case 1:
        v28 = (unsigned __int8)*(v17 - 3);
        break;
      case 2:
        v28 = *(unsigned __int16 *)(v17 - 5);
        break;
      case 3:
        v28 = *(unsigned int *)(v17 - 9);
        break;
      case 4:
        v28 = *(_QWORD *)(v17 - 17);
        break;
      default:
        goto LABEL_53;
    }
    goto LABEL_44;
  }
LABEL_53:
  v28 = 0LL;
LABEL_44:
  if ( v36 != v28 )
    __assert_fail("sdslen(cmd)==totlen", "hiredis.c", 0x261u, "redisFormatSdsCommandArgv");
  *target = v17;
  return v36;
};

// Line 616: range 000000000CAC4BD0-000000000CAC4F7E
// attributes: thunk
void __fastcall redisFreeSdsCommand(sds cmd)
{
  sdsfree(cmd);
};

// Line 666: range 000000000CAC4FA0-000000000CAC5020
void __fastcall _redisSetError(redisContext_0 *c, int type, const char *str)
{
  size_t v5; // r12
  size_t v6; // rax
  char *errstr; // rdi
  int *v8; // rax

  c->err = type;
  if ( str )
  {
    v5 = 127LL;
    v6 = strlen(str);
    errstr = c->errstr;
    if ( v6 <= 0x7F )
      v5 = v6;
    memcpy(errstr, str, v5);
    c->errstr[v5] = 0;
  }
  else
  {
    if ( type != 1 )
      __assert_fail("type == 1", "hiredis.c", 0x2A5u, "__redisSetError");
    v8 = __errno_location();
    __xpg_strerror_r((unsigned int)*v8, c->errstr, 128LL);
  }
};

// Line 683: range 000000000CAC5030-000000000CAC5037
redisReader_0 *__cdecl redisReaderCreate()
{
  return redisReaderCreateWithFunctions(&defaultFunctions);
};

// Line 688: range 000000000CAC3730-000000000CAC3733
void __fastcall redisPushAutoFree(void *privdata, void *reply)
{
  freeReplyObject(reply);
};

// Line 712: range 000000000CAC5040-000000000CAC51B8
void __fastcall redisFree(redisContext_0 *c)
{
  redisContext_0 *v1; // rbx
  void (*free_privdata)(void); // rax
  void (*free_privctx)(void *); // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  _DWORD *v6; // rdi

  v1 = c;
  if ( c )
  {
    redisNetClose(c);
    sdsfree(c->obuf);
    redisReaderFree(c->reader);
    hiredisAllocFns.freeFn(c->tcp.host);
    hiredisAllocFns.freeFn(c->tcp.source_addr);
    hiredisAllocFns.freeFn(c->unix_sock.path);
    hiredisAllocFns.freeFn(c->connect_timeout);
    hiredisAllocFns.freeFn(c->command_timeout);
    hiredisAllocFns.freeFn(c->saddr);
    if ( c->privdata )
    {
      free_privdata = (void (*)(void))c->free_privdata;
      if ( free_privdata )
        free_privdata();
    }
    free_privctx = c->funcs->free_privctx;
    if ( free_privctx )
      free_privctx(c->privctx);
    v4 = 272;
    if ( ((unsigned __int8)c & 1) != 0 )
    {
      LOBYTE(c->funcs) = -1;
      c = (redisContext_0 *)((char *)c + 1);
      LOBYTE(v4) = 15;
    }
    if ( ((unsigned __int8)c & 2) != 0 )
    {
      c = (redisContext_0 *)((char *)c + 2);
      v4 -= 2;
      HIWORD(c[-1].push_cb) = -1;
    }
    if ( ((unsigned __int8)c & 4) != 0 )
    {
      LODWORD(c->funcs) = -1;
      v4 -= 4;
      c = (redisContext_0 *)((char *)c + 4);
    }
    v5 = v4 >> 3;
    memset(c, 0xFFu, 8 * v5);
    v6 = &c->funcs + v5;
    if ( (v4 & 4) != 0 )
    {
      *v6++ = -1;
      if ( (v4 & 2) == 0 )
      {
LABEL_15:
        if ( (v4 & 1) == 0 )
        {
LABEL_16:
          hiredisAllocFns.freeFn(v1);
          return;
        }
        goto LABEL_17;
      }
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_15;
    }
    v6 = (_DWORD *)((char *)v6 + 2);
    *((_WORD *)v6 - 1) = -1;
    if ( (v4 & 1) == 0 )
      goto LABEL_16;
LABEL_17:
    *(_BYTE *)v6 = -1;
    hiredisAllocFns.freeFn(v1);
  }
};

// Line 736: range 000000000CAC51C0-000000000CAC51D9
redisFD __fastcall redisFreeKeepFd(redisContext_0 *c)
{
  redisFD fd; // ebx

  fd = c->fd;
  c->fd = -1;
  redisFree(c);
  return fd;
};

// Line 743: range 000000000CAC51E0-000000000CAC5339
int __fastcall redisReconnect(redisContext_0 *c)
{
  size_t v1; // rax
  void (*free_privctx)(void); // rax
  redisReader_0 *v3; // rax
  bool v4; // zf
  redisConnectionType connection_type; // eax
  int v6; // eax
  int v7; // ebp
  timeval v9; // [rsp+0h] [rbp-18h]

  c->err = 0;
  v1 = strlen(c->errstr);
  memset(c->errstr, 0, v1);
  if ( c->privctx )
  {
    free_privctx = (void (*)(void))c->funcs->free_privctx;
    if ( free_privctx )
    {
      free_privctx();
      c->privctx = 0LL;
    }
  }
  redisNetClose(c);
  sdsfree(c->obuf);
  redisReaderFree(c->reader);
  c->obuf = sdsempty();
  v3 = redisReaderCreate();
  v4 = c->obuf == 0LL;
  c->reader = v3;
  if ( v4 || !v3 )
  {
    v7 = -1;
    _redisSetError(c, 5, "Out of memory");
  }
  else
  {
    connection_type = c->connection_type;
    if ( connection_type )
    {
      if ( connection_type == REDIS_CONN_UNIX )
      {
        v6 = redisContextConnectUnix(c, c->unix_sock.path, c->connect_timeout);
      }
      else
      {
        _redisSetError(c, 2, "Not enough information to reconnect");
        v6 = -1;
      }
    }
    else
    {
      v6 = redisContextConnectBindTcp(c, c->tcp.host, c->tcp.port, c->connect_timeout, c->tcp.source_addr);
    }
    v7 = v6;
    if ( c->command_timeout && (c->flags & 1) != 0 && c->fd != -1 )
      redisContextSetTimeout(c, v9);
  }
  return v7;
};

// Line 785: range 000000000CAC5390-000000000CAC5560
redisContext_0 *__fastcall redisConnectWithOptions(const redisOptions *options)
{
  redisContext_0 *v1; // rbx
  redisReader_0 *v2; // rax
  bool v3; // zf
  int v4; // eax
  redisPushFn *push_cb; // rsi
  const timeval *connect_timeout; // rsi
  int type; // eax
  redisContext_0 *v8; // r12
  redisFD fd; // eax
  timeval v11; // [rsp+0h] [rbp-18h]

  v1 = (redisContext_0 *)hiredisAllocFns.callocFn(1LL, 272LL);
  if ( !v1 )
    return 0LL;
  v1->funcs = &redisContextDefaultFuncs;
  v1->obuf = sdsempty();
  v2 = redisReaderCreate();
  v3 = v1->obuf == 0LL;
  v1->reader = v2;
  v1->fd = -1;
  if ( v3 || !v2 )
  {
    redisFree(v1);
    return 0LL;
  }
  v4 = options->options;
  if ( (v4 & 1) == 0 )
    v1->flags |= 1u;
  if ( (v4 & 2) != 0 )
    v1->flags |= 0x80u;
  if ( (v4 & 4) != 0 )
  {
    push_cb = options->push_cb;
    v1->flags |= 0x200u;
    if ( push_cb )
      goto LABEL_10;
  }
  else
  {
    push_cb = options->push_cb;
    if ( push_cb )
      goto LABEL_10;
  }
  if ( (v4 & 8) != 0 )
    goto LABEL_11;
  push_cb = redisPushAutoFree;
LABEL_10:
  redisSetPushCallback(v1, push_cb);
LABEL_11:
  connect_timeout = options->connect_timeout;
  v1->privdata = options->privdata;
  v1->free_privdata = options->free_privdata;
  if ( redisContextUpdateConnectTimeout(v1, connect_timeout)
    || redisContextUpdateCommandTimeout(v1, options->command_timeout) )
  {
    v8 = v1;
    _redisSetError(v1, 5, "Out of memory");
    return v8;
  }
  type = options->type;
  if ( options->type )
  {
    if ( type == 1 )
    {
      redisContextConnectUnix(v1, options->endpoint.tcp.source_addr, options->connect_timeout);
    }
    else
    {
      v8 = 0LL;
      if ( type != 2 )
        return v8;
      fd = options->endpoint.fd;
      v1->flags |= 2u;
      v1->fd = fd;
    }
  }
  else
  {
    redisContextConnectBindTcp(
      v1,
      options->endpoint.tcp.ip,
      options->endpoint.tcp.port,
      options->connect_timeout,
      options->endpoint.tcp.source_addr);
  }
  v8 = v1;
  if ( options->command_timeout && (v1->flags & 1) != 0 && v1->fd != -1 )
    redisContextSetTimeout(v1, v11);
  return v8;
};

// Line 841: range 000000000CAC5570-000000000CAC5599
redisContext_0 *__fastcall redisConnect(const char *ip_0, int port)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.endpoint.tcp.ip = ip_0;
  options.endpoint.tcp.port = port;
  return redisConnectWithOptions(&options);
};

// Line 847: range 000000000CAC55A0-000000000CAC55DB
redisContext_0 *__fastcall redisConnectWithTimeout(const char *ip_0, int port, __time_t a3, __suseconds_t a4)
{
  timeval tva; // [rsp+0h] [rbp-68h] BYREF
  redisOptions options; // [rsp+10h] [rbp-58h] BYREF

  tva.tv_usec = a4;
  tva.tv_sec = a3;
  memset(&options, 0, sizeof(options));
  options.endpoint.tcp.ip = ip_0;
  options.endpoint.tcp.port = port;
  options.connect_timeout = &tva;
  return redisConnectWithOptions(&options);
};

// Line 854: range 000000000CAC55E0-000000000CAC5611
redisContext_0 *__fastcall redisConnectNonBlock(const char *ip_0, int port)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.endpoint.tcp.ip = ip_0;
  options.endpoint.tcp.port = port;
  options.options = 1;
  return redisConnectWithOptions(&options);
};

// Line 862: range 000000000CAC5620-000000000CAC5656
redisContext_0 *__fastcall redisConnectBindNonBlock(const char *ip_0, int port, const char *source_addr)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.endpoint.tcp.ip = ip_0;
  options.endpoint.tcp.port = port;
  options.endpoint.tcp.source_addr = source_addr;
  options.options = 1;
  return redisConnectWithOptions(&options);
};

// Line 871: range 000000000CAC5660-000000000CAC5696
redisContext_0 *__fastcall redisConnectBindNonBlockWithReuse(const char *ip_0, int port, const char *source_addr)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.endpoint.tcp.ip = ip_0;
  options.endpoint.tcp.port = port;
  options.endpoint.tcp.source_addr = source_addr;
  options.options = 3;
  return redisConnectWithOptions(&options);
};

// Line 879: range 000000000CAC56A0-000000000CAC56CC
redisContext_0 *__fastcall redisConnectUnix(const char *path)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.type = 1;
  options.endpoint.tcp.source_addr = path;
  return redisConnectWithOptions(&options);
};

// Line 885: range 000000000CAC56D0-000000000CAC570F
redisContext_0 *__fastcall redisConnectUnixWithTimeout(const char *path, __time_t a2, __suseconds_t a3)
{
  timeval tva; // [rsp+0h] [rbp-68h] BYREF
  redisOptions options; // [rsp+10h] [rbp-58h] BYREF

  tva.tv_sec = a2;
  tva.tv_usec = a3;
  memset(&options, 0, sizeof(options));
  options.type = 1;
  options.endpoint.tcp.source_addr = path;
  options.connect_timeout = &tva;
  return redisConnectWithOptions(&options);
};

// Line 892: range 000000000CAC5710-000000000CAC5744
redisContext_0 *__fastcall redisConnectUnixNonBlock(const char *path)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.type = 1;
  options.endpoint.tcp.source_addr = path;
  options.options = 1;
  return redisConnectWithOptions(&options);
};

// Line 899: range 000000000CAC5750-000000000CAC577A
redisContext_0 *__fastcall redisConnectFd(redisFD fd)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.type = 2;
  options.endpoint.fd = fd;
  return redisConnectWithOptions(&options);
};

// Line 908: range 000000000CAC5340-000000000CAC5355
int __fastcall redisSetTimeout(redisContext_0 *c, const timeval tv, __int64 a3, __int64 a4, __int64 a5, timeval a6)
{
  if ( (c->flags & 1) != 0 )
    return redisContextSetTimeout(c, a6);
  else
    return -1;
};

// Line 914: range 000000000CAC5360-000000000CAC537C
int __fastcall redisEnableKeepAlive(redisContext_0 *c)
{
  return -(redisKeepAlive(c, 15) != 0);
};

// Line 922: range 000000000CAC5380-000000000CAC538E
redisPushFn *__fastcall redisSetPushCallback(redisContext_0 *c, redisPushFn *fn)
{
  redisPushFn *result; // rax

  result = c->push_cb;
  c->push_cb = fn;
  return result;
};

// Line 932: range 000000000CAC5780-000000000CAC57FC
int __fastcall redisBufferRead(redisContext_0 *c)
{
  int result; // eax
  int v2; // eax
  char buf[16384]; // [rsp+0h] [rbp-4018h] BYREF

  result = -1;
  if ( !c->err )
  {
    v2 = c->funcs->read(c, buf, 0x4000LL);
    if ( v2 <= 0 )
    {
      return -(v2 != 0);
    }
    else
    {
      result = redisReaderFeed(c->reader, buf, v2);
      if ( result )
      {
        _redisSetError(c, c->reader->err, c->reader->errstr);
        return -1;
      }
    }
  }
  return result;
};

// Line 962: range 000000000CAC5800-000000000CAC5A02
int __fastcall redisBufferWrite(redisContext_0 *c, int *done)
{
  int err; // ebp
  char *obuf; // rdx
  char *v6; // rdx
  __int64 v7; // rsi
  char *v8; // rax
  int result; // eax
  __int64 v10; // rsi
  ssize_t v11; // rax
  char *v12; // rdi
  int v13; // eax

  err = c->err;
  if ( err )
  {
    return -1;
  }
  else
  {
    obuf = c->obuf;
    switch ( *(obuf - 1) & 7 )
    {
      case 0:
        v10 = (unsigned __int8)*(obuf - 1) >> 3;
        goto LABEL_13;
      case 1:
        v10 = (unsigned __int8)*(obuf - 3);
        goto LABEL_13;
      case 2:
        v10 = *(unsigned __int16 *)(obuf - 5);
        goto LABEL_13;
      case 3:
        v10 = *(unsigned int *)(obuf - 9);
        goto LABEL_13;
      case 4:
        v10 = *(_QWORD *)(obuf - 17);
LABEL_13:
        if ( !v10 )
          goto LABEL_4;
        v11 = c->funcs->write(c);
        if ( v11 < 0 )
          return -1;
        if ( v11 )
        {
          v12 = c->obuf;
          switch ( *(v12 - 1) & 7 )
          {
            case 0:
              v7 = (unsigned __int8)*(v12 - 1) >> 3;
              goto LABEL_7;
            case 1:
              v7 = (unsigned __int8)*(v12 - 3);
              goto LABEL_7;
            case 2:
              v7 = *(unsigned __int16 *)(v12 - 5);
              goto LABEL_7;
            case 3:
              v7 = *(unsigned int *)(v12 - 9);
              goto LABEL_7;
            case 4:
              v7 = *(_QWORD *)(v12 - 17);
LABEL_7:
              if ( v7 != v11 )
                goto LABEL_3;
              sdsfree(v12);
              v8 = sdsempty();
              c->obuf = v8;
              if ( !v8 )
                goto oom;
              goto LABEL_4;
            default:
LABEL_3:
              if ( sdsrange(v12, v11, -1LL) >= 0 )
                goto LABEL_4;
oom:
              _redisSetError(c, 5, "Out of memory");
              break;
          }
          return -1;
        }
LABEL_4:
        if ( !done )
          return err;
        v6 = c->obuf;
        switch ( *(v6 - 1) & 7 )
        {
          case 0:
            v13 = (unsigned __int8)*(v6 - 1) >> 3 == 0;
            break;
          case 1:
            v13 = *(v6 - 3) == 0;
            break;
          case 2:
            v13 = *(_WORD *)(v6 - 5) == 0;
            break;
          case 3:
            v13 = *(_DWORD *)(v6 - 9) == 0;
            break;
          case 4:
            v13 = *(_QWORD *)(v6 - 17) == 0LL;
            break;
          default:
            v13 = 1;
            break;
        }
        *done = v13;
        result = 0;
        break;
      default:
        goto LABEL_4;
    }
  }
  return result;
};

// Line 993: range 000000000CAC5A10-000000000CAC5A4E
int __fastcall redisGetReplyFromReader(redisContext_0 *c, void **reply)
{
  if ( redisReaderGetReply(c->reader, reply) != -1 )
    return 0;
  _redisSetError(c, c->reader->err, c->reader->errstr);
  return -1;
};

// Line 1013: range 000000000CAC5A50-000000000CAC5B47
int __fastcall redisGetReply(redisContext_0 *c, void **reply)
{
  void *v3; // rdi
  redisPushFn *push_cb; // rax
  int wdone[4]; // [rsp+0h] [rbp-48h] BYREF
  void *aux[7]; // [rsp+10h] [rbp-38h] BYREF

  wdone[0] = 0;
  aux[0] = 0LL;
  if ( redisGetReplyFromReader(c, aux) == -1 )
    return -1;
  v3 = aux[0];
  if ( !aux[0] && (c->flags & 1) != 0 )
  {
    while ( redisBufferWrite(c, wdone) != -1 )
    {
      if ( wdone[0] )
      {
        while ( redisBufferRead(c) != -1 && redisGetReplyFromReader(c, aux) != -1 )
        {
          while ( aux[0] )
          {
            push_cb = c->push_cb;
            if ( !push_cb || *(_DWORD *)aux[0] != 12 )
            {
              v3 = aux[0];
              goto LABEL_3;
            }
            ((void (__fastcall *)(void *))push_cb)(c->privdata);
            if ( redisGetReplyFromReader(c, aux) == -1 )
              return -1;
          }
        }
        return -1;
      }
    }
    return -1;
  }
LABEL_3:
  if ( reply )
    *reply = v3;
  else
    freeReplyObject(v3);
  return 0;
};

// Line 1060: range 000000000CAC5B50-000000000CAC5B8A
int __fastcall _redisAppendCommand(redisContext_0 *c, const char *cmd, size_t len)
{
  char *v3; // rax

  v3 = sdscatlen(c->obuf, cmd, len);
  if ( v3 )
  {
    c->obuf = v3;
    return 0;
  }
  else
  {
    _redisSetError(c, 5, "Out of memory");
    return -1;
  }
};

// Line 1073: range 000000000CAC5B90-000000000CAC5BA7
int __fastcall redisAppendFormattedCommand(redisContext_0 *c, const char *cmd, size_t len)
{
  return -(_redisAppendCommand(c, cmd, len) != 0);
};

// Line 1082: range 000000000CAC5BB0-000000000CAC5C49
int __fastcall redisvAppendCommand(redisContext_0 *c, const char *format, __va_list_tag *ap)
{
  int v3; // eax
  int appended; // ebx
  char *cmd; // [rsp+10h] [rbp-18h] BYREF

  v3 = redisvFormatCommand(&cmd, format, ap);
  if ( v3 == -1 )
  {
    _redisSetError(c, 5, "Out of memory");
    return -1;
  }
  else if ( v3 == -2 )
  {
    appended = -1;
    _redisSetError(c, 2, "Invalid format string");
  }
  else
  {
    appended = _redisAppendCommand(c, cmd, v3);
    hiredisAllocFns.freeFn(cmd);
    if ( appended )
      return -1;
  }
  return appended;
};

// Line 1104: range 000000000CAC5C50-000000000CAC5CDE
int redisAppendCommand(redisContext_0 *c, const char *format, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  return redisvAppendCommand(c, format, (__va_list_tag *)ap);
};

// Line 1114: range 000000000CAC5CE0-000000000CAC5D56
int __fastcall redisAppendCommandArgv(redisContext_0 *c, int argc, const char **argv, const size_t *argvlen)
{
  int v4; // eax
  int appended; // ebx
  sds cmd; // [rsp+10h] [rbp-28h] BYREF

  v4 = redisFormatSdsCommandArgv(&cmd, argc, argv, argvlen);
  if ( v4 == -1 )
  {
    _redisSetError(c, 5, "Out of memory");
    return -1;
  }
  else
  {
    appended = _redisAppendCommand(c, cmd, v4);
    sdsfree(cmd);
    if ( appended )
      return -1;
  }
  return appended;
};

// Line 1155: range 000000000CAC5D60-000000000CAC5DAA
void *__fastcall redisvCommand(redisContext_0 *c, const char *format, __va_list_tag *ap)
{
  int appended; // eax
  void *v4; // rdx
  void *v6; // [rsp+0h] [rbp-18h] BYREF

  appended = redisvAppendCommand(c, format, ap);
  v4 = 0LL;
  if ( appended )
    return v4;
  if ( (c->flags & 1) != 0 && !redisGetReply(c, &v6) )
    return v6;
  return 0LL;
};

// Line 1161: range 000000000CAC5DB0-000000000CAC5E3E
void *redisCommand(redisContext_0 *c, const char *format, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  return redisvCommand(c, format, (__va_list_tag *)ap);
};

// Line 1169: range 000000000CAC5E40-000000000CAC5E8A
void *__fastcall redisCommandArgv(redisContext_0 *c, int argc, const char **argv, const size_t *argvlen)
{
  int appended; // eax
  void *v5; // rdx
  void *v7; // [rsp+0h] [rbp-18h] BYREF

  appended = redisAppendCommandArgv(c, argc, argv, argvlen);
  v5 = 0LL;
  if ( appended )
    return v5;
  if ( (c->flags & 1) != 0 && !redisGetReply(c, &v7) )
    return v7;
  return 0LL;
};
