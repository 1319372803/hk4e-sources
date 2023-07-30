// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/scoped_ptr.hpp

// Line 65: range 000000000BF09822-000000000BF09860
void __cdecl boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base>::scoped_ptr(
        boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base> *const this,
        boost::signals2::detail::foreign_weak_ptr_impl_base *p)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = p;
};

// Line 83: range 000000000BF09862-000000000BF098A0
void __cdecl boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base>::~scoped_ptr(
        boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::checked_delete<boost::signals2::detail::foreign_weak_ptr_impl_base>(this->px);
};

// Line 103: range 000000000BF098A2-000000000BF09928
boost::signals2::detail::foreign_weak_ptr_impl_base *__cdecl boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base>::operator->(
        const boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->px )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "px != 0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/scoped_ptr.hpp",
      0x69u,
      "T* boost::scoped_ptr<T>::operator->() const [with T = boost::signals2::detail::foreign_weak_ptr_impl_base]");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->px;
};
