// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/mf_format.c

// Line 28: range 000000000CFB8A70-000000000CFB8D32
char *__fastcall fn_format(char *to, const char *name, const char *dir, const char *extension, uint flag)
{
  __int16 v7; // bx
  size_t v8; // rax
  const char *v9; // r14
  char *v10; // rax
  size_t v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rbp
  char *v16; // rax
  size_t v17; // rax
  size_t v18; // rdx
  char *v19; // rax
  size_t lengtha; // [rsp+0h] [rbp-458h]
  size_t dev_length; // [rsp+18h] [rbp-440h] BYREF
  char dev[512]; // [rsp+20h] [rbp-438h] BYREF
  char buff[512]; // [rsp+220h] [rbp-238h] BYREF

  v7 = flag;
  v8 = dirname_part(dev, name, &dev_length);
  v9 = &name[v8];
  if ( v8 && (v7 & 1) == 0 )
  {
    if ( (v7 & 0x80u) != 0 && !test_if_hard_path(dev) )
    {
      strmake(buff, dev, 0x1FFuLL);
      v16 = convert_dirname(dev, dir, 0LL);
      strmake(v16, buff, 511LL - (int)((_DWORD)v16 - (unsigned int)dev));
    }
  }
  else
  {
    convert_dirname(dev, dir, 0LL);
  }
  if ( (v7 & 8) != 0 )
  {
    pack_dirname(dev, dev);
    if ( (v7 & 4) == 0 )
      goto LABEL_6;
LABEL_28:
    unpack_dirname(dev, dev);
    goto LABEL_6;
  }
  if ( (v7 & 4) != 0 )
    goto LABEL_28;
LABEL_6:
  if ( (v7 & 0x100) != 0 || (v10 = strchr(v9, 46)) == 0LL )
  {
    lengtha = strlength(v9);
    v11 = strlen(extension);
  }
  else if ( (v7 & 2) != 0 )
  {
    lengtha = v10 - v9;
    v11 = strlen(extension);
  }
  else
  {
    extension = &off_1B23A528[4];
    lengtha = strlength(v9);
    v11 = 0LL;
  }
  if ( lengtha + strlen(dev) + v11 > 0x1FF || lengtha > 0xFF )
  {
    v14 = 0LL;
    if ( (v7 & 0x40) != 0 )
      return v14;
    v17 = strlength(name);
    v18 = 511LL;
    if ( v17 <= 0x1FF )
      v18 = v17;
    strmake(to, name, v18);
    if ( (v7 & 0x20) != 0 )
      goto LABEL_15;
  }
  else
  {
    if ( name == to )
      v9 = (const char *)memcpy(buff, v9, lengtha);
    v12 = stpcpy(to, dev);
    v13 = strmake(v12, v9, lengtha);
    strcpy(v13, extension);
    if ( (v7 & 0x20) != 0 )
    {
LABEL_15:
      v14 = to;
      my_realpath(to, to, (8 * (_BYTE)v7) & 0x80);
      return v14;
    }
  }
  v14 = to;
  if ( (v7 & 0x10) != 0 )
  {
    v19 = strcpy(buff, to);
    my_readlink(to, v19, 0);
  }
  return v14;
};

// Line 122: range 000000000CFB8A20-000000000CFB8A63
size_t __fastcall strlength(const char *str)
{
  char v1; // dl
  const char *v2; // rcx
  const char *v3; // rax

  v1 = *str;
  v2 = str;
  v3 = str;
  while ( v1 )
  {
    while ( v1 != 32 )
    {
      v1 = *++v3;
      if ( !*v3 )
        return v3 - str;
    }
    v2 = v3;
    do
      v1 = *++v3;
    while ( *v3 == 32 );
  }
  v3 = v2;
  return v3 - str;
};
