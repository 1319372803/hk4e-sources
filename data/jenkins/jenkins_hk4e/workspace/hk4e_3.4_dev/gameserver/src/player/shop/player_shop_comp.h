// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/shop/player_shop_comp.h

// Line 21: range 000000001408DA30-000000001408DB0B
void __cdecl ShopGoodsRecord::ShopGoodsRecord(ShopGoodsRecord *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->goods_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->bought_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bought_num >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->bought_num, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->bought_num = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_buy_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_buy_time >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->last_buy_time, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->last_buy_time = 0;
};

// Line 31: range 000000001408DCCC-000000001408DD33
void __cdecl ShopRecord::ShopRecord(ShopRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->shop_type = 0;
  std::map<unsigned int,ShopGoodsRecord>::map(&this->goods_record_map);
  std::map<unsigned int,ShopGoodsRecord>::map(&this->history_goods_record_map);
};

// Line 31: range 00000000140398D4-0000000014039902
void __cdecl ShopRecord::~ShopRecord(ShopRecord *const this)
{
  std::map<unsigned int,ShopGoodsRecord>::~map(&this->history_goods_record_map);
  std::map<unsigned int,ShopGoodsRecord>::~map(&this->goods_record_map);
};

// Line 41: range 00000000140FBDBA-00000000140FBE17
void __cdecl PlayerShopComp::~PlayerShopComp(PlayerShopComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerShopComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,ShopRecord>::~map(&this->shop_record_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 41: range 00000000140FBE18-00000000140FBE42
void __cdecl PlayerShopComp::~PlayerShopComp(PlayerShopComp *const this)
{
  PlayerShopComp::~PlayerShopComp(this);
  operator delete(this, 0x50uLL);
};

// Line 44: range 000000001721387A-0000000017213884
uint32_t __cdecl PlayerShopComp::getType()
{
  return 6;
};

// Line 47: range 000000001747B8BC-000000001747B924
void __cdecl ZN14PlayerShopCompCI214PlayerCompBaseER6Player(PlayerShopComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerShopComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,ShopRecord>::map(&this->shop_record_map_);
};
