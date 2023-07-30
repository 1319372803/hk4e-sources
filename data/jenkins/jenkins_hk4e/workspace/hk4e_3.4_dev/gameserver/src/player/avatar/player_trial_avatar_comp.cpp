// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/player_trial_avatar_comp.cpp

// Line 31: range 00000000161F6D9E-00000000161F7062
int32_t __cdecl PlayerTrialAvatarComp::onLogin(PlayerTrialAvatarComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool isTrialAvatarActivityDungeon; // r14
  int32_t result; // eax
  std::shared_ptr<Scene> v7; // [rsp+10h] [rbp-C0h] BYREF
  char v8[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 dungeon_ptr:32 64 24 9 notify:35";
  *(_QWORD *)(v2 + 16) = PlayerTrialAvatarComp::onLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&v7);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 32));
  std::shared_ptr<Scene>::~shared_ptr(&v7);
  std::shared_ptr<DungeonScene>::shared_ptr(
    (std::shared_ptr<DungeonScene> *const)&v7,
    (const std::shared_ptr<DungeonScene> *)(v2 + 32));
  isTrialAvatarActivityDungeon = PlayerTrialAvatarComp::isTrialAvatarActivityDungeon(this, (DungeonScenePtr *)&v7);
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v7);
  if ( isTrialAvatarActivityDungeon )
  {
    proto::TrialAvatarInDungeonIndexNotify::TrialAvatarInDungeonIndexNotify((proto::TrialAvatarInDungeonIndexNotify *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_activity_context_.trial_avatar_activity_index >> 3)
                  + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_activity_context_.trial_avatar_activity_index >> 3)
                  + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->trial_avatar_activity_context_.trial_avatar_activity_index);
    }
    proto::TrialAvatarInDungeonIndexNotify::set_trial_avatar_index_id(
      (proto::TrialAvatarInDungeonIndexNotify *const)(v2 + 64),
      this->trial_avatar_activity_context_.trial_avatar_activity_index);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    proto::TrialAvatarInDungeonIndexNotify::~TrialAvatarInDungeonIndexNotify((proto::TrialAvatarInDungeonIndexNotify *const)(v2 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  result = 0;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 45: range 00000000161F7064-00000000161F70CB
int32_t __cdecl PlayerTrialAvatarComp::fromBin(
        PlayerTrialAvatarComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  const proto::PlayerTrialAvatarCompBin *v2; // rax
  __int64 v3; // rdx
  char v4; // al

  v2 = proto::PlayerDataBin::trial_avatar_bin(player_data_bin);
  v3 = proto::PlayerTrialAvatarCompBin::trial_avatar_index_id(v2);
  v4 = *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(player_data_bin) = v4 != 0;
    __asan_report_store4(&this->cur_trial_avatar_index_id_, player_data_bin, v3);
  }
  this->cur_trial_avatar_index_id_ = v3;
  return 0;
};

// Line 53: range 00000000161F70CC-00000000161F713A
int32_t __cdecl PlayerTrialAvatarComp::toBin(PlayerTrialAvatarComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::PlayerTrialAvatarCompBin *trial_avatar_bin; // [rsp+18h] [rbp-8h]

  trial_avatar_bin = proto::PlayerDataBin::mutable_trial_avatar_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_trial_avatar_index_id_);
  }
  proto::PlayerTrialAvatarCompBin::set_trial_avatar_index_id(trial_avatar_bin, this->cur_trial_avatar_index_id_);
  return 0;
};

// Line 62: range 00000000161F713C-00000000161F714A
int32_t __cdecl PlayerTrialAvatarComp::init(PlayerTrialAvatarComp *const this)
{
  return 0;
};

// Line 68: range 00000000161F714C-00000000161F76CD
PlayerTrialAvatarComp *__fastcall PlayerTrialAvatarComp::getOrCreateTrialAvatar(
        PlayerTrialAvatarComp *const this,
        __int64 trial_avatar_id,
        const proto::TrialAvatarGrantRecord::GrantReason grant_reason,
        google::protobuf::uint32 is_inherit,
        bool a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned __int64 v8; // rax
  int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::pair<unsigned int,long unsigned int> v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 __y; // [rsp+20h] [rbp-130h] BYREF
  PlayerAvatarComp *avatar_comp; // [rsp+28h] [rbp-128h]
  std::shared_ptr<TrialAvatar> v21; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-110h] BYREF
  char v23[240]; // [rsp+60h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 18 trial_avatar_id:67 64 16 13 avatar_ptr:86 96 16 13 avatar_ptr:74 128 32 6 rec:97";
  *(_QWORD *)(v5 + 16) = PlayerTrialAvatarComp::getOrCreateTrialAvatar;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 48) = grant_reason;
  if ( *(_BYTE *)(((unsigned __int64)(trial_avatar_id + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(trial_avatar_id + 24);
  avatar_comp = Player::getAvatarComp(*(Player *const *)(trial_avatar_id + 24));
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned long>,unsigned int>(
          (std::map<unsigned int,long unsigned int> *)(trial_avatar_id + 40),
          (const unsigned int *)(v5 + 48)) )
    goto LABEL_15;
  v8 = (unsigned __int64)std::map<unsigned int,unsigned long>::operator[](
                           (std::map<unsigned int,long unsigned int> *const)(trial_avatar_id + 40),
                           (const std::map<unsigned int,long unsigned int>::key_type *)(v5 + 48));
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8);
  PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 96), (uint64_t)avatar_comp, *(_QWORD *)v8);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 96), 0LL) )
  {
    std::map<unsigned int,unsigned long>::erase(
      (std::map<unsigned int,long unsigned int> *const)(trial_avatar_id + 40),
      (const std::map<unsigned int,long unsigned int>::key_type *)(v5 + 48));
    v9 = 1;
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<TrialAvatar,Avatar>((const std::shared_ptr<Avatar> *)this);
    v9 = 0;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 96));
  if ( v9 == 1 )
  {
LABEL_15:
    PlayerAvatarComp::createTrialAvatar(
      (PlayerAvatarComp *const)(v5 + 64),
      (__int64)avatar_comp,
      *(_DWORD *)(v5 + 48),
      a5);
    if ( std::operator==<TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/player_trial_avatar_comp.cpp",
        "getOrCreateTrialAvatar",
        89);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v22,
              (const char (*)[33])"create trial_avatar failed, id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      std::shared_ptr<TrialAvatar>::shared_ptr((std::shared_ptr<TrialAvatar> *const)this, 0LL);
    }
    else
    {
      v11 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      __y = Avatar::getGuid(v11);
      v12 = std::make_pair<unsigned int &,unsigned long>((unsigned int *)(v5 + 48), &__y);
      *(_DWORD *)(v5 + 96) = v12.first;
      *(_QWORD *)(v5 + 104) = v12.second;
      std::map<unsigned int,unsigned long>::insert<std::pair<unsigned int,unsigned long>>(
        (std::map<unsigned int,long unsigned int> *const)(trial_avatar_id + 40),
        (std::pair<unsigned int,long unsigned int> *)(v5 + 96));
      proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v5 + 128));
      proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v5 + 128), is_inherit);
      std::shared_ptr<TrialAvatar>::shared_ptr(&v21, (const std::shared_ptr<TrialAvatar> *)(v5 + 64));
      PlayerAvatarComp::addTrialAvatar(
        (PlayerAvatarComp *const)(v5 + 96),
        (TrialAvatarPtr *)avatar_comp,
        (const proto::TrialAvatarGrantRecord *)&v21);
      v13 = std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v5 + 96));
      std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 96));
      std::shared_ptr<TrialAvatar>::~shared_ptr(&v21);
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/player_trial_avatar_comp.cpp",
          "getOrCreateTrialAvatar",
          101);
        v14 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(&v22, (const char (*)[38])off_25B99E20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        std::shared_ptr<TrialAvatar>::shared_ptr((std::shared_ptr<TrialAvatar> *const)this, 0LL);
      }
      else
      {
        std::shared_ptr<TrialAvatar>::shared_ptr(
          (std::shared_ptr<TrialAvatar> *const)this,
          (std::shared_ptr<TrialAvatar> *)(v5 + 64));
      }
      proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v5 + 128));
    }
    std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 64));
  }
  if ( v23 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 109: range 00000000161F76CE-00000000161F778A
void __cdecl tryReviveAvatar(AvatarPtr *p_avatar_ptr)
{
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  Avatar *v4; // rax
  Avatar *v5; // rax

  if ( !std::operator==<Avatar>(p_avatar_ptr, 0LL) )
  {
    v1 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    if ( !Creature::isHpFull(v1) )
    {
      v2 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
      Creature::setCurHpPercent(v2, 100.0, CHANGE_HP_ADD_TRIAL_AVATAR_ACTIVITY, 1);
    }
    v3 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    if ( Creature::getLifeState(v3) != LIFE_ALIVE )
    {
      v4 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
      Avatar::clearSpeed(v4);
      v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
      Avatar::setLifeAlive(v5, 0x6Cu, 0LL, 1);
    }
  }
};

// Line 126: range 00000000161F778C-00000000161F77E8
void __cdecl PlayerTrialAvatarComp::resetTrialAvatarIndexId(PlayerTrialAvatarComp *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_trial_avatar_index_id_, v1, &this->cur_trial_avatar_index_id_);
  }
  this->cur_trial_avatar_index_id_ = 0;
  TrialAvatarActivityContext::reset(&this->trial_avatar_activity_context_);
};

// Line 133: range 00000000161F77EA-00000000161F7C2C
int32_t __cdecl PlayerTrialAvatarComp::recallTrialAvatars(PlayerTrialAvatarComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  const Player *p_for_end; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  std::map<unsigned int,long unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,long unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  PlayerAvatarComp *avatar_comp; // [rsp+28h] [rbp-D8h]
  std::map<unsigned int,long unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  std::pair<unsigned int const,long unsigned int> *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,long unsigned int> >::type *id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,long unsigned int> >::type *guid; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 25 trial_avatar_guid_vec:137";
  *(_QWORD *)(v1 + 16) = PlayerTrialAvatarComp::recallTrialAvatars;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  avatar_comp = Player::getAvatarComp(this->player_);
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v1 + 32));
  __for_range = &this->trial_avatar_guid_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned long>::begin(&this->trial_avatar_guid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned long>::end(&this->trial_avatar_guid_map_)._M_node;
  while ( 1 )
  {
    p_for_end = (const Player *)&__for_end;
    if ( !std::operator!=(&__for_begin, &__for_end) )
      break;
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned long>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned long>(__in);
    guid = std::get<1ul,unsigned int const,unsigned long>(__in);
    std::vector<unsigned long>::emplace_back<unsigned long &>(
      (std::vector<long unsigned int> *const)(v1 + 32),
      guid,
      guid);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned long>>::operator++(&__for_begin);
  }
  if ( !std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v1 + 32)) )
  {
    p_for_end = (const Player *)(v1 + 32);
    if ( PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(
           avatar_comp,
           (const std::vector<long unsigned int> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/player_trial_avatar_comp.cpp",
        "recallTrialAvatars",
        146);
      v6 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v18,
             (const char (*)[68])"delInformalAvatarBatchAndReplaceByAvatarTeam fail, avatar_guid_vec:");
      v7 = common::milog::MiLogStream::operator<<<unsigned long>(v6, (const std::vector<long unsigned int> *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      p_for_end = this->player_;
      operator<<(v8, p_for_end);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_trial_avatar_index_id_, p_for_end, &this->cur_trial_avatar_index_id_);
  }
  this->cur_trial_avatar_index_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->appear_avatar_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->appear_avatar_id_, p_for_end);
  this->appear_avatar_id_ = 0LL;
  std::map<unsigned int,unsigned long>::clear(&this->trial_avatar_guid_map_);
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/avatar/player_trial_avatar_comp.cpp",
    "recallTrialAvatars",
    155);
  v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v18,
         (const char (*)[36])"[TRIAL_AVATAR] recallTrialAvatars: ");
  common::milog::MiLogStream::operator<<<unsigned long>(v9, (const std::vector<long unsigned int> *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v18);
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v1 + 32));
  result = 0;
  if ( v19 == (char *)v1 )
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

// Line 162: range 00000000161F7C2E-00000000161F7EAC
bool __cdecl PlayerTrialAvatarComp::isTrialAvatarDungeon(PlayerTrialAvatarComp *const this, ScenePtr *p_dungeon_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5; // r14
  bool result; // al
  bool v7; // [rsp+Fh] [rbp-C1h]
  std::shared_ptr<DungeonScene> v8; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<DungeonScene> v9; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-90h] BYREF
  char v11[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:163";
  *(_QWORD *)(v2 + 16) = PlayerTrialAvatarComp::isTrialAvatarDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/player_trial_avatar_comp.cpp",
      "isTrialAvatarDungeon",
      166);
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
      &v10,
      (const char (*)[66])"[TRIAL_AVATAR] isTrialAvatarDungeon, dungeon_scene_ptr == nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v7 = 0;
  }
  else
  {
    v5 = 0;
    std::shared_ptr<DungeonScene>::shared_ptr(&v8, (const std::shared_ptr<DungeonScene> *)(v2 + 32));
    v7 = 1;
    if ( !PlayerTrialAvatarComp::isTrialAvatarActivityDungeon(this, &v8) )
    {
      std::shared_ptr<DungeonScene>::shared_ptr(&v9, (const std::shared_ptr<DungeonScene> *)(v2 + 32));
      v5 = 1;
      if ( !PlayerTrialAvatarComp::isElementTrialDungeon(this, &v9) )
        v7 = 0;
    }
    if ( v5 )
      std::shared_ptr<DungeonScene>::~shared_ptr(&v9);
    std::shared_ptr<DungeonScene>::~shared_ptr(&v8);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 174: range 00000000161F7EAE-00000000161F7FE6
bool __cdecl PlayerTrialAvatarComp::isTrialAvatarActivityDungeon(
        PlayerTrialAvatarComp *const this,
        DungeonScenePtr *p_dungeon_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  bool result; // al
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 cur_dungeon_ptr:179";
  *(_QWORD *)(v2 + 16) = PlayerTrialAvatarComp::isTrialAvatarActivityDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<DungeonScene>(p_dungeon_ptr, 0LL) )
  {
    v5 = 0;
  }
  else
  {
    std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 32));
    v5 = std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32))
      && std::operator==<DungeonScene,DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), p_dungeon_ptr);
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  }
  result = v5;
  if ( v7 == (char *)v2 )
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

// Line 191: range 00000000161F7FE8-00000000161F8EE1
int32_t __cdecl PlayerTrialAvatarComp::initEnterSceneAvatar(
        PlayerTrialAvatarComp *const this,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr,
        ScenePtr *p_scene_ptr)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool isTrialAvatarActivityDungeon; // r15
  TrialAvatarActivityExcelConfigMgr *p_trial_avatar_activity_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  bool isElementTrialDungeon; // r15
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v18; // rax
  _DWORD *v19; // rdx
  common::milog::MiLogStream *v20; // r14
  unsigned int *v21; // rax
  bool v22; // di
  common::milog::MiLogStream *v23; // rax
  int v24; // r15d
  const std::shared_ptr<Avatar> *v25; // rdx
  int32_t result; // eax
  uint32_t appear_avatar_id; // [rsp+38h] [rbp-1A8h]
  google::protobuf::uint32 reason; // [rsp+3Ch] [rbp-1A4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-1A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-198h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+50h] [rbp-190h]
  const data::DungeonElementChallengeExcelConfig *element_dungeon_config_ptr; // [rsp+58h] [rbp-188h]
  const std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-180h]
  const data::ActivityTrialAvatarConfig *config_ptr; // [rsp+68h] [rbp-178h]
  std::vector<unsigned int> *__for_range_0; // [rsp+70h] [rbp-170h]
  unsigned int *avatar_id; // [rsp+78h] [rbp-168h]
  std::shared_ptr<DungeonScene> p_dungeon_ptr; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v41; // [rsp+90h] [rbp-150h] BYREF
  char v42[304]; // [rsp+B0h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 14 dungeon_id:225 48 4 12 trial_id:243 64 16 15 dungeon_ptr:197 96 16 14 avatar_ptr:267 1"
                        "28 24 23 trial_avatar_id_vec:203 192 24 14 avatar_vec:232";
  *(_QWORD *)(v5 + 16) = PlayerTrialAvatarComp::initEnterSceneAvatar;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  if ( std::operator==<Scene>(p_scene_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/player_trial_avatar_comp.cpp",
      "initEnterSceneAvatar",
      194);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v41,
      (const char (*)[33])"[TRIAL_AVATAR] scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v41);
    v4 = -1;
    goto LABEL_58;
  }
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v5 + 64));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v5 + 64), 0LL) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 128));
    appear_avatar_id = 0;
    reason = 0;
    std::shared_ptr<DungeonScene>::shared_ptr(&p_dungeon_ptr, (const std::shared_ptr<DungeonScene> *)(v5 + 64));
    isTrialAvatarActivityDungeon = PlayerTrialAvatarComp::isTrialAvatarActivityDungeon(this, &p_dungeon_ptr);
    std::shared_ptr<DungeonScene>::~shared_ptr(&p_dungeon_ptr);
    if ( isTrialAvatarActivityDungeon )
    {
      if ( !TrialAvatarActivityContext::isValid(&this->trial_avatar_activity_context_) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/player_trial_avatar_comp.cpp",
          "initEnterSceneAvatar",
          210);
        common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          &v41,
          (const char (*)[54])"[TRIAL_AVATAR] no valid trial avatar activity context");
        common::milog::MiLogStream::~MiLogStream(&v41);
        v4 = -1;
LABEL_56:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 128));
        goto LABEL_57;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_dungeon_ptr);
      p_trial_avatar_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_dungeon_ptr)->design_config.txt_config_mgr.trial_avatar_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_activity_context_.trial_avatar_activity_index >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_activity_context_.trial_avatar_activity_index >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->trial_avatar_activity_context_.trial_avatar_activity_index);
      }
      config_ptr = TrialAvatarActivityExcelConfigMgr::findActivityTrialAvatarConfig(
                     p_trial_avatar_activity_config_mgr,
                     this->trial_avatar_activity_context_.trial_avatar_activity_index);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_dungeon_ptr);
      if ( !config_ptr )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/player_trial_avatar_comp.cpp",
          "initEnterSceneAvatar",
          216);
        v10 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v41,
                (const char (*)[57])"[TRIAL_AVATAR] cur_trial_avatar_index_id_ is invalid, : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v10,
          &this->trial_avatar_activity_context_.trial_avatar_activity_index);
        common::milog::MiLogStream::~MiLogStream(&v41);
        v4 = -1;
        goto LABEL_56;
      }
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v5 + 128), &config_ptr->avatar_id_vec);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->trial_avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->trial_avatar_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->trial_avatar_id);
      }
      appear_avatar_id = config_ptr->trial_avatar_id;
      reason = 2;
    }
    else
    {
      std::shared_ptr<DungeonScene>::shared_ptr(&p_dungeon_ptr, (const std::shared_ptr<DungeonScene> *)(v5 + 64));
      isElementTrialDungeon = PlayerTrialAvatarComp::isElementTrialDungeon(this, &p_dungeon_ptr);
      std::shared_ptr<DungeonScene>::~shared_ptr(&p_dungeon_ptr);
      if ( isElementTrialDungeon )
      {
        v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        *(_DWORD *)(v5 + 32) = DungeonScene::getDungeonId(v12);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&p_dungeon_ptr);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_dungeon_ptr);
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               &v13->design_config.txt_config_mgr.dungeon_config_mgr,
                               *(_DWORD *)(v5 + 32));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_dungeon_ptr);
        if ( !dungeon_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/player_trial_avatar_comp.cpp",
            "initEnterSceneAvatar",
            229);
          v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v41,
                  (const char (*)[43])"findDungeonExcelConfig failed, dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v4 = -1;
          goto LABEL_56;
        }
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 192));
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->type);
        }
        if ( dungeon_config_ptr->type == DUNGEON_ELEMENT_CHALLENGE )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&p_dungeon_ptr);
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_dungeon_ptr);
          element_dungeon_config_ptr = data::DungeonElementChallengeExcelConfigMgrBase::findDungeonElementChallengeExcelConfig(
                                         &v15->design_config.txt_config_mgr.dungeon_element_challenge_config_mgr,
                                         *(_DWORD *)(v5 + 32));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_dungeon_ptr);
          if ( element_dungeon_config_ptr )
          {
            __for_range = &element_dungeon_config_ptr->trial_avatar_id;
            __for_begin._M_current = std::vector<unsigned int>::begin(&element_dungeon_config_ptr->trial_avatar_id)._M_current;
            __for_end._M_current = std::vector<unsigned int>::end(&element_dungeon_config_ptr->trial_avatar_id)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
            {
              v18 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
              v19 = v18;
              if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v18);
              }
              *(_DWORD *)(v5 + 48) = *v19;
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v5 + 128),
                (const std::vector<unsigned int>::value_type *)(v5 + 48));
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            reason = 3;
            v17 = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/player_trial_avatar_comp.cpp",
              "initEnterSceneAvatar",
              240);
            v16 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                    &v41,
                    (const char (*)[59])"findDungeonElementChallengeExcelConfig failed, dungeon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 32));
            common::milog::MiLogStream::~MiLogStream(&v41);
            v4 = -1;
            v17 = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/player_trial_avatar_comp.cpp",
            "initEnterSceneAvatar",
            251);
          v20 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v41,
                  (const char (*)[48])"dungeon can not use trial avatar, dungeon_type:");
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&dungeon_config_ptr->type);
          }
          __for_end._M_current = (const unsigned int *)data::enumValToStr(dungeon_config_ptr->type);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v20, (const char *const *)&__for_end);
          common::milog::MiLogStream::~MiLogStream(&v41);
          v4 = -1;
          v17 = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 192));
        if ( v17 != 1 )
          goto LABEL_56;
      }
    }
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v5 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/player_trial_avatar_comp.cpp",
        "initEnterSceneAvatar",
        259);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v41, (const char (*)[22])off_25B9A480);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v4 = -1;
    }
    else
    {
      __for_range_0 = (std::vector<unsigned int> *)(v5 + 128);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 128))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        avatar_id = v21;
        v22 = reason == 4;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          v22 = (char)v21;
          __asan_report_load4(v21);
        }
        PlayerTrialAvatarComp::getOrCreateTrialAvatar(
          (PlayerTrialAvatarComp *const)(v5 + 96),
          (__int64)this,
          (const proto::TrialAvatarGrantRecord::GrantReason)*avatar_id,
          reason,
          v22);
        if ( std::operator==<TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v5 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/player_trial_avatar_comp.cpp",
            "initEnterSceneAvatar",
            270);
          v23 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v41, (const char (*)[40])off_25B9A4C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, avatar_id);
          common::milog::MiLogStream::~MiLogStream(&v41);
          PlayerTrialAvatarComp::resetDungeonAndRecallTrialAvatars(this);
          v4 = -1;
          v24 = 0;
        }
        else
        {
          std::shared_ptr<Avatar>::shared_ptr<TrialAvatar,void>(
            (std::shared_ptr<Avatar> *const)&p_dungeon_ptr,
            (const std::shared_ptr<TrialAvatar> *)(v5 + 96));
          tryReviveAvatar((AvatarPtr *)&p_dungeon_ptr);
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&p_dungeon_ptr);
          std::shared_ptr<Avatar>::shared_ptr<TrialAvatar,void>(
            (std::shared_ptr<Avatar> *const)&p_dungeon_ptr,
            (const std::shared_ptr<TrialAvatar> *)(v5 + 96));
          std::vector<std::shared_ptr<Avatar>>::push_back(
            enter_scene_avatar_vec,
            (std::vector<std::shared_ptr<Avatar>>::value_type *)&p_dungeon_ptr);
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&p_dungeon_ptr);
          if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(avatar_id);
          }
          if ( appear_avatar_id == *avatar_id )
            std::shared_ptr<Avatar>::operator=<TrialAvatar>(
              appear_avatar_ptr,
              (const std::shared_ptr<TrialAvatar> *)(v5 + 96));
          v24 = 1;
        }
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 96));
        if ( v24 != 1 )
          goto LABEL_56;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      if ( std::vector<std::shared_ptr<Avatar>>::empty(enter_scene_avatar_vec) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/player_trial_avatar_comp.cpp",
          "initEnterSceneAvatar",
          286);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v41,
          (const char (*)[30])"enter_scene_avatar_vec size 0");
        common::milog::MiLogStream::~MiLogStream(&v41);
        v4 = -1;
      }
      else
      {
        if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
        {
          v25 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
          std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v25);
        }
        v4 = 0;
      }
    }
    goto LABEL_56;
  }
  common::milog::MiLogStream::create(
    &v41,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/avatar/player_trial_avatar_comp.cpp",
    "initEnterSceneAvatar",
    200);
  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
    &v41,
    (const char (*)[35])"[TRIAL_AVATAR] dungeon_ptr is null");
  common::milog::MiLogStream::~MiLogStream(&v41);
  v4 = -1;
LABEL_57:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 64));
LABEL_58:
  result = v4;
  if ( v42 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 297: range 00000000161F8EE2-00000000161F8F29
bool __cdecl PlayerTrialAvatarComp::isElementTrialDungeon(
        PlayerTrialAvatarComp *const this,
        DungeonScenePtr *p_dungeon_ptr)
{
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( std::operator==<DungeonScene>(p_dungeon_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_ptr);
  return DungeonScene::getDungeonType(v3) == DUNGEON_ELEMENT_CHALLENGE;
};

// Line 306: range 00000000161F8F2A-00000000161F8F50
void __cdecl PlayerTrialAvatarComp::resetDungeonAndRecallTrialAvatars(PlayerTrialAvatarComp *const this)
{
  PlayerTrialAvatarComp::recallTrialAvatars(this);
  PlayerTrialAvatarComp::resetTrialAvatarIndexId(this);
};

// Line 312: range 00000000161F8F52-00000000161F9493
void __cdecl PlayerTrialAvatarComp::onLeaveScene(PlayerTrialAvatarComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool isTrialAvatarActivityDungeon; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t DungeonId; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int v9; // r14d
  int v10; // r14d
  bool isElementTrialDungeon; // r14
  bool v12; // r14
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-110h] BYREF
  char v14[240]; // [rsp+40h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 16 19 leave_scene_ptr:314 64 16 18 dest_scene_ptr:315 96 16 21 leave_dungeon_ptr:316 128 16"
                        " 20 dest_dungeon_ptr:324 160 16 23 context_dungeon_ptr:328";
  *(_QWORD *)(v1 + 16) = PlayerTrialAvatarComp::onLeaveScene;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v1 + 64));
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 96));
  if ( std::operator!=<Scene,Scene>(
         (const std::shared_ptr<Scene> *)(v1 + 32),
         (const std::shared_ptr<Scene> *)(v1 + 64)) )
  {
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)(v1 + 160),
      (const std::shared_ptr<DungeonScene> *)(v1 + 96));
    isTrialAvatarActivityDungeon = PlayerTrialAvatarComp::isTrialAvatarActivityDungeon(
                                     this,
                                     (DungeonScenePtr *)(v1 + 160));
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 160));
    if ( isTrialAvatarActivityDungeon )
    {
      PlayerTrialAvatarComp::recallTrialAvatars(this);
      std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 128));
      if ( !std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 96), 0LL) )
        goto LABEL_19;
      if ( !std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 128), 0LL) )
        goto LABEL_19;
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      DungeonId = DungeonScene::getDungeonId(v5);
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( DungeonId != DungeonScene::getDungeonId(v7) )
        goto LABEL_19;
      std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v1 + 160));
      if ( std::operator!=<DungeonScene,Scene>(
             (const std::shared_ptr<DungeonScene> *)(v1 + 160),
             (const std::shared_ptr<Scene> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/avatar/player_trial_avatar_comp.cpp",
          "onLeaveScene",
          331);
        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          &v13,
          (const char (*)[51])"[TRIAL_AVATAR] leave scene is not context dungeon!");
        common::milog::MiLogStream::~MiLogStream(&v13);
        PlayerTrialAvatarComp::resetDungeonAndRecallTrialAvatars(this);
        v9 = 0;
      }
      else
      {
        std::weak_ptr<DungeonScene>::operator=<DungeonScene>(
          &this->trial_avatar_activity_context_.trial_avatar_dungeon_wtr,
          (const std::shared_ptr<DungeonScene> *)(v1 + 128));
        v9 = 1;
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 160));
      if ( v9 == 1 )
LABEL_19:
        v10 = 1;
      else
        v10 = 0;
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 128));
      if ( v10 != 1 )
        goto LABEL_26;
    }
    else
    {
      std::shared_ptr<DungeonScene>::shared_ptr(
        (std::shared_ptr<DungeonScene> *const)(v1 + 160),
        (const std::shared_ptr<DungeonScene> *)(v1 + 96));
      isElementTrialDungeon = PlayerTrialAvatarComp::isElementTrialDungeon(this, (DungeonScenePtr *)(v1 + 160));
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 160));
      if ( isElementTrialDungeon )
        PlayerTrialAvatarComp::recallTrialAvatars(this);
    }
    std::shared_ptr<Scene>::shared_ptr(
      (std::shared_ptr<Scene> *const)(v1 + 160),
      (const std::shared_ptr<Scene> *)(v1 + 64));
    v12 = !PlayerTrialAvatarComp::isTrialAvatarDungeon(this, (ScenePtr *)(v1 + 160));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 160));
    if ( v12 )
      PlayerTrialAvatarComp::resetTrialAvatarIndexId(this);
  }
LABEL_26:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 96));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 351: range 00000000161F9494-00000000161F950D
void __cdecl PlayerTrialAvatarComp::markTrialAvatarActivity(
        PlayerTrialAvatarComp *const this,
        DungeonScenePtr *p_dungeon_ptr,
        uint32_t trial_avatar_activity_index)
{
  uint32_t *p_trial_avatar_activity_index; // rdx

  TrialAvatarActivityContext::reset(&this->trial_avatar_activity_context_);
  std::weak_ptr<DungeonScene>::operator=<DungeonScene>(
    &this->trial_avatar_activity_context_.trial_avatar_dungeon_wtr,
    p_dungeon_ptr);
  p_trial_avatar_activity_index = &this->trial_avatar_activity_context_.trial_avatar_activity_index;
  if ( *(_BYTE *)(((unsigned __int64)p_trial_avatar_activity_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_trial_avatar_activity_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->trial_avatar_activity_context_.trial_avatar_activity_index,
      p_dungeon_ptr,
      p_trial_avatar_activity_index);
  }
  this->trial_avatar_activity_context_.trial_avatar_activity_index = trial_avatar_activity_index;
};

// Line 359: range 00000000161F950E-00000000161F9534
void __cdecl PlayerTrialAvatarComp::resetDungeonAndTryReviveAvatar(PlayerTrialAvatarComp *const this)
{
  PlayerTrialAvatarComp::tryReviveTrialAvatars(this);
  PlayerTrialAvatarComp::resetTrialAvatarIndexId(this);
};

// Line 365: range 00000000161F9536-00000000161F9857
void __cdecl PlayerTrialAvatarComp::tryReviveTrialAvatars(PlayerTrialAvatarComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::tuple_element<1,std::pair<unsigned int const,long unsigned int> >::type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::map<unsigned int,long unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,long unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  PlayerAvatarComp *avatar_comp; // [rsp+28h] [rbp-B8h]
  std::map<unsigned int,long unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  std::pair<unsigned int const,long unsigned int> *__in; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,long unsigned int> >::type *id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,long unsigned int> >::type *guid; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-80h] BYREF
  char v17[96]; // [rsp+80h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 avatar_ptr:370";
  *(_QWORD *)(v1 + 16) = PlayerTrialAvatarComp::tryReviveTrialAvatars;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  avatar_comp = Player::getAvatarComp(this->player_);
  __for_range = &this->trial_avatar_guid_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned long>::begin(&this->trial_avatar_guid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned long>::end(&this->trial_avatar_guid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned long>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned long>(__in);
    v4 = std::get<1ul,unsigned int const,unsigned long>(__in);
    guid = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4);
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v1 + 32), (uint64_t)avatar_comp, *guid);
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/player_trial_avatar_comp.cpp",
        "tryReviveTrialAvatars",
        373);
      v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v16, (const char (*)[28])off_25B9A700);
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, id);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, guid);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, (const std::shared_ptr<Avatar> *)(v1 + 32));
      tryReviveAvatar(&p_avatar_ptr);
      std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned long>>::operator++(&__for_begin);
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
