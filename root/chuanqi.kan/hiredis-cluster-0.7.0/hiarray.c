// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiarray.c

// Line 38: range 000000000CAC33A0-000000000CAC340C
hiarray *__fastcall hiarray_create(uint32_t n, size_t size)
{
  hiarray *v2; // rbx
  void *v3; // rax
  hiarray *result; // rax

  v2 = (hiarray *)hiredisAllocFns.mallocFn(0x20uLL);
  if ( !v2 )
    return 0LL;
  v3 = hiredisAllocFns.mallocFn(size * n);
  v2->elem = v3;
  if ( v3 )
  {
    v2->nelem = 0;
    v2->size = size;
    result = v2;
    v2->nalloc = n;
  }
  else
  {
    hiredisAllocFns.freeFn(v2);
    return 0LL;
  }
  return result;
};

// Line 61: range 000000000CAC3430-000000000CAC3448
void __fastcall hiarray_destroy(hiarray *a)
{
  hiarray_deinit(a);
  hiredisAllocFns.freeFn(a);
};

// Line 81: range 000000000CAC3450-000000000CAC345B
uint32_t __fastcall hiarray_idx(hiarray *a, void *elem)
{
  return (unsigned int)((_DWORD)elem - LODWORD(a->elem)) / LODWORD(a->size);
};

// Line 90: range 000000000CAC3460-000000000CAC34B0
void *__fastcall hiarray_push(hiarray *a)
{
  __int64 nelem; // rdx
  void *result; // rax
  uint32_t v3; // ecx
  size_t v4; // rdx

  nelem = a->nelem;
  if ( (_DWORD)nelem != a->nalloc )
  {
    result = a->elem;
    v3 = a->nelem;
LABEL_3:
    v4 = a->size * v3;
    a->nelem = v3 + 1;
    return (char *)result + v4;
  }
  result = hiredisAllocFns.reallocFn(a->elem, nelem * 2 * a->size);
  if ( result )
  {
    a->elem = result;
    a->nalloc *= 2;
    v3 = a->nelem;
    goto LABEL_3;
  }
  return result;
};

// Line 118: range 000000000CAC34C0-000000000CAC34D0
void *__fastcall hiarray_pop(hiarray *a)
{
  __int64 v1; // rax

  v1 = a->nelem - 1;
  a->nelem = v1;
  return (char *)a->elem + a->size * v1;
};

// Line 130: range 000000000CAC34E0-000000000CAC34EB
void *__fastcall hiarray_get(hiarray *a, uint32_t idx)
{
  return (char *)a->elem + a->size * idx;
};

// Line 138: range 000000000CAC34F0-000000000CAC34F5
void *__fastcall hiarray_top(hiarray *a)
{
  return hiarray_get(a, a->nelem - 1);
};

// Line 145: range 000000000CAC3500-000000000CAC353A
void __fastcall hiarray_swap(hiarray *a, hiarray *b)
{
  uint32_t nelem; // r8d
  void *elem; // rcx
  size_t size; // rdx
  uint32_t nalloc; // eax

  nelem = a->nelem;
  elem = a->elem;
  size = a->size;
  nalloc = a->nalloc;
  *a = *b;
  b->nelem = nelem;
  b->elem = elem;
  b->size = size;
  b->nalloc = nalloc;
};

// Line 153: range 000000000CAC3540-000000000CAC354D
void __fastcall hiarray_sort(hiarray *a, hiarray_compare_t compare)
{
  qsort(a->elem, a->nelem, a->size, compare);
};

// Line 163: range 000000000CAC3560-000000000CAC35BA
int __fastcall hiarray_each(hiarray *a, hiarray_each_t func, void *data)
{
  uint32_t nelem; // r12d
  uint32_t v5; // ebx
  void *v6; // rax
  int result; // eax

  nelem = a->nelem;
  v5 = 0;
  if ( !a->nelem )
    return 0;
  while ( 1 )
  {
    v6 = hiarray_get(a, v5);
    result = func(v6, data);
    if ( result )
      break;
    if ( ++v5 == nelem )
      return 0;
  }
  return result;
};
