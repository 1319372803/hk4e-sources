// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/move/detail/iterator_to_raw_pointer.hpp

// Line 30: range 000000000BF4CE33-000000000BF4CE40
boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *__cdecl boost::movelib::detail::iterator_to_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *i)
{
  return i;
};

// Line 30: range 000000000BF4C9CF-000000000BF4C9DC
boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *__cdecl boost::movelib::detail::iterator_to_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *i)
{
  return i;
};

// Line 50: range 000000000BF4C655-000000000BF4C69A
boost::movelib::detail::iterator_to_element_ptr<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type __cdecl boost::movelib::iterator_to_raw_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const *i)
{
  if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::movelib::detail::iterator_to_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>(*i);
};

// Line 50: range 000000000BF4C18F-000000000BF4C1D4
boost::movelib::detail::iterator_to_element_ptr<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type __cdecl boost::movelib::iterator_to_raw_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const *i)
{
  if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::movelib::detail::iterator_to_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>(*i);
};
