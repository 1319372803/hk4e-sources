// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/system/system_error.hpp

// Line 22: range 000000000BF09726-000000000BF09820
void __cdecl boost::system::system_error::system_error(
        boost::system::system_error *const this,
        const boost::system::system_error *a2)
{
  __int64 *v2; // rdx
  const boost::system::error_category *cat; // rdx

  std::runtime_error::runtime_error((std::runtime_error *)this, (const std::runtime_error *)a2);
  v2 = &`vtable for'boost::system::system_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->m_error_code >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->m_error_code >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  cat = a2->m_error_code.cat_;
  *(_QWORD *)&this->m_error_code.val_ = *(_QWORD *)&a2->m_error_code.val_;
  this->m_error_code.cat_ = cat;
  std::string::basic_string(&this->m_what, &a2->m_what);
};

// Line 33: range 000000000BEE4196-000000000BEE42FF
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::system::system_error::system_error(
        boost::system::system_error *const this,
        boost::system::error_code ec,
        const char *what_arg)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 *v7; // rdx
  const boost::system::error_category *v8; // rdx
  const boost::system::error_category *cat; // [rsp+8h] [rbp-78h]
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  cat = ec.cat_;
  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 5 ec:33";
  *(_QWORD *)(v3 + 16) = boost::system::system_error::system_error;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v3 + 32) = v6;
  *(_QWORD *)(v3 + 40) = cat;
  std::runtime_error::runtime_error((std::runtime_error *)this, what_arg);
  v7 = &`vtable for'boost::system::system_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v7;
  if ( *(_WORD *)(((unsigned __int64)&this->m_error_code >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  v8 = *(const boost::system::error_category **)(v3 + 40);
  *(_QWORD *)&this->m_error_code.val_ = *(_QWORD *)(v3 + 32);
  this->m_error_code.cat_ = v8;
  std::string::basic_string(&this->m_what);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 47: range 000000000BEE4300-000000000BEE435D
void __cdecl boost::system::system_error::~system_error(boost::system::system_error *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::system::system_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::string::~string(&this->m_what);
  std::runtime_error::~runtime_error((std::runtime_error *)this);
};

// Line 47: range 000000000BEE435E-000000000BEE4388
void __cdecl boost::system::system_error::~system_error(boost::system::system_error *const this)
{
  boost::system::system_error::~system_error(this);
  operator delete(this, 0x40uLL);
};

// Line 61: range 000000000BEE438A-000000000BEE448B
const char *__cdecl boost::system::system_error::what(const boost::system::system_error *const this)
{
  __int64 v1; // rsi
  std::string v3; // [rsp+10h] [rbp-30h] BYREF

  if ( (unsigned __int8)std::string::empty() )
  {
    v1 = std::runtime_error::what((std::runtime_error *)this);
    std::string::operator=(&this->m_what, v1);
    if ( (unsigned __int8)std::string::empty() != 1 )
      std::string::operator+=(&this->m_what, ": ");
    boost::system::error_code::message[abi:cxx11](&v3, &this->m_error_code);
    std::string::operator+=(&this->m_what, &v3);
    std::string::~string(&v3);
  }
  return (const char *)std::string::c_str(&this->m_what);
};

// Line 960: range 000000000BEE402C-000000000BEE4194
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::system::system_error::system_error(
        boost::system::system_error *const this,
        boost::system::error_code ec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  __int64 *v6; // rdx
  const boost::system::error_category *v7; // rdx
  const boost::system::error_category *cat; // [rsp+8h] [rbp-78h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  cat = ec.cat_;
  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ec:27";
  *(_QWORD *)(v2 + 16) = boost::system::system_error::system_error;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_QWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 40) = cat;
  std::runtime_error::runtime_error((std::runtime_error *)this, uri);
  v6 = &`vtable for'boost::system::system_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v6;
  if ( *(_WORD *)(((unsigned __int64)&this->m_error_code >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  v7 = *(const boost::system::error_category **)(v2 + 40);
  *(_QWORD *)&this->m_error_code.val_ = *(_QWORD *)(v2 + 32);
  this->m_error_code.cat_ = v7;
  std::string::basic_string(&this->m_what);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
