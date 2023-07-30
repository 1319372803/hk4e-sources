// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySeaLampV3ExcelConfig.h

// Line 18: range 000000000DE5D95E-000000000DE5DA05
void __cdecl ActivitySeaLampV3ExcelConfigMgr::ActivitySeaLampV3ExcelConfigMgr(
        ActivitySeaLampV3ExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivitySeaLampV3ExcelConfigMgrBase::ActivitySeaLampV3ExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivitySeaLampV3ExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySeaLampV3ExcelConfigMgrBase = v1;
  std::vector<unsigned int>::vector(&this->single_map_id_vec_);
  std::vector<unsigned int>::vector(&this->multi_map_id_vec_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->race_gallery_level_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->shadow_level_stage_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->shadow_next_level_map_);
};

// Line 18: range 000000000D8213B2-000000000D821459
void __cdecl ActivitySeaLampV3ExcelConfigMgr::~ActivitySeaLampV3ExcelConfigMgr(
        ActivitySeaLampV3ExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivitySeaLampV3ExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySeaLampV3ExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->shadow_next_level_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->shadow_level_stage_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->race_gallery_level_map_);
  std::vector<unsigned int>::~vector(&this->multi_map_id_vec_);
  std::vector<unsigned int>::~vector(&this->single_map_id_vec_);
  data::ActivitySeaLampV3ExcelConfigMgrBase::~ActivitySeaLampV3ExcelConfigMgrBase(this);
};
