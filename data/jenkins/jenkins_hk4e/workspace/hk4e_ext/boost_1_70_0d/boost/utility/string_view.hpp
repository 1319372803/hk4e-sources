// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/utility/string_view.hpp

// Line 71: range 000000000C732870-000000000C7328DB
void __cdecl boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(
        boost::basic_string_view<char,std::char_traits<char> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->len_ = 0LL;
};

// Line 95: range 000000000C76AB36-000000000C76ABB5
void __cdecl boost::basic_string_view<char,std::char_traits<char>>::basic_string_view<std::allocator<char>>(
        boost::basic_string_view<char,std::char_traits<char> > *const this,
        const std::string *str)
{
  const char *v2; // rax
  __int64 v3; // rax

  v2 = (const char *)std::string::data(str);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (const char *)__asan_report_store8();
  this->ptr_ = v2;
  v3 = std::string::length(str);
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    v3 = __asan_report_store8();
  this->len_ = v3;
};

// Line 105: range 000000000C71AA6E-000000000C71AAE5
void __cdecl boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(
        boost::basic_string_view<char,std::char_traits<char> > *const this,
        const char *str)
{
  std::size_t v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = str;
  v2 = std::char_traits<char>::length(str);
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8();
  this->len_ = v2;
};

// Line 108: range 000000000C73225C-000000000C7322CF
void __cdecl boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(
        boost::basic_string_view<char,std::char_traits<char> > *const this,
        const char *str,
        boost::basic_string_view<char,std::char_traits<char> >::size_type len)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = str;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->len_ = len;
};

// Line 112: range 000000000C71EF00-000000000C71EF35
boost::basic_string_view<char,std::char_traits<char> >::const_iterator __cdecl boost::basic_string_view<char,std::char_traits<char>>::begin(
        const boost::basic_string_view<char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  return this->ptr_;
};

// Line 114: range 000000000C71EF36-000000000C71EF9B
boost::basic_string_view<char,std::char_traits<char> >::const_iterator __cdecl boost::basic_string_view<char,std::char_traits<char>>::end(
        const boost::basic_string_view<char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi
  const char *ptr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  ptr = this->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->len_, v1);
  return &ptr[this->len_];
};

// Line 122: range 000000000C71A3D0-000000000C71A40A
boost::basic_string_view<char,std::char_traits<char> >::size_type __cdecl boost::basic_string_view<char,std::char_traits<char>>::size(
        const boost::basic_string_view<char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->len_, v1);
  return this->len_;
};

// Line 125: range 000000000C724848-000000000C724888
bool __cdecl boost::basic_string_view<char,std::char_traits<char>>::empty(
        const boost::basic_string_view<char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->len_, v1);
  return this->len_ == 0;
};

// Line 128: range 000000000C71E298-000000000C71E2D8
boost::basic_string_view<char,std::char_traits<char> >::const_reference __cdecl boost::basic_string_view<char,std::char_traits<char>>::operator[](
        const boost::basic_string_view<char,std::char_traits<char> > *const this,
        boost::basic_string_view<char,std::char_traits<char> >::size_type pos)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, pos);
  return &this->ptr_[pos];
};

// Line 136: range 000000000C71A67E-000000000C71A6B3
boost::basic_string_view<char,std::char_traits<char> >::const_pointer __cdecl boost::basic_string_view<char,std::char_traits<char>>::data(
        const boost::basic_string_view<char,std::char_traits<char> > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  return this->ptr_;
};

// Line 141: range 000000000C7325C6-000000000C732689
void __cdecl boost::basic_string_view<char,std::char_traits<char>>::remove_prefix(
        boost::basic_string_view<char,std::char_traits<char> > *const this,
        boost::basic_string_view<char,std::char_traits<char> >::size_type n)
{
  boost::basic_string_view<char,std::char_traits<char> >::size_type na; // [rsp+0h] [rbp-10h]

  na = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->len_, n);
  if ( n > this->len_ )
    na = this->len_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, n);
  this->ptr_ += na;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->len_, n);
  this->len_ -= na;
};

// Line 169: range 000000000C734E86-000000000C734ED9
std::string *__cdecl boost::basic_string_view<char,std::char_traits<char>>::to_string<std::allocator<char>>(
        std::string *retstr,
        const boost::basic_string_view<char,std::char_traits<char> > *const this,
        const std::allocator<char> *a)
{
  const char *v3; // rbx
  const char *v4; // rsi

  v3 = boost::basic_string_view<char,std::char_traits<char>>::end(this);
  v4 = boost::basic_string_view<char,std::char_traits<char>>::begin(this);
  std::string::basic_string<char const*,void>(retstr, v4, v3, a);
  return retstr;
};

// Line 183: range 000000000C753AB4-000000000C753CA8
boost::basic_string_view<char,std::char_traits<char> >::size_type __fastcall boost::basic_string_view<char,std::char_traits<char>>::copy(
        const boost::basic_string_view<char,std::char_traits<char> > *const this,
        char *s,
        boost::basic_string_view<char,std::char_traits<char> >::size_type n,
        boost::basic_string_view<char,std::char_traits<char> >::size_type pos)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  boost::basic_string_view<char,std::char_traits<char> >::const_pointer v8; // rax
  boost::basic_string_view<char,std::char_traits<char> >::size_type result; // rax
  unsigned __int64 __b; // [rsp+20h] [rbp-80h] BYREF
  boost::basic_string_view<char,std::char_traits<char> >::size_type rlen; // [rsp+28h] [rbp-78h]
  char v14[16]; // [rsp+30h] [rbp-70h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 5 n:183";
  *(_QWORD *)(v4 + 16) = boost::basic_string_view<char,std::char_traits<char>>::copy;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = n;
  if ( pos > boost::basic_string_view<char,std::char_traits<char>>::size(this) )
  {
    std::out_of_range::out_of_range((std::out_of_range *)v14, "string_view::copy");
    __asan_handle_no_return(v14);
    boost::exception_detail::throw_exception_<std::out_of_range>(
      (const std::out_of_range *)v14,
      "boost::basic_string_view<charT, traits>::size_type boost::basic_string_view<charT, traits>::copy(charT*, boost::ba"
      "sic_string_view<charT, traits>::size_type, boost::basic_string_view<charT, traits>::size_type) const [with charT ="
      " char; traits = std::char_traits<char>; boost::basic_string_view<charT, traits>::size_type = long unsigned int]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/utility/string_view.hpp",
      185);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->len_, s);
  __b = this->len_ - pos;
  v7 = (unsigned __int64)std::min<unsigned long>((const unsigned __int64 *)(v4 + 32), &__b);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7, &__b);
  rlen = *(_QWORD *)v7;
  v8 = boost::basic_string_view<char,std::char_traits<char>>::data(this);
  std::char_traits<char>::copy(s, &v8[pos], rlen);
  result = rlen;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 197: range 000000000C74050C-000000000C74071B
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall boost::basic_string_view<char,std::char_traits<char>>::compare(
        const boost::basic_string_view<char,std::char_traits<char> > *const this,
        boost::basic_string_view<char,std::char_traits<char> > x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  char *v6; // rsi
  unsigned __int64 v7; // rax
  std::size_t v8; // rdx
  const std::char_traits<char>::char_type *v9; // rcx
  __int64 v10; // rsi
  const std::char_traits<char>::char_type *v11; // rsi
  std::size_t v12; // rcx
  __int64 result; // rax
  std::size_t len; // [rsp+8h] [rbp-88h]
  unsigned int cmp; // [rsp+2Ch] [rbp-64h]
  char v16[96]; // [rsp+30h] [rbp-60h] BYREF

  len = x.len_;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 x:197";
  *(_QWORD *)(v2 + 16) = boost::basic_string_view<char,std::char_traits<char>>::compare;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_QWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 40) = len;
  v6 = (char *)(v2 + 40);
  v7 = (unsigned __int64)std::min<unsigned long>(&this->len_, (const unsigned __int64 *)(v2 + 40));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7, v6);
  v8 = *(_QWORD *)v7;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 32, v6);
  v9 = *(const std::char_traits<char>::char_type **)(v2 + 32);
  v10 = *(unsigned __int8 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (_BYTE)v10 )
    __asan_report_load8(this, v10);
  v11 = v9;
  cmp = std::char_traits<char>::compare(this->ptr_, v9, v8);
  if ( cmp )
  {
    result = cmp;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->len_, v11);
    v12 = this->len_;
    if ( *(_BYTE *)(((v2 + 40) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 40, v11);
    if ( v12 == *(_QWORD *)(v2 + 40) )
    {
      result = 0LL;
    }
    else if ( this->len_ >= *(_QWORD *)(v2 + 40) )
    {
      result = 1LL;
    }
    else
    {
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 387: range 000000000C74071C-000000000C74089E
bool __fastcall boost::operator==<char,std::char_traits<char>>(
        boost::basic_string_view<char,std::char_traits<char> > x,
        boost::basic_string_view<char,std::char_traits<char> > y)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::basic_string_view<char,std::char_traits<char> >::size_type v5; // r14
  bool result; // al
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 5 x:387 64 16 5 y:388";
  *(_QWORD *)(v2 + 16) = boost::operator==<char,std::char_traits<char>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  *(boost::basic_string_view<char,std::char_traits<char> > *)(v2 + 32) = x;
  *(boost::basic_string_view<char,std::char_traits<char> > *)(v2 + 64) = y;
  v5 = boost::basic_string_view<char,std::char_traits<char>>::size((const boost::basic_string_view<char,std::char_traits<char> > *const)(v2 + 32));
  result = v5 == boost::basic_string_view<char,std::char_traits<char>>::size((const boost::basic_string_view<char,std::char_traits<char> > *const)(v2 + 64))
        && (unsigned int)boost::basic_string_view<char,std::char_traits<char>>::compare(
                           (const boost::basic_string_view<char,std::char_traits<char> > *const)(v2 + 32),
                           *(boost::basic_string_view<char,std::char_traits<char> > *)(v2 + 64)) == 0;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 443: range 000000000C73268A-000000000C732792
bool __fastcall boost::operator==<char,std::char_traits<char>>(
        boost::basic_string_view<char,std::char_traits<char> > x,
        const char *y)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  boost::basic_string_view<char,std::char_traits<char> > v7; // [rsp+20h] [rbp-70h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 x:443";
  *(_QWORD *)(v2 + 16) = boost::operator==<char,std::char_traits<char>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(boost::basic_string_view<char,std::char_traits<char> > *)(v2 + 32) = x;
  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&v7, y);
  result = boost::operator==<char,std::char_traits<char>>(
             *(boost::basic_string_view<char,std::char_traits<char> > *)(v2 + 32),
             v7);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 577: range 000000000C751BE5-000000000C751E47
void __cdecl boost::detail::sv_insert_fill_chars<char,std::char_traits<char>>(std::ostream *os, std::size_t n)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  char v8; // al
  unsigned __int64 v9; // rax
  char v10; // al
  unsigned __int64 na; // [rsp+0h] [rbp-80h]
  char __value; // [rsp+1Fh] [rbp-61h] BYREF
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF

  na = n;
  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 fill_chars:579";
  *(_QWORD *)(v2 + 16) = boost::detail::sv_insert_fill_chars<char,std::char_traits<char>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
    __asan_report_load8(os, n);
  v5 = *(_QWORD *)os - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)os - 24LL, n);
  __value = std::ios::fill((char *)os + *(_QWORD *)v5);
  v6 = 8LL;
  std::fill_n<char *,unsigned long,char>((char *)(v2 + 32), 8uLL, &__value);
  while ( 1 )
  {
    if ( na <= 7 )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
      __asan_report_load8(os, v6);
    v7 = *(_QWORD *)os - 24LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)os - 24LL, v6);
    if ( (unsigned __int8)std::ios::good((char *)os + *(_QWORD *)v7) )
      v8 = 1;
    else
LABEL_16:
      v8 = 0;
    if ( !v8 )
      break;
    v6 = v2 + 32;
    std::ostream::write(os, (const char *)(v2 + 32), 8LL);
    na -= 8LL;
  }
  if ( !na )
    goto LABEL_26;
  if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
    __asan_report_load8(os, v6);
  v9 = *(_QWORD *)os - 24LL;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(*(_QWORD *)os - 24LL, v6);
  if ( (unsigned __int8)std::ios::good((char *)os + *(_QWORD *)v9) )
    v10 = 1;
  else
LABEL_26:
    v10 = 0;
  if ( v10 )
    std::ostream::write(os, (const char *)(v2 + 32), na);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 588: range 000000000C740008-000000000C740261
void __cdecl boost::detail::sv_insert_aligned<char,std::char_traits<char>>(
        std::ostream *os,
        const boost::basic_string_view<char,std::char_traits<char> > *str)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  std::ios_base::fmtflags v4; // eax
  unsigned __int64 v5; // rax
  const char *v6; // rcx
  const char *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 size; // [rsp+20h] [rbp-20h]
  std::size_t alignment_size; // [rsp+28h] [rbp-18h]

  size = boost::basic_string_view<char,std::char_traits<char>>::size(str);
  if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
    __asan_report_load8(os, str);
  v2 = *(_QWORD *)os - 24LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)os - 24LL, str);
  alignment_size = std::ios_base::width((std::ostream *)((char *)os + *(_QWORD *)v2)) - size;
  if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
    __asan_report_load8(os, str);
  v3 = *(_QWORD *)os - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(*(_QWORD *)os - 24LL, str);
  v4 = std::ios_base::flags((std::ostream *)((char *)os + *(_QWORD *)v3));
  if ( std::operator&(v4, _S_adjustfield) == _S_left )
  {
    v7 = boost::basic_string_view<char,std::char_traits<char>>::data(str);
    std::ostream::write(os, v7, size);
    if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
      __asan_report_load8(os, v7);
    v8 = *(_QWORD *)os - 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)os - 24LL, v7);
    if ( (unsigned __int8)std::ios::good((char *)os + *(_QWORD *)v8) )
      boost::detail::sv_insert_fill_chars<char,std::char_traits<char>>(os, alignment_size);
  }
  else
  {
    boost::detail::sv_insert_fill_chars<char,std::char_traits<char>>(os, alignment_size);
    if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
      __asan_report_load8(os, alignment_size);
    v5 = *(_QWORD *)os - 24LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)os - 24LL, alignment_size);
    if ( (unsigned __int8)std::ios::good((char *)os + *(_QWORD *)v5) )
    {
      v6 = boost::basic_string_view<char,std::char_traits<char>>::data(str);
      std::ostream::write(os, v6, size);
    }
  }
};

// Line 609: range 000000000C7322D0-000000000C732473
std::ostream *__cdecl boost::operator<<<char,std::char_traits<char>>(
        std::ostream *os,
        const boost::basic_string_view<char,std::char_traits<char> > *str)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 size; // [rsp+10h] [rbp-20h]

  if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
    __asan_report_load8(os, str);
  v2 = *(_QWORD *)os - 24LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)os - 24LL, str);
  if ( (unsigned __int8)std::ios::good((char *)os + *(_QWORD *)v2) )
  {
    size = boost::basic_string_view<char,std::char_traits<char>>::size(str);
    if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
      __asan_report_load8(os, str);
    v3 = *(_QWORD *)os - 24LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(*(_QWORD *)os - 24LL, str);
    if ( std::ios_base::width((std::ostream *)((char *)os + *(_QWORD *)v3)) > size )
    {
      boost::detail::sv_insert_aligned<char,std::char_traits<char>>(os, str);
    }
    else
    {
      str = (const boost::basic_string_view<char,std::char_traits<char> > *)boost::basic_string_view<char,std::char_traits<char>>::data(str);
      std::ostream::write(os, (const char *)str, size);
    }
    if ( *(_BYTE *)(((unsigned __int64)os >> 3) + 0x7FFF8000) )
      __asan_report_load8(os, str);
    v4 = *(_QWORD *)os - 24LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)os - 24LL, str);
    std::ios_base::width((std::ostream *)((char *)os + *(_QWORD *)v4), 0LL);
  }
  return os;
};
