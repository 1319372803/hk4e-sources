// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/impl/network_v4.ipp

// Line 35: range 000000000C61A0F4-000000000C61A253
void __cdecl boost::asio::ip::network_v4::network_v4(
        boost::asio::ip::network_v4 *const this,
        const boost::asio::ip::address_v4 *addr,
        unsigned __int16 prefix_len)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 5 ex:41";
  *(_QWORD *)(v3 + 16) = boost::asio::ip::network_v4::network_v4;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  boost::asio::ip::address_v4::address_v4((boost::asio::ip::address_v4 *const)this, addr);
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->prefix_length_);
  }
  this->prefix_length_ = prefix_len;
  if ( prefix_len > 0x20u )
  {
    std::out_of_range::out_of_range((std::out_of_range *)(v3 + 32), "prefix length too large");
    __asan_handle_no_return(v3 + 32);
    boost::throw_exception<std::out_of_range>((const std::out_of_range *)(v3 + 32));
  }
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 000000000C61A264-000000000C61A8FF
void __cdecl boost::asio::ip::network_v4::network_v4(
        boost::asio::ip::network_v4 *const this,
        const boost::asio::ip::address_v4 *addr,
        const boost::asio::ip::address_v4 *mask)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::array<unsigned char,4>::reference v6; // rax
  _BYTE *v7; // rdx
  std::array<unsigned char,4>::reference v8; // rax
  _BYTE *v9; // rdx
  unsigned int v10; // eax
  bool finished; // [rsp+27h] [rbp-A9h]
  std::size_t i; // [rsp+28h] [rbp-A8h]
  char v14[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 mask_bytes:50 64 16 5 ex:58 96 16 5 ex:88";
  *(_QWORD *)(v3 + 16) = boost::asio::ip::network_v4::network_v4;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  boost::asio::ip::address_v4::address_v4((boost::asio::ip::address_v4 *const)this, addr);
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->prefix_length_);
  }
  this->prefix_length_ = 0;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(boost::asio::ip::address_v4::bytes_type *)(v3 + 48) = boost::asio::ip::address_v4::to_bytes(mask);
  finished = 0;
  for ( i = 0LL; i < std::array<unsigned char,4ul>::size((const std::array<unsigned char,4> *const)(v3 + 48)); ++i )
  {
    if ( finished )
    {
      v6 = std::array<unsigned char,4ul>::operator[]((std::array<unsigned char,4> *const)(v3 + 48), i);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v6);
      }
      if ( *v7 )
      {
        *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
        std::invalid_argument::invalid_argument((std::invalid_argument *)(v3 + 64), "non-contiguous netmask");
        __asan_handle_no_return(v3 + 64);
        boost::throw_exception<std::invalid_argument>((const std::invalid_argument *)(v3 + 64));
      }
      continue;
    }
    v8 = std::array<unsigned char,4ul>::operator[]((std::array<unsigned char,4> *const)(v3 + 48), i);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v8);
    }
    v10 = (unsigned __int8)*v9;
    if ( v10 >= 0xE0 )
    {
      switch ( *v9 )
      {
        case 0xE0:
          goto LABEL_39;
        case 0xF0:
          goto LABEL_36;
        case 0xF8:
          goto LABEL_33;
        case 0xFC:
          goto LABEL_30;
        case 0xFE:
          if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load2(&this->prefix_length_);
          }
          ++this->prefix_length_;
LABEL_30:
          if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load2(&this->prefix_length_);
          }
          ++this->prefix_length_;
LABEL_33:
          if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load2(&this->prefix_length_);
          }
          ++this->prefix_length_;
LABEL_36:
          if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load2(&this->prefix_length_);
          }
          ++this->prefix_length_;
LABEL_39:
          if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load2(&this->prefix_length_);
          }
          ++this->prefix_length_;
          goto LABEL_42;
        case 0xFF:
          if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load2(&this->prefix_length_);
          }
          this->prefix_length_ += 8;
          goto LABEL_50;
        default:
          goto LABEL_49;
      }
    }
    if ( v10 == 192 )
    {
LABEL_42:
      if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&this->prefix_length_);
      }
      ++this->prefix_length_;
    }
    else
    {
      if ( (unsigned __int8)*v9 > 0xC0u )
        goto LABEL_49;
      if ( !*v9 )
        goto LABEL_48;
      if ( v10 != 128 )
      {
LABEL_49:
        *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        std::out_of_range::out_of_range((std::out_of_range *)(v3 + 96), "non-contiguous netmask");
        __asan_handle_no_return(v3 + 96);
        boost::throw_exception<std::out_of_range>((const std::out_of_range *)(v3 + 96));
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&this->prefix_length_);
    }
    ++this->prefix_length_;
LABEL_48:
    finished = 1;
LABEL_50:
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 96: range 000000000C61A900-000000000C61A9D2
boost::asio::ip::address_v4 __cdecl boost::asio::ip::network_v4::netmask(const boost::asio::ip::network_v4 *const this)
{
  __int64 v1; // rsi
  uint32_t nmbits; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)(v1 + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((v1 + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(v1 + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(v1 + 4);
  }
  if ( *(_WORD *)(v1 + 4) )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(v1 + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(v1 + 4);
    }
    nmbits = -1 << (32 - *(_WORD *)(v1 + 4));
  }
  else
  {
    nmbits = 0;
  }
  boost::asio::ip::address_v4::address_v4((boost::asio::ip::address_v4 *const)this, nmbits);
  return (boost::asio::ip::address_v4)this;
};

// Line 113: range 000000000C61A9D4-000000000C61AC56
bool __cdecl boost::asio::ip::network_v4::is_subnet_of(
        const boost::asio::ip::network_v4 *const this,
        const boost::asio::ip::network_v4 *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int16 prefix_length; // cx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 6 me:116 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::asio::ip::network_v4::is_subnet_of;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&other->prefix_length_);
  }
  prefix_length = other->prefix_length_;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&this->prefix_length_);
  }
  if ( prefix_length < this->prefix_length_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)other + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&other->prefix_length_);
    }
    boost::asio::ip::network_v4::network_v4(
      (boost::asio::ip::network_v4 *const)(v2 + 32),
      (const boost::asio::ip::address_v4 *)this,
      other->prefix_length_);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    boost::asio::ip::network_v4::canonical((const boost::asio::ip::network_v4 *const)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    boost::asio::ip::network_v4::canonical((const boost::asio::ip::network_v4 *const)(v2 + 64));
    result = boost::asio::ip::operator==(
               (const boost::asio::ip::network_v4 *)(v2 + 64),
               (const boost::asio::ip::network_v4 *)(v2 + 96));
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 161: range 000000000C61AC57-000000000C61B0C5
boost::asio::ip::network_v4 __cdecl boost::asio::ip::make_network_v4(
        const std::string *str,
        boost::system::error_code *ec)
{
  boost::system::error_code *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char *v6; // rdi
  const char *v7; // rax
  boost::system::error_code *eca; // [rsp+8h] [rbp-118h]
  unsigned int prefix_len; // [rsp+2Ch] [rbp-F4h]
  __int64 pos; // [rsp+30h] [rbp-F0h]
  char v12[224]; // [rsp+40h] [rbp-E0h] BYREF

  eca = v2;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 addr:183 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = boost::asio::ip::make_network_v4;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  pos = std::string::find_first_of(ec, "/");
  if ( pos == -1 || pos == std::string::size(ec) - 1 || std::string::find_first_not_of(ec, "0123456789", pos + 1) != -1 )
    goto LABEL_17;
  if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 64, 32LL);
  }
  std::string::substr(v3 + 64, ec, 0LL, pos);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  boost::asio::ip::make_address_v4((const std::string *)(v3 + 48), (boost::system::error_code *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  if ( boost::system::error_code::operator bool(eca) )
  {
    boost::asio::ip::network_v4::network_v4((boost::asio::ip::network_v4 *const)str);
    goto LABEL_19;
  }
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  v6 = (char *)(pos + 1);
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
  {
    v6 = (char *)(v3 + 128);
    __asan_report_store_n(v3 + 128, 32LL);
  }
  std::string::substr(v3 + 128, ec, v6, -1LL);
  v7 = (const char *)std::string::c_str(v3 + 128);
  prefix_len = atoi(v7);
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  if ( prefix_len >= 0x21 )
  {
LABEL_17:
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(eca, invalid_argument_0);
    boost::asio::ip::network_v4::network_v4((boost::asio::ip::network_v4 *const)str);
  }
  else
  {
    boost::asio::ip::network_v4::network_v4(
      (boost::asio::ip::network_v4 *const)str,
      (const boost::asio::ip::address_v4 *)(v3 + 48),
      prefix_len);
  }
LABEL_19:
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (boost::asio::ip::network_v4)str;
};
