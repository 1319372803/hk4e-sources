// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ForgeExcelConfig.h

// Line 18: range 000000000DE1ACC4-000000000DE1AD57
void __cdecl ForgeExcelConfigMgr::ForgeExcelConfigMgr(ForgeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ForgeExcelConfigMgrBase::ForgeExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ForgeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ForgeExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->unlock_forge_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->quest_unlock_forge_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->quest_lock_forge_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->forge_to_quest_map_);
};

// Line 18: range 000000000D812A3E-000000000D812AD1
void __cdecl ForgeExcelConfigMgr::~ForgeExcelConfigMgr(ForgeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ForgeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ForgeExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->forge_to_quest_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->quest_lock_forge_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->quest_unlock_forge_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->unlock_forge_map_);
  data::ForgeExcelConfigMgrBase::~ForgeExcelConfigMgrBase(this);
};
