// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MaterialExcelConfig.h

// Line 22: range 000000000DE0D1E0-000000000DE0D299
void __cdecl MaterialExcelConfigMgr::MaterialExcelConfigMgr(MaterialExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::MaterialExcelConfigMgrBase::MaterialExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'MaterialExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MaterialExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->material_cd_group_map);
  std::set<unsigned int>::set(&this->equip_drop_set);
  std::map<unsigned int,unsigned int>::map(&this->cd_group_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->material_item_ids_map);
  std::unordered_set<unsigned int>::unordered_set(&this->name_card_set);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->set_to_item_ids_map);
};

// Line 22: range 000000000D80F5CE-000000000D80F687
void __cdecl MaterialExcelConfigMgr::~MaterialExcelConfigMgr(MaterialExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MaterialExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MaterialExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->set_to_item_ids_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->name_card_set);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->material_item_ids_map);
  std::map<unsigned int,unsigned int>::~map(&this->cd_group_map_);
  std::set<unsigned int>::~set(&this->equip_drop_set);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->material_cd_group_map);
  data::MaterialExcelConfigMgrBase::~MaterialExcelConfigMgrBase(this);
};
