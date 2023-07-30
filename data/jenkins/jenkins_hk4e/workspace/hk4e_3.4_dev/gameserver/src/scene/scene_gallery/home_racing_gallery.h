// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/home_racing_gallery.h

// Line 20: range 0000000014622320-00000000146223AF
void __cdecl RacingGallerySettleRankInfo::RacingGallerySettleRankInfo(RacingGallerySettleRankInfo *const this)
{
  bool v1; // dl
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->rank = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_new_record >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_new_record >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_new_record, v2, v3);
  this->is_new_record = 0;
};

// Line 26: range 0000000014837C1C-0000000014837C69
void __cdecl HomeRacingGallery::~HomeRacingGallery(HomeRacingGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeRacingGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseHomeGallery::~BaseHomeGallery(this);
};

// Line 26: range 0000000014837C6A-0000000014837C94
void __cdecl HomeRacingGallery::~HomeRacingGallery(HomeRacingGallery *const this)
{
  HomeRacingGallery::~HomeRacingGallery(this);
  operator delete(this, 0x148uLL);
};

// Line 29: range 0000000016908862-000000001690894E
void __cdecl HomeRacingGallery::HomeRacingGallery(HomeRacingGallery *const this, Scene *scene, uint32_t gallery_id)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseHomeGallery::BaseHomeGallery(this, scene, gallery_id);
  v3 = (int (**)(...))(&`vtable for'HomeRacingGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_BaseGallery = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_time_, scene, (_BYTE)this + 64);
  }
  this->use_time_ = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->winner_uid_, (((_BYTE)this + 68) & 7u) + 3, v4);
  this->winner_uid_ = 0;
};
