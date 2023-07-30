// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TowerExcelConfig.h

// Line 109: range 000000000D362E46-000000000D362E70
void __cdecl TowerExcelConfigMgr::TowerIndexConfig::TowerIndexConfig(TowerExcelConfigMgr::TowerIndexConfig *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->id_to_index_map);
  std::map<unsigned int,unsigned int>::map(&this->index_to_id_map);
};

// Line 109: range 000000000D2C6222-000000000D2C624C
void __cdecl TowerExcelConfigMgr::TowerIndexConfig::~TowerIndexConfig(
        TowerExcelConfigMgr::TowerIndexConfig *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->index_to_id_map);
  std::map<unsigned int,unsigned int>::~map(&this->id_to_index_map);
};
