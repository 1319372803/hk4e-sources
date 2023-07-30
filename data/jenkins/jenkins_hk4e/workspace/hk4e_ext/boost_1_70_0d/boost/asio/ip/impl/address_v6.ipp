// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/impl/address_v6.ipp

// Line 35: range 000000000C714946-000000000C7149BA
void __cdecl boost::asio::ip::address_v6::address_v6(boost::asio::ip::address_v6 *const this)
{
  __int64 v1; // rsi

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  this->addr_ = 0uLL;
  if ( *(_BYTE *)(((unsigned __int64)&this->scope_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->scope_id_ = 0LL;
};

// Line 41: range 000000000C7149E4-000000000C714B32
void __cdecl boost::asio::ip::address_v6::address_v6(
        boost::asio::ip::address_v6 *const this,
        const boost::asio::ip::address_v6::bytes_type *bytes,
        unsigned __int64 scope)
{
  std::array<unsigned char,16>::value_type *v3; // rax
  __int64 *v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->scope_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->scope_id_ = scope;
  v3 = (std::array<unsigned char,16>::value_type *)std::array<unsigned char,16ul>::data(bytes);
  v4 = (__int64 *)v3;
  v5 = (unsigned __int64)this;
  if ( ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(v3 + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v3 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(v3 + 15) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    __asan_report_load_n(v3, 16LL);
  }
  v6 = *v4;
  v7 = v4[1];
  v8 = v5;
  v9 = ((char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0) | (unsigned int)(*(_BYTE *)(((v5 + 15) >> 3) + 0x7FFF8000) != 0 && (char)((v5 + 15) & 7) >= *(_BYTE *)(((v5 + 15) >> 3) + 0x7FFF8000));
  if ( (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v5 + 15) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 15) & 7) >= *(_BYTE *)(((v5 + 15) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    __asan_report_store_n(v8, 16LL, v9, v6);
  }
  *(_QWORD *)v5 = v6;
  *(_QWORD *)(v5 + 8) = v7;
};

// Line 60: range 000000000C714B34-000000000C714BFA
void __cdecl boost::asio::ip::address_v6::address_v6(
        boost::asio::ip::address_v6 *const this,
        const boost::asio::ip::address_v6 *other)
{
  __int64 v2; // rdx
  unsigned __int64 scope_id; // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, other);
  if ( *(_WORD *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  v2 = *(_QWORD *)&other->addr_.__u6_addr32[2];
  *(_QWORD *)this->addr_.__u6_addr8 = *(_QWORD *)other->addr_.__u6_addr8;
  *(_QWORD *)&this->addr_.__u6_addr32[2] = v2;
  if ( *(_BYTE *)(((unsigned __int64)&other->scope_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other->scope_id_, other);
  scope_id = other->scope_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->scope_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->scope_id_ = scope_id;
};

// Line 91: range 000000000C714C16-000000000C714DD7
boost::asio::ip::address_v6::bytes_type __cdecl boost::asio::ip::address_v6::to_bytes(
        const boost::asio::ip::address_v6 *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::array<unsigned char,16>::pointer v4; // rdx
  __int64 v5; // rsi
  std::array<unsigned char,16>::pointer v6; // rdi
  boost::asio::ip::address_v6::bytes_type result; // rax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 bytes:93";
  *(_QWORD *)(v1 + 16) = boost::asio::ip::address_v6::to_bytes;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = std::array<unsigned char,16ul>::data((std::array<unsigned char,16> *const)(v1 + 32));
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->addr_.__u6_addr32[3] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->addr_.__u6_addr32[3] + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(this, 16LL);
  }
  v5 = *(_QWORD *)this->addr_.__u6_addr8;
  v6 = *(std::array<unsigned char,16>::pointer *)&this->addr_.__u6_addr32[2];
  if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(v4 + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v4 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(v4 + 15) >> 3) + 0x7FFF8000) )
  {
    v5 = 16LL;
    v6 = v4;
    __asan_report_store_n(
      v4,
      16LL,
      v4,
      (((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0) | (unsigned int)(*(_BYTE *)(((unsigned __int64)(v4 + 15) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (((unsigned __int8)v4 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(v4 + 15) >> 3) + 0x7FFF8000)));
  }
  *(_QWORD *)v4 = v5;
  *((_QWORD *)v4 + 1) = v6;
  result = *(boost::asio::ip::address_v6::bytes_type *)(v1 + 32);
  if ( v8 == (char *)v1 )
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

// Line 287: range 000000000C714DD8-000000000C714F3F
boost::asio::ip::address_v6 *__cdecl boost::asio::ip::make_address_v6(
        boost::asio::ip::address_v6 *retstr,
        const char *str,
        boost::system::error_code *ec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::array<unsigned char,16>::reference v6; // rsi
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 12 scope_id:289 64 16 9 bytes:288";
  *(_QWORD *)(v3 + 16) = boost::asio::ip::make_address_v6;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = 0LL;
  v6 = std::array<unsigned char,16ul>::operator[]((std::array<unsigned char,16> *const)(v3 + 64), 0LL);
  if ( boost::asio::detail::socket_ops::inet_pton(10, str, v6, (unsigned __int64 *)(v3 + 32), ec) > 0 )
    boost::asio::ip::address_v6::address_v6(
      retstr,
      (const boost::asio::ip::address_v6::bytes_type *)(v3 + 64),
      *(_QWORD *)(v3 + 32));
  else
    boost::asio::ip::address_v6::address_v6(retstr);
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};
