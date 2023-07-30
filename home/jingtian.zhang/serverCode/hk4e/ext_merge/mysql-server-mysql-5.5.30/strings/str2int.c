// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/str2int.c

// Line 54: range 000000000CFC6490-000000000CFC66DE
char *__fastcall str2int(const char *src, int radix, __int64 lower, __int64 upper, __int64 *val)
{
  __int64 v5; // rax
  __int64 v7; // r10
  uchar *ctype; // r10
  char i; // dl
  int v10; // r13d
  int v11; // r11d
  const char *j; // r10
  __int64 k; // r9
  int v14; // r14d
  char *v15; // rbp
  int v16; // ebx
  int v17; // edi
  int v18; // edx
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r10
  int digits[32]; // [rsp+0h] [rbp-B8h]

  v5 = (lower >> 63) - (lower ^ (lower >> 63));
  v7 = upper ^ (upper >> 63);
  *val = 0LL;
  if ( v5 > (upper >> 63) - v7 )
    v5 = (upper >> 63) - v7;
  ctype = my_charset_latin1.ctype;
  for ( i = *src; (ctype[*(unsigned __int8 *)src + 1] & 8) != 0; i = *src )
    ++src;
  if ( i == 43 )
  {
    ++src;
    v10 = -1;
  }
  else
  {
    v10 = -1;
    if ( i == 45 )
    {
      ++src;
      v10 = 1;
    }
  }
  v11 = *src;
  for ( j = src; *j == 48; v11 = *j )
    ++j;
  for ( k = 0LL; ; ++k )
  {
    v14 = k;
    v15 = (char *)&j[k];
    v16 = v11 - 48;
    if ( (unsigned __int8)(v11 - 48) > 9u )
    {
      v16 = v11 - 55;
      if ( (unsigned __int8)(v11 - 65) > 0x19u )
      {
        v16 = 127;
        if ( (unsigned __int8)(v11 - 97) <= 0x19u )
          v16 = v11 - 87;
      }
    }
    digits[k] = v16;
    if ( v16 >= radix )
      break;
    if ( k == 20 )
    {
      v14 = 20;
      break;
    }
    v11 = j[k + 1];
  }
  if ( src != v15 )
  {
    v17 = v14 - 1;
    if ( v14 - 1 <= 0 )
    {
      v19 = 0LL;
      if ( v14 != 1 )
      {
        if ( v10 != -1 )
        {
LABEL_27:
          if ( v19 >= lower )
          {
LABEL_28:
            *val = v19;
            *__errno_location() = 0;
            return v15;
          }
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      v20 = -1LL;
    }
    else
    {
      v18 = digits[v17];
      if ( v5 > -v18 )
        goto LABEL_31;
      v19 = 0LL;
      v20 = -1LL;
      while ( 1 )
      {
        v21 = v20 * v18;
        v20 *= radix;
        v19 += v21;
        v5 = (v18 + v5) / radix;
        if ( !--v17 )
          break;
        v18 = digits[v17];
        if ( -v18 < v5 )
          goto LABEL_31;
      }
    }
    if ( -digits[0] >= v5 )
    {
      v19 += v20 * digits[0];
      if ( v10 != -1 )
        goto LABEL_27;
      if ( v19 != 0x8000000000000000LL )
      {
LABEL_30:
        v19 = -v19;
        if ( upper >= v19 )
          goto LABEL_28;
      }
    }
LABEL_31:
    *__errno_location() = 34;
    return 0LL;
  }
  *__errno_location() = 33;
  return 0LL;
};
