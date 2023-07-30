// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/move/unique_ptr.hpp

// Line 566: range 000000000BF654C4-000000000BF6551D
void __cdecl boost::movelib::unique_ptr<boost::thread,boost::movelib::default_delete<boost::thread>>::~unique_ptr(
        boost::movelib::unique_ptr<boost::thread,boost::movelib::default_delete<boost::thread> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m_data.m_p )
    boost::movelib::default_delete<boost::thread>::operator()<boost::thread>(
      (const boost::movelib::default_delete<boost::thread> *const)this,
      this->m_data.m_p);
};
