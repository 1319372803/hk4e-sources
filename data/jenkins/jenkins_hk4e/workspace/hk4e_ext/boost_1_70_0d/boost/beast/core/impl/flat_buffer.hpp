// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/impl/flat_buffer.hpp

// Line 40: range 0000000019B815DC-0000000019B81C6C
void __fastcall boost::beast::basic_flat_buffer<std::allocator<char>>::basic_flat_buffer(
        boost::beast::basic_flat_buffer<std::allocator<char> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  this->begin_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  this->in_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->out_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8();
    goto LABEL_12;
  }
  this->last_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->end_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    JUMPOUT(0x19B816C3LL);
  }
  this->max_ = 0x7FFFFFFFFFFFFFFFLL;
};

// Line 293: range 0000000019BC8BDA-0000000019BCA05C
void __fastcall boost::beast::basic_flat_buffer<std::allocator<char>>::clear(
        boost::beast::basic_flat_buffer<std::allocator<char> > *const this)
{
  char *begin; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_7;
  }
  begin = this->begin_;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8();
    goto LABEL_8;
  }
  this->in_ = begin;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  this->out_ = begin;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    JUMPOUT(0x19BC8C5BLL);
  }
  this->last_ = begin;
};

// Line 305: range 0000000019B966AC-0000000019B97673
boost::beast::basic_flat_buffer<std::allocator<char> >::mutable_buffers_type __fastcall boost::beast::basic_flat_buffer<std::allocator<char>>::prepare(
        boost::beast::basic_flat_buffer<std::allocator<char> > *const this,
        std::size_t n)
{
  unsigned __int64 p_out; // rdi
  boost::beast::basic_flat_buffer<std::allocator<char> >::mutable_buffers_type result; // rax
  char *in; // rsi
  size_t v7; // r12
  std::size_t max; // rcx
  char *end; // rdx
  void *begin; // rdi
  char *v11; // rax
  std::size_t *p_max; // rdi
  std::size_t v13; // r14
  std::size_t v14; // rsi
  boost::beast::basic_flat_buffer<std::allocator<char> > *v15; // rdi
  char *v16; // r13
  char **p_in; // rdi
  char *v18; // rsi
  boost::beast::basic_flat_buffer<std::allocator<char> > *p_last; // rdi
  char *v20; // r13
  size_t v21; // [rsp+0h] [rbp-48h] BYREF
  std::size_t v22; // [rsp+8h] [rbp-40h] BYREF
  char v23[56]; // [rsp+10h] [rbp-38h] BYREF

  p_out = (unsigned __int64)&this->out_;
  if ( *(_BYTE *)((p_out >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_out);
    goto LABEL_11;
  }
  result.data_ = this->out_;
  p_out = (unsigned __int64)&this->in_;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(p_out);
    goto LABEL_12;
  }
  in = this->in_;
  v7 = result.data_ - (void *)in;
  p_out = (unsigned __int64)&this->max_;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_out);
    goto LABEL_13;
  }
  max = this->max_;
  if ( max < v7 || max - v7 < n )
  {
LABEL_13:
    std::length_error::length_error((std::length_error *)v23, "basic_flat_buffer too long");
    __asan_handle_no_return(v23);
    boost::exception_detail::throw_exception_<std::length_error>(
      (const std::length_error *)v23,
      "boost::beast::basic_flat_buffer<Allocator>::mutable_buffers_type boost::beast::basic_flat_buffer<Allocator>::prepa"
      "re(std::size_t) [with Allocator = std::allocator<char>; boost::beast::basic_flat_buffer<Allocator>::mutable_buffer"
      "s_type = boost::asio::mutable_buffer; std::size_t = long unsigned int]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/flat_buffer.hpp",
      311);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->end_);
  }
  else
  {
    end = this->end_;
    if ( n > end - (char *)result.data_ )
      goto LABEL_16;
    if ( !*(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
    {
      this->last_ = (char *)result.data_ + n;
      result.size_ = n;
      return result;
    }
  }
  __asan_report_store8();
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    begin = this;
    __asan_report_load8(this);
    goto LABEL_25;
  }
  begin = this->begin_;
  if ( end - this->begin_ - v7 < n )
    goto LABEL_28;
  if ( v7 )
  {
    if ( begin )
    {
      if ( !in )
      {
        __asan_handle_no_return(begin);
        __assert_fail(
          off_1B5DABC0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/flat_buffer.hpp",
          0x146u,
          "boost::beast::basic_flat_buffer<Allocator>::mutable_buffers_type boost::beast::basic_flat_buffer<Allocator>::p"
          "repare(std::size_t) [with Allocator = std::allocator<char>; boost::beast::basic_flat_buffer<Allocator>::mutabl"
          "e_buffers_type = boost::asio::mutable_buffer; std::size_t = long unsigned int]");
      }
      memmove(begin, in, v7);
      goto LABEL_22;
    }
LABEL_25:
    __asan_handle_no_return(begin);
    __assert_fail(
      "begin_",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/flat_buffer.hpp",
      0x145u,
      "boost::beast::basic_flat_buffer<Allocator>::mutable_buffers_type boost::beast::basic_flat_buffer<Allocator>::prepa"
      "re(std::size_t) [with Allocator = std::allocator<char>; boost::beast::basic_flat_buffer<Allocator>::mutable_buffer"
      "s_type = boost::asio::mutable_buffer; std::size_t = long unsigned int]");
  }
LABEL_22:
  v11 = this->begin_;
  this->in_ = this->begin_;
  result.data_ = &v11[v7];
  this->out_ = (char *)result.data_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
  {
    this->last_ = (char *)result.data_ + n;
    result.size_ = n;
    return result;
  }
  __asan_report_store8();
LABEL_28:
  v22 = n + v7;
  v21 = 2 * v7;
  if ( n + v7 > 2 * v7 )
    p_max = &v22;
  else
    p_max = &v21;
  if ( *(_BYTE *)(((unsigned __int64)p_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_max);
LABEL_48:
    __asan_report_load8(p_max);
    goto LABEL_49;
  }
  if ( max <= *p_max )
    p_max = &this->max_;
  if ( *(_BYTE *)(((unsigned __int64)p_max >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  v13 = *p_max;
  v14 = *p_max;
  v15 = this;
  v16 = boost::beast::basic_flat_buffer<std::allocator<char>>::alloc(this, v14);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    v15 = this;
    __asan_report_load8(this);
    goto LABEL_50;
  }
  if ( !this->begin_ )
    goto LABEL_40;
  if ( !v16 )
  {
LABEL_50:
    __asan_handle_no_return(v15);
    __assert_fail(
      "p",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/flat_buffer.hpp",
      0x155u,
      "boost::beast::basic_flat_buffer<Allocator>::mutable_buffers_type boost::beast::basic_flat_buffer<Allocator>::prepa"
      "re(std::size_t) [with Allocator = std::allocator<char>; boost::beast::basic_flat_buffer<Allocator>::mutable_buffer"
      "s_type = boost::asio::mutable_buffer; std::size_t = long unsigned int]");
  }
  p_in = &this->in_;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_in);
LABEL_52:
    __asan_handle_no_return(p_in);
    __assert_fail(
      off_1B5DABC0,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/flat_buffer.hpp",
      0x156u,
      "boost::beast::basic_flat_buffer<Allocator>::mutable_buffers_type boost::beast::basic_flat_buffer<Allocator>::prepa"
      "re(std::size_t) [with Allocator = std::allocator<char>; boost::beast::basic_flat_buffer<Allocator>::mutable_buffer"
      "s_type = boost::asio::mutable_buffer; std::size_t = long unsigned int]");
  }
  v18 = this->in_;
  if ( !v18 )
    goto LABEL_52;
  memcpy(v16, v18, v7);
  operator delete(this->begin_);
LABEL_40:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    p_last = this;
    __asan_report_store8();
    goto LABEL_54;
  }
  this->begin_ = v16;
  p_last = (boost::beast::basic_flat_buffer<std::allocator<char> > *)&this->in_;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_ >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  this->in_ = v16;
  result.data_ = &v16[v7];
  p_last = (boost::beast::basic_flat_buffer<std::allocator<char> > *)&this->out_;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->out_ = (char *)result.data_;
  p_last = (boost::beast::basic_flat_buffer<std::allocator<char> > *)&this->last_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->last_ = (char *)result.data_ + n;
  v20 = &v16[v13];
  p_last = (boost::beast::basic_flat_buffer<std::allocator<char> > *)&this->end_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
    this->end_ = v20;
    result.size_ = n;
    return result;
  }
LABEL_57:
  __asan_report_store8();
  LOBYTE(result.data_) = boost::beast::detail::buffers_empty<boost::asio::mutable_buffers_1>((const boost::asio::mutable_buffers_1 *)p_last);
  return result;
};
