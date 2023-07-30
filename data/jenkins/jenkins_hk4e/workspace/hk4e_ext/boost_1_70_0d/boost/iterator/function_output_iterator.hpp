// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/iterator/function_output_iterator.hpp

// Line 29: range 000000000BFB1422-000000000BFB142C
void __cdecl boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::function_output_iterator(
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> *const this)
{
  ;
};

// Line 35: range 000000000BFB2E06-000000000BFB2E44
void __cdecl boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy::output_proxy(
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy *const this,
        boost::signals2::detail::does_nothing *f)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_f = f;
};

// Line 36: range 000000000BFB25C0-000000000BFB260C
boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy *__cdecl boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy::operator=<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>(
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy *const this,
        const boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *value)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::does_nothing::operator()<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>(
    this->m_f,
    value);
  return this;
};

// Line 42: range 000000000BFB259A-000000000BFB25BE
boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy __cdecl boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::operator*(
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> *const this)
{
  boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy v2; // [rsp+18h] [rbp-8h] BYREF

  boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy::output_proxy(
    &v2,
    &this->m_f);
  return v2;
};

// Line 44: range 000000000BFB2588-000000000BFB2598
boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::self *__cdecl boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::operator++(
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> *const this,
        int a2)
{
  return this;
};
