// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/move/default_delete.hpp

// Line 110: range 000000000BF7483F-000000000BF74871
void __cdecl boost::move_upd::call_delete<boost::thread>(boost::thread *p, boost::move_upd::is_array_del<false> a2)
{
  if ( p )
  {
    boost::thread::~thread(p);
    operator delete(p, 0x10uLL);
  }
};

// Line 195: range 000000000BF6D004-000000000BF6D02A
void __cdecl boost::movelib::default_delete<boost::thread>::operator()<boost::thread>(
        const boost::movelib::default_delete<boost::thread> *const this,
        boost::thread *ptr)
{
  boost::move_upd::call_delete<boost::thread>(ptr, (boost::move_upd::is_array_del<false>)ptr);
};
