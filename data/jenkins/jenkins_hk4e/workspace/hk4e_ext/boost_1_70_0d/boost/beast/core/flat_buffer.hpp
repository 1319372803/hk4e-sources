// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/flat_buffer.hpp

// Line 139: range 000000000C757446-000000000C75745B
std::size_t __cdecl boost::beast::basic_flat_buffer<std::allocator<char>>::dist(const char *first, const char *last)
{
  return last - first;
};

// Line 407: range 000000000C79ABA2-000000000C79AC14
std::size_t __cdecl boost::beast::basic_flat_buffer<std::allocator<char>>::size(
        const boost::beast::basic_flat_buffer<std::allocator<char> > *const this)
{
  __int64 v1; // rsi
  char *out; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->out_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->out_, v1);
  out = this->out_;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->in_, v1);
  return boost::beast::basic_flat_buffer<std::allocator<char>>::dist(this->in_, out);
};

// Line 414: range 000000000C79AC16-000000000C79AC50
std::size_t __cdecl boost::beast::basic_flat_buffer<std::allocator<char>>::max_size(
        const boost::beast::basic_flat_buffer<std::allocator<char> > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->max_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->max_, v1);
  return this->max_;
};

// Line 442: range 000000000C79F1D4-000000000C79F26E
boost::beast::basic_flat_buffer<std::allocator<char> >::mutable_data_type __cdecl boost::beast::basic_flat_buffer<std::allocator<char>>::data(
        boost::beast::basic_flat_buffer<std::allocator<char> > *const this)
{
  __int64 v1; // rsi
  char *in; // rbx
  std::size_t v3; // rax
  boost::asio::mutable_buffer v5; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->in_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->in_, v1);
  in = this->in_;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->out_, v1);
  v3 = boost::beast::basic_flat_buffer<std::allocator<char>>::dist(this->in_, this->out_);
  boost::asio::mutable_buffer::mutable_buffer(&v5, in, v3);
  return v5;
};

// Line 470: range 000000000C743B56-000000000C743BC3
std::size_t __cdecl boost::beast::basic_flat_buffer<std::allocator<char>>::capacity(
        const boost::beast::basic_flat_buffer<std::allocator<char> > *const this)
{
  __int64 v1; // rsi
  char *end; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->end_, v1);
  end = this->end_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  return boost::beast::basic_flat_buffer<std::allocator<char>>::dist(this->begin_, end);
};

// Line 488: range 000000000C79B394-000000000C79B52C
void __fastcall boost::beast::basic_flat_buffer<std::allocator<char>>::commit(
        boost::beast::basic_flat_buffer<std::allocator<char> > *const this,
        std::size_t n)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *last; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 __b; // [rsp+18h] [rbp-68h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 n:488";
  *(_QWORD *)(v2 + 16) = boost::beast::basic_flat_buffer<std::allocator<char>>::commit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_, n);
  last = this->last_;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->out_, n);
  __b = boost::beast::basic_flat_buffer<std::allocator<char>>::dist(this->out_, last);
  v6 = (unsigned __int64)std::min<unsigned long>((const unsigned __int64 *)(v2 + 32), &__b);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6, &__b);
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->out_, &__b);
  this->out_ += v7;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
