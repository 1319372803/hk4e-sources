// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/impl/address_v4.ipp

// Line 34: range 000000000C61942A-000000000C619538
void __cdecl boost::asio::ip::address_v4::address_v4(
        boost::asio::ip::address_v4 *const this,
        const boost::asio::ip::address_v4::bytes_type *bytes)
{
  in_addr_t *v2; // rax
  in_addr_t *v3; // rdx
  boost::asio::ip::address_v4 *v4; // rcx
  in_addr_t v5; // edi

  v2 = (in_addr_t *)std::array<unsigned char,4ul>::data(bytes);
  v3 = v2;
  v4 = this;
  if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)v2 + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 3) & 7) >= *(_BYTE *)((((unsigned __int64)v2 + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v2, 4LL, v2, this);
  }
  v5 = *v3;
  if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v4->addr_.s_addr + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v4 + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->addr_.s_addr + 3) >> 3) + 0x7FFF8000) )
  {
    v5 = (unsigned int)v4;
    __asan_report_store_n(v4, 4LL);
  }
  v4->addr_.s_addr = v5;
};

// Line 49: range 000000000C61953A-000000000C61968B
void __cdecl boost::asio::ip::address_v4::address_v4(
        boost::asio::ip::address_v4 *const this,
        boost::asio::ip::address_v4::uint_type addr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  in_addr_t v5; // ecx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ex:53";
  *(_QWORD *)(v2 + 16) = boost::asio::ip::address_v4::address_v4;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::numeric_limits<unsigned int>::max();
  v5 = boost::asio::detail::socket_ops::host_to_network_long(addr);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->addr_.s_addr = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 000000000C6196A6-000000000C619886
boost::asio::ip::address_v4::bytes_type __cdecl boost::asio::ip::address_v4::to_bytes(
        const boost::asio::ip::address_v4 *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::array<unsigned char,4>::pointer v4; // rdx
  in_addr_t s_addr; // edi
  boost::asio::ip::address_v4::bytes_type result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 bytes:64";
  *(_QWORD *)(v1 + 16) = boost::asio::ip::address_v4::to_bytes;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  v4 = std::array<unsigned char,4ul>::data((std::array<unsigned char,4> *const)(v1 + 32));
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->addr_.s_addr + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&this->addr_.s_addr + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      this,
      4LL,
      v4,
      (((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&this->addr_.s_addr
                                                                                                + 3) >> 3)
                                                                                              + 0x7FFF8000) != 0
                                                                                  && (((unsigned __int8)this + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&this->addr_.s_addr + 3) >> 3) + 0x7FFF8000)));
  }
  s_addr = this->addr_.s_addr;
  if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(v4 + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v4 + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(v4 + 3) >> 3) + 0x7FFF8000) )
  {
    s_addr = (unsigned int)v4;
    __asan_report_store_n(v4, 4LL);
  }
  *(_DWORD *)v4 = s_addr;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 32);
  result = *(boost::asio::ip::address_v4::bytes_type *)(v1 + 32);
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

// Line 74: range 000000000C619888-000000000C6198D9
boost::asio::ip::address_v4::uint_type __cdecl boost::asio::ip::address_v4::to_uint(
        const boost::asio::ip::address_v4 *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return boost::asio::detail::socket_ops::network_to_host_long(this->addr_.s_addr);
};

// Line 172: range 000000000C6198DA-000000000C6199E4
boost::asio::ip::address_v4 __cdecl boost::asio::ip::make_address_v4(const char *str, boost::system::error_code *ec)
{
  boost::system::error_code *v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::system::error_code *eca; // [rsp+8h] [rbp-78h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  eca = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 bytes:173";
  *(_QWORD *)(v3 + 16) = boost::asio::ip::make_address_v4;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( boost::asio::detail::socket_ops::inet_pton(2, (const char *)ec, (void *)(v3 + 32), 0LL, eca) > 0 )
    boost::asio::ip::address_v4::address_v4(
      (boost::asio::ip::address_v4 *const)str,
      (const boost::asio::ip::address_v4::bytes_type *)(v3 + 32));
  else
    boost::asio::ip::address_v4::address_v4((boost::asio::ip::address_v4 *const)str);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (boost::asio::ip::address_v4)str;
};

// Line 187: range 000000000C6199E5-000000000C619A58
boost::asio::ip::address_v4 __cdecl boost::asio::ip::make_address_v4(
        const std::string *str,
        boost::system::error_code *ec)
{
  boost::system::error_code *v2; // rcx

  v2 = (boost::system::error_code *)std::string::c_str(ec);
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)str & 7) + 3) >= *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(str);
  }
  boost::asio::ip::make_address_v4((const char *)str, v2);
  return (boost::asio::ip::address_v4)str;
};
