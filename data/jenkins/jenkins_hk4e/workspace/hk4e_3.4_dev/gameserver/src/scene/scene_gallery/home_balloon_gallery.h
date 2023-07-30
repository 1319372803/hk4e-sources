// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/home_balloon_gallery.h

// Line 19: range 00000000146225E8-0000000014622677
void __cdecl BalloonGallerySettleRankInfo::BalloonGallerySettleRankInfo(BalloonGallerySettleRankInfo *const this)
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

// Line 25: range 0000000014837C96-0000000014837CE3
void __cdecl HomeBalloonGallery::~HomeBalloonGallery(HomeBalloonGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeBalloonGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseHomeGallery::~BaseHomeGallery(this);
};

// Line 25: range 0000000014837CE4-0000000014837D0E
void __cdecl HomeBalloonGallery::~HomeBalloonGallery(HomeBalloonGallery *const this)
{
  HomeBalloonGallery::~HomeBalloonGallery(this);
  operator delete(this, 0x148uLL);
};

// Line 28: range 0000000016908950-0000000016908A3C
void __cdecl HomeBalloonGallery::HomeBalloonGallery(HomeBalloonGallery *const this, Scene *scene, uint32_t gallery_id)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseHomeGallery::BaseHomeGallery(this, scene, gallery_id);
  v3 = (int (**)(...))(&`vtable for'HomeBalloonGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_BaseGallery = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_, scene, (_BYTE)this + 64);
  }
  this->score_ = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->hit_count_, (((_BYTE)this + 68) & 7u) + 3, v4);
  this->hit_count_ = 0;
};
