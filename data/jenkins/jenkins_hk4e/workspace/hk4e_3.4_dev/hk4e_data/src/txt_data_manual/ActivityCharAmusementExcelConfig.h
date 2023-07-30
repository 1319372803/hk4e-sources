// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityCharAmusementExcelConfig.h

// Line 23: range 00000000133D9E04-00000000133D9E3E
void __cdecl ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig::ScheduleRandomConfig(
        ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig *const this)
{
  std::unordered_map<data::GalleryType,std::vector<unsigned int>>::unordered_map(&this->gallery_type_level_id_vec_map_);
  std::unordered_map<unsigned int,data::GalleryType>::unordered_map(&this->level_id_gallery_type_map_);
  std::map<unsigned int,unsigned int>::map(&this->level_weight_map_);
};

// Line 23: range 00000000132F86E0-00000000132F871A
void __cdecl ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig::~ScheduleRandomConfig(
        ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->level_weight_map_);
  std::unordered_map<unsigned int,data::GalleryType>::~unordered_map(&this->level_id_gallery_type_map_);
  std::unordered_map<data::GalleryType,std::vector<unsigned int>>::~unordered_map(&this->gallery_type_level_id_vec_map_);
};
