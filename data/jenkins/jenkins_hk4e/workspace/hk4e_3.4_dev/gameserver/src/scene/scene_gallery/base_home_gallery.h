// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/base_home_gallery.h

// Line 17: range 0000000014622126-0000000014622185
void __cdecl BaseHomeGallery::~BaseHomeGallery(BaseHomeGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseHomeGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::weak_ptr<Player>::~weak_ptr(&this->owner_player_wtr_);
  BaseGallery::~BaseGallery(this);
};

// Line 17: range 0000000014622186-00000000146221B0
void __cdecl BaseHomeGallery::~BaseHomeGallery(BaseHomeGallery *const this)
{
  BaseHomeGallery::~BaseHomeGallery(this);
  operator delete(this, 0x140uLL);
};

// Line 31: range 0000000014622116-0000000014622124
void __cdecl BaseHomeGallery::onPlayerLeaveGallery(BaseHomeGallery *const this, Player *player)
{
  ;
};

// Line 42: range 00000000180ADB0E-00000000180ADB39
void __cdecl BaseHomeGallery::setOwnPlayer(BaseHomeGallery *const this, PlayerPtr *p_player_ptr)
{
  std::weak_ptr<Player>::operator=<Player>(&this->owner_player_wtr_, p_player_ptr);
};

// Line 151: range 00000000169087F0-0000000016908860
void __cdecl BaseHomeGallery::BaseHomeGallery(BaseHomeGallery *const this, Scene *scene, uint32_t gallery_id)
{
  int (**v3)(...); // rdx

  BaseGallery::BaseGallery(this, scene, gallery_id);
  v3 = (int (**)(...))(&`vtable for'BaseHomeGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_BaseGallery = v3;
  std::weak_ptr<Player>::weak_ptr(&this->owner_player_wtr_);
};
