// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/limited_shop.cpp

// Line 23: range 0000000016C75C12-0000000016C75C9E
void __cdecl LimitedShop::LimitedShop(LimitedShop *const this, Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, player, this);
  }
  this->last_refresh_time_ = 0;
  std::unordered_map<unsigned int,WeekendDjinnInfo>::unordered_map(&this->djinn_pos_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
};

// Line 30: range 0000000016C75CA0-0000000016C75F44
int32_t __cdecl LimitedShop::fromBin(LimitedShop *const this, const proto::PlayerHomeLimitedShopBin *limited_shop_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 refresh_time; // rdx
  char v6; // al
  unsigned __int64 v7; // rax
  int32_t result; // eax
  const proto::PlayerHomeLimitedShopBin *limited_shop_bina; // [rsp+0h] [rbp-B0h]
  std::unordered_map<unsigned int,WeekendDjinnInfo>::key_type __k; // [rsp+1Ch] [rbp-94h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerLimitedShopNPCPosBin>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerLimitedShopNPCPosBin>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const google::protobuf::RepeatedPtrField<proto::PlayerLimitedShopNPCPosBin> *__for_range; // [rsp+30h] [rbp-80h]
  const proto::PlayerLimitedShopNPCPosBin *npc_pos_bin; // [rsp+38h] [rbp-78h]
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  limited_shop_bina = limited_shop_bin;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 djinn_info:35";
  *(_QWORD *)(v2 + 16) = LimitedShop::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  std::unordered_map<unsigned int,WeekendDjinnInfo>::clear(&this->djinn_pos_map_);
  refresh_time = proto::PlayerHomeLimitedShopBin::last_refresh_time(limited_shop_bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(limited_shop_bin) = v6 != 0;
    __asan_report_store4(this, limited_shop_bin, refresh_time);
  }
  this->last_refresh_time_ = refresh_time;
  __for_range = proto::PlayerHomeLimitedShopBin::npc_pos_bin_list(limited_shop_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerLimitedShopNPCPosBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerLimitedShopNPCPosBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerLimitedShopNPCPosBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    npc_pos_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerLimitedShopNPCPosBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 32) = proto::PlayerLimitedShopNPCPosBin::scene_id(npc_pos_bin);
    *(_DWORD *)(v2 + 36) = proto::PlayerLimitedShopNPCPosBin::block_id(npc_pos_bin);
    *(_DWORD *)(v2 + 40) = proto::PlayerLimitedShopNPCPosBin::index(npc_pos_bin);
    __k = proto::PlayerLimitedShopNPCPosBin::module_id(npc_pos_bin);
    v7 = (unsigned __int64)std::unordered_map<unsigned int,WeekendDjinnInfo>::operator[](&this->djinn_pos_map_, &__k);
    if ( (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v7 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 + 11) & 7) >= *(_BYTE *)(((v7 + 11) >> 3) + 0x7FFF8000) )
    {
      v7 = __asan_report_store_n(v7, 12LL);
    }
    *(_QWORD *)v7 = *(_QWORD *)(v2 + 32);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(v2 + 40);
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerLimitedShopNPCPosBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v2 )
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

// Line 45: range 0000000016C75F46-0000000016C7616D
int32_t __cdecl LimitedShop::toBin(LimitedShop *const this, proto::PlayerHomeLimitedShopBin *limited_shop_bin)
{
  std::unordered_map<unsigned int,WeekendDjinnInfo>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,WeekendDjinnInfo>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,WeekendDjinnInfo> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,WeekendDjinnInfo> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,WeekendDjinnInfo> >::type *module_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,WeekendDjinnInfo> >::type *djinn_info; // [rsp+40h] [rbp-10h]
  proto::PlayerLimitedShopNPCPosBin *proto_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::PlayerHomeLimitedShopBin::set_last_refresh_time(limited_shop_bin, this->last_refresh_time_);
  __for_range = &this->djinn_pos_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WeekendDjinnInfo>::begin(&this->djinn_pos_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WeekendDjinnInfo>::end(&this->djinn_pos_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WeekendDjinnInfo>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,WeekendDjinnInfo>(v6);
    djinn_info = (std::tuple_element<1,const std::pair<unsigned int const,WeekendDjinnInfo> >::type *)std::get<1ul,unsigned int const,WeekendDjinnInfo>(v6);
    proto_bin = proto::PlayerHomeLimitedShopBin::add_npc_pos_bin_list(limited_shop_bin);
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(module_id);
    }
    proto::PlayerLimitedShopNPCPosBin::set_module_id(proto_bin, *module_id);
    if ( *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)djinn_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(djinn_info);
    }
    proto::PlayerLimitedShopNPCPosBin::set_scene_id(proto_bin, djinn_info->scene_id);
    if ( *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)djinn_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&djinn_info->block_id);
    }
    proto::PlayerLimitedShopNPCPosBin::set_block_id(proto_bin, djinn_info->block_id);
    if ( *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)djinn_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&djinn_info->index);
    }
    proto::PlayerLimitedShopNPCPosBin::set_index(proto_bin, djinn_info->index);
    std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 59: range 0000000016C7616E-0000000016C76188
void __cdecl LimitedShop::notifyAllData(LimitedShop *const this)
{
  LimitedShop::notifyShopInfo(this);
};

// Line 64: range 0000000016C7618A-0000000016C76194
void __cdecl LimitedShop::notifyShopInfo(LimitedShop *const this)
{
  ;
};

// Line 68: range 0000000016C76196-0000000016C765B5
void __cdecl LimitedShop::fillShopInfo(
        LimitedShop *const this,
        uint32_t module_id,
        proto::HomeLimitedShopInfo *shop_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t Now; // eax
  uint32_t Uid; // edx
  const data::ConfigWeekendDjinn *config_djinn_info; // [rsp+28h] [rbp-98h]
  proto::Vector *pos; // [rsp+30h] [rbp-90h]
  proto::Vector *rot; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 open_time:71 48 4 13 close_time:71 64 4 18 guest_open_time:71";
  *(_QWORD *)(v3 + 16) = LimitedShop::fillShopInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  LimitedShop::checkRefreshTime(this);
  config_djinn_info = LimitedShop::getWeekendDjinnConfig(this, module_id);
  Now = common::tools::TimeUtils::getNow();
  HomeLimitedShopCommon::getShopTime(Now, (uint32_t *)(v3 + 32), (uint32_t *)(v3 + 48), (uint32_t *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::HomeLimitedShopInfo::set_uid(shop_info, Uid);
  proto::HomeLimitedShopInfo::set_next_open_time(shop_info, *(_DWORD *)(v3 + 32));
  proto::HomeLimitedShopInfo::set_next_close_time(shop_info, *(_DWORD *)(v3 + 48));
  proto::HomeLimitedShopInfo::set_next_guest_open_time(shop_info, *(_DWORD *)(v3 + 64));
  if ( config_djinn_info )
  {
    pos = proto::HomeLimitedShopInfo::mutable_djinn_pos(shop_info);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&config_djinn_info->pos);
    }
    proto::Vector::set_x(pos, config_djinn_info->pos.x);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos.y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos.y >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&config_djinn_info->pos.y);
    }
    proto::Vector::set_y(pos, config_djinn_info->pos.y);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos.z >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&config_djinn_info->pos.z);
    }
    proto::Vector::set_z(pos, config_djinn_info->pos.z);
    rot = proto::HomeLimitedShopInfo::mutable_djinn_rot(shop_info);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&config_djinn_info->rot);
    }
    proto::Vector::set_x(rot, config_djinn_info->rot.x);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot.y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot.y >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&config_djinn_info->rot.y);
    }
    proto::Vector::set_y(rot, config_djinn_info->rot.y);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot.z >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&config_djinn_info->rot.z);
    }
    proto::Vector::set_z(rot, config_djinn_info->rot.z);
  }
  if ( v12 == (char *)v3 )
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
};

// Line 92: range 0000000016C765B6-0000000016C76A9F
const WeekendDjinnInfo *__fastcall LimitedShop::getWeekendDjinnInfo(LimitedShop *const this, uint32_t module_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Home *v5; // rax
  HomeLimitedShopComp *HomeLimitedShopComp; // rax
  unsigned __int64 WeekendDjinnInfo; // r14
  unsigned __int64 n; // rax
  PlayerHomeComp *HomeComp; // rax
  uint32_t Uid; // eax
  unsigned __int64 v11; // rax
  const WeekendDjinnInfo *result; // rax
  char v13[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 module_id:91 48 12 14 djinn_info:106 80 16 11 home_ptr:99 112 48 20 unlock_block_map:107";
  *(_QWORD *)(v2 + 16) = LimitedShop::getWeekendDjinnInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = module_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WeekendDjinnInfo>,unsigned int>(
          &this->djinn_pos_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getHomeComp(this->player_);
    PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v2 + 80));
    if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v2 + 80), 0LL) )
    {
      v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      HomeLimitedShopComp = Home::getHomeLimitedShopComp(v5);
      WeekendDjinnInfo = (unsigned __int64)HomeLimitedShopComp::getWeekendDjinnInfo(
                                             HomeLimitedShopComp,
                                             *(_DWORD *)(v2 + 32));
      n = (unsigned __int64)std::unordered_map<unsigned int,WeekendDjinnInfo>::operator[](
                              &this->djinn_pos_map_,
                              (const std::unordered_map<unsigned int,WeekendDjinnInfo>::key_type *)(v2 + 32));
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_store_n(n, 12LL);
      }
      if ( (char)(WeekendDjinnInfo & 7) >= *(_BYTE *)((WeekendDjinnInfo >> 3) + 0x7FFF8000)
        && *(_BYTE *)((WeekendDjinnInfo >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((WeekendDjinnInfo + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((WeekendDjinnInfo + 11) & 7) >= *(_BYTE *)(((WeekendDjinnInfo + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(WeekendDjinnInfo, 12LL);
      }
      *(_QWORD *)n = *(_QWORD *)WeekendDjinnInfo;
      *(_DWORD *)(n + 8) = *(_DWORD *)(WeekendDjinnInfo + 8);
    }
    else
    {
      *(_DWORD *)(v2 + 48) = 0;
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 56) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HomeComp = Player::getHomeComp(this->player_);
      PlayerHomeComp::getUnlockBlockID(
        (std::map<unsigned int,std::set<unsigned int>> *)(v2 + 112),
        HomeComp,
        *(_DWORD *)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      HomeLimitedShopCommon::randomDjinnPos(
        *(_DWORD *)(v2 + 32),
        (const std::map<unsigned int,std::set<unsigned int>> *)(v2 + 112),
        Uid,
        (WeekendDjinnInfo *)(v2 + 48));
      v11 = (unsigned __int64)std::unordered_map<unsigned int,WeekendDjinnInfo>::operator[](
                                &this->djinn_pos_map_,
                                (const std::unordered_map<unsigned int,WeekendDjinnInfo>::key_type *)(v2 + 32));
      if ( (char)(v11 & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((v11 + 11) & 7) >= *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) )
      {
        v11 = __asan_report_store_n(v11, 12LL);
      }
      *(_QWORD *)v11 = *(_QWORD *)(v2 + 48);
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v2 + 56);
      std::map<unsigned int,std::set<unsigned int>>::~map((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 112));
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 80));
  }
  result = std::unordered_map<unsigned int,WeekendDjinnInfo>::operator[](
             &this->djinn_pos_map_,
             (const std::unordered_map<unsigned int,WeekendDjinnInfo>::key_type *)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 116: range 0000000016C76AA0-0000000016C76C85
void __cdecl LimitedShop::checkRefreshTime(LimitedShop *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t now; // [rsp+14h] [rbp-9Ch]
  uint32_t time_offset; // [rsp+18h] [rbp-98h]
  uint32_t week_time; // [rsp+1Ch] [rbp-94h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 13 open_time:117 48 4 14 close_time:117 64 4 19 guest_open_time:117";
  *(_QWORD *)(v1 + 16) = LimitedShop::checkRefreshTime;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  now = common::tools::TimeUtils::getNow();
  HomeLimitedShopCommon::getShopTime(now, (uint32_t *)(v1 + 32), (uint32_t *)(v1 + 48), (uint32_t *)(v1 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  week_time = common::tools::TimeUtils::getWeekTime(*(unsigned int *)(v1 + 32), time_offset);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( week_time > this->last_refresh_time_ && now >= *(_DWORD *)(v1 + 32) )
  {
    this->last_refresh_time_ = week_time;
    std::unordered_map<unsigned int,WeekendDjinnInfo>::clear(&this->djinn_pos_map_);
  }
  if ( v9 == (char *)v1 )
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

// Line 133: range 0000000016C76C86-0000000016C76E5D
void __cdecl LimitedShop::syncWeekendDjinnInfo(LimitedShop *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  Home *v5; // rax
  __int64 LastRefreshTime; // rdx
  char v7; // al
  HomeLimitedShopComp *home_limited_shop_comp; // [rsp+18h] [rbp-78h]
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 home_ptr:134";
  *(_QWORD *)(v1 + 16) = LimitedShop::syncWeekendDjinnInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 32));
  v4 = 0LL;
  if ( !std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    home_limited_shop_comp = Home::getHomeLimitedShopComp(v5);
    LastRefreshTime = HomeLimitedShopComp::getLastRefreshTime(home_limited_shop_comp);
    v7 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(this, v4, LastRefreshTime);
    }
    this->last_refresh_time_ = LastRefreshTime;
    HomeLimitedShopComp::syncWeekendDjinnInfo(home_limited_shop_comp, &this->djinn_pos_map_);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 145: range 0000000016C76E5E-0000000016C772A5
void __cdecl LimitedShop::checkDjinnInfo(LimitedShop *const this)
{
  std::map<unsigned int,std::set<unsigned int>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  const JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t index; // ecx
  uint32_t block_id; // esi
  bool v7; // r14
  PlayerHomeComp *HomeComp; // rcx
  uint32_t Uid; // edi
  std::unordered_map<unsigned int,WeekendDjinnInfo>::iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,WeekendDjinnInfo>::iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,WeekendDjinnInfo> *__for_range; // [rsp+20h] [rbp-E0h]
  std::pair<unsigned int const,WeekendDjinnInfo> *__in; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,WeekendDjinnInfo> >::type *module_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,WeekendDjinnInfo> >::type *djinn_info; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (std::map<unsigned int,std::set<unsigned int>> *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<unsigned int,std::set<unsigned int>> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 20 unlock_block_map:150";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)LimitedShop::checkDjinnInfo;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  __for_range = &this->djinn_pos_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WeekendDjinnInfo>::begin(&this->djinn_pos_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WeekendDjinnInfo>::end(&this->djinn_pos_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WeekendDjinnInfo>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,WeekendDjinnInfo>(__in);
    djinn_info = std::get<1ul,unsigned int const,WeekendDjinnInfo>(__in);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)djinn_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) )
    {
      p_json_config_mgr = (const JsonConfigMgr *)&djinn_info->index;
      __asan_report_load4(&djinn_info->index);
    }
    index = djinn_info->index;
    if ( *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)djinn_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3)
                                                               + 0x7FFF8000) )
    {
      p_json_config_mgr = (const JsonConfigMgr *)&djinn_info->block_id;
      __asan_report_load4(&djinn_info->block_id);
    }
    block_id = djinn_info->block_id;
    if ( *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)djinn_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) )
    {
      p_json_config_mgr = (const JsonConfigMgr *)djinn_info;
      __asan_report_load4(djinn_info);
    }
    v7 = JsonConfigMgr::findWeekendDjinnPosConfig(p_json_config_mgr, djinn_info->scene_id, block_id, index) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( v7 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HomeComp = Player::getHomeComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(module_id);
      }
      PlayerHomeComp::getUnlockBlockID(v1 + 1, HomeComp, *module_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
      {
        Uid = (unsigned int)module_id;
        __asan_report_load4(module_id);
      }
      HomeLimitedShopCommon::randomDjinnPos(*module_id, v1 + 1, Uid, djinn_info);
      std::map<unsigned int,std::set<unsigned int>>::~map(v1 + 1);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 157: range 0000000016C772A6-0000000016C773FD
const data::ConfigWeekendDjinn *__cdecl LimitedShop::getWeekendDjinnConfig(LimitedShop *const this, uint32_t module_id)
{
  JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t index; // ecx
  uint32_t block_id; // esi
  const data::ConfigWeekendDjinn *WeekendDjinnPosConfig; // rbx
  WeekendDjinnInfo *djinn_info; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v8[2]; // [rsp+20h] [rbp-20h] BYREF

  djinn_info = (WeekendDjinnInfo *)LimitedShop::getWeekendDjinnInfo(this, module_id);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)djinn_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) )
  {
    p_json_config_mgr = (JsonConfigMgr *)&djinn_info->index;
    __asan_report_load4(&djinn_info->index);
  }
  index = djinn_info->index;
  if ( *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)djinn_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3)
                                                             + 0x7FFF8000) )
  {
    p_json_config_mgr = (JsonConfigMgr *)&djinn_info->block_id;
    __asan_report_load4(&djinn_info->block_id);
  }
  block_id = djinn_info->block_id;
  if ( *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)djinn_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) )
  {
    p_json_config_mgr = (JsonConfigMgr *)djinn_info;
    __asan_report_load4(djinn_info);
  }
  WeekendDjinnPosConfig = JsonConfigMgr::findWeekendDjinnPosConfig(
                            p_json_config_mgr,
                            djinn_info->scene_id,
                            block_id,
                            index);
  std::shared_ptr<Config>::~shared_ptr(v8);
  return WeekendDjinnPosConfig;
};
