// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/sql-common/my_time.c

// Line 53: range 000000000CFA76E0-000000000CFA7728
uint __fastcall calc_days_in_year(uint year)
{
  uint result; // eax

  result = 365;
  if ( (year & 3) == 0 )
  {
    result = 366;
    if ( year == 100 * (year / 0x64) )
    {
      LOBYTE(result) = 109;
      if ( year == 400 * (year / 0x190) )
        return 366 - (year == 0);
    }
  }
  return result;
};

// Line 81: range 000000000CFA7730-000000000CFA77D7
my_bool __fastcall check_date(const MYSQL_TIME *ltime, my_bool not_zero_date, ulonglong flags, int *was_cut)
{
  unsigned int month; // eax
  uint v6; // eax
  int *was_cuta; // [rsp+0h] [rbp-10h]

  if ( !not_zero_date )
    return BYTE3(flags) & 1;
  if ( (flags & 0x800001) == 1 || ltime->month && ltime->day )
  {
    if ( (flags & 0x2000000) != 0 )
      return 0;
    month = ltime->month;
    if ( !month )
      return 0;
    if ( ltime->day <= days_in_month[month - 1] )
      return 0;
    if ( month == 2 )
    {
      was_cuta = was_cut;
      v6 = calc_days_in_year(ltime->year);
      was_cut = was_cuta;
      if ( v6 == 366 && ltime->day == 29 )
        return 0;
    }
  }
  *was_cut = 2;
  return 1;
};

// Line 162: range 000000000CFA77E0-000000000CFA8041
enum_mysql_timestamp_type __fastcall str_to_datetime(
        const char *str,
        uint length,
        MYSQL_TIME *l_time,
        ulonglong flags,
        int *was_cut)
{
  const char *v5; // r14
  const char *v6; // rbx
  uchar *ctype; // r8
  uchar v8; // al
  const char *v9; // rax
  char v10; // cl
  uchar v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // esi
  __int64 v14; // rax
  char v15; // r15
  int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // r13
  int v19; // r12d
  char v20; // dl
  char v21; // r11
  unsigned int v22; // ecx
  __int64 v23; // rbp
  bool v24; // r14
  const char *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int8 v27; // si
  __int64 v28; // rsi
  __int64 v29; // rsi
  uchar v30; // si
  unsigned int v31; // r12d
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rax
  uint v35; // edx
  unsigned __int64 v36; // rax
  bool v37; // zf
  int v38; // eax
  uchar *v39; // rcx
  const char *v40; // rdx
  unsigned __int64 v41; // rax
  uchar *v42; // rdx
  int v44; // [rsp+Ch] [rbp-ACh]
  int v46; // [rsp+18h] [rbp-A0h]
  int v47; // [rsp+1Ch] [rbp-9Ch]
  uint add_hours; // [rsp+30h] [rbp-88h]
  char v51; // [rsp+34h] [rbp-84h]
  uchar v52; // [rsp+35h] [rbp-83h]
  uchar v53; // [rsp+36h] [rbp-82h]
  uchar v54; // [rsp+37h] [rbp-81h]
  int v55; // [rsp+38h] [rbp-80h]
  uint year_length; // [rsp+3Ch] [rbp-7Ch]
  uint date[8]; // [rsp+40h] [rbp-78h] BYREF
  uint date_len[8]; // [rsp+60h] [rbp-58h]

  v6 = &str[length];
  *was_cut = 0;
  if ( str == v6 )
    goto LABEL_19;
  ctype = my_charset_latin1.ctype;
  while ( 1 )
  {
    v8 = ctype[*(unsigned __int8 *)str + 1];
    if ( (v8 & 8) == 0 )
      break;
    if ( v6 == ++str )
      goto LABEL_19;
  }
  if ( (v8 & 4) == 0 )
    goto LABEL_19;
  v9 = str;
  do
  {
    if ( v6 == ++v9 )
    {
      v12 = internal_format_positions[0];
      v13 = (_DWORD)v6 - (_DWORD)str;
      v55 = internal_format_positions[0];
      date_len[internal_format_positions[0]] = 0;
      goto LABEL_27;
    }
    v10 = *v9;
    v11 = ctype[*(unsigned __int8 *)v9 + 1];
  }
  while ( (v11 & 4) != 0 || v10 == 84 );
  v12 = internal_format_positions[0];
  v13 = (_DWORD)v9 - (_DWORD)str;
  v55 = internal_format_positions[0];
  date_len[internal_format_positions[0]] = 0;
  if ( v10 == 46 )
  {
LABEL_27:
    v15 = 1;
    v46 = 0;
    if ( v13 == 8 || v13 == 4 )
    {
      year_length = 4;
      v16 = 4;
    }
    else
    {
      year_length = v13 < 0xE ? 2 : 4;
      v16 = year_length;
    }
    goto LABEL_31;
  }
  if ( (unsigned __int8)v12 <= 2u )
  {
    v15 = 0;
    v46 = 0;
    v16 = (_BYTE)v12 == 0 ? 4 : 2;
    goto LABEL_31;
  }
  if ( v9 < v6 )
  {
    if ( (v11 & 8) != 0 )
      goto LABEL_21;
    do
    {
      if ( ++v9 == v6 )
        goto LABEL_17;
    }
    while ( (ctype[*(unsigned __int8 *)v9 + 1] & 8) == 0 );
    if ( (ctype[*(unsigned __int8 *)v9 + 1] & 4) == 0 )
    {
LABEL_21:
      do
        ++v9;
      while ( v6 > v9 && (ctype[*(unsigned __int8 *)v9 + 1] & 4) == 0 );
      if ( v9 == v6 )
      {
LABEL_17:
        if ( (flags & 2) == 0 )
        {
          memset(date, 0, 20);
          v46 = 5;
          goto LABEL_25;
        }
        goto LABEL_19;
      }
    }
  }
  v46 = 0;
LABEL_25:
  v15 = 0;
  v16 = 2;
LABEL_31:
  v17 = internal_format_positions[1];
  v18 = internal_format_positions[2];
  v54 = internal_format_positions[1];
  if ( (unsigned __int8)v12 >= internal_format_positions[1] )
    v17 = v12;
  v52 = internal_format_positions[6];
  if ( v17 < internal_format_positions[2] )
    LOBYTE(v17) = internal_format_positions[2];
  v19 = ((unsigned __int8)(1 << internal_format_positions[6]) | (unsigned __int8)(1 << v17)) & 0xF;
  if ( v6 == str || (v20 = *str, (ctype[*(unsigned __int8 *)str + 1] & 4) == 0) )
  {
    v22 = v46;
    v31 = 0;
    add_hours = 0;
    v23 = 0LL;
    goto LABEL_69;
  }
  v21 = 0;
  v22 = v46;
  v51 = 0;
  v23 = 0LL;
  add_hours = 0;
  v44 = internal_format_positions[5];
  v53 = internal_format_positions[7];
  v47 = internal_format_positions[5] + 1;
  while ( 2 )
  {
    v24 = 0;
    v25 = str + 1;
    v26 = (unsigned __int8)(v20 - 48);
    if ( !v15 )
      v24 = v22 != v52;
    if ( v6 != v25 && (v27 = str[1], (ctype[v27 + 1] & 4) != 0) )
    {
      do
      {
        if ( !v24 && !--v16 )
          break;
        ++v25;
        v26 = (unsigned __int8)(v27 - 48) + 10 * v26;
        if ( v6 == v25 )
          break;
        v27 = *v25;
      }
      while ( (ctype[*(unsigned __int8 *)v25 + 1] & 4) != 0 );
      v28 = v22;
      date_len[v22] = (_DWORD)v25 - (_DWORD)str;
      if ( v26 > 0xF423F )
        goto LABEL_19;
    }
    else
    {
      v28 = v22;
      date_len[v22] = 1;
    }
    date[v28] = v26;
    v23 |= v26;
    v16 = internal_format_positions[v22 + 1] == 0 ? 4 : 2;
    if ( v25 == v6 )
    {
      v5 = v6;
      ++v22;
      goto LABEL_65;
    }
    v29 = *(unsigned __int8 *)v25;
    if ( v22 == (_DWORD)v18 && (_BYTE)v29 == 84 )
    {
      str = v25 + 1;
      ++v22;
      goto LABEL_61;
    }
    if ( v44 == v22 )
    {
      if ( (_BYTE)v29 == 46 )
      {
        str = v25 + 1;
        v22 = v47;
        v16 = 6;
      }
      else
      {
        v22 = v47;
        str = v25;
      }
LABEL_61:
      if ( str == v6 || v22 > 6 || (v20 = *str, (ctype[*(unsigned __int8 *)str + 1] & 4) == 0) )
      {
        v5 = v25;
        goto LABEL_65;
      }
      continue;
    }
    break;
  }
  v30 = ctype[v29 + 1];
  str = v25;
  if ( (v30 & 0x18) != 0 )
  {
    do
    {
      if ( (v30 & 8) != 0 )
      {
        if ( (v19 & (1 << v22)) == 0 )
          goto LABEL_19;
        v21 = 1;
      }
      if ( v6 == ++str )
        break;
      v30 = ctype[*(unsigned __int8 *)str + 1];
    }
    while ( (v30 & 0x18) != 0 );
    v51 = 1;
  }
  if ( v52 != v22 )
  {
    ++v22;
    v25 = str;
    goto LABEL_61;
  }
  if ( v53 == 0xFF || (v40 = str + 2, v6 < str + 2) || (str[1] & 0xDF) != 77 )
  {
    v22 = v52 + 2;
    v25 = str;
    goto LABEL_61;
  }
  if ( (*str & 0xDF) != 80 )
  {
    v22 = v52 + 2;
    goto LABEL_61;
  }
  if ( v6 == v40 )
    goto LABEL_128;
  if ( (ctype[*((unsigned __int8 *)str + 2) + 1] & 8) == 0 )
  {
    str += 2;
    add_hours = 12;
    v22 = v52 + 2;
    v25 = v40;
    goto LABEL_61;
  }
  while ( v6 != ++v40 )
  {
    if ( (ctype[*(unsigned __int8 *)v40 + 1] & 8) == 0 )
    {
      v22 += 2;
      v25 = v40;
      str = v40;
      add_hours = 12;
      goto LABEL_61;
    }
  }
LABEL_128:
  v5 = v6;
  add_hours = 12;
  v22 = v52 + 2;
LABEL_65:
  if ( !v21 && v51 && (flags & 2) != 0 )
    goto LABEL_19;
  v31 = v22 - v46;
  if ( v22 <= 7 )
  {
    do
    {
LABEL_69:
      v32 = v22++;
      date_len[v32] = 0;
      date[v32] = 0;
    }
    while ( v22 != 8 );
  }
  if ( v15 )
  {
    l_time->year = date[0];
    l_time->month = date[1];
    l_time->day = date[2];
    l_time->hour = date[3];
    l_time->minute = date[4];
    l_time->second = date[5];
    if ( date_len[6] <= 5 )
      v41 = LODWORD(log_10_int[6 - date_len[6]]) * date[6];
    else
      v41 = date[6];
    l_time->second_part = v41;
    goto LABEL_77;
  }
  year_length = date_len[v55];
  if ( !year_length )
  {
LABEL_19:
    *was_cut = 1;
    LODWORD(v14) = -2;
    return (int)v14;
  }
  l_time->year = date[v55];
  l_time->month = date[v54];
  l_time->day = date[v18];
  v33 = date[internal_format_positions[3]];
  v34 = internal_format_positions[4];
  l_time->hour = v33;
  l_time->minute = date[v34];
  l_time->second = date[internal_format_positions[5]];
  v35 = date_len[v52];
  if ( v35 <= 5 )
    v36 = LODWORD(log_10_int[6 - v35]) * date[v52];
  else
    v36 = date[v52];
  v37 = internal_format_positions[7] == 0xFF;
  l_time->second_part = v36;
  if ( v37 )
    goto LABEL_77;
  if ( v33 > 0xC )
  {
    *was_cut = 1;
    goto err;
  }
  l_time->hour = v33 % 0xC + add_hours;
LABEL_77:
  l_time->neg = 0;
  LOBYTE(v38) = v23 != 0;
  if ( year_length == 2 && v23 )
    l_time->year += l_time->year < 0x46 ? 2000 : 1900;
  if ( v31 <= 2
    || l_time->year > 0x270F
    || l_time->month > 0xC
    || l_time->day > 0x1F
    || l_time->hour > 0x17
    || l_time->minute > 0x3B
    || l_time->second > 0x3B )
  {
    v38 = (unsigned __int8)v38;
    if ( !v23 )
    {
      if ( v5 != v6 )
      {
        v42 = my_charset_latin1.ctype;
        if ( (v42[*(unsigned __int8 *)v5 + 1] & 8) == 0 )
        {
LABEL_132:
          v38 = 1;
          goto LABEL_121;
        }
        while ( v6 != ++v5 )
        {
          if ( (v42[*(unsigned __int8 *)v5 + 1] & 8) == 0 )
            goto LABEL_132;
        }
      }
      v38 = 0;
    }
LABEL_121:
    *was_cut = v38;
    goto err;
  }
  if ( check_date(l_time, v38, flags, was_cut) )
  {
err:
    *(_QWORD *)&l_time->year = 0LL;
    *(_QWORD *)&l_time->day = 0LL;
    *(_QWORD *)&l_time->minute = 0LL;
    l_time->second_part = 0LL;
    *(_QWORD *)&l_time->neg = 0LL;
    LODWORD(v14) = -1;
    return (int)v14;
  }
  v14 = v31 > 3;
  l_time->time_type = v14;
  if ( v5 != v6 )
  {
    v39 = my_charset_latin1.ctype;
    if ( (v39[*(unsigned __int8 *)v5 + 1] & 8) != 0 )
    {
      while ( v6 != ++v5 )
      {
        if ( (v39[*(unsigned __int8 *)v5 + 1] & 8) == 0 )
          goto LABEL_92;
      }
    }
    else
    {
LABEL_92:
      *was_cut = 1;
    }
  }
  return (int)v14;
};

// Line 486: range 000000000CFA80D0-000000000CFA86A0
my_bool __fastcall str_to_time(const char *str, uint length, MYSQL_TIME *l_time, int *warning)
{
  const char *v6; // rbp
  const char *v7; // rbx
  uchar *ctype; // rsi
  unsigned __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int8 v13; // al
  uchar *v14; // rdx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned __int64 v18; // r8
  unsigned __int8 *v20; // rdi
  const char *v21; // rax
  unsigned int v22; // r15d
  char v23; // si
  char v24; // cl
  uchar *v25; // rdx
  int v26; // r8d
  __int64 i; // rax
  __int64 v28; // r8
  enum_mysql_timestamp_type v29; // eax
  unsigned __int8 v30; // al
  uchar *v31; // rdi
  __int64 v32; // rcx
  int j; // eax
  unsigned __int64 was_cut; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-60h]
  unsigned __int64 v36; // [rsp+20h] [rbp-58h]
  unsigned __int64 v37; // [rsp+28h] [rbp-50h]
  uchar dst[8]; // [rsp+30h] [rbp-48h] BYREF

  v6 = &str[length];
  v7 = str;
  l_time->neg = 0;
  *warning = 0;
  if ( str == v6 )
    return 1;
  while ( (my_charset_latin1.ctype[*(unsigned __int8 *)v7 + 1] & 8) != 0 )
  {
    ++v7;
    --length;
    if ( v6 == v7 )
      return 1;
  }
  if ( *v7 == 45 )
  {
    ++v7;
    --length;
    l_time->neg = 1;
    if ( v6 == v7 )
      return 1;
  }
  if ( length <= 0xB || (v29 = str_to_datetime(v7, length, l_time, 3uLL, (int *)&was_cut), v29 < MYSQL_TIMESTAMP_ERROR) )
  {
    ctype = my_charset_latin1.ctype;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *v7;
      if ( (ctype[*(unsigned __int8 *)v7 + 1] & 4) == 0 )
        break;
      ++v7;
      v9 = v10 - 48 + 10 * v9;
      if ( v6 == v7 )
        goto LABEL_10;
    }
    v20 = (unsigned __int8 *)v7;
    if ( v6 == v7 || (ctype[*(unsigned __int8 *)v7 + 1] & 8) == 0 )
    {
LABEL_10:
      v11 = v6 - v7;
      goto LABEL_11;
    }
    do
    {
      if ( v6 == ++v7 )
      {
        v21 = v6;
        goto LABEL_41;
      }
    }
    while ( (ctype[*(unsigned __int8 *)v7 + 1] & 8) != 0 );
    v21 = v7;
LABEL_41:
    v11 = v6 - v21;
    if ( (unsigned int)((_DWORD)v6 - (_DWORD)v21) > 1
      && v21 != (const char *)v20
      && (ctype[*(unsigned __int8 *)v21 + 1] & 4) != 0 )
    {
      was_cut = v9;
      v22 = 1;
      v23 = 0;
      v24 = 1;
      goto LABEL_45;
    }
LABEL_11:
    if ( v11 <= 1 || *v7 != 58 || (ctype[*((unsigned __int8 *)v7 + 1) + 1] & 4) == 0 )
    {
      was_cut = 0LL;
      v12 = v6 - v7;
      v35 = v9 / 0x2710;
      v36 = v9 / 0x64 - 100 * ((unsigned __int64)((0x28F5C28F5C28F5C3LL * (unsigned __int128)(v9 / 0x190)) >> 64) >> 2);
      v37 = v9 % 0x64;
      goto fractional;
    }
    v35 = v9;
    was_cut = 0LL;
    ++v7;
    v22 = 2;
    v23 = 1;
    v24 = 0;
LABEL_45:
    v25 = my_charset_latin1.ctype;
    if ( v7 == v6 )
      goto LABEL_55;
LABEL_46:
    v26 = *v7;
    for ( i = 0LL; (v25[*(unsigned __int8 *)v7 + 1] & 4) != 0; v26 = *v7 )
    {
      ++v7;
      i = v26 - 48 + 10 * i;
      if ( v6 == v7 )
        break;
    }
    while ( 1 )
    {
      v28 = v22 + 1;
      v12 = v6 - v7;
      *(&was_cut + v22) = i;
      if ( v22 == 3 )
        break;
      if ( v12 <= 1 || *v7 != 58 || (v25[*((unsigned __int8 *)v7 + 1) + 1] & 4) == 0 )
      {
        if ( (unsigned __int8)v24 | (unsigned __int8)v23 )
        {
          memset(&was_cut + v28, 0, 8LL * (3 - v22));
        }
        else
        {
          bmove_upp(dst, (const uchar *)&was_cut + 8 * v28, 8LL * v22);
          memset(&was_cut, 0, 8LL * (3 - v22));
        }
        v12 = v6 - v7;
        break;
      }
      ++v7;
      ++v22;
      if ( v7 != v6 )
        goto LABEL_46;
LABEL_55:
      i = 0LL;
    }
fractional:
    if ( v12 > 1 && *v7 == 46 && (v30 = v7[1], v31 = my_charset_latin1.ctype, (v31[v30 + 1] & 4) != 0) )
    {
      ++v7;
      v32 = (unsigned __int8)(v30 - 48);
      for ( j = 5; ++v7 != v6 && (v31[*(unsigned __int8 *)v7 + 1] & 4) != 0; --j )
      {
        if ( j > 0 )
          v32 = (unsigned __int8)(*v7 - 48) + 10 * v32;
      }
      if ( j <= 0 )
      {
        if ( j )
          *warning |= 1u;
      }
      else
      {
        v32 *= log_10_int[j];
      }
      *(_QWORD *)dst = v32;
      v12 = v6 - v7;
    }
    else
    {
      *(_QWORD *)dst = 0LL;
    }
    if ( v12 > 1 && (*v7 & 0xDF) == 69 )
    {
      v13 = v7[1];
      v14 = my_charset_latin1.ctype;
      if ( (v14[v13 + 1] & 4) != 0
        || (v13 == 43 || v13 == 45) && v12 != 2 && (v14[*((unsigned __int8 *)v7 + 2) + 1] & 4) != 0 )
      {
        return 1;
      }
    }
    if ( internal_format_positions[7] != 0xFF )
    {
      for ( ; v6 != v7; ++v7 )
      {
        if ( (my_charset_latin1.ctype[*(unsigned __int8 *)v7 + 1] & 8) == 0 )
          break;
      }
      if ( v6 >= v7 + 2 && (v7[1] & 0xDF) == 77 )
      {
        if ( (*v7 & 0xDF) == 80 )
        {
          v7 += 2;
          v35 = v35 % 0xC + 12;
        }
        else if ( (*v7 & 0xDF) == 65 )
        {
          v7 += 2;
        }
      }
    }
    v15 = was_cut;
    if ( was_cut > 0xFFFFFFFF )
      return 1;
    v16 = v35;
    if ( v35 > 0xFFFFFFFF )
      return 1;
    if ( v36 > 0xFFFFFFFF )
      return 1;
    v17 = v37;
    if ( v37 > 0xFFFFFFFF )
      return 1;
    v18 = *(_QWORD *)dst;
    if ( *(_QWORD *)dst > 0xFFFFFFFFuLL )
      return 1;
    l_time->minute = v36;
    l_time->second = v17;
    l_time->year = 0;
    l_time->month = 0;
    l_time->day = v15;
    l_time->hour = v16;
    l_time->second_part = v18;
    l_time->time_type = MYSQL_TIMESTAMP_TIME;
    if ( check_time_range(l_time, warning) )
      return 1;
    if ( v7 == v6 )
    {
      return 0;
    }
    else
    {
      while ( (my_charset_latin1.ctype[*(unsigned __int8 *)v7 + 1] & 8) != 0 )
      {
        if ( ++v7 == v6 )
          return 0;
      }
      *warning |= 1u;
      return 0;
    }
  }
  else
  {
    if ( (_DWORD)was_cut )
      *warning |= 1u;
    return v29 == MYSQL_TIMESTAMP_ERROR;
  }
};

// Line 688: range 000000000CFA8050-000000000CFA80C9
int __fastcall check_time_range(st_mysql_time *my_time, int *warning)
{
  int result; // eax

  result = 1;
  if ( my_time->minute <= 0x3B && my_time->second <= 0x3B )
  {
    if ( my_time->hour + 24 * my_time->day > 0x346uLL
      || (result = 0, my_time->hour + 24 * my_time->day == 838LL)
      && *(_QWORD *)&my_time->minute == 0x3B0000003BLL
      && my_time->second_part )
    {
      my_time->day = 0;
      my_time->hour = 838;
      result = 0;
      my_time->minute = 59;
      my_time->second = 59;
      my_time->second_part = 0LL;
      *warning |= 2u;
    }
  }
  return result;
};

// Line 714: range 000000000CFA8AE0-000000000CFA8B62
void __cdecl my_init_time()
{
  my_bool not_used; // [rsp+7h] [rbp-81h] BYREF
  time_t seconds; // [rsp+8h] [rbp-80h] BYREF
  MYSQL_TIME my_time; // [rsp+10h] [rbp-78h] BYREF
  tm tm_tmp; // [rsp+40h] [rbp-48h] BYREF

  seconds = time(0LL);
  localtime_r(&seconds, &tm_tmp);
  my_time_zone = 3600LL;
  my_time.year = tm_tmp.tm_year + 1900;
  my_time.month = tm_tmp.tm_mon + 1;
  my_time.day = tm_tmp.tm_mday;
  my_time.hour = tm_tmp.tm_hour;
  my_time.minute = tm_tmp.tm_min;
  my_time.second = tm_tmp.tm_sec;
  my_system_gmt_sec(&my_time, &my_time_zone, &not_used);
};

// Line 747: range 000000000CFA86B0-000000000CFA86C4
uint __fastcall year_2000_handling(uint year)
{
  uint result; // eax
  uint v2; // edi

  result = year + 1900;
  v2 = year + 2000;
  if ( result <= 0x7B1 )
    return v2;
  return result;
};

// Line 775: range 000000000CFA86D0-000000000CFA876E
__int64 __fastcall calc_daynr(uint year, uint month, uint day)
{
  signed int v3; // ecx
  __int64 v4; // r9
  int v5; // eax

  v3 = year;
  if ( !year && !month )
    return 0LL;
  v4 = (int)(day + 31 * (month - 1) + 365 * year);
  if ( month <= 2 )
    v3 = year - 1;
  else
    v4 -= (int)(4 * month + 23) / 10;
  v5 = 3 * (v3 / 100) + 3;
  if ( v5 < 0 )
    v5 = 3 * (v3 / 100) + 6;
  return v4 + v3 / 4 - (v5 >> 2);
};

// Line 816: range 000000000CFA8770-000000000CFA8AD7
my_time_t __fastcall my_system_gmt_sec(const MYSQL_TIME *t_src, __int64 *my_timezone, my_bool *in_dst_time_gap)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  uint v6; // edi
  my_time_t result; // rax
  unsigned int day; // ebp
  unsigned int month; // esi
  int v10; // r15d
  __int64 v11; // rax
  unsigned int hour; // ebx
  unsigned int minute; // r12d
  unsigned int second; // r13d
  __int64 v15; // r14
  int tm_sec; // edi
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ebp
  int v21; // ecx
  __int64 v22; // rax
  bool v23; // zf
  time_t v24; // rax
  my_time_t v25; // rdx
  __int64 v27; // [rsp+20h] [rbp-D8h]
  unsigned int v29; // [rsp+34h] [rbp-C4h]
  __int64 v30; // [rsp+38h] [rbp-C0h]
  time_t timer; // [rsp+48h] [rbp-B0h] BYREF
  MYSQL_TIME tmp_time; // [rsp+50h] [rbp-A8h]
  tm tm_tmp; // [rsp+80h] [rbp-78h] BYREF

  v3 = *(_QWORD *)&t_src->year;
  v4 = *(_QWORD *)&t_src->day;
  timer = 0LL;
  *(_QWORD *)&tmp_time.year = v3;
  *(_QWORD *)&tmp_time.day = v4;
  *(_QWORD *)&tmp_time.minute = *(_QWORD *)&t_src->minute;
  tmp_time.second_part = t_src->second_part;
  v5 = *(_QWORD *)&t_src->neg;
  v6 = v3;
  *(_QWORD *)&tmp_time.neg = v5;
  LODWORD(v5) = v3 - 1969;
  result = 0LL;
  if ( (unsigned int)v5 > 0x45 )
    return result;
  if ( v6 == 2038 )
  {
    month = tmp_time.month;
    if ( tmp_time.month > 1 )
      return result;
    day = tmp_time.day;
    if ( tmp_time.day > 0x13 )
      return result;
  }
  else
  {
    if ( v6 == 1969 )
    {
      month = tmp_time.month;
      if ( tmp_time.month <= 0xB )
        return result;
      day = tmp_time.day;
      if ( tmp_time.day <= 0x1E )
        return result;
      if ( *(_QWORD *)&tmp_time.year != 0x1000007F6LL )
        goto LABEL_6;
LABEL_32:
      day -= 2;
      v27 = 172800LL;
      tmp_time.day = day;
      goto LABEL_7;
    }
    day = tmp_time.day;
    month = tmp_time.month;
  }
  if ( *(_QWORD *)&tmp_time.year != 0x1000007F6LL )
  {
LABEL_6:
    v27 = 0LL;
    goto LABEL_7;
  }
  v27 = 0LL;
  if ( day > 4 )
    goto LABEL_32;
LABEL_7:
  v10 = 2;
  v11 = calc_daynr(v6, month, day);
  hour = tmp_time.hour;
  minute = tmp_time.minute;
  second = tmp_time.second;
  v15 = my_time_zone;
  v29 = 60 * tmp_time.minute;
  v30 = tmp_time.second + 60 * tmp_time.minute;
  timer = my_time_zone + v30 + 86400 * (v11 - 719528) + 3600LL * tmp_time.hour - 3600;
  localtime_r(&timer, &tm_tmp);
  do
  {
    if ( hour == tm_tmp.tm_hour && minute == tm_tmp.tm_min )
    {
      tm_sec = tm_tmp.tm_sec;
      if ( second == tm_tmp.tm_sec )
        goto LABEL_27;
    }
    else
    {
      tm_sec = tm_tmp.tm_sec;
    }
    v17 = day - tm_tmp.tm_mday;
    v18 = 24;
    if ( (int)(day - tm_tmp.tm_mday) >= -1 )
    {
      v18 = -24;
      if ( v17 <= 1 )
        v18 = 24 * v17;
    }
    v19 = (int)(second - tm_sec) + 3600LL * (int)(hour - tm_tmp.tm_hour + v18) + (int)(60 * (minute - tm_tmp.tm_min));
    timer += v19;
    v15 += v19 + 3600;
    localtime_r(&timer, &tm_tmp);
    --v10;
  }
  while ( v10 );
  if ( hour == tm_tmp.tm_hour )
  {
LABEL_27:
    v24 = timer;
    goto LABEL_22;
  }
  v20 = day - tm_tmp.tm_mday;
  v21 = 24;
  if ( v20 >= -1 )
  {
    v21 = -24;
    if ( v20 <= 1 )
      v21 = 24 * v20;
  }
  v22 = (int)(second - tm_tmp.tm_sec)
      + (int)(60 * (minute - tm_tmp.tm_min))
      + 3600LL * (int)(hour - tm_tmp.tm_hour + v21);
  if ( v22 == 3600 )
  {
    v24 = timer + 3600 - second - v29;
  }
  else
  {
    v23 = v22 == -3600;
    v24 = timer;
    if ( v23 )
      v24 = timer - v30;
  }
  *in_dst_time_gap = 1;
LABEL_22:
  v25 = v24 + v27;
  result = 0LL;
  *my_timezone = v15;
  if ( (unsigned __int64)(v25 - 1) <= 0x7FFFFFFE )
    return v25;
  return result;
};

// Line 1007: range 000000000CFA8B70-000000000CFA8B9A
void __fastcall set_zero_time(MYSQL_TIME *tm, enum_mysql_timestamp_type time_type)
{
  *(_QWORD *)&tm->neg = 0LL;
  *(_QWORD *)&tm->year = 0LL;
  *(_QWORD *)&tm->day = 0LL;
  *(_QWORD *)&tm->minute = 0LL;
  tm->second_part = 0LL;
  tm->time_type = time_type;
};

// Line 1028: range 000000000CFA8BA0-000000000CFA8BD0
int __fastcall my_time_to_str(const MYSQL_TIME *l_time, char *to)
{
  const char *v2; // rdx

  v2 = "-";
  if ( !l_time->neg )
    v2 = &off_1B23A528[4];
  return sprintf(to, "%s%02u:%02u:%02u", v2, l_time->hour, l_time->minute, l_time->second);
};

// Line 1034: range 000000000CFA8BE0-000000000CFA8BF8
int __fastcall my_date_to_str(const MYSQL_TIME *l_time, char *to)
{
  return sprintf(to, "%04u-%02u-%02u", l_time->year, l_time->month, l_time->day);
};

// Line 1039: range 000000000CFA8C00-000000000CFA8C36
int __fastcall my_datetime_to_str(const MYSQL_TIME *l_time, char *to)
{
  unsigned int minute; // [rsp+0h] [rbp-18h]
  unsigned int second; // [rsp+8h] [rbp-10h]

  second = l_time->second;
  minute = l_time->minute;
  return sprintf(
           to,
           "%04u-%02u-%02u %02u:%02u:%02u",
           l_time->year,
           l_time->month,
           l_time->day,
           l_time->hour,
           minute,
           second);
};

// Line 1059: range 000000000CFA8C40-000000000CFA8C80
int __fastcall my_TIME_to_str(const MYSQL_TIME *l_time, char *to)
{
  int result; // eax

  switch ( l_time->time_type )
  {
    case MYSQL_TIMESTAMP_NONE:
    case MYSQL_TIMESTAMP_ERROR:
      *to = 0;
      goto LABEL_5;
    case MYSQL_TIMESTAMP_DATE:
      result = my_date_to_str(l_time, to);
      break;
    case MYSQL_TIMESTAMP_DATETIME:
      result = my_datetime_to_str(l_time, to);
      break;
    case MYSQL_TIMESTAMP_TIME:
      result = my_time_to_str(l_time, to);
      break;
    default:
LABEL_5:
      result = 0;
      break;
  }
  return result;
};

// Line 1105: range 000000000CFA8C90-000000000CFA8F3D
longlong __fastcall number_to_datetime(longlong nr, MYSQL_TIME *time_res, ulonglong flags, int *was_cut)
{
  longlong v7; // rbx
  __int64 v8; // rdi
  int v9; // esi
  unsigned int v10; // r9d
  unsigned int v11; // esi
  __int64 v12; // r10
  int v13; // ebp
  unsigned int v14; // edx
  unsigned int v15; // ebp
  my_bool v16; // dl
  longlong result; // rax

  v7 = nr;
  *was_cut = 0;
  *(_QWORD *)&time_res->year = 0LL;
  *(_QWORD *)&time_res->day = 0LL;
  *(_QWORD *)&time_res->minute = 0LL;
  time_res->second_part = 0LL;
  *(_QWORD *)&time_res->neg = 0LL;
  if ( nr > 0x9185477C33FLL || !nr )
  {
    time_res->time_type = MYSQL_TIMESTAMP_DATETIME;
    goto ok;
  }
  if ( nr <= 100 )
    goto err;
  if ( nr <= 691231 )
  {
    v7 = 1000000 * (nr + 20000000);
    goto ok;
  }
  if ( nr <= 700100 )
    goto err;
  if ( nr <= 991231 )
  {
    v7 = 1000000 * (nr + 19000000);
    goto ok;
  }
  if ( nr <= 10000100 )
  {
    if ( (flags & 1) != 0 )
    {
LABEL_23:
      v7 = 1000000 * nr;
      goto ok;
    }
    goto err;
  }
  if ( nr <= 99991231 )
    goto LABEL_23;
  if ( nr <= 100999999 )
    goto err;
  time_res->time_type = MYSQL_TIMESTAMP_DATETIME;
  if ( nr <= 0xA0F0979F77LL )
  {
    v7 = nr + 20000000000000LL;
    goto ok;
  }
  if ( nr <= 0xA301457B3FLL )
  {
err:
    *was_cut = 1;
    return -1LL;
  }
  if ( nr <= 0xE6C9FC5777LL )
    v7 = nr + 19000000000000LL;
ok:
  v8 = v7 / 1000000 / 10000;
  time_res->year = v8;
  v9 = v7 / 1000000 % 10000;
  v10 = v9 / 100;
  time_res->month = v9 / 100;
  v11 = v9 % 100;
  time_res->day = v11;
  v12 = v7 % 1000000 / 10000;
  time_res->hour = v12;
  v13 = v7 % 1000000 % 10000;
  v14 = v13 / 100;
  time_res->minute = v13 / 100;
  v15 = v13 % 100;
  time_res->second = v15;
  if ( (unsigned int)v8 > 0x270F
    || v10 > 0xC
    || v11 > 0x1F
    || (unsigned int)v12 > 0x17
    || v14 > 0x3B
    || v15 > 0x3B
    || (v16 = check_date(time_res, v7 != 0, flags, was_cut), result = v7, v16) )
  {
    if ( !v7 && (flags & 0x1000000) != 0 )
      return -1LL;
    goto err;
  }
  return result;
};

// Line 1191: range 000000000CFA8F50-000000000CFA8F97
ulonglong __fastcall TIME_to_ulonglong_datetime(const MYSQL_TIME *my_time)
{
  return 1000000 * (10000LL * my_time->year + 100LL * my_time->month + my_time->day)
       + 10000LL * my_time->hour
       + 100LL * my_time->minute
       + my_time->second;
};

// Line 1201: range 000000000CFA8FA0-000000000CFA8FBE
ulonglong __fastcall TIME_to_ulonglong_date(const MYSQL_TIME *my_time)
{
  return 10000LL * my_time->year + 100LL * my_time->month + my_time->day;
};

// Line 1214: range 000000000CFA8FC0-000000000CFA8FDF
ulonglong __fastcall TIME_to_ulonglong_time(const MYSQL_TIME *my_time)
{
  return 10000LL * my_time->hour + 100LL * my_time->minute + my_time->second;
};

// Line 1242: range 000000000CFA8FE0-000000000CFA9008
ulonglong __fastcall TIME_to_ulonglong(const MYSQL_TIME *my_time)
{
  enum_mysql_timestamp_type time_type; // eax

  time_type = my_time->time_type;
  if ( time_type == MYSQL_TIMESTAMP_DATETIME )
    return TIME_to_ulonglong_datetime(my_time);
  if ( time_type == MYSQL_TIMESTAMP_TIME )
    return TIME_to_ulonglong_time(my_time);
  if ( time_type )
    return 0LL;
  return TIME_to_ulonglong_date(my_time);
};
