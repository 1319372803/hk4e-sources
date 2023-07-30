// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityTeamChainExcelConfig.h

// Line 18: range 000000000DE5CE98-000000000DE5CF2D
void __cdecl ActivityTeamChainExcelConfigMgr::ActivityTeamChainExcelConfigMgr(
        ActivityTeamChainExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityTeamChainExcelConfigMgrBase::ActivityTeamChainExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityTeamChainExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityTeamChainExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gallery_id_2_stage_id_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_id_2_stage_id_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->stage_chain_idx_set_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->stage_chain_pre_idx_map_);
};

// Line 18: range 000000000D82119E-000000000D821233
void __cdecl ActivityTeamChainExcelConfigMgr::~ActivityTeamChainExcelConfigMgr(
        ActivityTeamChainExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityTeamChainExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityTeamChainExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->stage_chain_pre_idx_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->stage_chain_idx_set_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_id_2_stage_id_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gallery_id_2_stage_id_map_);
  data::ActivityTeamChainExcelConfigMgrBase::~ActivityTeamChainExcelConfigMgrBase(this);
};
