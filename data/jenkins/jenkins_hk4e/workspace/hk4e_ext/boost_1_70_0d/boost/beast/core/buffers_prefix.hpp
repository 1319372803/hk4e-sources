// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/buffers_prefix.hpp

// Line 166: range 0000000019BA4CD5-0000000019BA4DDC
boost::beast::buffers_prefix_view<boost::asio::mutable_buffer> __fastcall boost::beast::buffers_prefix<boost::asio::mutable_buffer>(
        std::size_t size,
        const boost::asio::mutable_buffer *buffers)
{
  unsigned __int64 v2; // rbx
  boost::beast::buffers_prefix_view<boost::asio::mutable_buffer> result; // rax
  void *data; // rcx
  std::size_t *v5; // rdi
  __int64 v6; // rax
  std::size_t v7; // [rsp+8h] [rbp-70h] BYREF
  char v8[104]; // [rsp+10h] [rbp-68h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v2 = v6;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 size:166";
  *(_QWORD *)(v2 + 16) = boost::beast::buffers_prefix<boost::asio::mutable_buffer>;
  result.data_ = (void *)(v2 >> 3);
  *((_DWORD *)result.data_ + 536862720) = -235802127;
  *((_DWORD *)result.data_ + 536862721) = -202116352;
  *(_QWORD *)(v2 + 32) = size;
  if ( *(_WORD *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    result.data_ = (void *)__asan_report_load16(buffers);
  }
  else
  {
    data = buffers->data_;
    v7 = buffers->size_;
    if ( size <= v7 )
    {
      v5 = (std::size_t *)(v2 + 32);
      goto LABEL_5;
    }
  }
  v5 = &v7;
LABEL_5:
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    result.data_ = (void *)__asan_report_load8(v5);
    goto LABEL_14;
  }
  result.size_ = *v5;
  if ( v8 != (char *)v2 )
  {
LABEL_14:
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)result.data_ + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    goto LABEL_8;
  }
  *((_QWORD *)result.data_ + 268431360) = 0LL;
LABEL_8:
  result.data_ = data;
  return result;
};
