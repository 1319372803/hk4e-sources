// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/rfc7230.hpp

// Line 288: range 000000000C71F7C0-000000000C71F8FE
bool __cdecl boost::beast::http::token_list::const_iterator::operator==(
        const boost::beast::http::token_list::const_iterator *const this,
        const boost::beast::http::token_list::const_iterator *other)
{
  const char *it; // rcx
  const char *first; // rcx
  const char *last; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&other->it_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other->it_, other);
  it = other->it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->it_, other);
  if ( it != this->it_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&other->first_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other->first_, other);
  first = other->first_;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->first_, other);
  if ( first != this->first_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&other->last_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other->last_, other);
  last = other->last_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_, other);
  return last == this->last_;
};

// Line 297: range 000000000C71F900-000000000C71F927
bool __cdecl boost::beast::http::token_list::const_iterator::operator!=(
        const boost::beast::http::token_list::const_iterator *const this,
        const boost::beast::http::token_list::const_iterator *other)
{
  return !boost::beast::http::token_list::const_iterator::operator==(this, other);
};

// Line 303: range 000000000C71F928-000000000C71F935
boost::beast::http::token_list::const_iterator::reference __cdecl boost::beast::http::token_list::const_iterator::operator*(
        const boost::beast::http::token_list::const_iterator *const this)
{
  return &this->v_;
};

// Line 309: range 000000000C71F936-000000000C71F94F
boost::beast::http::token_list::const_iterator::pointer __cdecl boost::beast::http::token_list::const_iterator::operator->(
        const boost::beast::http::token_list::const_iterator *const this)
{
  return boost::beast::http::token_list::const_iterator::operator*(this);
};

// Line 315: range 000000000C71F950-000000000C71F96D
boost::beast::http::token_list::const_iterator *__cdecl boost::beast::http::token_list::const_iterator::operator++(
        boost::beast::http::token_list::const_iterator *const this)
{
  boost::beast::http::token_list::const_iterator::increment(this);
  return this;
};

// Line 332: range 000000000C71F96E-000000000C71FA2F
void __cdecl boost::beast::http::token_list::const_iterator::const_iterator(
        boost::beast::http::token_list::const_iterator *const this,
        boost::beast::http::token_list::iter_type begin,
        boost::beast::http::token_list::iter_type end)
{
  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&this->v_);
  if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = begin;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->first_ = begin;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->last_ = end;
  boost::beast::http::token_list::const_iterator::increment(this);
};

// Line 350: range 000000000C71FA30-000000000C71FA78
boost::beast::http::token_list::const_iterator *__cdecl boost::beast::http::token_list::begin(
        boost::beast::http::token_list::const_iterator *retstr,
        const boost::beast::http::token_list *const this)
{
  const char *v2; // rbx
  const char *v3; // rdx

  v2 = boost::basic_string_view<char,std::char_traits<char>>::begin(&this->s_);
  v3 = boost::basic_string_view<char,std::char_traits<char>>::end(&this->s_);
  boost::beast::http::token_list::const_iterator::const_iterator(retstr, v2, v3);
  return retstr;
};

// Line 359: range 000000000C71FA7A-000000000C71FAC2
boost::beast::http::token_list::const_iterator *__cdecl boost::beast::http::token_list::end(
        boost::beast::http::token_list::const_iterator *retstr,
        const boost::beast::http::token_list *const this)
{
  const char *v2; // rbx
  const char *v3; // rdx

  v2 = boost::basic_string_view<char,std::char_traits<char>>::end(&this->s_);
  v3 = boost::basic_string_view<char,std::char_traits<char>>::end(&this->s_);
  boost::beast::http::token_list::const_iterator::const_iterator(retstr, v2, v3);
  return retstr;
};

// Line 383: range 000000000C757F6C-000000000C758024
bool __cdecl boost::beast::http::token_list::exists<char [11]>(
        boost::beast::http::token_list *const this,
        const char (*s)[11])
{
  boost::beast::http::token_list::const_iterator v3; // [rsp+10h] [rbp-D0h] BYREF
  boost::beast::http::token_list::const_iterator other; // [rsp+40h] [rbp-A0h] BYREF
  boost::beast::http::token_list::const_iterator __last; // [rsp+70h] [rbp-70h] BYREF
  boost::beast::http::token_list::const_iterator __first; // [rsp+A0h] [rbp-40h] BYREF

  boost::beast::http::token_list::end(&other, this);
  boost::beast::http::token_list::end(&__last, this);
  boost::beast::http::token_list::begin(&__first, this);
  std::find_if<boost::beast::http::token_list::const_iterator,bool boost::beast::http::token_list::exists<char [11]>(char [11] const&)::{lambda(boost::basic_string_view<char,std::char_traits<char>> const&)#1}>(
    &v3,
    __first,
    __last,
    (boost::beast::http::token_list::exists<char [11]>::<lambda(const value_type&)>)s);
  return boost::beast::http::token_list::const_iterator::operator!=(&v3, &other);
};

// Line 383: range 000000000C7580B0-000000000C758168
bool __cdecl boost::beast::http::token_list::exists<char [6]>(
        boost::beast::http::token_list *const this,
        const char (*s)[6])
{
  boost::beast::http::token_list::const_iterator v3; // [rsp+10h] [rbp-D0h] BYREF
  boost::beast::http::token_list::const_iterator other; // [rsp+40h] [rbp-A0h] BYREF
  boost::beast::http::token_list::const_iterator __last; // [rsp+70h] [rbp-70h] BYREF
  boost::beast::http::token_list::const_iterator __first; // [rsp+A0h] [rbp-40h] BYREF

  boost::beast::http::token_list::end(&other, this);
  boost::beast::http::token_list::end(&__last, this);
  boost::beast::http::token_list::begin(&__first, this);
  std::find_if<boost::beast::http::token_list::const_iterator,bool boost::beast::http::token_list::exists<char [6]>(char [6] const&)::{lambda(boost::basic_string_view<char,std::char_traits<char>> const&)#1}>(
    &v3,
    __first,
    __last,
    (boost::beast::http::token_list::exists<char [6]>::<lambda(const value_type&)>)s);
  return boost::beast::http::token_list::const_iterator::operator!=(&v3, &other);
};

// Line 387: range 000000000C757EE2-000000000C757F6A
bool __cdecl boost::beast::http::token_list::exists<char [11]>(char [11] const&)::{lambda(boost::basic_string_view<char,std::char_traits<char>> const&)#1}::operator()(
        const boost::beast::http::token_list::exists<char [11]>::<lambda(const value_type&)> *const this,
        const boost::beast::http::token_list::value_type *v)
{
  boost::basic_string_view<char,std::char_traits<char> > lhs; // [rsp+10h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v);
  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&lhs, (const char *)this->__s);
  if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  return boost::beast::iequals(lhs, *v);
};

// Line 387: range 000000000C758026-000000000C7580AE
bool __cdecl boost::beast::http::token_list::exists<char [6]>(char [6] const&)::{lambda(boost::basic_string_view<char,std::char_traits<char>> const&)#1}::operator()(
        const boost::beast::http::token_list::exists<char [6]>::<lambda(const value_type&)> *const this,
        const boost::beast::http::token_list::value_type *v)
{
  boost::basic_string_view<char,std::char_traits<char> > lhs; // [rsp+10h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v);
  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&lhs, (const char *)this->__s);
  if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  return boost::beast::iequals(lhs, *v);
};

// Line 396: range 000000000C774476-000000000C774631
bool __cdecl boost::beast::http::validate_list<boost::beast::http::detail::opt_token_list_policy>(
        const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy> *list)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  bool result; // al
  char v5[224]; // [rsp+10h] [rbp-E0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 40 8 last:399 112 40 6 it:400";
  *(_QWORD *)(v1 + 16) = boost::beast::http::validate_list<boost::beast::http::detail::opt_token_list_policy>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::end(
    (boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *)(v1 + 32),
    list);
  boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::begin(
    (boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *)(v1 + 112),
    list);
  if ( boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::error((const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const)(v1 + 112)) )
  {
    result = 0;
  }
  else
  {
    do
    {
      if ( !boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::operator!=(
              (const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const)(v1 + 112),
              (const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *)(v1 + 32)) )
        break;
      boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::operator++((boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const)(v1 + 112));
      if ( boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::error((const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const)(v1 + 112)) )
      {
        result = 0;
        goto LABEL_11;
      }
    }
    while ( !boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::operator==(
               (const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *const)(v1 + 112),
               (const boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator *)(v1 + 32)) );
    result = 1;
  }
LABEL_11:
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
