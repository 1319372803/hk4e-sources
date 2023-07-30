// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/call_stack.hpp

// Line 40: range 000000000C65F734-000000000C65F824
void __cdecl boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::context(
        boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const this,
        boost::asio::detail::strand_service::strand_impl *k)
{
  boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *v2; // rax

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->key_ = k;
  v2 = boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::operator boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context*(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next_ = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->value_ = (unsigned __int8 *)this;
  boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::operator=(
    &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
    this);
};

// Line 49: range 000000000C65DC94-000000000C65DD88
void __cdecl boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context::context(
        boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *const this,
        boost::asio::detail::thread_context *k,
        boost::asio::detail::thread_info_base *v)
{
  boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *v3; // rax

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->key_ = k;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->value_ = v;
  v3 = boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::operator boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context*(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next_ = v3;
  boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::operator=(
    &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
    this);
};

// Line 58: range 000000000C65F826-000000000C65F87F
void __cdecl boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::~context(
        boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->next_);
  boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::operator=(
    &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
    this->next_);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 58: range 000000000C65DD8A-000000000C65DDE3
void __cdecl boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context::~context(
        boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->next_);
  boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::operator=(
    &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
    this->next_);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 93: range 000000000C65C680-000000000C65C743
boost::asio::detail::thread_info_base *__cdecl boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::contains(
        boost::asio::detail::thread_context *k)
{
  boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *elem; // [rsp+18h] [rbp-8h]

  for ( elem = boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::operator boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context*(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        ;
        elem = elem->next_ )
  {
    if ( !elem )
      return 0LL;
    if ( *(_BYTE *)(((unsigned __int64)elem >> 3) + 0x7FFF8000) )
      __asan_report_load8(elem);
    if ( k == elem->key_ )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&elem->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&elem->next_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&elem->value_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&elem->value_);
  return elem->value_;
};

// Line 93: range 000000000C65F66F-000000000C65F732
unsigned __int8 *__cdecl boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::contains(
        boost::asio::detail::strand_service::strand_impl *k)
{
  boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *elem; // [rsp+18h] [rbp-8h]

  for ( elem = boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::operator boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context*(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        ;
        elem = elem->next_ )
  {
    if ( !elem )
      return 0LL;
    if ( *(_BYTE *)(((unsigned __int64)elem >> 3) + 0x7FFF8000) )
      __asan_report_load8(elem);
    if ( k == elem->key_ )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&elem->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&elem->next_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&elem->value_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&elem->value_);
  return elem->value_;
};

// Line 106: range 000000000C65BD97-000000000C65BDEE
boost::asio::detail::thread_info_base *__cdecl boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top()
{
  boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *elem; // [rsp+8h] [rbp-8h]

  elem = boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::operator boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context*(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
  if ( !elem )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&elem->value_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&elem->value_);
  return elem->value_;
};
