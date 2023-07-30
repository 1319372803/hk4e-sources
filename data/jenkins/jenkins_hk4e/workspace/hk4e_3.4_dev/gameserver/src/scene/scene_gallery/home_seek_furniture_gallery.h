// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/home_seek_furniture_gallery.h

// Line 19: range 0000000014837B7E-0000000014837BEF
void __cdecl HomeSeekFurnitureGallery::~HomeSeekFurnitureGallery(HomeSeekFurnitureGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeSeekFurnitureGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::map<unsigned int,HomeGroupPlayerInfo>::~map(&this->home_group_player_info_map_);
  std::map<unsigned int,unsigned int>::~map(&this->player_score_map_);
  BaseHomeGallery::~BaseHomeGallery(this);
};

// Line 19: range 0000000014837BF0-0000000014837C1A
void __cdecl HomeSeekFurnitureGallery::~HomeSeekFurnitureGallery(HomeSeekFurnitureGallery *const this)
{
  HomeSeekFurnitureGallery::~HomeSeekFurnitureGallery(this);
  operator delete(this, 0x1B0uLL);
};

// Line 22: range 0000000016908A76-0000000016908BC9
void __cdecl HomeSeekFurnitureGallery::HomeSeekFurnitureGallery(
        HomeSeekFurnitureGallery *const this,
        Scene *scene,
        uint32_t gallery_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  bool v5; // dl

  BaseHomeGallery::BaseHomeGallery(this, scene, gallery_id);
  v3 = (int (**)(...))(&`vtable for'HomeSeekFurnitureGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_BaseGallery = v3;
  std::map<unsigned int,unsigned int>::map(&this->player_score_map_);
  std::map<unsigned int,HomeGroupPlayerInfo>::map(&this->home_group_player_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tide_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tide_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tide_total_num_, scene, (_BYTE)this - 96);
  }
  this->cur_tide_total_num_ = 0;
  v4 = (((_BYTE)this - 92) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cur_tide_left_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_tide_left_num_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->cur_tide_left_num_, v4, v5);
  this->cur_tide_left_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tide_duration_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tide_duration_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tide_duration_time_, v4, (_BYTE)this - 88);
  }
  this->cur_tide_duration_time_ = 0;
};
