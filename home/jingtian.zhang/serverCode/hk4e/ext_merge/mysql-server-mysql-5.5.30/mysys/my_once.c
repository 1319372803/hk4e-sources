// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_once.c

// Line 37: range 000000000CFBBBD0-000000000CFBBCFC
void *__fastcall my_once_alloc(size_t Size, myf MyFlags)
{
  size_t v2; // rbx
  USED_MEM *v3; // r10
  unsigned int left; // r9d
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  USED_MEM *next; // rax
  USED_MEM **p_next; // rbp
  unsigned __int64 v9; // r8
  size_t v10; // r12
  int v11; // edx
  char *v12; // rbp
  st_my_thread_var *v14; // rbx

  v2 = (Size + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v3 = my_once_root_block;
  if ( my_once_root_block )
  {
    left = my_once_root_block->left;
    v5 = left;
    if ( left >= v2 )
    {
      next = my_once_root_block;
LABEL_16:
      v11 = next->size;
      goto LABEL_17;
    }
    v6 = 0LL;
    while ( 1 )
    {
      next = v3->next;
      if ( v6 < v5 )
        v6 = v5;
      if ( !next )
        break;
      left = next->left;
      v5 = left;
      if ( v2 <= left )
        goto LABEL_16;
      v3 = v3->next;
    }
    p_next = &v3->next;
    v9 = 4 * v6;
  }
  else
  {
    v9 = 0LL;
    p_next = &my_once_root_block;
  }
  v10 = v2 + 16;
  if ( my_once_extra > v9 && v10 < my_once_extra )
    v10 = my_once_extra;
  next = (USED_MEM *)malloc(v10);
  if ( !next )
  {
    v14 = my_thread_var();
    v12 = 0LL;
    v14->thr_errno = *__errno_location();
    if ( (MyFlags & 0x18) != 0 )
      my_error(5, 36, v10);
    return v12;
  }
  left = v10 - 16;
  next->next = 0LL;
  next->size = v10;
  v11 = v10;
  next->left = v10 - 16;
  *p_next = next;
LABEL_17:
  next->left = left - v2;
  v12 = (char *)next + v11 - left;
  if ( (MyFlags & 0x20) == 0 )
    return v12;
  memset(v12, 0, v2);
  return v12;
};

// Line 81: range 000000000CFBBD00-000000000CFBBD3E
char *__fastcall my_once_strdup(const char *src, myf myflags)
{
  size_t v2; // rbp
  char *v3; // rax
  char *v4; // rcx

  v2 = strlen(src) + 1;
  v3 = (char *)my_once_alloc(v2, myflags);
  v4 = v3;
  if ( v3 )
    return (char *)memcpy(v3, src, v2);
  return v4;
};

// Line 91: range 000000000CFBBD40-000000000CFBBD78
void *__fastcall my_once_memdup(const void *src, size_t len, myf myflags)
{
  void *v3; // rax
  void *v4; // rcx

  v3 = my_once_alloc(len, myflags);
  v4 = v3;
  if ( v3 )
    return memcpy(v3, src, len);
  return v4;
};

// Line 107: range 000000000CFBBD80-000000000CFBBDBE
void __cdecl my_once_free()
{
  USED_MEM *v0; // rdi
  USED_MEM *next; // rbx

  v0 = my_once_root_block;
  if ( my_once_root_block )
  {
    while ( 1 )
    {
      next = v0->next;
      free(v0);
      if ( !next )
        break;
      v0 = next;
    }
  }
  my_once_root_block = 0LL;
};
