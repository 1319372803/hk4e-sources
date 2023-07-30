// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityGravenInnocenceExcelConfig.h

// Line 18: range 000000000DE55464-000000000DE555F1
void __cdecl ActivityGravenInnocenceExcelConfigMgr::ActivityGravenInnocenceExcelConfigMgr(
        ActivityGravenInnocenceExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityGravenInnocenceExcelConfigMgrBase::ActivityGravenInnocenceExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityGravenInnocenceExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityGravenInnocenceExcelConfigMgrBase = v1;
  if ( *(char *)(((unsigned __int64)&this->EMPTY_SET >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->EMPTY_SET._M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 9) & 7) >= *(_BYTE *)((((unsigned __int64)&this->EMPTY_SET._M_t._M_impl._M_node_count
                                                       + 7) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->EMPTY_SET, 48LL);
  }
  *(_QWORD *)this->EMPTY_SET._M_t._M_impl.gap0 = 0LL;
  *(_QWORD *)&this->EMPTY_SET._M_t._M_impl._M_header._M_color = 0LL;
  this->EMPTY_SET._M_t._M_impl._M_header._M_parent = 0LL;
  this->EMPTY_SET._M_t._M_impl._M_header._M_left = 0LL;
  this->EMPTY_SET._M_t._M_impl._M_header._M_right = 0LL;
  this->EMPTY_SET._M_t._M_impl._M_node_count = 0LL;
  std::set<unsigned int>::set(&this->EMPTY_SET);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->camp_level_stage_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->camp_group_level_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->camp_next_level_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->race_gallery_level_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->photo_object_id_stage_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->photo_stage_id_bundle_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->bundle_id_photo_object_map_);
};

// Line 18: range 000000000D81F6F2-000000000D81F7CF
void __cdecl ActivityGravenInnocenceExcelConfigMgr::~ActivityGravenInnocenceExcelConfigMgr(
        ActivityGravenInnocenceExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityGravenInnocenceExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityGravenInnocenceExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->bundle_id_photo_object_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->photo_stage_id_bundle_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->photo_object_id_stage_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->race_gallery_level_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->camp_next_level_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->camp_group_level_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->camp_level_stage_map_);
  std::set<unsigned int>::~set(&this->EMPTY_SET);
  data::ActivityGravenInnocenceExcelConfigMgrBase::~ActivityGravenInnocenceExcelConfigMgrBase(this);
};
