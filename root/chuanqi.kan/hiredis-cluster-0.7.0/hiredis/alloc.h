// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/alloc.h

// Line 58: range 000000000CAC8CE0-000000000CAC8D16
void *__fastcall callbackValDup(void *privdata, const void *src)
{
  void *result; // rax

  result = hiredisAllocFns.mallocFn(0x20uLL);
  if ( result )
  {
    *(_QWORD *)result = *(_QWORD *)src;
    *((_QWORD *)result + 1) = *((_QWORD *)src + 1);
    *((_QWORD *)result + 2) = *((_QWORD *)src + 2);
    *((_QWORD *)result + 3) = *((_QWORD *)src + 3);
  }
  return result;
};

// Line 58: range 000000000CAC8BB0-000000000CAC8BBA
void *__fastcall sds_malloc(size_t size)
{
  return hiredisAllocFns.mallocFn(size);
};

// Line 62: range 000000000CAC3AF0-000000000CAC3B5D
void *__fastcall createNilObject(const redisReadTask_0 *task)
{
  void *result; // rax
  redisReadTask *parent; // rdx
  _QWORD *obj; // rdx

  result = hiredisAllocFns.callocFn(1LL, 64LL);
  if ( result )
  {
    parent = task->parent;
    *(_DWORD *)result = 4;
    if ( parent )
    {
      obj = parent->obj;
      if ( (unsigned int)(*(_DWORD *)obj - 9) > 1 && *(_DWORD *)obj != 2 )
        __assert_fail(
          "parent->type == 2 || parent->type == 9 || parent->type == 10",
          "hiredis.c",
          0x104u,
          "createNilObject");
      *(_QWORD *)(obj[7] + 8LL * task->idx) = result;
    }
  }
  return result;
};

// Line 66: range 000000000CAC8BC0-000000000CAC8BCB
void *__fastcall sds_realloc(void *ptr, size_t size)
{
  return hiredisAllocFns.reallocFn(ptr, size);
};

// Line 74: range 000000000CAC8CC0-000000000CAC8CCE
void __fastcall callbackValDestructor(void *privdata, void *val)
{
  hiredisAllocFns.freeFn(val);
};

// Line 74: range 000000000CAC3410-000000000CAC342B
void __fastcall hiarray_deinit(hiarray *a)
{
  hiredisAllocFns.freeFn(a->elem);
  a->elem = 0LL;
};

// Line 74: range 000000000CAB7970-000000000CAB7990
void __fastcall listClusterSlotDestructor(void *val)
{
  *(_DWORD *)val = 0;
  *((_DWORD *)val + 1) = 0;
  *((_QWORD *)val + 1) = 0LL;
  ((void (*)(void))hiredisAllocFns.freeFn)();
};

// Line 74: range 000000000CAC0BB0-000000000CAC0BBB
void __fastcall listReleaseIterator(listIter_0 *iter)
{
  hiredisAllocFns.freeFn(iter);
};

// Line 74: range 000000000CAC4F90-000000000CAC4F9B
void __fastcall redisFreeCommand(char *cmd)
{
  hiredisAllocFns.freeFn(cmd);
};

// Line 74: range 000000000CAC8BD0-000000000CAC8BDB
void __fastcall sds_free(void *ptr)
{
  hiredisAllocFns.freeFn(ptr);
};
