// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/player_item_comp.h

// Line 43: range 0000000017EDF176-0000000017EDF1CD
void __cdecl ItemLimitRecord::ItemLimitRecord(ItemLimitRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->last_refresh_time = 0;
  std::unordered_map<ItemIndexKey,unsigned int>::unordered_map(&this->item_count_map);
};

// Line 43: range 00000000174B06A8-00000000174B06C6
void __cdecl ItemLimitRecord::~ItemLimitRecord(ItemLimitRecord *const this)
{
  std::unordered_map<ItemIndexKey,unsigned int>::~unordered_map(&this->item_count_map);
};

// Line 51: range 0000000017477E56-0000000017477E80
void __cdecl MaterialDeleteReturnRecord::MaterialDeleteReturnRecord(MaterialDeleteReturnRecord *const this)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->delete_material_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->return_item_map);
};

// Line 51: range 0000000017477E82-0000000017477EAC
void __cdecl MaterialDeleteReturnRecord::~MaterialDeleteReturnRecord(MaterialDeleteReturnRecord *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->return_item_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->delete_material_map);
};

// Line 66: range 0000000017F1263A-0000000017F126A1
void __cdecl OutputControlRecord::OutputControlRecord(OutputControlRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->last_refresh_time = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->daily_count_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->total_count_map);
};

// Line 66: range 0000000017EA2242-0000000017EA2270
void __cdecl OutputControlRecord::~OutputControlRecord(OutputControlRecord *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->total_count_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->daily_count_map);
};

// Line 76: range 0000000017F11D9A-0000000017F11DB4
void __cdecl ActivityOutputIndexRecord::ActivityOutputIndexRecord(ActivityOutputIndexRecord *const this)
{
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->activity_count_map);
};

// Line 76: range 0000000017EA0F28-0000000017EA0F42
void __cdecl ActivityOutputIndexRecord::~ActivityOutputIndexRecord(ActivityOutputIndexRecord *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->activity_count_map);
};

// Line 81: range 0000000017EE0EDC-0000000017EE0F33
void __cdecl ActivityOutputControlRecord::ActivityOutputControlRecord(ActivityOutputControlRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->last_refresh_time = 0;
  std::map<data::OutputControlType,ActivityOutputIndexRecord>::map(&this->activity_output_index_record_map);
};

// Line 81: range 0000000017EA322E-0000000017EA324C
void __cdecl ActivityOutputControlRecord::~ActivityOutputControlRecord(ActivityOutputControlRecord *const this)
{
  std::map<data::OutputControlType,ActivityOutputIndexRecord>::~map(&this->activity_output_index_record_map);
};

// Line 90: range 0000000017EDFB1C-0000000017EDFBF7
void __cdecl ShopGoodsOutputRecord::ShopGoodsOutputRecord(ShopGoodsOutputRecord *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->goods_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_record_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_record_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_record_time, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->last_record_time = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->buy_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buy_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->buy_count, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->buy_count = 0;
};

// Line 100: range 0000000017EE0514-0000000017EE05A9
void __cdecl SingleBonusRecord::SingleBonusRecord(SingleBonusRecord *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->last_refresh_time = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->bonus_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->bonus_count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->bonus_count = 0;
};

// Line 109: range 0000000017EEE99E-0000000017EEEA33
void __cdecl ReliquaryMainPropGuaranteeData::ReliquaryMainPropGuaranteeData(ReliquaryMainPropGuaranteeData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->miss_count = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->guarantee_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guarantee_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->guarantee_count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->guarantee_count = 0;
};

// Line 114: range 0000000017F13388-0000000017F133DF
void __cdecl ReliquaryGuaranteeDepot::ReliquaryGuaranteeDepot(ReliquaryGuaranteeDepot *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->guarantee_depot_id = 0;
  std::map<unsigned int,ReliquaryMainPropGuaranteeData>::map(&this->main_prop_guarantee_data_map);
};

// Line 114: range 0000000017EA357E-0000000017EA359C
void __cdecl ReliquaryGuaranteeDepot::~ReliquaryGuaranteeDepot(ReliquaryGuaranteeDepot *const this)
{
  std::map<unsigned int,ReliquaryMainPropGuaranteeData>::~map(&this->main_prop_guarantee_data_map);
};

// Line 134: range 00000000169115D4-00000000169115FE
void __cdecl FrontLooseCheckResult::FrontLooseCheckResult(FrontLooseCheckResult *const this)
{
  std::set<unsigned int>::set(&this->exceeded_item_set);
  std::set<unsigned int>::set(&this->exceeded_item_type_set);
};

// Line 134: range 0000000016911600-000000001691162A
void __cdecl FrontLooseCheckResult::~FrontLooseCheckResult(FrontLooseCheckResult *const this)
{
  std::set<unsigned int>::~set(&this->exceeded_item_type_set);
  std::set<unsigned int>::~set(&this->exceeded_item_set);
};

// Line 141: range 0000000017F53444-0000000017F535F7
void __cdecl PlayerItemComp::~PlayerItemComp(PlayerItemComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerItemComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->reliquary_filter_state_map_);
  std::map<unsigned int,ReliquaryGuaranteeDepot>::~map(&this->reliquary_guarantee_depot_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<data::EquipType>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::set<data::EquipType>>>>::~unordered_map(&this->reliquary_set_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->reliquary_levelup_num_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->weapon_promote_levelup_num_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->weapon_levelup_num_map_);
  std::unordered_map<data::BonusSourceType,std::unordered_map<unsigned int,SingleBonusRecord>>::~unordered_map(&this->bonus_record_map_);
  std::unordered_map<unsigned int,ShopGoodsOutputRecord>::~unordered_map(&this->shop_goods_output_record_map_);
  std::unordered_map<data::NewActivityType,ActivityOutputControlRecord>::~unordered_map(&this->activity_output_control_record_map_);
  std::map<data::OutputControlType,OutputControlRecord>::~map(&this->output_control_record_map_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->check_material_delete_timer_);
  MaterialDeleteReturnRecord::~MaterialDeleteReturnRecord(&this->material_delete_return_record_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->item_total_obtain_count_map_);
  std::unordered_map<data::ItemLimitType,ItemLimitRecord>::~unordered_map(&this->item_limit_record_map_);
  std::vector<TransferItemParam>::~vector(&this->transfer_item_vec_);
  std::map<unsigned int,unsigned long>::~map(&this->item_cd_map_);
  std::weak_ptr<Observer>::~weak_ptr(&this->open_state_observer_);
  std::shared_ptr<AutoRecoverItemProxy>::~shared_ptr(&this->resin_proxy_ptr_);
  std::set<unsigned int>::~set(&this->history_item_set_);
  PackItemStore::~PackItemStore(&this->pack_store_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 141: range 0000000017F535F8-0000000017F53622
void __cdecl PlayerItemComp::~PlayerItemComp(PlayerItemComp *const this)
{
  PlayerItemComp::~PlayerItemComp(this);
  operator delete(this, 0x4D0uLL);
};

// Line 148: range 0000000017478486-0000000017478D0E
void __cdecl ZN14PlayerItemCompCI214PlayerCompBaseER6Player(PlayerItemComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PackItemStore *p_pack_store; // rdx
  Player *player; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  PlayerItemComp **v16; // r8
  const std::_Placeholder<1> *v17; // r9
  std::shared_ptr<Player> p_player_ptr; // [rsp+14h] [rbp-7Ch] BYREF
  std::shared_ptr<Player> __args_0; // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerItemComp::*)(long unsigned int),PlayerItemComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerItemComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  p_pack_store = &this->pack_store_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  ZN13PackItemStoreCI29ItemStoreER6Player(p_pack_store, player);
  std::set<unsigned int>::set(&this->history_item_set_);
  if ( *(char *)(((unsigned __int64)&this->is_psn_version_modify_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_psn_version_modify_, player, &this->is_psn_version_modify_);
  this->is_psn_version_modify_ = 0;
  v5 = (((_BYTE)this - 36) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->mcoin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mcoin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->mcoin_, v5, v6);
  this->mcoin_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->psn_mcoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->psn_mcoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->psn_mcoin_, v5, &this->psn_mcoin_);
  }
  this->psn_mcoin_ = 0;
  v7 = (((_BYTE)this - 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->hcoin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hcoin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->hcoin_, v7, v8);
  this->hcoin_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scoin_, v7, &this->scoin_);
  }
  this->scoin_ = 0;
  v9 = (((_BYTE)this - 20) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->home_coin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_coin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->home_coin_, v9, v10);
  this->home_coin_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->legendary_key_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->legendary_key_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->legendary_key_, v9, &this->legendary_key_);
  }
  this->legendary_key_ = 0;
  v11 = (((_BYTE)this - 12) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->wait_sub_hcoin_, v11, v12);
  this->wait_sub_hcoin_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_sub_scoin_, v11, &this->wait_sub_scoin_);
  }
  this->wait_sub_scoin_ = 0;
  v13 = (((_BYTE)this - 4) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->wait_sub_mcoin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_mcoin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->wait_sub_mcoin_, v13, v14);
  this->wait_sub_mcoin_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_psn_mcoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_sub_psn_mcoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_sub_psn_mcoin_, v13, &this->wait_sub_psn_mcoin_);
  }
  this->wait_sub_psn_mcoin_ = 0;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->wait_sub_home_coin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_home_coin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store4(&this->wait_sub_home_coin_, (((_BYTE)this + 4) & 7u) + 3, v15);
  this->wait_sub_home_coin_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Player>((Player *)&__args_0);
  LODWORD(p_player_ptr._M_ptr) = 106;
  if ( *(_WORD *)(((unsigned __int64)&this->resin_proxy_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->resin_proxy_ptr_);
  common::tools::perf::make_shared<AutoRecoverItemProxy,proto::VirtualItem,std::shared_ptr<Player>>(
    (proto::VirtualItem *)&this->resin_proxy_ptr_,
    &p_player_ptr,
    (proto::VirtualItem *)&__args_0,
    (std::shared_ptr<Player> *)&this->resin_proxy_ptr_);
  std::shared_ptr<Player>::~shared_ptr(&__args_0);
  std::weak_ptr<Observer>::weak_ptr(&this->open_state_observer_);
  std::map<unsigned int,unsigned long>::map(&this->item_cd_map_);
  std::vector<TransferItemParam>::vector(&this->transfer_item_vec_);
  std::unordered_map<data::ItemLimitType,ItemLimitRecord>::unordered_map(&this->item_limit_record_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->item_total_obtain_count_map_);
  MaterialDeleteReturnRecord::MaterialDeleteReturnRecord(&this->material_delete_return_record_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_check_material_delete_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_check_material_delete_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->next_check_material_delete_time_,
      &p_player_ptr,
      &this->next_check_material_delete_time_);
  }
  this->next_check_material_delete_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)((char *)&p_player_ptr._M_refcount._M_pi + 4));
  *(std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&p_player_ptr._M_ptr + 4) = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  __args_0._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerItemComp::onCheckMaterialDeleteTimer;
  __args_0._M_refcount._M_pi = 0LL;
  std::bind<void (PlayerItemComp::*)(unsigned long),PlayerItemComp*,std::_Placeholder<1> const&>(
    &p___f,
    (void (**)(PlayerItemComp *, unsigned __int64))&__args_0,
    (PlayerItemComp **)((char *)&p_player_ptr._M_ptr + 4),
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v16,
    v17);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerItemComp::*)(unsigned long) ()(PlayerItemComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(
    &this->check_material_delete_timer_,
    (PlayerPtr *)((char *)&p_player_ptr._M_refcount._M_pi + 4),
    &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)((char *)&p_player_ptr._M_refcount._M_pi + 4));
  std::map<data::OutputControlType,OutputControlRecord>::map(&this->output_control_record_map_);
  std::unordered_map<data::NewActivityType,ActivityOutputControlRecord>::unordered_map(&this->activity_output_control_record_map_);
  std::unordered_map<unsigned int,ShopGoodsOutputRecord>::unordered_map(&this->shop_goods_output_record_map_);
  std::unordered_map<data::BonusSourceType,std::unordered_map<unsigned int,SingleBonusRecord>>::unordered_map(&this->bonus_record_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->weapon_levelup_num_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->weapon_promote_levelup_num_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->reliquary_levelup_num_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<data::EquipType>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::set<data::EquipType>>>>::unordered_map(&this->reliquary_set_map_);
  std::map<unsigned int,ReliquaryGuaranteeDepot>::map(&this->reliquary_guarantee_depot_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->reliquary_filter_state_map_);
};

// Line 155: range 0000000013EBC068-0000000013EBC08D
std::set<long unsigned int> *__cdecl PlayerItemComp::getItmeGuidSetInPack(PlayerItemComp *const this, uint32_t item_id)
{
  return ItemStore::getItemGuidSetByItemId(&this->pack_store_, item_id);
};

// Line 293: range 0000000017213C68-0000000017213CBC
uint32_t __cdecl PlayerItemComp::getWaitSubHcoin(const PlayerItemComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->wait_sub_hcoin_);
  }
  return this->wait_sub_hcoin_;
};

// Line 294: range 0000000017213CBE-0000000017213D0A
uint32_t __cdecl PlayerItemComp::getWaitSubScoin(const PlayerItemComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->wait_sub_scoin_);
  }
  return this->wait_sub_scoin_;
};

// Line 295: range 0000000017213D0C-0000000017213D60
uint32_t __cdecl PlayerItemComp::getWaitSubHomeCoin(const PlayerItemComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_home_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_home_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->wait_sub_home_coin_);
  }
  return this->wait_sub_home_coin_;
};

// Line 303: range 0000000017213D62-0000000017213E07
int64_t __cdecl PlayerItemComp::getRealLeftHcoin(const PlayerItemComp *const this)
{
  uint32_t *hcoin; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->hcoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hcoin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hcoin_);
  }
  hcoin = (uint32_t *)this->hcoin_;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_hcoin_ >> 3) + 0x7FFF8000) )
  {
    hcoin = &this->wait_sub_hcoin_;
    __asan_report_load4(&this->wait_sub_hcoin_);
  }
  return (int64_t)hcoin - this->wait_sub_hcoin_;
};

// Line 305: range 0000000017213E08-0000000017213E9D
int64_t __cdecl PlayerItemComp::getRealLeftScoin(const PlayerItemComp *const this)
{
  __int64 scoin; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->scoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scoin_);
  }
  scoin = this->scoin_;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_sub_scoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->wait_sub_scoin_);
  }
  return scoin - this->wait_sub_scoin_;
};

// Line 307: range 0000000017D68AD6-0000000017D68B7B
int64_t __cdecl PlayerItemComp::getRealLeftHomeCoin(const PlayerItemComp *const this)
{
  uint32_t *home_coin; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->home_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->home_coin_);
  }
  home_coin = (uint32_t *)this->home_coin_;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_sub_home_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_sub_home_coin_ >> 3) + 0x7FFF8000) )
  {
    home_coin = &this->wait_sub_home_coin_;
    __asan_report_load4(&this->wait_sub_home_coin_);
  }
  return (int64_t)home_coin - this->wait_sub_home_coin_;
};

// Line 384: range 00000000141F100A-00000000141F10E1
bool __fastcall PlayerItemComp::isNewItem(const PlayerItemComp *const this, uint32_t item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 item_id:384";
  *(_QWORD *)(v2 + 16) = PlayerItemComp::isNewItem;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = item_id;
  result = std::set<unsigned int>::count(&this->history_item_set_, (const std::set<unsigned int>::key_type *)(v2 + 32)) == 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 399: range 00000000141F10E2-00000000141F10FF
uint32_t __cdecl PlayerItemComp::getTotalMaterialNum(const PlayerItemComp *const this)
{
  return ItemStore::getTotalMaterialNum(&this->pack_store_);
};

// Line 400: range 0000000013EBC08E-0000000013EBC0AB
uint32_t __cdecl PlayerItemComp::getTotalWeaponNum(const PlayerItemComp *const this)
{
  return ItemStore::getTotalWeaponNum(&this->pack_store_);
};

// Line 401: range 0000000013EBC0AC-0000000013EBC0C9
uint32_t __cdecl PlayerItemComp::getTotalReliquaryNum(const PlayerItemComp *const this)
{
  return ItemStore::getTotalReliquaryNum(&this->pack_store_);
};

// Line 402: range 0000000016D6208A-0000000016D620A7
uint32_t __cdecl PlayerItemComp::getTotalFurnitureNum(const PlayerItemComp *const this)
{
  return ItemStore::getTotalFurnitureNum(&this->pack_store_);
};

// Line 576: range 0000000017D68B7C-0000000017D68BA8
std::vector<ItemParam> *__cdecl PlayerItemComp::getItemParamVec(
        std::vector<ItemParam> *retstr,
        const PlayerItemComp *const this,
        const std::vector<ItemParam> *item_param_vec)
{
  std::vector<ItemParam>::vector(retstr, item_param_vec);
  return retstr;
};

// Line 687: range 0000000016907284-00000000169072D8
uint32_t __cdecl PlayerItemComp::getHcoin(const PlayerItemComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->hcoin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hcoin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hcoin_);
  }
  return this->hcoin_;
};

// Line 688: range 00000000169072DA-0000000016907326
uint32_t __cdecl PlayerItemComp::getScoin(const PlayerItemComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scoin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scoin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scoin_);
  }
  return this->scoin_;
};

// Line 690: range 0000000017213E9E-0000000017213EF2
uint32_t __cdecl PlayerItemComp::getHomeCoin(const PlayerItemComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->home_coin_);
  }
  return this->home_coin_;
};

// Line 690: range 0000000017213EF3-0000000017213EFD
uint32_t __cdecl PlayerItemComp::getType()
{
  return 7;
};

// Line 691: range 0000000015D381D2-0000000015D3821E
uint32_t __cdecl PlayerItemComp::getLegendaryKey(const PlayerItemComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->legendary_key_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->legendary_key_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->legendary_key_);
  }
  return this->legendary_key_;
};

// Line 739: range 00000000151D0AD6-00000000151D0CFA
PlayerItemComp *__fastcall PlayerItemComp::findItemInPack<Equip>(PlayerItemComp *const this, uint64_t guid, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:739 64 16 12 item_ptr:741";
  *(_QWORD *)(v3 + 16) = PlayerItemComp::findItemInPack<Equip>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  PlayerItemComp::findItemInPack((PlayerItemComp *const)(v3 + 64), guid);
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/player_item_comp.h",
      "findItemInPack",
      744);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v9,
           (const char (*)[22])"findItem fails, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Equip>::shared_ptr((std::shared_ptr<Equip> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Equip,Item>((const std::shared_ptr<Item> *)this);
  }
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 739: range 00000000151D0CFC-00000000151D0F20
PlayerItemComp *__fastcall PlayerItemComp::findItemInPack<Reliquary>(
        PlayerItemComp *const this,
        uint64_t guid,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:739 64 16 12 item_ptr:741";
  *(_QWORD *)(v3 + 16) = PlayerItemComp::findItemInPack<Reliquary>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  PlayerItemComp::findItemInPack((PlayerItemComp *const)(v3 + 64), guid);
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/player_item_comp.h",
      "findItemInPack",
      744);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v9,
           (const char (*)[22])"findItem fails, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Reliquary>::shared_ptr((std::shared_ptr<Reliquary> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Reliquary,Item>((const std::shared_ptr<Item> *)this);
  }
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 739: range 0000000013EC9A8C-0000000013EC9CB0
PlayerItemComp *__fastcall PlayerItemComp::findItemInPack<Weapon>(
        PlayerItemComp *const this,
        uint64_t guid,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:739 64 16 12 item_ptr:741";
  *(_QWORD *)(v3 + 16) = PlayerItemComp::findItemInPack<Weapon>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  PlayerItemComp::findItemInPack((PlayerItemComp *const)(v3 + 64), guid);
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/player_item_comp.h",
      "findItemInPack",
      744);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v9,
           (const char (*)[22])"findItem fails, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Weapon>::shared_ptr((std::shared_ptr<Weapon> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Weapon,Item>((const std::shared_ptr<Item> *)this);
  }
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 820: range 00000000151B2876-00000000151B2C60
unsigned int __cdecl PlayerItemComp::getUseConfigSelectId<unsigned int>(
        PlayerItemComp *const this,
        const data::ItemUseConfig *use_config,
        uint32_t option_idx)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  const std::string *v7; // rax
  bool v8; // r14
  uint32_t v9; // eax
  const std::string *v10; // rax
  unsigned int result; // eax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-D5h] BYREF
  uint32_t idx; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 result:450 64 24 17 select_id_vec:449";
  *(_QWORD *)(v3 + 16) = PlayerItemComp::getUseConfigSelectId<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 64));
  *(_DWORD *)(v3 + 48) = 0;
  if ( std::vector<std::string>::empty(&use_config->use_param) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/player_item_comp.h",
      "getUseConfigSelectId",
      453);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v15, (const char (*)[26])byte_25729200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v6 = *(_DWORD *)(v3 + 48);
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v15, ",", &__a);
    v7 = std::vector<std::string>::operator[](&use_config->use_param, 0LL);
    v8 = common::tools::StringUtils::splitToList(
           v7,
           (const std::string *)&v15,
           (std::vector<std::string> *)(v3 + 64),
           1) != 0;
    std::string::~string(&v15);
    std::allocator<char>::~allocator(&__a);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/player_item_comp.h",
        "getUseConfigSelectId",
        458);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"splitToList failed");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      if ( option_idx )
        v9 = option_idx - 1;
      else
        v9 = 0;
      idx = v9;
      if ( v9 + 1 <= std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 64)) )
      {
        v10 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 64), idx);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v10, (unsigned int *)(v3 + 48), 1) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/player_item_comp.h",
            "getUseConfigSelectId",
            470);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v15, (const char (*)[15])"strToNum fails");
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
        v6 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        v6 = *(_DWORD *)(v3 + 48);
      }
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 64));
  result = v6;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
