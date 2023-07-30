// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_limited_shop_comp.h

// Line 31: range 0000000014623628-00000000146236BD
void __cdecl GoodsInfo::GoodsInfo(GoodsInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->goods_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->num);
  }
  this->num = 0;
};

// Line 37: range 00000000146236BE-0000000014623799
void __cdecl WeekendDjinnInfo::WeekendDjinnInfo(WeekendDjinnInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index);
  }
  this->index = 0;
};

// Line 53: range 0000000014837ECE-0000000014837F4D
void __cdecl HomeLimitedShopComp::~HomeLimitedShopComp(HomeLimitedShopComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeLimitedShopComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::unordered_map<unsigned int,GoodsInfo>::~unordered_map(&this->goods_info_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->pool_record_map_);
  std::unordered_map<unsigned int,WeekendDjinnInfo>::~unordered_map(&this->djinn_pos_map_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 53: range 0000000014837F4E-0000000014837F78
void __cdecl HomeLimitedShopComp::~HomeLimitedShopComp(HomeLimitedShopComp *const this)
{
  HomeLimitedShopComp::~HomeLimitedShopComp(this);
  operator delete(this, 0xD0uLL);
};

// Line 60: range 0000000014821D8E-0000000014821EA0
void __cdecl ZN19HomeLimitedShopCompCI212HomeCompBaseER4Home(HomeLimitedShopComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomeLimitedShopComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  std::unordered_map<unsigned int,WeekendDjinnInfo>::unordered_map(&this->djinn_pos_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->pool_record_map_);
  std::unordered_map<unsigned int,GoodsInfo>::unordered_map(&this->goods_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_gm_open_);
  }
  this->is_gm_open_ = 0;
};

// Line 92: range 0000000016D631D8-0000000016D63224
uint32_t __cdecl HomeLimitedShopComp::getLastRefreshTime(HomeLimitedShopComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->last_refresh_time_;
};

// Line 100: range 0000000017D6C04A-0000000017D6C0A4
void __cdecl HomeLimitedShopComp::setGmOpen(HomeLimitedShopComp *const this, bool is_open)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_gm_open_);
  }
  this->is_gm_open_ = is_open;
};
