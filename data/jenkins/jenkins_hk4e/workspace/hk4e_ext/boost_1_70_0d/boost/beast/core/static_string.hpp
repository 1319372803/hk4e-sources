// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/static_string.hpp

// Line 50: range 000000000C740AE2-000000000C740B36
void __cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::term(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi
  std::char_traits<char>::char_type __c2; // [rsp+1Fh] [rbp-1h] BYREF

  __c2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  std::char_traits<char>::assign(&this->s_[this->n_], &__c2);
};

// Line 326: range 000000000C73300A-000000000C73301B
char *__cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::data(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  return this->s_;
};

// Line 333: range 000000000C778672-000000000C778683
const char *__cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::data(
        const boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  return this->s_;
};

// Line 346: range 000000000C769C9C-000000000C769CE4
boost::beast::static_string<4096,char,std::char_traits<char> >::string_view_type __cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::operator boost::basic_string_view<char,std::char_traits<char>>(
        const boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  const char *v1; // rbx
  boost::beast::static_string<4096,char,std::char_traits<char> >::size_type v2; // rax
  boost::basic_string_view<char,std::char_traits<char> > v4; // [rsp+10h] [rbp-20h] BYREF

  v1 = boost::beast::static_string<4096ul,char,std::char_traits<char>>::data(this);
  v2 = boost::beast::static_string<4096ul,char,std::char_traits<char>>::size(this);
  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&v4, v1, v2);
  return v4;
};

// Line 358: range 000000000C752574-000000000C752585
boost::beast::static_string<4096,char,std::char_traits<char> >::iterator __cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::begin(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  return this->s_;
};

// Line 379: range 000000000C740B38-000000000C740B78
boost::beast::static_string<4096,char,std::char_traits<char> >::iterator __cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::end(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  return &this->s_[this->n_];
};

// Line 446: range 000000000C732E16-000000000C732E51
bool __cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::empty(
        const boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  return this->n_ == 0;
};

// Line 453: range 000000000C73301C-000000000C733051
boost::beast::static_string<4096,char,std::char_traits<char> >::size_type __cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::size(
        const boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  return this->n_;
};

// Line 467: range 000000000C732CA8-000000000C732CB6
boost::beast::static_string<4096,char,std::char_traits<char> >::size_type __cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::max_size(
        const boost::beast::static_string<4096,char,std::char_traits<char> > *const this)
{
  return 4096LL;
};

// Line 508: range 000000000C77833E-000000000C778376
boost::beast::static_string<4096,char,std::char_traits<char> > *__cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::insert(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this,
        boost::beast::static_string<4096,char,std::char_traits<char> >::size_type index,
        const char *s)
{
  std::size_t v3; // rcx

  v3 = std::char_traits<char>::length(s);
  return boost::beast::static_string<4096ul,char,std::char_traits<char>>::insert(this, index, s, v3);
};

// Line 612: range 000000000C77725E-000000000C77729A
boost::beast::static_string<4096,char,std::char_traits<char> > *__cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::append(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this,
        const char *s,
        boost::beast::static_string<4096,char,std::char_traits<char> >::size_type count)
{
  boost::beast::static_string<4096,char,std::char_traits<char> >::size_type v3; // rsi

  v3 = boost::beast::static_string<4096ul,char,std::char_traits<char>>::size(this);
  boost::beast::static_string<4096ul,char,std::char_traits<char>>::insert(this, v3, s, count);
  return this;
};

// Line 619: range 000000000C768EEA-000000000C768F21
boost::beast::static_string<4096,char,std::char_traits<char> > *__cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::append(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this,
        const char *s)
{
  boost::beast::static_string<4096,char,std::char_traits<char> >::size_type v2; // rcx

  v2 = boost::beast::static_string<4096ul,char,std::char_traits<char>>::size(this);
  boost::beast::static_string<4096ul,char,std::char_traits<char>>::insert(this, v2, s);
  return this;
};

// Line 633: range 000000000C732DD8-000000000C732E14
std::enable_if<true,boost::beast::static_string<4096,char,std::char_traits<char> >&>::type __cdecl boost::beast::static_string<4096ul,char,std::char_traits<char>>::append<char const*>(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this,
        const char *first,
        const char *last)
{
  const boost::beast::static_string<4096,char,std::char_traits<char> >::value_type *v3; // rsi

  v3 = boost::beast::static_string<4096ul,char,std::char_traits<char>>::end(this);
  boost::beast::static_string<4096ul,char,std::char_traits<char>>::insert<char const*>(this, v3, first, last);
  return this;
};
