// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/my_strtoll10.c

// Line 75: range 000000000CFB3000-000000000CFB3369
longlong __fastcall my_strtoll10(const char *nptr, char **endptr, int *error)
{
  char *v3; // r8
  char v4; // al
  char *v5; // rcx
  longlong result; // rax
  char v7; // al
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r11
  int v11; // r10d
  char *v12; // rdi
  char *v13; // r9
  unsigned __int8 v14; // cl
  char *v15; // r13
  char *v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int8 v18; // r12
  unsigned __int64 v19; // rax
  char v20; // al
  __int64 v21; // rdi
  unsigned __int8 v22; // r13
  unsigned __int64 v23; // rcx
  char *dummy[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( endptr )
  {
    v3 = *endptr;
    if ( nptr == *endptr )
      goto no_conv;
    v4 = *nptr;
    v5 = (char *)nptr;
    if ( *nptr == 9 )
      goto LABEL_6;
LABEL_9:
    if ( v4 == 32 )
    {
LABEL_6:
      while ( v3 != ++v5 )
      {
        v4 = *v5;
        if ( *v5 != 9 )
          goto LABEL_9;
      }
      goto no_conv;
    }
  }
  else
  {
    v20 = *nptr;
    v5 = (char *)nptr;
    if ( *nptr != 9 )
      goto LABEL_44;
    do
    {
      do
        v20 = *++v5;
      while ( *v5 == 9 );
LABEL_44:
      ;
    }
    while ( v20 == 32 );
    if ( !v20 )
    {
      endptr = dummy;
      goto no_conv;
    }
    v3 = v5 + 0xFFFF;
    v4 = *v5;
    endptr = dummy;
  }
  if ( v4 == 45 )
  {
    *error = -1;
    if ( v5 + 1 != v3 )
    {
      v7 = v5[1];
      v8 = 8LL;
      ++v5;
      v9 = 368547758LL;
      v10 = 92233720LL;
      v11 = 1;
      goto LABEL_13;
    }
no_conv:
    *error = 33;
    result = 0LL;
    *endptr = (char *)nptr;
    return result;
  }
  *error = 0;
  v7 = *v5;
  if ( *v5 != 43 )
  {
    v8 = 15LL;
    v9 = 737095516LL;
    v10 = 184467440LL;
    v11 = 0;
    goto LABEL_13;
  }
  if ( v5 + 1 == v3 )
    goto no_conv;
  v7 = v5[1];
  v8 = 15LL;
  ++v5;
  v9 = 737095516LL;
  v10 = 184467440LL;
  v11 = 0;
LABEL_13:
  if ( v7 != 48 )
  {
    LOBYTE(result) = v7 - 48;
    if ( (unsigned __int8)result <= 9u )
    {
      v12 = v5 + 1;
      v13 = v5 + 9;
      result = (unsigned __int8)result;
      goto LABEL_16;
    }
    goto no_conv;
  }
  do
  {
    if ( ++v5 == v3 )
    {
      result = 0LL;
      goto end_i;
    }
  }
  while ( *v5 == 48 );
  v13 = v5 + 9;
  v12 = v5;
  result = 0LL;
LABEL_16:
  if ( v13 > v3 )
    v13 = v3;
  if ( v12 == v13 )
  {
LABEL_32:
    if ( v12 != v3 )
    {
      v15 = v3;
      v16 = v12;
      if ( v12 + 9 <= v3 )
        v15 = v12 + 9;
      v17 = 0LL;
      do
      {
        v18 = *v16 - 48;
        if ( v18 > 9u )
          goto end_i_and_j;
        ++v16;
        v17 = v18 + 10 * v17;
      }
      while ( v16 != v15 );
      if ( v3 == v16 )
      {
        if ( v16 == v12 + 9 )
          goto end3;
end_i_and_j:
        v19 = lfactor[(int)v16 - (int)v12] * result;
      }
      else
      {
        LOBYTE(v21) = *v16 - 48;
        if ( (unsigned __int8)v21 <= 9u )
        {
          v21 = (unsigned __int8)v21;
          if ( v16 + 1 == v3 || (v22 = v16[1] - 48, v22 > 9u) )
          {
            *endptr = v16 + 1;
            result = v21 + 10000000000LL * result + 10 * v17;
            if ( v11 )
            {
              if ( (unsigned __int64)result <= 0x8000000000000000LL )
              {
                return -result;
              }
              else
              {
                *error = 34;
                return 0x8000000000000000LL;
              }
            }
          }
          else
          {
            *endptr = v16 + 2;
            if ( (v16 + 2 == v3 || (unsigned __int8)(v16[2] - 48) > 9u)
              && v10 >= result
              && ((v23 = v22 + 10 * v21, result != v10) || v9 > v17 || v23 <= v8) )
            {
              return v23 + 100000000000LL * result + 100 * v17;
            }
            else
            {
              *error = 34;
              result = 0x8000000000000000LL;
              if ( !v11 )
                return -1LL;
            }
          }
          return result;
        }
end3:
        v19 = 1000000000 * result;
      }
      *endptr = v16;
      result = v17 + v19;
      goto LABEL_24;
    }
  }
  else
  {
    while ( 1 )
    {
      v14 = *v12 - 48;
      if ( v14 > 9u )
        break;
      ++v12;
      result = v14 + 10 * result;
      if ( v12 == v13 )
        goto LABEL_32;
    }
  }
  v5 = v12;
end_i:
  *endptr = v5;
LABEL_24:
  if ( v11 )
    return -result;
  return result;
};
