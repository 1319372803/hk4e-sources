// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_malloc.c

// Line 29: range 000000000CFBB900-000000000CFBB9AC
void *__fastcall my_malloc(size_t size, myf my_flags)
{
  size_t v2; // rbx
  void *v3; // rax
  void *v4; // rbp
  st_my_thread_var *v6; // r13

  v2 = size;
  if ( !size )
    v2 = 1LL;
  v3 = malloc(v2);
  v4 = v3;
  if ( v3 )
  {
    if ( (my_flags & 0x20) != 0 )
      memset(v3, 0, v2);
  }
  else
  {
    v6 = my_thread_var();
    v6->thr_errno = *__errno_location();
    if ( (my_flags & 8) != 0 )
      error_handler_hook = fatal_error_handler_hook;
    if ( (my_flags & 0x18) != 0 )
      my_error(5, 100, v2);
    if ( (my_flags & 8) != 0 )
      exit(1);
  }
  return v4;
};

// Line 128: range 000000000CFBB9B0-000000000CFBBA70
// attributes: thunk
void __fastcall my_free(void *ptr)
{
  free(ptr);
};

// Line 134: range 000000000CFBBA80-000000000CFBBAB8
void *__fastcall my_memdup(const void *from, size_t length, myf my_flags)
{
  void *v3; // rax
  void *v4; // rcx

  v3 = my_malloc(length, my_flags);
  v4 = v3;
  if ( v3 )
    return memcpy(v3, from, length);
  return v4;
};

// Line 143: range 000000000CFBBAC0-000000000CFBBAFE
char *__fastcall my_strdup(const char *from, myf my_flags)
{
  size_t v2; // rbp
  char *v3; // rax
  char *v4; // rcx

  v2 = strlen(from) + 1;
  v3 = (char *)my_malloc(v2, my_flags);
  v4 = v3;
  if ( v3 )
    return (char *)memcpy(v3, from, v2);
  return v4;
};

// Line 153: range 000000000CFBBB00-000000000CFBBB3D
char *__fastcall my_strndup(const char *from, size_t length, myf my_flags)
{
  char *v3; // rax
  char *v4; // rcx

  v3 = (char *)my_malloc(length + 1, my_flags);
  v4 = v3;
  if ( v3 )
  {
    v4 = (char *)memcpy(v3, from, length);
    v4[length] = 0;
  }
  return v4;
};
