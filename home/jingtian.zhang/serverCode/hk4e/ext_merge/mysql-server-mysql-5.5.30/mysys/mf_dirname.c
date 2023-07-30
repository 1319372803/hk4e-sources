// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/mf_dirname.c

// Line 33: range 000000000CFB8900-000000000CFB8929
size_t __fastcall dirname_length(const char *name)
{
  char v1; // cl
  const char *v2; // rax
  const char *v3; // rdx

  v1 = *name;
  v2 = name - 1;
  if ( *name )
  {
    v3 = name;
    do
    {
      if ( v1 == 47 )
        v2 = v3;
      v1 = *++v3;
    }
    while ( *v3 );
  }
  return v2 + 1 - name;
};

// Line 64: range 000000000CFB8980-000000000CFB89C1
size_t __fastcall dirname_part(char *to, const char *name, size_t *to_res_length)
{
  size_t v4; // r12

  v4 = dirname_length(name);
  *to_res_length = convert_dirname(to, name, &name[v4]) - to;
  return v4;
};

// Line 113: range 000000000CFB8930-000000000CFB8975
char *__fastcall convert_dirname(char *to, const char *from, const char *from_end)
{
  signed __int64 v3; // rdx
  char *result; // rax
  char v5; // dl

  if ( !from_end || (v3 = from_end - from, v3 > 510) )
    v3 = 510LL;
  result = strmake(to, from, v3);
  if ( to != result )
  {
    v5 = *(result - 1);
    if ( v5 )
    {
      if ( v5 != 47 )
      {
        *result = 47;
        *++result = 0;
      }
    }
  }
  return result;
};
