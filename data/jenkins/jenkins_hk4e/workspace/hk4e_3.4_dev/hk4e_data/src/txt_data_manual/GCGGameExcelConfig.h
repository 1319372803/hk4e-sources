// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GCGGameExcelConfig.h

// Line 17: range 000000000D430328-000000000D4303CF
void __cdecl GCGGameExcelConfigMgr::GCGGameExcelConfigMgr(GCGGameExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGGameExcelConfigMgrBase::GCGGameExcelConfigMgrBase(this);
  v2 = (int (**)(...))(&`vtable for'GCGGameExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameExcelConfigMgrBase = v2;
  std::unordered_map<unsigned int,data::GCGCardConfig>::unordered_map(&this->card_config_map_);
  std::unordered_map<unsigned int,std::set<data::GCGTagType>>::unordered_map(&this->card_tag_set_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->card_to_block_ai_card_id_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map(&this->card_protected_priority_map_);
  std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::unordered_map(&this->skill_tag_set_map_);
};

// Line 17: range 000000000CE0AE42-000000000CE0AEE9
void __cdecl GCGGameExcelConfigMgr::~GCGGameExcelConfigMgr(GCGGameExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGGameExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameExcelConfigMgrBase = v2;
  std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::~unordered_map(&this->skill_tag_set_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map(&this->card_protected_priority_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->card_to_block_ai_card_id_map_);
  std::unordered_map<unsigned int,std::set<data::GCGTagType>>::~unordered_map(&this->card_tag_set_map_);
  std::unordered_map<unsigned int,data::GCGCardConfig>::~unordered_map(&this->card_config_map_);
  data::GCGGameExcelConfigMgrBase::~GCGGameExcelConfigMgrBase(this);
};

// Line 39: range 0000000014736A8A-0000000014736AB4
bool __cdecl GCGGameExcelConfigMgr::isCardIdInCharacterRange(const GCGGameExcelConfigMgr *const this, uint32_t card_id)
{
  return card_id > 0x3E7 && card_id <= 0x186A0;
};
