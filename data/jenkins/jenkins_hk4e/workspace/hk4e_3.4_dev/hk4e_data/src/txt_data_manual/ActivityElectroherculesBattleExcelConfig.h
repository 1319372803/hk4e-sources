// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.h

// Line 19: range 000000000DE5C84C-000000000DE5C8AB
void __cdecl ActivityElectroherculesBattleExcelConfigMgr::ActivityElectroherculesBattleExcelConfigMgr(
        ActivityElectroherculesBattleExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityElectroherculesBattleExcelConfigMgrBase::ActivityElectroherculesBattleExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityElectroherculesBattleExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityElectroherculesBattleExcelConfigMgrBase = v1;
  std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->difficulty_level_map_);
};

// Line 19: range 000000000D82104A-000000000D8210A9
void __cdecl ActivityElectroherculesBattleExcelConfigMgr::~ActivityElectroherculesBattleExcelConfigMgr(
        ActivityElectroherculesBattleExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityElectroherculesBattleExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityElectroherculesBattleExcelConfigMgrBase = v1;
  std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->difficulty_level_map_);
  data::ActivityElectroherculesBattleExcelConfigMgrBase::~ActivityElectroherculesBattleExcelConfigMgrBase(this);
};
