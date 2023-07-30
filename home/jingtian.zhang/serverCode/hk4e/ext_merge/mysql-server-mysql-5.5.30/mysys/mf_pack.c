// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/mf_pack.c

// Line 30: range 000000000CFB90E0-000000000CFB92F8
void __fastcall pack_dirname(char *to, const char *from)
{
  size_t v2; // r12
  int v3; // r14d
  size_t v4; // r15
  size_t v5; // rbp
  bool v6; // r15
  const char *v7; // rsi
  size_t v8; // rax
  void *s2; // [rsp+8h] [rbp-240h]
  char buff[512]; // [rsp+10h] [rbp-238h] BYREF

  intern_filename(to, from);
  v3 = my_getwd(buff, 0x200uLL, 0);
  if ( !v3 )
  {
    v2 = strlen(buff);
    if ( *to != 47 )
    {
      if ( *to )
      {
        v8 = strlen(to);
        bchange((uchar *)to, 0LL, (const uchar *)buff, v2, v8 + 1);
      }
    }
  }
  v4 = cleanup_dirname(to, to);
  if ( v4 )
  {
    if ( home_dir )
    {
      s2 = home_dir;
      v5 = strlen(home_dir);
      if ( *((char *)s2 + v5 - 1) == 47 )
        --v5;
      v6 = v5 > 1 && v5 < v4;
      if ( v6 )
      {
        if ( !memcmp(to, s2, v5) && to[v5] == 47 )
        {
          *to = 126;
          strmov_overlapp(to + 1, &to[v5]);
        }
      }
      else
      {
        v6 = v5 > 1;
      }
    }
    else
    {
      v6 = 0;
      v5 = 0LL;
    }
    if ( !v3 )
    {
      if ( v5 < v2 && v6 && !memcmp(buff, home_dir, v5) && buff[v5] == 47 )
      {
        buff[0] = 126;
        strmov_overlapp(&buff[1], &buff[v5]);
      }
      if ( is_prefix(to, buff) )
      {
        v7 = &to[strlen(buff)];
        if ( *v7 )
        {
          strmov_overlapp(to, v7);
        }
        else
        {
          *to = 46;
          to[1] = 47;
          to[2] = 0;
        }
      }
    }
  }
};

// Line 125: range 000000000CFB8D40-000000000CFB9040
size_t __fastcall cleanup_dirname(char *to, const char *from)
{
  const char *v2; // r13
  char v3; // dl
  char *v4; // r14
  char *i; // rbx
  __int64 v6; // r15
  char v7; // dl
  char *v8; // r9
  int v9; // eax
  char v10; // al
  size_t v11; // rbx
  char *v13; // rax
  char *v14; // rax
  char *v15; // [rsp+0h] [rbp-278h]
  char *v16; // [rsp+0h] [rbp-278h]
  char parent[5]; // [rsp+20h] [rbp-258h] BYREF
  char buff[513]; // [rsp+30h] [rbp-248h] BYREF

  v2 = from + 1;
  v3 = *from;
  strcpy(parent, "/..");
  buff[0] = v3;
  if ( !v3 )
  {
    v11 = 0LL;
    goto LABEL_34;
  }
  v4 = buff;
  for ( i = buff; ; ++i )
  {
    if ( v3 == 47 )
    {
      *i = 47;
    }
    else if ( *i != 47 )
    {
      goto LABEL_4;
    }
    v6 = i - v4;
    if ( (unsigned __int64)(i - v4) <= 3 )
    {
      if ( v6 == 2 )
      {
        if ( !memcmp(v4, &parent[1], 2uLL) )
        {
          v4 = i;
          goto LABEL_4;
        }
        v10 = *(i - 1);
        if ( v10 == 47 )
        {
LABEL_36:
          --i;
          goto LABEL_4;
        }
      }
      else
      {
LABEL_22:
        if ( v6 <= 0 )
          goto LABEL_26;
        v10 = *(i - 1);
        if ( v10 == 47 )
          goto LABEL_36;
        if ( v6 == 1 )
        {
LABEL_26:
          if ( i > &buff[1] && *(i - 1) == 126 && *(i - 2) == 47 )
          {
            qmemcpy(buff, "~/", 2);
            v4 = buff;
            i = &buff[1];
          }
          goto LABEL_4;
        }
      }
      if ( v10 == 46 && *(i - 2) == 47 )
      {
        i -= 2;
        goto LABEL_4;
      }
      goto LABEL_26;
    }
    if ( memcmp(i - 3, parent, 3uLL) )
      goto LABEL_22;
    if ( v4 == i - 3 )
    {
      i = v4;
      goto LABEL_4;
    }
    v7 = *(i - 4);
    v8 = i - 4;
    if ( v7 != 126 )
      goto LABEL_12;
    if ( v8 == v4 || *(i - 5) == 47 )
    {
      if ( !home_dir )
        goto LABEL_4;
      v13 = stpcpy(buff, home_dir);
      v7 = *(v13 - 1);
      if ( v7 == 47 )
      {
        v8 = v13 - 2;
        v7 = *(v13 - 2);
      }
      else
      {
        v8 = v13 - 1;
      }
LABEL_12:
      if ( v7 == 46 && (v8 == v4 || *(v8 - 1) == 47) )
      {
        v16 = v8;
        if ( my_getwd(curr_dir, 0x200uLL, 0) )
        {
          i = v16 + 4;
          goto LABEL_4;
        }
        v14 = stpcpy(buff, curr_dir);
        v8 = v14 - 1;
        if ( *(v14 - 1) == 47 )
          v8 = v14 - 2;
      }
    }
    i = v8;
    if ( v8 < v4 )
      goto LABEL_20;
    if ( *v8 != 47 )
    {
      while ( --i >= v4 )
      {
        if ( *i == 47 )
          goto LABEL_15;
      }
LABEL_20:
      if ( i[1] != 126 )
        goto LABEL_4;
LABEL_21:
      i = stpcpy(v8 + 1, parent);
      *i = 47;
      goto LABEL_4;
    }
LABEL_15:
    if ( i[1] == 126 )
      goto LABEL_21;
    v15 = v8;
    v9 = memcmp(i, parent, 3uLL);
    v8 = v15;
    if ( !v9 )
      goto LABEL_21;
LABEL_4:
    v3 = *v2++;
    i[1] = v3;
    if ( !v3 )
      break;
  }
  v11 = i + 1 - buff;
LABEL_34:
  strcpy(to, buff);
  return v11;
};

// Line 293: range 000000000CFB9300-000000000CFB9385
size_t __fastcall normalize_dirname(char *to, const char *from)
{
  char *v2; // kr00_8
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  char buff[512]; // [rsp+2h] [rbp-218h] BYREF

  intern_filename(buff, from);
  v2 = &buff[strlen(buff)];
  v3 = v2 - buff;
  if ( v2 != buff && buff[v3 - 1] != 47 )
  {
    v4 = 510LL;
    if ( v3 <= 0x1FE )
      v4 = v2 - buff;
    buff[v4] = 47;
    buff[v4 + 1] = 0;
  }
  return cleanup_dirname(to, buff);
};

// Line 340: range 000000000CFB9390-000000000CFB94E3
size_t __fastcall unpack_dirname(char *to, const char *from)
{
  size_t v3; // rax
  size_t v5; // r13
  char *v6; // r12
  char v7; // r15
  struct passwd *v8; // r14
  const char *pw_dir; // r14
  size_t v10; // r15
  size_t v11; // r13
  char *v12; // rdi
  char buff[517]; // [rsp+0h] [rbp-248h] BYREF

  v3 = normalize_dirname(buff, from);
  if ( buff[0] != 126 )
    return system_filename(to, buff);
  v5 = v3;
  if ( buff[1] == 47 )
  {
    v6 = &buff[1];
    pw_dir = home_dir;
    goto LABEL_8;
  }
  v6 = strchr(&buff[1], 47);
  if ( !v6 )
    v6 = strend(&buff[1]);
  v7 = *v6;
  *v6 = 0;
  v8 = getpwnam(&buff[1]);
  *v6 = v7;
  endpwent();
  if ( v8 )
  {
    pw_dir = v8->pw_dir;
LABEL_8:
    if ( pw_dir )
    {
      v10 = v5 + buff - v6 + 1;
      v11 = strlen(pw_dir);
      if ( v11 + v10 <= 0x200 )
      {
        v12 = buff;
        if ( v11 )
        {
          v12 = &buff[v11];
          if ( pw_dir[v11 - 1] == 47 )
            v12 = &buff[--v11];
        }
        if ( v6 <= v12 )
          bmove_upp((uchar *)&buff[v11 + v10], (const uchar *)&v6[v10], v10);
        else
          memmove(v12, v6, v10);
        memmove(buff, pw_dir, v11);
      }
    }
  }
  return system_filename(to, buff);
};

// Line 420: range 000000000CFB94F0-000000000CFB958A
size_t __fastcall unpack_filename(char *to, const char *from)
{
  const char *v2; // r12
  size_t v3; // r13
  size_t v4; // rax
  size_t buff_length; // [rsp+8h] [rbp-230h] BYREF
  char buff[512]; // [rsp+10h] [rbp-228h] BYREF

  v2 = &from[dirname_part(buff, from, &buff_length)];
  v3 = unpack_dirname(buff, buff);
  v4 = strlen(v2);
  if ( v4 + v3 > 0x1FF )
    return system_filename(to, from);
  memcpy(&buff[v3], v2, v4 + 1);
  return system_filename(to, buff);
};

// Line 443: range 000000000CFB9050-000000000CFB9062
size_t __fastcall system_filename(char *to, const char *from)
{
  return strmake(to, from, 0x1FFuLL) - to;
};

// Line 450: range 000000000CFB9070-000000000CFB90D5
char *__fastcall intern_filename(char *to, const char *from)
{
  const char *v2; // rbp
  size_t v3; // rax
  size_t to_length; // [rsp+8h] [rbp-220h] BYREF
  char buff[512]; // [rsp+10h] [rbp-218h] BYREF

  v2 = from;
  if ( from == to )
  {
    v2 = buff;
    strnmov(buff, from, 0x200uLL);
  }
  v3 = dirname_part(to, v2, &to_length);
  strnmov(&to[to_length], &v2[v3], 512 - to_length);
  return to;
};
