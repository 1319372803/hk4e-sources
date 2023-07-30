// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/lockfree/detail/copy_payload.hpp

// Line 43: range 000000000C247552-000000000C247870
void __fastcall boost::lockfree::detail::copy_payload<common::milog::MiLogHead *,common::milog::MiLogHead *>(
        common::milog::MiLogHead **t,
        common::milog::MiLogHead **u)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
  {
    *u = *t;
    return;
  }
  __asan_report_store8();
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogFile,std::allocator<common::milog::MiLogFile>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogFile,std::allocator<common::milog::MiLogFile>,(__gnu_cxx::_Lock_policy)2> > *)u);
};

// Line 43: range 000000000C271222-000000000C271498
void __fastcall boost::lockfree::detail::copy_payload<unsigned long,unsigned long>(
        unsigned __int64 *t,
        unsigned __int64 *u)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
  {
    *u = *t;
    return;
  }
  __asan_report_store8();
  boost::lockfree::detail::copy_payload<unsigned long const,unsigned long>(u, u);
};
