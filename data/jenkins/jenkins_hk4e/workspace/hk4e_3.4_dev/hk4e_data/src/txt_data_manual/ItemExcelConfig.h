// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ItemExcelConfig.h

// Line 18: range 000000000DE0CA6C-000000000DE0CA86
void __cdecl ItemExcelConfigMgr::ItemExcelConfigMgr(ItemExcelConfigMgr *const this)
{
  std::unordered_map<unsigned int,data::ItemConfig *>::unordered_map(&this->item_config_map);
};

// Line 18: range 000000000D80F490-000000000D80F4AA
void __cdecl ItemExcelConfigMgr::~ItemExcelConfigMgr(ItemExcelConfigMgr *const this)
{
  std::unordered_map<unsigned int,data::ItemConfig *>::~unordered_map(&this->item_config_map);
};
