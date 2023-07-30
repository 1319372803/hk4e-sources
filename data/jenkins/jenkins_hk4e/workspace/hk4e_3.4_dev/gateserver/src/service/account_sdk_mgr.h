// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/service/account_sdk_mgr.h

// Line 36: range 000000000C842068-000000000C842082
void __cdecl AccountSdkMgr::AccountSdkMgr(AccountSdkMgr *const this)
{
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::unique_ptr<std::default_delete<common::minet::http_client::HttpClientMgrBase>,void>(&this->http_client_mgr_ptr_);
};

// Line 36: range 000000000C842084-000000000C84209E
void __cdecl AccountSdkMgr::~AccountSdkMgr(AccountSdkMgr *const this)
{
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::~unique_ptr(&this->http_client_mgr_ptr_);
};

// Line 40: range 000000000C79FD4C-000000000C79FDD1
int32_t __cdecl AccountSdkMgr::start(AccountSdkMgr *const this)
{
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v1; // rax
  unsigned __int64 v2; // rdx

  if ( !std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
          0LL,
          &this->http_client_mgr_ptr_) )
    return -1;
  v1 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1);
  v2 = (unsigned __int64)(v1->_vptr_HttpClientMgrBase + 4);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1->_vptr_HttpClientMgrBase + 4);
  return (*(__int64 (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer))v2)(v1);
};

// Line 41: range 000000000C79FDD2-000000000C79FE57
int32_t __cdecl AccountSdkMgr::stop(AccountSdkMgr *const this)
{
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v1; // rax
  unsigned __int64 v2; // rdx

  if ( !std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
          0LL,
          &this->http_client_mgr_ptr_) )
    return -1;
  v1 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1);
  v2 = (unsigned __int64)(v1->_vptr_HttpClientMgrBase + 6);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1->_vptr_HttpClientMgrBase + 6);
  return (*(__int64 (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer))v2)(v1);
};

// Line 42: range 000000000C79FE58-000000000C79FEE5
uint32_t __cdecl AccountSdkMgr::update(AccountSdkMgr *const this, uint32_t work_thread_index)
{
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v2; // rax
  unsigned __int64 v3; // rdx

  if ( !std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
          0LL,
          &this->http_client_mgr_ptr_) )
    return 0;
  v2 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2);
  v3 = (unsigned __int64)(v2->_vptr_HttpClientMgrBase + 7);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2->_vptr_HttpClientMgrBase + 7);
  return (*(__int64 (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer, _QWORD))v3)(
           v2,
           work_thread_index);
};

// Line 44: range 000000000C7A57EC-000000000C7A591F
void __cdecl AccountSdkMgr::SdkRspParam::SdkRspParam(AccountSdkMgr::SdkRspParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->retcode = 0;
  std::string::basic_string(&this->msg);
  if ( *(char *)(((unsigned __int64)&this->is_guest >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_guest);
  this->is_guest = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->account_type);
  }
  this->account_type = 0;
  std::string::basic_string(&this->country_code);
  std::string::basic_string(&this->birthday);
  if ( *(char *)(((unsigned __int64)&this->is_sdk_return >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_sdk_return);
  this->is_sdk_return = 0;
};

// Line 44: range 000000000C7A5920-000000000C7A595E
void __cdecl AccountSdkMgr::SdkRspParam::~SdkRspParam(AccountSdkMgr::SdkRspParam *const this)
{
  std::string::~string(&this->birthday);
  std::string::~string(&this->country_code);
  std::string::~string(&this->msg);
};
