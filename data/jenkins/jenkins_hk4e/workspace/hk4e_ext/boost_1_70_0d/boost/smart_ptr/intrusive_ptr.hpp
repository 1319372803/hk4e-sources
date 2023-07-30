// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/intrusive_ptr.hpp

// Line 63: range 000000001221037E-00000000122103B8
void __cdecl boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::intrusive_ptr(
        boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = 0LL;
};

// Line 67: range 0000000012210406-000000001221046A
void __cdecl boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::intrusive_ptr(
        boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *const this,
        boost::filesystem::detail::dir_itr_imp *p,
        bool add_ref)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = p;
  if ( this->px )
  {
    if ( add_ref )
      boost::sp_adl_block::intrusive_ptr_add_ref<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter>(this->px);
  }
};

// Line 96: range 00000000122103BA-0000000012210404
void __cdecl boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::~intrusive_ptr(
        boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->px )
    boost::sp_adl_block::intrusive_ptr_release<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter>(this->px);
};

// Line 179: range 00000000122104A8-00000000122104DD
boost::filesystem::detail::dir_itr_imp *__cdecl boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::get(
        const boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->px;
};

// Line 197: range 00000000122104DE-0000000012210564
boost::filesystem::detail::dir_itr_imp *__cdecl boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator->(
        const boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->px )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "px != 0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/"
      "intrusive_ptr.hpp",
      0xC7u,
      "T* boost::intrusive_ptr<T>::operator->() const [with T = boost::filesystem::detail::dir_itr_imp]");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->px;
};

// Line 218: range 0000000012210565-000000001221059D
bool __cdecl boost::operator==<boost::filesystem::detail::dir_itr_imp,boost::filesystem::detail::dir_itr_imp>(
        const boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *a,
        const boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *b)
{
  boost::filesystem::detail::dir_itr_imp *v2; // rbx

  v2 = boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::get(a);
  return v2 == boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::get(b);
};
