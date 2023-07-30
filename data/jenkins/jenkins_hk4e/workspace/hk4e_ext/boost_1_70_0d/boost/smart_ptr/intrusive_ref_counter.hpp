// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/intrusive_ref_counter.hpp

// Line 80: range 00000000121EB853-00000000121EB86D
void __cdecl boost::sp_adl_block::thread_safe_counter::increment(boost::detail::atomic_count *counter)
{
  boost::detail::atomic_count::operator++(counter);
};

// Line 85: range 00000000121EB86E-00000000121EB887
unsigned int __cdecl boost::sp_adl_block::thread_safe_counter::decrement(boost::detail::atomic_count *counter)
{
  return boost::detail::atomic_count::operator--(counter);
};

// Line 125: range 000000001221035E-000000001221037D
void __cdecl boost::sp_adl_block::intrusive_ref_counter<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter>::intrusive_ref_counter(
        boost::sp_adl_block::intrusive_ref_counter<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter> *const this)
{
  boost::detail::atomic_count::atomic_count(&this->m_ref_counter, 0LL);
};

// Line 164: range 00000000122309F4-0000000012230A0E
void __cdecl boost::sp_adl_block::intrusive_ptr_add_ref<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter>(
        const boost::sp_adl_block::intrusive_ref_counter<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter> *p)
{
  boost::sp_adl_block::thread_safe_counter::increment(&p->m_ref_counter);
};

// Line 170: range 00000000122309AC-00000000122309F3
void __cdecl boost::sp_adl_block::intrusive_ptr_release<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter>(
        const boost::sp_adl_block::intrusive_ref_counter<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter> *p)
{
  if ( !boost::sp_adl_block::thread_safe_counter::decrement(&p->m_ref_counter) )
  {
    if ( p )
    {
      boost::filesystem::detail::dir_itr_imp::~dir_itr_imp((boost::filesystem::detail::dir_itr_imp *const)p);
      operator delete((void *)p, 0x48uLL);
    }
  }
};
