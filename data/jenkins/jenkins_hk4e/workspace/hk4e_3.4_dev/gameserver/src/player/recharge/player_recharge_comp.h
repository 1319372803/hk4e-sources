// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/recharge/player_recharge_comp.h

// Line 36: range 000000001404F8E6-000000001404F983
void __cdecl McoinProductData::McoinProductData(McoinProductData *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->last_buy_time = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->buy_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buy_times >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->buy_times, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->buy_times = 0;
  std::set<std::string>::set(&this->product_id_set);
};

// Line 44: range 000000001404FCD6-000000001404FDEF
void __cdecl CardProductData::CardProductData(CardProductData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->last_daily_reward_time = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->take_effect_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->take_effect_time >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->take_effect_time, v2, v3);
  this->take_effect_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expire_time, v2, (_BYTE)this + 8);
  }
  this->expire_time = 0;
  std::set<std::string>::set(&this->product_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_remind_mail_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_send_remind_mail_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_send_remind_mail_time, v2, (_BYTE)this + 64);
  }
  this->last_send_remind_mail_time = 0;
};

// Line 44: range 000000001401E50E-000000001401E52C
void __cdecl CardProductData::~CardProductData(CardProductData *const this)
{
  std::set<std::string>::~set(&this->product_id_set);
};

// Line 57: range 0000000014050256-00000000140502A5
void __cdecl GoogleGiftCardProductData::GoogleGiftCardProductData(GoogleGiftCardProductData *const this)
{
  bool v1; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->buy_times = 0;
};

// Line 63: range 00000000140505A2-00000000140505F9
void __cdecl ConcertProductData::ConcertProductData(ConcertProductData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->buy_times = 0;
  std::vector<std::string>::vector(&this->ticket_vec);
};

// Line 63: range 000000001401ECFE-000000001401ED1C
void __cdecl ConcertProductData::~ConcertProductData(ConcertProductData *const this)
{
  std::vector<std::string>::~vector(&this->ticket_vec);
};

// Line 70: range 0000000014050934-0000000014050983
void __cdecl AppleGiftCardProductData::AppleGiftCardProductData(AppleGiftCardProductData *const this)
{
  bool v1; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->buy_times = 0;
};

// Line 76: range 0000000014050C80-0000000014050DA1
void __cdecl PsnCompensationProductData::PsnCompensationProductData(PsnCompensationProductData *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->buy_times = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->last_buy_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_buy_time >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->last_buy_time, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->last_buy_time = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->month_buy_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->month_buy_times >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->month_buy_times, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->month_buy_times = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->month_last_buy_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->month_last_buy_time >> 3)
                                                        + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->month_last_buy_time, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->month_last_buy_time = 0;
};

// Line 84: range 0000000013EC1B86-0000000013EC1C9E
void __cdecl TakeProductResult::TakeProductResult(TakeProductResult *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->mcoin = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->vip_point, v2, v3);
  this->vip_point = 0;
  if ( *(char *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_succ, v2, &this->is_succ);
  this->is_succ = 0;
  v4 = ((_BYTE)this + 9) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_replace >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_replace >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_replace, v4, v5);
  this->is_replace = 0;
  std::vector<ItemParam>::vector(&this->item_vec);
};

// Line 84: range 0000000013EC1CA0-0000000013EC1CBE
void __cdecl TakeProductResult::~TakeProductResult(TakeProductResult *const this)
{
  std::vector<ItemParam>::~vector(&this->item_vec);
};

// Line 91: range 000000001401E172-000000001401E190
void __cdecl McoinProductData::~McoinProductData(McoinProductData *const this)
{
  std::set<std::string>::~set(&this->product_id_set);
};

// Line 96: range 00000000140FC24C-00000000140FC35B
void __cdecl PlayerRechargeComp::~PlayerRechargeComp(PlayerRechargeComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerRechargeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,proto::OrderFinishNotify>::~map(&this->cached_order_notify_map_);
  std::unordered_map<unsigned int,PsnCompensationProductData>::~unordered_map(&this->psn_compensation_product_map_);
  std::unordered_map<unsigned int,AppleGiftCardProductData>::~unordered_map(&this->apple_gift_card_product_map_);
  std::unordered_map<unsigned int,ConcertProductData>::~unordered_map(&this->concert_product_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::~unordered_map(&this->saved_order_notify_map_);
  std::unordered_map<unsigned int,GoogleGiftCardProductData>::~unordered_map(&this->google_gift_card_product_map_);
  std::unordered_set<std::string>::~unordered_set(&this->ps4_package_product_set_);
  std::unordered_map<unsigned int,CardProductData>::~unordered_map(&this->card_product_map_);
  std::unordered_map<unsigned int,McoinProductData>::~unordered_map(&this->mcoin_product_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->wait_mark_db_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->finished_order_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 96: range 00000000140FC35C-00000000140FC386
void __cdecl PlayerRechargeComp::~PlayerRechargeComp(PlayerRechargeComp *const this)
{
  PlayerRechargeComp::~PlayerRechargeComp(this);
  operator delete(this, 0x290uLL);
};

// Line 99: range 000000001721402C-0000000017214036
uint32_t __cdecl PlayerRechargeComp::getType()
{
  return 31;
};

// Line 112: range 00000000174830CC-000000001748326C
void __cdecl ZN18PlayerRechargeCompCI214PlayerCompBaseER6Player(PlayerRechargeComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerRechargeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->finished_order_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->wait_mark_db_map_);
  std::unordered_map<unsigned int,McoinProductData>::unordered_map(&this->mcoin_product_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mcoin_product_refresh_time_, a2, (_BYTE)this - 56);
  }
  this->mcoin_product_refresh_time_ = 0;
  std::unordered_map<unsigned int,CardProductData>::unordered_map(&this->card_product_map_);
  std::unordered_set<std::string>::unordered_set(&this->ps4_package_product_set_);
  std::unordered_map<unsigned int,GoogleGiftCardProductData>::unordered_map(&this->google_gift_card_product_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,proto::OrderFinishNotify>>::unordered_map(&this->saved_order_notify_map_);
  std::unordered_map<unsigned int,ConcertProductData>::unordered_map(&this->concert_product_map_);
  std::unordered_map<unsigned int,AppleGiftCardProductData>::unordered_map(&this->apple_gift_card_product_map_);
  std::unordered_map<unsigned int,PsnCompensationProductData>::unordered_map(&this->psn_compensation_product_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vip_point_, a2, (_BYTE)this + 88);
  }
  this->vip_point_ = 0;
  std::map<unsigned int,proto::OrderFinishNotify>::map(&this->cached_order_notify_map_);
};

// Line 154: range 0000000016D759A4-0000000016D759F0
uint32_t __cdecl PlayerRechargeComp::getVipPoint(const PlayerRechargeComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_point_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->vip_point_);
  }
  return this->vip_point_;
};
