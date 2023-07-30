// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/system/error_code.hpp

// Line 233: range 000000000BEE1F12-000000000BEE1FC2
bool __cdecl boost::system::error_category::operator==(
        const boost::system::error_category *const this,
        const boost::system::error_category *rhs)
{
  boost::ulong_long_type id; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&rhs->id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !rhs->id_ )
    return this == rhs;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  id = this->id_;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return id == rhs->id_;
};

// Line 290: range 000000000BEE1FC4-000000000BEE1FD4
const char *__cdecl boost::system::detail::generic_error_category::name(
        const boost::system::detail::generic_error_category *const this)
{
  return "generic";
};

// Line 308: range 000000000BEE1FD6-000000000BEE1FE6
const char *__cdecl boost::system::detail::system_error_category::name(
        const boost::system::detail::system_error_category *const this)
{
  return "system";
};

// Line 344: range 000000000BEE1FE7-000000000BEE1FF3
const boost::system::error_category *__cdecl boost::system::system_category()
{
  return &boost::system::detail::cat_holder<void>::system_category_instance;
};

// Line 349: range 000000000BEE1FF4-000000000BEE2000
const boost::system::error_category *__cdecl boost::system::generic_category()
{
  return &boost::system::detail::cat_holder<void>::generic_category_instance;
};

// Line 408: range 000000000BEE2001-000000000BEE20BE
bool __cdecl boost::system::detail::failed_impl(int ev, const boost::system::error_category *cat)
{
  const boost::system::error_category *v2; // rdx
  const boost::system::error_category *v3; // rdx
  unsigned __int64 v6; // rax

  v2 = boost::system::system_category();
  if ( boost::system::error_category::operator==(cat, v2) )
    return ev != 0;
  v3 = boost::system::generic_category();
  if ( boost::system::error_category::operator==(cat, v3) )
    return ev != 0;
  if ( *(_BYTE *)(((unsigned __int64)cat >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(cat->_vptr_error_category + 6);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (*(__int64 (__fastcall **)(const boost::system::error_category *, _QWORD))v6)(cat, (unsigned int)ev);
};

// Line 444: range 000000000BEE20C0-000000000BEE2191
void __cdecl boost::system::error_condition::error_condition(
        boost::system::error_condition *const this,
        int val,
        const boost::system::error_category *cat)
{
  const boost::system::error_category *v3; // rsi
  bool v4; // cl
  char v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->val_ = val;
  v3 = cat;
  v4 = boost::system::detail::failed_impl(val, cat);
  v5 = *(_BYTE *)(((unsigned __int64)&this->failed_ >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (((unsigned __int8)this + 4) & 7) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store1(&this->failed_, v3);
  }
  this->failed_ = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->cat_ = cat;
};

// Line 481: range 000000000BEE2192-000000000BEE21D4
int __cdecl boost::system::error_condition::value(const boost::system::error_condition *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->val_;
};

// Line 486: range 000000000BEE21D6-000000000BEE2210
const boost::system::error_category *__cdecl boost::system::error_condition::category(
        const boost::system::error_condition *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->cat_;
};

// Line 534: range 000000000BEE2211-000000000BEE2306
bool __cdecl boost::system::operator==(
        const boost::system::error_condition *lhs,
        const boost::system::error_condition *rhs)
{
  int val; // ecx
  const boost::system::error_category *cat; // rdx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(lhs);
  }
  val = lhs->val_;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(rhs);
  }
  if ( val != rhs->val_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cat = rhs->cat_;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::system::error_category::operator==(lhs->cat_, cat);
};

// Line 546: range 000000000BEE2308-000000000BEE2361
std::error_condition __cdecl boost::system::error_condition::operator std::error_condition(
        const boost::system::error_condition *const this)
{
  const boost::system::error_category *v1; // rax
  const std::_V2::error_category *v2; // rbx
  int v3; // eax
  const std::_V2::error_category *M_cat; // rdx
  int M_value; // eax
  std::error_condition v6; // [rsp+10h] [rbp-20h] BYREF
  std::error_condition result; // 0:eax.4,8:rdx.8

  v1 = boost::system::error_condition::category(this);
  v2 = boost::system::error_category::operator std::_V2::error_category const&(v1);
  v3 = boost::system::error_condition::value(this);
  std::error_condition::error_condition(&v6, v3, v2);
  M_cat = v6._M_cat;
  M_value = v6._M_value;
  result._M_cat = M_cat;
  result._M_value = M_value;
  return result;
};

// Line 575: range 000000000BEE2362-000000000BEE241B
void __cdecl boost::system::error_code::error_code(boost::system::error_code *const this)
{
  __int64 v1; // rsi
  const boost::system::error_category *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->val_ = 0;
  v1 = ((_BYTE)this + 4) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->failed_ >> 3) + 0x7FFF8000) != 0
    && (char)v1 >= *(_BYTE *)(((unsigned __int64)&this->failed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->failed_, v1);
  }
  this->failed_ = 0;
  v2 = boost::system::system_category();
  if ( *(_BYTE *)(((unsigned __int64)&this->cat_ >> 3) + 0x7FFF8000) )
    v2 = (const boost::system::error_category *)__asan_report_store8();
  this->cat_ = v2;
};

// Line 580: range 000000000BEE241C-000000000BEE24ED
void __cdecl boost::system::error_code::error_code(
        boost::system::error_code *const this,
        int val,
        const boost::system::error_category *cat)
{
  const boost::system::error_category *v3; // rsi
  bool v4; // cl
  char v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->val_ = val;
  v3 = cat;
  v4 = boost::system::detail::failed_impl(val, cat);
  v5 = *(_BYTE *)(((unsigned __int64)&this->failed_ >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (((unsigned __int8)this + 4) & 7) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store1(&this->failed_, v3);
  }
  this->failed_ = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->cat_ = cat;
};

// Line 585: range 000000000BEE625E-000000000BEE62AA
void __cdecl boost::system::error_code::error_code<boost::asio::error::basic_errors>(
        boost::system::error_code *const this,
        boost::asio::error::basic_errors e,
        boost::system::detail::enable_if<true,void>::type *a3)
{
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *this = boost::asio::error::make_error_code(e);
};

// Line 602: range 000000000BEE615C-000000000BEE61A7
boost::system::detail::enable_if<true,boost::system::error_code>::type *__cdecl boost::system::error_code::operator=<boost::asio::error::basic_errors>(
        boost::system::error_code *const this,
        boost::asio::error::basic_errors val)
{
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *this = boost::asio::error::make_error_code(val);
  return this;
};

// Line 602: range 000000000BEE6BD4-000000000BEE6C1F
boost::system::detail::enable_if<true,boost::system::error_code>::type *__cdecl boost::system::error_code::operator=<boost::asio::error::misc_errors>(
        boost::system::error_code *const this,
        boost::asio::error::misc_errors val)
{
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *this = boost::asio::error::make_error_code(val);
  return this;
};

// Line 617: range 000000000BEE24EE-000000000BEE2530
int __cdecl boost::system::error_code::value(const boost::system::error_code *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->val_;
};

// Line 622: range 000000000BEE2532-000000000BEE256C
const boost::system::error_category *__cdecl boost::system::error_code::category(
        const boost::system::error_code *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->cat_;
};

// Line 632: range 000000000BEE256E-000000000BEE268F
std::string *__cdecl boost::system::error_code::message[abi:cxx11](
        std::string *retstr,
        const boost::system::error_code *const this)
{
  const boost::system::error_category *cat; // rbx
  const boost::system::error_category *v3; // rax
  unsigned __int64 v4; // rax
  void (__fastcall *v5)(std::string *, const boost::system::error_category *, _QWORD); // r12
  unsigned int v6; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cat = this->cat_;
  v3 = cat;
  if ( *(_BYTE *)(((unsigned __int64)cat >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(v3->_vptr_error_category + 4);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(void (__fastcall **)(std::string *, const boost::system::error_category *, _QWORD))v4;
  v6 = boost::system::error_code::value(this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v6 = 32;
    __asan_report_store_n(retstr, 32LL);
  }
  v5(retstr, cat, v6);
  return retstr;
};

// Line 635: range 000000000BEE2690-000000000BEE26D7
bool __cdecl boost::system::error_code::operator bool(const boost::system::error_code *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->val_ != 0;
};

// Line 652: range 000000000BEE26D8-000000000BEE27CD
bool __cdecl boost::system::operator==(const boost::system::error_code *lhs, const boost::system::error_code *rhs)
{
  int val; // ecx
  const boost::system::error_category *cat; // rdx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(lhs);
  }
  val = lhs->val_;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(rhs);
  }
  if ( val != rhs->val_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cat = rhs->cat_;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::system::error_category::operator==(lhs->cat_, cat);
};

// Line 809: range 00000000121EB528-00000000121EB61D
boost::system::error_code __cdecl boost::system::errc::make_error_code(boost::system::errc::errc_t e)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const boost::system::error_category *v4; // rax
  __int64 v5; // rax
  const boost::system::error_category *v6; // rdx
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v1 + 16) = boost::system::errc::make_error_code;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = boost::system::generic_category();
  boost::system::error_code::error_code((boost::system::error_code *const)(v1 + 32), e, v4);
  if ( *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  v5 = *(_QWORD *)(v1 + 32);
  v6 = *(const boost::system::error_category **)(v1 + 40);
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.cat_ = v6;
  result.val_ = v5;
  result.failed_ = BYTE4(v5);
  return result;
};

// Line 824: range 000000000BEE27CE-000000000BEE27FB
boost::system::error_condition __cdecl boost::system::error_category::default_error_condition(
        const boost::system::error_category *const this,
        int ev)
{
  __int64 v2; // rax
  const boost::system::error_category *cat; // rdx
  boost::system::error_condition v4; // [rsp+10h] [rbp-10h] BYREF
  boost::system::error_condition result; // 0:rax.5,8:rdx.8

  boost::system::error_condition::error_condition(&v4, ev, this);
  v2 = *(_QWORD *)&v4.val_;
  cat = v4.cat_;
  result.cat_ = cat;
  result.val_ = v2;
  result.failed_ = BYTE4(v2);
  return result;
};

// Line 829: range 000000000BEE27FC-000000000BEE2888
bool __cdecl boost::system::error_category::equivalent(
        const boost::system::error_category *const this,
        int code,
        const boost::system::error_condition *condition)
{
  unsigned __int64 v3; // rax
  const boost::system::error_category *v4; // rdx
  boost::system::error_condition lhs; // [rsp+20h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_error_category + 1);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_QWORD *)&lhs.val_ = (*(__int64 (__fastcall **)(const boost::system::error_category *const, _QWORD))v3)(
                           this,
                           (unsigned int)code);
  lhs.cat_ = v4;
  return boost::system::operator==(&lhs, condition);
};

// Line 834: range 000000000BEE288A-000000000BEE28DD
bool __cdecl boost::system::error_category::equivalent(
        const boost::system::error_category *const this,
        const boost::system::error_code *code,
        int condition)
{
  const boost::system::error_category *v3; // rdx

  v3 = boost::system::error_code::category(code);
  return boost::system::error_category::operator==(this, v3) && condition == boost::system::error_code::value(code);
};

// Line 836: range 000000000BEE28DE-000000000BEE2B53
const char *__cdecl boost::system::error_category::message(
        const boost::system::error_category *const this,
        int ev,
        char *buffer,
        std::size_t len)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char *v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  const char *v10; // rsi
  unsigned __int64 v11; // rcx
  char v12; // dl
  const char *result; // rax
  char v16[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 5 m:855";
  *(_QWORD *)(v4 + 16) = boost::system::error_category::message;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( len )
  {
    if ( len == 1 )
    {
      v8 = (unsigned __int8)buffer & 7;
      if ( *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000) != 0
        && (char)v8 >= *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(buffer, v8);
      }
      *buffer = 0;
      v7 = buffer;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = (unsigned __int64)(this->_vptr_error_category + 4);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, const boost::system::error_category *const, _QWORD))v9)(
        v4 + 32,
        this,
        (unsigned int)ev);
      v10 = (const char *)std::string::c_str(v4 + 32);
      strncpy(buffer, v10, len - 1);
      v11 = (unsigned __int64)&buffer[len - 1];
      v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)((len - 1 + (_BYTE)buffer) & 7) >= v12 )
      {
        LOBYTE(v10) = v12 != 0;
        __asan_report_store1(&buffer[len - 1], v10);
      }
      *(_BYTE *)v11 = 0;
      v7 = buffer;
      std::string::~string((void *)(v4 + 32));
    }
  }
  else
  {
    v7 = buffer;
  }
  result = v7;
  if ( v16 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 887: range 000000000BEE2B54-000000000BEE2B67
bool __cdecl boost::system::error_category::failed(const boost::system::error_category *const this, int ev)
{
  return ev != 0;
};

// Line 900: range 000000000BEE2D2E-000000000BEE2DBB
std::string *__cdecl boost::system::detail::generic_error_category::message[abi:cxx11](
        std::string *retstr,
        const boost::system::detail::generic_error_category *const this,
        int ev)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  boost::system::detail::generic_error_category_message[abi:cxx11](retstr, ev);
  return retstr;
};

// Line 905: range 000000000BEE2DBC-000000000BEE2DE9
const char *__cdecl boost::system::detail::generic_error_category::message(
        const boost::system::detail::generic_error_category *const this,
        int ev,
        char *buffer,
        std::size_t len)
{
  return boost::system::detail::generic_error_category_message(ev, buffer, len);
};

// Line 935: range 000000000BEE2EDC-000000000BEE2EF6
boost::system::error_condition __cdecl boost::system::detail::system_error_category::default_error_condition(
        const boost::system::detail::system_error_category *const this,
        int ev)
{
  return boost::system::detail::system_category_default_error_condition_posix(ev);
};

// Line 940: range 000000000BEE2EF8-000000000BEE2F85
std::string *__cdecl boost::system::detail::system_error_category::message[abi:cxx11](
        std::string *retstr,
        const boost::system::detail::system_error_category *const this,
        int ev)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  boost::system::detail::generic_error_category_message[abi:cxx11](retstr, ev);
  return retstr;
};

// Line 945: range 000000000BEE2F86-000000000BEE2FB3
const char *__cdecl boost::system::detail::system_error_category::message(
        const boost::system::detail::system_error_category *const this,
        int ev,
        char *buffer,
        std::size_t len)
{
  return boost::system::detail::generic_error_category_message(ev, buffer, len);
};

// Line 958: range 000000000BEE4012-000000000BEE402B
const std::_V2::error_category *__cdecl boost::system::error_category::operator std::_V2::error_category const&(
        const boost::system::error_category *const this)
{
  return boost::system::detail::to_std_category(this);
};
