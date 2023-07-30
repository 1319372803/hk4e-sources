// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/rfc7230.ipp

// Line 129: range 0000000019B7F9DC-0000000019B7FC14
void __fastcall boost::beast::http::token_list::const_iterator::increment(
        boost::beast::http::token_list::const_iterator *const this)
{
  boost::beast::http::token_list::iter_type *p_it; // rdi
  const char *it; // rax
  bool v4; // r9
  boost::beast::http::token_list::const_iterator *p_last; // rdi
  unsigned __int64 v6; // rax
  const char *last; // r8
  char v8; // dl
  unsigned __int64 v9; // rdi
  char v10; // dl
  char v11; // r10
  unsigned __int64 v12; // rdx
  int v13; // ecx
  boost::beast::http::token_list::iter_type v14; // rcx
  char v15; // di
  char v16; // r9

  p_it = &this->it_;
  if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_it);
  }
  else
  {
    it = this->it_;
    p_it = &this->first_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->first_ >> 3) + 0x7FFF8000) )
    {
      v4 = it != this->first_;
      if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        this->v_.ptr_ = 0LL;
        this->v_.len_ = 0LL;
        this->first_ = it;
        goto LABEL_25;
      }
      goto LABEL_7;
    }
  }
  __asan_report_load8(p_it);
LABEL_7:
  p_last = this;
  __asan_report_store16(this);
LABEL_8:
  __asan_report_load8(p_last);
LABEL_9:
  v6 = __asan_report_load8(p_last);
LABEL_10:
  if ( *(_BYTE *)v6 == 9 || *(_BYTE *)v6 == 32 )
  {
    this->it_ = (boost::beast::http::token_list::iter_type)(v6 + 1);
    goto LABEL_12;
  }
  while ( 1 )
  {
    if ( last == (const char *)v6 )
    {
      this->it_ = last;
      this->first_ = last;
      return;
    }
    v9 = v6;
    v10 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
    if ( v10 <= (char)(v6 & 7) )
    {
      if ( v10 )
        break;
    }
    v9 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v6];
    v11 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
    if ( v11 <= (char)(v9 & 7) && v11 )
      goto LABEL_29;
    if ( boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v6] )
      goto LABEL_30;
    if ( *(_BYTE *)v6 != 44 )
    {
      this->it_ = last;
      this->first_ = last;
      return;
    }
    this->it_ = (boost::beast::http::token_list::iter_type)(v6 + 1);
    v4 = 0;
LABEL_25:
    p_last = (boost::beast::http::token_list::const_iterator *)&this->last_;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_ >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    last = this->last_;
LABEL_12:
    p_last = (boost::beast::http::token_list::const_iterator *)&this->it_;
    if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    v6 = (unsigned __int64)this->it_;
    if ( last != (const char *)v6 )
    {
      v8 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
      if ( v8 > ((__int64)this->it_ & 7) || !v8 )
        goto LABEL_10;
      v6 = __asan_report_load1(this->it_);
    }
  }
  __asan_report_load1(v6);
LABEL_29:
  v6 = __asan_report_load1(v9);
LABEL_30:
  if ( v4 )
  {
    this->it_ = last;
    this->first_ = last;
  }
  else
  {
    do
    {
      v14 = this->it_;
      v12 = (unsigned __int64)(v14 + 1);
      this->it_ = v14 + 1;
      if ( last == v14 + 1 )
        break;
      v15 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
      if ( v15 <= (char)(v12 & 7) && v15 )
      {
        v6 = __asan_report_load1(v14 + 1);
      }
      else
      {
        v13 = *((unsigned __int8 *)v14 + 1);
        v16 = *(_BYTE *)(((unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[v13] >> 3) + 0x7FFF8000);
        if ( v16 <= ((unsigned __int8)&boost::beast::http::detail::is_token_char(char)::tab[v13] & 7) && v16 )
        {
          v6 = __asan_report_load1(&boost::beast::http::detail::is_token_char(char)::tab[v13]);
          break;
        }
      }
    }
    while ( boost::beast::http::detail::is_token_char(char)::tab[v13] );
    this->v_.ptr_ = (const char *)v6;
    this->v_.len_ = v12 - v6;
  }
};
