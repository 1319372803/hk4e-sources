// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/include/m_string.h

// Line 270: range 000000000CFACA40-000000000CFACACA
size_t __fastcall my_lengthsp_8bit(CHARSET_INFO *cs_0, const char *ptr, size_t length)
{
  const char *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // rcx

  v3 = &ptr[length];
  if ( length > 0x14 )
  {
    v4 = (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int64)ptr < ((unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL) )
    {
      if ( (unsigned __int64)v3 > v4 )
      {
        while ( *(v3 - 1) == 32 )
        {
          if ( --v3 == (const char *)v4 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        if ( *(v3 - 1) == 32 )
        {
          v6 = (unsigned __int64)(ptr + 3) & 0xFFFFFFFFFFFFFFFCLL;
          if ( v4 > v6 && v6 < (unsigned __int64)v3 )
          {
            do
            {
              if ( *((_DWORD *)v3 - 1) != 538976288 )
                break;
              v3 -= 4;
            }
            while ( v6 < (unsigned __int64)v3 );
          }
        }
      }
    }
  }
  if ( ptr < v3 )
  {
    do
    {
      if ( *(v3 - 1) != 32 )
        break;
      --v3;
    }
    while ( v3 != ptr );
  }
  return v3 - ptr;
};

// Line 270: range 000000000CFBE530-000000000CFBE60E
void __fastcall my_hash_sort_8bit_bin(CHARSET_INFO *cs_0, const uchar *key, size_t len, ulong *nr1, ulong *nr2)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  ulong i; // r10
  __int64 v8; // rdx
  ulong v9; // rdx
  unsigned __int64 v10; // rdi

  v5 = (unsigned __int64)&key[len];
  if ( len > 0x14 )
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int64)key < (v5 & 0xFFFFFFFFFFFFFFFCLL) )
    {
      if ( v5 > v6 )
      {
        while ( *(_BYTE *)(v5 - 1) == 32 )
        {
          if ( --v5 == v6 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        if ( *(_BYTE *)(v5 - 1) == 32 )
        {
          v10 = (unsigned __int64)(key + 3) & 0xFFFFFFFFFFFFFFFCLL;
          if ( v6 > v10 && v10 < v5 )
          {
            do
            {
              if ( *(_DWORD *)(v5 - 4) != 538976288 )
                break;
              v5 -= 4LL;
            }
            while ( v10 < v5 );
          }
        }
      }
    }
  }
  if ( (unsigned __int64)key < v5 )
  {
    while ( *(_BYTE *)(v5 - 1) == 32 )
    {
      if ( (const uchar *)--v5 == key )
        return;
    }
    for ( i = *nr2; ; i = v9 )
    {
      v8 = *key++;
      *nr1 ^= (*nr1 << 8) + (i + (*nr1 & 0x3F)) * v8;
      v9 = *nr2 + 3;
      *nr2 = v9;
      if ( (unsigned __int64)key >= v5 )
        break;
    }
  }
};

// Line 270: range 000000000CFAAB30-000000000CFAAC5E
void __fastcall my_hash_sort_latin1_de(CHARSET_INFO *cs_0, const uchar *key, size_t len, ulong *nr1, ulong *nr2)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  ulong v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi

  v5 = (unsigned __int64)&key[len];
  if ( len > 0x14 )
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int64)key < (v5 & 0xFFFFFFFFFFFFFFFCLL) )
    {
      if ( v5 > v6 )
      {
        while ( *(_BYTE *)(v5 - 1) == 32 )
        {
          if ( --v5 == v6 )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        if ( *(_BYTE *)(v5 - 1) == 32 )
        {
          v9 = (unsigned __int64)(key + 3) & 0xFFFFFFFFFFFFFFFCLL;
          if ( v6 > v9 && v9 < v5 )
          {
            do
            {
              if ( *(_DWORD *)(v5 - 4) != 538976288 )
                break;
              v5 -= 4LL;
            }
            while ( v9 < v5 );
          }
        }
      }
    }
  }
  if ( (unsigned __int64)key < v5 )
  {
    while ( *(_BYTE *)(v5 - 1) == 32 )
    {
      if ( (const uchar *)--v5 == key )
        return;
    }
    do
    {
      *nr1 ^= (*nr1 << 8) + (*nr2 + (*nr1 & 0x3F)) * combo1map[*key];
      v7 = *nr2 + 3;
      *nr2 = v7;
      v8 = combo2map[*key];
      if ( (_BYTE)v8 )
      {
        *nr1 ^= (*nr1 << 8) + ((*nr1 & 0x3F) + v7) * v8;
        *nr2 += 3LL;
      }
      ++key;
    }
    while ( (unsigned __int64)key < v5 );
  }
};

// Line 270: range 000000000CFBEC10-000000000CFBECEE
void __fastcall my_hash_sort_mb_bin(CHARSET_INFO *cs_0, const uchar *key, size_t len, ulong *nr1, ulong *nr2)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  ulong i; // r10
  __int64 v8; // rdx
  ulong v9; // rdx
  unsigned __int64 v10; // rdi

  v5 = (unsigned __int64)&key[len];
  if ( len > 0x14 )
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int64)key < (v5 & 0xFFFFFFFFFFFFFFFCLL) )
    {
      if ( v5 > v6 )
      {
        while ( *(_BYTE *)(v5 - 1) == 32 )
        {
          if ( --v5 == v6 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        if ( *(_BYTE *)(v5 - 1) == 32 )
        {
          v10 = (unsigned __int64)(key + 3) & 0xFFFFFFFFFFFFFFFCLL;
          if ( v6 > v10 && v10 < v5 )
          {
            do
            {
              if ( *(_DWORD *)(v5 - 4) != 538976288 )
                break;
              v5 -= 4LL;
            }
            while ( v10 < v5 );
          }
        }
      }
    }
  }
  if ( (unsigned __int64)key < v5 )
  {
    while ( *(_BYTE *)(v5 - 1) == 32 )
    {
      if ( (const uchar *)--v5 == key )
        return;
    }
    for ( i = *nr2; ; i = v9 )
    {
      v8 = *key++;
      *nr1 ^= (*nr1 << 8) + (i + (*nr1 & 0x3F)) * v8;
      v9 = *nr2 + 3;
      *nr2 = v9;
      if ( (unsigned __int64)key >= v5 )
        break;
    }
  }
};

// Line 270: range 000000000CFAB040-000000000CFAB12E
void __fastcall my_hash_sort_simple(CHARSET_INFO *cs_0, const uchar *key, size_t len, ulong *nr1, ulong *nr2)
{
  unsigned __int64 v5; // rax
  uchar *sort_order; // rbx
  unsigned __int64 v7; // rdx
  ulong i; // r11
  __int64 v9; // r10
  ulong v10; // rdx
  unsigned __int64 v11; // rdi

  v5 = (unsigned __int64)&key[len];
  sort_order = cs_0->sort_order;
  if ( len > 0x14 )
  {
    v7 = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int64)key < (v5 & 0xFFFFFFFFFFFFFFFCLL) )
    {
      if ( v5 > v7 )
      {
        while ( *(_BYTE *)(v5 - 1) == 32 )
        {
          if ( --v5 == v7 )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        if ( *(_BYTE *)(v5 - 1) == 32 )
        {
          v11 = (unsigned __int64)(key + 3) & 0xFFFFFFFFFFFFFFFCLL;
          if ( v7 > v11 && v11 < v5 )
          {
            do
            {
              if ( *(_DWORD *)(v5 - 4) != 538976288 )
                break;
              v5 -= 4LL;
            }
            while ( v11 < v5 );
          }
        }
      }
    }
  }
  if ( (unsigned __int64)key < v5 )
  {
    while ( *(_BYTE *)(v5 - 1) == 32 )
    {
      if ( (const uchar *)--v5 == key )
        return;
    }
    for ( i = *nr2; ; i = v10 )
    {
      v9 = *key++;
      *nr1 ^= (*nr1 << 8) + (i + (*nr1 & 0x3F)) * sort_order[v9];
      v10 = *nr2 + 3;
      *nr2 = v10;
      if ( (unsigned __int64)key >= v5 )
        break;
    }
  }
};
