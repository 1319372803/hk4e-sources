// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ssl/detail/openssl_init.hpp

// Line 31: range 000000000C7A9E3C-000000000C7A9E56
void __cdecl boost::asio::ssl::detail::openssl_init_base::openssl_init_base(
        boost::asio::ssl::detail::openssl_init_base *const this)
{
  boost::asio::detail::noncopyable::noncopyable(this);
};

// Line 31: range 000000000C7A9E58-000000000C7A9E72
void __cdecl boost::asio::ssl::detail::openssl_init_base::~openssl_init_base(
        boost::asio::ssl::detail::openssl_init_base *const this)
{
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 59: range 000000000C7A9E74-000000000C7A9F8B
void __cdecl boost::asio::ssl::detail::openssl_init<true>::openssl_init(
        boost::asio::ssl::detail::openssl_init<true> *const this)
{
  __int64 v1; // rsi
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
  *(_QWORD *)(v2 + 8) = "1 32 8 6 tmp:65";
  *(_QWORD *)(v2 + 16) = boost::asio::ssl::detail::openssl_init<true>::openssl_init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::asio::ssl::detail::openssl_init_base::openssl_init_base((boost::asio::ssl::detail::openssl_init_base *const)this);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  boost::asio::ssl::detail::openssl_init_base::instance();
  *(_QWORD *)(v2 + 32) = &boost::asio::ssl::detail::openssl_init<true>::instance_;
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

// Line 70: range 000000000C7A9F8C-000000000C7A9FB2
void __cdecl boost::asio::ssl::detail::openssl_init<true>::~openssl_init(
        boost::asio::ssl::detail::openssl_init<true> *const this)
{
  std::shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init>::~shared_ptr(&this->ref_);
  boost::asio::ssl::detail::openssl_init_base::~openssl_init_base((boost::asio::ssl::detail::openssl_init_base *const)this);
};
