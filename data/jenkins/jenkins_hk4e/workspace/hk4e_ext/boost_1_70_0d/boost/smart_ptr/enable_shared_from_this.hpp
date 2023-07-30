// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/enable_shared_from_this.hpp

// Line 29: range 000000000BF0BCB2-000000000BF0BCCC
void __cdecl boost::enable_shared_from_this<boost::detail::thread_data_base>::enable_shared_from_this(
        boost::enable_shared_from_this<boost::detail::thread_data_base> *const this)
{
  boost::weak_ptr<boost::detail::thread_data_base>::weak_ptr(&this->weak_this_);
};

// Line 42: range 000000000BF0BCCE-000000000BF0BCE8
void __cdecl boost::enable_shared_from_this<boost::detail::thread_data_base>::~enable_shared_from_this(
        boost::enable_shared_from_this<boost::detail::thread_data_base> *const this)
{
  boost::weak_ptr<boost::detail::thread_data_base>::~weak_ptr(&this->weak_this_);
};

// Line 75: range 000000000BF86F4E-000000000BF86FAA
void __cdecl boost::enable_shared_from_this<boost::detail::thread_data_base>::_internal_accept_owner<boost::detail::thread_data_base,boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>>>(
        const boost::enable_shared_from_this<boost::detail::thread_data_base> *const this,
        const boost::shared_ptr<boost::detail::thread_data_base> *ppx,
        boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > > *py)
{
  boost::shared_ptr<boost::detail::thread_data_base> r; // [rsp+20h] [rbp-10h] BYREF

  if ( boost::weak_ptr<boost::detail::thread_data_base>::expired(&this->weak_this_) )
  {
    boost::shared_ptr<boost::detail::thread_data_base>::shared_ptr<boost::detail::thread_data_base>(
      &r,
      ppx,
      (boost::shared_ptr<boost::detail::thread_data_base>::element_type *)py);
    boost::weak_ptr<boost::detail::thread_data_base>::operator=<boost::detail::thread_data_base>(&this->weak_this_, &r);
    boost::shared_ptr<boost::detail::thread_data_base>::~shared_ptr(&r);
  }
};

// Line 75: range 000000000BF8863C-000000000BF88698
void __cdecl boost::enable_shared_from_this<boost::detail::thread_data_base>::_internal_accept_owner<boost::detail::thread_data_base,boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>>>(
        const boost::enable_shared_from_this<boost::detail::thread_data_base> *const this,
        const boost::shared_ptr<boost::detail::thread_data_base> *ppx,
        boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > > *py)
{
  boost::shared_ptr<boost::detail::thread_data_base> r; // [rsp+20h] [rbp-10h] BYREF

  if ( boost::weak_ptr<boost::detail::thread_data_base>::expired(&this->weak_this_) )
  {
    boost::shared_ptr<boost::detail::thread_data_base>::shared_ptr<boost::detail::thread_data_base>(
      &r,
      ppx,
      (boost::shared_ptr<boost::detail::thread_data_base>::element_type *)py);
    boost::weak_ptr<boost::detail::thread_data_base>::operator=<boost::detail::thread_data_base>(&this->weak_this_, &r);
    boost::shared_ptr<boost::detail::thread_data_base>::~shared_ptr(&r);
  }
};
