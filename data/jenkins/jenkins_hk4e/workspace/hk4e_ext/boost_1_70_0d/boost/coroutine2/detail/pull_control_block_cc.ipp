// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/coroutine2/detail/pull_control_block_cc.ipp

// Line 326: range 000000000BEFBE52-000000000BEFBF51
void __cdecl boost::coroutines2::detail::pull_coroutine<void>::control_block::destroy(
        boost::coroutines2::detail::pull_coroutine<void>::control_block *cb)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::context::fiber *v4; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 c:327";
  *(_QWORD *)(v1 + 16) = boost::coroutines2::detail::pull_coroutine<void>::control_block::destroy;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  v4 = std::move<boost::context::fiber &>(&cb->c);
  boost::context::fiber::fiber((boost::context::fiber *const)(v1 + 32), v4);
  boost::coroutines2::detail::pull_coroutine<void>::control_block::~control_block(cb);
  boost::coroutines2::detail::operator|=(&cb->state, destroy);
  boost::context::fiber::~fiber((boost::context::fiber *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 405: range 000000000BEFBF52-000000000BEFC008
void __cdecl boost::coroutines2::detail::pull_coroutine<void>::control_block::control_block(
        boost::coroutines2::detail::pull_coroutine<void>::control_block *const this,
        boost::coroutines2::detail::push_coroutine<void>::control_block *cb,
        boost::context::fiber *c_)
{
  boost::context::fiber *v3; // rax

  v3 = std::move<boost::context::fiber &>(c_);
  boost::context::fiber::fiber(&this->c, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->other >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->other = cb;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state);
  }
  this->state = none;
  std::__exception_ptr::exception_ptr::exception_ptr(&this->except);
};

// Line 415: range 000000000BEFC00A-000000000BEFC073
void __cdecl boost::coroutines2::detail::pull_coroutine<void>::control_block::deallocate(
        boost::coroutines2::detail::pull_coroutine<void>::control_block *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state);
  }
  if ( boost::coroutines2::detail::operator&(this->state, unwind) )
    boost::coroutines2::detail::pull_coroutine<void>::control_block::destroy(this);
};

// Line 423: range 000000000BEFC074-000000000BEFC11D
void __cdecl boost::coroutines2::detail::pull_coroutine<void>::control_block::resume(
        boost::coroutines2::detail::pull_coroutine<void>::control_block *const this)
{
  struct _Unwind_Exception *v1; // rbx
  boost::context::fiber other; // [rsp+18h] [rbp-18h] BYREF

  std::move<boost::context::fiber &>(&this->c);
  boost::context::fiber::resume(&other);
  boost::context::fiber::operator=(&this->c, &other);
  boost::context::fiber::~fiber(&other);
  if ( std::__exception_ptr::exception_ptr::operator bool(&this->except) )
  {
    std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&other, &this->except);
    __asan_handle_no_return(&other);
    v1 = (struct _Unwind_Exception *)std::rethrow_exception((std::__exception_ptr::exception_ptr)&other);
    std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&other);
    __asan_handle_no_return(&other);
    _Unwind_Resume(v1);
  }
};
