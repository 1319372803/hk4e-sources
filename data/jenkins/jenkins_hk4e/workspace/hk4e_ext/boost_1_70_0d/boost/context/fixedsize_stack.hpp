// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/context/fixedsize_stack.hpp

// Line 40: range 000000000BF5B748-000000000BF5B786
void __cdecl boost::context::basic_fixedsize_stack<boost::context::stack_traits>::basic_fixedsize_stack(
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *const this,
        std::size_t size)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->size_ = size;
};

// Line 44: range 000000000BFA347E-000000000BFA35F8
boost::context::stack_context __cdecl boost::context::basic_fixedsize_stack<boost::context::stack_traits>::allocate(
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::bad_alloc *exception; // rdi
  boost::context::stack_context result; // rax
  char *vp; // [rsp+18h] [rbp-68h]
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 7 sctx:49";
  *(_QWORD *)(v1 + 16) = boost::context::basic_fixedsize_stack<boost::context::stack_traits>::allocate;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vp = (char *)malloc(this->size_);
  if ( !vp )
  {
    exception = (std::bad_alloc *)__cxa_allocate_exception(8uLL);
    std::bad_alloc::bad_alloc(exception);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (__fastcall *)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 40) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)(v1 + 32) = (boost::context::basic_fixedsize_stack<boost::context::stack_traits>)this->size_;
  *(_QWORD *)(v1 + 40) = &vp[*(_QWORD *)(v1 + 32)];
  result = *(boost::context::stack_context *)(v1 + 32);
  if ( v7 == (char *)v1 )
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

// Line 58: range 000000000BFAB9DA-000000000BFABAAD
void __cdecl boost::context::basic_fixedsize_stack<boost::context::stack_traits>::deallocate(
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *const this,
        boost::context::stack_context *sctx)
{
  char *sp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&sctx->sp >> 3) + 0x7FFF8000) )
  {
    this = (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *const)&sctx->sp;
    __asan_report_load8();
  }
  if ( !sctx->sp )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "sctx.sp",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fi"
      "xedsize_stack.hpp",
      0x3Bu,
      "void boost::context::basic_fixedsize_stack<traitsT>::deallocate(boost::context::stack_context&) [with traitsT = bo"
      "ost::context::stack_traits]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&sctx->sp >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  sp = (char *)sctx->sp;
  if ( *(_BYTE *)(((unsigned __int64)sctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  free(&sp[-sctx->size]);
};
