// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/include/lock_free_utils.h

// Line 85: range 000000000C6A054A-000000000C6A0564
void __cdecl common::tools::LockFreeStack<GateserverSession *>::~LockFreeStack(
        common::tools::LockFreeStack<GateserverSession*> *const this)
{
  common::tools::LockFreeStackBase::~LockFreeStackBase(this);
};

// Line 85: range 000000000C6A0356-000000000C6A0370
void __cdecl common::tools::LockFreeStack<HttpSession *>::~LockFreeStack(
        common::tools::LockFreeStack<HttpSession*> *const this)
{
  common::tools::LockFreeStackBase::~LockFreeStackBase(this);
};

// Line 85: range 000000000C636AC8-000000000C636AE2
void __cdecl common::tools::LockFreeStack<void *>::~LockFreeStack(common::tools::LockFreeStack<void*> *const this)
{
  common::tools::LockFreeStackBase::~LockFreeStackBase(this);
};

// Line 88: range 000000000C6A1236-000000000C6A1258
void __cdecl common::tools::LockFreeStack<GateserverSession *>::LockFreeStack(
        common::tools::LockFreeStack<GateserverSession*> *const this,
        uint32_t size)
{
  common::tools::LockFreeStackBase::LockFreeStackBase(this, size);
};

// Line 88: range 000000000C6A0D74-000000000C6A0D96
void __cdecl common::tools::LockFreeStack<HttpSession *>::LockFreeStack(
        common::tools::LockFreeStack<HttpSession*> *const this,
        uint32_t size)
{
  common::tools::LockFreeStackBase::LockFreeStackBase(this, size);
};

// Line 88: range 000000000C65779A-000000000C6577BC
void __cdecl common::tools::LockFreeStack<void *>::LockFreeStack(
        common::tools::LockFreeStack<void*> *const this,
        uint32_t size)
{
  common::tools::LockFreeStackBase::LockFreeStackBase(this, size);
};

// Line 90: range 000000000C6C91DA-000000000C6C91FE
bool __cdecl common::tools::LockFreeStack<GateserverSession *>::push(
        common::tools::LockFreeStack<GateserverSession*> *const this,
        GateserverSession **p)
{
  return common::tools::LockFreeStackBase::push(this, (common::tools::LockFreeStackBase::ElemType *)p);
};

// Line 90: range 000000000C6CB8C6-000000000C6CB8EA
bool __cdecl common::tools::LockFreeStack<HttpSession *>::push(
        common::tools::LockFreeStack<HttpSession*> *const this,
        HttpSession **p)
{
  return common::tools::LockFreeStackBase::push(this, (common::tools::LockFreeStackBase::ElemType *)p);
};

// Line 90: range 000000000C6577E4-000000000C657808
bool __cdecl common::tools::LockFreeStack<void *>::push(common::tools::LockFreeStack<void*> *const this, void **p)
{
  return common::tools::LockFreeStackBase::push(this, (common::tools::LockFreeStackBase::ElemType *)p);
};

// Line 96: range 000000000C6A1DA4-000000000C6A1DC8
bool __cdecl common::tools::LockFreeStack<GateserverSession *>::pop(
        common::tools::LockFreeStack<GateserverSession*> *const this,
        GateserverSession **p)
{
  return common::tools::LockFreeStackBase::pop(this, (common::tools::LockFreeStackBase::ElemType *)p);
};

// Line 96: range 000000000C6A18F0-000000000C6A1914
bool __cdecl common::tools::LockFreeStack<HttpSession *>::pop(
        common::tools::LockFreeStack<HttpSession*> *const this,
        HttpSession **p)
{
  return common::tools::LockFreeStackBase::pop(this, (common::tools::LockFreeStackBase::ElemType *)p);
};

// Line 96: range 000000000C6577BE-000000000C6577E2
bool __cdecl common::tools::LockFreeStack<void *>::pop(common::tools::LockFreeStack<void*> *const this, void **p)
{
  return common::tools::LockFreeStackBase::pop(this, (common::tools::LockFreeStackBase::ElemType *)p);
};

// Line 106: range 000000000C636AE4-000000000C636B43
// local variable allocation has failed, the output may be wrong!
void __cdecl common::tools::MemPool::MemPool(common::tools::MemPool *const this, uint32_t size)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&size);
  }
  this->mem_len_ = 0;
  common::tools::LockFreeStack<void *>::LockFreeStack(&this->stack_, size);
};

// Line 108: range 000000000C636B44-000000000C636B6E
void __cdecl common::tools::MemPool::~MemPool(common::tools::MemPool *const this)
{
  common::tools::MemPool::clear(this);
  common::tools::LockFreeStack<void *>::~LockFreeStack(&this->stack_);
};

// Line 114: range 000000000C636B70-000000000C636C55
void __cdecl common::tools::MemPool::clear(common::tools::MemPool *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 p:116";
  *(_QWORD *)(v1 + 16) = common::tools::MemPool::clear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = 0LL;
  while ( common::tools::LockFreeStack<void *>::pop(&this->stack_, (void **)(v1 + 32)) )
    free(*(void **)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 123: range 000000000C636C56-000000000C636C9F
// local variable allocation has failed, the output may be wrong!
void __cdecl common::tools::MemPool::setMemLen(common::tools::MemPool *const this, uint32_t mem_len)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&mem_len);
  }
  this->mem_len_ = mem_len;
};

// Line 129: range 000000000C636CA0-000000000C636E55
void *__cdecl common::tools::MemPool::malloc(common::tools::MemPool *const this, bool set_zero)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  void *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 p:133";
  *(_QWORD *)(v2 + 16) = common::tools::MemPool::malloc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->mem_len_ )
  {
    *(_QWORD *)(v2 + 32) = 0LL;
    if ( !common::tools::LockFreeStack<void *>::pop(&this->stack_, (void **)(v2 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      *(_QWORD *)(v2 + 32) = malloc(this->mem_len_);
    }
    if ( set_zero )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      bzero(*(void **)(v2 + 32), this->mem_len_);
    }
    result = *(void **)(v2 + 32);
  }
  else
  {
    result = 0LL;
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000C636E56-000000000C636F4B
void __fastcall common::tools::MemPool::free(common::tools::MemPool *const this, void *p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 p:142";
  *(_QWORD *)(v2 + 16) = common::tools::MemPool::free;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = p;
  if ( *(_QWORD *)(v2 + 32) && !common::tools::LockFreeStack<void *>::push(&this->stack_, (void **)(v2 + 32)) )
    free(*(void **)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 160: range 000000000C6A0566-000000000C6A0588
void __cdecl common::tools::ObjectPool<GateserverSession>::ObjectPool(
        common::tools::ObjectPool<GateserverSession> *const this,
        uint32_t size)
{
  common::tools::LockFreeStack<GateserverSession *>::LockFreeStack(&this->stack_, size);
};

// Line 160: range 000000000C6A0372-000000000C6A0394
void __cdecl common::tools::ObjectPool<HttpSession>::ObjectPool(
        common::tools::ObjectPool<HttpSession> *const this,
        uint32_t size)
{
  common::tools::LockFreeStack<HttpSession *>::LockFreeStack(&this->stack_, size);
};

// Line 162: range 000000000C6A058A-000000000C6A05B0
void __cdecl common::tools::ObjectPool<GateserverSession>::~ObjectPool(
        common::tools::ObjectPool<GateserverSession> *const this)
{
  common::tools::ObjectPool<GateserverSession>::clear(this);
  common::tools::LockFreeStack<GateserverSession *>::~LockFreeStack(&this->stack_);
};

// Line 162: range 000000000C6A0396-000000000C6A03BC
void __cdecl common::tools::ObjectPool<HttpSession>::~ObjectPool(common::tools::ObjectPool<HttpSession> *const this)
{
  common::tools::ObjectPool<HttpSession>::clear(this);
  common::tools::LockFreeStack<HttpSession *>::~LockFreeStack(&this->stack_);
};

// Line 162: range 000000000C7FA3B2-000000000C7FA48C
void __fastcall common::tools::ObjectPool<common::minet::Packet>::~ObjectPool(
        common::tools::ObjectPool<common::minet::Packet> *const this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _BYTE v4[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v1 = v3;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 p:170";
  *(_QWORD *)(v1 + 16) = common::tools::ObjectPool<common::minet::Packet>::~ObjectPool;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = 0LL;
  while ( common::tools::LockFreeStackBase::pop(&this->stack_, (common::tools::LockFreeStackBase::ElemType *)(v1 + 32)) )
    free(*(void **)(v1 + 32));
  common::tools::LockFreeStackBase::~LockFreeStackBase(&this->stack_);
  if ( v4 == (_BYTE *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 168: range 000000000C6A125A-000000000C6A133B
void __cdecl common::tools::ObjectPool<GateserverSession>::clear(
        common::tools::ObjectPool<GateserverSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 p:170";
  *(_QWORD *)(v1 + 16) = common::tools::ObjectPool<GateserverSession>::clear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = 0LL;
  while ( common::tools::LockFreeStack<GateserverSession *>::pop(&this->stack_, (GateserverSession **)(v1 + 32)) )
    free(*(void **)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 168: range 000000000C6A0D98-000000000C6A0E79
void __cdecl common::tools::ObjectPool<HttpSession>::clear(common::tools::ObjectPool<HttpSession> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 p:170";
  *(_QWORD *)(v1 + 16) = common::tools::ObjectPool<HttpSession>::clear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = 0LL;
  while ( common::tools::LockFreeStack<HttpSession *>::pop(&this->stack_, (HttpSession **)(v1 + 32)) )
    free(*(void **)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 180: range 000000000C6C00D4-000000000C6C0229
GateserverSession *__fastcall common::tools::ObjectPool<GateserverSession>::construct<boost::asio::io_context &>(
        common::tools::ObjectPool<GateserverSession> *const this,
        boost::asio::io_context *a2,
        boost::asio::io_context *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GateserverSession *v6; // rax
  GateserverSession *result; // rax
  boost::asio::io_context *ioc; // [rsp+8h] [rbp-88h]
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 p:182";
  *(_QWORD *)(v3 + 16) = common::tools::ObjectPool<GateserverSession>::construct<boost::asio::io_context &>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( !common::tools::LockFreeStack<GateserverSession *>::pop(&this->stack_, (GateserverSession **)(v3 + 32)) )
    *(_QWORD *)(v3 + 32) = malloc(0x218uLL);
  if ( *(_QWORD *)(v3 + 32) )
  {
    ioc = std::forward<boost::asio::io_context &>(a2);
    v6 = (GateserverSession *)operator new(0x218uLL, *(void **)(v3 + 32));
    GateserverSession::GateserverSession(v6, ioc);
  }
  result = *(GateserverSession **)(v3 + 32);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 180: range 000000000C6C411A-000000000C6C426F
HttpSession *__fastcall common::tools::ObjectPool<HttpSession>::construct<boost::asio::io_context &>(
        common::tools::ObjectPool<HttpSession> *const this,
        boost::asio::io_context *a2,
        boost::asio::io_context *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  HttpSession *v6; // rax
  HttpSession *result; // rax
  boost::asio::io_context *ioc; // [rsp+8h] [rbp-88h]
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 p:182";
  *(_QWORD *)(v3 + 16) = common::tools::ObjectPool<HttpSession>::construct<boost::asio::io_context &>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( !common::tools::LockFreeStack<HttpSession *>::pop(&this->stack_, (HttpSession **)(v3 + 32)) )
    *(_QWORD *)(v3 + 32) = malloc(0x3B8uLL);
  if ( *(_QWORD *)(v3 + 32) )
  {
    ioc = std::forward<boost::asio::io_context &>(a2);
    v6 = (HttpSession *)operator new(0x3B8uLL, *(void **)(v3 + 32));
    HttpSession::HttpSession(v6, ioc);
  }
  result = *(HttpSession **)(v3 + 32);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 191: range 000000000C6C1C34-000000000C6C1D80
void __fastcall common::tools::ObjectPool<GateserverSession>::destroy(
        common::tools::ObjectPool<GateserverSession> *const this,
        GateserverSession *p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 p:191";
  *(_QWORD *)(v2 + 16) = common::tools::ObjectPool<GateserverSession>::destroy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = p;
  if ( *(_QWORD *)(v2 + 32) )
  {
    v5 = *(unsigned __int64 **)(v2 + 32);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      v6 = (unsigned __int64 *)__asan_report_load8(*(_QWORD *)(v2 + 32));
    v7 = *v6;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    (*(void (__fastcall **)(unsigned __int64 *))v7)(v5);
    if ( !common::tools::LockFreeStack<GateserverSession *>::push(&this->stack_, (GateserverSession **)(v2 + 32)) )
      free(*(void **)(v2 + 32));
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 191: range 000000000C6C5A08-000000000C6C5B54
void __fastcall common::tools::ObjectPool<HttpSession>::destroy(
        common::tools::ObjectPool<HttpSession> *const this,
        HttpSession *p)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 p:191";
  *(_QWORD *)(v2 + 16) = common::tools::ObjectPool<HttpSession>::destroy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = p;
  if ( *(_QWORD *)(v2 + 32) )
  {
    v5 = *(unsigned __int64 **)(v2 + 32);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      v6 = (unsigned __int64 *)__asan_report_load8(*(_QWORD *)(v2 + 32));
    v7 = *v6;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    (*(void (__fastcall **)(unsigned __int64 *))v7)(v5);
    if ( !common::tools::LockFreeStack<HttpSession *>::push(&this->stack_, (HttpSession **)(v2 + 32)) )
      free(*(void **)(v2 + 32));
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
