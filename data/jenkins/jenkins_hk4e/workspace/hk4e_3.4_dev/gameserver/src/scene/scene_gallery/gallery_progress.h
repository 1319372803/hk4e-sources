// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/gallery_progress.h

// Line 25: range 000000001837C51C-000000001837C578
void __cdecl GalleryProgress::~GalleryProgress(GalleryProgress *const this)
{
  std::weak_ptr<BaseGallery>::~weak_ptr(&this->gallery_wtr_);
  std::map<unsigned int,unsigned long>::~map(&this->progress_stage_last_time_ms_map_);
  std::vector<unsigned int>::~vector(&this->progress_stage_vec_);
  std::string::~string(&this->key_);
  std::enable_shared_from_this<GalleryProgress>::~enable_shared_from_this(this);
};

// Line 34: range 00000000180AD7A4-00000000180AD7EB
uint32_t __cdecl GalleryProgress::getProgress(const GalleryProgress *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->progress_;
};

// Line 37: range 00000000180AD7EC-00000000180AD83D
bool __cdecl GalleryProgress::isHasUI(const GalleryProgress *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_form_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ui_form_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->ui_form_ != GALLERY_PROGRESS_SCORE_UI_TYPE_NONE;
};

// Line 40: range 0000000017A0A54A-0000000017A0A55B
std::map<unsigned int,long unsigned int> *__cdecl GalleryProgress::getStageLastTimeMap(GalleryProgress *const this)
{
  return &this->progress_stage_last_time_ms_map_;
};
