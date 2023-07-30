// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/alloc.c

// Line 46: range 000000000CAC35C0-000000000CAC3616
hiredisAllocFuncs_0 *__fastcall hiredisSetAllocators(hiredisAllocFuncs_0 *retstr, hiredisAllocFuncs_0 *override)
{
  hiredisAllocFuncs_0 *result; // rax
  void *(*mallocFn)(size_t); // r10
  void *(*callocFn)(size_t, size_t); // r11
  void *(*v5)(size_t, size_t); // r9
  void *(*reallocFn)(void *, size_t); // r8
  char *(*strdupFn)(const char *); // rdi
  void (*freeFn)(void *); // rcx
  void *(*v9)(void *, size_t); // r11

  result = retstr;
  mallocFn = hiredisAllocFns.mallocFn;
  hiredisAllocFns.mallocFn = override->mallocFn;
  callocFn = override->callocFn;
  v5 = hiredisAllocFns.callocFn;
  reallocFn = hiredisAllocFns.reallocFn;
  strdupFn = hiredisAllocFns.strdupFn;
  freeFn = hiredisAllocFns.freeFn;
  result->mallocFn = mallocFn;
  hiredisAllocFns.callocFn = callocFn;
  v9 = override->reallocFn;
  result->callocFn = v5;
  result->reallocFn = reallocFn;
  result->strdupFn = strdupFn;
  result->freeFn = freeFn;
  hiredisAllocFns.reallocFn = v9;
  hiredisAllocFns.strdupFn = override->strdupFn;
  hiredisAllocFns.freeFn = override->freeFn;
  return result;
};

// Line 55: range 000000000CAC3620-000000000CAC365D
void __cdecl hiredisResetAllocators()
{
  hiredisAllocFns.mallocFn = (void *(*)(size_t))&malloc;
  hiredisAllocFns.callocFn = (void *(*)(size_t, size_t))&calloc;
  hiredisAllocFns.reallocFn = (void *(*)(void *, size_t))&realloc;
  hiredisAllocFns.strdupFn = (char *(*)(const char *))&strdup;
  hiredisAllocFns.freeFn = (void (*)(void *))&free;
};
