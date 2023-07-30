// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/detail/basic_parsed_list.hpp

// Line 64: range 000000000C77FB42-000000000C77FC13
bool __cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::operator==(
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const this,
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *other)
{
  const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *list; // rcx
  const char *it; // rcx

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8(other, other);
  list = other->list_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, other);
  if ( list != this->list_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&other->it_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other->it_, other);
  it = other->it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->it_, other);
  return it == this->it_;
};

// Line 73: range 000000000C77468E-000000000C7746B5
bool __cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::operator!=(
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const this,
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *other)
{
  return !boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::operator==(
            this,
            other);
};

// Line 80: range 000000000C7746D4-000000000C7746E5
boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::reference __cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::operator*(
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const this)
{
  return &this->v_;
};

// Line 86: range 000000000C7746B6-000000000C7746D3
boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *__cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::operator++(
        boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const this)
{
  boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment(this);
  return this;
};

// Line 101: range 000000000C77FAF8-000000000C77FB40
bool __cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::error(
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const this)
{
  if ( *(char *)(((unsigned __int64)&this->error_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->error_);
  return this->error_;
};

// Line 109: range 000000000C77FC14-000000000C77FCFF
void __cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::const_iterator(
        boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const this,
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *list,
        bool at_end)
{
  const char *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->list_ = list;
  if ( at_end )
    v3 = 0LL;
  else
    v3 = boost::basic_string_view<char,std::char_traits<char>>::data(&list->s_);
  if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
    v3 = (const char *)__asan_report_store8();
  this->it_ = v3;
  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&this->v_);
  if ( *(char *)(((unsigned __int64)&this->error_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->error_);
  this->error_ = 0;
  if ( !at_end )
    boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment(this);
};

// Line 120: range 000000000C77FD00-000000000C77FE01
void __cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment(
        boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const this)
{
  __int64 v1; // rsi
  boost::beast::http::detail::opt_token_list_policy *v2; // r9
  boost::beast::string_view *p_s; // rax
  boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *p_it; // rdi

  v2 = boost::empty_::empty_value<boost::beast::http::detail::opt_token_list_policy,0u,true>::get((boost::empty_::empty_value<boost::beast::http::detail::opt_token_list_policy,0,true> *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  p_s = &this->list_->s_;
  p_it = (boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *)&this->it_;
  if ( *(_WORD *)(((unsigned __int64)this->list_ >> 3) + 0x7FFF8000) )
  {
    p_it = (boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *)this->list_;
    p_s = (boost::beast::string_view *)__asan_report_load16();
  }
  if ( !boost::beast::http::detail::opt_token_list_policy::operator()(v2, &this->v_, &p_it->s_.ptr_, *p_s) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->it_ = 0LL;
    if ( *(char *)(((unsigned __int64)&this->error_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->error_);
    this->error_ = 1;
  }
};

// Line 133: range 000000000C774376-000000000C774475
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::basic_parsed_list(
        boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *const this,
        boost::beast::string_view s)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  std::size_t v8; // rdi
  std::size_t len; // [rsp+8h] [rbp-68h]
  char v11[80]; // [rsp+20h] [rbp-50h] BYREF

  len = s.len_;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 s:133";
  *(_QWORD *)(v2 + 16) = boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::basic_parsed_list;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v2 + 32) = v6;
  *(_QWORD *)(v2 + 40) = len;
  v7 = *(unsigned __int16 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (_WORD)v7 )
    v5 = __asan_report_store16(this, v7);
  v8 = *((_QWORD *)v4 - 3);
  this->s_.ptr_ = (const char *)*((_QWORD *)v4 - 4);
  this->s_.len_ = v8;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 154: range 000000000C774632-000000000C77465F
boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *__cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::begin(
        boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *retstr,
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *const this)
{
  boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::const_iterator(
    retstr,
    this,
    0);
  return retstr;
};

// Line 164: range 000000000C774660-000000000C77468D
boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *__cdecl boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::end(
        boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *retstr,
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *const this)
{
  boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::const_iterator(
    retstr,
    this,
    1);
  return retstr;
};
