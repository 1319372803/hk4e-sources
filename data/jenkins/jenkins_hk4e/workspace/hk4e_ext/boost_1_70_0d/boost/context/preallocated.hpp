// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/context/preallocated.hpp

// Line 28: range 000000000BEFAB1E-000000000BEFAC86
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::context::preallocated::preallocated(
        boost::context::preallocated *const this,
        void *sp_,
        std::size_t size_,
        boost::context::stack_context sctx_)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  void *v8; // rdi
  std::size_t size; // [rsp+0h] [rbp-80h]
  void *sp; // [rsp+8h] [rbp-78h]
  char v13[80]; // [rsp+30h] [rbp-50h] BYREF

  size = sctx_.size;
  sp = sctx_.sp;
  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 8 sctx_:28";
  *(_QWORD *)(v4 + 16) = boost::context::preallocated::preallocated;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = size;
  *(_QWORD *)(v4 + 40) = sp;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  this->sp = sp_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  this->size = size_;
  if ( *(_WORD *)(((unsigned __int64)&this->sctx >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = (void *)*((_QWORD *)v6 - 3);
  this->sctx.size = *((_QWORD *)v6 - 4);
  this->sctx.sp = v8;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
