// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/fishing/player_fishing_comp.cpp

// Line 24: range 000000001662679C-000000001662680B
int32_t __cdecl PlayerFishingComp::fromBin(PlayerFishingComp *const this, const proto::PlayerDataBin *proto)
{
  __int64 fish_rod; // rdx
  char v3; // al
  const proto::PlayerFishingCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::fishing_bin(proto);
  fish_rod = proto::PlayerFishingCompBin::last_fish_rod(proto_comp);
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(proto) = v3 != 0;
    __asan_report_store4(&this->last_fish_rod_, proto, fish_rod);
  }
  this->last_fish_rod_ = fish_rod;
  return 0;
};

// Line 31: range 000000001662680C-000000001662687A
int32_t __cdecl PlayerFishingComp::toBin(PlayerFishingComp *const this, proto::PlayerDataBin *proto)
{
  proto::PlayerFishingCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_fishing_bin(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_fish_rod_);
  }
  proto::PlayerFishingCompBin::set_last_fish_rod(proto_comp, this->last_fish_rod_);
  return 0;
};

// Line 38: range 000000001662687C-000000001662688F
int32_t __cdecl PlayerFishingComp::onLogin(PlayerFishingComp *const this, bool is_new_player)
{
  return 0;
};

// Line 43: range 0000000016626890-00000000166268AA
void __cdecl PlayerFishingComp::onLeaveScene(PlayerFishingComp *const this)
{
  PlayerFishingComp::exitCurFishPool(this);
};

// Line 48: range 00000000166268AC-00000000166268CA
int32_t __cdecl PlayerFishingComp::onDisconnect(PlayerFishingComp *const this)
{
  PlayerFishingComp::exitCurFishPool(this);
  return 0;
};

// Line 54: range 00000000166268CC-0000000016626AD5
void __cdecl PlayerFishingComp::exitCurFishPool(PlayerFishingComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 16 fish_pool_ptr:55 64 16 21 fish_pool_comp_ptr:60";
  *(_QWORD *)(v1 + 16) = PlayerFishingComp::exitCurFishPool;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerFishingComp::getCurFishPool((PlayerFishingComp *const)(v1 + 32));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 32)) )
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v1 + 64));
    if ( !std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v1 + 64)) )
    {
      v4 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      FishPoolComp::playerExitFishing(v4, this->player_, 1);
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v1 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 69: range 0000000016626AD6-0000000016626CD0
void __cdecl PlayerFishingComp::onPlayerEnterFishing(PlayerFishingComp *const this, GadgetPtr *p_gadget_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 20 cur_fish_pool_ptr:70 64 16 21 fish_pool_comp_ptr:73";
  *(_QWORD *)(v2 + 16) = PlayerFishingComp::onPlayerEnterFishing;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  PlayerFishingComp::getCurFishPool((PlayerFishingComp *const)(v2 + 32));
  if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 32)) )
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v2 + 64)) )
    {
      v5 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      FishPoolComp::playerExitFishing(v5, this->player_, 1);
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v2 + 64));
  }
  std::weak_ptr<Gadget>::operator=<Gadget>(&this->cur_fish_pool_wtr_, p_gadget_ptr);
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 83: range 0000000016626CD2-0000000016626CF4
void __cdecl PlayerFishingComp::onPlayerExitFishing(PlayerFishingComp *const this, GadgetPtr *p_gadget_ptr)
{
  std::__weak_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_fish_pool_wtr_);
};

// Line 88: range 0000000016626CF6-0000000016626DE1
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerFishingComp::setLastFishRod(PlayerFishingComp *const this, uint32_t rod_id)
{
  void (__fastcall **v2)(PlayerFishingComp *const); // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_fish_rod_);
  }
  if ( rod_id != this->last_fish_rod_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_fish_rod_, *(_QWORD *)&rod_id, &this->last_fish_rod_);
    }
    this->last_fish_rod_ = rod_id;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v2 = (void (__fastcall **)(PlayerFishingComp *const))(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*v2)(this);
  }
};

// Line 98: range 0000000016626DE2-0000000016626F8F
int32_t __cdecl PlayerFishingComp::notifyAllData(PlayerFishingComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 9 notify:99";
  *(_QWORD *)(v1 + 16) = PlayerFishingComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::PlayerFishingDataNotify::PlayerFishingDataNotify((proto::PlayerFishingDataNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_rod_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_fish_rod_);
  }
  proto::PlayerFishingDataNotify::set_last_fish_rod_id(
    (proto::PlayerFishingDataNotify *const)(v1 + 32),
    this->last_fish_rod_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v4 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlayerFishingDataNotify::~PlayerFishingDataNotify((proto::PlayerFishingDataNotify *const)(v1 + 32));
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 106: range 0000000016626F90-0000000016627CBB
void __fastcall PlayerFishingComp::modifyRewardItemByTalent(
        PlayerFishingComp *const this,
        uint32_t fish_pool_id,
        std::vector<ItemParam> *reward_item_vec,
        std::vector<ItemParam> *talent_item_vec,
        double a5,
        float a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  uint32_t AvatarComp; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v17; // rax
  _DWORD *v18; // rdx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::vector<ItemParam>::size_type v20; // rax
  const ItemParam *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rcx
  std::vector<ItemParam> *v39; // rax
  bool has_found; // [rsp+23h] [rbp-21Dh]
  uint32_t talent_avatar_id; // [rsp+24h] [rbp-21Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-218h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-210h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-208h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+40h] [rbp-200h] BYREF
  std::vector<ItemParam>::iterator __for_end_1; // [rsp+48h] [rbp-1F8h] BYREF
  const data::FishPoolExcelConfig *pool_config_ptr; // [rsp+50h] [rbp-1F0h]
  const std::unordered_map<unsigned int,std::set<unsigned int>> *proud_life_effect_avatars_map; // [rsp+58h] [rbp-1E8h]
  const std::unordered_map<unsigned int,LifeEffectFishingExtraOutput> *target_proud_skill_config_map; // [rsp+60h] [rbp-1E0h]
  const std::set<unsigned int> *__for_range; // [rsp+68h] [rbp-1D8h]
  std::vector<ItemParam> *__for_range_1; // [rsp+70h] [rbp-1D0h]
  const ItemParam *item_param; // [rsp+78h] [rbp-1C8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+80h] [rbp-1C0h]
  const LifeEffectFishingExtraOutput *config; // [rsp+88h] [rbp-1B8h]
  common::milog::MiLogStream v57; // [rsp+90h] [rbp-1B0h] BYREF
  char v58[400]; // [rsp+B0h] [rbp-190h] BYREF

  v6 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(352LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "11 48 4 24 max_extra_item_count:129 64 4 13 avatar_id:130 80 4 13 talent_id:132 96 4 18 proud_sk"
                        "ill_id:142 112 4 16 fish_pool_id:105 128 8 8 iter:121 160 8 15 avatar_guid:131 192 8 15 config_i"
                        "ter:144 224 16 18 new_item_param:178 256 16 21 talent_item_param:181 288 24 23 new_reward_item_vec:174";
  *(_QWORD *)(v6 + 16) = PlayerFishingComp::modifyRewardItemByTalent;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -234556924;
  v8[536862724] = -218959360;
  v8[536862725] = -218959360;
  v8[536862726] = -218959360;
  v8[536862727] = -219021312;
  v8[536862728] = -219021312;
  v8[536862729] = -218103808;
  v8[536862730] = -202116109;
  *(_DWORD *)(v6 + 112) = fish_pool_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v6 + 256));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
  pool_config_ptr = data::FishExcelConfigMgrBase::findFishPoolExcelConfig(
                      &v9->design_config.txt_config_mgr.fish_config_mgr,
                      *(_DWORD *)(v6 + 112));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 256));
  if ( pool_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&pool_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&pool_config_ptr->city_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&pool_config_ptr->city_id);
    }
    if ( pool_config_ptr->city_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v6 + 256));
      proud_life_effect_avatars_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256))->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_life_effect_avatars_map;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 256));
      *(_DWORD *)(v6 + 96) = 601;
      *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v6 + 128) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                                 proud_life_effect_avatars_map,
                                                                                                 (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v6 + 96));
      __for_end_1._M_current = (ItemParam *)std::unordered_map<unsigned int,std::set<unsigned int>>::end(proud_life_effect_avatars_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v6 + 128),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end_1) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/fishing/player_fishing_comp.cpp",
          "modifyRewardItemByTalent",
          124);
        common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
          &v57,
          (const char (*)[69])"data::PROUD_EFFECT_FISHING_EXTRA_OUTPUT has no corresponding avatars");
        common::milog::MiLogStream::~MiLogStream(&v57);
      }
      else
      {
        has_found = 0;
        *(_DWORD *)(v6 + 48) = 0;
        *(_DWORD *)(v6 + 64) = 0;
        *(_QWORD *)(v6 + 160) = 0LL;
        *(_DWORD *)(v6 + 80) = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v6 + 256));
        target_proud_skill_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256))->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_fishing_extra_output_config_map;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 256));
        __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v6 + 128))->second;
        __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v12 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          talent_avatar_id = *v13;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
          PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v6 + 256), AvatarComp);
          if ( !std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v6 + 256)) )
          {
            v15 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
            TalentComp = Avatar::getTalentComp(v15);
            TalentComp::getProudSkills((std::vector<unsigned int> *)(v6 + 288), TalentComp);
            __for_range_0 = (std::vector<unsigned int> *)(v6 + 288);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v6 + 288))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v17 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              v18 = v17;
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v17);
              }
              *(_DWORD *)(v6 + 96) = *v18;
              *(std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::const_iterator *)(v6 + 192) = std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::find(target_proud_skill_config_map, (const std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::key_type *)(v6 + 96));
              __for_end_1._M_current = (ItemParam *)std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::end(target_proud_skill_config_map)._M_cur;
              if ( !std::__detail::operator==<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false> *)(v6 + 192),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false> *)&__for_end_1) )
              {
                config = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false,false> *const)(v6 + 192))->second;
                if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                       &config->city_id_set,
                       &pool_config_ptr->city_id) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&config->probability >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&config->probability >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&config->probability);
                  }
                  if ( common::tools::RandomUtils::randomTestProbability(a6) )
                  {
                    if ( !has_found )
                      goto LABEL_31;
                    if ( *(_BYTE *)(((unsigned __int64)&config->extra_item_count >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->extra_item_count >> 3)
                                                                            + 0x7FFF8000) )
                    {
                      __asan_report_load4(&config->extra_item_count);
                    }
                    if ( config->extra_item_count > *(_DWORD *)(v6 + 48) )
                    {
LABEL_31:
                      has_found = 1;
                      if ( *(_BYTE *)(((unsigned __int64)&config->extra_item_count >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->extra_item_count >> 3)
                                                                              + 0x7FFF8000) )
                      {
                        __asan_report_load4(&config->extra_item_count);
                      }
                      *(_DWORD *)(v6 + 48) = config->extra_item_count;
                      *(_DWORD *)(v6 + 64) = talent_avatar_id;
                      v19 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
                      *(_QWORD *)(v6 + 160) = Avatar::getGuid(v19);
                      *(_DWORD *)(v6 + 80) = *(_DWORD *)(v6 + 96);
                    }
                  }
                }
              }
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 288));
          }
          std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v6 + 256));
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        if ( has_found )
        {
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v6 + 288));
          v20 = std::vector<ItemParam>::size(reward_item_vec);
          std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v6 + 288), v20);
          __for_range_1 = reward_item_vec;
          *(std::vector<ItemParam>::iterator *)(v6 + 192) = std::vector<ItemParam>::begin(reward_item_vec);
          __for_end_1._M_current = std::vector<ItemParam>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                    (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v6 + 192),
                    &__for_end_1) )
          {
            v21 = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v6 + 192));
            item_param = v21;
            if ( ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v21->promote_level + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v21 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v21->promote_level + 3) >> 3)
                                                               + 0x7FFF8000) )
            {
              __asan_report_load_n(v21, 16LL);
            }
            v22 = *(_QWORD *)&item_param->level;
            *(_QWORD *)(v6 + 224) = *(_QWORD *)&item_param->item_id;
            *(_QWORD *)(v6 + 232) = v22;
            *(_DWORD *)(v6 + 228) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v6 + 228), *(_DWORD *)(v6 + 48));
            std::vector<ItemParam>::push_back(
              (std::vector<ItemParam> *const)(v6 + 288),
              (const std::vector<ItemParam>::value_type *)(v6 + 224));
            if ( ((unsigned __int8)item_param & 7) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)item_param + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&item_param->promote_level
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load_n(item_param, 16LL);
            }
            v23 = *(_QWORD *)&item_param->level;
            *(_QWORD *)(v6 + 256) = *(_QWORD *)&item_param->item_id;
            *(_QWORD *)(v6 + 264) = v23;
            *(_DWORD *)(v6 + 260) = *(_DWORD *)(v6 + 48);
            std::vector<ItemParam>::push_back(talent_item_vec, (const std::vector<ItemParam>::value_type *)(v6 + 256));
            __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v6 + 192));
          }
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/fishing/player_fishing_comp.cpp",
            "modifyRewardItemByTalent",
            186);
          v24 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v57,
                  (const char (*)[39])"modify fish reward item, fish_pool_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v6 + 112));
          v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v25,
                  (const char (*)[23])" max_extra_item_count:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v6 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])" from:");
          v29 = common::milog::MiLogStream::operator<<<ItemParam>(v28, reward_item_vec);
          v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v29, (const char (*)[5])off_25D3A980);
          v31 = common::milog::MiLogStream::operator<<<ItemParam>(v30, (const std::vector<ItemParam> *)(v6 + 288));
          v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" avatar_id:");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v6 + 64));
          v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v33,
                  (const char (*)[14])" avatar_guid:");
          v35 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v34,
                  (const unsigned __int64 *)(v6 + 160));
          v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v35, (const char (*)[12])" talent_id:");
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v36,
                  (const unsigned int *)(v6 + 80));
          v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v38, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v57);
          v39 = std::move<std::vector<ItemParam> &>((std::vector<ItemParam> *)(v6 + 288));
          std::vector<ItemParam>::operator=(reward_item_vec, v39);
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v6 + 288));
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/fishing/player_fishing_comp.cpp",
      "modifyRewardItemByTalent",
      110);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v57, (const char (*)[14])"fish_pool_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 112));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v57);
  }
  if ( v58 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = -168430091;
  }
};
