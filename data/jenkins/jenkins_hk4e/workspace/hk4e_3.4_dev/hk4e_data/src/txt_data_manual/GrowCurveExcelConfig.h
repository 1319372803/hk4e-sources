// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GrowCurveExcelConfig.h

// Line 18: range 000000000DE0C70A-000000000DE0C910
void __cdecl GrowCurveExcelConfigMgr::GrowCurveExcelConfigMgr(GrowCurveExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::GrowCurveExcelConfigMgrBase::GrowCurveExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'GrowCurveExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GrowCurveExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::unordered_map(&this->avatar_curve_level_map);
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::unordered_map(&this->monster_curve_level_map);
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::unordered_map(&this->partner_curve_level_map);
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::unordered_map(&this->gadget_curve_level_map);
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::unordered_map(&this->weapon_curve_level_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_player_curve_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_player_curve_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_player_curve_level);
  }
  this->max_player_curve_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_curve_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_monster_curve_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_monster_curve_level);
  }
  this->max_monster_curve_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_partner_curve_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_partner_curve_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_partner_curve_level);
  }
  this->max_partner_curve_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_gadget_curve_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_gadget_curve_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_gadget_curve_level);
  }
  this->max_gadget_curve_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_weapon_curve_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_weapon_curve_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_weapon_curve_level);
  }
  this->max_weapon_curve_level = 0;
};

// Line 18: range 000000000D80F3CC-000000000D80F473
void __cdecl GrowCurveExcelConfigMgr::~GrowCurveExcelConfigMgr(GrowCurveExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GrowCurveExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GrowCurveExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::~unordered_map(&this->weapon_curve_level_map);
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::~unordered_map(&this->gadget_curve_level_map);
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::~unordered_map(&this->partner_curve_level_map);
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::~unordered_map(&this->monster_curve_level_map);
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::~unordered_map(&this->avatar_curve_level_map);
  data::GrowCurveExcelConfigMgrBase::~GrowCurveExcelConfigMgrBase(this);
};
