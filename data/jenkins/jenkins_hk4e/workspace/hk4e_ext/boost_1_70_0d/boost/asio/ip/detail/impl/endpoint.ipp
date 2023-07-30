// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/detail/impl/endpoint.ipp

// Line 35: range 000000000BEF966C-000000000BEF97D2
void __cdecl boost::asio::ip::detail::endpoint::endpoint(boost::asio::ip::detail::endpoint *const this)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_scope_id + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 28LL);
  }
  this->data_.base = 0uLL;
  *(_QWORD *)&this->data_.v6.sin6_addr.__u6_addr32[2] = 0LL;
  this->data_.v6.sin6_scope_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->data_.base.sa_family = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_.v4.sin_port >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->data_.v4.sin_port >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->data_.v4.sin_port);
  }
  this->data_.v4.sin_port = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_flowinfo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_flowinfo >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->data_.v6.sin6_flowinfo);
  }
  this->data_.v4.sin_addr.s_addr = 0;
};

// Line 43: range 000000000BEF97D4-000000000BEF9E7B
void __cdecl boost::asio::ip::detail::endpoint::endpoint(
        boost::asio::ip::detail::endpoint *const this,
        int family,
        unsigned __int16 port_num)
{
  in_port_t v3; // cx
  in_port_t v4; // cx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi

  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_scope_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_scope_id + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 28LL);
  }
  this->data_.base = 0uLL;
  *(_QWORD *)&this->data_.v6.sin6_addr.__u6_addr32[2] = 0LL;
  this->data_.v6.sin6_scope_id = 0;
  if ( family == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(this);
    }
    this->data_.base.sa_family = 2;
    v3 = boost::asio::detail::socket_ops::host_to_network_short(port_num);
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v4.sin_port >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->data_.v4.sin_port >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&this->data_.v4.sin_port);
    }
    this->data_.v4.sin_port = v3;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_flowinfo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_flowinfo >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_store4(&this->data_.v6.sin6_flowinfo);
    }
    this->data_.v4.sin_addr.s_addr = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(this);
    }
    this->data_.base.sa_family = 10;
    v4 = boost::asio::detail::socket_ops::host_to_network_short(port_num);
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v4.sin_port >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->data_.v4.sin_port >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&this->data_.v4.sin_port);
    }
    this->data_.v4.sin_port = v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_flowinfo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_flowinfo >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_store4(&this->data_.v6.sin6_flowinfo);
    }
    this->data_.v4.sin_addr.s_addr = 0;
    v5 = ((_BYTE)this + 8) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr >> 3) + 0x7FFF8000) != 0
      && (char)v5 >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->data_.v6.sin6_addr, v5);
    }
    this->data_.base.sa_data[6] = 0;
    v6 = ((_BYTE)this + 9) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr8[1] >> 3) + 0x7FFF8000) != 0
      && (char)v6 >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr8[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->data_.v6.sin6_addr.__u6_addr8[1], v6);
    }
    this->data_.base.sa_data[7] = 0;
    v7 = ((_BYTE)this + 10) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr16[1] >> 3) + 0x7FFF8000) != 0
      && (char)v7 >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr16[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->data_.v6.sin6_addr.__u6_addr16[1], v7);
    }
    this->data_.base.sa_data[8] = 0;
    v8 = ((_BYTE)this + 11) & 7;
    if ( *(_BYTE *)((((unsigned __int64)this->data_.v6.sin6_addr.__u6_addr32 + 3) >> 3) + 0x7FFF8000) != 0
      && (char)v8 >= *(_BYTE *)((((unsigned __int64)this->data_.v6.sin6_addr.__u6_addr32 + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)this->data_.v6.sin6_addr.__u6_addr32 + 3, v8);
    }
    this->data_.base.sa_data[9] = 0;
    v9 = ((_BYTE)this + 12) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[1] >> 3) + 0x7FFF8000) != 0
      && (char)v9 >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->data_.v6.sin6_addr.__u6_addr32[1], v9);
    }
    this->data_.base.sa_data[10] = 0;
    v10 = ((_BYTE)this + 13) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[1] + 1) >> 3) + 0x7FFF8000) != 0
      && (char)v10 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[1] + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[1] + 1, v10);
    }
    this->data_.base.sa_data[11] = 0;
    v11 = ((_BYTE)this + 14) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[1] + 2) >> 3) + 0x7FFF8000) != 0
      && (char)v11 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[1] + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[1] + 2, v11);
    }
    this->data_.base.sa_data[12] = 0;
    v12 = ((_BYTE)this + 15) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[1] + 3) >> 3) + 0x7FFF8000) != 0
      && (char)v12 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[1] + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[1] + 3, v12);
    }
    this->data_.base.sa_data[13] = 0;
    v13 = ((_BYTE)this + 16) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[2] >> 3) + 0x7FFF8000) != 0
      && (char)v13 >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[2] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->data_.v6.sin6_addr.__u6_addr32[2], v13);
    }
    this->data_.v6.sin6_addr.__u6_addr8[8] = 0;
    v14 = ((_BYTE)this + 17) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[2] + 1) >> 3) + 0x7FFF8000) != 0
      && (char)v14 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[2] + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[2] + 1, v14);
    }
    this->data_.v6.sin6_addr.__u6_addr8[9] = 0;
    v15 = ((_BYTE)this + 18) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[2] + 2) >> 3) + 0x7FFF8000) != 0
      && (char)v15 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[2] + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[2] + 2, v15);
    }
    this->data_.v6.sin6_addr.__u6_addr8[10] = 0;
    v16 = ((_BYTE)this + 19) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[2] + 3) >> 3) + 0x7FFF8000) != 0
      && (char)v16 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[2] + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[2] + 3, v16);
    }
    this->data_.v6.sin6_addr.__u6_addr8[11] = 0;
    v17 = ((_BYTE)this + 20) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[3] >> 3) + 0x7FFF8000) != 0
      && (char)v17 >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[3] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->data_.v6.sin6_addr.__u6_addr32[3], v17);
    }
    this->data_.v6.sin6_addr.__u6_addr8[12] = 0;
    v18 = ((_BYTE)this + 21) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[3] + 1) >> 3) + 0x7FFF8000) != 0
      && (char)v18 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[3] + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[3] + 1, v18);
    }
    this->data_.v6.sin6_addr.__u6_addr8[13] = 0;
    v19 = ((_BYTE)this + 22) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[3] + 2) >> 3) + 0x7FFF8000) != 0
      && (char)v19 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[3] + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[3] + 2, v19);
    }
    this->data_.v6.sin6_addr.__u6_addr8[14] = 0;
    v20 = ((_BYTE)this + 23) & 7;
    if ( *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3) + 0x7FFF8000) != 0
      && (char)v20 >= *(_BYTE *)((((unsigned __int64)&this->data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1((char *)&this->data_.v6.sin6_addr.__u6_addr32[3] + 3, v20);
    }
    this->data_.v6.sin6_addr.__u6_addr8[15] = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_scope_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_.v6.sin6_scope_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->data_.v6.sin6_scope_id);
    }
    this->data_.v6.sin6_scope_id = 0;
  }
};

// Line 102: range 000000000BEF9E7C-000000000BEF9F60
void __cdecl boost::asio::ip::detail::endpoint::resize(
        boost::asio::ip::detail::endpoint *const this,
        std::size_t new_size)
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
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:105";
  *(_QWORD *)(v2 + 16) = boost::asio::ip::detail::endpoint::resize;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( new_size > 0x80 )
  {
    boost::system::error_code::error_code<boost::asio::error::basic_errors>(
      (boost::system::error_code *const)(v2 + 32),
      invalid_argument_0,
      0LL);
    boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32));
  }
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
