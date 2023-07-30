// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/str_alloc.c

// Line 21: range 000000000CFCCE60-000000000CFCCE78
void *__fastcall my_str_malloc_default(size_t size)
{
  void *result; // rax

  result = malloc(size);
  if ( !result )
    exit(1);
  return result;
};

// Line 30: range 000000000CFCCE80-000000000CFCD5DC
// attributes: thunk
void __fastcall my_str_free_default(void *ptr)
{
  free(ptr);
};
