// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/uuid/entropy_error.hpp

// Line 25: range 0000000019B656A0-0000000019B675B3
void __fastcall boost::uuids::entropy_error::~entropy_error(boost::uuids::entropy_error *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    JUMPOUT(0x19B656D1LL);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::uuids::entropy_error + 2;
  std::runtime_error::~runtime_error((std::runtime_error *)this);
};

// Line 36: range 0000000019B65606-0000000019B6568A
intmax_t __fastcall boost::uuids::entropy_error::errcode(const boost::uuids::entropy_error *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_errcode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->m_errcode);
    JUMPOUT(0x19B6562BLL);
  }
  return this->m_errcode;
};
