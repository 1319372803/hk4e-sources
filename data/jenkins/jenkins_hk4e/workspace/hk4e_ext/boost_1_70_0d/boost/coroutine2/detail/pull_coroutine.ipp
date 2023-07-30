// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/coroutine2/detail/pull_coroutine.ipp

// Line 171: range 000000000BEFBCCA-000000000BEFBD08
void __cdecl boost::coroutines2::detail::pull_coroutine<void>::pull_coroutine(
        boost::coroutines2::detail::pull_coroutine<void> *const this,
        boost::coroutines2::detail::pull_coroutine<void>::control_block *cb)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->cb_ = cb;
};

// Line 192: range 000000000BEFBD0A-000000000BEFBD54
void __cdecl boost::coroutines2::detail::pull_coroutine<void>::~pull_coroutine(
        boost::coroutines2::detail::pull_coroutine<void> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->cb_ )
    boost::coroutines2::detail::pull_coroutine<void>::control_block::deallocate(this->cb_);
};

// Line 206: range 000000000BEFBD56-000000000BEFBD97
boost::coroutines2::detail::pull_coroutine<void> *__cdecl boost::coroutines2::detail::pull_coroutine<void>::operator()(
        boost::coroutines2::detail::pull_coroutine<void> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::coroutines2::detail::pull_coroutine<void>::control_block::resume(this->cb_);
  return this;
};
