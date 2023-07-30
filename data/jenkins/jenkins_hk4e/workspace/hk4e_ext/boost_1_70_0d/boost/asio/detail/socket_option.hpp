// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/socket_option.hpp

// Line 43: range 000000000C6B8FE6-000000000C6B9048
void __cdecl boost::asio::detail::socket_option::boolean<1,2>::boolean(
        boost::asio::detail::socket_option::boolean<1,2> *const this,
        bool v)
{
  int v2; // edi

  v2 = v;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v2 = (int)this;
    __asan_report_store4(this);
  }
  this->value_ = v2;
};

// Line 74: range 000000000C6B96D2-000000000C6B971C
int __cdecl boost::asio::detail::socket_option::integer<1,7>::value(
        const boost::asio::detail::socket_option::integer<1,7> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->value_;
};

// Line 74: range 000000000C6B97FC-000000000C6B9846
int __cdecl boost::asio::detail::socket_option::integer<1,8>::value(
        const boost::asio::detail::socket_option::integer<1,8> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->value_;
};

// Line 82: range 000000000C6C7BFA-000000000C6C7C0C
int __cdecl boost::asio::detail::socket_option::boolean<1,2>::name<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::boolean<1,2> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 2;
};

// Line 96: range 000000000C6C7C0E-000000000C6C7C1F
const int *__cdecl boost::asio::detail::socket_option::boolean<1,2>::data<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::boolean<1,2> *const this,
        const boost::asio::ip::tcp *a2)
{
  return &this->value_;
};

// Line 103: range 000000000C6C7C20-000000000C6C7C32
std::size_t __cdecl boost::asio::detail::socket_option::boolean<1,2>::size<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::boolean<1,2> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 4LL;
};

// Line 140: range 000000000C6B93A4-000000000C6B93F3
void __cdecl boost::asio::detail::socket_option::integer<1,7>::integer(
        boost::asio::detail::socket_option::integer<1,7> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->value_ = 0;
};

// Line 140: range 000000000C6B9512-000000000C6B9561
void __cdecl boost::asio::detail::socket_option::integer<1,8>::integer(
        boost::asio::detail::socket_option::integer<1,8> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->value_ = 0;
};

// Line 146: range 000000000C6B8F42-000000000C6B8F93
void __cdecl boost::asio::detail::socket_option::integer<1,7>::integer(
        boost::asio::detail::socket_option::integer<1,7> *const this,
        int v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->value_ = v;
};

// Line 146: range 000000000C6B8F94-000000000C6B8FE5
void __cdecl boost::asio::detail::socket_option::integer<1,8>::integer(
        boost::asio::detail::socket_option::integer<1,8> *const this,
        int v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->value_ = v;
};

// Line 166: range 000000000C6C7C34-000000000C6C7C46
int __cdecl boost::asio::detail::socket_option::integer<1,7>::level<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::integer<1,7> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 1;
};

// Line 166: range 000000000C6C7C82-000000000C6C7C94
int __cdecl boost::asio::detail::socket_option::integer<1,8>::level<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::integer<1,8> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 1;
};

// Line 173: range 000000000C6C7C48-000000000C6C7C5A
int __cdecl boost::asio::detail::socket_option::integer<1,7>::name<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::integer<1,7> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 7;
};

// Line 173: range 000000000C6C7C96-000000000C6C7CA8
int __cdecl boost::asio::detail::socket_option::integer<1,8>::name<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::integer<1,8> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 8;
};

// Line 180: range 000000000C6C7CD0-000000000C6C7CE1
int *__cdecl boost::asio::detail::socket_option::integer<1,7>::data<boost::asio::ip::tcp>(
        boost::asio::detail::socket_option::integer<1,7> *const this,
        const boost::asio::ip::tcp *a2)
{
  return &this->value_;
};

// Line 180: range 000000000C6C7DE0-000000000C6C7DF1
int *__cdecl boost::asio::detail::socket_option::integer<1,8>::data<boost::asio::ip::tcp>(
        boost::asio::detail::socket_option::integer<1,8> *const this,
        const boost::asio::ip::tcp *a2)
{
  return &this->value_;
};

// Line 187: range 000000000C6C7C5C-000000000C6C7C6D
const int *__cdecl boost::asio::detail::socket_option::integer<1,7>::data<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::integer<1,7> *const this,
        const boost::asio::ip::tcp *a2)
{
  return &this->value_;
};

// Line 187: range 000000000C6C7CAA-000000000C6C7CBB
const int *__cdecl boost::asio::detail::socket_option::integer<1,8>::data<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::integer<1,8> *const this,
        const boost::asio::ip::tcp *a2)
{
  return &this->value_;
};

// Line 194: range 000000000C6C7C6E-000000000C6C7C80
std::size_t __cdecl boost::asio::detail::socket_option::integer<1,7>::size<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::integer<1,7> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 4LL;
};

// Line 194: range 000000000C6C7CBC-000000000C6C7CCE
std::size_t __cdecl boost::asio::detail::socket_option::integer<1,8>::size<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::integer<1,8> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 4LL;
};

// Line 201: range 000000000C6C7CE2-000000000C6C7DDE
void __cdecl boost::asio::detail::socket_option::integer<1,7>::resize<boost::asio::ip::tcp>(
        boost::asio::detail::socket_option::integer<1,7> *const this,
        const boost::asio::ip::tcp *a2,
        std::size_t s)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 6 ex:205";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::socket_option::integer<1,7>::resize<boost::asio::ip::tcp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( s != 4 )
  {
    std::length_error::length_error((std::length_error *)(v3 + 32), "integer socket option resize");
    __asan_handle_no_return(v3 + 32);
    boost::throw_exception<std::length_error>((const std::length_error *)(v3 + 32));
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

// Line 201: range 000000000C6C7DF2-000000000C6C7EEE
void __cdecl boost::asio::detail::socket_option::integer<1,8>::resize<boost::asio::ip::tcp>(
        boost::asio::detail::socket_option::integer<1,8> *const this,
        const boost::asio::ip::tcp *a2,
        std::size_t s)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 6 ex:205";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::socket_option::integer<1,8>::resize<boost::asio::ip::tcp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( s != 4 )
  {
    std::length_error::length_error((std::length_error *)(v3 + 32), "integer socket option resize");
    __asan_handle_no_return(v3 + 32);
    boost::throw_exception<std::length_error>((const std::length_error *)(v3 + 32));
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

// Line 280: range 000000000C6C7BE6-000000000C6C7BF8
int __cdecl boost::asio::detail::socket_option::boolean<1,2>::level<boost::asio::ip::tcp>(
        const boost::asio::detail::socket_option::boolean<1,2> *const this,
        const boost::asio::ip::tcp *a2)
{
  return 1;
};
