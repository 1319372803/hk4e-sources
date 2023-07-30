// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MiracleRingExcelConfig.h

// Line 17: range 000000000DE2F726-000000000DE2F7FC
void __cdecl MiracleRingExcelConfigMgr::MiracleRingExcelConfigMgr(MiracleRingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::MiracleRingExcelConfigMgrBase::MiracleRingExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'MiracleRingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiracleRingExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::unordered_map(&this->item_to_tag_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->item_to_value_map);
  std::unordered_map<data::MiracleTag,unsigned int>::unordered_map(&this->tag_to_drop_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->largest_item_miracle_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->largest_item_miracle_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->largest_item_miracle_value);
  }
  this->largest_item_miracle_value = 0;
  std::vector<data::MiracleTag>::vector(&this->apply_tag_vec);
};

// Line 17: range 000000000D817550-000000000D8175E3
void __cdecl MiracleRingExcelConfigMgr::~MiracleRingExcelConfigMgr(MiracleRingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MiracleRingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiracleRingExcelConfigMgrBase = v1;
  std::vector<data::MiracleTag>::~vector(&this->apply_tag_vec);
  std::unordered_map<data::MiracleTag,unsigned int>::~unordered_map(&this->tag_to_drop_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->item_to_value_map);
  std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::~unordered_map(&this->item_to_tag_map);
  data::MiracleRingExcelConfigMgrBase::~MiracleRingExcelConfigMgrBase(this);
};
