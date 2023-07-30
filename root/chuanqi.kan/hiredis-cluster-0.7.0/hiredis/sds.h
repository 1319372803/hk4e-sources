// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/sds.h

// Line 92: range 000000000CAC6E10-000000000CAC6E7B
sds __fastcall sdscatsds(sds s, const sds t)
{
  size_t v2; // rdx

  switch ( *(t - 1) & 7 )
  {
    case 0:
      v2 = (unsigned __int8)*(t - 1) >> 3;
      break;
    case 1:
      v2 = (unsigned __int8)*(t - 3);
      break;
    case 2:
      v2 = *(unsigned __int16 *)(t - 5);
      break;
    case 3:
      v2 = *(unsigned int *)(t - 9);
      break;
    case 4:
      v2 = *(_QWORD *)(t - 17);
      break;
    default:
      v2 = 0LL;
      break;
  }
  return sdscatlen(s, t, v2);
};

// Line 92: range 000000000CAC6060-000000000CAC60CB
sds __fastcall sdsdup(const sds s)
{
  size_t v1; // rsi

  switch ( *(s - 1) & 7 )
  {
    case 0:
      v1 = (unsigned __int8)*(s - 1) >> 3;
      break;
    case 1:
      v1 = (unsigned __int8)*(s - 3);
      break;
    case 2:
      v1 = *(unsigned __int16 *)(s - 5);
      break;
    case 3:
      v1 = *(unsigned int *)(s - 9);
      break;
    case 4:
      v1 = *(_QWORD *)(s - 17);
      break;
    default:
      v1 = 0LL;
      break;
  }
  return sdsnewlen(s, v1);
};

// Line 92: range 000000000CAC8A30-000000000CAC8AD6
sds __fastcall sdsmapchars(sds s, const char *from, const char *to, size_t setlen)
{
  sds result; // rax
  sds v5; // r10
  __int64 v6; // r11
  char *v7; // r11
  __int64 v8; // r8

  result = s;
  switch ( *(s - 1) & 7 )
  {
    case 0:
      v6 = (unsigned __int8)*(s - 1) >> 3;
      goto LABEL_6;
    case 1:
      v6 = (unsigned __int8)*(s - 3);
      goto LABEL_6;
    case 2:
      v6 = *(unsigned __int16 *)(s - 5);
      goto LABEL_6;
    case 3:
      v6 = *(unsigned int *)(s - 9);
      goto LABEL_6;
    case 4:
      v6 = *(_QWORD *)(s - 17);
LABEL_6:
      if ( !v6 )
        return result;
      v5 = s;
      v7 = &s[v6];
      break;
    default:
      return result;
  }
  do
  {
    while ( 1 )
    {
      if ( !setlen )
        goto LABEL_3;
      v8 = 0LL;
      if ( *v5 != *from )
        break;
LABEL_2:
      *v5 = to[v8];
LABEL_3:
      if ( ++v5 == v7 )
        return result;
    }
    while ( ++v8 != setlen )
    {
      if ( from[v8] == *v5 )
        goto LABEL_2;
    }
    ++v5;
  }
  while ( v5 != v7 );
  return result;
};

// Line 92: range 000000000CAB7910-000000000CAB7960
size_t __fastcall sdslen(const sds s)
{
  size_t result; // rax

  switch ( *(s - 1) & 7 )
  {
    case 0:
      result = (unsigned __int8)*(s - 1) >> 3;
      break;
    case 1:
      result = (unsigned __int8)*(s - 3);
      break;
    case 2:
      result = *(unsigned __int16 *)(s - 5);
      break;
    case 3:
      result = *(unsigned int *)(s - 9);
      break;
    case 4:
      result = *(_QWORD *)(s - 17);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
};

// Line 92: range 000000000CAC9000-000000000CAC90A5
unsigned int __fastcall callbackHash(const void *key)
{
  int v1; // eax
  unsigned int v2; // edx
  char *v3; // rsi
  unsigned int result; // eax

  switch ( *((char *)key - 1) & 7 )
  {
    case 0:
      v1 = (unsigned __int8)*((char *)key - 1) >> 3;
      v2 = v1 - 1;
      goto LABEL_3;
    case 1:
      v1 = (unsigned __int8)*((char *)key - 3);
      v2 = v1 - 1;
      goto LABEL_3;
    case 2:
      v1 = *(unsigned __int16 *)((char *)key - 5);
      v2 = v1 - 1;
      goto LABEL_3;
    case 3:
      v1 = *(_DWORD *)((char *)key - 9);
      v2 = v1 - 1;
      goto LABEL_3;
    case 4:
      v1 = *(_QWORD *)((char *)key - 17);
      v2 = v1 - 1;
LABEL_3:
      if ( !v1 )
        goto LABEL_11;
      v3 = (char *)key + v2 + 1;
      result = 5381;
      do
      {
        key = (char *)key + 1;
        result += 32 * result + (unsigned __int8)*((char *)key - 1);
      }
      while ( key != v3 );
      break;
    default:
LABEL_11:
      result = 5381;
      break;
  }
  return result;
};

// Line 92: range 000000000CAB7CE0-000000000CAB7D4B
unsigned int __fastcall dictSdsHash(const void *key)
{
  int v1; // esi

  switch ( *((char *)key - 1) & 7 )
  {
    case 0:
      v1 = (unsigned __int8)*((char *)key - 1) >> 3;
      break;
    case 1:
      v1 = (unsigned __int8)*((char *)key - 3);
      break;
    case 2:
      v1 = *(unsigned __int16 *)((char *)key - 5);
      break;
    case 3:
      v1 = *(_DWORD *)((char *)key - 9);
      break;
    case 4:
      v1 = *(_DWORD *)((char *)key - 17);
      break;
    default:
      v1 = 0;
      break;
  }
  return dictGenHashFunction((const unsigned __int8 *)key, v1);
};

// Line 136: range 000000000CAC6190-000000000CAC61F9
void __fastcall sdsclear(sds s)
{
  switch ( *(s - 1) & 7 )
  {
    case 0:
      *(s - 1) = 0;
      goto LABEL_3;
    case 1:
      *(s - 3) = 0;
      *s = 0;
      break;
    case 2:
      *s = 0;
      *(_WORD *)(s - 5) = 0;
      break;
    case 3:
      *(_DWORD *)(s - 9) = 0;
      *s = 0;
      break;
    case 4:
      *(_QWORD *)(s - 17) = 0LL;
      *s = 0;
      break;
    default:
LABEL_3:
      *s = 0;
      break;
  }
};

// Line 185: range 000000000CAC6820-000000000CAC68AF
size_t __fastcall sdsAllocSize(sds s)
{
  unsigned __int8 v1; // dl
  __int64 v2; // rcx
  unsigned __int8 v3; // dl
  __int64 v4; // rax

  v1 = *(s - 1);
  switch ( v1 & 7 )
  {
    case 0:
      v2 = (v1 >> 3) + 1LL;
      break;
    case 1:
      v2 = (unsigned __int8)*(s - 2) + 1LL;
      break;
    case 2:
      v2 = *(unsigned __int16 *)(s - 3) + 1LL;
      break;
    case 3:
      v2 = *(unsigned int *)(s - 5) + 1LL;
      break;
    case 4:
      v2 = *(_QWORD *)(s - 9) + 1LL;
      break;
    default:
      v2 = 1LL;
      break;
  }
  v3 = v1 & 7;
  v4 = 0LL;
  if ( v3 <= 4u )
    v4 = CSWTCH_47[v3];
  return v2 + v4;
};
