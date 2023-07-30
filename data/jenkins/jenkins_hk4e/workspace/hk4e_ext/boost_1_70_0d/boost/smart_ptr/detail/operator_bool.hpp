// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/detail/operator_bool.hpp

// Line 12: range 000000001221059E-00000000122105D9
bool __cdecl boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator bool(
        const boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->px != 0LL;
};

// Line 61: range 000000001221046C-00000000122104A7
bool __cdecl boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator!(
        const boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->px == 0LL;
};

// Line 61: range 000000000BF95B88-000000000BF95BC3
bool __cdecl boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::operator!(
        const boost::shared_ptr<boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->px == 0LL;
};

// Line 61: range 000000000BF97E00-000000000BF97E3B
bool __cdecl boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::operator!(
        const boost::shared_ptr<boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->px == 0LL;
};
