// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/gallery/player_gallery_comp.h

// Line 18: range 0000000016832370-00000000168323CD
void __cdecl PlayerGalleryComp::~PlayerGalleryComp(PlayerGalleryComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGalleryComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned int>::~set(&this->valid_gallery_set_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 18: range 00000000168323CE-00000000168323F8
void __cdecl PlayerGalleryComp::~PlayerGalleryComp(PlayerGalleryComp *const this)
{
  PlayerGalleryComp::~PlayerGalleryComp(this);
  operator delete(this, 0x50uLL);
};

// Line 21: range 000000001721491C-0000000017214926
uint32_t __cdecl PlayerGalleryComp::getType()
{
  return 52;
};

// Line 23: range 0000000017489F80-0000000017489FE8
void __cdecl ZN17PlayerGalleryCompCI214PlayerCompBaseER6Player(PlayerGalleryComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerGalleryComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned int>::set(&this->valid_gallery_set_);
};
