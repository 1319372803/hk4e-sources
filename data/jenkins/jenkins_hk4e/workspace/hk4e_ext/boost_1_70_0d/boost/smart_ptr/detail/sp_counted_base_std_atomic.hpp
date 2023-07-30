// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/detail/sp_counted_base_std_atomic.hpp

// Line 31: range 000000000BEF69D2-000000000BEF6A3A
void __cdecl boost::detail::atomic_increment(std::atomic_int_least32_t *pw)
{
  std::atomic_int_least32_t *v1; // rdx

  v1 = pw;
  if ( *(_BYTE *)(((unsigned __int64)pw >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pw & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pw >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(pw);
  }
  _InterlockedExchangeAdd(&v1->_M_i, 1u);
};

// Line 36: range 000000000BEF6A3B-000000000BEF6AA6
int_least32_t __cdecl boost::detail::atomic_decrement(std::atomic_int_least32_t *pw)
{
  std::atomic_int_least32_t *v1; // rdx

  v1 = pw;
  if ( *(_BYTE *)(((unsigned __int64)pw >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pw & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pw >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(pw);
  }
  return _InterlockedExchangeAdd(&v1->_M_i, 0xFFFFFFFF);
};

// Line 41: range 000000000BEF6AA7-000000000BEF6C8E
int_least32_t __cdecl boost::detail::atomic_conditional_increment(std::atomic_int_least32_t *pw)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::atomic_int_least32_t *v4; // rdx
  int_least32_t result; // eax
  std::atomic_int_least32_t *v6; // rdx
  signed __int32 v7; // ett
  signed __int32 v8; // esi
  bool v9; // al
  signed __int32 v10; // [rsp+1Ch] [rbp-84h]
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 4 r:46";
  *(_QWORD *)(v1 + 16) = boost::detail::atomic_conditional_increment;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::operator&(memory_order_relaxed, __memory_order_mask);
  v4 = pw;
  if ( *(_BYTE *)(((unsigned __int64)pw >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pw & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pw >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pw);
  }
  *(std::atomic_int_least32_t *)(v1 + 32) = (std::atomic_int_least32_t)v4->_M_i;
  do
  {
    if ( !*(_DWORD *)(v1 + 32) )
    {
      result = *(_DWORD *)(v1 + 32);
      goto LABEL_15;
    }
    v10 = *(_DWORD *)(v1 + 32) + 1;
    std::operator&(memory_order_relaxed, __memory_order_mask);
    std::operator&(memory_order_relaxed, __memory_order_mask);
    v6 = pw;
    if ( *(_BYTE *)(((unsigned __int64)pw >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pw & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pw >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(pw);
    }
    v7 = *(_DWORD *)(v1 + 32);
    v8 = _InterlockedCompareExchange(&v6->_M_i, v10, v7);
    v9 = v7 == v8;
    if ( v7 != v8 )
      *(_DWORD *)(v1 + 32) = v8;
  }
  while ( !v9 );
  result = *(_DWORD *)(v1 + 32);
LABEL_15:
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 74: range 000000000BEF6C90-000000000BEF6CFB
void __cdecl boost::detail::sp_counted_base::sp_counted_base(boost::detail::sp_counted_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::detail::sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_sp_counted_base = v1;
  std::atomic<int>::atomic(&this->use_count_, 1);
  std::atomic<int>::atomic(&this->weak_count_, 1);
};

// Line 78: range 000000000BEF6CFC-000000000BEF6D3D
void __cdecl boost::detail::sp_counted_base::~sp_counted_base(boost::detail::sp_counted_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::detail::sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_sp_counted_base = v1;
};

// Line 78: range 000000000BEF6D3E-000000000BEF6D68
void __cdecl boost::detail::sp_counted_base::~sp_counted_base(boost::detail::sp_counted_base *const this)
{
  boost::detail::sp_counted_base::~sp_counted_base(this);
  operator delete(this, 0x10uLL);
};

// Line 89: range 000000000BEF6D6A-000000000BEF6DD7
void __cdecl boost::detail::sp_counted_base::destroy(boost::detail::sp_counted_base *const this)
{
  void (__fastcall **v1)(boost::detail::sp_counted_base *const); // rax

  if ( this )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v1 = (void (__fastcall **)(boost::detail::sp_counted_base *const))(this->_vptr_sp_counted_base + 1);
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v1)(this);
  }
};

// Line 98: range 000000000BEF6DD8-000000000BEF6DF6
void __cdecl boost::detail::sp_counted_base::add_ref_copy(boost::detail::sp_counted_base *const this)
{
  boost::detail::atomic_increment(&this->use_count_);
};

// Line 103: range 000000000BEF6DF8-000000000BEF6E1A
bool __cdecl boost::detail::sp_counted_base::add_ref_lock(boost::detail::sp_counted_base *const this)
{
  return boost::detail::atomic_conditional_increment(&this->use_count_) != 0;
};

// Line 108: range 000000000BEF6E1C-000000000BEF6EA8
void __cdecl boost::detail::sp_counted_base::release(boost::detail::sp_counted_base *const this)
{
  void (__fastcall **v1)(boost::detail::sp_counted_base *const); // rax

  if ( boost::detail::atomic_decrement(&this->use_count_) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v1 = (void (__fastcall **)(boost::detail::sp_counted_base *const))(this->_vptr_sp_counted_base + 2);
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v1)(this);
    boost::detail::sp_counted_base::weak_release(this);
  }
};

// Line 117: range 000000000BEF6EAA-000000000BEF6EC8
void __cdecl boost::detail::sp_counted_base::weak_add_ref(boost::detail::sp_counted_base *const this)
{
  boost::detail::atomic_increment(&this->weak_count_);
};

// Line 122: range 000000000BEF6ECA-000000000BEF6F4A
void __cdecl boost::detail::sp_counted_base::weak_release(boost::detail::sp_counted_base *const this)
{
  void (__fastcall **v1)(boost::detail::sp_counted_base *const); // rax

  if ( boost::detail::atomic_decrement(&this->weak_count_) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v1 = (void (__fastcall **)(boost::detail::sp_counted_base *const))(this->_vptr_sp_counted_base + 3);
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v1)(this);
  }
};

// Line 130: range 000000000BEF6F4C-000000000BEF6FBD
__int64 __cdecl boost::detail::sp_counted_base::use_count(const boost::detail::sp_counted_base *const this)
{
  std::atomic_int_least32_t *v1; // rdx
  std::atomic_int_least32_t *p_use_count; // [rsp+18h] [rbp-8h]

  p_use_count = &this->use_count_;
  std::operator&(memory_order_acquire, __memory_order_mask);
  v1 = p_use_count;
  if ( *(_BYTE *)(((unsigned __int64)p_use_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_use_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_use_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_use_count);
  }
  return v1->_M_i;
};
