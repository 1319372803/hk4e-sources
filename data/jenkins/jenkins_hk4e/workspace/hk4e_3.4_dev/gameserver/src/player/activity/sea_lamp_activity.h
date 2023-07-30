// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/sea_lamp_activity.h

// Line 34: range 00000000183279C6-0000000018327A49
void __cdecl SeaLampActivity::~SeaLampActivity(SeaLampActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SeaLampActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<Observer>::~weak_ptr(&this->mini_quest_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->open_mechanicus_wtr_);
  std::map<unsigned int,SeaLampSectionInfo>::~map(&this->section_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 34: range 0000000018327A4A-0000000018327A74
void __cdecl SeaLampActivity::~SeaLampActivity(SeaLampActivity *const this)
{
  SeaLampActivity::~SeaLampActivity(this);
  operator delete(this, 0x400uLL);
};

// Line 39: range 0000000016D620E0-0000000016D62247
void __cdecl SeaLampActivity::SeaLampActivity(SeaLampActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  BaseActivity::BaseActivity((BaseActivity *const)this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'SeaLampActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_DescribalBase = v3;
  v4 = (((_BYTE)this - 92) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->popularity_, v4, v5);
  this->popularity_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sea_lamp_coin_, v4, &this->sea_lamp_coin_);
  }
  this->sea_lamp_coin_ = 0;
  v6 = ((_BYTE)this - 84) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_content_closed_, v6, v7);
  this->is_content_closed_ = 0;
  std::map<unsigned int,SeaLampSectionInfo>::map(&this->section_map_);
  std::weak_ptr<Observer>::weak_ptr(&this->open_mechanicus_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->mini_quest_wtr_);
};

// Line 50: range 00000000180ADE12-00000000180ADE64
bool __cdecl SeaLampActivity::isContentClosed(const SeaLampActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  return this->is_content_closed_;
};

// Line 65: range 0000000017D692CA-0000000017D6931E
uint32_t __cdecl SeaLampActivity::getPopularity(const SeaLampActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->popularity_);
  }
  return this->popularity_;
};

// Line 71: range 0000000017D69320-0000000017D6936C
uint32_t __cdecl SeaLampActivity::getSeaLampCoin(const SeaLampActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sea_lamp_coin_);
  }
  return this->sea_lamp_coin_;
};

// Line 544: range 0000000013EBEC87-0000000013EBEC91
data::NewActivityType __cdecl SeaLampActivity::getActivityStaticType()
{
  return 1302;
};
