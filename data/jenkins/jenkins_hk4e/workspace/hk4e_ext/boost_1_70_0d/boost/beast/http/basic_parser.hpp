// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/basic_parser.hpp

// Line 114: range 000000000C741EEA-000000000C741EF4
uint64_t __cdecl boost::beast::http::basic_parser<true>::default_body_limit(std::true_type a1)
{
  return 0x100000LL;
};

// Line 122: range 000000000C79831A-000000000C798324
uint64_t __cdecl boost::beast::http::basic_parser<false>::default_body_limit(std::false_type a1)
{
  return 0x800000LL;
};

// Line 133: range 000000000C7958B0-000000000C795AFE
void __cdecl boost::beast::http::basic_parser<false>::basic_parser(boost::beast::http::basic_parser<false> *const this)
{
  int (**v1)(...); // rdx
  uint64_t v2; // rax

  v1 = (int (**)(...))(&`vtable for'boost::beast::http::basic_parser<false> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_basic_parser = v1;
  v2 = boost::beast::http::basic_parser<false>::default_body_limit((std::false_type)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->body_limit_ >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8();
  this->body_limit_ = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->len_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->len0_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->len0_ = 0LL;
  std::unique_ptr<char []>::unique_ptr<std::default_delete<char []>,void>(&this->buf_);
  if ( *(_BYTE *)(((unsigned __int64)&this->buf_len_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->buf_len_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->skip_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->header_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->header_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->header_limit_);
  }
  this->header_limit_ = 0x2000;
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->status_);
  }
  this->status_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = nothing_yet;
  if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->f_);
  }
  this->f_ = 0;
};

// Line 133: range 000000000C73369E-000000000C7338EC
void __cdecl boost::beast::http::basic_parser<true>::basic_parser(boost::beast::http::basic_parser<true> *const this)
{
  int (**v1)(...); // rdx
  uint64_t v2; // rax

  v1 = (int (**)(...))(&`vtable for'boost::beast::http::basic_parser<true> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_basic_parser = v1;
  v2 = boost::beast::http::basic_parser<true>::default_body_limit((std::true_type)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->body_limit_ >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8();
  this->body_limit_ = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->len_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->len0_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->len0_ = 0LL;
  std::unique_ptr<char []>::unique_ptr<std::default_delete<char []>,void>(&this->buf_);
  if ( *(_BYTE *)(((unsigned __int64)&this->buf_len_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->buf_len_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->skip_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->header_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->header_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->header_limit_);
  }
  this->header_limit_ = 0x2000;
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->status_);
  }
  this->status_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = nothing_yet;
  if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->f_);
  }
  this->f_ = 0;
};

// Line 153: range 000000000C78F044-000000000C78F095
void __cdecl boost::beast::http::basic_parser<false>::~basic_parser(
        boost::beast::http::basic_parser<false> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::beast::http::basic_parser<false> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_basic_parser = v1;
  std::unique_ptr<char []>::~unique_ptr(&this->buf_);
};

// Line 153: range 000000000C78F096-000000000C78F0C0
void __cdecl boost::beast::http::basic_parser<false>::~basic_parser(
        boost::beast::http::basic_parser<false> *const this)
{
  boost::beast::http::basic_parser<false>::~basic_parser(this);
  operator delete(this, 0x48uLL);
};

// Line 153: range 000000000C733940-000000000C73396A
void __cdecl boost::beast::http::basic_parser<true>::~basic_parser(boost::beast::http::basic_parser<true> *const this)
{
  boost::beast::http::basic_parser<true>::~basic_parser(this);
  operator delete(this, 0x48uLL);
};

// Line 153: range 000000000C7338EE-000000000C73393F
void __cdecl boost::beast::http::basic_parser<true>::~basic_parser(boost::beast::http::basic_parser<true> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::beast::http::basic_parser<true> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_basic_parser = v1;
  std::unique_ptr<char []>::~unique_ptr(&this->buf_);
};

// Line 163: range 000000000C79EF04-000000000C79EF50
bool __cdecl boost::beast::http::basic_parser<false>::got_some(
        const boost::beast::http::basic_parser<false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->state_ != nothing_yet;
};

// Line 181: range 000000000C79D13A-000000000C79D187
bool __cdecl boost::beast::http::basic_parser<false>::is_done(
        const boost::beast::http::basic_parser<false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->state_ == complete_0;
};

// Line 181: range 000000000C75457E-000000000C7545CB
bool __cdecl boost::beast::http::basic_parser<true>::is_done(const boost::beast::http::basic_parser<true> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->state_ == complete_0;
};

// Line 189: range 000000000C7A7272-000000000C7A72BF
bool __cdecl boost::beast::http::basic_parser<false>::is_header_done(
        const boost::beast::http::basic_parser<false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->state_ > fields;
};

// Line 189: range 000000000C7650E6-000000000C765133
bool __cdecl boost::beast::http::basic_parser<true>::is_header_done(
        const boost::beast::http::basic_parser<true> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->state_ > fields;
};

// Line 318: range 000000000C7A4FF4-000000000C7A504B
bool __cdecl boost::beast::http::basic_parser<false>::eager(const boost::beast::http::basic_parser<false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return (this->f_ & 2) != 0;
};

// Line 318: range 000000000C7563A4-000000000C7563FB
bool __cdecl boost::beast::http::basic_parser<true>::eager(const boost::beast::http::basic_parser<true> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return (this->f_ & 2) != 0;
};

// Line 340: range 000000000C781390-000000000C781447
void __cdecl boost::beast::http::basic_parser<false>::eager(
        boost::beast::http::basic_parser<false> *const this,
        bool v)
{
  if ( v )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    this->f_ |= 2u;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    this->f_ &= ~2u;
  }
};

// Line 340: range 000000000C733B0E-000000000C733BC5
void __cdecl boost::beast::http::basic_parser<true>::eager(boost::beast::http::basic_parser<true> *const this, bool v)
{
  if ( v )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    this->f_ |= 2u;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    this->f_ &= ~2u;
  }
};
