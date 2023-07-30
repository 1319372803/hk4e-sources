// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RenameExcelConfig.h

// Line 18: range 000000000DE5AF72-000000000DE5AFE1
void __cdecl RenameExcelConfigMgr::RenameExcelConfigMgr(RenameExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::RenameExcelConfigMgrBase::RenameExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'RenameExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RenameExcelConfigMgrBase = v1;
  std::map<unsigned int,data::AvatarRenameExcelConfig>::map(&this->avatar_id_to_rename_config_map);
  std::map<unsigned int,std::set<std::string>>::map(&this->avatar_id_to_invalid_name_set_map);
};

// Line 18: range 000000000D820B50-000000000D820BBF
void __cdecl RenameExcelConfigMgr::~RenameExcelConfigMgr(RenameExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RenameExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RenameExcelConfigMgrBase = v1;
  std::map<unsigned int,std::set<std::string>>::~map(&this->avatar_id_to_invalid_name_set_map);
  std::map<unsigned int,data::AvatarRenameExcelConfig>::~map(&this->avatar_id_to_rename_config_map);
  data::RenameExcelConfigMgrBase::~RenameExcelConfigMgrBase(this);
};
