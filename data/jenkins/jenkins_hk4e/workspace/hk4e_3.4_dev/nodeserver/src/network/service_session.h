// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/network/service_session.h

// Line 24: range 0000000003895206-00000000038952B0
void __cdecl ServiceSession::ServiceSession(ServiceSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'ServiceSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, ioc);
  this->_vptr_AServerSession = v2;
  if ( *(char *)(((unsigned __int64)&this->is_service_registered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_service_registered_);
  this->is_service_registered_ = 0;
  std::vector<unsigned int>::vector(&this->service_type_vec_);
};

// Line 25: range 00000000038952B2-0000000003895311
void __cdecl ServiceSession::~ServiceSession(ServiceSession *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ServiceSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerSession = v2;
  std::vector<unsigned int>::~vector(&this->service_type_vec_);
  common::minet::AServerSession::~AServerSession(this);
};

// Line 25: range 0000000003895312-000000000389533C
void __cdecl ServiceSession::~ServiceSession(ServiceSession *const this)
{
  ServiceSession::~ServiceSession(this);
  operator delete(this, 0x238uLL);
};

// Line 47: range 000000000389533E-000000000389538B
bool __cdecl ServiceSession::isServiceRegistered(ServiceSession *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_service_registered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_service_registered_);
  return this->is_service_registered_;
};

// Line 48: range 000000000389538C-000000000389539F
const std::vector<unsigned int> *__cdecl ServiceSession::getServiceTypeVec(ServiceSession *const this)
{
  return &this->service_type_vec_;
};
