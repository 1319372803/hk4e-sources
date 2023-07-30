// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/sds.c

// Line 44: range 000000000CAC68C0-000000000CAC68E2
void *__fastcall sdsAllocPtr(sds s)
{
  __int64 v1; // rax
  unsigned __int8 v2; // dl

  v1 = 0LL;
  v2 = *(s - 1) & 7;
  if ( v2 <= 4u )
    v1 = -(__int64)CSWTCH_47[v2];
  return &s[v1];
};

// Line 83: range 000000000CAC5E90-000000000CAC6014
sds __fastcall sdsnewlen(const void *init, size_t initlen)
{
  unsigned __int8 v2; // al
  char v3; // bp
  __int64 v4; // r13
  char *v5; // rax
  char *v6; // r12
  char *v7; // rcx

  if ( initlen <= 0x1F )
  {
    v2 = initlen == 0;
    v3 = initlen == 0;
LABEL_3:
    v4 = CSWTCH_47[v2];
    goto LABEL_4;
  }
  if ( initlen <= 0xFE )
  {
    v2 = 1;
    v3 = 1;
    goto LABEL_3;
  }
  v3 = 2;
  if ( initlen > 0xFFFE )
    v3 = 4 - (initlen <= 0xFFFFFFFE);
  v2 = v3 & 7;
  if ( (v3 & 7u) <= 4 )
    goto LABEL_3;
  v4 = 0LL;
LABEL_4:
  v5 = (char *)hiredisAllocFns.mallocFn(v4 + initlen + 1);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  if ( !init )
    memset(v5, 0, v4 + initlen + 1);
  v7 = &v6[v4];
  switch ( v3 )
  {
    case 0:
      *(v7 - 1) = 8 * initlen;
      break;
    case 1:
      *(v7 - 3) = initlen;
      *(v7 - 2) = initlen;
      *(v7 - 1) = 1;
      break;
    case 2:
      *(_WORD *)(v7 - 5) = initlen;
      *(_WORD *)(v7 - 3) = initlen;
      *(v7 - 1) = 2;
      break;
    case 3:
      *(_DWORD *)(v7 - 9) = initlen;
      *(_DWORD *)(v7 - 5) = initlen;
      *(v7 - 1) = 3;
      break;
    case 4:
      *(_QWORD *)(v7 - 17) = initlen;
      *(_QWORD *)(v7 - 9) = initlen;
      *(v7 - 1) = 4;
      break;
    default:
      break;
  }
  if ( initlen )
  {
    if ( init )
      v7 = (char *)memcpy(&v6[v4], init, initlen);
  }
  v7[initlen] = 0;
  return v7;
};

// Line 142: range 000000000CAC6020-000000000CAC6029
sds __cdecl sdsempty()
{
  return sdsnewlen(&off_1AE33AC8[4], 0LL);
};

// Line 147: range 000000000CAC6030-000000000CAC6056
sds __fastcall sdsnew(const char *init)
{
  size_t v1; // rax

  if ( !init )
    return sdsnewlen(0LL, 0LL);
  v1 = strlen(init);
  return sdsnewlen(init, v1);
};

// Line 158: range 000000000CAC60D0-000000000CAC6120
void __fastcall sdsfree(sds s)
{
  unsigned __int8 v1; // al

  if ( s )
  {
    v1 = *(s - 1) & 7;
    if ( v1 <= 4u )
      hiredisAllocFns.freeFn(&s[-CSWTCH_47[v1]]);
    else
      hiredisAllocFns.freeFn(s);
  }
};

// Line 176: range 000000000CAC6130-000000000CAC618D
void __fastcall sdsupdatelen(sds s)
{
  int v1; // eax

  v1 = strlen(s);
  switch ( *(s - 1) & 7 )
  {
    case 0:
      *(s - 1) = 8 * v1;
      break;
    case 1:
      *(s - 3) = v1;
      break;
    case 2:
      *(_WORD *)(s - 5) = v1;
      break;
    case 3:
      *(_DWORD *)(s - 9) = v1;
      break;
    case 4:
      *(_QWORD *)(s - 17) = v1;
      break;
    default:
      return;
  }
};

// Line 196: range 000000000CAC6200-000000000CAC657A
sds __fastcall sdsMakeRoomFor(sds s, size_t addlen)
{
  unsigned __int8 v3; // r12
  unsigned __int8 v4; // dl
  __int64 v5; // r12
  __int64 v6; // rdx
  sds result; // rax
  unsigned __int8 v8; // di
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  char *v11; // r14
  unsigned __int64 v12; // rbp
  unsigned __int8 v13; // dl
  char v14; // r13
  __int64 v15; // r15
  char *v16; // rax
  char *v17; // r15
  unsigned __int8 v18; // r13
  int v19; // edx
  char *v20; // rax
  size_t v21; // rdx
  size_t v22; // rdx

  v3 = *(s - 1);
  v4 = v3 & 7;
  if ( (v3 & 7) == 2 )
  {
    v5 = *(unsigned __int16 *)(s - 5);
    v22 = *(unsigned __int16 *)(s - 3) - (unsigned __int16)v5;
    result = s;
    v8 = 2;
    if ( addlen <= v22 )
      return result;
    goto LABEL_6;
  }
  if ( v4 <= 2u )
  {
    if ( v4 == 1 )
    {
      v5 = (unsigned __int8)*(s - 3);
      v21 = (unsigned __int8)*(s - 2) - (unsigned __int8)v5;
      result = s;
      v8 = 1;
      if ( addlen <= v21 )
        return result;
      goto LABEL_6;
    }
    goto LABEL_17;
  }
  if ( v4 == 3 )
  {
    v5 = *(unsigned int *)(s - 9);
    v19 = *(_DWORD *)(s - 5);
    result = s;
    v8 = 3;
    if ( addlen <= (unsigned int)(v19 - v5) )
      return result;
    goto LABEL_6;
  }
  if ( v4 != 4 )
  {
LABEL_17:
    result = s;
    if ( !addlen )
      return result;
    v8 = v3 & 7;
    switch ( v4 )
    {
      case 0u:
        v5 = v3 >> 3;
        break;
      case 1u:
        v5 = (unsigned __int8)*(s - 3);
        break;
      case 2u:
        v5 = *(unsigned __int16 *)(s - 5);
        break;
      case 3u:
        v5 = *(unsigned int *)(s - 9);
        break;
      case 4u:
        v5 = *(_QWORD *)(s - 17);
        break;
      default:
        v5 = 0LL;
        break;
    }
    goto LABEL_6;
  }
  v5 = *(_QWORD *)(s - 17);
  v6 = *(_QWORD *)(s - 9);
  result = s;
  v8 = 4;
  if ( addlen <= v6 - v5 )
    return result;
LABEL_6:
  v9 = 0LL;
  if ( v8 <= 4u )
    v9 = -(__int64)CSWTCH_47[v8];
  v10 = v5 + addlen;
  v11 = &s[v9];
  v12 = 2 * v10;
  if ( v10 > 0xFFFFF )
    v12 = v10 + 0x100000;
  if ( v12 > 0xFE )
  {
    v13 = 2;
    v14 = 2;
    if ( v12 > 0xFFFE )
    {
      v13 = 4 - (v12 <= 0xFFFFFFFE);
      v14 = v13;
    }
  }
  else
  {
    v13 = 1;
    v14 = 1;
  }
  v15 = CSWTCH_47[v13];
  if ( v8 == v14 )
  {
    v20 = (char *)hiredisAllocFns.reallocFn(v11, v12 + v15 + 1);
    if ( v20 )
    {
      v17 = &v20[v15];
      v18 = *(v17 - 1) & 7;
LABEL_21:
      if ( v18 == 2 )
      {
LABEL_41:
        *(_WORD *)(v17 - 3) = v12;
        return v17;
      }
      if ( v18 <= 2u )
      {
        if ( v18 == 1 )
        {
LABEL_43:
          *(v17 - 2) = v12;
          return v17;
        }
      }
      else
      {
        if ( v18 == 3 )
        {
LABEL_39:
          *(_DWORD *)(v17 - 5) = v12;
          return v17;
        }
        if ( v18 == 4 )
        {
LABEL_46:
          *(_QWORD *)(v17 - 9) = v12;
          return v17;
        }
      }
      return v17;
    }
  }
  else
  {
    v16 = (char *)hiredisAllocFns.mallocFn(v12 + v15 + 1);
    if ( v16 )
    {
      v17 = &v16[v15];
      memcpy(v17, s, v5 + 1);
      hiredisAllocFns.freeFn(v11);
      *(v17 - 1) = v14;
      v18 = v14 & 7;
      switch ( v18 )
      {
        case 0u:
          *(v17 - 1) = 8 * v5;
          return v17;
        case 1u:
          *(v17 - 3) = v5;
          goto LABEL_43;
        case 2u:
          *(_WORD *)(v17 - 5) = v5;
          goto LABEL_41;
        case 3u:
          *(_DWORD *)(v17 - 9) = v5;
          goto LABEL_39;
        case 4u:
          *(_QWORD *)(v17 - 17) = v5;
          goto LABEL_46;
        default:
          goto LABEL_21;
      }
    }
  }
  return 0LL;
};

// Line 247: range 000000000CAC6580-000000000CAC6817
sds __fastcall sdsRemoveFreeSpace(sds s)
{
  __int64 v1; // rdx
  unsigned __int8 v3; // al
  unsigned __int64 v4; // rbx
  size_t v5; // r15
  __int64 v6; // rdi
  unsigned __int8 v7; // si
  char v8; // r13
  __int64 v9; // rbp
  char *v10; // rax
  char *v11; // rbp
  unsigned __int8 v12; // al
  __int64 v14; // rax

  v3 = *(s - 1) & 7;
  switch ( v3 )
  {
    case 0u:
      v4 = (unsigned __int8)*(s - 1) >> 3;
      v5 = (unsigned __int8)v4 + 1LL;
      break;
    case 1u:
      v4 = (unsigned __int8)*(s - 3);
      v5 = v4 + 1;
      break;
    case 2u:
      v4 = *(unsigned __int16 *)(s - 5);
      v5 = v4 + 1;
      break;
    case 3u:
      v4 = *(unsigned int *)(s - 9);
      v5 = v4 + 1;
      break;
    case 4u:
      v4 = *(_QWORD *)(s - 17);
      v5 = v4 + 1;
      break;
    default:
      v5 = 1LL;
      v4 = 0LL;
      break;
  }
  v6 = 0LL;
  if ( v3 <= 4u )
    v6 = -(__int64)CSWTCH_47[v3];
  if ( v4 <= 0x1F )
  {
    v7 = 0;
    v8 = 0;
  }
  else if ( v4 <= 0xFE )
  {
    v7 = 1;
    v8 = 1;
  }
  else
  {
    v7 = 2;
    v8 = 2;
    if ( v4 > 0xFFFE )
    {
      v7 = 4 - (v4 <= 0xFFFFFFFE);
      v8 = v7;
    }
  }
  v9 = CSWTCH_47[v7];
  if ( v3 == v8 )
  {
    v14 = ((__int64 (__fastcall *)(char *, size_t, __int64, int *))hiredisAllocFns.reallocFn)(
            &s[v6],
            v9 + v5,
            v1,
            CSWTCH_47);
    if ( v14 )
    {
      v11 = (char *)(v14 + v9);
      v12 = *(v11 - 1) & 7;
LABEL_28:
      if ( v12 == 2 )
      {
LABEL_19:
        *(_WORD *)(v11 - 3) = v4;
        return v11;
      }
      if ( v12 <= 2u )
      {
        if ( v12 == 1 )
        {
LABEL_21:
          *(v11 - 2) = v4;
          return v11;
        }
      }
      else
      {
        if ( v12 == 3 )
        {
LABEL_17:
          *(_DWORD *)(v11 - 5) = v4;
          return v11;
        }
        if ( v12 == 4 )
        {
LABEL_25:
          *(_QWORD *)(v11 - 9) = v4;
          return v11;
        }
      }
      return v11;
    }
  }
  else
  {
    v10 = (char *)hiredisAllocFns.mallocFn(v9 + v5);
    if ( v10 )
    {
      v11 = &v10[v9];
      memcpy(v11, s, v5);
      hiredisAllocFns.freeFn(&s[v6]);
      *(v11 - 1) = v8;
      v12 = v8 & 7;
      switch ( v8 & 7 )
      {
        case 0:
          *(v11 - 1) = 8 * v4;
          return v11;
        case 1:
          *(v11 - 3) = v4;
          goto LABEL_21;
        case 2:
          *(_WORD *)(v11 - 5) = v4;
          goto LABEL_19;
        case 3:
          *(_DWORD *)(v11 - 9) = v4;
          goto LABEL_17;
        case 4:
          *(_QWORD *)(v11 - 17) = v4;
          goto LABEL_25;
        default:
          goto LABEL_28;
      }
    }
  }
  return 0LL;
};

// Line 314: range 000000000CAC68F0-000000000CAC6B40
void __fastcall sdsIncrLen(sds s, int incr)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int8 v4; // cl
  int v5; // eax
  __int64 v6; // rsi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // si
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // si

  switch ( *(s - 1) & 7 )
  {
    case 0:
      v4 = (unsigned __int8)*(s - 1) >> 3;
      if ( incr <= 0 )
      {
        if ( !incr || v4 < (unsigned int)-incr )
LABEL_16:
          __assert_fail(
            "(incr > 0 && oldlen+incr < 32) || (incr < 0 && oldlen >= (unsigned int)(-incr))",
            "sds.c",
            0x141u,
            "sdsIncrLen");
        v5 = incr + v4;
      }
      else
      {
        v5 = incr + v4;
        if ( v5 > 31 )
          goto LABEL_16;
      }
      *(s - 1) = 8 * (incr + v4);
      s[v5] = 0;
      return;
    case 1:
      if ( incr < 0 )
      {
        v7 = *(s - 3);
        if ( v7 < (unsigned int)-incr )
LABEL_10:
          __assert_fail(
            "(incr >= 0 && sh->alloc-sh->len >= incr) || (incr < 0 && sh->len >= (unsigned int)(-incr))",
            "sds.c",
            0x148u,
            "sdsIncrLen");
      }
      else
      {
        if ( incr > (unsigned __int8)*(s - 2) - (unsigned __int8)*(s - 3) )
          goto LABEL_10;
        v7 = *(s - 3);
      }
      v8 = v7 + incr;
      *(s - 3) = v8;
      s[v8] = 0;
      return;
    case 2:
      if ( incr < 0 )
      {
        v11 = *(_WORD *)(s - 5);
        if ( v11 < (unsigned int)-incr )
LABEL_13:
          __assert_fail(
            "(incr >= 0 && sh->alloc-sh->len >= incr) || (incr < 0 && sh->len >= (unsigned int)(-incr))",
            "sds.c",
            0x14Eu,
            "sdsIncrLen");
      }
      else
      {
        if ( incr > *(unsigned __int16 *)(s - 3) - *(unsigned __int16 *)(s - 5) )
          goto LABEL_13;
        v11 = *(_WORD *)(s - 5);
      }
      v12 = v11 + incr;
      *(_WORD *)(s - 5) = v12;
      s[v12] = 0;
      return;
    case 3:
      if ( incr < 0 )
      {
        v9 = *(_DWORD *)(s - 9);
        if ( v9 < -incr )
LABEL_4:
          __assert_fail(
            "(incr >= 0 && sh->alloc-sh->len >= (unsigned int)incr) || (incr < 0 && sh->len >= (unsigned int)(-incr))",
            "sds.c",
            0x154u,
            "sdsIncrLen");
      }
      else
      {
        if ( *(_DWORD *)(s - 5) - *(_DWORD *)(s - 9) < (unsigned int)incr )
          goto LABEL_4;
        v9 = *(_DWORD *)(s - 9);
      }
      v10 = v9 + incr;
      *(_DWORD *)(s - 9) = v10;
      s[v10] = 0;
      return;
    case 4:
      if ( incr < 0 )
      {
        if ( *(_QWORD *)(s - 17) < (unsigned __int64)-incr )
LABEL_7:
          __assert_fail(
            "(incr >= 0 && sh->alloc-sh->len >= (uint64_t)incr) || (incr < 0 && sh->len >= (uint64_t)(-incr))",
            "sds.c",
            0x15Au,
            "sdsIncrLen");
        v2 = incr;
        v3 = *(_QWORD *)(s - 17);
      }
      else
      {
        v2 = incr;
        v3 = *(_QWORD *)(s - 17);
        if ( *(_QWORD *)(s - 9) - v3 < v2 )
          goto LABEL_7;
      }
      v6 = v2 + v3;
      *(_QWORD *)(s - 17) = v6;
LABEL_20:
      s[v6] = 0;
      return;
    default:
      v6 = 0LL;
      goto LABEL_20;
  }
};

// Line 360: range 000000000CAC6B50-000000000CAC6C91
sds __fastcall sdsgrowzero(sds s, size_t len)
{
  size_t v2; // rbp
  sds result; // rax
  sds RoomFor; // rax
  char *v5; // r12

  switch ( *(s - 1) & 7 )
  {
    case 0:
      v2 = (unsigned __int8)*(s - 1) >> 3;
      goto LABEL_3;
    case 1:
      v2 = (unsigned __int8)*(s - 3);
      goto LABEL_3;
    case 2:
      v2 = *(unsigned __int16 *)(s - 5);
      goto LABEL_3;
    case 3:
      v2 = *(unsigned int *)(s - 9);
      goto LABEL_3;
    case 4:
      v2 = *(_QWORD *)(s - 17);
      result = s;
      if ( len > v2 )
        goto LABEL_6;
      return result;
    default:
      v2 = 0LL;
LABEL_3:
      result = s;
      if ( len > v2 )
      {
LABEL_6:
        RoomFor = sdsMakeRoomFor(s, len - v2);
        v5 = RoomFor;
        if ( RoomFor )
        {
          memset(&RoomFor[v2], 0, len - v2 + 1);
          switch ( *(v5 - 1) & 7 )
          {
            case 0:
              result = v5;
              *(v5 - 1) = 8 * len;
              break;
            case 1:
              *(v5 - 3) = len;
              result = v5;
              break;
            case 2:
              *(_WORD *)(v5 - 5) = len;
              result = v5;
              break;
            case 3:
              *(_DWORD *)(v5 - 9) = len;
              result = v5;
              break;
            case 4:
              *(_QWORD *)(v5 - 17) = len;
              result = v5;
              break;
            default:
              result = v5;
              break;
          }
        }
        else
        {
          return 0LL;
        }
      }
      return result;
  }
};

// Line 378: range 000000000CAC6CA0-000000000CAC6DD7
sds __fastcall sdscatlen(sds s, const void *t, size_t len)
{
  __int64 v4; // r12
  sds RoomFor; // rax
  char *v6; // rbx
  size_t v7; // rdx
  size_t v8; // rbp

  switch ( *(s - 1) & 7 )
  {
    case 0:
      v4 = (unsigned __int8)*(s - 1) >> 3;
      break;
    case 1:
      v4 = (unsigned __int8)*(s - 3);
      break;
    case 2:
      v4 = *(unsigned __int16 *)(s - 5);
      break;
    case 3:
      v4 = *(unsigned int *)(s - 9);
      break;
    case 4:
      v4 = *(_QWORD *)(s - 17);
      break;
    default:
      v4 = 0LL;
      break;
  }
  RoomFor = sdsMakeRoomFor(s, len);
  v6 = RoomFor;
  if ( !RoomFor )
    return 0LL;
  v7 = len;
  v8 = v4 + len;
  memcpy(&RoomFor[v4], t, v7);
  switch ( *(v6 - 1) & 7 )
  {
    case 0:
      *(v6 - 1) = 8 * v8;
      break;
    case 1:
      *(v6 - 3) = v8;
      break;
    case 2:
      *(_WORD *)(v6 - 5) = v8;
      break;
    case 3:
      *(_DWORD *)(v6 - 9) = v8;
      break;
    case 4:
      *(_QWORD *)(v6 - 17) = v8;
      break;
    default:
      break;
  }
  v6[v8] = 0;
  return v6;
};

// Line 393: range 000000000CAC6DE0-000000000CAC6E03
sds __fastcall sdscat(sds s, const char *t)
{
  size_t v2; // rax

  v2 = strlen(t);
  return sdscatlen(s, t, v2);
};

// Line 407: range 000000000CAC6E80-000000000CAC6FD4
sds __fastcall sdscpylen(sds s, const char *t, size_t len)
{
  char *RoomFor; // rcx
  unsigned __int8 v5; // di
  size_t v6; // rdi
  char *v7; // rcx
  sds result; // rax

  RoomFor = s;
  v5 = *(s - 1);
  switch ( v5 & 7 )
  {
    case 0:
      v6 = v5 >> 3;
      if ( len > v6 )
        break;
      goto LABEL_4;
    case 1:
      if ( len <= (unsigned __int8)*(RoomFor - 2) )
        goto LABEL_4;
      v6 = (unsigned __int8)*(RoomFor - 3);
      break;
    case 2:
      if ( len <= *(unsigned __int16 *)(RoomFor - 3) )
        goto LABEL_4;
      v6 = *(unsigned __int16 *)(RoomFor - 5);
      break;
    case 3:
      if ( len <= *(unsigned int *)(RoomFor - 5) )
        goto LABEL_4;
      v6 = *(unsigned int *)(RoomFor - 9);
      break;
    case 4:
      if ( len <= *(_QWORD *)(RoomFor - 9) )
        goto LABEL_4;
      v6 = *(_QWORD *)(RoomFor - 17);
      break;
    default:
      v6 = 0LL;
      if ( len )
        break;
      goto LABEL_4;
  }
  RoomFor = sdsMakeRoomFor(RoomFor, len - v6);
  if ( !RoomFor )
    return 0LL;
LABEL_4:
  v7 = (char *)memcpy(RoomFor, t, len);
  v7[len] = 0;
  switch ( *(v7 - 1) & 7 )
  {
    case 0:
      result = v7;
      *(v7 - 1) = 8 * len;
      break;
    case 1:
      *(v7 - 3) = len;
      result = v7;
      break;
    case 2:
      *(_WORD *)(v7 - 5) = len;
      result = v7;
      break;
    case 3:
      *(_DWORD *)(v7 - 9) = len;
      result = v7;
      break;
    case 4:
      *(_QWORD *)(v7 - 17) = len;
      result = v7;
      break;
    default:
      result = v7;
      break;
  }
  return result;
};

// Line 420: range 000000000CAC6FE0-000000000CAC7003
sds __fastcall sdscpy(sds s, const char *t)
{
  size_t v2; // rax

  v2 = strlen(t);
  return sdscpylen(s, t, v2);
};

// Line 438: range 000000000CAC7010-000000000CAC70A1
int __fastcall sdsll2str(char *s, __int64 value)
{
  char *v2; // r9
  unsigned __int64 v3; // rcx
  _BYTE *v4; // r8
  char *v5; // rdx
  int result; // eax
  char v7; // cl
  char v8; // si

  v2 = s;
  v3 = abs64(value);
  while ( 1 )
  {
    v4 = v2 + 1;
    *v2 = v3 % 0xA + 48;
    v3 /= 0xAuLL;
    if ( !v3 )
      break;
    ++v2;
  }
  if ( value < 0 )
  {
    v4 = v2 + 2;
    v2[1] = 45;
  }
  v5 = v4 - 1;
  *v4 = 0;
  for ( result = (_DWORD)v4 - (_DWORD)s; s < v5; v5[1] = v7 )
  {
    v7 = *s;
    v8 = *v5;
    ++s;
    --v5;
    *(s - 1) = v8;
  }
  return result;
};

// Line 463: range 000000000CAC70B0-000000000CAC711A
int __fastcall sdsull2str(char *s, unsigned __int64 v)
{
  char *i; // rcx
  int result; // eax
  char v4; // dl
  char v5; // si

  for ( i = s; ; ++i )
  {
    *i = v % 0xA + 48;
    v /= 0xAuLL;
    if ( !v )
      break;
  }
  i[1] = 0;
  for ( result = (_DWORD)i + 1 - (_DWORD)s; s < i; i[1] = v4 )
  {
    v4 = *s;
    v5 = *i;
    ++s;
    --i;
    *(s - 1) = v5;
  }
  return result;
};

// Line 495: range 000000000CAC7120-000000000CAC7140
sds __fastcall sdsfromlonglong(__int64 value)
{
  int v1; // eax
  char buf[21]; // [rsp+0h] [rbp-28h] BYREF

  v1 = sdsll2str(buf, value);
  return sdsnewlen(buf, v1);
};

// Line 503: range 000000000CAC7150-000000000CAC7266
sds __fastcall sdscatvprintf(sds s, const char *fmt, __va_list_tag *ap)
{
  size_t v4; // rax
  size_t v5; // rbp
  char *v6; // rbx
  char *v7; // r14
  sds result; // rax
  char *v9; // [rsp+0h] [rbp-468h]
  va_list_0 cpy; // [rsp+18h] [rbp-450h] BYREF
  char staticbuf[1024]; // [rsp+30h] [rbp-438h] BYREF

  v4 = strlen(fmt);
  v5 = 2 * v4;
  if ( 2 * v4 <= 0x400 )
  {
    v5 = 1024LL;
    v6 = staticbuf;
    goto LABEL_6;
  }
  v6 = (char *)hiredisAllocFns.mallocFn(2 * v4);
  if ( !v6 )
    return 0LL;
LABEL_6:
  while ( 1 )
  {
    v7 = &v6[v5 - 2];
    *v7 = 0;
    cpy[0] = *ap;
    vsnprintf(v6, v5, fmt, (___va_list_tag *)cpy);
    if ( !*v7 )
      break;
    if ( v6 != staticbuf )
      hiredisAllocFns.freeFn(v6);
    v5 *= 2LL;
    v6 = (char *)hiredisAllocFns.mallocFn(v5);
    if ( !v6 )
      return 0LL;
  }
  result = sdscat(s, v6);
  if ( v6 != staticbuf )
  {
    v9 = result;
    hiredisAllocFns.freeFn(v6);
    return v9;
  }
  return result;
};

// Line 556: range 000000000CAC7270-000000000CAC72FE
sds sdscatprintf(sds s, const char *fmt, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, fmt);
  return sdscatvprintf(s, fmt, (__va_list_tag *)ap);
};

// Line 581: range 000000000CAC7300-000000000CAC7B33
sds sdscatfmt(sds s, const char *fmt, ...)
{
  const char *v2; // r15
  char *RoomFor; // rbx
  unsigned __int8 v4; // al
  int v5; // r14d
  char v6; // dl
  unsigned __int8 v7; // al
  bool v8; // cc
  __int64 v9; // rax
  char v10; // al
  const char *v11; // r12
  char v12; // cl
  __int64 v13; // rdx
  unsigned int gp_offset; // edx
  const char *v15; // r13
  size_t v16; // r15
  unsigned __int8 v17; // al
  bool v18; // cc
  size_t v19; // rax
  sds result; // rax
  unsigned int v21; // edx
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rsi
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rax
  int *overflow_arg_area; // rax
  char buf[21]; // [rsp+10h] [rbp-A8h] BYREF
  va_list ap; // [rsp+30h] [rbp-88h] BYREF

  va_start(ap, fmt);
  va_arg(ap, double);
  va_arg(ap, double);
  va_arg(ap, double);
  va_arg(ap, double);
  va_arg(ap, double);
  va_arg(ap, double);
  va_arg(ap, double);
  va_arg(ap, double);
  v2 = fmt;
  RoomFor = s;
  v4 = *(s - 1);
  switch ( v4 & 7 )
  {
    case 0:
      v5 = v4 >> 3;
      break;
    case 1:
      v5 = (unsigned __int8)*(s - 3);
      break;
    case 2:
      v5 = *(unsigned __int16 *)(s - 5);
      break;
    case 3:
      v5 = *(_DWORD *)(s - 9);
      break;
    case 4:
      v5 = *(_DWORD *)(s - 17);
      break;
    default:
      v5 = 0;
      break;
  }
  v6 = *fmt;
  if ( !*fmt )
  {
LABEL_50:
    result = RoomFor;
    RoomFor[v5] = 0;
    return result;
  }
  v7 = v4 & 7;
  v8 = v7 <= 2u;
  if ( v7 == 2 )
    goto LABEL_31;
LABEL_5:
  if ( !v8 )
  {
    if ( v7 == 3 )
    {
      v9 = (unsigned int)(*(_DWORD *)(RoomFor - 5) - *(_DWORD *)(RoomFor - 9));
    }
    else
    {
      if ( v7 != 4 )
        goto LABEL_32;
      v9 = *(_QWORD *)(RoomFor - 9) - *(_QWORD *)(RoomFor - 17);
    }
LABEL_9:
    if ( !v9 )
      goto LABEL_32;
LABEL_10:
    if ( v6 != 37 )
      goto LABEL_34;
LABEL_11:
    v10 = v2[1];
    v11 = v2 + 1;
    v12 = v10 - 73;
    if ( (unsigned __int8)(v10 - 73) > 0x2Cu )
      goto LABEL_48;
    v13 = 1LL << v12;
    if ( ((1LL << v12) & 0x100000001000LL) == 0 )
    {
      if ( (v13 & 0x100000001LL) == 0 )
      {
        if ( (v13 & 0x40000000400LL) != 0 )
        {
          gp_offset = ap[0].gp_offset;
          if ( ap[0].gp_offset >= 0x30 )
          {
            v15 = *(const char **)ap[0].overflow_arg_area;
            ap[0].overflow_arg_area = (char *)ap[0].overflow_arg_area + 8;
            if ( v10 != 115 )
              goto LABEL_17;
          }
          else
          {
            ap[0].gp_offset += 8;
            v15 = *(const char **)((char *)ap[0].reg_save_area + gp_offset);
            if ( v10 != 115 )
            {
LABEL_17:
              switch ( *(v15 - 1) & 7 )
              {
                case 0:
                  v16 = (unsigned __int8)*(v15 - 1) >> 3;
                  goto LABEL_19;
                case 1:
                  v16 = *((unsigned __int8 *)v15 - 3);
                  goto LABEL_19;
                case 2:
                  v16 = *(unsigned __int16 *)(v15 - 5);
                  v17 = *(RoomFor - 1) & 7;
                  v18 = v17 <= 2u;
                  if ( v17 == 2 )
                    goto LABEL_40;
                  goto LABEL_20;
                case 3:
                  v16 = *(unsigned int *)(v15 - 9);
                  goto LABEL_19;
                case 4:
                  v16 = *(_QWORD *)(v15 - 17);
                  goto LABEL_19;
                default:
                  v16 = 0LL;
                  goto LABEL_19;
              }
            }
          }
          v16 = strlen(v15);
LABEL_19:
          v17 = *(RoomFor - 1) & 7;
          v18 = v17 <= 2u;
          if ( v17 != 2 )
          {
LABEL_20:
            if ( v18 )
            {
              if ( v17 == 1 )
              {
                v19 = (unsigned __int8)*(RoomFor - 2) - (unsigned __int8)*(RoomFor - 3);
                goto LABEL_24;
              }
            }
            else
            {
              if ( v17 == 3 )
              {
                v19 = (unsigned int)(*(_DWORD *)(RoomFor - 5) - *(_DWORD *)(RoomFor - 9));
                goto LABEL_24;
              }
              if ( v17 == 4 )
              {
                v19 = *(_QWORD *)(RoomFor - 9) - *(_QWORD *)(RoomFor - 17);
LABEL_24:
                if ( v16 <= v19 || (RoomFor = sdsMakeRoomFor(RoomFor, v16)) != 0LL )
                {
                  memcpy(&RoomFor[v5], v15, v16);
                  switch ( *(RoomFor - 1) & 7 )
                  {
                    case 0:
                      *(RoomFor - 1) = 8 * (((unsigned __int8)*(RoomFor - 1) >> 3) + v16);
                      break;
                    case 1:
                      *(RoomFor - 3) += v16;
                      break;
                    case 2:
                      *(_WORD *)(RoomFor - 5) += v16;
                      break;
                    case 3:
                      goto LABEL_27;
                    case 4:
                      *(_QWORD *)(RoomFor - 17) += v16;
                      break;
                    default:
                      break;
                  }
LABEL_28:
                  v5 += v16;
                  goto LABEL_29;
                }
                return 0LL;
              }
            }
            v19 = 0LL;
            goto LABEL_24;
          }
LABEL_40:
          v19 = *(unsigned __int16 *)(RoomFor - 3) - *(unsigned __int16 *)(RoomFor - 5);
          goto LABEL_24;
        }
LABEL_48:
        RoomFor[v5] = v10;
        switch ( *(RoomFor - 1) & 7 )
        {
          case 0:
            ++v5;
            *(RoomFor - 1) = 8 * ((unsigned __int8)*(RoomFor - 1) >> 3) + 8;
            goto LABEL_29;
          case 1:
            ++*(RoomFor - 3);
            ++v5;
            goto LABEL_29;
          case 2:
            ++*(_WORD *)(RoomFor - 5);
            ++v5;
            goto LABEL_29;
          case 3:
            ++*(_DWORD *)(RoomFor - 9);
            ++v5;
            v2 += 2;
            v6 = v11[1];
            if ( !v6 )
              goto LABEL_50;
            goto LABEL_30;
          case 4:
            ++*(_QWORD *)(RoomFor - 17);
            ++v5;
            goto LABEL_29;
          default:
            ++v5;
            goto LABEL_29;
        }
      }
      if ( v10 == 105 )
      {
        if ( ap[0].gp_offset >= 0x30 )
        {
          overflow_arg_area = (int *)ap[0].overflow_arg_area;
          ap[0].overflow_arg_area = (char *)ap[0].overflow_arg_area + 8;
        }
        else
        {
          overflow_arg_area = (int *)((char *)ap[0].reg_save_area + ap[0].gp_offset);
          ap[0].gp_offset += 8;
        }
        v28 = *overflow_arg_area;
      }
      else
      {
        if ( ap[0].gp_offset >= 0x30 )
        {
          v27 = (__int64 *)ap[0].overflow_arg_area;
          ap[0].overflow_arg_area = (char *)ap[0].overflow_arg_area + 8;
        }
        else
        {
          v27 = (__int64 *)((char *)ap[0].reg_save_area + ap[0].gp_offset);
          ap[0].gp_offset += 8;
        }
        v28 = *v27;
      }
      LODWORD(v16) = sdsll2str(buf, v28);
      v24 = (int)v16;
      v29 = *(RoomFor - 1) & 7;
      if ( v29 == 2 )
      {
        v30 = *(unsigned __int16 *)(RoomFor - 3) - *(unsigned __int16 *)(RoomFor - 5);
        goto LABEL_88;
      }
      if ( v29 <= 2u )
      {
        if ( v29 == 1 )
        {
          v30 = (unsigned __int8)*(RoomFor - 2) - (unsigned __int8)*(RoomFor - 3);
          goto LABEL_88;
        }
      }
      else
      {
        if ( v29 == 3 )
        {
          v30 = (unsigned int)(*(_DWORD *)(RoomFor - 5) - *(_DWORD *)(RoomFor - 9));
          goto LABEL_88;
        }
        if ( v29 == 4 )
        {
          v30 = *(_QWORD *)(RoomFor - 9) - *(_QWORD *)(RoomFor - 17);
LABEL_88:
          if ( (int)v16 <= v30 || (RoomFor = sdsMakeRoomFor(RoomFor, (int)v16)) != 0LL )
          {
            memcpy(&RoomFor[v5], buf, (int)v16);
            switch ( *(RoomFor - 1) & 7 )
            {
              case 0:
                *(RoomFor - 1) = 8 * (((unsigned __int8)*(RoomFor - 1) >> 3) + v16);
                break;
              case 1:
                goto LABEL_76;
              case 2:
                goto LABEL_75;
              case 3:
                goto LABEL_27;
              case 4:
                goto LABEL_77;
              default:
                goto LABEL_28;
            }
            goto LABEL_28;
          }
          return 0LL;
        }
      }
      v30 = 0LL;
      goto LABEL_88;
    }
    v21 = ap[0].gp_offset;
    if ( v10 == 117 )
    {
      if ( ap[0].gp_offset >= 0x30 )
      {
        v23 = *(unsigned int *)ap[0].overflow_arg_area;
        ap[0].overflow_arg_area = (char *)ap[0].overflow_arg_area + 8;
      }
      else
      {
        ap[0].gp_offset += 8;
        v23 = *(unsigned int *)((char *)ap[0].reg_save_area + v21);
      }
    }
    else
    {
      if ( ap[0].gp_offset >= 0x30 )
      {
        v22 = (unsigned __int64 *)ap[0].overflow_arg_area;
        ap[0].overflow_arg_area = (char *)ap[0].overflow_arg_area + 8;
      }
      else
      {
        v22 = (unsigned __int64 *)((char *)ap[0].reg_save_area + ap[0].gp_offset);
        ap[0].gp_offset += 8;
      }
      v23 = *v22;
    }
    LODWORD(v16) = sdsull2str(buf, v23);
    v24 = (int)v16;
    v25 = *(RoomFor - 1) & 7;
    if ( v25 == 2 )
    {
      v26 = *(unsigned __int16 *)(RoomFor - 3) - *(unsigned __int16 *)(RoomFor - 5);
      goto LABEL_72;
    }
    if ( v25 <= 2u )
    {
      if ( v25 == 1 )
      {
        v26 = (unsigned __int8)*(RoomFor - 2) - (unsigned __int8)*(RoomFor - 3);
        goto LABEL_72;
      }
    }
    else
    {
      if ( v25 == 3 )
      {
        v26 = (unsigned int)(*(_DWORD *)(RoomFor - 5) - *(_DWORD *)(RoomFor - 9));
        goto LABEL_72;
      }
      if ( v25 == 4 )
      {
        v26 = *(_QWORD *)(RoomFor - 9) - *(_QWORD *)(RoomFor - 17);
LABEL_72:
        if ( (int)v16 <= v26 || (RoomFor = sdsMakeRoomFor(RoomFor, (int)v16)) != 0LL )
        {
          memcpy(&RoomFor[v5], buf, (int)v16);
          switch ( *(RoomFor - 1) & 7 )
          {
            case 0:
              *(RoomFor - 1) = 8 * (((unsigned __int8)*(RoomFor - 1) >> 3) + v16);
              break;
            case 1:
LABEL_76:
              *(RoomFor - 3) += v24;
              break;
            case 2:
LABEL_75:
              *(_WORD *)(RoomFor - 5) += v24;
              break;
            case 3:
LABEL_27:
              *(_DWORD *)(RoomFor - 9) += v16;
              break;
            case 4:
LABEL_77:
              *(_QWORD *)(RoomFor - 17) += v24;
              break;
            default:
              goto LABEL_28;
          }
          goto LABEL_28;
        }
        return 0LL;
      }
    }
    v26 = 0LL;
    goto LABEL_72;
  }
  if ( v7 == 1 )
  {
    v9 = (unsigned __int8)*(RoomFor - 2) - (unsigned __int8)*(RoomFor - 3);
    goto LABEL_9;
  }
LABEL_32:
  while ( 1 )
  {
    RoomFor = sdsMakeRoomFor(RoomFor, 1uLL);
    if ( !RoomFor )
      return 0LL;
    v6 = *v2;
    if ( *v2 == 37 )
      goto LABEL_11;
LABEL_34:
    RoomFor[v5] = v6;
    switch ( *(RoomFor - 1) & 7 )
    {
      case 0:
        ++v5;
        v11 = v2;
        *(RoomFor - 1) = 8 * ((unsigned __int8)*(RoomFor - 1) >> 3) + 8;
        break;
      case 1:
        ++*(RoomFor - 3);
        ++v5;
        v11 = v2;
        break;
      case 2:
        ++*(_WORD *)(RoomFor - 5);
        ++v5;
        v11 = v2;
        break;
      case 3:
        ++*(_DWORD *)(RoomFor - 9);
        ++v5;
        v11 = v2;
        break;
      case 4:
        ++*(_QWORD *)(RoomFor - 17);
        ++v5;
        v11 = v2;
        break;
      default:
        ++v5;
        v11 = v2;
        break;
    }
LABEL_29:
    v6 = v11[1];
    v2 = v11 + 1;
    if ( !v6 )
      goto LABEL_50;
LABEL_30:
    v7 = *(RoomFor - 1) & 7;
    v8 = v7 <= 2u;
    if ( v7 != 2 )
      goto LABEL_5;
LABEL_31:
    if ( *(unsigned __int16 *)(RoomFor - 3) != *(unsigned __int16 *)(RoomFor - 5) )
      goto LABEL_10;
  }
};

// Line 691: range 000000000CAC7B40-000000000CAC7CF2
sds __fastcall sdstrim(sds s, const char *cset)
{
  __int64 v2; // rbp
  bool v3; // cf
  char *v4; // rbp
  sds v5; // rbx
  size_t v6; // r12
  sds result; // rax

  v2 = -1LL;
  switch ( *(s - 1) & 7 )
  {
    case 0:
      v2 = ((unsigned __int8)*(s - 1) >> 3) - 1LL;
      break;
    case 1:
      v2 = (unsigned __int8)*(s - 3) - 1LL;
      break;
    case 2:
      v2 = *(unsigned __int16 *)(s - 5) - 1LL;
      break;
    case 3:
      v2 = *(unsigned int *)(s - 9) - 1LL;
      break;
    case 4:
      v2 = *(_QWORD *)(s - 17) - 1LL;
      break;
    default:
      break;
  }
  v3 = __CFADD__(s, v2);
  v4 = &s[v2];
  v5 = s;
  if ( !v3 )
  {
    do
    {
      if ( !strchr(cset, *v5) )
        break;
      ++v5;
    }
    while ( v4 >= v5 );
  }
  if ( v5 < v4 )
  {
    while ( strchr(cset, *v4) )
    {
      if ( --v4 == v5 )
        goto LABEL_17;
    }
  }
  v6 = 0LL;
  if ( v5 <= v4 )
LABEL_17:
    v6 = v4 - v5 + 1;
  if ( s != v5 )
    memmove(s, v5, v6);
  s[v6] = 0;
  switch ( *(s - 1) & 7 )
  {
    case 0:
      *(s - 1) = 8 * v6;
      goto LABEL_16;
    case 1:
      *(s - 3) = v6;
      result = s;
      break;
    case 2:
      *(_WORD *)(s - 5) = v6;
      result = s;
      break;
    case 3:
      *(_DWORD *)(s - 9) = v6;
      result = s;
      break;
    case 4:
      *(_QWORD *)(s - 17) = v6;
      result = s;
      break;
    default:
LABEL_16:
      result = s;
      break;
  }
  return result;
};

// Line 726: range 000000000CAC7D00-000000000CAC7ED8
int __fastcall sdsrange(sds s, ssize_t start, ssize_t end)
{
  _BYTE *v3; // rcx
  unsigned __int8 v4; // di
  ssize_t v5; // rdi
  int result; // eax
  size_t v7; // rbx
  ssize_t v8; // rdi
  unsigned __int8 v9; // al

  v3 = s;
  v4 = *(s - 1);
  switch ( v4 & 7 )
  {
    case 0:
      v5 = v4 >> 3;
      goto LABEL_3;
    case 1:
      v5 = (unsigned __int8)*(v3 - 3);
      goto LABEL_3;
    case 2:
      v5 = *(unsigned __int16 *)(v3 - 5);
      goto LABEL_3;
    case 3:
      v5 = *(unsigned int *)(v3 - 9);
      goto LABEL_3;
    case 4:
      v5 = *(_QWORD *)(v3 - 17);
LABEL_3:
      if ( v5 < 0 )
        return -1;
      result = 0;
      if ( !v5 )
        return result;
      if ( start >= 0 )
      {
        if ( end >= 0 )
          goto LABEL_7;
        goto LABEL_27;
      }
      start += v5;
      if ( start < 0 )
        start = 0LL;
      if ( end < 0 )
      {
LABEL_27:
        end += v5;
        if ( end < 0 )
          end = 0LL;
      }
LABEL_7:
      v7 = 0LL;
      if ( start > end )
        goto LABEL_12;
      v7 = end - start + 1;
      if ( end - start == -1 )
        goto LABEL_12;
      if ( start < v5 )
      {
        if ( end >= v5 )
        {
          v8 = v5 - 1;
          v7 = 0LL;
          if ( start > v8 )
          {
LABEL_12:
            v3[v7] = 0;
            v9 = *(v3 - 1) & 7;
            goto LABEL_13;
          }
          v7 = v8 - start + 1;
        }
        if ( v7 && start )
          v3 = memmove(v3, &v3[start], v7);
        goto LABEL_12;
      }
      v7 = 0LL;
      *v3 = 0;
      v9 = *(v3 - 1) & 7;
      if ( v9 > 4u )
        return 0;
LABEL_13:
      switch ( v9 )
      {
        case 0u:
          result = 0;
          *(v3 - 1) = 8 * v7;
          break;
        case 1u:
          *(v3 - 3) = v7;
          result = 0;
          break;
        case 2u:
          *(_WORD *)(v3 - 5) = v7;
          result = 0;
          break;
        case 3u:
          *(_DWORD *)(v3 - 9) = v7;
          result = 0;
          break;
        case 4u:
          *(_QWORD *)(v3 - 17) = v7;
          result = 0;
          break;
        default:
          return 0;
      }
      return result;
    default:
      return 0;
  }
};

// Line 757: range 000000000CAC7EE0-000000000CAC7F74
void __fastcall sdstolower(sds s)
{
  int v1; // ebp
  const __int32_t **v2; // rax
  char *v3; // rsi
  __int64 v4; // rcx

  switch ( *(s - 1) & 7 )
  {
    case 0:
      v1 = (unsigned __int8)*(s - 1) >> 3;
      goto LABEL_3;
    case 1:
      v1 = (unsigned __int8)*(s - 3);
      goto LABEL_3;
    case 2:
      v1 = *(unsigned __int16 *)(s - 5);
      goto LABEL_3;
    case 3:
      v1 = *(_DWORD *)(s - 9);
      goto LABEL_3;
    case 4:
      v1 = *(_DWORD *)(s - 17);
LABEL_3:
      if ( v1 > 0 )
      {
        v2 = __ctype_tolower_loc();
        v3 = &s[v1 - 1 + 1];
        do
        {
          v4 = *s++;
          *(s - 1) = (*v2)[v4];
        }
        while ( s != v3 );
      }
      break;
    default:
      return;
  }
};

// Line 764: range 000000000CAC7F80-000000000CAC8014
void __fastcall sdstoupper(sds s)
{
  int v1; // ebp
  const __int32_t **v2; // rax
  char *v3; // rsi
  __int64 v4; // rcx

  switch ( *(s - 1) & 7 )
  {
    case 0:
      v1 = (unsigned __int8)*(s - 1) >> 3;
      goto LABEL_3;
    case 1:
      v1 = (unsigned __int8)*(s - 3);
      goto LABEL_3;
    case 2:
      v1 = *(unsigned __int16 *)(s - 5);
      goto LABEL_3;
    case 3:
      v1 = *(_DWORD *)(s - 9);
      goto LABEL_3;
    case 4:
      v1 = *(_DWORD *)(s - 17);
LABEL_3:
      if ( v1 > 0 )
      {
        v2 = __ctype_toupper_loc();
        v3 = &s[v1 - 1 + 1];
        do
        {
          v4 = *s++;
          *(s - 1) = (*v2)[v4];
        }
        while ( s != v3 );
      }
      break;
    default:
      return;
  }
};

// Line 781: range 000000000CAC8020-000000000CAC812B
int __fastcall sdscmp(const sds s1, const sds s2)
{
  size_t v2; // rbx
  unsigned __int8 v3; // bp
  char v4; // al
  size_t v5; // rbp
  size_t v6; // rdx
  int result; // eax

  switch ( *(s1 - 1) & 7 )
  {
    case 0:
      v2 = (unsigned __int8)*(s1 - 1) >> 3;
      goto LABEL_3;
    case 1:
      v2 = (unsigned __int8)*(s1 - 3);
      goto LABEL_3;
    case 2:
      v2 = *(unsigned __int16 *)(s1 - 5);
      goto LABEL_3;
    case 3:
      v2 = *(unsigned int *)(s1 - 9);
      goto LABEL_3;
    case 4:
      v3 = *(s2 - 1);
      v2 = *(_QWORD *)(s1 - 17);
      v4 = v3 & 7;
      if ( (v3 & 7u) <= 4 )
        goto LABEL_4;
LABEL_16:
      LODWORD(v5) = 0;
      return v2 - v5;
    default:
      v2 = 0LL;
LABEL_3:
      v3 = *(s2 - 1);
      v4 = v3 & 7;
LABEL_4:
      switch ( v4 )
      {
        case 0:
          v5 = v3 >> 3;
          break;
        case 1:
          v5 = (unsigned __int8)*(s2 - 3);
          break;
        case 2:
          v5 = *(unsigned __int16 *)(s2 - 5);
          break;
        case 3:
          v5 = *(unsigned int *)(s2 - 9);
          break;
        case 4:
          v5 = *(_QWORD *)(s2 - 17);
          break;
        default:
          goto LABEL_16;
      }
      v6 = v2;
      if ( v5 <= v2 )
        v6 = v5;
      result = memcmp(s1, s2, v6);
      if ( !result )
        return v2 - v5;
      return result;
  }
};

// Line 809: range 000000000CAC8130-000000000CAC83E4
sds *__fastcall sdssplitlen(const char *s, int len, const char *sep, int seplen, int *count)
{
  sds *v6; // r14
  int v7; // r15d
  __int64 v8; // rbp
  int v9; // ebx
  int v10; // r12d
  sds v11; // rax
  sds *v12; // rax
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // r12
  sds v17; // rax
  char *v18; // rdi
  int v19; // r12d
  sds *v20; // rax
  sds v21; // rax
  int slots; // [rsp+8h] [rbp-60h]
  int slotsa; // [rsp+8h] [rbp-60h]
  int v25; // [rsp+Ch] [rbp-5Ch]

  if ( seplen <= 0 )
    return 0LL;
  if ( len < 0 )
    return 0LL;
  v6 = (sds *)hiredisAllocFns.mallocFn(0x28uLL);
  if ( !v6 )
    return 0LL;
  if ( !len )
  {
    *count = 0;
    return v6;
  }
  v25 = len - seplen + 1;
  if ( v25 <= 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    LODWORD(v8) = 0;
    v9 = 0;
  }
  else
  {
    v7 = 0;
    if ( seplen == 1 )
    {
      v8 = 0LL;
      v9 = 0;
      v19 = 1;
      slotsa = 5;
      while ( 1 )
      {
        if ( s[v7] == *sep )
        {
          v21 = sdsnewlen(&s[v8], v7 - (int)v8);
          v6[v9] = v21;
          if ( !v21 )
            goto cleanup;
          ++v7;
          v9 = v19;
          v8 = v7;
        }
        else
        {
          ++v7;
        }
        if ( v7 >= v25 )
          goto LABEL_19;
        v19 = v9 + 1;
        if ( slotsa <= v9 + 1 )
        {
          slotsa *= 2;
          v20 = (sds *)hiredisAllocFns.reallocFn(v6, 8LL * slotsa);
          if ( !v20 )
            goto cleanup;
          v6 = v20;
        }
      }
    }
    LODWORD(v8) = 0;
    v9 = 0;
    v10 = 1;
    slots = 5;
    while ( 1 )
    {
      if ( !memcmp(&s[v7], sep, seplen) )
      {
        v11 = sdsnewlen(&s[(int)v8], v7 - (int)v8);
        v6[v9] = v11;
        if ( !v11 )
          goto cleanup;
        v9 = v10;
        LODWORD(v8) = v7 + seplen;
        v7 = v7 + seplen - 1;
      }
      if ( ++v7 >= v25 )
        break;
      v10 = v9 + 1;
      if ( v9 + 1 >= slots )
      {
        slots *= 2;
        v12 = (sds *)hiredisAllocFns.reallocFn(v6, 8LL * slots);
        if ( !v12 )
          goto cleanup;
        v6 = v12;
      }
    }
LABEL_19:
    v15 = (int)v8;
    v16 = v9;
  }
  v17 = sdsnewlen(&s[v15], len - (int)v8);
  v6[v16] = v17;
  if ( !v17 )
  {
cleanup:
    v14 = 0LL;
    if ( v9 )
    {
      do
      {
        v18 = v6[v14++];
        sdsfree(v18);
      }
      while ( v9 > (int)v14 );
    }
    hiredisAllocFns.freeFn(v6);
    *count = 0;
    return 0LL;
  }
  *count = v9 + 1;
  return v6;
};

// Line 859: range 000000000CAC83F0-000000000CAC845A
void __fastcall sdsfreesplitres(sds *tokens, int count)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rbx
  sds *v5; // r12
  unsigned __int64 v6; // rbp
  char *v7; // rdi

  if ( tokens )
  {
    v3 = count - 1;
    if ( count )
    {
      v4 = 0LL;
      v5 = &tokens[v3];
      v6 = 8 * ~(unsigned __int64)v3;
      do
      {
        v7 = v5[v4 / 8];
        v4 -= 8LL;
        sdsfree(v7);
      }
      while ( v4 != v6 );
    }
    hiredisAllocFns.freeFn(tokens);
  }
};

// Line 872: range 000000000CAC8460-000000000CAC8604
sds __fastcall sdscatrepr(sds s, const char *p, size_t len)
{
  char *v5; // rdi
  char v6; // bl

  v5 = sdscatlen(s, "\"", 1uLL);
  if ( len )
  {
    while ( 1 )
    {
      v6 = *p;
      if ( *p == 10 )
        break;
      if ( v6 <= 10 )
      {
        if ( v6 == 8 )
        {
          v5 = sdscatlen(v5, &unk_1A0D78AF, 2uLL);
        }
        else if ( v6 > 8 )
        {
          v5 = sdscatlen(v5, &unk_1A0D78A9, 2uLL);
        }
        else
        {
          if ( v6 != 7 )
            goto LABEL_17;
          v5 = sdscatlen(v5, &unk_1A0D78AC, 2uLL);
        }
LABEL_7:
        ++p;
        if ( !--len )
          return sdscatlen(v5, "\"", 1uLL);
      }
      else
      {
        if ( v6 == 34 || v6 == 92 )
        {
          v5 = sdscatprintf(v5, off_1A0D78A5, (unsigned int)v6);
          goto LABEL_7;
        }
        if ( v6 != 13 )
        {
LABEL_17:
          if ( ((*__ctype_b_loc())[v6] & 0x4000) != 0 )
            v5 = sdscatprintf(v5, "%c", (unsigned int)v6);
          else
            v5 = sdscatprintf(v5, "\\x%02x", (unsigned __int8)v6);
          goto LABEL_7;
        }
        ++p;
        --len;
        v5 = sdscatlen(v5, "\\r", 2uLL);
        if ( !len )
          return sdscatlen(v5, "\"", 1uLL);
      }
    }
    v5 = sdscatlen(v5, "\\n", 2uLL);
    goto LABEL_7;
  }
  return sdscatlen(v5, "\"", 1uLL);
};

// Line 899: range 000000000CAC8610-000000000CAC862A
int __fastcall hex_digit_to_int(char c)
{
  unsigned __int8 v1; // di
  int result; // eax

  v1 = c - 49;
  result = 0;
  if ( v1 <= 0x35u )
    return *((char *)&CSWTCH_82 + v1);
  return result;
};

// Line 940: range 000000000CAC8630-000000000CAC8A23
sds *__fastcall sdssplitargs(const char *line, int *argc)
{
  __int64 v3; // rbx
  sds *result; // rax
  const unsigned __int16 **v5; // r13
  int v6; // ebx
  char *v7; // r14
  int v8; // r15d
  char v9; // al
  sds v10; // rax
  char v11; // cl
  int v12; // edx
  char v13; // al
  sds v14; // rax
  char **v15; // rax
  int v16; // edx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  sds v20; // rax
  char v21; // al
  const char *v22; // r15
  sds v23; // rax
  __int64 v24; // rax
  sds v25; // rax
  __int64 v26; // rax
  char v27; // cl
  char v28; // r15
  sds v29; // rax
  char **vector; // [rsp+0h] [rbp-58h]
  unsigned __int8 byte[72]; // [rsp+10h] [rbp-48h] BYREF

  *argc = 0;
  vector = 0LL;
  while ( 1 )
  {
LABEL_2:
    v3 = *line;
    if ( !(_BYTE)v3 )
    {
      result = vector;
      if ( !vector )
        return (sds *)hiredisAllocFns.mallocFn(8uLL);
      return result;
    }
    v5 = __ctype_b_loc();
    if ( ((*v5)[v3] & 0x2000) == 0 )
      break;
    ++line;
  }
  v6 = 0;
  v7 = sdsempty();
  v8 = 0;
  do
  {
    while ( 1 )
    {
      if ( v8 )
      {
        v9 = *line;
        if ( *line != 92 )
        {
          if ( v9 == 34 )
          {
            v24 = line[1];
            if ( (_BYTE)v24 && ((*v5)[v24] & 0x2000) == 0 )
            {
LABEL_25:
              while ( 1 )
              {
                v17 = *argc;
                v18 = *argc - 1;
                *argc = v18;
                if ( !v17 )
                  break;
                sdsfree(vector[v18]);
              }
              hiredisAllocFns.freeFn(vector);
              if ( v7 )
                sdsfree(v7);
              *argc = 0;
              return 0LL;
            }
            v8 = 1;
            goto LABEL_47;
          }
          if ( !v9 )
            goto LABEL_25;
          goto LABEL_11;
        }
        v21 = line[1];
        if ( v21 == 120 )
        {
          v27 = line[2];
          if ( ((*v5)[v27] & 0x1000) != 0 && ((*v5)[line[3]] & 0x1000) != 0 )
          {
            line += 3;
            v28 = 16 * hex_digit_to_int(v27);
            byte[0] = v28 + hex_digit_to_int(*line);
            v8 = 1;
            v29 = sdscatlen(v7, byte, 1uLL);
            v11 = *line;
            v7 = v29;
            v12 = 0;
            goto LABEL_12;
          }
          v22 = line + 1;
LABEL_56:
          byte[0] = line[1];
        }
        else
        {
          if ( !v21 )
          {
LABEL_11:
            v10 = sdscatlen(v7, line, 1uLL);
            v11 = *line;
            v7 = v10;
            v12 = 0;
            v8 = 1;
            goto LABEL_12;
          }
          v22 = line + 1;
          switch ( v21 )
          {
            case 'a':
              byte[0] = 7;
              break;
            case 'b':
              byte[0] = 8;
              break;
            case 'n':
              byte[0] = 10;
              break;
            case 'r':
              byte[0] = 13;
              break;
            case 't':
              byte[0] = 9;
              break;
            default:
              goto LABEL_56;
          }
        }
        v23 = sdscatlen(v7, byte, 1uLL);
        v11 = line[1];
        v7 = v23;
        line = v22;
        v12 = 0;
        v8 = 1;
        goto LABEL_12;
      }
      if ( !v6 )
      {
        v11 = *line;
        if ( *line <= 0x27u )
        {
          v12 = 1;
          v19 = 1LL << v11;
          if ( ((1LL << v11) & 0x100002601LL) != 0 )
            goto LABEL_12;
          if ( (v19 & 0x8000000000LL) != 0 )
          {
            v12 = 0;
            v6 = 1;
            goto LABEL_12;
          }
          if ( (v19 & 0x400000000LL) != 0 )
          {
            v12 = 0;
            v8 = 1;
            goto LABEL_12;
          }
        }
        v20 = sdscatlen(v7, line, 1uLL);
        v11 = *line;
        v7 = v20;
        v12 = 0;
        goto LABEL_12;
      }
      v13 = *line;
      if ( *line == 92 )
      {
        if ( line[1] != 39 )
          goto LABEL_19;
        v25 = sdscatlen(v7, "'", 1uLL);
        v11 = line[1];
        v7 = v25;
        ++line;
        v12 = 0;
        v6 = 1;
LABEL_12:
        if ( v11 )
          goto LABEL_20;
        goto LABEL_13;
      }
      if ( v13 == 39 )
        break;
      if ( !v13 )
        goto LABEL_25;
LABEL_19:
      v14 = sdscatlen(v7, line, 1uLL);
      v12 = 0;
      v7 = v14;
      v6 = 1;
      if ( *line )
      {
LABEL_20:
        ++line;
        goto LABEL_21;
      }
LABEL_13:
      if ( v12 )
        goto LABEL_22;
    }
    v26 = line[1];
    if ( (_BYTE)v26 && ((*v5)[v26] & 0x2000) == 0 )
      goto LABEL_25;
    v6 = 1;
LABEL_47:
    v12 = 1;
    ++line;
LABEL_21:
    ;
  }
  while ( !v12 );
LABEL_22:
  v15 = (char **)hiredisAllocFns.reallocFn(vector, 8LL * (*argc + 1));
  if ( v15 )
  {
    vector = v15;
    v16 = *argc + 1;
    v15[*argc] = v7;
    *argc = v16;
    goto LABEL_2;
  }
  hiredisAllocFns.freeFn(vector);
  return 0LL;
};

// Line 1083: range 000000000CAC8AE0-000000000CAC8B38
sds __fastcall sdsjoin(char **argv, int argc, char *sep)
{
  sds result; // rax
  int i; // ebx

  result = sdsempty();
  if ( argc > 0 )
  {
    for ( i = 0; i != argc; ++i )
    {
      result = sdscat(result, *argv);
      if ( i != argc - 1 )
        result = sdscat(result, sep);
      ++argv;
    }
  }
  return result;
};

// Line 1095: range 000000000CAC8B40-000000000CAC8BA9
sds __fastcall sdsjoinsds(sds *argv, int argc, const char *sep, size_t seplen)
{
  sds result; // rax
  int i; // ebx

  result = sdsempty();
  if ( argc > 0 )
  {
    for ( i = 0; i != argc; ++i )
    {
      result = sdscatsds(result, *argv);
      if ( i != argc - 1 )
        result = sdscatlen(result, sep, seplen);
      ++argv;
    }
  }
  return result;
};
