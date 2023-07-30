// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/typelib.c

// Line 26: range 000000000CFBDE70-000000000CFBDF2F
int __fastcall find_type_or_exit(const char *x, TYPELIB *typelib, const char *option)
{
  int result; // eax
  const char **type_names; // r13
  const char **v6; // rbx
  const char *v7; // rdx

  result = find_type(x, typelib, 0);
  if ( result <= 0 )
  {
    type_names = typelib->type_names;
    if ( *x )
      fprintf(stderr, "Unknown option to %s: %s\n", option, x);
    else
      fprintf(stderr, "No option given to %s\n", option);
    v6 = type_names + 1;
    fprintf(stderr, "Alternatives are: '%s'", *type_names);
    v7 = type_names[1];
    if ( v7 )
    {
      do
      {
        ++v6;
        fprintf(stderr, ",'%s'", v7);
        v7 = *v6;
      }
      while ( *v6 );
    }
    fputc(10, stderr);
    exit(1);
  }
  return result;
};

// Line 69: range 000000000CFBDC80-000000000CFBDE6E
int __fastcall find_type(const char *x, const TYPELIB *typelib, uint flags)
{
  signed int v3; // r14d
  int result; // eax
  const char **type_names; // rdi
  const char *v7; // rcx
  unsigned __int8 v8; // bp
  __int64 v9; // rbx
  int v10; // r15d
  uint v11; // r11d
  uint v12; // edx
  signed int v13; // r12d
  __int64 v14; // r10
  const char *v15; // rax
  char v16; // si
  char v17; // cl
  unsigned __int8 v18; // al
  char flagsa; // [rsp+Ch] [rbp-3Ch]

  result = 0;
  if ( !typelib->count )
    return result;
  type_names = typelib->type_names;
  v7 = *type_names;
  if ( !*type_names )
    goto LABEL_38;
  v8 = *x;
  flagsa = flags;
  v9 = 0LL;
  v10 = 0;
  v11 = flags & 8;
  v12 = flags & 1;
  do
  {
    v13 = v9;
    v14 = v8;
    v15 = x;
    if ( !v8 )
      goto LABEL_33;
LABEL_8:
    while ( !v11 || (_BYTE)v14 != 61 && (_BYTE)v14 != 44 )
    {
      v16 = *v7;
      if ( my_charset_latin1.to_upper[v14] != my_charset_latin1.to_upper[*(unsigned __int8 *)v7] )
      {
        v17 = *v15;
        goto LABEL_13;
      }
      v14 = *(unsigned __int8 *)++v15;
      if ( !(_BYTE)v14 )
      {
        v18 = v7[1];
        goto LABEL_35;
      }
      ++v7;
    }
    v16 = *v7;
    v17 = *v15;
LABEL_13:
    if ( v16 )
    {
      if ( v17 )
        goto LABEL_31;
      goto LABEL_15;
    }
    while ( v17 == 32 )
      v17 = *++v15;
    if ( !v17 || v11 && (v17 == 61 || v17 == 44) )
      return v13 + 1;
    if ( !*v15 )
    {
LABEL_30:
      ++v10;
      v3 = v13;
    }
LABEL_31:
    v7 = type_names[++v9];
    if ( !v7 )
      break;
    v13 = v9;
    v14 = v8;
    v15 = x;
    if ( v8 )
      goto LABEL_8;
LABEL_33:
    v18 = *v7;
LABEL_35:
    if ( !v18 )
      return v13 + 1;
LABEL_15:
    if ( !v12 )
      goto LABEL_30;
    v7 = type_names[++v9];
  }
  while ( v7 );
  LOBYTE(flags) = flagsa;
  if ( v10 )
  {
    result = 0;
    if ( v8 )
    {
      result = -1;
      if ( v10 == 1 && (flagsa & 1) == 0 )
        return v3 + 1;
    }
    return result;
  }
LABEL_38:
  if ( (flags & 4) == 0 )
    return 0;
  if ( *x != 35 )
    return 0;
  if ( *(strend(x) - 1) != 35 )
    return 0;
  v3 = strtol(x + 1, 0LL, 10) - 1;
  if ( v3 < 0 )
    return 0;
  if ( v3 < typelib->count )
    return v3 + 1;
  return 0;
};

// Line 135: range 000000000CFBDF60-000000000CFBDF82
void __fastcall make_type(char *to, uint nr, TYPELIB *typelib)
{
  const char *type; // rax

  if ( nr )
  {
    type = get_type(typelib, nr - 1);
    strcpy(to, type);
  }
  else
  {
    *to = 0;
  }
};

// Line 152: range 000000000CFBDF40-000000000CFBDF5A
const char *__fastcall get_type(TYPELIB *typelib, uint nr)
{
  const char *result; // rax
  const char **type_names; // rdx

  result = "?";
  if ( typelib->count > nr )
  {
    type_names = typelib->type_names;
    if ( type_names )
      return type_names[nr];
  }
  return result;
};

// Line 172: range 000000000CFBDF90-000000000CFBE05F
my_ulonglong __fastcall find_typeset(char *x, TYPELIB *lib, int *err)
{
  int v4; // eax
  my_ulonglong v5; // rbp
  char *v6; // rbx
  char v7; // al
  char v8; // cl
  int v9; // eax

  if ( !lib->count )
    return 0LL;
  *err = 0;
  if ( *x )
  {
    v4 = 0;
    v5 = 0LL;
    while ( 1 )
    {
      v6 = x;
      *err = v4 + 1;
      v7 = *x;
      if ( *x )
      {
        if ( v7 == 44 || v7 == 61 )
        {
LABEL_14:
          v6 += -(v6[1] == 0) + 1;
        }
        else
        {
          while ( 1 )
          {
            v8 = *++v6;
            if ( !*v6 )
              break;
            if ( v8 == 61 || v8 == 44 )
              goto LABEL_14;
          }
        }
      }
      v9 = find_type(x, lib, 8u) - 1;
      if ( v9 < 0 )
        return 0LL;
      v5 |= 1LL << v9;
      if ( !*v6 )
        goto LABEL_17;
      v4 = *err;
      x = v6;
    }
  }
  v5 = 0LL;
LABEL_17:
  *err = 0;
  return v5;
};

// Line 216: range 000000000CFBE060-000000000CFBE188
TYPELIB *__fastcall copy_typelib(MEM_ROOT *root, TYPELIB *from)
{
  TYPELIB *v3; // r14
  const char **type_names; // rax
  unsigned int count; // edx
  const char *name; // rsi
  char *v7; // rax
  unsigned int *type_lengths; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rbx
  char **v11; // r15
  char *v12; // rax
  __int64 v14; // rdx

  if ( !from )
    return 0LL;
  v3 = (TYPELIB *)alloc_root(root, 0x20uLL);
  if ( !v3 )
    return 0LL;
  type_names = (const char **)alloc_root(root, 12LL * (from->count + 1));
  v3->type_names = type_names;
  if ( !type_names )
    return 0LL;
  count = from->count;
  name = from->name;
  v3->count = from->count;
  v3->type_lengths = (unsigned int *)&type_names[count + 1];
  if ( name )
  {
    v7 = strdup_root(root, name);
    v3->name = v7;
    if ( v7 )
    {
      type_names = v3->type_names;
      goto LABEL_7;
    }
    return 0LL;
  }
  v3->name = 0LL;
LABEL_7:
  if ( from->count )
  {
    type_lengths = from->type_lengths;
    v9 = 0;
    do
    {
      v10 = v9;
      v11 = (char **)&type_names[v9];
      v12 = strmake_root(root, from->type_names[v9], type_lengths[v9]);
      *v11 = v12;
      if ( !v12 )
        return 0LL;
      type_lengths = from->type_lengths;
      ++v9;
      v3->type_lengths[v10] = type_lengths[v10];
      type_names = v3->type_names;
    }
    while ( from->count > v9 );
  }
  v14 = v3->count;
  type_names[v14] = 0LL;
  v3->type_lengths[v14] = 0;
  return v3;
};

// Line 323: range 000000000CFBE190-000000000CFBE379
my_ulonglong __fastcall find_set_from_flags(
        const TYPELIB *lib,
        uint default_name,
        my_ulonglong cur_set,
        my_ulonglong default_set,
        const char *str,
        uint length,
        char **err_pos,
        uint *err_len)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  const char *v10; // r12
  const char *i; // r13
  const char *v12; // r14
  int type; // eax
  char v14; // dl
  const char *v15; // r15
  int v16; // eax
  char v17; // dl
  char *v18; // r15
  char v19; // r13
  int v20; // r14d
  my_ulonglong v21; // r12
  __int64 v22; // rbp
  my_bool set_defaults; // [rsp+13h] [rbp-55h]
  my_ulonglong bit; // [rsp+28h] [rbp-40h]

  *err_pos = 0LL;
  if ( str == &str[length] )
  {
    v22 = -1LL;
    v9 = 0LL;
LABEL_31:
    v21 = cur_set;
    return v22 & (v21 | v9);
  }
  v8 = 0LL;
  v9 = 0LL;
  set_defaults = 0;
  v10 = &str[length];
  for ( i = str; ; i = v15 + 1 )
  {
    v12 = i;
    type = find_type(i, lib, 8u);
    if ( i != v10 )
    {
      v14 = *i;
      if ( *i != 61 )
      {
        do
        {
          if ( v14 == 44 )
            break;
          if ( v10 == ++v12 )
            break;
          v14 = *v12;
        }
        while ( *v12 != 61 );
      }
    }
    if ( !type )
    {
LABEL_28:
      v18 = (char *)i;
      v19 = set_defaults;
      v20 = (int)v10;
      v21 = default_set;
err:
      *err_pos = v18;
      *err_len = v20 - (_DWORD)v18;
      goto LABEL_30;
    }
    if ( default_name == type )
    {
      if ( set_defaults )
      {
        v20 = (int)v10;
        v18 = (char *)i;
        v21 = default_set;
        v19 = 1;
        goto err;
      }
      v15 = v12;
      set_defaults = 1;
    }
    else
    {
      bit = 1LL << ((unsigned __int8)type - 1);
      if ( ((v9 | v8) & bit) != 0 || v12 >= v10 || *v12 != 61 )
        goto LABEL_28;
      v15 = v12 + 1;
      v16 = find_type(v12 + 1, &on_off_default_typelib, 8u);
      if ( v10 != v12 + 1 )
      {
        v17 = v12[1];
        if ( v17 != 61 )
        {
          do
          {
            if ( v17 == 44 )
              break;
            if ( v10 == ++v15 )
              break;
            v17 = *v15;
          }
          while ( *v15 != 61 );
        }
      }
      if ( !v16 )
        goto LABEL_28;
      if ( v16 != 1 && (v16 == 2 || (bit & default_set) != 0) )
        v9 |= bit;
      else
        v8 |= bit;
    }
    if ( v10 <= v15 )
      break;
    if ( *v15 != 44 )
      goto LABEL_28;
  }
  v19 = set_defaults;
  v21 = default_set;
LABEL_30:
  v22 = ~v8;
  if ( !v19 )
    goto LABEL_31;
  return v22 & (v21 | v9);
};
