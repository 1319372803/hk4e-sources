// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/network_v4.hpp

// Line 44: range 000000000C619A5A-000000000C619AB9
void __cdecl boost::asio::ip::network_v4::network_v4(boost::asio::ip::network_v4 *const this)
{
  boost::asio::ip::address_v4::address_v4((boost::asio::ip::address_v4 *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->prefix_length_);
  }
  this->prefix_length_ = 0;
};

// Line 59: range 000000000C619ABA-000000000C619B66
void __cdecl boost::asio::ip::network_v4::network_v4(
        boost::asio::ip::network_v4 *const this,
        const boost::asio::ip::network_v4 *other)
{
  unsigned __int16 prefix_length; // cx

  boost::asio::ip::address_v4::address_v4(
    (boost::asio::ip::address_v4 *const)this,
    (const boost::asio::ip::address_v4 *)other);
  if ( *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&other->prefix_length_);
  }
  prefix_length = other->prefix_length_;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->prefix_length_);
  }
  this->prefix_length_ = prefix_length;
};

// Line 67: range 000000000C619B68-000000000C619C14
void __cdecl boost::asio::ip::network_v4::network_v4(
        boost::asio::ip::network_v4 *const this,
        boost::asio::ip::network_v4 *other)
{
  unsigned __int16 prefix_length; // cx

  boost::asio::ip::address_v4::address_v4(
    (boost::asio::ip::address_v4 *const)this,
    (boost::asio::ip::address_v4 *)other);
  if ( *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&other->prefix_length_);
  }
  prefix_length = other->prefix_length_;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->prefix_length_);
  }
  this->prefix_length_ = prefix_length;
};

// Line 84: range 000000000C619C16-000000000C619CC5
boost::asio::ip::network_v4 *__cdecl boost::asio::ip::network_v4::operator=(
        boost::asio::ip::network_v4 *const this,
        boost::asio::ip::network_v4 *other)
{
  unsigned __int16 prefix_length; // cx

  boost::asio::ip::address_v4::operator=((boost::asio::ip::address_v4 *const)this, (boost::asio::ip::address_v4 *)other);
  if ( *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&other->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&other->prefix_length_);
  }
  prefix_length = other->prefix_length_;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->prefix_length_);
  }
  this->prefix_length_ = prefix_length;
  return this;
};

// Line 100: range 000000000C619CC6-000000000C619D16
unsigned __int16 __cdecl boost::asio::ip::network_v4::prefix_length(const boost::asio::ip::network_v4 *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&this->prefix_length_);
  }
  return this->prefix_length_;
};

// Line 109: range 000000000C619D18-000000000C619E47
boost::asio::ip::address_v4 __cdecl boost::asio::ip::network_v4::network(const boost::asio::ip::network_v4 *const this)
{
  const boost::asio::ip::address_v4 *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::ip::address_v4::uint_type v5; // r14d
  boost::asio::ip::address_v4::uint_type v6; // edx
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::asio::ip::network_v4::network;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = boost::asio::ip::address_v4::to_uint(v1);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32);
  boost::asio::ip::network_v4::netmask((const boost::asio::ip::network_v4 *const)(v2 + 32));
  v6 = boost::asio::ip::address_v4::to_uint((const boost::asio::ip::address_v4 *const)(v2 + 32)) & v5;
  boost::asio::ip::address_v4::address_v4((boost::asio::ip::address_v4 *const)this, v6);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (boost::asio::ip::address_v4)this;
};

// Line 124: range 000000000C619E48-000000000C619FD4
boost::asio::ip::network_v4 __cdecl boost::asio::ip::network_v4::canonical(
        const boost::asio::ip::network_v4 *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v1 + 16) = boost::asio::ip::network_v4::canonical;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 64);
  boost::asio::ip::network_v4::netmask((const boost::asio::ip::network_v4 *const)(v1 + 64));
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  boost::asio::ip::network_v4::network((const boost::asio::ip::network_v4 *const)(v1 + 48));
  boost::asio::ip::network_v4::network_v4(
    (boost::asio::ip::network_v4 *const)this,
    (const boost::asio::ip::address_v4 *)(v1 + 48),
    (const boost::asio::ip::address_v4 *)(v1 + 64));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return (boost::asio::ip::network_v4)this;
};

// Line 130: range 000000000C619FD6-000000000C61A02D
bool __cdecl boost::asio::ip::network_v4::is_host(const boost::asio::ip::network_v4 *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&this->prefix_length_);
  }
  return this->prefix_length_ == 32;
};

// Line 145: range 000000000C61A02E-000000000C61A0F2
bool __cdecl boost::asio::ip::operator==(const boost::asio::ip::network_v4 *a, const boost::asio::ip::network_v4 *b)
{
  unsigned __int16 prefix_length; // cx

  if ( !boost::asio::ip::operator==((const boost::asio::ip::address_v4 *)a, (const boost::asio::ip::address_v4 *)b) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&a->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&a->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&a->prefix_length_);
  }
  prefix_length = a->prefix_length_;
  if ( *(_BYTE *)(((unsigned __int64)&b->prefix_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&b->prefix_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&b->prefix_length_);
  }
  return prefix_length == b->prefix_length_;
};
