// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MailExcelConfig.h

// Line 19: range 000000000DF4182E-000000000DF419CD
void __cdecl MailCheckCollectStateParam::MailCheckCollectStateParam(MailCheckCollectStateParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->mail_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->send_time);
  }
  this->send_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->expire_time);
  }
  this->expire_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collect_state);
  }
  this->collect_state = MAIL_COLLECTIBLE_UNKONW;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_attachment_got);
  }
  this->is_attachment_got = 0;
  std::set<unsigned int>::set(&this->item_set);
};

// Line 19: range 000000000DF419CE-000000000DF419EC
void __cdecl MailCheckCollectStateParam::~MailCheckCollectStateParam(MailCheckCollectStateParam *const this)
{
  std::set<unsigned int>::~set(&this->item_set);
};

// Line 33: range 000000000DE1E636-000000000DE1E6A5
void __cdecl MailExcelConfigMgr::MailExcelConfigMgr(MailExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::MailExcelConfigMgrBase::MailExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'MailExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MailExcelConfigMgrBase = v1;
  std::map<unsigned int,unsigned int>::map(&this->birthday_mail_effective_map_);
  std::unordered_map<unsigned int,data::ItemLimitType>::unordered_map(&this->mail_limit_type_map_);
};

// Line 33: range 000000000D8136A6-000000000D813715
void __cdecl MailExcelConfigMgr::~MailExcelConfigMgr(MailExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MailExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MailExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::ItemLimitType>::~unordered_map(&this->mail_limit_type_map_);
  std::map<unsigned int,unsigned int>::~map(&this->birthday_mail_effective_map_);
  data::MailExcelConfigMgrBase::~MailExcelConfigMgrBase(this);
};
