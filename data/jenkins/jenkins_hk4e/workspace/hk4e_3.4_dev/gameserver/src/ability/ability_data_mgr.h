// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/ability_data_mgr.h

// Line 28: range 00000000176AD8C2-00000000176AD933
void __cdecl AbilityDataMgr::~AbilityDataMgr(AbilityDataMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityDataMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AbilityProperty = v1;
  std::unordered_map<data::FightPropType,std::string>::~unordered_map(&this->clamp_ability_prop_map_);
  std::unordered_map<std::string,std::set<data::FightPropType>>::~unordered_map(&this->fight_prop_map_);
  data::AbilityProperty::~AbilityProperty(this);
};
