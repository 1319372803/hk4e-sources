// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/read.c

// Line 169: range 000000000CACAE10-000000000CACAF80
int __fastcall string2ll(const char *s, size_t slen, __int64 *value)
{
  char v3; // cl
  int v4; // r10d
  unsigned __int64 v5; // r9
  int v6; // eax
  const char *v7; // rcx
  __int64 v8; // rax
  char v9; // r11
  const char *v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  char v13; // r9
  __int64 v14; // r8
  int result; // eax

  if ( !slen )
    return -1;
  v3 = *s;
  if ( slen == 1 && v3 == 48 )
  {
    if ( !value )
      return 0;
LABEL_18:
    *value = 0LL;
    return 0;
  }
  v4 = 0;
  v5 = 1LL;
  if ( v3 == 45 )
  {
    if ( slen == 1 )
      return -1;
    v3 = s[1];
    LOBYTE(v5) = 2;
    ++s;
    LOBYTE(v4) = 1;
  }
  if ( (unsigned __int8)(v3 - 49) > 8u )
  {
    result = -1;
    if ( v3 == 48 && slen == 1 )
      goto LABEL_18;
  }
  else
  {
    v6 = v3;
    v7 = s + 1;
    v8 = v6 - 48;
    if ( slen <= v5 )
    {
      if ( v4 )
      {
LABEL_14:
        if ( value )
        {
          *value = -v8;
          return 0;
        }
        return 0;
      }
    }
    else
    {
      v9 = s[1];
      if ( (unsigned __int8)(v9 - 48) > 9u )
        return -1;
      v10 = &s[slen - v5];
      v11 = 10 * v8;
      v12 = v9 - 48;
      while ( 1 )
      {
        v8 = v11 + v12;
        if ( v7 == v10 )
          break;
        v13 = v7[1];
        if ( (unsigned __int8)(v13 - 48) <= 9u && (unsigned __int64)v8 <= 0x1999999999999999LL )
        {
          v14 = 5 * v8;
          ++v7;
          v12 = v13 - 48;
          v11 = 2 * v14;
          if ( v11 <= ~v12 )
            continue;
        }
        return -1;
      }
      if ( v4 )
      {
        if ( (unsigned __int64)v8 <= 0x8000000000000000LL )
          goto LABEL_14;
        return -1;
      }
    }
    if ( v8 < 0 )
      return -1;
    if ( !value )
      return 0;
    *value = v8;
    return 0;
  }
  return result;
};

// Line 241: range 000000000CACAF90-000000000CACB05C
void __fastcall moveToNextTask(redisReader_0 *r, redisReader_0 *a2)
{
  int err; // eax
  char *v3; // rdx
  __int64 v4; // r8
  int v5; // edi
  __int64 v6; // rcx
  int v7; // edi

  err = a2->err;
  if ( a2->err >= 0 )
  {
    if ( err )
    {
      v3 = (char *)r + 8 * err - 8;
      while ( 1 )
      {
        v4 = *((_QWORD *)v3 + 1);
        v5 = **(_DWORD **)v3;
        if ( v5 != 2 && (unsigned int)(v5 - 9) > 1 && v5 != 12 )
          __assert_fail(
            "prv->type == 2 || prv->type == 9 || prv->type == 10 || prv->type == 12",
            "read.c",
            0xFFu,
            "moveToNextTask");
        v6 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
        v7 = *(_DWORD *)(v4 + 16);
        if ( v7 != v6 - 1 )
          break;
        a2->err = --err;
        if ( err == -1 )
          return;
        v3 -= 8;
        if ( !err )
          goto LABEL_13;
      }
      if ( v6 <= v7 )
        __assert_fail("cur->idx < prv->elements", "read.c", 0x104u, "moveToNextTask");
      *(_DWORD *)v4 = -1;
      *(_QWORD *)(v4 + 8) = -1LL;
      *(_DWORD *)(v4 + 16) = v7 + 1;
    }
    else
    {
LABEL_13:
      a2->err = -1;
    }
  }
};

// Line 269: range 000000000CACB070-000000000CACB5A1
int __fastcall processLineItem(redisReader_0 *r)
{
  size_t pos; // r8
  int ridx; // r10d
  redisReadTask_0 **task; // rdi
  char *v5; // r11
  int v6; // esi
  const redisReadTask_0 *v7; // rbp
  int v8; // eax
  char *v9; // rcx
  __int64 v10; // rdx
  char *v12; // rdx
  signed int v13; // edx
  __int64 type; // rax
  redisReplyObjectFunctions_0 *v15; // rsi
  redisReplyObjectFunctions_0 *v16; // rax
  int v17; // eax
  redisReplyObjectFunctions_0 *fn; // r13
  __int64 v19; // r14
  unsigned __int64 v20; // xmm1_8
  redisReplyObjectFunctions_0 *v21; // rax
  void *(*createNil)(const redisReadTask_0 *); // rax
  redisReplyObjectFunctions_0 *v23; // rax
  void *(*createBool)(const redisReadTask_0 *, int); // rax
  double v25; // xmm0_8
  void (*freeObject)(void); // rax
  redisReplyObjectFunctions_0 *v27; // rax
  void (__fastcall *v28)(double, double); // rax
  redisReplyObjectFunctions_0 *v29; // rax
  void (*v30)(void); // rax
  redisReplyObjectFunctions_0 *v31; // rdx
  void (*v32)(void); // rdx
  int d; // [rsp+8h] [rbp-190h]
  char *eptr; // [rsp+10h] [rbp-188h] BYREF
  char buf[326]; // [rsp+20h] [rbp-178h] BYREF

  pos = r->pos;
  ridx = r->ridx;
  task = r->task;
  v5 = r->buf;
  v6 = LODWORD(r->len) + ~(_DWORD)pos;
  v7 = task[ridx];
  v8 = 0;
  v9 = &v5[pos];
  if ( v6 <= 0 )
    return -1;
  while ( 1 )
  {
    v10 = v8;
    while ( v9[v10] != 13 )
    {
      ++v8;
      ++v10;
      if ( v6 <= v8 )
      {
        if ( v6 == v8 )
          return -1;
        v10 = v8;
        break;
      }
    }
    if ( v9[v10 + 1] == 10 )
      break;
    if ( v6 <= ++v8 )
      return -1;
  }
  v12 = &v9[v10];
  if ( !v12 )
    return -1;
  v13 = (_DWORD)v12 - (_DWORD)v9;
  r->pos = v13 + 2 + pos;
  if ( !v9 )
    return -1;
  type = v7->type;
  if ( (_DWORD)type != 3 )
  {
    switch ( (_DWORD)type )
    {
      case 7:
        fn = r->fn;
        if ( !fn || !fn->createDouble )
        {
          type = 7LL;
          goto LABEL_21;
        }
        if ( (unsigned int)v13 > 0x145 )
        {
          if ( r->reply )
          {
            freeObject = (void (*)(void))fn->freeObject;
            if ( freeObject )
            {
              freeObject();
              v5 = r->buf;
              r->reply = 0LL;
            }
          }
          sdsfree(v5);
          r->buf = 0LL;
          r->len = 0LL;
          strcpy(r->errstr, "Double value is too large");
          r->pos = 0LL;
          r->ridx = -1;
          r->err = 4;
          return -1;
        }
        v19 = v13;
        memcpy(buf, v9, v13);
        buf[v19] = 0;
        if ( !strcasecmp(buf, ",inf") )
        {
          v20 = 0x7FF0000000000000LL;
        }
        else
        {
          v20 = 0xFFF0000000000000LL;
          if ( strcasecmp(buf, ",-inf") )
          {
            v25 = strtod(buf, &eptr);
            if ( !buf[0] || *eptr || __isnan(v25) )
            {
              if ( r->reply )
              {
                v27 = r->fn;
                if ( v27 )
                {
                  v28 = (void (__fastcall *)(double, double))v27->freeObject;
                  if ( v28 )
                  {
                    v28(v25, v25);
                    r->reply = 0LL;
                  }
                }
              }
              sdsfree(r->buf);
              r->buf = 0LL;
              r->len = 0LL;
              strcpy(r->errstr, "Bad double value");
              r->pos = 0LL;
              r->ridx = -1;
              r->err = 4;
              return -1;
            }
            fn = r->fn;
            v20 = *(_QWORD *)&v25;
          }
        }
        type = ((__int64 (__fastcall *)(const redisReadTask_0 *, char *, __int64, double))fn->createDouble)(
                 v7,
                 buf,
                 v19,
                 *(double *)&v20);
        break;
      case 4:
        v21 = r->fn;
        if ( !v21 || (createNil = v21->createNil) == 0LL )
        {
          type = 4LL;
          goto LABEL_21;
        }
        type = (__int64)createNil(v7);
        break;
      case 8:
        v23 = r->fn;
        if ( !v23 || (createBool = v23->createBool) == 0LL )
        {
          type = 8LL;
          goto LABEL_21;
        }
        type = (__int64)createBool(v7, (*v9 & 0xDF) == 84);
        break;
      default:
        v15 = r->fn;
        if ( v15 && v15->createString )
          type = (__int64)v15->createString(v7, v9, v13);
        break;
    }
LABEL_19:
    if ( type )
    {
      ridx = r->ridx;
      task = r->task;
LABEL_21:
      if ( !ridx )
        r->reply = (void *)type;
      moveToNextTask((redisReader_0 *)task, (redisReader_0 *)&r->ridx);
      return 0;
    }
    if ( r->reply )
    {
      v29 = r->fn;
      if ( v29 )
      {
        v30 = (void (*)(void))v29->freeObject;
        if ( v30 )
        {
          v30();
          r->reply = 0LL;
        }
      }
    }
    sdsfree(r->buf);
    r->buf = 0LL;
    r->len = 0LL;
    r->pos = 0LL;
    r->ridx = -1;
    r->err = 5;
    strcpy(r->errstr, "Out of memory");
    return -1;
  }
  v16 = r->fn;
  if ( !v16 || !v16->createInteger )
  {
    type = 3LL;
    goto LABEL_21;
  }
  v17 = string2ll(v9, v13, (__int64 *)buf);
  if ( v17 != -1 )
  {
    type = (__int64)r->fn->createInteger(v7, *(_QWORD *)buf);
    goto LABEL_19;
  }
  if ( r->reply )
  {
    v31 = r->fn;
    if ( v31 )
    {
      v32 = (void (*)(void))v31->freeObject;
      if ( v32 )
      {
        v32();
        v17 = -1;
        r->reply = 0LL;
      }
    }
  }
  d = v17;
  sdsfree(r->buf);
  r->buf = 0LL;
  r->len = 0LL;
  strcpy(r->errstr, "Bad integer value");
  r->pos = 0LL;
  r->ridx = -1;
  r->err = 4;
  return d;
};

// Line 605: range 000000000CACB680-000000000CACB778
redisReader_0 *__fastcall redisReaderCreateWithFunctions(redisReplyObjectFunctions_0 *fn)
{
  redisReader_0 *v1; // rbx
  sds v2; // rax
  redisReadTask_0 **task; // rax
  int tasks; // edx
  redisReadTask_0 **v5; // r13
  redisReadTask_0 *v6; // rax
  int v7; // edx

  v1 = (redisReader_0 *)hiredisAllocFns.callocFn(1LL, 216LL);
  if ( v1 )
  {
    v2 = sdsempty();
    v1->buf = v2;
    if ( v2 )
    {
      task = (redisReadTask_0 **)hiredisAllocFns.callocFn(9LL, 8LL);
      v1->task = task;
      if ( task )
      {
        tasks = v1->tasks;
        if ( tasks > 8 )
        {
LABEL_9:
          v1->fn = fn;
          v1->maxbuf = 0x4000LL;
          v1->maxelements = 0xFFFFFFFFLL;
          v1->ridx = -1;
          return v1;
        }
        while ( 1 )
        {
          v5 = &task[tasks];
          v6 = (redisReadTask_0 *)hiredisAllocFns.callocFn(1LL, 48LL);
          v7 = v1->tasks;
          *v5 = v6;
          task = v1->task;
          if ( !task[v7] )
            break;
          tasks = v7 + 1;
          v1->tasks = tasks;
          if ( tasks > 8 )
            goto LABEL_9;
        }
      }
    }
    redisReaderFree(v1);
    return 0LL;
  }
  return 0LL;
};

// Line 637: range 000000000CACB5B0-000000000CACB67A
void __fastcall redisReaderFree(redisReader_0 *r)
{
  redisReplyObjectFunctions_0 *fn; // rax
  void (*freeObject)(void); // rax
  redisReadTask_0 **task; // rdi
  __int64 v5; // rbp
  int v6; // ebx
  redisReadTask_0 *v7; // rdi

  if ( r )
  {
    if ( r->reply )
    {
      fn = r->fn;
      if ( fn )
      {
        freeObject = (void (*)(void))fn->freeObject;
        if ( freeObject )
          freeObject();
      }
    }
    task = r->task;
    if ( task )
    {
      if ( r->tasks > 0 )
      {
        v5 = 0LL;
        v6 = 0;
        do
        {
          v7 = task[v5];
          ++v6;
          ++v5;
          hiredisAllocFns.freeFn(v7);
          task = r->task;
        }
        while ( r->tasks > v6 );
      }
      hiredisAllocFns.freeFn(task);
    }
    sdsfree(r->buf);
    hiredisAllocFns.freeFn(r);
  }
};

// Line 657: range 000000000CACB780-000000000CACB9CC
int __fastcall redisReaderFeed(redisReader_0 *r, const char *buf, size_t len)
{
  int err; // ebp
  size_t maxbuf; // rcx
  char *v6; // rdi
  unsigned __int8 v7; // al
  size_t v8; // rax
  redisReplyObjectFunctions_0 *fn; // rax
  void (*freeObject)(void); // rax
  char *v12; // rax
  size_t v13; // rsi
  size_t lena; // [rsp+8h] [rbp-20h]

  err = r->err;
  if ( r->err )
    return -1;
  if ( !buf || !len )
    return err;
  if ( r->len || (maxbuf = r->maxbuf) == 0 )
  {
    v6 = r->buf;
    goto LABEL_18;
  }
  v6 = r->buf;
  v7 = *(v6 - 1) & 7;
  if ( v7 == 2 )
  {
    v8 = *(unsigned __int16 *)(v6 - 3) - *(unsigned __int16 *)(v6 - 5);
  }
  else if ( v7 <= 2u )
  {
    if ( v7 != 1 )
      goto LABEL_18;
    v8 = (unsigned __int8)*(v6 - 2) - (unsigned __int8)*(v6 - 3);
  }
  else if ( v7 == 3 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v6 - 5) - *(_DWORD *)(v6 - 9));
  }
  else
  {
    if ( v7 != 4 )
      goto LABEL_18;
    v8 = *(_QWORD *)(v6 - 9) - *(_QWORD *)(v6 - 17);
  }
  if ( maxbuf < v8 )
  {
    lena = len;
    sdsfree(v6);
    v6 = sdsempty();
    r->buf = v6;
    if ( !v6 )
    {
oom:
      if ( r->reply )
      {
        fn = r->fn;
        if ( fn )
        {
          freeObject = (void (*)(void))fn->freeObject;
          if ( freeObject )
          {
            freeObject();
            r->reply = 0LL;
          }
        }
      }
      err = -1;
      sdsfree(r->buf);
      r->buf = 0LL;
      r->len = 0LL;
      r->pos = 0LL;
      r->ridx = -1;
      r->err = 5;
      strcpy(r->errstr, "Out of memory");
      return err;
    }
    r->pos = 0LL;
    len = lena;
  }
LABEL_18:
  v12 = sdscatlen(v6, buf, len);
  if ( !v12 )
    goto oom;
  r->buf = v12;
  switch ( *(v12 - 1) & 7 )
  {
    case 0:
      v13 = (unsigned __int8)*(v12 - 1) >> 3;
      break;
    case 1:
      v13 = (unsigned __int8)*(v12 - 3);
      break;
    case 2:
      v13 = *(unsigned __int16 *)(v12 - 5);
      break;
    case 3:
      v13 = *(unsigned int *)(v12 - 9);
      break;
    case 4:
      v13 = *(_QWORD *)(v12 - 17);
      break;
    default:
      v13 = 0LL;
      break;
  }
  r->len = v13;
  return 0;
};

// Line 688: range 000000000CACB9E0-000000000CACC778
int __fastcall redisReaderGetReply(redisReader_0 *r, void **reply)
{
  int err; // r13d
  int ridx; // edx
  unsigned int v5; // ecx
  __int64 v6; // rax
  redisReadTask_0 **v7; // rdi
  redisReadTask_0 *v8; // rbp
  size_t pos; // rax
  char *v10; // rcx
  char v11; // bl
  size_t v12; // rax
  int tasks; // ebp
  redisReadTask_0 *v15; // rbx
  const char *v16; // rdi
  signed int v17; // ecx
  signed int v18; // eax
  __int64 v19; // rdx
  size_t v20; // rsi
  char *buf; // rax
  size_t v22; // rdi
  int v23; // edx
  const char *v24; // rdi
  int v25; // eax
  __int64 v26; // rbx
  const char *v27; // rdx
  int v28; // edx
  int v29; // r12d
  __int64 maxelements; // rax
  __int64 type; // rbp
  redisReplyObjectFunctions_0 *v32; // rax
  void *(*createArray)(const redisReadTask_0 *, size_t); // rax
  int v34; // eax
  redisReadTask_0 **v35; // rdx
  redisReadTask_0 **v36; // rdx
  redisReadTask_0 *v37; // rax
  int v38; // ebp
  redisReadTask_0 **v39; // rax
  int v40; // edx
  redisReadTask_0 **v41; // r14
  redisReadTask_0 *v42; // rax
  int v43; // edx
  redisReplyObjectFunctions_0 *v44; // rax
  void (*v45)(void); // rax
  redisReplyObjectFunctions_0 *v46; // rax
  void *(*createNil)(const redisReadTask_0 *); // rax
  bool v48; // zf
  const char *v49; // rbx
  const char *v50; // r14
  size_t v51; // rsi
  __int64 v52; // rbx
  __int64 v53; // rax
  redisReplyObjectFunctions_0 *v54; // rsi
  int v55; // ecx
  redisReplyObjectFunctions_0 *v56; // rax
  void *(*v57)(const redisReadTask_0 *); // rax
  redisReadTask_0 **task; // rcx
  redisReadTask_0 *v59; // rax
  void *privdata; // rdx
  redisReplyObjectFunctions_0 *v61; // rax
  void (*v62)(void); // rax
  redisReplyObjectFunctions_0 *v63; // rax
  void (*v64)(void); // rax
  redisReplyObjectFunctions_0 *fn; // rax
  void (*freeObject)(void); // rax
  char *v67; // rcx
  int v68; // edx
  unsigned int v69; // eax
  size_t v70; // rbp
  unsigned __int64 v71; // rcx
  redisReplyObjectFunctions_0 *v72; // rax
  void (*v73)(void); // rax
  redisReplyObjectFunctions_0 *v74; // rax
  void (*v75)(void); // rax
  redisReplyObjectFunctions_0 *v76; // rax
  void (*v77)(void); // rax
  redisReplyObjectFunctions_0 *v78; // rax
  void (*v79)(void); // rax
  redisReader_0 *p_ridx; // [rsp+10h] [rbp-D8h]
  char v82[16]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 s[23]; // [rsp+30h] [rbp-B8h] BYREF

  if ( reply )
    *reply = 0LL;
  err = r->err;
  if ( r->err )
    return -1;
  if ( !r->len )
    return err;
  ridx = r->ridx;
  if ( ridx == -1 )
  {
    task = r->task;
    v59 = *task;
    v59->type = -1;
    v59->idx = -1;
    v59->obj = 0LL;
    v59->elements = -1LL;
    privdata = r->privdata;
    (*task)->parent = 0LL;
    (*task)->privdata = privdata;
    r->ridx = 0;
    ridx = 0;
  }
  p_ridx = (redisReader_0 *)&r->ridx;
  while ( ridx >= 0 )
  {
    v7 = r->task;
    v8 = v7[ridx];
    if ( v8->type < 0 )
    {
      pos = r->pos;
      if ( r->len != pos )
      {
        v10 = &r->buf[pos];
        r->pos = pos + 1;
        if ( v10 )
        {
          v11 = *v10;
          switch ( *v10 )
          {
            case '#':
              v8->type = 8;
              LOWORD(v6) = 128;
              goto LABEL_10;
            case '$':
              v8->type = 1;
              LOWORD(v6) = 1;
              goto LABEL_10;
            case '%':
              v8->type = 9;
              goto LABEL_27;
            case '*':
              v8->type = 2;
              goto LABEL_27;
            case '+':
              v8->type = 5;
              LOWORD(v6) = 16;
              goto LABEL_10;
            case ',':
              v8->type = 7;
              LOWORD(v6) = 64;
              goto LABEL_10;
            case '-':
              v8->type = 6;
              LOWORD(v6) = 32;
              goto LABEL_10;
            case ':':
              v8->type = 3;
              LOWORD(v6) = 4;
              goto LABEL_10;
            case '=':
              v8->type = 14;
              LOWORD(v6) = 0x2000;
              goto LABEL_10;
            case '>':
              v8->type = 12;
              goto LABEL_27;
            case '_':
              v8->type = 4;
              LOWORD(v6) = 8;
              goto LABEL_10;
            case '~':
              v8->type = 10;
              goto LABEL_27;
            default:
              if ( v11 == 10 )
              {
                strcpy(v82, "\"\\n\"");
              }
              else
              {
                if ( v11 > 10 )
                {
                  if ( v11 == 34 || v11 == 92 )
                  {
                    snprintf(v82, 8uLL, "\"\\%c\"", (unsigned int)v11);
                    goto LABEL_135;
                  }
                  if ( v11 == 13 )
                  {
                    strcpy(v82, "\"\\r\"");
                    goto LABEL_135;
                  }
                }
                else
                {
                  if ( v11 == 8 )
                  {
                    strcpy(v82, "\"\\b\"");
                    goto LABEL_135;
                  }
                  if ( v11 > 8 )
                  {
                    strcpy(v82, "\"\\t\"");
                    goto LABEL_135;
                  }
                  if ( v11 == 7 )
                  {
                    strcpy(v82, "\"\\a\"");
                    goto LABEL_135;
                  }
                }
                if ( ((*__ctype_b_loc())[v11] & 0x4000) != 0 )
                  snprintf(v82, 8uLL, "\"%c\"", (unsigned int)v11);
                else
                  snprintf(v82, 8uLL, "\"\\x%02x\"", (unsigned __int8)v11);
              }
LABEL_135:
              snprintf((char *)s, 0x80uLL, "Protocol error, got %s as reply type byte", v82);
              if ( r->reply )
              {
                fn = r->fn;
                if ( fn )
                {
                  freeObject = (void (*)(void))fn->freeObject;
                  if ( freeObject )
                  {
                    freeObject();
                    r->reply = 0LL;
                  }
                }
              }
              sdsfree(r->buf);
              r->buf = 0LL;
              r->len = 0LL;
              v67 = (char *)s;
              r->pos = 0LL;
              r->ridx = -1;
              r->err = 4;
              do
              {
                v68 = *(_DWORD *)v67;
                v67 += 4;
                v69 = ~v68 & (v68 - 16843009) & 0x80808080;
              }
              while ( !v69 );
              v70 = 127LL;
              if ( (~v68 & (v68 - 16843009) & 0x8080) == 0 )
                LOBYTE(v69) = (~v68 & (v68 - 16843009) & 0x80808080) >> 16;
              if ( (~v68 & (v68 - 16843009) & 0x8080) == 0 )
                v67 += 2;
              v71 = &v67[-__CFADD__((_BYTE)v69, (_BYTE)v69) - 3] - (char *)s;
              if ( v71 <= 0x7F )
                v70 = v71;
              memcpy(r->errstr, s, v70);
              r->errstr[v70] = 0;
              break;
          }
        }
      }
      break;
    }
    v5 = v8->type - 1;
    if ( v5 > 0xD )
      goto LABEL_174;
    v6 = 1LL << v5;
    if ( ((1LL << v5) & 0xB02) != 0 )
    {
LABEL_27:
      tasks = r->tasks;
      v15 = v7[ridx];
      if ( tasks - 1 == ridx )
      {
        v38 = tasks + 9;
        v39 = (redisReadTask_0 **)hiredisAllocFns.reallocFn(v7, 8LL * v38);
        if ( !v39 )
          goto LABEL_75;
        v40 = r->tasks;
        r->task = v39;
        if ( v38 > v40 )
        {
          while ( 1 )
          {
            v41 = &v39[v40];
            v42 = (redisReadTask_0 *)hiredisAllocFns.callocFn(1LL, 48LL);
            v43 = r->tasks;
            *v41 = v42;
            v39 = r->task;
            if ( !v39[v43] )
              break;
            v40 = v43 + 1;
            r->tasks = v40;
            if ( v38 <= v40 )
              goto LABEL_28;
          }
LABEL_75:
          if ( r->reply )
          {
            v44 = r->fn;
            if ( v44 )
            {
              v45 = (void (*)(void))v44->freeObject;
              if ( v45 )
              {
                v45();
                r->reply = 0LL;
              }
            }
          }
          sdsfree(r->buf);
          r->buf = 0LL;
          r->len = 0LL;
          r->pos = 0LL;
          r->ridx = -1;
          r->err = 5;
          strcpy(r->errstr, "Out of memory");
          break;
        }
      }
LABEL_28:
      v16 = &r->buf[r->pos];
      v17 = LODWORD(r->len) + ~(unsigned int)r->pos;
      if ( v17 <= 0 )
        break;
      v18 = 0;
      while ( 1 )
      {
        v19 = v18;
        do
        {
          if ( v16[v19] == 13 )
            goto LABEL_35;
          ++v18;
          ++v19;
        }
        while ( v17 > v18 );
        if ( v17 == v18 )
          goto LABEL_37;
        v19 = v18;
LABEL_35:
        if ( v16[v19 + 1] == 10 )
          break;
        if ( v17 <= ++v18 )
          goto LABEL_37;
      }
      v27 = &v16[v19];
      if ( !v27 )
        break;
      v28 = (_DWORD)v27 - (_DWORD)v16;
      r->pos += v28 + 2;
      if ( !v16 )
        break;
      if ( string2ll(v16, v28, s) == -1 )
      {
        if ( r->reply )
        {
          v74 = r->fn;
          if ( v74 )
          {
            v75 = (void (*)(void))v74->freeObject;
            if ( v75 )
            {
              v75();
              r->reply = 0LL;
            }
          }
        }
        sdsfree(r->buf);
        r->buf = 0LL;
        r->len = 0LL;
        strcpy(r->errstr, "Bad multi-bulk length");
        r->pos = 0LL;
        r->ridx = -1;
        r->err = 4;
        break;
      }
      v29 = r->ridx;
      if ( s[0] < -1 || (maxelements = r->maxelements, maxelements > 0) && s[0] > maxelements )
      {
        if ( r->reply )
        {
          v63 = r->fn;
          if ( v63 )
          {
            v64 = (void (*)(void))v63->freeObject;
            if ( v64 )
            {
              v64();
              r->reply = 0LL;
            }
          }
        }
        sdsfree(r->buf);
        r->buf = 0LL;
        strcpy(r->errstr, "Multi-bulk length out of range");
        r->len = 0LL;
        r->pos = 0LL;
        r->ridx = -1;
        r->err = 4;
        break;
      }
      if ( s[0] == -1 )
      {
        v46 = r->fn;
        if ( v46 && (createNil = v46->createNil) != 0LL )
        {
          type = (__int64)createNil(v15);
          if ( !type )
            goto LABEL_75;
        }
        else
        {
          type = 4LL;
        }
      }
      else
      {
        type = v15->type;
        if ( (_DWORD)type == 9 )
          s[0] *= 2LL;
        v32 = r->fn;
        if ( v32 )
        {
          createArray = v32->createArray;
          if ( createArray )
            type = ((__int64 (__fastcall *)(redisReadTask_0 *))createArray)(v15);
        }
        if ( !type )
          goto LABEL_75;
        if ( s[0] > 0 )
        {
          v15->elements = s[0];
          v34 = r->ridx;
          v35 = r->task;
          v15->obj = (void *)type;
          r->ridx = ++v34;
          v36 = &v35[v34];
          v37 = *v36;
          v37->obj = 0LL;
          v37->type = -1;
          v37->elements = -1LL;
          v37->idx = 0;
          (*v36)->parent = v15;
          (*v36)->privdata = r->privdata;
          goto LABEL_66;
        }
      }
      moveToNextTask((redisReader_0 *)r->task, p_ridx);
LABEL_66:
      if ( !v29 )
        r->reply = (void *)type;
      goto LABEL_13;
    }
LABEL_10:
    if ( (v6 & 0x2001) != 0 )
    {
      v22 = r->pos;
      v23 = LODWORD(r->len) + ~(_DWORD)v22;
      v24 = &r->buf[v22];
      if ( v23 <= 0 )
        break;
      v25 = 0;
      while ( 1 )
      {
        v26 = v25;
        do
        {
          if ( v24[v26] == 13 )
            goto LABEL_48;
          ++v25;
          ++v26;
        }
        while ( v23 > v25 );
        if ( v23 == v25 )
          goto LABEL_37;
        v26 = v25;
LABEL_48:
        if ( v24[v26 + 1] == 10 )
          break;
        if ( v23 <= ++v25 )
          goto LABEL_37;
      }
      v48 = &v24[v26] == 0LL;
      v49 = &v24[v26];
      v50 = v49;
      if ( v48 )
        break;
      v51 = v49 - v24;
      v52 = v49 - v24 + 2;
      if ( string2ll(v24, v51, s) == -1 )
      {
        if ( r->reply )
        {
          v76 = r->fn;
          if ( v76 )
          {
            v77 = (void (*)(void))v76->freeObject;
            if ( v77 )
            {
              v77();
              r->reply = 0LL;
            }
          }
        }
        sdsfree(r->buf);
        r->buf = 0LL;
        strcpy(r->errstr, "Bad bulk string length");
        r->len = 0LL;
        r->pos = 0LL;
        r->ridx = -1;
        r->err = 4;
        break;
      }
      if ( s[0] < -1 )
      {
        if ( r->reply )
        {
          v78 = r->fn;
          if ( v78 )
          {
            v79 = (void (*)(void))v78->freeObject;
            if ( v79 )
            {
              v79();
              r->reply = 0LL;
            }
          }
        }
        sdsfree(r->buf);
        r->buf = 0LL;
        strcpy(r->errstr, "Bulk string length out of range");
        r->len = 0LL;
        r->pos = 0LL;
        r->ridx = -1;
        r->err = 4;
        break;
      }
      if ( s[0] != -1 )
      {
        v52 += s[0] + 2;
        if ( r->pos + v52 > r->len )
          break;
        v53 = v8->type;
        if ( (_DWORD)v53 == 14 && (s[0] <= 3 || v50[5] != 58) )
        {
          if ( r->reply )
          {
            v61 = r->fn;
            if ( v61 )
            {
              v62 = (void (*)(void))v61->freeObject;
              if ( v62 )
              {
                v62();
                r->reply = 0LL;
              }
            }
          }
          sdsfree(r->buf);
          r->buf = 0LL;
          r->len = 0LL;
          strcpy(r->errstr, "Verbatim string 4 bytes of content type are missing or incorrectly encoded.");
          r->pos = 0LL;
          r->ridx = -1;
          r->err = 4;
          break;
        }
        v54 = r->fn;
        if ( v54 && v54->createString )
          v53 = ((__int64 (__fastcall *)(int *, const char *))v54->createString)(&v8->type, v50 + 2);
        goto LABEL_93;
      }
      v56 = r->fn;
      if ( v56 && (v57 = v56->createNil) != 0LL )
      {
        v53 = (__int64)v57(v8);
LABEL_93:
        if ( !v53 )
          goto LABEL_75;
      }
      else
      {
        v53 = 4LL;
      }
      v55 = r->ridx;
      r->pos += v52;
      if ( !v55 )
        r->reply = (void *)v53;
      moveToNextTask((redisReader_0 *)r->task, p_ridx);
      goto LABEL_13;
    }
    if ( (v6 & 0xFC) == 0 )
LABEL_174:
      __assert_fail("((void *)0)", "read.c", 0x258u, "processItem");
    if ( processLineItem(r) )
      break;
LABEL_13:
    ridx = r->ridx;
  }
LABEL_37:
  if ( r->err )
    return -1;
  v20 = r->pos;
  if ( v20 <= 0x3FF )
    goto LABEL_21;
  if ( sdsrange(r->buf, v20, -1LL) < 0 )
    return -1;
  buf = r->buf;
  r->pos = 0LL;
  switch ( *(buf - 1) & 7 )
  {
    case 0:
      v12 = (unsigned __int8)*(buf - 1) >> 3;
      break;
    case 1:
      v12 = (unsigned __int8)*(buf - 3);
      break;
    case 2:
      v12 = *(unsigned __int16 *)(buf - 5);
      break;
    case 3:
      v12 = *(unsigned int *)(buf - 9);
      break;
    case 4:
      v12 = *(_QWORD *)(buf - 17);
      break;
    default:
      v12 = 0LL;
      break;
  }
  r->len = v12;
LABEL_21:
  if ( r->ridx == -1 )
  {
    if ( reply )
    {
      *reply = r->reply;
    }
    else if ( r->reply )
    {
      v72 = r->fn;
      if ( v72 )
      {
        v73 = (void (*)(void))v72->freeObject;
        if ( v73 )
          v73();
      }
    }
    r->reply = 0LL;
    return 0;
  }
  return err;
};
