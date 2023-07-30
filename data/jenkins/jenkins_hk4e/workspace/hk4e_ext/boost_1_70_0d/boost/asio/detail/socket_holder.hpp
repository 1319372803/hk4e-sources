// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/socket_holder.hpp

// Line 34: range 000000000C64B53E-000000000C64B599
void __cdecl boost::asio::detail::socket_holder::socket_holder(boost::asio::detail::socket_holder *const this)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->socket_ = -1;
};

// Line 40: range 000000000C64B59A-000000000C64B5F7
void __cdecl boost::asio::detail::socket_holder::socket_holder(
        boost::asio::detail::socket_holder *const this,
        boost::asio::detail::socket_type s)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->socket_ = s;
};

// Line 46: range 000000000C64B5F8-000000000C64B75F
void __cdecl boost::asio::detail::socket_holder::~socket_holder(boost::asio::detail::socket_holder *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  char *v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = (char *)(v1 + 96);
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 8 state:51 64 16 5 ec:50";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::socket_holder::~socket_holder;
  v4 = (_DWORD *)(v1 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( this->socket_ != -1 )
  {
    *((_DWORD *)v3 - 8) = 0;
    *(v3 - 28) = 0;
    *((_QWORD *)v3 - 3) = &boost::system::detail::cat_holder<void>::system_category_instance;
    *(v3 - 48) = 0;
    boost::asio::detail::socket_ops::close(
      this->socket_,
      (boost::asio::detail::socket_ops::state_type *)v3 - 48,
      1,
      (boost::system::error_code *)v3 - 2);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( v5 == (char *)v1 )
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
};

// Line 57: range 000000000C64B760-000000000C64B7AA
boost::asio::detail::socket_type __cdecl boost::asio::detail::socket_holder::get(
        const boost::asio::detail::socket_holder *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->socket_;
};

// Line 63: range 000000000C64B7AC-000000000C64B94F
void __cdecl boost::asio::detail::socket_holder::reset(boost::asio::detail::socket_holder *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  char *v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = (char *)(v1 + 96);
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 8 state:68 64 16 5 ec:67";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::socket_holder::reset;
  v4 = (_DWORD *)(v1 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( this->socket_ != -1 )
  {
    *((_DWORD *)v3 - 8) = 0;
    *(v3 - 28) = 0;
    *((_QWORD *)v3 - 3) = &boost::system::detail::cat_holder<void>::system_category_instance;
    *(v3 - 48) = 0;
    boost::asio::detail::socket_ops::close(
      this->socket_,
      (boost::asio::detail::socket_ops::state_type *)v3 - 48,
      1,
      (boost::system::error_code *)v3 - 2);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(this);
    }
    this->socket_ = -1;
  }
  if ( v5 == (char *)v1 )
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
};

// Line 75: range 000000000C64B950-000000000C64B9AD
void __cdecl boost::asio::detail::socket_holder::reset(
        boost::asio::detail::socket_holder *const this,
        boost::asio::detail::socket_type s)
{
  boost::asio::detail::socket_holder::reset(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->socket_ = s;
};

// Line 82: range 000000000C64B9AE-000000000C64BA08
boost::asio::detail::socket_type __cdecl boost::asio::detail::socket_holder::release(
        boost::asio::detail::socket_holder *const this)
{
  boost::asio::detail::socket_type tmp; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  tmp = this->socket_;
  this->socket_ = -1;
  return tmp;
};
