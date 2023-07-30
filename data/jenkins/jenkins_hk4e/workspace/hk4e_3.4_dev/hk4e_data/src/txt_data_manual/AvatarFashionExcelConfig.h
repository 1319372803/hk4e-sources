// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarFashionExcelConfig.h

// Line 18: range 000000000DE24972-000000000DE249F5
void __cdecl AvatarFashionExcelConfigMgr::AvatarFashionExcelConfigMgr(AvatarFashionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::AvatarFashionExcelConfigMgrBase::AvatarFashionExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'AvatarFashionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AvatarFashionExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->avatar_default_costume_map);
  std::set<unsigned int>::set(&this->avatar_default_unlock_costume_set);
  std::map<unsigned int,unsigned int>::map(&this->avatar_default_wear_costume_map);
};

// Line 18: range 000000000D814C34-000000000D814CB7
void __cdecl AvatarFashionExcelConfigMgr::~AvatarFashionExcelConfigMgr(AvatarFashionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarFashionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AvatarFashionExcelConfigMgrBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->avatar_default_wear_costume_map);
  std::set<unsigned int>::~set(&this->avatar_default_unlock_costume_set);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->avatar_default_costume_map);
  data::AvatarFashionExcelConfigMgrBase::~AvatarFashionExcelConfigMgrBase(this);
};
