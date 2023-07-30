// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/scene_play/base_scene_play_battle.cpp

// Line 36: range 0000000014EDCD18-0000000014EDCDF3
void __cdecl ScenePlayBattleParam::clear(ScenePlayBattleParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->duration = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->start_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->start_cd, v2, v3);
  this->start_cd = 0;
  std::vector<unsigned int>::clear(&this->progress_stage_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mode, v2, (_BYTE)this + 32);
  }
  this->mode = 0;
};

// Line 44: range 0000000014EDCFC2-0000000014EDE998
int32_t __cdecl BaseScenePlayBattle::onBattleInit(BaseScenePlayBattle *const this, ScenePlayBattleType type)
{
  int32_t v2; // r14d
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  char *v9; // rsi
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t PlayId; // edx
  char v12; // al
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t PlayType; // ecx
  char v15; // dl
  bool v16; // dl
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t EntryId; // edx
  char v19; // al
  bool v20; // dl
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  common::milog::MiLogStream *v23; // r13
  PlayerWorld *v24; // rax
  Player *v25; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v27; // rax
  PlayerEventComp *EventComp; // r13
  Player *v29; // rax
  PlayerEventComp *v30; // r13
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v31; // rax
  _DWORD *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v35; // rax
  unsigned int *v36; // r8
  common::milog::MiLogStream *v37; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v38; // rax
  unsigned int *v39; // r8
  common::milog::MiLogStream *v40; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v41; // rax
  common::milog::MiLogStream *v42; // rax
  int v43; // r13d
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  __int64 entry_id; // rsi
  common::milog::MiLogStream *v46; // rax
  Player *v47; // rcx
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // r13
  unsigned __int64 v54; // rax
  unsigned int (__fastcall *v55)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, __int64, const char *, const char *, __int64, __int64, __int64); // r15
  __int64 SceneId; // r14
  __int64 v57; // rax
  int32_t result; // eax
  unsigned __int64 v59; // [rsp+28h] [rbp-338h]
  bool is_from_single_to_mp; // [rsp+43h] [rbp-31Dh]
  unsigned int val; // [rsp+44h] [rbp-31Ch] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-318h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-310h] BYREF
  const MpPlayExcelConfigMgr *config_mgr; // [rsp+58h] [rbp-308h]
  const std::unordered_set<unsigned int> *statistic_id_set; // [rsp+60h] [rbp-300h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+68h] [rbp-2F8h]
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+70h] [rbp-2F0h]
  const data::MpPlayStatisticConfig *stat_config_ptr; // [rsp+78h] [rbp-2E8h]
  PlayerEventComp v70; // [rsp+80h] [rbp-2E0h] BYREF
  char v71[528]; // [rsp+150h] [rbp-210h] BYREF

  v59 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v59 = v3;
  }
  *(_QWORD *)v59 = 1102416563LL;
  *(_QWORD *)(v59 + 8) = "12 48 4 16 statistic_id:116 64 8 14 param_iter:124 96 8 9 param:142 128 12 9 param:132 160 16 1"
                         "1 play_ptr:53 192 16 12 world_ptr:66 224 16 19 owner_player_ptr:89 256 16 11 self_ptr:99 288 16"
                         " 12 self_wtr:100 320 16 13 scene_ptr:162 352 16 14 battle_wtr:184 384 64 9 param:152";
  *(_QWORD *)(v59 + 16) = BaseScenePlayBattle::onBattleInit;
  v4 = (_DWORD *)(v59 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219020288;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -219021312;
  v4[536862734] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onBattleInit",
    45);
  v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
         (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
         (const char (*)[39])"[SCENE_PLAY_BATTLE] onBattleInit uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" ,type: ");
  *(_DWORD *)(v59 + 48) = type;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v59 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "onBattleInit",
      48);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
           (const char (*)[43])"[SCENE_PLAY_BATTLE] state invalid, state: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    *(_DWORD *)(v59 + 48) = this->state_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v59 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
    v2 = -1;
  }
  else
  {
    BaseScenePlayBattle::getScenePlay((const BaseScenePlayBattle *const)(v59 + 160));
    v9 = (char *)(v59 + 160);
    if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v59 + 160)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "onBattleInit",
        56);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
        (const char (*)[37])"[SCENE_PLAY_BATTLE] play_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
      v2 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 160));
      PlayId = BaseScenePlay::getPlayId(v10);
      v12 = *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v9) = v12 != 0;
        __asan_report_store4(&this->play_id_, v9, PlayId);
      }
      this->play_id_ = PlayId;
      v13 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 160));
      PlayType = BaseScenePlay::getPlayType(v13);
      v15 = *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v15 != 0;
      v16 = v15 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v15;
      if ( v16 )
        __asan_report_store4(&this->play_type_, v9, v16);
      this->play_type_ = PlayType;
      v17 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 160));
      EntryId = BaseScenePlay::getEntryId(v17);
      v19 = *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v9) = v19 != 0;
        __asan_report_store4(&this->entry_id_, v9, EntryId);
      }
      this->entry_id_ = EntryId;
      v20 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
      if ( v20 )
        __asan_report_store4(&this->type_, (((_BYTE)this + 68) & 7u) + 3, v20);
      this->type_ = type;
      BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v59 + 192));
      if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v59 + 192)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onBattleInit",
          69);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
          (const char (*)[34])"[SCENE_PLAY_BATTLE] world is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
        v2 = -1;
      }
      else
      {
        is_from_single_to_mp = 0;
        v21 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 192));
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v21);
        v22 = *(_QWORD *)v21 + 184LL;
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(*(_QWORD *)v21 + 184LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v22)(v21) != 1 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "onBattleInit",
            77);
          v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                  (const char (*)[48])"[SCENE_PLAY_BATTLE] set world in mp mode, uid: ");
          *(_DWORD *)(v59 + 48) = BaseScenePlayBattle::getOwnerUid(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v59 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
          v24 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 192));
          PlayerWorld::setIsInMpMode(v24, 1);
          is_from_single_to_mp = 1;
        }
        if ( BaseScenePlayBattle::transferPlayersToBornPos(this, is_from_single_to_mp) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "onBattleInit",
            85);
          common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
            (const char (*)[52])"[SCENE_PLAY_BATTLE] transferPlayersToBornPos failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
          v2 = -1;
        }
        else
        {
          BaseScenePlayBattle::getOwnerPlayer((const BaseScenePlayBattle *const)(v59 + 224));
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v59 + 224)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/scene_play/base_scene_play_battle.cpp",
              "onBattleInit",
              92);
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
              (const char (*)[42])"[SCENE_PLAY_BATTLE] getOwnerPlayer failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
            v2 = -1;
          }
          else
          {
            v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 224));
            BasicComp = Player::getBasicComp(v25);
            PlayerBasicComp::getNextTransNo[abi:cxx11](
              (std::string *)&v70.event_center_.observer_list_map_._M_h._M_bucket_count,
              BasicComp);
            std::operator+<char>(
              (std::string *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
              (std::string *)&v70.event_center_.observer_list_map_._M_h._M_bucket_count,
              "_ScenePlayBattle");
            std::string::operator=(
              &this->transaction_no_,
              &v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
            std::string::~string(&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
            std::string::~string(&v70.event_center_.observer_list_map_._M_h._M_bucket_count);
            toThisPtr<BaseScenePlayBattle>((BaseScenePlayBattle *)(v59 + 256));
            std::weak_ptr<BaseScenePlayBattle>::weak_ptr<BaseScenePlayBattle,void>(
              (std::weak_ptr<BaseScenePlayBattle> *const)(v59 + 288),
              (const std::shared_ptr<BaseScenePlayBattle> *)(v59 + 256));
            if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->mp_mode_obs_wtr_) )
            {
              v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 224));
              EventComp = Player::getEventComp(v27);
              std::weak_ptr<BaseScenePlayBattle>::weak_ptr(
                (std::weak_ptr<BaseScenePlayBattle> *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start,
                (const std::weak_ptr<BaseScenePlayBattle> *)(v59 + 288));
              PlayerEventComp::registerObserver<BaseScenePlayBattle,WorldMpModeChangeEvent>(
                &v70,
                (std::weak_ptr<BaseScenePlayBattle> *)EventComp,
                (void (*)(BaseScenePlayBattle *, const WorldMpModeChangeEvent *))&v70.event_center_.context_.pending_que_.c._M_impl._M_start);
              std::weak_ptr<Observer>::operator=(&this->mp_mode_obs_wtr_, (std::weak_ptr<Observer> *)&v70);
              std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v70);
              std::weak_ptr<BaseScenePlayBattle>::~weak_ptr((std::weak_ptr<BaseScenePlayBattle> *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start);
            }
            if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->world_avatar_die_obs_wtr_) )
            {
              v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 224));
              v30 = Player::getEventComp(v29);
              std::weak_ptr<BaseScenePlayBattle>::weak_ptr(
                (std::weak_ptr<BaseScenePlayBattle> *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start,
                (const std::weak_ptr<BaseScenePlayBattle> *)(v59 + 288));
              PlayerEventComp::registerObserver<BaseScenePlayBattle,WorldAvatarDieEvent>(
                (PlayerEventComp *const)&v70._M_weak_this._M_refcount,
                (std::weak_ptr<BaseScenePlayBattle> *)v30,
                (void (*)(BaseScenePlayBattle *, const WorldAvatarDieEvent *))&v70.event_center_.context_.pending_que_.c._M_impl._M_start);
              std::weak_ptr<Observer>::operator=(
                &this->world_avatar_die_obs_wtr_,
                (std::weak_ptr<Observer> *)&v70._M_weak_this._M_refcount);
              std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v70._M_weak_this._M_refcount);
              std::weak_ptr<BaseScenePlayBattle>::~weak_ptr((std::weak_ptr<BaseScenePlayBattle> *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start);
            }
            BaseScenePlayBattle::destroyGeneralRewardGadget(this);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v70.event_center_);
            config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v70.event_center_)->design_config.txt_config_mgr.mp_play_config_mgr;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v70.event_center_);
            if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->play_id_);
            }
            statistic_id_set = MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(config_mgr, this->play_id_);
            __for_range = statistic_id_set;
            __for_begin._M_cur = std::unordered_set<unsigned int>::begin(statistic_id_set)._M_cur;
            __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
            while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
            {
              v31 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
              v32 = v31;
              if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v31);
              }
              *(_DWORD *)(v59 + 48) = *v32;
              stat_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayStatisticConfig(
                                  config_mgr,
                                  *(_DWORD *)(v59 + 48));
              if ( !stat_config_ptr )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v70.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/scene_play/base_scene_play_battle.cpp",
                  "onBattleInit",
                  121);
                v33 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                        (common::milog::MiLogStream *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
                        (const char (*)[67])"[SCENE_PLAY_BATTLE] MpPlayStatisticConfig not found, statistic_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v59 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
                v2 = -1;
                goto LABEL_101;
              }
              *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v59 + 64) = std::unordered_map<unsigned int,std::any>::find(
                                                                                           &config_mgr->mp_play_settle_param_map,
                                                                                           (const std::unordered_map<unsigned int,std::any>::key_type *)(v59 + 48));
              *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v59 + 96) = std::unordered_map<unsigned int,std::any>::end(&config_mgr->mp_play_settle_param_map);
              if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v59 + 64),
                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v59 + 96)) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v70.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/scene_play/base_scene_play_battle.cpp",
                  "onBattleInit",
                  127);
                v34 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                        (common::milog::MiLogStream *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
                        (const char (*)[70])"[SCENE_PLAY_BATTLE] mp_play_settle_param_map not found, statistic_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v59 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
                v2 = -1;
                goto LABEL_101;
              }
              if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->settle_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&stat_config_ptr->settle_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&stat_config_ptr->settle_type);
              }
              if ( stat_config_ptr->settle_type == MP_PLAY_SETTLE_TYPE_MONSTER_TAKE_DEMAGE )
              {
                v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v59 + 64));
                *(MpPlaySettleSpecifiedMonsterTakeDamageParam *)(v59 + 128) = tryAnyCast<MpPlaySettleSpecifiedMonsterTakeDamageParam>(&v35->second);
                if ( !*(_DWORD *)(v59 + 128) || !*(_DWORD *)(v59 + 132) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_bucket_count,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/scene_play/base_scene_play_battle.cpp",
                    "onBattleInit",
                    135);
                  v37 = common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(
                          (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_bucket_count,
                          (const char (*)[93])"[SCENE_PLAY_BATTLE] MpPlaySettleSpecifiedMonsterTakeDamageParam param ille"
                                              "gal, statistic_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v59 + 48));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_bucket_count);
                  v2 = -1;
                  goto LABEL_101;
                }
                std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<unsigned int &,unsigned int &>(
                  &this->combat_statistic_target_set_,
                  (unsigned int *)(v59 + 128),
                  (unsigned int *)(v59 + 132),
                  (unsigned int *)&this->combat_statistic_target_set_,
                  v36);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->settle_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&stat_config_ptr->settle_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&stat_config_ptr->settle_type);
                }
                if ( stat_config_ptr->settle_type == MP_PLAY_SETTLE_TYPE_MONSTER_KILLER )
                {
                  v38 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v59 + 64));
                  *(MpPlaySettleSpecifiedMonsterKillerParam *)(v59 + 96) = tryAnyCast<MpPlaySettleSpecifiedMonsterKillerParam>(&v38->second);
                  if ( !*(_DWORD *)(v59 + 96) || !*(_DWORD *)(v59 + 100) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/scene_play/base_scene_play_battle.cpp",
                      "onBattleInit",
                      145);
                    v40 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                            (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                            (const char (*)[89])"[SCENE_PLAY_BATTLE] MpPlaySettleSpecifiedMonsterKillerParam param illega"
                                                "l, statistic_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v40,
                      (const unsigned int *)(v59 + 48));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
                    v2 = -1;
                    goto LABEL_101;
                  }
                  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<unsigned int &,unsigned int &>(
                    &this->combat_statistic_target_set_,
                    (unsigned int *)(v59 + 96),
                    (unsigned int *)(v59 + 100),
                    (unsigned int *)&this->combat_statistic_target_set_,
                    v39);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->settle_type >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&stat_config_ptr->settle_type >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&stat_config_ptr->settle_type);
                  }
                  if ( stat_config_ptr->settle_type == MP_PLAY_SETTLE_TYPE_MONSTER_KILL_NUM )
                  {
                    v41 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v59 + 64));
                    tryAnyCast<MpPlaySettleMonsterKillNumParam>(
                      (MpPlaySettleMonsterKillNumParam *)(v59 + 384),
                      &v41->second);
                    if ( *(_DWORD *)(v59 + 384) )
                    {
                      std::unordered_set<unsigned int>::insert(
                        &this->combat_statistic_group_set_,
                        (const std::unordered_set<unsigned int>::value_type *)(v59 + 384));
                      v43 = 1;
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/scene_play/base_scene_play_battle.cpp",
                        "onBattleInit",
                        155);
                      v42 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                              (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                              (const char (*)[81])"[SCENE_PLAY_BATTLE] MpPlaySettleMonsterKillNumParam param illegal, statistic_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v42,
                        (const unsigned int *)(v59 + 48));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
                      v2 = -1;
                      v43 = 0;
                    }
                    MpPlaySettleMonsterKillNumParam::~MpPlaySettleMonsterKillNumParam((MpPlaySettleMonsterKillNumParam *const)(v59 + 384));
                    if ( v43 != 1 )
                      goto LABEL_101;
                  }
                }
              }
              std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
            }
            BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v59 + 320));
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v59 + 320)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play_battle.cpp",
                "onBattleInit",
                165);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
              v2 = -1;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start);
              p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start)->design_config.txt_config_mgr.mp_play_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->entry_id_);
              }
              entry_id = this->entry_id_;
              entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(
                                   p_mp_play_config_mgr,
                                   entry_id);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start);
              if ( entry_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&this->state_, entry_id, (_BYTE)this + 104);
                }
                this->state_ = SCENE_PLAY_BATTLE_INIT;
                if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->type_);
                }
                if ( this->type_ == Direct )
                {
                  v47 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v59 + 224));
                  if ( BaseScenePlayBattle::isPlayerInBattleArea(this, v47, 0) )
                    BaseScenePlayBattle::onBattlePrepare(this);
                }
                if ( std::operator!=<UnixTimer>(0LL, &this->player_count_timer_ptr_) )
                {
                  v49 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
                  if ( common::tools::MiTimer::isActive(v49) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/scene_play/base_scene_play_battle.cpp",
                      "onBattleInit",
                      184);
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                      (const char (*)[36])"[SCENE_PLAY_BATTLE] timer is active");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
                    v51 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
                    common::tools::MiTimer::cancel(v51);
                  }
                }
                std::enable_shared_from_this<BaseScenePlayBattle>::shared_from_this((std::enable_shared_from_this<BaseScenePlayBattle> *const)&v70.event_center_.context_.pending_que_);
                std::weak_ptr<BaseScenePlayBattle>::weak_ptr<BaseScenePlayBattle,void>(
                  (std::weak_ptr<BaseScenePlayBattle> *const)(v59 + 352),
                  (const std::shared_ptr<BaseScenePlayBattle> *)&v70.event_center_.context_.pending_que_);
                std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)&v70.event_center_.context_.pending_que_);
                std::weak_ptr<BaseScenePlayBattle>::weak_ptr(
                  (std::weak_ptr<BaseScenePlayBattle> *const)&v70.event_center_.context_.pending_que_,
                  (const std::weak_ptr<BaseScenePlayBattle> *)(v59 + 352));
                common::tools::perf::make_shared<UnixTimer,BaseScenePlayBattle::onBattleInit(ScenePlayBattleType)::{lambda(unsigned long)#1}>(
                  (BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *)&v70.event_center_.context_.pending_que_.c._M_impl._M_start,
                  (BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *)&v70.event_center_.context_.pending_que_);
                std::shared_ptr<UnixTimer>::operator=(
                  &this->player_count_timer_ptr_,
                  (std::shared_ptr<UnixTimer> *)&v70.event_center_.context_.pending_que_.c._M_impl._M_start);
                std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&v70.event_center_.context_.pending_que_.c._M_impl._M_start);
                BaseScenePlayBattle::onBattleInit(ScenePlayBattleType)::{lambda(unsigned long)#1}::~ScenePlayBattleType((BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *const)&v70.event_center_.context_.pending_que_);
                if ( std::operator==<UnixTimer>(0LL, &this->player_count_timer_ptr_) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/scene_play/base_scene_play_battle.cpp",
                    "onBattleInit",
                    184);
                  common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                    (const char (*)[44])"[SCENE_PLAY_BATTLE] create UnixTimer failed");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
                  v2 = -1;
                }
                else
                {
                  v52 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
                  v53 = v52;
                  if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v52);
                  v54 = (unsigned __int64)(v53->_vptr_MiTimer + 2);
                  if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
                    v54 = __asan_report_load8(v53->_vptr_MiTimer + 2);
                  v55 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, __int64, const char *, const char *, __int64, __int64, __int64))v54;
                  SceneId = BaseScenePlayBattle::getSceneId(this);
                  LODWORD(v57) = BaseScenePlayBattle::getOwnerUid(this);
                  if ( v55(
                         v53,
                         5LL,
                         1LL,
                         "./src/player/scene_play/base_scene_play_battle.cpp",
                         "onBattleInit",
                         184LL,
                         v57,
                         SceneId) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/scene_play/base_scene_play_battle.cpp",
                      "onBattleInit",
                      184);
                    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                      (const char (*)[40])"[SCENE_PLAY_BATTLE] timer startS failed");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
                    v2 = -1;
                  }
                  else
                  {
                    v2 = 0;
                  }
                }
                std::weak_ptr<BaseScenePlayBattle>::~weak_ptr((std::weak_ptr<BaseScenePlayBattle> *const)(v59 + 352));
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/scene_play/base_scene_play_battle.cpp",
                  "onBattleInit",
                  172);
                v46 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                        (common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize,
                        (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &this->entry_id_);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v70.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize);
                v2 = -1;
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v59 + 320));
LABEL_101:
            std::weak_ptr<BaseScenePlayBattle>::~weak_ptr((std::weak_ptr<BaseScenePlayBattle> *const)(v59 + 288));
            std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v59 + 256));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v59 + 224));
        }
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v59 + 192));
    }
    std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v59 + 160));
  }
  result = v2;
  if ( v71 == (char *)v59 )
  {
    *(_QWORD *)((v59 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v59 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v59 = 1172321806LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v59 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 184: range 0000000014F6B004-0000000014F6B029
void __cdecl BaseScenePlayBattle::onBattleInit(ScenePlayBattleType)::{lambda(unsigned long)#1}::ScenePlayBattleType(
        BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *const this,
        BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&this->__battle_wtr, &a2->__battle_wtr);
};

// Line 184: range 0000000014F6CD2E-0000000014F6CD53
void __cdecl BaseScenePlayBattle::onBattleInit(ScenePlayBattleType)::{lambda(unsigned long)#1}::ScenePlayBattleType(
        BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *const this,
        const BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&this->__battle_wtr, &a2->__battle_wtr);
};

// Line 184: range 0000000014EDCDF4-0000000014EDCFA5
void __cdecl BaseScenePlayBattle::onBattleInit(ScenePlayBattleType)::{lambda(unsigned long)#1}::operator()(
        const BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseScenePlayBattle *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 battle_ptr:184";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onBattleInit(ScenePlayBattleType)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseScenePlayBattle>::lock((const std::weak_ptr<BaseScenePlayBattle> *const)(v2 + 32));
  if ( std::operator==<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "operator()",
      184);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v6,
      (const char (*)[60])"[SCENE_PLAY_BATTLE] battle_ptr is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseScenePlayBattle::onPlayerCountTimer(v5, now_ms);
  }
  std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 184: range 0000000014EDCFA6-0000000014EDCFC0
void __cdecl BaseScenePlayBattle::onBattleInit(ScenePlayBattleType)::{lambda(unsigned long)#1}::~ScenePlayBattleType(
        BaseScenePlayBattle::onBattleInit::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseScenePlayBattle>::~weak_ptr(&this->__battle_wtr);
};

// Line 191: range 0000000014EDEBFE-0000000014EDF887
int32_t __cdecl BaseScenePlayBattle::onBattlePrepare(BaseScenePlayBattle *const this)
{
  unsigned __int64 p_pending_que; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  __int64 entry_id; // rsi
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  uint32_t v10; // ecx
  char v11; // dl
  bool v12; // dl
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 p_log_cut_time; // rax
  Player *v18; // rax
  int32_t result; // eax
  __int64 OwnerUid; // [rsp-10h] [rbp-180h]
  uint32_t SceneId; // [rsp+14h] [rbp-15Ch]
  unsigned int (__fastcall *v22)(common::milog::MiLogStream *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, _QWORD); // [rsp+18h] [rbp-158h]
  common::milog::MiLogStream *v23; // [rsp+20h] [rbp-150h]
  common::milog::MiLogStream *v24; // [rsp+20h] [rbp-150h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // [rsp+20h] [rbp-150h]
  common::milog::MiLogStream *EventComp; // [rsp+20h] [rbp-150h]
  unsigned int val; // [rsp+30h] [rbp-140h] BYREF
  uint32_t prepare_time; // [rsp+34h] [rbp-13Ch]
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+38h] [rbp-138h]
  BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> v30; // [rsp+40h] [rbp-130h] BYREF
  PlayerEventComp v31; // [rsp+50h] [rbp-120h] BYREF

  p_pending_que = (unsigned __int64)&v31.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "5 32 16 14 battle_wtr:216 64 16 13 world_ptr:222 96 16 20 owner_player_ptr:232 128 16"
                                   " 12 self_ptr:240 160 16 12 self_wtr:241";
  *(_QWORD *)(p_pending_que + 16) = BaseScenePlayBattle::onBattlePrepare;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v31._M_weak_this._M_refcount,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onBattlePrepare",
    192);
  v23 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount,
          (const char (*)[42])"[SCENE_PLAY_BATTLE] onBattlePrepare uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == SCENE_PLAY_BATTLE_INIT )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_id = this->entry_id_;
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, entry_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v31);
    if ( entry_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->state_, entry_id, (_BYTE)this + 104);
      }
      this->state_ = SCENE_PLAY_BATTLE_PREPARE;
      BaseScenePlayBattle::notifyGroupBattleState(this);
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->prepare_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)entry_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->prepare_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&entry_config_ptr->prepare_time);
      }
      prepare_time = entry_config_ptr->prepare_time;
      v9 = (((_BYTE)this + 68) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->type_);
      }
      if ( this->type_ == Direct )
      {
        if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->single_prepare_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->single_prepare_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&entry_config_ptr->single_prepare_time);
        }
        if ( entry_config_ptr->single_prepare_time )
          prepare_time = entry_config_ptr->single_prepare_time;
      }
      v10 = common::tools::TimeUtils::getNow() + prepare_time;
      v11 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v11 != 0;
      v12 = v11 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v11;
      if ( v12 )
        __asan_report_store4(&this->prepare_end_time_, v9, v12);
      this->prepare_end_time_ = v10;
      if ( std::operator!=<UnixTimer>(0LL, &this->ready_timer_ptr_) )
      {
        v13 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ready_timer_ptr_);
        if ( common::tools::MiTimer::isActive(v13) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v31._M_weak_this._M_refcount,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "onBattlePrepare",
            216);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount,
            (const char (*)[36])"[SCENE_PLAY_BATTLE] timer is active");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount);
          v15 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ready_timer_ptr_);
          common::tools::MiTimer::cancel(v15);
        }
      }
      std::enable_shared_from_this<BaseScenePlayBattle>::shared_from_this((std::enable_shared_from_this<BaseScenePlayBattle> *const)&v31);
      std::weak_ptr<BaseScenePlayBattle>::weak_ptr<BaseScenePlayBattle,void>(
        (std::weak_ptr<BaseScenePlayBattle> *const)(p_pending_que + 32),
        (const std::shared_ptr<BaseScenePlayBattle> *)&v31);
      std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)&v31);
      std::weak_ptr<BaseScenePlayBattle>::weak_ptr(
        (std::weak_ptr<BaseScenePlayBattle> *const)&v31,
        (const std::weak_ptr<BaseScenePlayBattle> *)(p_pending_que + 32));
      common::tools::perf::make_shared<UnixTimer,BaseScenePlayBattle::onBattlePrepare(void)::{lambda(unsigned long)#1}>(
        &v30,
        (BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> *)&v31);
      std::shared_ptr<UnixTimer>::operator=(&this->ready_timer_ptr_, (std::shared_ptr<UnixTimer> *)&v30);
      std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&v30);
      BaseScenePlayBattle::onBattlePrepare(void)::{lambda(unsigned long)#1}::~onBattlePrepare((BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> *const)&v31);
      if ( std::operator==<UnixTimer>(0LL, &this->ready_timer_ptr_) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v31._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onBattlePrepare",
          216);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          (common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount,
          (const char (*)[44])"[SCENE_PLAY_BATTLE] create UnixTimer failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount);
        v5 = -1;
      }
      else
      {
        v16 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ready_timer_ptr_);
        v24 = (common::milog::MiLogStream *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v16);
        p_log_cut_time = (unsigned __int64)&v24->log_->log_cut_time_;
        if ( *(_BYTE *)((p_log_cut_time >> 3) + 0x7FFF8000) )
          p_log_cut_time = __asan_report_load8(&v24->log_->log_cut_time_);
        v22 = *(unsigned int (__fastcall **)(common::milog::MiLogStream *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, _QWORD))p_log_cut_time;
        SceneId = BaseScenePlayBattle::getSceneId(this);
        OwnerUid = BaseScenePlayBattle::getOwnerUid(this);
        if ( v22(
               v24,
               prepare_time,
               0LL,
               "./src/player/scene_play/base_scene_play_battle.cpp",
               "onBattlePrepare",
               216LL,
               OwnerUid,
               SceneId) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v31._M_weak_this._M_refcount,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "onBattlePrepare",
            216);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            (common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount,
            (const char (*)[40])"[SCENE_PLAY_BATTLE] timer startS failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount);
          v5 = -1;
        }
        else
        {
          BaseScenePlayBattle::broadcastBattleInfo(this);
          BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(p_pending_que + 64));
          if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(p_pending_que + 64)) )
          {
            v25 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_pending_que + 64));
            std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::onBattlePrepare(void)::{lambda(Player &)#2},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v31._M_weak_this._M_refcount,
              (BaseScenePlayBattle::onBattlePrepare::<lambda(Player&)>)this);
            World::foreachPlayer(v25, (std::function<ForeachPolicy(Player&)> *)&v31._M_weak_this._M_refcount);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v31._M_weak_this._M_refcount);
          }
          BaseScenePlayBattle::getOwnerPlayer((const BaseScenePlayBattle *const)(p_pending_que + 96));
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(p_pending_que + 96)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v31._M_weak_this._M_refcount,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/scene_play/base_scene_play_battle.cpp",
              "onBattlePrepare",
              235);
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount,
              (const char (*)[42])"[SCENE_PLAY_BATTLE] getOwnerPlayer failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount);
            v5 = -1;
          }
          else
          {
            toThisPtr<BaseScenePlayBattle>((BaseScenePlayBattle *)(p_pending_que + 128));
            std::weak_ptr<BaseScenePlayBattle>::weak_ptr<BaseScenePlayBattle,void>(
              (std::weak_ptr<BaseScenePlayBattle> *const)(p_pending_que + 160),
              (const std::shared_ptr<BaseScenePlayBattle> *)(p_pending_que + 128));
            if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->player_count_obs_wtr_) )
            {
              v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_pending_que + 96));
              EventComp = (common::milog::MiLogStream *)Player::getEventComp(v18);
              std::weak_ptr<BaseScenePlayBattle>::weak_ptr(
                &v30.__battle_wtr,
                (const std::weak_ptr<BaseScenePlayBattle> *)(p_pending_que + 160));
              PlayerEventComp::registerObserver<BaseScenePlayBattle,WorldPlayerChangeEvent>(
                &v31,
                (std::weak_ptr<BaseScenePlayBattle> *)EventComp,
                (void (*)(BaseScenePlayBattle *, const WorldPlayerChangeEvent *))&v30);
              std::weak_ptr<Observer>::operator=(&this->player_count_obs_wtr_, (std::weak_ptr<Observer> *)&v31);
              std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v31);
              std::weak_ptr<BaseScenePlayBattle>::~weak_ptr(&v30.__battle_wtr);
            }
            v5 = 0;
            std::weak_ptr<BaseScenePlayBattle>::~weak_ptr((std::weak_ptr<BaseScenePlayBattle> *const)(p_pending_que + 160));
            std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(p_pending_que + 128));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_pending_que + 96));
          std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(p_pending_que + 64));
        }
      }
      std::weak_ptr<BaseScenePlayBattle>::~weak_ptr((std::weak_ptr<BaseScenePlayBattle> *const)(p_pending_que + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v31._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "onBattlePrepare",
        202);
      v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             (common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount,
             (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount);
      v5 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v31._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "onBattlePrepare",
      195);
    v4 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           (common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount,
           (const char (*)[43])"[SCENE_PLAY_BATTLE] state invalid, state: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    val = this->state_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31._M_weak_this._M_refcount);
    v5 = -1;
  }
  result = v5;
  if ( &v31.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 216: range 0000000014F6B29C-0000000014F6B2C1
void __cdecl BaseScenePlayBattle::onBattlePrepare(void)::{lambda(unsigned long)#1}::onBattlePrepare(
        BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> *const this,
        BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&this->__battle_wtr, &a2->__battle_wtr);
};

// Line 216: range 0000000014F6CF10-0000000014F6CF35
void __cdecl BaseScenePlayBattle::onBattlePrepare(void)::{lambda(unsigned long)#1}::onBattlePrepare(
        BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> *const this,
        const BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&this->__battle_wtr, &a2->__battle_wtr);
};

// Line 216: range 0000000014EDE99A-0000000014EDEB4B
void __cdecl BaseScenePlayBattle::onBattlePrepare(void)::{lambda(unsigned long)#1}::operator()(
        const BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseScenePlayBattle *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 battle_ptr:216";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onBattlePrepare(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseScenePlayBattle>::lock((const std::weak_ptr<BaseScenePlayBattle> *const)(v2 + 32));
  if ( std::operator==<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "operator()",
      216);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v6,
      (const char (*)[60])"[SCENE_PLAY_BATTLE] battle_ptr is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseScenePlayBattle::onBattleReadyTimer(v5, now_ms);
  }
  std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 216: range 0000000014EDEB4C-0000000014EDEB66
void __cdecl BaseScenePlayBattle::onBattlePrepare(void)::{lambda(unsigned long)#1}::~onBattlePrepare(
        BaseScenePlayBattle::onBattlePrepare::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseScenePlayBattle>::~weak_ptr(&this->__battle_wtr);
};

// Line 225: range 0000000014EDEB68-0000000014EDEBFD
ForeachPolicy __cdecl BaseScenePlayBattle::onBattlePrepare(void)::{lambda(Player &)#2}::operator()(
        const BaseScenePlayBattle::onBattlePrepare::<lambda(Player&)> *const __closure,
        Player *player)
{
  BaseScenePlayBattle *this; // rbx
  PlayerPtr p_player_ptr; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  toThisPtr<Player>((Player *)&p_player_ptr);
  BaseScenePlayBattle::onPlayerJoin(this, &p_player_ptr, 0);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  return 0;
};

// Line 251: range 0000000014EDF888-0000000014EDFA78
int32_t __cdecl BaseScenePlayBattle::onBattleReady(BaseScenePlayBattle *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rcx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onBattleReady",
    252);
  v1 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v5,
         (const char (*)[40])"[SCENE_PLAY_BATTLE] onBattleReady uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == SCENE_PLAY_BATTLE_PREPARE )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->state_, &val, (_BYTE)this + 104);
    }
    this->state_ = SCENE_PLAY_BATTLE_READY;
    BaseScenePlayBattle::notifyGroupBattleState(this);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "onBattleReady",
      255);
    v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v5,
           (const char (*)[43])"[SCENE_PLAY_BATTLE] state invalid, state: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    val = this->state_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
};

// Line 265: range 0000000014EDFE7C-0000000014EE0843
int32_t __cdecl BaseScenePlayBattle::onBattlePrestart(
        BaseScenePlayBattle *const this,
        const ScenePlayBattleParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  char *v8; // rsi
  Scene *v10; // r14
  Scene *v11; // rax
  int Now; // edi
  __int64 v13; // rsi
  uint32_t v14; // ecx
  char v15; // al
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  unsigned __int64 v21; // rax
  __int64 SceneId; // r15
  __int64 OwnerUid; // rcx
  int32_t result; // eax
  unsigned int (__fastcall *v25)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, __int64); // [rsp+8h] [rbp-198h]
  unsigned int val; // [rsp+2Ch] [rbp-174h] BYREF
  std::enable_shared_from_this<BaseScenePlayBattle> v29; // [rsp+30h] [rbp-170h] BYREF
  BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> v30; // [rsp+40h] [rbp-160h] BYREF
  BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> p___f; // [rsp+50h] [rbp-150h] BYREF
  common::milog::MiLogStream v32; // [rsp+70h] [rbp-130h] BYREF
  char v33[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 13 scene_ptr:273 64 16 14 battle_wtr:294 96 24 17 notify_id_vec:276 160 32 12 add_func:277";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onBattlePrestart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onBattlePrestart",
    266);
  v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v32,
         (const char (*)[43])"[SCENE_PLAY_BATTLE] onBattlePrestart uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v32);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == SCENE_PLAY_BATTLE_READY )
  {
    BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v2 + 32));
    v8 = (char *)(v2 + 32);
    if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32))
      && BaseScenePlayBattle::getPlayTeamEntityGadgetId(this) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
      *(_QWORD *)(v2 + 160) = this;
      std::shared_ptr<Scene>::shared_ptr(
        (std::shared_ptr<Scene> *const)(v2 + 168),
        (const std::shared_ptr<Scene> *)(v2 + 32));
      *(_QWORD *)(v2 + 184) = v2 + 96;
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1}::Player(
        &p___f,
        (const BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> *)(v2 + 160));
      std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v32,
        &p___f);
      Scene::foreachPlayer(v10, (std::function<ForeachPolicy(Player&)> *)&v32);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v32);
      BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1}::~Player(&p___f);
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v8 = (char *)(v2 + 96);
      Scene::notifyPlayTeamEntity(v11, (const std::vector<unsigned int> *)(v2 + 96));
      BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1}::~Player((BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> *const)(v2 + 160));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->state_, v8, (_BYTE)this + 104);
    }
    this->state_ = SCENE_PLAY_BATTLE_PRESTART;
    ScenePlayBattleParam::operator=(&this->battle_param_, param);
    Now = common::tools::TimeUtils::getNow();
    v13 = (((_BYTE)this - 124) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->battle_param_.start_cd >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_param_.start_cd >> 3)
                                                           + 0x7FFF8000) )
    {
      Now = (_DWORD)this + 132;
      __asan_report_load4(&this->battle_param_.start_cd);
    }
    v14 = Now + this->battle_param_.start_cd;
    v15 = *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v13) = v15 != 0;
      __asan_report_store4(&this->start_time_, v13, (_BYTE)this + 112);
    }
    this->start_time_ = v14;
    if ( std::operator!=<UnixTimer>(0LL, &this->start_timer_ptr_) )
    {
      v16 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
      if ( common::tools::MiTimer::isActive(v16) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onBattlePrestart",
          294);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v32,
          (const char (*)[36])"[SCENE_PLAY_BATTLE] timer is active");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v18 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
        common::tools::MiTimer::cancel(v18);
      }
    }
    std::enable_shared_from_this<BaseScenePlayBattle>::shared_from_this(&v29);
    std::weak_ptr<BaseScenePlayBattle>::weak_ptr<BaseScenePlayBattle,void>(
      (std::weak_ptr<BaseScenePlayBattle> *const)(v2 + 64),
      (const std::shared_ptr<BaseScenePlayBattle> *)&v29);
    std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)&v29);
    std::weak_ptr<BaseScenePlayBattle>::weak_ptr(
      &v29._M_weak_this,
      (const std::weak_ptr<BaseScenePlayBattle> *)(v2 + 64));
    common::tools::perf::make_shared<UnixTimer,BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(unsigned long)#2}>(
      &v30,
      (BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> *)&v29);
    std::shared_ptr<UnixTimer>::operator=(&this->start_timer_ptr_, (std::shared_ptr<UnixTimer> *)&v30);
    std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&v30);
    BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(unsigned long)#2}::~ScenePlayBattleParam((BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> *const)&v29);
    if ( std::operator==<UnixTimer>(0LL, &this->start_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "onBattlePrestart",
        294);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        &v32,
        (const char (*)[44])"[SCENE_PLAY_BATTLE] create UnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v7 = -1;
    }
    else
    {
      v19 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v19);
      v21 = (unsigned __int64)(v20->_vptr_MiTimer + 2);
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8(v20->_vptr_MiTimer + 2);
      v25 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, __int64))v21;
      SceneId = BaseScenePlayBattle::getSceneId(this);
      OwnerUid = BaseScenePlayBattle::getOwnerUid(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->battle_param_.start_cd >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_param_.start_cd >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->battle_param_.start_cd);
      }
      if ( v25(
             v20,
             this->battle_param_.start_cd,
             0LL,
             "./src/player/scene_play/base_scene_play_battle.cpp",
             "onBattlePrestart",
             294LL,
             OwnerUid,
             SceneId) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onBattlePrestart",
          294);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          &v32,
          (const char (*)[40])"[SCENE_PLAY_BATTLE] timer startS failed");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v7 = -1;
      }
      else
      {
        BaseScenePlayBattle::notifyGroupBattleState(this);
        BaseScenePlayBattle::broadcastBattleInfo(this);
        v7 = 0;
      }
    }
    std::weak_ptr<BaseScenePlayBattle>::~weak_ptr((std::weak_ptr<BaseScenePlayBattle> *const)(v2 + 64));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "onBattlePrestart",
      269);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v32,
           (const char (*)[43])"[SCENE_PLAY_BATTLE] state invalid, state: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    val = this->state_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v7 = -1;
  }
  result = v7;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 277: range 0000000014EDFA7A-0000000014EDFBB5
ForeachPolicy __cdecl BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1}::operator()(
        const BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 entity_id:279";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  *(_DWORD *)(v2 + 32) = BaseScenePlayBattle::createPlayTeamEntity(__closure->__this, player);
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify_id_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__notify_id_vec);
    std::vector<unsigned int>::push_back(
      __closure->__notify_id_vec,
      (const std::vector<unsigned int>::value_type *)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
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

// Line 277: range 0000000014F5B256-0000000014F5B32D
void __cdecl BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1}::Player(
        BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> *const this,
        BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> *a2)
{
  BaseScenePlayBattle *v2; // rdx
  std::vector<unsigned int> *notify_id_vec; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  std::shared_ptr<Scene>::shared_ptr(&this->__scene_ptr, &a2->__scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__notify_id_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__notify_id_vec);
  notify_id_vec = a2->__notify_id_vec;
  if ( *(_BYTE *)(((unsigned __int64)&this->__notify_id_vec >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__notify_id_vec, &a2->__scene_ptr);
  this->__notify_id_vec = notify_id_vec;
};

// Line 277: range 0000000014EDFBD6-0000000014EDFCAD
void __cdecl BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1}::Player(
        BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> *const this,
        const BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> *a2)
{
  BaseScenePlayBattle *v2; // rdx
  std::vector<unsigned int> *notify_id_vec; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  std::shared_ptr<Scene>::shared_ptr(&this->__scene_ptr, &a2->__scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__notify_id_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__notify_id_vec);
  notify_id_vec = a2->__notify_id_vec;
  if ( *(_BYTE *)(((unsigned __int64)&this->__notify_id_vec >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__notify_id_vec, &a2->__scene_ptr);
  this->__notify_id_vec = notify_id_vec;
};

// Line 277: range 0000000014EDFBB6-0000000014EDFBD4
void __cdecl BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(Player &)#1}::~Player(
        BaseScenePlayBattle::onBattlePrestart::<lambda(Player&)> *const this)
{
  std::shared_ptr<Scene>::~shared_ptr(&this->__scene_ptr);
};

// Line 294: range 0000000014F6B534-0000000014F6B559
void __cdecl BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(unsigned long)#2}::ScenePlayBattleParam(
        BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> *const this,
        BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&this->__battle_wtr, &a2->__battle_wtr);
};

// Line 294: range 0000000014F6D0F2-0000000014F6D117
void __cdecl BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(unsigned long)#2}::ScenePlayBattleParam(
        BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> *const this,
        const BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&this->__battle_wtr, &a2->__battle_wtr);
};

// Line 294: range 0000000014EDFCAE-0000000014EDFE5F
void __cdecl BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(unsigned long)#2}::operator()(
        const BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseScenePlayBattle *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 battle_ptr:294";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(unsigned long)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseScenePlayBattle>::lock((const std::weak_ptr<BaseScenePlayBattle> *const)(v2 + 32));
  if ( std::operator==<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "operator()",
      294);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v6,
      (const char (*)[60])"[SCENE_PLAY_BATTLE] battle_ptr is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseScenePlayBattle::onBattleStartTimer(v5, now_ms);
  }
  std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 294: range 0000000014EDFE60-0000000014EDFE7A
void __cdecl BaseScenePlayBattle::onBattlePrestart(ScenePlayBattleParam const&)::{lambda(unsigned long)#2}::~ScenePlayBattleParam(
        BaseScenePlayBattle::onBattlePrestart::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseScenePlayBattle>::~weak_ptr(&this->__battle_wtr);
};

// Line 303: range 0000000014EE0A12-0000000014EE10DD
int32_t __cdecl BaseScenePlayBattle::onBattleStart(BaseScenePlayBattle *const this)
{
  std::weak_ptr<BaseScenePlayBattle> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  __int64 SceneId; // r15
  __int64 OwnerUid; // rdx
  int32_t result; // eax
  unsigned int (__fastcall *v16)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, __int64); // [rsp+10h] [rbp-D0h]
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  std::weak_ptr<BaseScenePlayBattle> v18; // [rsp+30h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseScenePlayBattle> v19; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<BaseScenePlayBattle> *)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<BaseScenePlayBattle> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 14 battle_wtr:312";
  v1[1]._M_ptr = (std::__weak_ptr<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2>::element_type *)BaseScenePlayBattle::onBattleStart;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onBattleStart",
    304);
  v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v20,
         (const char (*)[40])"[SCENE_PLAY_BATTLE] onBattleStart uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == SCENE_PLAY_BATTLE_PRESTART )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->state_, &val, (_BYTE)this + 104);
    }
    this->state_ = SCENE_PLAY_BATTLE_START;
    if ( std::operator!=<UnixTimer>(0LL, &this->stop_timer_ptr_) )
    {
      v7 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
      if ( common::tools::MiTimer::isActive(v7) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onBattleStart",
          312);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v20,
          (const char (*)[36])"[SCENE_PLAY_BATTLE] timer is active");
        common::milog::MiLogStream::~MiLogStream(&v20);
        v9 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
        common::tools::MiTimer::cancel(v9);
      }
    }
    std::enable_shared_from_this<BaseScenePlayBattle>::shared_from_this(&v19);
    std::weak_ptr<BaseScenePlayBattle>::weak_ptr<BaseScenePlayBattle,void>(
      v1 + 2,
      (const std::shared_ptr<BaseScenePlayBattle> *)&v19);
    std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)&v19);
    std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&v18, v1 + 2);
    common::tools::perf::make_shared<UnixTimer,BaseScenePlayBattle::onBattleStart(void)::{lambda(unsigned long)#1}>(
      (BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *)&v19,
      (BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *)&v18);
    std::shared_ptr<UnixTimer>::operator=(&this->stop_timer_ptr_, (std::shared_ptr<UnixTimer> *)&v19);
    std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&v19);
    BaseScenePlayBattle::onBattleStart(void)::{lambda(unsigned long)#1}::~onBattleStart((BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *const)&v18);
    if ( std::operator==<UnixTimer>(0LL, &this->stop_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "onBattleStart",
        312);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        &v20,
        (const char (*)[44])"[SCENE_PLAY_BATTLE] create UnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v12 = (unsigned __int64)(v11->_vptr_MiTimer + 2);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v11->_vptr_MiTimer + 2);
      v16 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, __int64))v12;
      SceneId = BaseScenePlayBattle::getSceneId(this);
      OwnerUid = BaseScenePlayBattle::getOwnerUid(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->battle_param_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->battle_param_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->battle_param_);
      }
      if ( v16(
             v11,
             this->battle_param_.duration,
             0LL,
             "./src/player/scene_play/base_scene_play_battle.cpp",
             "onBattleStart",
             312LL,
             OwnerUid,
             SceneId) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onBattleStart",
          312);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          &v20,
          (const char (*)[40])"[SCENE_PLAY_BATTLE] timer startS failed");
        common::milog::MiLogStream::~MiLogStream(&v20);
        v6 = -1;
      }
      else
      {
        BaseScenePlayBattle::notifyGroupBattleState(this);
        BaseScenePlayBattle::broadcastBattleInfo(this);
        v6 = 0;
      }
    }
    std::weak_ptr<BaseScenePlayBattle>::~weak_ptr(v1 + 2);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "onBattleStart",
      307);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v20,
           (const char (*)[43])"[SCENE_PLAY_BATTLE] state invalid, state: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    val = this->state_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = -1;
  }
  result = v6;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 312: range 0000000014F6B7CC-0000000014F6B7F1
void __cdecl BaseScenePlayBattle::onBattleStart(void)::{lambda(unsigned long)#1}::onBattleStart(
        BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *const this,
        BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&this->__battle_wtr, &a2->__battle_wtr);
};

// Line 312: range 0000000014F6D2D4-0000000014F6D2F9
void __cdecl BaseScenePlayBattle::onBattleStart(void)::{lambda(unsigned long)#1}::onBattleStart(
        BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *const this,
        const BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseScenePlayBattle>::weak_ptr(&this->__battle_wtr, &a2->__battle_wtr);
};

// Line 312: range 0000000014EE0844-0000000014EE09F5
void __cdecl BaseScenePlayBattle::onBattleStart(void)::{lambda(unsigned long)#1}::operator()(
        const BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseScenePlayBattle *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 battle_ptr:312";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onBattleStart(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseScenePlayBattle>::lock((const std::weak_ptr<BaseScenePlayBattle> *const)(v2 + 32));
  if ( std::operator==<BaseScenePlayBattle>(0LL, (const std::shared_ptr<BaseScenePlayBattle> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "operator()",
      312);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v6,
      (const char (*)[60])"[SCENE_PLAY_BATTLE] battle_ptr is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseScenePlayBattle::onBattleStopTimer(v5, now_ms);
  }
  std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 312: range 0000000014EE09F6-0000000014EE0A10
void __cdecl BaseScenePlayBattle::onBattleStart(void)::{lambda(unsigned long)#1}::~onBattleStart(
        BaseScenePlayBattle::onBattleStart::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseScenePlayBattle>::~weak_ptr(&this->__battle_wtr);
};

// Line 321: range 0000000014EE134A-0000000014EE19C4
int32_t __cdecl BaseScenePlayBattle::onBattleStop(
        BaseScenePlayBattle *const this,
        ScenePlayBattleStopReason stop_reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rsi
  unsigned int *v9; // r9
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  int32_t result; // eax
  BaseScenePlayBattle::onBattleStop::<lambda(Player&)>_0 v13; // [rsp-20h] [rbp-1C0h]
  bool *v14; // [rsp+0h] [rbp-1A0h]
  BaseScenePlayBattle *thisa; // [rsp+8h] [rbp-198h]
  uint32_t now; // [rsp+18h] [rbp-188h]
  uint32_t score; // [rsp+1Ch] [rbp-184h]
  std::shared_ptr<ScenePlayBattleSettleEvent> v18; // [rsp+20h] [rbp-180h] BYREF
  BaseScenePlayBattle::onBattleStop::<lambda(Player&)>_0 __f; // [rsp+30h] [rbp-170h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-150h] BYREF
  char v21[304]; // [rsp+70h] [rbp-130h] BYREF

  thisa = this;
  HIDWORD(v14) = stop_reason;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 10 is_win:322 48 4 13 cost_time:326 64 16 13 world_ptr:333 96 16 13 event_ptr:336 128 88 10 notify:347";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onBattleStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  *(_BYTE *)(v2 + 32) = stop_reason == Win;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onBattleStop",
    323);
  v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
         &v20,
         (const char (*)[39])"[SCENE_PLAY_BATTLE] onBattleStop uid: ");
  *(_DWORD *)(v2 + 48) = BaseScenePlayBattle::getOwnerUid(this);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" ,is_win: ");
  v8 = *(unsigned __int8 *)(v2 + 32);
  common::milog::MiLogStream::operator<<(v7, v8);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_, v8, (_BYTE)this + 104);
  }
  this->state_ = SCENE_PLAY_BATTLE_STOP;
  *(_DWORD *)(v2 + 48) = 0;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_time_);
  }
  if ( this->start_time_ && now > this->start_time_ )
    *(_DWORD *)(v2 + 48) = now - this->start_time_;
  BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v2 + 64));
  if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
  {
    common::tools::perf::make_shared<ScenePlayBattleSettleEvent,unsigned int &,unsigned int &,bool &,unsigned int &>(
      (unsigned int *)(v2 + 96),
      &this->play_id_,
      (bool *)&this->play_type_,
      (unsigned int *)(v2 + 32),
      (unsigned int *)(v2 + 48),
      v9,
      v14,
      (unsigned int *)this);
    v10 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::shared_ptr<ScenePlayBattleSettleEvent>::shared_ptr(
      &v18,
      (const std::shared_ptr<ScenePlayBattleSettleEvent> *)(v2 + 96));
    std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::onBattleStop(ScenePlayBattleStopReason)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v20,
      (BaseScenePlayBattle::onBattleStop::<lambda(Player&)> *)&v18);
    World::foreachPlayer(v10, (std::function<ForeachPolicy(Player&)> *)&v20);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v20);
    BaseScenePlayBattle::onBattleStop(ScenePlayBattleStopReason)::{lambda(Player &)#1}::~Player((BaseScenePlayBattle::onBattleStop::<lambda(Player&)> *const)&v18);
    std::shared_ptr<ScenePlayBattleSettleEvent>::~shared_ptr((std::shared_ptr<ScenePlayBattleSettleEvent> *const)(v2 + 96));
  }
  score = BaseScenePlayBattle::calcBattleScore(thisa, *(_BYTE *)(v2 + 32), *(_DWORD *)(v2 + 48));
  BaseScenePlayBattle::calcPlayerBattleStat(thisa);
  BaseScenePlayBattle::notifyGroupBattleResult(thisa, SHIDWORD(v14));
  proto::ScenePlayBattleResultNotify::ScenePlayBattleResultNotify((proto::ScenePlayBattleResultNotify *const)(v2 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->play_id_);
  }
  proto::ScenePlayBattleResultNotify::set_play_id(
    (proto::ScenePlayBattleResultNotify *const)(v2 + 128),
    thisa->play_id_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->play_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->play_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->play_type_);
  }
  proto::ScenePlayBattleResultNotify::set_play_type(
    (proto::ScenePlayBattleResultNotify *const)(v2 + 128),
    thisa->play_type_);
  proto::ScenePlayBattleResultNotify::set_is_win(
    (proto::ScenePlayBattleResultNotify *const)(v2 + 128),
    *(_BYTE *)(v2 + 32));
  proto::ScenePlayBattleResultNotify::set_cost_time(
    (proto::ScenePlayBattleResultNotify *const)(v2 + 128),
    *(_DWORD *)(v2 + 48));
  if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
  {
    v11 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    __f.__this = thisa;
    __f.__notify = (proto::ScenePlayBattleResultNotify *)(v2 + 128);
    __f.__is_win = *(_BYTE *)(v2 + 32);
    __f.__score = score;
    *(_QWORD *)&v13.__is_win = *(_QWORD *)&__f.__is_win;
    v13.__notify = (proto::ScenePlayBattleResultNotify *)(v2 + 128);
    v13.__this = thisa;
    std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::onBattleStop(ScenePlayBattleStopReason)::{lambda(Player &)#2},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v20,
      v13);
    World::foreachPlayer(v11, (std::function<ForeachPolicy(Player&)> *)&v20);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v20);
  }
  BaseScenePlayBattle::broadcastBattleResult(thisa, (const proto::ScenePlayBattleResultNotify *)(v2 + 128));
  BaseScenePlayBattle::onBattleClear(thisa, *(_BYTE *)(v2 + 32), *(_DWORD *)(v2 + 48));
  proto::ScenePlayBattleResultNotify::~ScenePlayBattleResultNotify((proto::ScenePlayBattleResultNotify *const)(v2 + 128));
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
  result = 0;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 337: range 0000000014EE10DE-0000000014EE1155
ForeachPolicy __cdecl BaseScenePlayBattle::onBattleStop(ScenePlayBattleStopReason)::{lambda(Player &)#1}::operator()(
        const BaseScenePlayBattle::onBattleStop::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<BaseEvent> v4; // [rsp+10h] [rbp-20h] BYREF

  EventComp = Player::getEventComp(player);
  std::shared_ptr<BaseEvent>::shared_ptr<ScenePlayBattleSettleEvent,void>(&v4, &__closure->__event_ptr);
  PlayerEventComp::notifyEvent(EventComp, &v4);
  std::shared_ptr<BaseEvent>::~shared_ptr(&v4);
  return 0;
};

// Line 337: range 0000000014F5B746-0000000014F5B76B
void __cdecl BaseScenePlayBattle::onBattleStop(ScenePlayBattleStopReason)::{lambda(Player &)#1}::Player(
        BaseScenePlayBattle::onBattleStop::<lambda(Player&)> *const this,
        BaseScenePlayBattle::onBattleStop::<lambda(Player&)> *a2)
{
  std::shared_ptr<ScenePlayBattleSettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
};

// Line 337: range 0000000014F5B836-0000000014F5B85B
void __cdecl BaseScenePlayBattle::onBattleStop(ScenePlayBattleStopReason)::{lambda(Player &)#1}::Player(
        BaseScenePlayBattle::onBattleStop::<lambda(Player&)> *const this,
        const BaseScenePlayBattle::onBattleStop::<lambda(Player&)> *a2)
{
  std::shared_ptr<ScenePlayBattleSettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
};

// Line 337: range 0000000014EE1156-0000000014EE1170
void __cdecl BaseScenePlayBattle::onBattleStop(ScenePlayBattleStopReason)::{lambda(Player &)#1}::~Player(
        BaseScenePlayBattle::onBattleStop::<lambda(Player&)> *const this)
{
  std::shared_ptr<ScenePlayBattleSettleEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 354: range 0000000014EE1172-0000000014EE1348
ForeachPolicy __cdecl BaseScenePlayBattle::onBattleStop(ScenePlayBattleStopReason)::{lambda(Player &)#2}::operator()(
        const BaseScenePlayBattle::onBattleStop::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  BaseScenePlayBattle *this; // rax
  BaseScenePlayBattle *v3; // rax
  BaseScenePlayBattle *p_score; // rdi
  uint32_t score; // ecx

  if ( *(char *)(((unsigned __int64)&__closure->__is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__closure->__is_win);
  if ( __closure->__is_win )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify >> 3) + 0x7FFF8000) )
      this = (BaseScenePlayBattle *)__asan_report_load8(&__closure->__notify);
    BaseScenePlayBattle::tryGrantReward(this, player, __closure->__notify);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v3 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify >> 3) + 0x7FFF8000) )
      v3 = (BaseScenePlayBattle *)__asan_report_load8(&__closure->__notify);
    BaseScenePlayBattle::fillPlayerBattleSettleInfo(v3, player, __closure->__notify);
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_score = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__score >> 3) + 0x7FFF8000) )
  {
    p_score = (BaseScenePlayBattle *)&__closure->__score;
    __asan_report_load4(&__closure->__score);
  }
  score = __closure->__score;
  if ( *(char *)(((unsigned __int64)&__closure->__is_win >> 3) + 0x7FFF8000) < 0 )
  {
    p_score = (BaseScenePlayBattle *)&__closure->__is_win;
    __asan_report_load1(&__closure->__is_win);
  }
  BaseScenePlayBattle::fireSettleResultEvent(p_score, player, __closure->__is_win, score);
  return 0;
};

// Line 375: range 0000000014EE19C6-0000000014EE2574
int32_t __cdecl BaseScenePlayBattle::onBattleClear(BaseScenePlayBattle *const this, bool is_win, uint32_t cost_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  const std::pair<unsigned int const,std::weak_ptr<Player> > *v7; // rax
  Player *v8; // rax
  PlayerMatchComp *MatchComp; // rax
  uint32_t MatchMpPlayId; // ecx
  Player *v11; // rax
  PlayerMatchComp *v12; // rax
  Player *v13; // rax
  PlayerEventComp *EventComp; // rax
  Player *v15; // rax
  PlayerEventComp *v16; // rax
  Player *v17; // rax
  PlayerEventComp *v18; // rax
  std::map<unsigned int,std::weak_ptr<Player>>::iterator *p_for_end; // rsi
  Scene *v20; // rcx
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  __int64 v33; // rsi
  bool v34; // dl
  __int64 v35; // rsi
  bool v36; // dl
  int32_t result; // eax
  bool is_mp; // [rsp+23h] [rbp-1BDh]
  unsigned int val; // [rsp+24h] [rbp-1BCh] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_begin; // [rsp+28h] [rbp-1B8h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>>::iterator __for_end; // [rsp+30h] [rbp-1B0h] BYREF
  std::map<unsigned int,std::weak_ptr<Player>> *__for_range; // [rsp+38h] [rbp-1A8h]
  std::map<unsigned int,std::weak_ptr<Entity>> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const std::pair<unsigned int const,std::weak_ptr<Entity> > *v45; // [rsp+48h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *uid_0; // [rsp+50h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_wtr; // [rsp+58h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<Player> > >::type *uid; // [rsp+60h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<Player> > >::type *player_wtr; // [rsp+68h] [rbp-178h]
  std::pair<unsigned int const,std::weak_ptr<Player> > __in; // [rsp+70h] [rbp-170h] BYREF
  common::milog::MiLogStream v51; // [rsp+90h] [rbp-150h] BYREF
  char v52[304]; // [rsp+B0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 16 13 world_ptr:378 80 16 20 owner_player_ptr:394 112 16 13 scene_ptr:421 144 16 14 entity_"
                        "ptr:426 176 48 14 player_map:379";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::onBattleClear;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  common::milog::MiLogStream::create(
    &v51,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onBattleClear",
    376);
  v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v51,
         (const char (*)[40])"[SCENE_PLAY_BATTLE] onBattleClear uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v51);
  BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v3 + 48));
  std::map<unsigned int,std::weak_ptr<Player>>::map(
    (std::map<unsigned int,std::weak_ptr<Player>> *const)(v3 + 176),
    &this->join_player_map_);
  is_mp = std::map<unsigned int,std::weak_ptr<Player>>::size((const std::map<unsigned int,std::weak_ptr<Player>> *const)(v3 + 176)) > 1;
  __for_range = (std::map<unsigned int,std::weak_ptr<Player>> *)(v3 + 176);
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Player>>::begin((std::map<unsigned int,std::weak_ptr<Player>> *const)(v3 + 176))._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<Player>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::weak_ptr<Player>>::pair(&__in, v7);
    uid = std::get<0ul,unsigned int const,std::weak_ptr<Player>>(&__in);
    player_wtr = std::get<1ul,unsigned int const,std::weak_ptr<Player>>(&__in);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 112));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 112)) )
    {
      std::shared_ptr<Player>::shared_ptr(
        (std::shared_ptr<Player> *const)(v3 + 144),
        (const std::shared_ptr<Player> *)(v3 + 112));
      BaseScenePlayBattle::onPlayerExit(this, (PlayerPtr *)(v3 + 144), cost_time, is_win, is_mp);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 144));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 112));
    std::pair<unsigned int const,std::weak_ptr<Player>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::weak_ptr<Player>>::clear(&this->join_player_map_);
  std::string::clear(&this->transaction_no_);
  BaseScenePlayBattle::getOwnerPlayer((const BaseScenePlayBattle *const)(v3 + 80));
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 80)) )
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    MatchComp = Player::getMatchComp(v8);
    MatchMpPlayId = PlayerMatchComp::getMatchMpPlayId(MatchComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    if ( MatchMpPlayId == this->play_id_ )
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      v12 = Player::getMatchComp(v11);
      PlayerMatchComp::cancelMatch(v12);
    }
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->player_count_obs_wtr_) )
    {
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      EventComp = Player::getEventComp(v13);
      PlayerEventComp::unregisterObserver(EventComp, &this->player_count_obs_wtr_);
      std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->player_count_obs_wtr_);
    }
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->mp_mode_obs_wtr_) )
    {
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      v16 = Player::getEventComp(v15);
      PlayerEventComp::unregisterObserver(v16, &this->mp_mode_obs_wtr_);
      std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->mp_mode_obs_wtr_);
    }
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->world_avatar_die_obs_wtr_) )
    {
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      v18 = Player::getEventComp(v17);
      PlayerEventComp::unregisterObserver(v18, &this->world_avatar_die_obs_wtr_);
      std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->world_avatar_die_obs_wtr_);
    }
  }
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v3 + 112));
  p_for_end = 0LL;
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 112), 0LL) )
  {
    __for_range_0 = &this->play_team_entity_wtr_map_;
    __for_begin._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::begin(&this->play_team_entity_wtr_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::end(__for_range_0)._M_node;
    while ( 1 )
    {
      p_for_end = &__for_end;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self *)&__for_end) )
        break;
      v45 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)&__for_begin);
      uid_0 = std::get<0ul,unsigned int const,std::weak_ptr<Entity>>(v45);
      entity_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<Entity>>(v45);
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 144));
      v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(uid_0);
      }
      Scene::delPlayTeamEntity(v20, *uid_0, (EntityPtr *)(v3 + 144));
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 144));
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)&__for_begin);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_, p_for_end, (_BYTE)this + 104);
  }
  this->state_ = SCENE_PLAY_BATTLE_NONE;
  if ( std::operator!=<UnixTimer>(0LL, &this->player_count_timer_ptr_) )
  {
    v21 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v21) )
    {
      v23 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
      common::tools::MiTimer::cancel(v23);
    }
  }
  if ( std::operator!=<UnixTimer>(0LL, &this->ready_timer_ptr_) )
  {
    v24 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ready_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v24) )
    {
      v26 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ready_timer_ptr_);
      common::tools::MiTimer::cancel(v26);
    }
  }
  if ( std::operator!=<UnixTimer>(0LL, &this->start_timer_ptr_) )
  {
    v27 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v27) )
    {
      v29 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
      common::tools::MiTimer::cancel(v29);
    }
  }
  if ( std::operator!=<UnixTimer>(0LL, &this->stop_timer_ptr_) )
  {
    v30 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v30) )
    {
      v32 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
      common::tools::MiTimer::cancel(v32);
    }
  }
  v33 = (((_BYTE)this + 108) & 7u) + 3;
  v34 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3)
                                                          + 0x7FFF8000);
  if ( v34 )
    __asan_report_store4(&this->prepare_end_time_, v33, v34);
  this->prepare_end_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time_, v33, (_BYTE)this + 112);
  }
  this->start_time_ = 0;
  v35 = (((_BYTE)this + 116) & 7u) + 3;
  v36 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
  if ( v36 )
    __asan_report_store4(&this->progress_, v35, v36);
  this->progress_ = 0;
  ScenePlayBattleParam::clear(&this->battle_param_);
  std::map<unsigned int,std::map<std::string,long>>::clear(&this->uid_value_map_);
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::clear(&this->combat_statistic_target_set_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::clear(&this->player_monster_combat_statistic_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::clear(&this->player_battle_stat_map_);
  if ( *(char *)(((unsigned __int64)&this->is_interrupting >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_interrupting, v35, &this->is_interrupting);
  this->is_interrupting = 0;
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 112));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 80));
  std::map<unsigned int,std::weak_ptr<Player>>::~map((std::map<unsigned int,std::weak_ptr<Player>> *const)(v3 + 176));
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 48));
  result = 0;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 464: range 0000000014EE2576-0000000014EE2EC7
int32_t __cdecl BaseScenePlayBattle::interruptBattle(BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int32_t v5; // r14d
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // r14
  uint32_t OwnerUid; // eax
  common::milog::MiLogStream *v13; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-118h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-110h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 13 scene_ptr:497 80 48 19 player_location:516";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::interruptBattle;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "interruptBattle",
    465);
  v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v20,
         (const char (*)[42])"[SCENE_PLAY_BATTLE] interruptBattle uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == SCENE_PLAY_BATTLE_NONE || this->state_ == SCENE_PLAY_BATTLE_STOP )
  {
    v5 = -1;
    goto LABEL_41;
  }
  if ( *(char *)(((unsigned __int64)&this->is_interrupting >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_interrupting, &val, &this->is_interrupting);
  this->is_interrupting = 1;
  BaseScenePlayBattle::notifyGroupBattleInterrupt(this);
  BaseScenePlayBattle::broadcastBattleInterrupt(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == SCENE_PLAY_BATTLE_READY
    || this->state_ == SCENE_PLAY_BATTLE_PRESTART
    || this->state_ == SCENE_PLAY_BATTLE_START )
  {
    BaseScenePlayBattle::onBattleStop(this, Interrupt);
  }
  else
  {
    BaseScenePlayBattle::onBattleClear(this, 0, 0);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( !entry_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "interruptBattle",
      493);
    v7 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v20,
           (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
    goto LABEL_41;
  }
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v1 + 48));
  if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 48), 0LL) )
    goto LABEL_39;
  if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->safe_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->safe_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&entry_config_ptr->safe_group_id);
  }
  if ( !entry_config_ptr->safe_group_id )
    goto LABEL_39;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->safe_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->safe_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&entry_config_ptr->safe_group_id);
  }
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, entry_config_ptr->safe_group_id);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( group_script_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->safe_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)entry_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->safe_config_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&entry_config_ptr->safe_config_id);
    }
    point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                group_script_config_ptr,
                                entry_config_ptr->safe_config_id);
    if ( !point_script_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "interruptBattle",
        512);
      v10 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v20,
              (const char (*)[61])"[SCENE_PLAY_BATTLE] findPointConfig failed, safe_config_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &entry_config_ptr->safe_config_id);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = -1;
      goto LABEL_40;
    }
    ScenePlayerLocation::ScenePlayerLocation((ScenePlayerLocation *const)(v1 + 80));
    if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                          + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
    }
    *(Vector3 *)(v1 + 80) = point_script_config_ptr->pos;
    if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
    }
    *(Vector3 *)(v1 + 92) = point_script_config_ptr->rot;
    *(Vector3 *)(v1 + 104) = point_script_config_ptr->pos;
    *(Vector3 *)(v1 + 116) = point_script_config_ptr->rot;
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    OwnerUid = BaseScenePlayBattle::getOwnerUid(this);
    Scene::setPlayerLocation(v11, OwnerUid, (const ScenePlayerLocation *)(v1 + 80));
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "interruptBattle",
      522);
    v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v20,
            (const char (*)[41])"[SCENE_PLAY_BATTLE] set player location:");
    val = BaseScenePlayBattle::getOwnerUid(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
LABEL_39:
    v5 = 0;
    goto LABEL_40;
  }
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "interruptBattle",
    505);
  v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
         &v20,
         (const char (*)[66])"[SCENE_PLAY_BATTLE] findGroupScriptConfig failed, safe_group_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &entry_config_ptr->safe_group_id);
  common::milog::MiLogStream::~MiLogStream(&v20);
  v5 = -1;
LABEL_40:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 48));
LABEL_41:
  result = v5;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 530: range 0000000014EE300C-0000000014EE3B96
void __cdecl BaseScenePlayBattle::onPlayerCountTimer(BaseScenePlayBattle *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v15; // rax
  Player *v16; // rax
  PlayerSceneComp *v17; // r14
  Scene *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  BaseScenePlayBattle::onPlayerCountTimer::<lambda(Player&)> v23; // [rsp-20h] [rbp-230h]
  unsigned int val; // [rsp+10h] [rbp-200h] BYREF
  uint32_t min_players; // [rsp+14h] [rbp-1FCh]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+18h] [rbp-1F8h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+20h] [rbp-1F0h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+28h] [rbp-1E8h]
  std::shared_ptr<Player> *player_ptr; // [rsp+30h] [rbp-1E0h]
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+38h] [rbp-1D8h]
  BaseScenePlayBattle::onPlayerCountTimer::<lambda(Player&)> __f; // [rsp+40h] [rbp-1D0h]
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-1B0h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-190h] BYREF
  char v34[336]; // [rsp+C0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 14 inside_cnt:553 64 12 12 born_pos:594 96 12 12 born_rot:595 128 16 13 scene_ptr:531 160"
                        " 16 13 world_ptr:538 192 16 14 avatar_ptr:609 224 24 22 outside_player_vec:554";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onPlayerCountTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v2 + 128));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "onPlayerCountTimer",
      534);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v32,
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream(&v32);
    goto LABEL_49;
  }
  BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v2 + 160));
  if ( !std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 160)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->type_);
    }
    if ( this->type_ == Direct )
    {
      v5 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      if ( World::getPlayerCount(v5) > 1 )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onPlayerCountTimer",
          548);
        common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          &v32,
          (const char (*)[54])"[SCENE_PLAY_BATTLE] interrupt battle with direct type");
        common::milog::MiLogStream::~MiLogStream(&v32);
        BaseScenePlayBattle::interruptBattle(this);
        goto LABEL_48;
      }
    }
    *(_DWORD *)(v2 + 48) = 0;
    std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 224));
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    __f.__this = this;
    __f.__inside_cnt = (uint32_t *)(v2 + 48);
    __f.__outside_player_vec = (std::vector<std::shared_ptr<Player>> *)(v2 + 224);
    v23.__outside_player_vec = (std::vector<std::shared_ptr<Player>> *)(v2 + 224);
    v23.__inside_cnt = (uint32_t *)(v2 + 48);
    v23.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::onPlayerCountTimer(unsigned long)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v32,
      v23);
    World::foreachPlayer(v7, (std::function<ForeachPolicy(Player&)> *)&v32);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v32);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    if ( this->state_ != SCENE_PLAY_BATTLE_INIT )
    {
      if ( !std::vector<std::shared_ptr<Player>>::empty((const std::vector<std::shared_ptr<Player>> *const)(v2 + 224)) )
      {
        Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
        Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
        if ( BaseScenePlayBattle::findBornPosRot(this, (Vector3 *)(v2 + 64), (Vector3 *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "onPlayerCountTimer",
            598);
          v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v32,
                  (const char (*)[52])"[SCENE_PLAY_BATTLE] findBornPosRot failed, play_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->play_id_);
          common::milog::MiLogStream::~MiLogStream(&v32);
        }
        else
        {
          __for_range = (std::vector<std::shared_ptr<Player>> *)(v2 + 224);
          __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v2 + 224))._M_current;
          __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v2 + 224))._M_current;
          while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                    &__for_begin,
                    &__for_end) )
          {
            player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
            v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
            SceneComp = Player::getSceneComp(v11);
            if ( !PlayerSceneComp::isInTransfer(SceneComp) )
            {
              v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
              if ( Player::isConnected(v13) )
              {
                v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                Player::getAvatarComp(v15);
                PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 192));
                if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 192)) )
                {
                  v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                  v17 = Player::getSceneComp(v16);
                  TransferReason::TransferReason(&p_reason, ENTER_REASON_MP_PLAY);
                  v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  LOBYTE(v17) = PlayerSceneComp::jumpToScene(
                                  v17,
                                  v18,
                                  (const Vector3 *)(v2 + 64),
                                  (const Vector3 *)(v2 + 96),
                                  0,
                                  &p_reason) != 0;
                  TransferReason::~TransferReason(&p_reason);
                  if ( (_BYTE)v17 )
                  {
                    common::milog::MiLogStream::create(
                      &v32,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/scene_play/base_scene_play_battle.cpp",
                      "onPlayerCountTimer",
                      617);
                    v19 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                            &v32,
                            (const char (*)[46])"[SCENE_PLAY_BATTLE] jumpToScene failed, uid: ");
                    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                    val = Player::getUid(v20);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
                    common::milog::MiLogStream::~MiLogStream(&v32);
                  }
                  common::milog::MiLogStream::create(
                    &v32,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/scene_play/base_scene_play_battle.cpp",
                    "onPlayerCountTimer",
                    620);
                  v21 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                          &v32,
                          (const char (*)[58])"[SCENE_PLAY_BATTLE] force trans player to born pos, uid: ");
                  v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                  val = Player::getUid(v22);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
                  common::milog::MiLogStream::~MiLogStream(&v32);
                }
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 192));
              }
            }
            __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
          }
        }
      }
      goto LABEL_47;
    }
    min_players = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->type_);
    }
    if ( this->type_ == Match )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 192));
      p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))->design_config.txt_config_mgr.mp_play_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->play_id_);
      }
      match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                           p_mp_play_config_mgr,
                           this->play_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
      if ( !match_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onPlayerCountTimer",
          577);
        v9 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
               &v32,
               (const char (*)[65])"[SCENE_PLAY_BATTLE] findMpPlayMatchExcelConfig failed, play_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->play_id_);
        common::milog::MiLogStream::~MiLogStream(&v32);
LABEL_47:
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 224));
        goto LABEL_48;
      }
      if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->min_players >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)match_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->min_players >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&match_config_ptr->min_players);
      }
      min_players = match_config_ptr->min_players;
    }
    if ( min_players <= *(_DWORD *)(v2 + 48) )
      BaseScenePlayBattle::onBattlePrepare(this);
    goto LABEL_47;
  }
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onPlayerCountTimer",
    541);
  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
    &v32,
    (const char (*)[34])"[SCENE_PLAY_BATTLE] world is null");
  common::milog::MiLogStream::~MiLogStream(&v32);
LABEL_48:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 160));
LABEL_49:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 555: range 0000000014EE2EC8-0000000014EE300A
ForeachPolicy __cdecl BaseScenePlayBattle::onPlayerCountTimer(unsigned long)::{lambda(Player &)#1}::operator()(
        const BaseScenePlayBattle::onPlayerCountTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 inside_cnt; // rax
  std::vector<std::shared_ptr<Player>> *outside_player_vec; // rbx
  std::shared_ptr<Player> v4; // rax
  std::shared_ptr<Player> v6; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( BaseScenePlayBattle::isPlayerInBattleArea(__closure->__this, player, 0) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__inside_cnt >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__inside_cnt);
    inside_cnt = (unsigned __int64)__closure->__inside_cnt;
    if ( *(_BYTE *)((inside_cnt >> 3) + 0x7FFF8000) != 0
      && (char)((inside_cnt & 7) + 3) >= *(_BYTE *)((inside_cnt >> 3) + 0x7FFF8000) )
    {
      inside_cnt = __asan_report_load4(__closure->__inside_cnt);
    }
    ++*(_DWORD *)inside_cnt;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__outside_player_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__outside_player_vec);
    outside_player_vec = __closure->__outside_player_vec;
    v4 = toThisPtr<Player>((Player *)&v6);
    std::vector<std::shared_ptr<Player>>::emplace_back<std::shared_ptr<Player>>(
      outside_player_vec,
      &v6,
      (std::shared_ptr<Player> *)v4._M_refcount._M_pi);
    std::shared_ptr<Player>::~shared_ptr(&v6);
  }
  return 0;
};

// Line 627: range 0000000014EE3B98-0000000014EE3C19
void __cdecl BaseScenePlayBattle::onBattleReadyTimer(BaseScenePlayBattle *const this, uint64_t now_ms)
{
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax

  if ( std::operator!=<UnixTimer>(0LL, &this->ready_timer_ptr_) )
  {
    v2 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ready_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v2) )
    {
      v4 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ready_timer_ptr_);
      common::tools::MiTimer::cancel(v4);
    }
  }
  BaseScenePlayBattle::onBattleReady(this);
};

// Line 636: range 0000000014EE3C1A-0000000014EE3C9B
void __cdecl BaseScenePlayBattle::onBattleStartTimer(BaseScenePlayBattle *const this, uint64_t now_ms)
{
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax

  if ( std::operator!=<UnixTimer>(0LL, &this->start_timer_ptr_) )
  {
    v2 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v2) )
    {
      v4 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
      common::tools::MiTimer::cancel(v4);
    }
  }
  BaseScenePlayBattle::onBattleStart(this);
};

// Line 645: range 0000000014EE3C9C-0000000014EE3D22
void __cdecl BaseScenePlayBattle::onBattleStopTimer(BaseScenePlayBattle *const this, uint64_t now_ms)
{
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax

  if ( std::operator!=<UnixTimer>(0LL, &this->stop_timer_ptr_) )
  {
    v2 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v2) )
    {
      v4 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
      common::tools::MiTimer::cancel(v4);
    }
  }
  BaseScenePlayBattle::onBattleStop(this, Lose);
};

// Line 654: range 0000000014EE3D24-0000000014EE43D5
int32_t __cdecl BaseScenePlayBattle::forcePlayerBackBornPos(BaseScenePlayBattle *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  PlayerSceneComp *v12; // r14
  Scene *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-118h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-110h] BYREF
  TransferReason p_reason; // [rsp+40h] [rbp-F0h] BYREF
  char v23[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 12 12 born_pos:671 64 12 12 born_rot:672 96 16 13 scene_ptr:665";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::forcePlayerBackBornPos;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ > (unsigned int)SCENE_PLAY_BATTLE_INIT )
  {
    SceneComp = Player::getSceneComp(player);
    if ( PlayerSceneComp::isInTransfer(SceneComp) || !Player::isConnected(player) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "forcePlayerBackBornPos",
        662);
      v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v21,
              (const char (*)[25])"[SCENE_PLAY_BATTLE] uid:");
      val = Player::getUid(player);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        v11,
        (const char (*)[35])" isInTransfer or isConnected false");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v7 = -1;
    }
    else
    {
      BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v2 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "forcePlayerBackBornPos",
          668);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v21,
          (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
        common::milog::MiLogStream::~MiLogStream(&v21);
        v7 = -1;
      }
      else
      {
        Vector3::Vector3((Vector3 *const)(v2 + 32), 0.0, 0.0, 0.0);
        Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
        if ( BaseScenePlayBattle::findBornPosRot(this, (Vector3 *)(v2 + 32), (Vector3 *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "forcePlayerBackBornPos",
            675);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v21,
            (const char (*)[42])"[SCENE_PLAY_BATTLE] findBornPosRot failed");
          common::milog::MiLogStream::~MiLogStream(&v21);
          v7 = -1;
        }
        else
        {
          v12 = Player::getSceneComp(player);
          TransferReason::TransferReason(&p_reason, ENTER_REASON_MP_PLAY);
          v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          ret = PlayerSceneComp::jumpToScene(
                  v12,
                  v13,
                  (const Vector3 *)(v2 + 32),
                  (const Vector3 *)(v2 + 64),
                  0,
                  &p_reason);
          TransferReason::~TransferReason(&p_reason);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/scene_play/base_scene_play_battle.cpp",
              "forcePlayerBackBornPos",
              681);
            v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v21,
                    (const char (*)[28])"[SCENE_PLAY_BATTLE] player:");
            val = Player::getUid(player);
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v15,
              (const char (*)[23])" jumpTo born pos fails");
            common::milog::MiLogStream::~MiLogStream(&v21);
          }
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "forcePlayerBackBornPos",
            683);
          v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v21,
                  (const char (*)[31])"[SCENE_PLAY_BATTLE] force uid:");
          val = Player::getUid(player);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])" goback mp_play!");
          common::milog::MiLogStream::~MiLogStream(&v21);
          v7 = ret;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "forcePlayerBackBornPos",
      657);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v21,
           (const char (*)[27])"[SCENE_PLAY_BATTLE] state:");
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    val = this->state_;
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" not support!");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v7 = -1;
  }
  result = v7;
  if ( v23 == (char *)v2 )
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

// Line 688: range 0000000014EE43D6-0000000014EE48DB
__int64 __fastcall BaseScenePlayBattle::addProgress(BaseScenePlayBattle *const this, uint32_t add_progress)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  unsigned int v7; // ecx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rsi
  bool v11; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  bool is_win; // [rsp+17h] [rbp-A9h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 old_stage:706 48 4 13 cur_stage:709 64 4 16 add_progress:687";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::addProgress;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = add_progress;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ != SCENE_PLAY_BATTLE_START )
    goto LABEL_10;
  if ( *(char *)(((unsigned __int64)&this->is_interrupting >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_interrupting);
  if ( !this->is_interrupting )
  {
    if ( *(_DWORD *)(v2 + 64) )
    {
      if ( std::vector<unsigned int>::empty(&this->battle_param_.progress_stage_vec) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "addProgress",
          702);
        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          &v22,
          (const char (*)[48])"[SCENE_PLAY_BATTLE] progress_stage_vec is empty");
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        *(_DWORD *)(v2 + 32) = BaseScenePlayBattle::getCurStage(this);
        v7 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->progress_);
        }
        v10 = v7;
        v8 = SAFE_ADD<unsigned int,unsigned int>(this->progress_, v7);
        v9 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v9 != 0;
        v11 = v9 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v9;
        if ( v11 )
          __asan_report_store4(&this->progress_, v10, v11);
        this->progress_ = v8;
        *(_DWORD *)(v2 + 48) = BaseScenePlayBattle::getCurStage(this);
        if ( *(_DWORD *)(v2 + 48) != *(_DWORD *)(v2 + 32) )
          BaseScenePlayBattle::onStageChange(this, *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 48));
        BaseScenePlayBattle::broadcastBattleInfo(this);
        is_win = BaseScenePlayBattle::isBattleWin(this);
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "addProgress",
          716);
        v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v22,
                (const char (*)[34])"[SCENE_PLAY_BATTLE] add progress:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 64));
        v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v13,
                (const char (*)[17])" ,cur progress: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->progress_);
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" ,old_stage: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 32));
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" ,cur_stage: ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 48));
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v19,
                (const char (*)[16])" ,is_finished: ");
        common::milog::MiLogStream::operator<<(v20, is_win);
        common::milog::MiLogStream::~MiLogStream(&v22);
        if ( is_win )
          BaseScenePlayBattle::onBattleStop(this, Win);
        result = 0LL;
      }
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "addProgress",
      691);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v22,
           (const char (*)[30])"[SCENE_PLAY_BATTLE] state is ");
    common::milog::MiLogStream::operator<<<proto::ScenePlayBattleState,(proto::ScenePlayBattleState*)0>(
      v5,
      &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  if ( v23 == (char *)v2 )
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
  return result;
};

// Line 728: range 0000000014EE48DC-0000000014EE49B6
bool __cdecl BaseScenePlayBattle::isBattleWin(BaseScenePlayBattle *const this)
{
  uint32_t progress; // ebx
  std::vector<unsigned int>::reference v3; // rax
  uint32_t *v4; // rdx

  if ( std::vector<unsigned int>::empty(&this->battle_param_.progress_stage_vec) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->progress_);
  }
  progress = this->progress_;
  v3 = std::vector<unsigned int>::back(&this->battle_param_.progress_stage_vec);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  return progress >= *v4;
};

// Line 742: range 0000000014EE49B8-0000000014EE4C55
__int64 __fastcall BaseScenePlayBattle::subProgress(BaseScenePlayBattle *const this, uint32_t sub_progress)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 result; // rax
  bool v6; // dl
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t old_stage; // [rsp+18h] [rbp-88h]
  int32_t cur_stage; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 sub_progress:741";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::subProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_progress;
  if ( *(_DWORD *)(v2 + 32) )
  {
    old_stage = BaseScenePlayBattle::getCurStage(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->progress_);
    }
    if ( this->progress_ < *(_DWORD *)(v2 + 32) )
    {
      v6 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
      if ( v6 )
        __asan_report_store4(&this->progress_, (((_BYTE)this + 116) & 7u) + 3, v6);
      this->progress_ = 0;
    }
    else
    {
      this->progress_ -= *(_DWORD *)(v2 + 32);
    }
    cur_stage = BaseScenePlayBattle::getCurStage(this);
    if ( cur_stage != old_stage )
      BaseScenePlayBattle::onStageChange(this, old_stage, cur_stage);
    BaseScenePlayBattle::broadcastBattleInfo(this);
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "subProgress",
      764);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"[SCENE_PLAY_BATTLE] sub progress:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" ,cur progress: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->progress_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v13 == (char *)v2 )
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

// Line 770: range 0000000014EE4C56-0000000014EE4E0B
int32_t __cdecl BaseScenePlayBattle::failBattle(BaseScenePlayBattle *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "failBattle",
    771);
  v1 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v7,
         (const char (*)[37])"[SCENE_PLAY_BATTLE] failBattle uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ && this->state_ != SCENE_PLAY_BATTLE_STOP )
  {
    BaseScenePlayBattle::onBattleStop(this, Lose);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "failBattle",
      775);
    v2 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v7,
           (const char (*)[50])"[SCENE_PLAY_BATTLE] battle state invalid, state_:");
    v3 = common::milog::MiLogStream::operator<<<proto::ScenePlayBattleState,(proto::ScenePlayBattleState*)0>(
           v2,
           &this->state_);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" player:");
    val = BaseScenePlayBattle::getOwnerUid(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
};

// Line 783: range 0000000014EE4E0C-0000000014EE4F8D
int32_t __cdecl BaseScenePlayBattle::getCurStage(const BaseScenePlayBattle *const this)
{
  uint32_t progress; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  uint32_t idx; // [rsp+14h] [rbp-3Ch]
  std::vector<unsigned int> *progress_stage_vec; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  progress_stage_vec = &this->battle_param_.progress_stage_vec;
  if ( std::vector<unsigned int>::empty(&this->battle_param_.progress_stage_vec) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "getCurStage",
      787);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v7,
      (const char (*)[49])"[SCENE_PLAY_BATTLE]  progress_stage_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    for ( idx = 1; idx < std::vector<unsigned int>::size(progress_stage_vec); ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->progress_);
      }
      progress = this->progress_;
      v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 progress_stage_vec,
                                                                                                 idx);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3);
      }
      if ( progress < *v4 )
        return idx - 1;
    }
    return std::vector<unsigned int>::size(progress_stage_vec) - 1;
  }
};

// Line 803: range 0000000014EE4F8E-0000000014EE5195
int32_t __cdecl BaseScenePlayBattle::getCurStageBeginProgress(const BaseScenePlayBattle *const this)
{
  uint32_t progress; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v5; // rax
  int32_t *v6; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  int32_t *v8; // rdx
  uint32_t idx; // [rsp+14h] [rbp-3Ch]
  std::vector<unsigned int> *progress_stage_vec; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  progress_stage_vec = &this->battle_param_.progress_stage_vec;
  if ( std::vector<unsigned int>::empty(&this->battle_param_.progress_stage_vec) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "getCurStageBeginProgress",
      807);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      &v11,
      (const char (*)[48])"[SCENE_PLAY_BATTLE] progress_stage_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    for ( idx = 1; idx < std::vector<unsigned int>::size(progress_stage_vec); ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->progress_);
      }
      progress = this->progress_;
      v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 progress_stage_vec,
                                                                                                 idx);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3);
      }
      if ( progress < *v4 )
      {
        v5 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   progress_stage_vec,
                                                                                                   idx - 1);
        v6 = (int32_t *)v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v5);
        }
        return *v6;
      }
    }
    v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::back(progress_stage_vec);
    v8 = (int32_t *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    return *v8;
  }
};

// Line 823: range 0000000014EE5196-0000000014EE55E7
void __fastcall BaseScenePlayBattle::onStageChange(
        BaseScenePlayBattle *const this,
        uint32_t old_stage,
        uint32_t cur_stage)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  int32_t v10; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  char v12; // cl
  int v13; // r14d
  __int64 v14; // rax
  char v15; // dl
  bool v16; // dl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  char v18; // cl
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  char v21; // cl
  uint32_t last_stage; // [rsp+14h] [rbp-CCh]
  std::shared_ptr<Event> p_evt_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 old_stage:822 48 4 13 cur_stage:822 64 16 11 evt_ptr:833";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::onStageChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = old_stage;
  *(_DWORD *)(v3 + 48) = cur_stage;
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "onStageChange",
    824);
  v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v25,
         (const char (*)[46])"[SCENE_PLAY_BATTLE] onStageChange old stage: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" ,cur stage: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( std::vector<unsigned int>::empty(&this->battle_param_.progress_stage_vec) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "onStageChange",
      828);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v25,
      (const char (*)[49])"[SCENE_PLAY_BATTLE] progress_stage_vec_ is empty");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    last_stage = std::vector<unsigned int>::size(&this->battle_param_.progress_stage_vec) - 1;
    EventUtil::createEvent((data::EventType)(v3 + 64));
    v9 = 0LL;
    if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 64), 0LL) )
    {
      v10 = *(_DWORD *)(v3 + 32);
      v11 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v12 = *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)((((_BYTE)v11 + 44) & 7) + 3) >= v12 )
      {
        LOBYTE(v9) = v12 != 0;
        __asan_report_store4(&v11->param1, v9, (_BYTE)v11);
      }
      v11->param1 = v10;
      v13 = *(_DWORD *)(v3 + 48);
      v14 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v15 = *(_BYTE *)(((unsigned __int64)(v14 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v15 != 0;
      v16 = v15 != 0 && v15 <= 3;
      if ( v16 )
        v14 = __asan_report_store4(v14 + 48, v9, v16);
      *(_DWORD *)(v14 + 48) = v13;
      v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v18 = *(_BYTE *)(((unsigned __int64)&v17->param3 >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)((((_BYTE)v17 + 52) & 7) + 3) >= v18 )
      {
        LOBYTE(v9) = v18 != 0;
        __asan_report_store4(&v17->param3, v9, (_BYTE)v17);
      }
      v17->param3 = last_stage;
      OwnerUid = BaseScenePlayBattle::getOwnerUid(this);
      v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v21 = *(_BYTE *)(((unsigned __int64)&v20->uid >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)((((_BYTE)v20 + 60) & 7) + 3) >= v21 )
      {
        LOBYTE(v9) = v21 != 0;
        __asan_report_store4(&v20->uid, v9, (_BYTE)v20);
      }
      v20->uid = OwnerUid;
      std::shared_ptr<Event>::shared_ptr(&p_evt_ptr, (const std::shared_ptr<Event> *)(v3 + 64));
      BaseScenePlayBattle::notifyGroupEvent(this, &p_evt_ptr);
      std::shared_ptr<Event>::~shared_ptr(&p_evt_ptr);
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 64));
  }
  if ( v26 == (char *)v3 )
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

// Line 845: range 0000000014EE55E8-0000000014EE5AA0
bool __cdecl BaseScenePlayBattle::isPlayerInBattleArea(
        const BaseScenePlayBattle *const this,
        Player *player,
        uint32_t radius)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  uint32_t v7; // r14d
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const Vector3 *Position; // rax
  bool result; // al
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Player> __a; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 10 center:875 64 16 13 scene_ptr:846 96 16 14 avatar_ptr:858";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::isPlayerInBattleArea;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v3 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "isPlayerInBattleArea",
      849);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v16,
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = 0;
  }
  else
  {
    v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getUid(player);
    Scene::findPlayer((const Scene *const)&__a, v7);
    LOBYTE(v7) = std::operator==<Player>(0LL, &__a);
    std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( (_BYTE)v7 )
    {
      v6 = 0;
    }
    else
    {
      Player::getAvatarComp(player);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96)) )
      {
        v6 = 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&__a);
        p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__a)->design_config.txt_config_mgr.mp_play_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->entry_id_);
        }
        entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(
                             p_mp_play_config_mgr,
                             this->entry_id_);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__a);
        if ( entry_config_ptr )
        {
          if ( !radius )
          {
            if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->center_radius >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->center_radius >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&entry_config_ptr->center_radius);
            }
            radius = entry_config_ptr->center_radius;
          }
          Vector3::Vector3((Vector3 *const)(v3 + 32), &entry_config_ptr->center_pos_list);
          v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          Position = Entity::getPosition((const Entity *const)v10);
          v6 = (float)(int)radius > getDistance(Position, (const Vector3 *)(v3 + 32));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "isPlayerInBattleArea",
            867);
          v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                 &v16,
                 (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->entry_id_);
          common::milog::MiLogStream::~MiLogStream(&v16);
          v6 = 0;
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v6;
  if ( v17 == (char *)v3 )
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

// Line 885: range 0000000014EE5AA2-0000000014EE61B7
int32_t __cdecl BaseScenePlayBattle::findBornPosRot(
        BaseScenePlayBattle *const this,
        Vector3 *born_pos,
        Vector3 *born_rot)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t v6; // r14d
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+28h] [rbp-B8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-B0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-90h] BYREF
  char v19[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 scene_ptr:886";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::findBornPosRot;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v3 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "findBornPosRot",
      889);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v18,
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v6 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( entry_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->born_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->born_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config_ptr->born_group_id);
      }
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, entry_config_ptr->born_group_id);
      std::shared_ptr<Config>::~shared_ptr(&v17);
      if ( group_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->born_config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)entry_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->born_config_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&entry_config_ptr->born_config_id);
        }
        point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                    group_script_config_ptr,
                                    entry_config_ptr->born_config_id);
        if ( point_script_config_ptr )
        {
          if ( ((unsigned __int8)born_pos & 7) >= *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)born_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store_n(born_pos, 12LL);
          }
          if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                                + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
          }
          *born_pos = point_script_config_ptr->pos;
          if ( ((unsigned __int8)born_rot & 7) >= *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)born_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store_n(born_rot, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
          }
          *(_QWORD *)&born_rot->x = *(_QWORD *)&point_script_config_ptr->rot.x;
          born_rot->z = point_script_config_ptr->rot.z;
          v6 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "findBornPosRot",
            910);
          v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v18,
                  (const char (*)[61])"[SCENE_PLAY_BATTLE] findPointConfig failed, born_config_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &entry_config_ptr->born_config_id);
          common::milog::MiLogStream::~MiLogStream(&v18);
          v6 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "findBornPosRot",
          903);
        v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v18,
                (const char (*)[66])"[SCENE_PLAY_BATTLE] findGroupScriptConfig failed, born_group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &entry_config_ptr->born_group_id);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v6 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "findBornPosRot",
        896);
      v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v18,
             (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v6 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v6;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 921: range 0000000014EE61B8-0000000014EE694E
int32_t __cdecl BaseScenePlayBattle::findRebornPosRot(
        BaseScenePlayBattle *const this,
        uint32_t scene_id,
        Vector3 *reborn_pos,
        Vector3 *reborn_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+28h] [rbp-B8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-B0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-90h] BYREF
  char v22[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 scene_ptr:927";
  *(_QWORD *)(v4 + 16) = BaseScenePlayBattle::findRebornPosRot;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v4 + 32));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "findRebornPosRot",
        930);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v21,
        (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( scene_id == Scene::getSceneId(v8) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v20);
        p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.mp_play_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->entry_id_);
        }
        entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(
                             p_mp_play_config_mgr,
                             this->entry_id_);
        std::shared_ptr<Config>::~shared_ptr(&v20);
        if ( entry_config_ptr )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v20);
          p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.lua_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reborn_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reborn_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&entry_config_ptr->reborn_group_id);
          }
          group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                      p_lua_config_mgr,
                                      entry_config_ptr->reborn_group_id);
          std::shared_ptr<Config>::~shared_ptr(&v20);
          if ( group_script_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reborn_config_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)entry_config_ptr - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reborn_config_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&entry_config_ptr->reborn_config_id);
            }
            point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                        group_script_config_ptr,
                                        entry_config_ptr->reborn_config_id);
            if ( point_script_config_ptr )
            {
              if ( ((unsigned __int8)reborn_pos & 7) >= *(_BYTE *)(((unsigned __int64)reborn_pos >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)reborn_pos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&reborn_pos->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)reborn_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&reborn_pos->z + 3) >> 3)
                                                                        + 0x7FFF8000) )
              {
                __asan_report_store_n(reborn_pos, 12LL);
              }
              if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                                    + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                       + 3) >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
              }
              *(_QWORD *)&reborn_pos->x = *(_QWORD *)&point_script_config_ptr->pos.x;
              reborn_pos->z = point_script_config_ptr->pos.z;
              if ( ((unsigned __int8)reborn_rot & 7) >= *(_BYTE *)(((unsigned __int64)reborn_rot >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)reborn_rot >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&reborn_rot->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)reborn_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&reborn_rot->z + 3) >> 3)
                                                                        + 0x7FFF8000) )
              {
                __asan_report_store_n(reborn_rot, 12LL);
              }
              if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                       + 3) >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
              }
              *(_QWORD *)&reborn_rot->x = *(_QWORD *)&point_script_config_ptr->rot.x;
              reborn_rot->z = point_script_config_ptr->rot.z;
              v7 = 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v21,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play_battle.cpp",
                "findRebornPosRot",
                955);
              v13 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                      &v21,
                      (const char (*)[63])"[SCENE_PLAY_BATTLE] findPointConfig failed, reborn_config_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                &entry_config_ptr->reborn_config_id);
              common::milog::MiLogStream::~MiLogStream(&v21);
              v7 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/scene_play/base_scene_play_battle.cpp",
              "findRebornPosRot",
              948);
            v12 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                    &v21,
                    (const char (*)[68])"[SCENE_PLAY_BATTLE] findGroupScriptConfig failed, reborn_group_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v12,
              &entry_config_ptr->reborn_group_id);
            common::milog::MiLogStream::~MiLogStream(&v21);
            v7 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "findRebornPosRot",
            941);
          v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v21,
                  (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->entry_id_);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v7 = -1;
        }
      }
      else
      {
        v7 = -1;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
  }
  else
  {
    v7 = -1;
  }
  result = v7;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 966: range 0000000014EE6BCA-0000000014EE701B
int32_t __cdecl BaseScenePlayBattle::transferPlayersToBornPos(BaseScenePlayBattle *const this, bool is_force)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-120h] BYREF
  BaseScenePlayBattle::transferPlayersToBornPos::<lambda(Player&)> p___f; // [rsp+30h] [rbp-100h] BYREF
  char v10[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 12 12 born_pos:981 64 12 12 born_rot:982 96 16 13 scene_ptr:967 128 16 13 world_ptr:974";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::transferPlayersToBornPos;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v2 + 96));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "transferPlayersToBornPos",
      970);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v8,
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v2 + 128));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "transferPlayersToBornPos",
        977);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v8,
        (const char (*)[34])"[SCENE_PLAY_BATTLE] world is null");
      common::milog::MiLogStream::~MiLogStream(&v8);
      v5 = -1;
    }
    else
    {
      Vector3::Vector3((Vector3 *const)(v2 + 32), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
      if ( BaseScenePlayBattle::findBornPosRot(this, (Vector3 *)(v2 + 32), (Vector3 *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "transferPlayersToBornPos",
          985);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          &v8,
          (const char (*)[42])"[SCENE_PLAY_BATTLE] findBornPosRot failed");
        common::milog::MiLogStream::~MiLogStream(&v8);
        v5 = -1;
      }
      else
      {
        v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        p___f.__this = this;
        std::shared_ptr<Scene>::shared_ptr(&p___f.__scene_ptr, (const std::shared_ptr<Scene> *)(v2 + 96));
        p___f.__born_pos = (Vector3 *)(v2 + 32);
        p___f.__born_rot = (Vector3 *)(v2 + 64);
        p___f.__is_force = is_force;
        std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::transferPlayersToBornPos(bool)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v8,
          &p___f);
        World::foreachPlayer(v6, (std::function<ForeachPolicy(Player&)> *)&v8);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v8);
        BaseScenePlayBattle::transferPlayersToBornPos(bool)::{lambda(Player &)#1}::~Player(&p___f);
        v5 = 0;
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 128));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 989: range 0000000014EE6950-0000000014EE6BA9
ForeachPolicy __cdecl BaseScenePlayBattle::transferPlayersToBornPos(bool)::{lambda(Player &)#1}::operator()(
        const BaseScenePlayBattle::transferPlayersToBornPos::<lambda(Player&)> *const __closure,
        Player *player)
{
  char v2; // al
  PlayerSceneComp *SceneComp; // r13
  Vector3 *born_rot; // r12
  Vector3 *born_pos; // rbx
  Scene *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  TransferReason p_reason; // [rsp+40h] [rbp-60h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( !BaseScenePlayBattle::isPlayerInBattleArea(__closure->__this, player, 0x50u) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&__closure->__is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__closure->__is_force);
  if ( !__closure->__is_force )
    v2 = 1;
  else
LABEL_8:
    v2 = 0;
  if ( v2 )
    return 0;
  SceneComp = Player::getSceneComp(player);
  TransferReason::TransferReason(&p_reason, ENTER_REASON_MP_PLAY);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__born_rot);
  born_rot = __closure->__born_rot;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__born_pos);
  born_pos = __closure->__born_pos;
  v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__scene_ptr);
  LOBYTE(born_pos) = PlayerSceneComp::jumpToScene(SceneComp, v7, born_pos, born_rot, 0, &p_reason) != 0;
  TransferReason::~TransferReason(&p_reason);
  if ( (_BYTE)born_pos )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "operator()",
      998);
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v10,
           (const char (*)[45])"[SCENE_PLAY_BATTLE] jumpToScene failed, uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  return 0;
};

// Line 989: range 0000000014F5BFFA-0000000014F5C1A1
void __cdecl BaseScenePlayBattle::transferPlayersToBornPos(bool)::{lambda(Player &)#1}::Player(
        BaseScenePlayBattle::transferPlayersToBornPos::<lambda(Player&)> *const this,
        BaseScenePlayBattle::transferPlayersToBornPos::<lambda(Player&)> *a2)
{
  BaseScenePlayBattle *v2; // rdx
  std::shared_ptr<Scene> *p_scene_ptr; // rsi
  Vector3 *born_pos; // rdx
  Vector3 *born_rot; // rdx
  bool is_force; // cl
  char v7; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  p_scene_ptr = &a2->__scene_ptr;
  std::shared_ptr<Scene>::shared_ptr(&this->__scene_ptr, &a2->__scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__born_pos);
  born_pos = a2->__born_pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__born_pos, p_scene_ptr);
  this->__born_pos = born_pos;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__born_rot);
  born_rot = a2->__born_rot;
  if ( *(_BYTE *)(((unsigned __int64)&this->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__born_rot, p_scene_ptr);
  this->__born_rot = born_rot;
  if ( *(char *)(((unsigned __int64)&a2->__is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->__is_force);
  is_force = a2->__is_force;
  v7 = *(_BYTE *)(((unsigned __int64)&this->__is_force >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_scene_ptr) = v7 != 0;
    __asan_report_store1(&this->__is_force, p_scene_ptr, &this->__is_force);
  }
  this->__is_force = is_force;
};

// Line 989: range 0000000014F5C26C-0000000014F5C413
void __cdecl BaseScenePlayBattle::transferPlayersToBornPos(bool)::{lambda(Player &)#1}::Player(
        BaseScenePlayBattle::transferPlayersToBornPos::<lambda(Player&)> *const this,
        const BaseScenePlayBattle::transferPlayersToBornPos::<lambda(Player&)> *a2)
{
  BaseScenePlayBattle *v2; // rdx
  std::shared_ptr<Scene> *p_scene_ptr; // rsi
  Vector3 *born_pos; // rdx
  Vector3 *born_rot; // rdx
  bool is_force; // cl
  char v7; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  p_scene_ptr = &a2->__scene_ptr;
  std::shared_ptr<Scene>::shared_ptr(&this->__scene_ptr, &a2->__scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__born_pos);
  born_pos = a2->__born_pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->__born_pos >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__born_pos, p_scene_ptr);
  this->__born_pos = born_pos;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__born_rot);
  born_rot = a2->__born_rot;
  if ( *(_BYTE *)(((unsigned __int64)&this->__born_rot >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__born_rot, p_scene_ptr);
  this->__born_rot = born_rot;
  if ( *(char *)(((unsigned __int64)&a2->__is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->__is_force);
  is_force = a2->__is_force;
  v7 = *(_BYTE *)(((unsigned __int64)&this->__is_force >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_scene_ptr) = v7 != 0;
    __asan_report_store1(&this->__is_force, p_scene_ptr, &this->__is_force);
  }
  this->__is_force = is_force;
};

// Line 989: range 0000000014EE6BAA-0000000014EE6BC8
void __cdecl BaseScenePlayBattle::transferPlayersToBornPos(bool)::{lambda(Player &)#1}::~Player(
        BaseScenePlayBattle::transferPlayersToBornPos::<lambda(Player&)> *const this)
{
  std::shared_ptr<Scene>::~shared_ptr(&this->__scene_ptr);
};

// Line 1007: range 0000000014EE73C8-0000000014EE817F
__int64 __fastcall BaseScenePlayBattle::createGeneralRewardGadget(BaseScenePlayBattle *const this, uint32_t config_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // ecx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GroupGadgetGeneralRewardParam *v14; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t GroupId; // eax
  BaseScenePlayBattle::createGeneralRewardGadget::<lambda(Player&)> v21; // [rsp-20h] [rbp-5E0h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // [rsp+8h] [rbp-5B8h]
  uint32_t create_time; // [rsp+10h] [rbp-5B0h]
  unsigned int val; // [rsp+2Ch] [rbp-594h] BYREF
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+30h] [rbp-590h]
  const MpPlayExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-588h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-580h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-570h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-550h] BYREF
  char v30[1328]; // [rsp+90h] [rbp-530h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 14 config_id:1006 48 16 13 play_ptr:1009 80 16 14 scene_ptr:1035 112 16 14 group_ptr:104"
                        "1 144 16 14 world_ptr:1049 176 16 15 gadget_ptr:1089 208 48 21 qualify_info_map:1055 288 48 19 r"
                        "emain_uid_set:1056 368 192 19 general_reward:1075 624 520 10 param:1085";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::createGeneralRewardGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862728] = -218959118;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = -218959118;
  v4[536862739] = 62194;
  v4[536862755] = -218103808;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  *(_DWORD *)(v2 + 32) = config_id;
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "createGeneralRewardGadget",
    1008);
  v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
         &v29,
         (const char (*)[53])"[SCENE_PLAY_BATTLE] createGeneralRewardGadget, uid: ");
  val = BaseScenePlayBattle::getOwnerUid(this);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])", config_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v29);
  BaseScenePlayBattle::getScenePlay((const BaseScenePlayBattle *const)(v2 + 48));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "createGeneralRewardGadget",
      1012);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v29,
      (const char (*)[37])"[SCENE_PLAY_BATTLE] play_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v8 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 176));
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176))->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 176));
    if ( entry_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->general_reward_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config_ptr->general_reward_config_id);
      }
      if ( entry_config_ptr->general_reward_config_id == *(_DWORD *)(v2 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->is_direct_to_bag >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)entry_config_ptr + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->is_direct_to_bag >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load1(&entry_config_ptr->is_direct_to_bag);
        }
        if ( entry_config_ptr->is_direct_to_bag )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "createGeneralRewardGadget",
            1031);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v29,
            (const char (*)[38])"[SCENE_PLAY_BATTLE] is_direct_to_bag.");
          common::milog::MiLogStream::~MiLogStream(&v29);
          v8 = 0;
        }
        else
        {
          BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v2 + 80));
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/scene_play/base_scene_play_battle.cpp",
              "createGeneralRewardGadget",
              1038);
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v29,
              (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
            common::milog::MiLogStream::~MiLogStream(&v29);
            v8 = -1;
          }
          else
          {
            v11 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_group_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_group_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&entry_config_ptr->reward_group_id);
            }
            Scene::findGroup((Scene *const)(v2 + 112), v11);
            if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 112)) )
            {
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play_battle.cpp",
                "createGeneralRewardGadget",
                1044);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v29,
                (const char (*)[38])"[SCENE_PLAY_BATTLE] group_ptr is null");
              common::milog::MiLogStream::~MiLogStream(&v29);
              v8 = -1;
            }
            else
            {
              BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v2 + 144));
              if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 144)) )
              {
                common::milog::MiLogStream::create(
                  &v29,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/scene_play/base_scene_play_battle.cpp",
                  "createGeneralRewardGadget",
                  1052);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v29,
                  (const char (*)[34])"[SCENE_PLAY_BATTLE] world is null");
                common::milog::MiLogStream::~MiLogStream(&v29);
                v8 = -1;
              }
              else
              {
                std::map<unsigned int,proto::GeneralRewardBin>::map((std::map<unsigned int,proto::GeneralRewardBin> *const)(v2 + 208));
                std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 288));
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v27);
                config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.mp_play_config_mgr;
                std::shared_ptr<Config>::~shared_ptr(&v27);
                v12 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                v29.log_ = (common::milog::MiLog *)this;
                v29.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)config_mgr;
                v29.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 208);
                v29.ostr_ = (common::milog::MilogStringStream *)(v2 + 288);
                v21.__remain_uid_set = (std::set<unsigned int> *)(v2 + 288);
                v21.__qualify_info_map = (std::map<unsigned int,proto::GeneralRewardBin> *)(v2 + 208);
                v21.__config_mgr = config_mgr;
                v21.__this = this;
                std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::createGeneralRewardGadget(unsigned int)::{lambda(Player &)#1},void,void>(
                  &p_func,
                  v21);
                World::foreachPlayer(v12, &p_func);
                std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
                GroupGadgetGeneralRewardParam::GroupGadgetGeneralRewardParam((GroupGadgetGeneralRewardParam *const)(v2 + 368));
                if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->resin_cost >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->resin_cost >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&entry_config_ptr->resin_cost);
                }
                *(_DWORD *)(v2 + 368) = entry_config_ptr->resin_cost;
                *(_DWORD *)(v2 + 372) = 0;
                *(_DWORD *)(v2 + 376) = 0;
                std::map<unsigned int,proto::GeneralRewardBin>::operator=(
                  (std::map<unsigned int,proto::GeneralRewardBin> *const)(v2 + 384),
                  (const std::map<unsigned int,proto::GeneralRewardBin> *)(v2 + 208));
                std::set<unsigned int>::operator=(
                  (std::set<unsigned int> *const)(v2 + 432),
                  (const std::set<unsigned int> *)(v2 + 288));
                v13 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                *(_DWORD *)(v2 + 480) = BaseScenePlay::getGeneralRewardItemLimitType(v13);
                if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->material_cost_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)entry_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->material_cost_id >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4(&entry_config_ptr->material_cost_id);
                }
                *(_DWORD *)(v2 + 484) = entry_config_ptr->material_cost_id;
                if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->material_cost_num >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->material_cost_num >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&entry_config_ptr->material_cost_num);
                }
                *(_DWORD *)(v2 + 488) = entry_config_ptr->material_cost_num;
                GroupEntityParam::GroupEntityParam((GroupEntityParam *const)(v2 + 624));
                *(_DWORD *)(v2 + 624) = *(_DWORD *)(v2 + 32);
                v14 = std::move<GroupGadgetGeneralRewardParam &>((GroupGadgetGeneralRewardParam *)(v2 + 368));
                GroupGadgetGeneralRewardParam::operator=((GroupGadgetGeneralRewardParam *const)(v2 + 856), v14);
                v15 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                Group::createGadget((Group *const)(v2 + 176), (const GroupEntityParam *)v15);
                if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 176)) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&p_func,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/scene_play/base_scene_play_battle.cpp",
                    "createGeneralRewardGadget",
                    1092);
                  v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                          (common::milog::MiLogStream *const)&p_func,
                          (const char (*)[52])"[SCENE_PLAY_BATTLE] gadget_ptr is null, config_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
                  v8 = -1;
                }
                else
                {
                  v22 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                  create_time = common::tools::TimeUtils::getNow();
                  v17 = *(_DWORD *)(v2 + 32);
                  v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                  GroupId = Group::getGroupId(v18);
                  PlayerWorld::onCreateRewardPoint(
                    v22,
                    GroupId,
                    v17,
                    (const std::set<unsigned int> *)(v2 + 288),
                    create_time);
                  v8 = 0;
                }
                std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 176));
                GroupEntityParam::~GroupEntityParam((GroupEntityParam *const)(v2 + 624));
                GroupGadgetGeneralRewardParam::~GroupGadgetGeneralRewardParam((GroupGadgetGeneralRewardParam *const)(v2 + 368));
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 288));
                std::map<unsigned int,proto::GeneralRewardBin>::~map((std::map<unsigned int,proto::GeneralRewardBin> *const)(v2 + 208));
              }
              std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 144));
            }
            std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 112));
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "createGeneralRewardGadget",
          1026);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          &v29,
          (const char (*)[46])"[SCENE_PLAY_BATTLE] reward config id mismatch");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v8 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "createGeneralRewardGadget",
        1019);
      v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              &v29,
              (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v8 = -1;
    }
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v2 + 48));
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v30);
  }
  return v8;
};

// Line 1058: range 0000000014EE701C-0000000014EE73C6
ForeachPolicy __cdecl BaseScenePlayBattle::createGeneralRewardGadget(unsigned int)::{lambda(Player &)#1}::operator()(
        const BaseScenePlayBattle::createGeneralRewardGadget::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  const MpPlayExcelConfigMgr *config_mgr; // rcx
  BaseScenePlayBattle *this; // rax
  char v8; // dl
  std::map<unsigned int,proto::GeneralRewardBin> *qualify_info_map; // r14
  unsigned int *v10; // rcx
  proto::GeneralRewardBin *v11; // r8
  std::set<unsigned int> *remain_uid_set; // r14
  ForeachPolicy result; // eax
  std::set<unsigned int>::value_type __x; // [rsp+10h] [rbp-100h] BYREF
  uint32_t world_level; // [rsp+14h] [rbp-FCh]
  const data::MpCrucibleRewardConfig *reward_config_ptr; // [rsp+18h] [rbp-F8h]
  char v17[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 104 16 drop_reward:1064";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::createGeneralRewardGadget(unsigned int)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  BasicComp = Player::getBasicComp(player);
  world_level = PlayerBasicComp::getWorldLevel(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_mgr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__config_mgr);
  config_mgr = __closure->__config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  v8 = *(_BYTE *)(((unsigned __int64)&__closure->__this->entry_id_ >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
    this = (BaseScenePlayBattle *)__asan_report_load4(&__closure->__this->entry_id_);
  reward_config_ptr = MpPlayExcelConfigMgr::findMpPlayRewardConfig(config_mgr, this->entry_id_, world_level);
  if ( reward_config_ptr )
  {
    proto::GeneralRewardBin::GeneralRewardBin((proto::GeneralRewardBin *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&reward_config_ptr->drop_id);
    }
    proto::GeneralRewardBin::set_drop_id((proto::GeneralRewardBin *const)(v2 + 48), reward_config_ptr->drop_id);
    proto::GeneralRewardBin::set_drop_num((proto::GeneralRewardBin *const)(v2 + 48), 1u);
    if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reward_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_config_ptr->reward_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&reward_config_ptr->reward_id);
    }
    proto::GeneralRewardBin::set_reward_id((proto::GeneralRewardBin *const)(v2 + 48), reward_config_ptr->reward_id);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__qualify_info_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__qualify_info_map);
    qualify_info_map = __closure->__qualify_info_map;
    __x = Player::getUid(player);
    std::map<unsigned int,proto::GeneralRewardBin>::emplace<unsigned int,proto::GeneralRewardBin&>(
      qualify_info_map,
      &__x,
      (proto::GeneralRewardBin *)(v2 + 48),
      v10,
      v11);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__remain_uid_set >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__remain_uid_set);
    remain_uid_set = __closure->__remain_uid_set;
    __x = Player::getUid(player);
    std::set<unsigned int>::insert(remain_uid_set, &__x);
    proto::GeneralRewardBin::~GeneralRewardBin((proto::GeneralRewardBin *const)(v2 + 48));
  }
  result = FOREACH_CONTINUE;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 1102: range 0000000014EE8180-0000000014EE877F
int32_t __cdecl BaseScenePlayBattle::destroyGeneralRewardGadget(BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  uint32_t v7; // ecx
  uint32_t v8; // ecx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-E8h]
  VisionContext v18; // [rsp+24h] [rbp-DCh] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 scene_ptr:1110 64 16 14 group_ptr:1117 96 16 15 gadget_ptr:1124";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::destroyGeneralRewardGadget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 96));
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
  if ( entry_config_ptr )
  {
    BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v1 + 32));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "destroyGeneralRewardGadget",
        1113);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v19,
        (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
    else
    {
      v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config_ptr->reward_group_id);
      }
      Scene::findGroup((Scene *const)(v1 + 64), v7);
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "destroyGeneralRewardGadget",
          1120);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v19,
          (const char (*)[38])"[SCENE_PLAY_BATTLE] group_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v6 = -1;
      }
      else
      {
        v8 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->general_reward_config_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&entry_config_ptr->general_reward_config_id);
        }
        Group::findEntityByConfigId<Gadget>((Group *const)(v1 + 96), v8);
        if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "destroyGeneralRewardGadget",
            1127);
          v9 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                 &v19,
                 (const char (*)[54])"[SCENE_PLAY_BATTLE] destroyGeneralRewardGadget, uid: ");
          val = BaseScenePlayBattle::getOwnerUid(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v19);
          v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          Creature::changeLifeState(v10, LIFE_DEAD, 0LL, 1);
          v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v11);
          v13 = *(_QWORD *)v12->baseclass_0 + 128LL;
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8(*(_QWORD *)v12->baseclass_0 + 128LL);
          v14 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v13;
          VisionContext::VisionContext(&v18, VISION_DIE);
          v14(v12, &v18);
        }
        v6 = 0;
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 96));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "destroyGeneralRewardGadget",
      1106);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v19,
           (const char (*)[59])"[SCENE_PLAY] findMpPlayGroupExcelConfig failed, entry_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  result = v6;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1136: range 0000000014EE8780-0000000014EE8ADB
int64_t __fastcall BaseScenePlayBattle::getUidValue(
        BaseScenePlayBattle *const this,
        uint32_t uid,
        const std::string *key)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int64_t result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,long int> > >::pointer v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,long int> > >::pointer v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,long int> >::pointer v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,long int> > >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 uid:1135 64 8 9 iter:1138 96 8 15 value_iter:1144";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::getUidValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "getUidValue",
    1137);
  v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v18,
         (const char (*)[38])"[SCENE_PLAY_BATTLE] getUidValue uid: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" ,key: ");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
  common::milog::MiLogStream::~MiLogStream(&v18);
  *(std::map<unsigned int,std::map<std::string,long int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::map<std::string,long>>::find(
                                                                                    &this->uid_value_map_,
                                                                                    (const std::map<unsigned int,std::map<std::string,long int>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::map<std::string,long>>::end(&this->uid_value_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,long int> > >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,long>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,long int> > > *const)(v3 + 64));
    *(std::map<std::string,long int>::iterator *)(v3 + 96) = std::map<std::string,long>::find(&v10->second, key);
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,long>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,long int> > > *const)(v3 + 64));
    __y._M_node = std::map<std::string,long>::end(&v11->second)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,long int> >::_Self *)(v3 + 96),
           (const std::_Rb_tree_iterator<std::pair<const std::string,long int> >::_Self *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "getUidValue",
        1147);
      v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v18,
              (const char (*)[46])"[SCENE_PLAY_BATTLE] uid value not found, uid:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, key);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0LL;
    }
    else
    {
      v15 = std::_Rb_tree_iterator<std::pair<std::string const,long>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,long int> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000) )
        v15 = (std::_Rb_tree_iterator<std::pair<const std::string,long int> >::pointer)__asan_report_load8(&v15->second);
      result = v15->second;
    }
  }
  if ( v19 == (char *)v3 )
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

// Line 1155: range 0000000014EE8ADC-0000000014EE8D1A
__int64 __fastcall BaseScenePlayBattle::setUidValue(
        BaseScenePlayBattle *const this,
        uint32_t uid,
        const std::string *key,
        int64_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 result; // rax
  std::map<unsigned int,std::map<std::string,long int>>::mapped_type *value_map; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 8 uid:1154 64 8 10 value:1154";
  *(_QWORD *)(v4 + 16) = BaseScenePlayBattle::setUidValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = uid;
  *(_QWORD *)(v4 + 64) = value;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/scene_play/base_scene_play_battle.cpp",
    "setUidValue",
    1156);
  v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v18,
         (const char (*)[38])"[SCENE_PLAY_BATTLE] setUidValue uid: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" ,key: ");
  v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, key);
  v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" ,value: ");
  common::milog::MiLogStream::operator<<<long,(long *)0>(v11, (const __int64 *)(v4 + 64));
  common::milog::MiLogStream::~MiLogStream(&v18);
  value_map = std::map<unsigned int,std::map<std::string,long>>::operator[](
                &this->uid_value_map_,
                (const std::map<unsigned int,std::map<std::string,long int>>::key_type *)(v4 + 48));
  v12 = *(_QWORD *)(v4 + 64);
  v13 = (unsigned __int64)std::map<std::string,long>::operator[](value_map, key);
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    v13 = __asan_report_store8(v13, key);
  *(_QWORD *)v13 = v12;
  result = 0LL;
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1164: range 0000000014EE8D1C-0000000014EE9484
__int64 __fastcall BaseScenePlayBattle::notifyUidOp(
        BaseScenePlayBattle *const this,
        const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *p_group_ptr,
        uint32_t config_id,
        const std::vector<unsigned int> *uid_vec,
        uint32_t op,
        const std::string *param_str,
        const std::vector<unsigned int> *param_vec,
        const std::vector<unsigned int> *param_target_vec,
        uint32_t param_index,
        uint32_t param_duration)
{
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // r12
  unsigned int v13; // r14d
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t EntityId; // eax
  unsigned int *v18; // rax
  google::protobuf::uint32 *v19; // rdx
  unsigned int *v20; // rax
  google::protobuf::uint32 *v21; // rdx
  unsigned int *v22; // rax
  google::protobuf::uint32 *v23; // rdx
  Entity *v24; // rax
  __int64 result; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-178h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-170h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-168h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-160h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-158h]
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-150h] BYREF
  char v36[304]; // [rsp+90h] [rbp-130h] BYREF

  v10 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(256LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "3 48 4 14 config_id:1162 64 16 15 gadget_ptr:1171 96 128 11 notify:1184";
  *(_QWORD *)(v10 + 16) = BaseScenePlayBattle::notifyUidOp;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234556943;
  v12[536862722] = -219021312;
  v12[536862727] = -202116109;
  *(_DWORD *)(v10 + 48) = config_id;
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "notifyUidOp",
      1167);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v35,
      (const char (*)[38])"[SCENE_PLAY_BATTLE] group_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v35);
    v13 = -1;
  }
  else
  {
    v14 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_group_ptr);
    Group::findEntityByConfigId<Gadget>((Group *const)(v10 + 64), v14);
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v10 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "notifyUidOp",
        1174);
      v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v35,
              (const char (*)[48])"[SCENE_PLAY_BATTLE] gadget is null, confid_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v10 + 48));
      common::milog::MiLogStream::~MiLogStream(&v35);
      v13 = -1;
    }
    else if ( std::vector<unsigned int>::empty(uid_vec) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "notifyUidOp",
        1180);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v35,
        (const char (*)[37])"[SCENE_PLAY_BATTLE] uid_vec is empty");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v13 = -1;
    }
    else
    {
      proto::ScenePlayBattleUidOpNotify::ScenePlayBattleUidOpNotify((proto::ScenePlayBattleUidOpNotify *const)(v10 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->play_id_);
      }
      proto::ScenePlayBattleUidOpNotify::set_play_id(
        (proto::ScenePlayBattleUidOpNotify *const)(v10 + 96),
        this->play_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->play_type_);
      }
      proto::ScenePlayBattleUidOpNotify::set_play_type(
        (proto::ScenePlayBattleUidOpNotify *const)(v10 + 96),
        this->play_type_);
      v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 64));
      EntityId = Entity::getEntityId((const Entity *const)v16);
      proto::ScenePlayBattleUidOpNotify::set_entity_id((proto::ScenePlayBattleUidOpNotify *const)(v10 + 96), EntityId);
      __for_range = uid_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v18 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        proto::ScenePlayBattleUidOpNotify::add_uid_list((proto::ScenePlayBattleUidOpNotify *const)(v10 + 96), *v19);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      proto::ScenePlayBattleUidOpNotify::set_op((proto::ScenePlayBattleUidOpNotify *const)(v10 + 96), op);
      proto::ScenePlayBattleUidOpNotify::set_param_str((proto::ScenePlayBattleUidOpNotify *const)(v10 + 96), param_str);
      __for_range_0 = param_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(param_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        proto::ScenePlayBattleUidOpNotify::add_param_list((proto::ScenePlayBattleUidOpNotify *const)(v10 + 96), *v21);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      __for_range_1 = param_target_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(param_target_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v22 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        proto::ScenePlayBattleUidOpNotify::add_param_target_list(
          (proto::ScenePlayBattleUidOpNotify *const)(v10 + 96),
          *v23);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      proto::ScenePlayBattleUidOpNotify::set_param_index(
        (proto::ScenePlayBattleUidOpNotify *const)(v10 + 96),
        param_index);
      proto::ScenePlayBattleUidOpNotify::set_param_duration(
        (proto::ScenePlayBattleUidOpNotify *const)(v10 + 96),
        param_duration);
      v24 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 64));
      Entity::notifyViewingPlayers<proto::ScenePlayBattleUidOpNotify>(
        v24,
        (proto::ScenePlayBattleUidOpNotify *)(v10 + 96),
        1);
      v13 = 0;
      proto::ScenePlayBattleUidOpNotify::~ScenePlayBattleUidOpNotify((proto::ScenePlayBattleUidOpNotify *const)(v10 + 96));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v10 + 64));
  }
  result = v13;
  if ( v36 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v10 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1210: range 0000000014EE9486-0000000014EE982C
void __cdecl BaseScenePlayBattle::notifyGroupBattleState(BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  uint32_t play_type; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  char v7; // cl
  uint32_t play_id; // r14d
  __int64 v9; // rax
  char v10; // dl
  bool v11; // dl
  proto::ScenePlayBattleState state; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  char v14; // cl
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  std::shared_ptr<Event> p_evt_ptr; // [rsp+10h] [rbp-80h] BYREF
  char v19[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 evt_ptr:1216";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::notifyGroupBattleState;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    EventUtil::createEvent((data::EventType)(v1 + 32));
    if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v1 + 32), 0LL) )
    {
      v4 = (((_BYTE)this + 60) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->play_type_);
      }
      play_type = this->play_type_;
      v6 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v7 = *(_BYTE *)(((unsigned __int64)&v6->param1 >> 3) + 0x7FFF8000);
      if ( v7 != 0 && (char)((((_BYTE)v6 + 44) & 7) + 3) >= v7 )
      {
        LOBYTE(v4) = v7 != 0;
        __asan_report_store4(&v6->param1, v4, (_BYTE)v6);
      }
      v6->param1 = play_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->play_id_);
      }
      play_id = this->play_id_;
      v9 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v10 = *(_BYTE *)(((unsigned __int64)(v9 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v4) = v10 != 0;
      v11 = v10 != 0 && v10 <= 3;
      if ( v11 )
        v9 = __asan_report_store4(v9 + 48, v4, v11);
      *(_DWORD *)(v9 + 48) = play_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->state_);
      }
      state = this->state_;
      v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v14 = *(_BYTE *)(((unsigned __int64)&v13->param3 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((((_BYTE)v13 + 52) & 7) + 3) >= v14 )
      {
        LOBYTE(v4) = v14 != 0;
        __asan_report_store4(&v13->param3, v4, (_BYTE)v13);
      }
      v13->param3 = state;
      OwnerUid = BaseScenePlayBattle::getOwnerUid(this);
      v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v17 = *(_BYTE *)(((unsigned __int64)&v16->uid >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)((((_BYTE)v16 + 60) & 7) + 3) >= v17 )
      {
        LOBYTE(v4) = v17 != 0;
        __asan_report_store4(&v16->uid, v4, (_BYTE)v16);
      }
      v16->uid = OwnerUid;
      std::shared_ptr<Event>::shared_ptr(&p_evt_ptr, (const std::shared_ptr<Event> *)(v1 + 32));
      BaseScenePlayBattle::notifyGroupEvent(this, &p_evt_ptr);
      std::shared_ptr<Event>::~shared_ptr(&p_evt_ptr);
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 32));
  }
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1228: range 0000000014EE982E-0000000014EE9B8C
void __cdecl BaseScenePlayBattle::notifyGroupBattleInterrupt(BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  uint32_t play_type; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  char v7; // cl
  uint32_t play_id; // r14d
  __int64 v9; // rax
  char v10; // dl
  bool v11; // dl
  proto::ScenePlayBattleState state; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  char v14; // cl
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  std::shared_ptr<Event> p_evt_ptr; // [rsp+10h] [rbp-80h] BYREF
  char v19[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 evt_ptr:1229";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::notifyGroupBattleInterrupt;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  EventUtil::createEvent((data::EventType)(v1 + 32));
  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v1 + 32), 0LL) )
  {
    v4 = (((_BYTE)this + 60) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->play_type_);
    }
    play_type = this->play_type_;
    v6 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v7 = *(_BYTE *)(((unsigned __int64)&v6->param1 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)((((_BYTE)v6 + 44) & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(&v6->param1, v4, (_BYTE)v6);
    }
    v6->param1 = play_type;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    play_id = this->play_id_;
    v9 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v10 = *(_BYTE *)(((unsigned __int64)(v9 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v4) = v10 != 0;
    v11 = v10 != 0 && v10 <= 3;
    if ( v11 )
      v9 = __asan_report_store4(v9 + 48, v4, v11);
    *(_DWORD *)(v9 + 48) = play_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    state = this->state_;
    v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v14 = *(_BYTE *)(((unsigned __int64)&v13->param3 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)((((_BYTE)v13 + 52) & 7) + 3) >= v14 )
    {
      LOBYTE(v4) = v14 != 0;
      __asan_report_store4(&v13->param3, v4, (_BYTE)v13);
    }
    v13->param3 = state;
    OwnerUid = BaseScenePlayBattle::getOwnerUid(this);
    v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v17 = *(_BYTE *)(((unsigned __int64)&v16->uid >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)((((_BYTE)v16 + 60) & 7) + 3) >= v17 )
    {
      LOBYTE(v4) = v17 != 0;
      __asan_report_store4(&v16->uid, v4, (_BYTE)v16);
    }
    v16->uid = OwnerUid;
    std::shared_ptr<Event>::shared_ptr(&p_evt_ptr, (const std::shared_ptr<Event> *)(v1 + 32));
    BaseScenePlayBattle::notifyGroupEvent(this, &p_evt_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_evt_ptr);
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 32));
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1241: range 0000000014EE9B8E-0000000014EE9EB8
void __cdecl BaseScenePlayBattle::notifyGroupBattleResult(
        BaseScenePlayBattle *const this,
        ScenePlayBattleStopReason reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  uint32_t play_type; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  char v8; // cl
  uint32_t play_id; // r14d
  __int64 v10; // rax
  char v11; // dl
  bool v12; // dl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  char v14; // cl
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  std::shared_ptr<Event> p_evt_ptr; // [rsp+10h] [rbp-80h] BYREF
  char v20[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 evt_ptr:1242";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::notifyGroupBattleResult;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  EventUtil::createEvent((data::EventType)(v2 + 32));
  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 32), 0LL) )
  {
    v5 = (((_BYTE)this + 60) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->play_type_);
    }
    play_type = this->play_type_;
    v7 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v8 = *(_BYTE *)(((unsigned __int64)&v7->param1 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)((((_BYTE)v7 + 44) & 7) + 3) >= v8 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(&v7->param1, v5, (_BYTE)v7);
    }
    v7->param1 = play_type;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    play_id = this->play_id_;
    v10 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v11 = *(_BYTE *)(((unsigned __int64)(v10 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v11 != 0;
    v12 = v11 != 0 && v11 <= 3;
    if ( v12 )
      v10 = __asan_report_store4(v10 + 48, v5, v12);
    *(_DWORD *)(v10 + 48) = play_id;
    v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v14 = *(_BYTE *)(((unsigned __int64)&v13->param3 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)((((_BYTE)v13 + 52) & 7) + 3) >= v14 )
    {
      LOBYTE(v5) = v14 != 0;
      __asan_report_store4(&v13->param3, v5, (_BYTE)v13);
    }
    v13->param3 = reason;
    OwnerUid = BaseScenePlayBattle::getOwnerUid(this);
    v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v17 = *(_BYTE *)(((unsigned __int64)&v16->uid >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)((((_BYTE)v16 + 60) & 7) + 3) >= v17 )
    {
      LOBYTE(v5) = v17 != 0;
      __asan_report_store4(&v16->uid, v5, (_BYTE)v16);
    }
    v16->uid = OwnerUid;
    std::shared_ptr<Event>::shared_ptr(&p_evt_ptr, (const std::shared_ptr<Event> *)(v2 + 32));
    BaseScenePlayBattle::notifyGroupEvent(this, &p_evt_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_evt_ptr);
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 32));
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1254: range 0000000014EE9EBA-0000000014EEA3E0
void __cdecl BaseScenePlayBattle::notifyGroupEvent(BaseScenePlayBattle *const this, EventPtr *p_evt_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Group *v14; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+20h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1274 64 16 14 scene_ptr:1267 96 16 14 group_ptr:1276";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::notifyGroupEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( !std::operator==<Event>(0LL, p_evt_ptr) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( entry_config_ptr )
    {
      BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v2 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "notifyGroupEvent",
          1270);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v19,
          (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        __for_range = &entry_config_ptr->notify_group_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(&entry_config_ptr->notify_group_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&entry_config_ptr->notify_group_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          v8 = v7;
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v7);
          }
          *(_DWORD *)(v2 + 48) = *v8;
          v9 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Scene::findGroup((Scene *const)(v2 + 96), v9);
          if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/scene_play/base_scene_play_battle.cpp",
              "notifyGroupEvent",
              1279);
            v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v19,
                    (const char (*)[30])"[SCENE_PLAY_BATTLE] group_id:");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v10,
                    (const unsigned int *)(v2 + 48));
            v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v11,
                    (const char (*)[15])" handle event:");
            v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_evt_ptr);
            common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(v12, &v13->event_type);
            common::milog::MiLogStream::~MiLogStream(&v19);
            v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            Group::handleEvent(v14, p_evt_ptr);
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "notifyGroupEvent",
        1263);
      v6 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v19,
             (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
  if ( v20 == (char *)v2 )
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
};

// Line 1286: range 0000000014EEA3E2-0000000014EEA75A
void __cdecl BaseScenePlayBattle::fillBattleInfo(
        const BaseScenePlayBattle *const this,
        proto::ScenePlayBattleInfo *battle_info)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->play_type_);
  }
  proto::ScenePlayBattleInfo::set_play_type(battle_info, this->play_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  proto::ScenePlayBattleInfo::set_play_id(battle_info, this->play_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  proto::ScenePlayBattleInfo::set_state(battle_info, this->state_);
  if ( *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prepare_end_time_);
  }
  proto::ScenePlayBattleInfo::set_prepare_end_time(battle_info, this->prepare_end_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_time_);
  }
  proto::ScenePlayBattleInfo::set_start_time(battle_info, this->start_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_param_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_param_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->battle_param_);
  }
  proto::ScenePlayBattleInfo::set_duration(battle_info, this->battle_param_.duration);
  __for_range = &this->battle_param_.progress_stage_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->battle_param_.progress_stage_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->battle_param_.progress_stage_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::ScenePlayBattleInfo::add_progress_stage_list(battle_info, *v3);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->progress_);
  }
  proto::ScenePlayBattleInfo::set_progress(battle_info, this->progress_);
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_param_.mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_param_.mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->battle_param_.mode);
  }
  proto::ScenePlayBattleInfo::set_mode(battle_info, this->battle_param_.mode);
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->type_);
  }
  proto::ScenePlayBattleInfo::set_type(battle_info, this->type_);
};

// Line 1303: range 0000000014EEA75C-0000000014EEA97D
void __cdecl BaseScenePlayBattle::broadcastBattleInfo(BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  proto::ScenePlayBattleInfo *v4; // rdx
  Scene *v5; // rax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 scene_ptr:1304 64 32 11 notify:1311";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::broadcastBattleInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "broadcastBattleInfo",
      1307);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v1 + 64),
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
  }
  else
  {
    proto::ScenePlayBattleInfoNotify::ScenePlayBattleInfoNotify((proto::ScenePlayBattleInfoNotify *const)(v1 + 64));
    v4 = proto::ScenePlayBattleInfoNotify::mutable_battle_info((proto::ScenePlayBattleInfoNotify *const)(v1 + 64));
    BaseScenePlayBattle::fillBattleInfo(this, v4);
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Scene::notifyAllPlayer<proto::ScenePlayBattleInfoNotify>(v5, (proto::ScenePlayBattleInfoNotify *)(v1 + 64), 0);
    proto::ScenePlayBattleInfoNotify::~ScenePlayBattleInfoNotify((proto::ScenePlayBattleInfoNotify *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1317: range 0000000014EEA97E-0000000014EEAC75
void __cdecl BaseScenePlayBattle::broadcastBattleInterrupt(BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  Scene *v4; // rax
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 scene_ptr:1318 64 32 11 notify:1325";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::broadcastBattleInterrupt;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "broadcastBattleInterrupt",
      1321);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v1 + 64),
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
  }
  else
  {
    proto::ScenePlayBattleInterruptNotify::ScenePlayBattleInterruptNotify((proto::ScenePlayBattleInterruptNotify *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    proto::ScenePlayBattleInterruptNotify::set_play_id(
      (proto::ScenePlayBattleInterruptNotify *const)(v1 + 64),
      this->play_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->play_type_);
    }
    proto::ScenePlayBattleInterruptNotify::set_play_type(
      (proto::ScenePlayBattleInterruptNotify *const)(v1 + 64),
      this->play_type_);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    proto::ScenePlayBattleInterruptNotify::set_interrupt_state(
      (proto::ScenePlayBattleInterruptNotify *const)(v1 + 64),
      this->state_);
    v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Scene::notifyAllPlayer<proto::ScenePlayBattleInterruptNotify>(
      v4,
      (proto::ScenePlayBattleInterruptNotify *)(v1 + 64),
      0);
    proto::ScenePlayBattleInterruptNotify::~ScenePlayBattleInterruptNotify((proto::ScenePlayBattleInterruptNotify *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1333: range 0000000014EEACC8-0000000014EEAEB5
void __cdecl BaseScenePlayBattle::broadcastBattleResult(
        BaseScenePlayBattle *const this,
        const proto::ScenePlayBattleResultNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Scene *v5; // r14
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 scene_ptr:1334";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::broadcastBattleResult;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "broadcastBattleResult",
      1337);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v6,
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::broadcastBattleResult(proto::ScenePlayBattleResultNotify const&)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v6,
      (BaseScenePlayBattle::broadcastBattleResult::<lambda(Player&)>)notify);
    Scene::foreachPlayer(v5, (std::function<ForeachPolicy(Player&)> *)&v6);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v6);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1341: range 0000000014EEAC76-0000000014EEACC6
ForeachPolicy __cdecl BaseScenePlayBattle::broadcastBattleResult(proto::ScenePlayBattleResultNotify const&)::{lambda(Player &)#1}::operator()(
        const BaseScenePlayBattle::broadcastBattleResult::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 1349: range 0000000014EEAEB6-0000000014EEB05E
PlayerWorldPtr __cdecl BaseScenePlayBattle::getWorld(const BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  void (__fastcall *v6)(const BaseScenePlayBattle *const, unsigned __int64); // rcx
  __int64 v7; // rsi
  PlayerWorldPtr result; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 scene_ptr:1350";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::getWorld;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    std::shared_ptr<PlayerWorld>::shared_ptr((std::shared_ptr<PlayerWorld> *const)this, 0LL);
  }
  else
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 64LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 64LL);
    v6 = *(void (__fastcall **)(const BaseScenePlayBattle *const, unsigned __int64))v5;
    v7 = *(unsigned __int16 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( (_WORD)v7 )
      v4 = __asan_report_store16(this, v7);
    v6(this, v4);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PlayerWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1360: range 0000000014EEB060-0000000014EEB1F9
uint32_t __cdecl BaseScenePlayBattle::getOwnerUid(const BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 scene_ptr:1361";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::getOwnerUid;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "getOwnerUid",
      1364);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v7,
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    OwnerUid = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    OwnerUid = Scene::getOwnerUid(v5);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = OwnerUid;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1372: range 0000000014EEB1FA-0000000014EEB393
uint32_t __cdecl BaseScenePlayBattle::getSceneId(const BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t SceneId; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 scene_ptr:1373";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::getSceneId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "getSceneId",
      1376);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v7,
      (const char (*)[34])"[SCENE_PLAY_BATTLE] scene is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    SceneId = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneId = Scene::getSceneId(v5);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = SceneId;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1384: range 0000000014EEB394-0000000014EEB4D6
PlayerPtr __cdecl BaseScenePlayBattle::getOwnerPlayer(const BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerPtr result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 scene_ptr:1385";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::getOwnerPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v1 + 32);
    Scene::getOwnPlayer((const Scene *const)this);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1395: range 0000000014EEB4D8-0000000014EEB931
void __cdecl BaseScenePlayBattle::onWorldPlayerChangeEvent(
        BaseScenePlayBattle *const this,
        const WorldPlayerChangeEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t OwnerUid; // ecx
  char v7; // al
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GameserverService *v10; // rax
  uint32_t v11; // ecx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  std::shared_ptr<Player> p_player_ptr; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 world_ptr:1396 64 16 15 player_ptr:1411";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onWorldPlayerChangeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v2 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
    goto LABEL_8;
  v5 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  OwnerUid = World::getOwnerUid(v5);
  if ( *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->owner_uid);
  }
  if ( OwnerUid == event->owner_uid )
    v7 = 0;
  else
LABEL_8:
    v7 = 1;
  if ( !v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->type_);
    }
    if ( this->type_ == Direct
      && (v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
          World::getPlayerCount(v8) > 1) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "onWorldPlayerChangeEvent",
        1406);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        &v15,
        (const char (*)[54])"[SCENE_PLAY_BATTLE] interrupt battle with direct type");
      common::milog::MiLogStream::~MiLogStream(&v15);
      BaseScenePlayBattle::interruptBattle(this);
    }
    else
    {
      v10 = ServiceBox::findService<GameserverService>();
      v11 = (unsigned int)GameserverService::getGameThreadLocal(v10) + 16;
      if ( *(_BYTE *)(((unsigned __int64)&event->change_uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->change_uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->change_uid);
      }
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), v11);
      if ( *(char *)(((unsigned __int64)&event->is_enter >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&event->is_enter);
      if ( event->is_enter )
      {
        std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v2 + 64));
        BaseScenePlayBattle::onPlayerJoin(this, &p_player_ptr, 1);
      }
      else
      {
        v12 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v13 = World::getPlayerCount(v12) > 1;
        std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v2 + 64));
        BaseScenePlayBattle::onPlayerExit(this, &p_player_ptr, 0, 0, v13);
      }
      std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  if ( v16 == (char *)v2 )
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

// Line 1423: range 0000000014EEB932-0000000014EEBB2B
void __cdecl BaseScenePlayBattle::onWorldMpModeChangeEvent(
        BaseScenePlayBattle *const this,
        const WorldMpModeChangeEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t OwnerUid; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // al
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 world_ptr:1425";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onWorldMpModeChangeEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v2 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
    goto LABEL_13;
  v5 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  OwnerUid = World::getOwnerUid(v5);
  if ( *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->owner_uid);
  }
  if ( OwnerUid != event->owner_uid )
    goto LABEL_13;
  v7 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  v8 = *(_QWORD *)v7 + 184LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)v7 + 184LL);
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) )
LABEL_13:
    v9 = 1;
  else
    v9 = 0;
  if ( !v9 )
    BaseScenePlayBattle::interruptBattle(this);
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1437: range 0000000014EEBB2C-0000000014EEBF75
void __cdecl BaseScenePlayBattle::onWorldAvatarDieEvent(
        BaseScenePlayBattle *const this,
        const WorldAvatarDieEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 v6; // rsi
  uint32_t play_type; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  char v9; // cl
  uint32_t play_id; // r14d
  __int64 v11; // rax
  char v12; // dl
  bool v13; // dl
  uint32_t uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  char v16; // cl
  std::shared_ptr<Event> p_evt_ptr; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-90h] BYREF
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 evt_ptr:1447";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::onWorldAvatarDieEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ && this->state_ != SCENE_PLAY_BATTLE_STOP )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_all_avatar_dead >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_all_avatar_dead >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_all_avatar_dead);
    }
    if ( event->is_all_avatar_dead )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "onWorldAvatarDieEvent",
        1446);
      v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v19,
             (const char (*)[42])"[SCENE_PLAY_BATTLE] all avatar dead, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &event->uid);
      common::milog::MiLogStream::~MiLogStream(&v19);
      EventUtil::createEvent((data::EventType)(v2 + 32));
      if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 32), 0LL) )
      {
        v6 = (((_BYTE)this + 60) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->play_type_);
        }
        play_type = this->play_type_;
        v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v9 = *(_BYTE *)(((unsigned __int64)&v8->param1 >> 3) + 0x7FFF8000);
        if ( v9 != 0 && (char)((((_BYTE)v8 + 44) & 7) + 3) >= v9 )
        {
          LOBYTE(v6) = v9 != 0;
          __asan_report_store4(&v8->param1, v6, (_BYTE)v8);
        }
        v8->param1 = play_type;
        if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->play_id_);
        }
        play_id = this->play_id_;
        v11 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v12 = *(_BYTE *)(((unsigned __int64)(v11 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(v6) = v12 != 0;
        v13 = v12 != 0 && v12 <= 3;
        if ( v13 )
          v11 = __asan_report_store4(v11 + 48, v6, v13);
        *(_DWORD *)(v11 + 48) = play_id;
        if ( *(_BYTE *)(((unsigned __int64)&event->uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->uid);
        }
        uid = event->uid;
        v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v16 = *(_BYTE *)(((unsigned __int64)&v15->uid >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)((((_BYTE)v15 + 60) & 7) + 3) >= v16 )
        {
          LOBYTE(v6) = v16 != 0;
          __asan_report_store4(&v15->uid, v6, (_BYTE)v15);
        }
        v15->uid = uid;
        std::shared_ptr<Event>::shared_ptr(&p_evt_ptr, (const std::shared_ptr<Event> *)(v2 + 32));
        BaseScenePlayBattle::notifyGroupEvent(this, &p_evt_ptr);
        std::shared_ptr<Event>::~shared_ptr(&p_evt_ptr);
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 32));
    }
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1459: range 0000000014EEBF76-0000000014EECF6C
void __cdecl BaseScenePlayBattle::onPlayerJoin(
        BaseScenePlayBattle *const this,
        PlayerPtr *p_player_ptr,
        bool is_halfway)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  Player *v6; // rdx
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Player *v12; // rax
  uint32_t WatcherComp; // eax
  bool v14; // bl
  Player *v15; // rax
  PlayerWatcherComp *v16; // rax
  Player *v17; // rax
  uint32_t v18; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  MpPlayExcelConfigMgr *v23; // rcx
  Player *v24; // rax
  PlayerExhibitionComp *ExhibitionComp; // rdi
  MpPlayExcelConfigMgr *v26; // rcx
  Player *v27; // rax
  PlayerAbilityGroupComp *v28; // r14
  common::milog::MiLogStream *j; // rbx
  Player *v30; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  common::milog::MiLogStream *i; // rbx
  Player *v33; // rax
  PlayerAbilityGroupComp *v34; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::weak_ptr<Player> *v36; // rdx
  Player *v37; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  Player *v42; // rbx
  std::string v43; // [rsp+0h] [rbp-1F0h]
  std::initializer_list<std::string > v44; // [rsp+20h] [rbp-1D0h]
  std::initializer_list<unsigned int> v45; // [rsp+30h] [rbp-1C0h]
  _DWORD *v46; // [rsp+40h] [rbp-1B0h]
  std::allocator<unsigned int> v49; // [rsp+6Fh] [rbp-181h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+70h] [rbp-180h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+80h] [rbp-170h] BYREF
  const std::vector<unsigned int> *watcher_id_vec; // [rsp+88h] [rbp-168h]
  const std::vector<unsigned int> *__for_range; // [rsp+90h] [rbp-160h]
  const data::MpPlayMatchExcelConfig *config_ptr; // [rsp+98h] [rbp-158h]
  const std::vector<data::MpPlayAbilityGroupExcelConfig> *ability_group_vec_ptr; // [rsp+A0h] [rbp-150h]
  const std::vector<data::MpPlayAbilityGroupExcelConfig> *__for_range_0; // [rsp+A8h] [rbp-148h]
  const data::MpPlayAbilityGroupExcelConfig *config; // [rsp+B0h] [rbp-140h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+B8h] [rbp-138h]
  std::shared_ptr<BaseWatcher> __a; // [rsp+C0h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v60; // [rsp+D0h] [rbp-120h] BYREF
  std::vector<unsigned int> avatar_id_vec; // [rsp+E0h] [rbp-110h] BYREF
  std::vector<unsigned int> entity_id_vec; // [rsp+100h] [rbp-F0h] BYREF
  common::milog::MiLogStream v63; // [rsp+120h] [rbp-D0h] BYREF
  char v64[176]; // [rsp+140h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v64;
  v43._M_dataplus._M_p = v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 11 holder:1532 48 4 15 watcher_id:1481 64 16 14 scene_ptr:1464 96 16 12 log_ptr:1533";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::onPlayerJoin;
  v46 = (_DWORD *)(v3 >> 3);
  v46[536862720] = -235802127;
  v46[536862721] = -234556927;
  v46[536862722] = -219021312;
  v46[536862723] = -202178560;
  if ( !std::operator==<Player>(0LL, p_player_ptr) )
  {
    BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    if ( this->state_ > SCENE_PLAY_BATTLE_READY
      && this->state_ <= SCENE_PLAY_BATTLE_START
      && is_halfway
      && std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL)
      && BaseScenePlayBattle::getPlayTeamEntityGadgetId(this) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      HIDWORD(__l._M_array) = BaseScenePlayBattle::createPlayTeamEntity(this, v6);
      if ( HIDWORD(__l._M_array) )
      {
        v43._M_string_length = (std::string::size_type)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        LODWORD(__l._M_array) = HIDWORD(__l._M_array);
        std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 32));
        std::vector<unsigned int>::vector(
          &entity_id_vec,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
          (const std::vector<unsigned int>::allocator_type *)(v3 + 32));
        Scene::notifyPlayTeamEntity((Scene *const)v43._M_string_length, &entity_id_vec);
        std::vector<unsigned int>::~vector(&entity_id_vec);
        std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 32));
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v60);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    watcher_id_vec = MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(p_mp_play_config_mgr, this->play_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v60);
    __for_range = watcher_id_vec;
    __l._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__l._M_len,
              &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l._M_len);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v3 + 48) = *v8;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v60);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60);
      watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                             &v9->design_config.txt_config_mgr.watcher_config_mgr,
                             *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v60);
      if ( watcher_config_ptr )
      {
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        WatcherComp = (unsigned int)Player::getWatcherComp(v12);
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&__a, WatcherComp);
        v14 = std::operator!=<BaseWatcher>(0LL, &__a);
        std::shared_ptr<BaseWatcher>::~shared_ptr(&__a);
        if ( v14 )
        {
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          v16 = Player::getWatcherComp(v15);
          PlayerWatcherComp::delWatcherAndNotify(v16, *(_DWORD *)(v3 + 48));
        }
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        v18 = (unsigned int)Player::getWatcherComp(v17);
        PlayerWatcherComp::addWatcherAndNotify((PlayerWatcherComp *const)&v60, v18, *(_DWORD *)(v3 + 48));
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v60);
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onPlayerJoin",
          1495);
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v63, (const char (*)[13])"add_watcher:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
        v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        LODWORD(__l._M_array) = Player::getUid(v22);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)&__l);
        common::milog::MiLogStream::~MiLogStream(&v63);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onPlayerJoin",
          1486);
        v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v63,
                (const char (*)[30])"findWatcherConfig watcher_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v63);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l._M_len);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v60);
    v23 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(v23, this->play_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v60);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->series_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->series_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->series_id);
      }
      if ( config_ptr->series_id )
      {
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        ExhibitionComp = Player::getExhibitionComp(v24);
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->series_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->series_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          ExhibitionComp = (PlayerExhibitionComp *)&config_ptr->series_id;
          __asan_report_load4(&config_ptr->series_id);
        }
        PlayerExhibitionComp::clearSeriesExhibitionReplaceableData(ExhibitionComp, config_ptr->series_id);
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v60);
    v26 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    ability_group_vec_ptr = MpPlayExcelConfigMgr::findAbilityGroupVecByPlayId(v26, this->play_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v60);
    if ( ability_group_vec_ptr )
    {
      __for_range_0 = ability_group_vec_ptr;
      __l._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<data::MpPlayAbilityGroupExcelConfig>::begin(ability_group_vec_ptr)._M_current;
      __for_end._M_current = (const unsigned int *)std::vector<data::MpPlayAbilityGroupExcelConfig>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *)&__l._M_len,
                (const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *)&__for_end) )
      {
        config = __gnu_cxx::__normal_iterator<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *const)&__l._M_len);
        if ( !(unsigned __int8)std::string::empty(&config->ability_group_name) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->avatar_id);
          }
          if ( config->avatar_id )
          {
            v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            AbilityGroupComp = Player::getAbilityGroupComp(v30);
            std::string::basic_string(&v63, &config->ability_group_name);
            v44._M_array = (std::initializer_list<std::string >::iterator)&v63;
            v44._M_len = 1LL;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v3 + 32));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)&entity_id_vec,
              v44,
              (const std::vector<std::string>::allocator_type *)(v3 + 32));
            if ( *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->avatar_id);
            }
            LODWORD(__l._M_array) = config->avatar_id;
            v45._M_array = (std::initializer_list<unsigned int>::iterator)&__l;
            v45._M_len = 1LL;
            std::allocator<unsigned int>::allocator(&v49);
            std::vector<unsigned int>::vector(&avatar_id_vec, v45, &v49);
            PlayerAbilityGroupComp::addAvatarFilterAbilityGroup(
              AbilityGroupComp,
              &avatar_id_vec,
              (const std::vector<std::string> *)&entity_id_vec,
              0);
            std::vector<unsigned int>::~vector(&avatar_id_vec);
            std::allocator<unsigned int>::~allocator(&v49);
            std::vector<std::string>::~vector((std::vector<std::string> *const)&entity_id_vec);
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v3 + 32));
            for ( i = (common::milog::MiLogStream *)v64; i != &v63; std::string::~string(i) )
              --i;
          }
          else
          {
            v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            v28 = Player::getAbilityGroupComp(v27);
            std::string::basic_string(&v63, &config->ability_group_name);
            v43._anon_0._M_allocated_capacity = (std::string::size_type)&v63;
            *(&v43._anon_0._M_allocated_capacity + 1) = 1LL;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v3 + 32));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)&entity_id_vec,
              (std::initializer_list<std::string >)v43._anon_0,
              (const std::vector<std::string>::allocator_type *)(v3 + 32));
            PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v28, (const std::vector<std::string> *)&entity_id_vec, 0);
            std::vector<std::string>::~vector((std::vector<std::string> *const)&entity_id_vec);
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v3 + 32));
            for ( j = (common::milog::MiLogStream *)v64; j != &v63; std::string::~string(j) )
              --j;
          }
        }
        __gnu_cxx::__normal_iterator<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *const)&__l._M_len);
      }
      v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      v34 = Player::getAbilityGroupComp(v33);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v34);
    }
    v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    LODWORD(__l._M_array) = Player::getUid(v35);
    v36 = std::map<unsigned int,std::weak_ptr<Player>>::operator[](
            &this->join_player_map_,
            (std::map<unsigned int,std::weak_ptr<Player>>::key_type *)&__l);
    std::weak_ptr<Player>::operator=<Player>(v36, p_player_ptr);
    v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    BasicComp = Player::getBasicComp(v37);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v63, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xB0Fu, v43);
    std::string::~string(&v63);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMpPlayJoin>();
    v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    proto_log::PlayerLogBodyMpPlayJoin::set_mp_play_id(v39, this->play_id_);
    v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyMpPlayJoin::set_transaction_no(v40, &this->transaction_no_);
    v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyMpPlayJoin::set_is_halfway(v41, is_halfway);
    v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v60, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpPlayJoin,void>(
      (std::shared_ptr<google::protobuf::Message> *const)&__a,
      (const std::shared_ptr<proto_log::PlayerLogBodyMpPlayJoin> *)(v3 + 96));
    Player::printStatLog(v42, (MessagePtr *)&__a, &v60, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__a);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v60);
    std::shared_ptr<proto_log::PlayerLogBodyMpPlayJoin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpPlayJoin> *const)(v3 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  if ( v43._M_dataplus._M_p == (std::string::pointer)v3 )
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
};

// Line 1541: range 0000000014EECFD0-0000000014EEDCDD
void __cdecl BaseScenePlayBattle::onPlayerExit(
        BaseScenePlayBattle *const this,
        PlayerPtr *p_player_ptr,
        uint32_t cost_time,
        bool is_win,
        bool is_mp)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Player *v12; // rax
  uint32_t WatcherComp; // eax
  bool v14; // bl
  Player *v15; // rax
  PlayerWatcherComp *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  MpPlayExcelConfigMgr *v21; // rcx
  Player *v22; // rax
  PlayerAbilityGroupComp *v23; // r15
  common::milog::MiLogStream *j; // rbx
  Player *v25; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r15
  common::milog::MiLogStream *i; // rbx
  Player *v28; // rax
  PlayerAbilityGroupComp *v29; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  Player *v31; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  Player *v37; // rax
  PlayerAvatarComp *AvatarComp; // rbx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  Player *v40; // rbx
  std::string v41; // [rsp+0h] [rbp-1C0h]
  std::initializer_list<std::string > v42; // [rsp+20h] [rbp-1A0h]
  std::initializer_list<unsigned int> v43; // [rsp+30h] [rbp-190h]
  std::allocator<unsigned int> __a; // [rsp+6Bh] [rbp-155h] BYREF
  std::map<unsigned int,std::map<std::string,long int>>::key_type __x; // [rsp+6Ch] [rbp-154h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+70h] [rbp-150h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+78h] [rbp-148h] BYREF
  const std::vector<unsigned int> *watcher_id_vec; // [rsp+80h] [rbp-140h]
  const std::vector<unsigned int> *__for_range; // [rsp+88h] [rbp-138h]
  const std::vector<data::MpPlayAbilityGroupExcelConfig> *ability_group_vec_ptr; // [rsp+90h] [rbp-130h]
  const std::vector<data::MpPlayAbilityGroupExcelConfig> *__for_range_0; // [rsp+98h] [rbp-128h]
  const data::MpPlayAbilityGroupExcelConfig *config; // [rsp+A0h] [rbp-120h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+A8h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+B0h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v58; // [rsp+C0h] [rbp-100h] BYREF
  std::vector<unsigned int> avatar_id_vec; // [rsp+D0h] [rbp-F0h] BYREF
  std::vector<std::string> group_vec; // [rsp+F0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v61; // [rsp+110h] [rbp-B0h] BYREF
  char v62[144]; // [rsp+130h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v62;
  v41._M_string_length = (std::string::size_type)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 1 11 holder:1590 48 4 15 watcher_id:1550 64 16 12 log_ptr:1591";
  *(_QWORD *)(v5 + 16) = BaseScenePlayBattle::onPlayerExit;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -202178560;
  if ( !std::operator==<Player>(0LL, p_player_ptr) )
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    __x = Player::getUid(v8);
    std::map<unsigned int,std::map<std::string,long>>::erase(&this->uid_value_map_, &__x);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v58);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    watcher_id_vec = MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(p_mp_play_config_mgr, this->play_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v58);
    __for_range = watcher_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v5 + 48) = *v10;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v58);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58);
      watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                             &v11->design_config.txt_config_mgr.watcher_config_mgr,
                             *(_DWORD *)(v5 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v58);
      if ( watcher_config_ptr )
      {
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        WatcherComp = (unsigned int)Player::getWatcherComp(v12);
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v58, WatcherComp);
        v14 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v58);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v58);
        if ( v14 )
        {
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          v16 = Player::getWatcherComp(v15);
          PlayerWatcherComp::delWatcher(v16, *(_DWORD *)(v5 + 48));
        }
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "onPlayerExit",
          1561);
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v61, (const char (*)[13])"del_watcher:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v5 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
        v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        __x = Player::getUid(v20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &__x);
        common::milog::MiLogStream::~MiLogStream(&v61);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v58);
    v21 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    ability_group_vec_ptr = MpPlayExcelConfigMgr::findAbilityGroupVecByPlayId(v21, this->play_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v58);
    if ( ability_group_vec_ptr )
    {
      __for_range_0 = ability_group_vec_ptr;
      __for_begin._M_current = (const unsigned int *)std::vector<data::MpPlayAbilityGroupExcelConfig>::begin(ability_group_vec_ptr)._M_current;
      __for_end._M_current = (const unsigned int *)std::vector<data::MpPlayAbilityGroupExcelConfig>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *)&__for_end) )
      {
        config = __gnu_cxx::__normal_iterator<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *const)&__for_begin);
        if ( !(unsigned __int8)std::string::empty(&config->ability_group_name) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->avatar_id);
          }
          if ( config->avatar_id )
          {
            v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            AbilityGroupComp = Player::getAbilityGroupComp(v25);
            std::string::basic_string(&v61, &config->ability_group_name);
            v42._M_array = (std::initializer_list<std::string >::iterator)&v61;
            v42._M_len = 1LL;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v5 + 32));
            std::vector<std::string>::vector(
              &group_vec,
              v42,
              (const std::vector<std::string>::allocator_type *)(v5 + 32));
            if ( *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->avatar_id);
            }
            __x = config->avatar_id;
            v43._M_array = &__x;
            v43._M_len = 1LL;
            std::allocator<unsigned int>::allocator(&__a);
            std::vector<unsigned int>::vector(&avatar_id_vec, v43, &__a);
            PlayerAbilityGroupComp::delAvatarFilterAbilityGroup(AbilityGroupComp, &avatar_id_vec, &group_vec);
            std::vector<unsigned int>::~vector(&avatar_id_vec);
            std::allocator<unsigned int>::~allocator(&__a);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v5 + 32));
            for ( i = (common::milog::MiLogStream *)v62; i != &v61; std::string::~string(i) )
              --i;
          }
          else
          {
            v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            v23 = Player::getAbilityGroupComp(v22);
            std::string::basic_string(&v61, &config->ability_group_name);
            v41._anon_0._M_allocated_capacity = (std::string::size_type)&v61;
            *(&v41._anon_0._M_allocated_capacity + 1) = 1LL;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v5 + 32));
            std::vector<std::string>::vector(
              &group_vec,
              (std::initializer_list<std::string >)v41._anon_0,
              (const std::vector<std::string>::allocator_type *)(v5 + 32));
            PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v23, &group_vec);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v5 + 32));
            for ( j = (common::milog::MiLogStream *)v62; j != &v61; std::string::~string(j) )
              --j;
          }
        }
        __gnu_cxx::__normal_iterator<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *const)&__for_begin);
      }
      v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      v29 = Player::getAbilityGroupComp(v28);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v29);
    }
    v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    __x = Player::getUid(v30);
    std::map<unsigned int,std::weak_ptr<Player>>::erase(&this->join_player_map_, &__x);
    v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    BasicComp = Player::getBasicComp(v31);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v61, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0xB10u, v41);
    std::string::~string(&v61);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMpPlayBattleStop>();
    v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    proto_log::PlayerLogBodyMpPlayBattleStop::set_mp_play_id(v33, this->play_id_);
    v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyMpPlayBattleStop::set_transaction_no(v34, &this->transaction_no_);
    v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyMpPlayBattleStop::set_cost_time(v35, cost_time);
    v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyMpPlayBattleStop::set_is_win(v36, is_win);
    v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    AvatarComp = Player::getAvatarComp(v37);
    std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::shared_ptr(
      (std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop> *const)&v58,
      (const std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop> *)(v5 + 64));
    std::function<ForeachPolicy ()(Avatar &)>::function<BaseScenePlayBattle::onPlayerExit(std::shared_ptr<Player>,unsigned int,bool,bool)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v61,
      (BaseScenePlayBattle::onPlayerExit::<lambda(Avatar&)> *)&v58);
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v61);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v61);
    BaseScenePlayBattle::onPlayerExit(std::shared_ptr<Player>,unsigned int,bool,bool)::{lambda(Avatar &)#1}::~Avatar((BaseScenePlayBattle::onPlayerExit::<lambda(Avatar&)> *const)&v58);
    v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyMpPlayBattleStop::set_is_mp(v39, is_mp);
    v40 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v58, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop> *)(v5 + 64));
    Player::printStatLog(v40, &p_body_ptr, &v58, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v58);
    std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop> *const)(v5 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
  }
  if ( v41._M_string_length == v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1596: range 0000000014EECF6E-0000000014EECFB2
ForeachPolicy __cdecl BaseScenePlayBattle::onPlayerExit(std::shared_ptr<Player>,unsigned int,bool,bool)::{lambda(Avatar &)#1}::operator()(
        const BaseScenePlayBattle::onPlayerExit::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  uint32_t AvatarId; // eax

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::PlayerLogBodyMpPlayBattleStop::add_avatar_id_list(v2, AvatarId);
  return 0;
};

// Line 1596: range 0000000014F5C9DA-0000000014F5C9FF
void __cdecl BaseScenePlayBattle::onPlayerExit(std::shared_ptr<Player>,unsigned int,bool,bool)::{lambda(Avatar &)#1}::Avatar(
        BaseScenePlayBattle::onPlayerExit::<lambda(Avatar&)> *const this,
        BaseScenePlayBattle::onPlayerExit::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 1596: range 0000000014F5CACA-0000000014F5CAEF
void __cdecl BaseScenePlayBattle::onPlayerExit(std::shared_ptr<Player>,unsigned int,bool,bool)::{lambda(Avatar &)#1}::Avatar(
        BaseScenePlayBattle::onPlayerExit::<lambda(Avatar&)> *const this,
        const BaseScenePlayBattle::onPlayerExit::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 1596: range 0000000014EECFB4-0000000014EECFCE
void __cdecl BaseScenePlayBattle::onPlayerExit(std::shared_ptr<Player>,unsigned int,bool,bool)::{lambda(Avatar &)#1}::~Avatar(
        BaseScenePlayBattle::onPlayerExit::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::~shared_ptr(&this->__log_ptr);
};

// Line 1607: range 0000000014EEDCDE-0000000014EEDE9D
void __cdecl BaseScenePlayBattle::fillServerLuaCallGroupSet(
        BaseScenePlayBattle *const this,
        std::set<unsigned int> *group_id_set)
{
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  const unsigned int *M_current; // rbx
  const unsigned int *v5; // rcx
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+10h] [rbp-50h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr(&v7);
    if ( entry_config_ptr )
    {
      M_current = std::vector<unsigned int>::end(&entry_config_ptr->server_lua_call_group_list)._M_current;
      v5 = std::vector<unsigned int>::begin(&entry_config_ptr->server_lua_call_group_list)._M_current;
      std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        group_id_set,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v5,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "fillServerLuaCallGroupSet",
        1616);
      v3 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v8,
             (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
};

// Line 1625: range 0000000014EEDE9E-0000000014EEE0F9
__int64 __fastcall BaseScenePlayBattle::setPlayTeamEntityGadgetId(BaseScenePlayBattle *const this, uint32_t gadget_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int v5; // eax
  __int64 v6; // rsi
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  uint32_t v11; // ecx
  char v12; // al
  std::shared_ptr<Config> v13; // [rsp+10h] [rbp-B0h] BYREF
  std::shared_ptr<data::ConfigGadget> __a; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 gadget_id:1624";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::setPlayTeamEntityGadgetId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gadget_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)&__a, v5 + 93080);
  v6 = 0LL;
  v7 = std::operator==<data::ConfigGadget>(&__a, 0LL);
  std::shared_ptr<data::ConfigGadget>::~shared_ptr(&__a);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "setPlayTeamEntityGadgetId",
      1628);
    v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v15,
           (const char (*)[57])"[SCENE_PLAY_BATTLE] setPlayTeamEntityGadgetId config_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])off_256205A0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = *(_DWORD *)(v2 + 32);
    v12 = *(_BYTE *)(((unsigned __int64)&this->play_team_entity_gadget_id_ >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(v6) = v12 != 0;
      __asan_report_store4(&this->play_team_entity_gadget_id_, v6, (_BYTE)this - 40);
    }
    this->play_team_entity_gadget_id_ = v11;
    result = 0LL;
  }
  if ( v16 == (char *)v2 )
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

// Line 1636: range 0000000014EEE0FA-0000000014EEE486
void __fastcall BaseScenePlayBattle::onMonsterHurt(
        BaseScenePlayBattle *const this,
        uint32_t attacker_uid,
        uint32_t group_id,
        uint32_t config_id,
        float damage_val)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::unordered_map<unsigned int,ScenePlayGroupStat>::mapped_type *v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::unordered_map<unsigned int,ScenePlayGroupStat>::mapped_type *v17; // rax
  std::map<unsigned int,float>::mapped_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::mapped_type *player_group_map; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 17 attacker_uid:1635 48 4 13 group_id:1635 64 4 14 config_id:1635 80 4 15 damage_val:1635"
                        " 96 8 17 monster_pair:1641";
  *(_QWORD *)(v5 + 16) = BaseScenePlayBattle::onMonsterHurt;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -202116352;
  *(_DWORD *)(v5 + 32) = attacker_uid;
  *(_DWORD *)(v5 + 48) = group_id;
  *(_DWORD *)(v5 + 64) = config_id;
  *(float *)(v5 + 80) = damage_val;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == SCENE_PLAY_BATTLE_START )
  {
    std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
      (std::pair<unsigned int,unsigned int> *const)(v5 + 96),
      (unsigned int *)(v5 + 48),
      (unsigned int *)(v5 + 64));
    if ( common::tools::MiscUtils::isContains<std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>,std::pair<unsigned int,unsigned int>>(
           &this->combat_statistic_target_set_,
           (const std::pair<unsigned int,unsigned int> *)(v5 + 96)) )
    {
      player_group_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::operator[](
                           &this->player_monster_combat_statistic_map_,
                           (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::key_type *)(v5 + 32));
      v8 = std::unordered_map<unsigned int,ScenePlayGroupStat>::operator[](
             player_group_map,
             (const std::unordered_map<unsigned int,ScenePlayGroupStat>::key_type *)(v5 + 48));
      v9 = (unsigned __int64)std::map<unsigned int,float>::operator[](
                               &v8->hurt_monster_map,
                               (const std::map<unsigned int,float>::key_type *)(v5 + 64));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load4(v9);
      *(float *)v9 = *(float *)(v5 + 80) + *(float *)v9;
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "onMonsterHurt",
        1649);
      v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v24,
              (const char (*)[44])"[SCENE_PLAY_BATTLE] onMonsterHurt group_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])", config_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])", damage_val:");
      v15 = common::milog::MiLogStream::operator<<<float,(float *)0>(v14, (const float *)(v5 + 80));
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" total_damage:");
      v17 = std::unordered_map<unsigned int,ScenePlayGroupStat>::operator[](
              player_group_map,
              (const std::unordered_map<unsigned int,ScenePlayGroupStat>::key_type *)(v5 + 48));
      v18 = std::map<unsigned int,float>::operator[](
              &v17->hurt_monster_map,
              (const std::map<unsigned int,float>::key_type *)(v5 + 64));
      v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v16, v18);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
  }
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1654: range 0000000014EEE488-0000000014EEE7BD
void __fastcall BaseScenePlayBattle::onMonsterDie(
        BaseScenePlayBattle *const this,
        uint32_t killer_uid,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::unordered_map<unsigned int,ScenePlayGroupStat>::mapped_type *v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::mapped_type *player_group_stat; // [rsp+28h] [rbp-C8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+50h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 15 killer_uid:1653 64 4 13 group_id:1653 80 4 14 config_id:1653 96 8 17 monster_pair:1659";
  *(_QWORD *)(v4 + 16) = BaseScenePlayBattle::onMonsterDie;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = killer_uid;
  *(_DWORD *)(v4 + 64) = group_id;
  *(_DWORD *)(v4 + 80) = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == SCENE_PLAY_BATTLE_START )
  {
    std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
      (std::pair<unsigned int,unsigned int> *const)(v4 + 96),
      (unsigned int *)(v4 + 64),
      (unsigned int *)(v4 + 80));
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->combat_statistic_group_set_,
           (const unsigned int *)(v4 + 64))
      || common::tools::MiscUtils::isContains<std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>,std::pair<unsigned int,unsigned int>>(
           &this->combat_statistic_target_set_,
           (const std::pair<unsigned int,unsigned int> *)(v4 + 96)) )
    {
      player_group_stat = std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::operator[](
                            &this->player_monster_combat_statistic_map_,
                            (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::key_type *)(v4 + 48));
      v8 = std::unordered_map<unsigned int,ScenePlayGroupStat>::operator[](
             player_group_stat,
             (const std::unordered_map<unsigned int,ScenePlayGroupStat>::key_type *)(v4 + 64));
      v9 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                               &v8->kill_monster_map,
                               (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 80));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load4(v9);
      ++*(_DWORD *)v9;
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "onMonsterDie",
        1667);
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v18,
              (const char (*)[43])"[SCENE_PLAY_BATTLE] onMonsterDie group_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])", config_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])", killer_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1672: range 0000000014EEFEC0-0000000014EF1151
void __cdecl BaseScenePlayBattle::calcPlayerBattleStat(BaseScenePlayBattle *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  data::MpPlayerSettleType settle_type; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v9; // rax
  std::vector<std::pair<unsigned int,unsigned int>>::iterator v10; // rax
  std::pair<unsigned int,unsigned int> *v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v12; // rax
  __m128i v13; // xmm0
  std::_Rb_tree_const_iterator<unsigned int>::reference v14; // rax
  _DWORD *v15; // rdx
  std::map<unsigned int,unsigned int> *v16; // rax
  char *v17; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rax
  int *v19; // rdx
  char v20; // cl
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v21; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v22; // rax
  _DWORD *v23; // rdx
  std::map<unsigned int,unsigned int> *v24; // rax
  char *v25; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v26; // rax
  _DWORD *v27; // rdx
  char v28; // cl
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v29; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v30; // rax
  std::map<unsigned int,unsigned int> *v31; // rax
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v32; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v33; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v34; // rdx
  char v35; // cl
  BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>_0 v36; // [rsp-20h] [rbp-4B0h]
  BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>_1 v37; // [rsp-20h] [rbp-4B0h]
  BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>_2 v38; // [rsp-20h] [rbp-4B0h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *__lastd; // [rsp+10h] [rbp-480h]
  std::pair<unsigned int,unsigned int> *__laste; // [rsp+10h] [rbp-480h]
  std::map<unsigned int,unsigned int> *__lastf; // [rsp+10h] [rbp-480h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *__lastg; // [rsp+10h] [rbp-480h]
  int __last; // [rsp+10h] [rbp-480h]
  int __lasta; // [rsp+10h] [rbp-480h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *__lasth; // [rsp+10h] [rbp-480h]
  int __lastb; // [rsp+10h] [rbp-480h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *__lasti; // [rsp+10h] [rbp-480h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type __lastc; // [rsp+10h] [rbp-480h]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-470h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-468h] BYREF
  const MpPlayExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-460h]
  const std::unordered_set<unsigned int> *statistic_id_set; // [rsp+38h] [rbp-458h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+40h] [rbp-450h]
  const data::MpPlayStatisticConfig *stat_config_ptr; // [rsp+48h] [rbp-448h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+50h] [rbp-440h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+58h] [rbp-438h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+60h] [rbp-430h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+68h] [rbp-428h]
  std::set<unsigned int> *__for_range_1; // [rsp+70h] [rbp-420h]
  std::set<unsigned int> *__for_range_0; // [rsp+78h] [rbp-418h]
  BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>_2 v61; // [rsp+80h] [rbp-410h]
  common::milog::MiLogStream v62; // [rsp+A0h] [rbp-3F0h] BYREF
  common::milog::MiLogStream v63; // [rsp+C0h] [rbp-3D0h] BYREF
  common::milog::MiLogStream v64; // [rsp+E0h] [rbp-3B0h] BYREF
  common::milog::MiLogStream v65; // [rsp+100h] [rbp-390h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+120h] [rbp-370h] BYREF
  BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>_0 __f; // [rsp+140h] [rbp-350h]
  common::milog::MiLogStream v68; // [rsp+160h] [rbp-330h] BYREF
  char v69[784]; // [rsp+180h] [rbp-310h] BYREF

  v1 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(736LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "16 48 4 12 stat_id:1681 64 4 15 damage_val:1747 80 4 13 kill_num:1806 96 4 8 uid:1845 112 8 22 s"
                        "ettle_param_iter:1689 144 8 13 max_iter:1720 176 8 10 param:1700 208 8 17 monster_pair:1745 240 "
                        "8 10 param:1854 272 12 10 param:1739 304 16 14 world_ptr:1675 336 24 21 uid_progress_vec:1706 40"
                        "0 48 24 take_damage_uid_set:1746 480 48 12 uid_set:1807 560 48 12 uid_map:1860 640 64 10 param:1800";
  *(_QWORD *)(v1 + 16) = BaseScenePlayBattle::calcPlayerBattleStat;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = 61956;
  v3[536862723] = -234881024;
  v3[536862724] = 62194;
  v3[536862724] = -234881024;
  v3[536862725] = 62194;
  v3[536862725] = -234881024;
  v3[536862726] = 62194;
  v3[536862726] = -234881024;
  v3[536862727] = 62194;
  v3[536862727] = -234881024;
  v3[536862728] = 62194;
  v3[536862728] = 0x4000000;
  v3[536862729] = 62194;
  v3[536862730] = 62194;
  v3[536862731] = -218959360;
  v3[536862732] = 62194;
  v3[536862734] = -218959118;
  v3[536862736] = -219021312;
  v3[536862737] = 62194;
  v3[536862739] = -218959118;
  v3[536862742] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 304));
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 304))->design_config.txt_config_mgr.mp_play_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 304));
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  statistic_id_set = MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(config_mgr, this->play_id_);
  BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v1 + 304));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 304)) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "calcPlayerBattleStat",
      1678);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v68,
      (const char (*)[38])"[SCENE_PLAY_BATTLE] world_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v68);
  }
  else
  {
    __for_range = statistic_id_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(statistic_id_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(statistic_id_set)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v4 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      *(_DWORD *)(v1 + 48) = *v5;
      stat_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayStatisticConfig(config_mgr, *(_DWORD *)(v1 + 48));
      if ( !stat_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "calcPlayerBattleStat",
          1686);
        v6 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
               &v62,
               (const char (*)[70])"[SCENE_PLAY_BATTLE] mp_play_settle_param_map not found, statistic_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v62);
        break;
      }
      *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v1 + 112) = std::unordered_map<unsigned int,std::any>::find(
                                                                                   &config_mgr->mp_play_settle_param_map,
                                                                                   (const std::unordered_map<unsigned int,std::any>::key_type *)(v1 + 48));
      *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v1 + 240) = std::unordered_map<unsigned int,std::any>::end(&config_mgr->mp_play_settle_param_map);
      if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v1 + 112),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v1 + 240)) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "calcPlayerBattleStat",
          1692);
        v7 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
               &v63,
               (const char (*)[65])"[SCENE_PLAY_BATTLE] mp_play_settle_param_map not found, stat_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v63);
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->settle_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stat_config_ptr->settle_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stat_config_ptr->settle_type);
      }
      settle_type = stat_config_ptr->settle_type;
      if ( settle_type == MP_PLAY_SETTLE_TYPE_MONSTER_KILLER )
      {
        v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v1 + 112));
        *(MpPlaySettleSpecifiedMonsterKillerParam *)(v1 + 240) = tryAnyCast<MpPlaySettleSpecifiedMonsterKillerParam>(&v29->second);
        if ( !*(_DWORD *)(v1 + 240) || !*(_DWORD *)(v1 + 244) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_func,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "calcPlayerBattleStat",
            1857);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)&p_func,
            (const char (*)[38])"[SCENE_PLAY_BATTLE] tryAnyCast failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
          break;
        }
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v1 + 560));
        __lasti = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 304));
        v61.__this = this;
        v61.__uid_map = (std::map<unsigned int,unsigned int> *)(v1 + 560);
        v61.__param = (MpPlaySettleSpecifiedMonsterKillerParam *)(v1 + 240);
        v38.__param = (MpPlaySettleSpecifiedMonsterKillerParam *)(v1 + 240);
        v38.__uid_map = (std::map<unsigned int,unsigned int> *)(v1 + 560);
        v38.__this = this;
        std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#5},void,void>(
          &p_func,
          v38);
        World::foreachPlayer(__lasti, &p_func);
        std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
        __for_range_2 = (std::map<unsigned int,unsigned int> *)(v1 + 560);
        *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 176) = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v1 + 560));
        *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 208) = std::map<unsigned int,unsigned int>::end(__for_range_2);
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 176),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 208)) )
        {
          __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 176));
          uid = std::get<0ul,unsigned int const,unsigned int>(__in);
          v30 = std::get<1ul,unsigned int const,unsigned int>(__in);
          num = v30;
          if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v30);
          }
          __lastc = *num;
          v31 = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                  &this->player_battle_stat_map_,
                  (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v1 + 48));
          v32 = uid;
          v33 = std::map<unsigned int,unsigned int>::operator[](v31, uid);
          v34 = v33;
          v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
          if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
          {
            LOBYTE(v32) = v35 != 0;
            __asan_report_store4(v33, v32, (_BYTE)v33);
          }
          *v34 = __lastc;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 176));
        }
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v1 + 560));
      }
      else if ( settle_type <= MP_PLAY_SETTLE_TYPE_MONSTER_KILLER )
      {
        switch ( settle_type )
        {
          case MP_PLAY_SETTLE_TYPE_MONSTER_KILL_NUM:
            v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v1 + 112));
            tryAnyCast<MpPlaySettleMonsterKillNumParam>((MpPlaySettleMonsterKillNumParam *)(v1 + 640), &v21->second);
            if ( *(_DWORD *)(v1 + 640) )
            {
              *(_DWORD *)(v1 + 80) = 0;
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 480));
              __lasth = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 304));
              v68.log_ = (common::milog::MiLog *)this;
              v68.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v1 + 480);
              v68.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v1 + 80);
              v68.ostr_ = (common::milog::MilogStringStream *)(v1 + 640);
              v37.__param = (MpPlaySettleMonsterKillNumParam *)(v1 + 640);
              v37.__kill_num = (uint32_t *)(v1 + 80);
              v37.__uid_set = (std::set<unsigned int> *)(v1 + 480);
              v37.__this = this;
              std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#4},void,void>(
                &p_func,
                v37);
              World::foreachPlayer(__lasth, &p_func);
              std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
              __for_range_1 = (std::set<unsigned int> *)(v1 + 480);
              *(std::set<unsigned int>::iterator *)(v1 + 208) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 480));
              *(std::set<unsigned int>::iterator *)(v1 + 240) = std::set<unsigned int>::end(__for_range_1);
              while ( std::operator!=(
                        (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v1 + 208),
                        (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v1 + 240)) )
              {
                v22 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v1 + 208));
                v23 = v22;
                if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v22);
                }
                *(_DWORD *)(v1 + 96) = *v23;
                __lastb = *(_DWORD *)(v1 + 80);
                v24 = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                        &this->player_battle_stat_map_,
                        (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v1 + 48));
                v25 = (char *)(v1 + 96);
                v26 = std::map<unsigned int,unsigned int>::operator[](
                        v24,
                        (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 96));
                v27 = v26;
                v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
                if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
                {
                  LOBYTE(v25) = v28 != 0;
                  __asan_report_store4(v26, v25, (_BYTE)v26);
                }
                *v27 = __lastb;
                std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v1 + 208));
              }
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 480));
              __lasta = 1;
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_func,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play_battle.cpp",
                "calcPlayerBattleStat",
                1803);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[38])"[SCENE_PLAY_BATTLE] tryAnyCast failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
              __lasta = 0;
            }
            MpPlaySettleMonsterKillNumParam::~MpPlaySettleMonsterKillNumParam((MpPlaySettleMonsterKillNumParam *const)(v1 + 640));
            if ( !__lasta )
              goto LABEL_66;
            break;
          case MP_PLAY_SETTLE_TYPE_WATCHER_PROGRESS:
            v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v1 + 112));
            *(MpPlaySettleWatcherProgressParam *)(v1 + 176) = tryAnyCast<MpPlaySettleWatcherProgressParam>(&v9->second);
            if ( !*(_DWORD *)(v1 + 176) )
            {
              common::milog::MiLogStream::create(
                &v64,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play_battle.cpp",
                "calcPlayerBattleStat",
                1703);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v64,
                (const char (*)[38])"[SCENE_PLAY_BATTLE] tryAnyCast failed");
              common::milog::MiLogStream::~MiLogStream(&v64);
              goto LABEL_66;
            }
            std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 336));
            __lastd = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 304));
            std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#1},void,void>(
              &p_func,
              (BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>)__PAIR128__(v1 + 176, v1 + 336));
            World::foreachPlayer(__lastd, &p_func);
            std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
            __laste = std::vector<std::pair<unsigned int,unsigned int>>::end((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 336))._M_current;
            v10._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 336))._M_current;
            *(__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v1 + 144) = std::max_element___gnu_cxx::__normal_iterator_std::pair_unsigned_int_unsigned_int___std::vector_std::pair_unsigned_int_unsigned_int______BaseScenePlayBattle::calcPlayerBattleStat__::_lambda_auto_23_auto_24____(v10, (__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)__laste, (BaseScenePlayBattle::calcPlayerBattleStat::<lambda(auto:23, auto:24)>)(v1 + 176));
            *(std::vector<std::pair<unsigned int,unsigned int>>::iterator *)(v1 + 240) = std::vector<std::pair<unsigned int,unsigned int>>::end((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 336));
            if ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
                   (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v1 + 144),
                   (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v1 + 240)) )
            {
              __lastf = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                          &this->player_battle_stat_map_,
                          (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v1 + 48));
              v11 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v1 + 144));
              std::map<unsigned int,unsigned int>::insert<std::pair&<unsigned int,unsigned int>>(__lastf, v11);
            }
            std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 336));
            break;
          case MP_PLAY_SETTLE_TYPE_MONSTER_TAKE_DEMAGE:
            v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v1 + 112));
            *(MpPlaySettleSpecifiedMonsterTakeDamageParam *)(v1 + 272) = tryAnyCast<MpPlaySettleSpecifiedMonsterTakeDamageParam>(&v12->second);
            if ( !*(_DWORD *)(v1 + 272) || !*(_DWORD *)(v1 + 276) )
            {
              common::milog::MiLogStream::create(
                &v65,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play_battle.cpp",
                "calcPlayerBattleStat",
                1742);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v65,
                (const char (*)[38])"[SCENE_PLAY_BATTLE] tryAnyCast failed");
              common::milog::MiLogStream::~MiLogStream(&v65);
              goto LABEL_66;
            }
            std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
              (std::pair<unsigned int,unsigned int> *const)(v1 + 208),
              (unsigned int *)(v1 + 272),
              (unsigned int *)(v1 + 276));
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 400));
            v13 = 0LL;
            *(_DWORD *)(v1 + 64) = 0;
            if ( *(_BYTE *)(v1 + 280) != 1 )
            {
              *(float *)v13.m128i_i32 = std::numeric_limits<float>::max();
              *(_DWORD *)(v1 + 64) = _mm_cvtsi128_si32(v13);
            }
            __lastg = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 304));
            __f.__this = this;
            __f.__take_damage_uid_set = (std::set<unsigned int> *)(v1 + 400);
            __f.__damage_val = (float *)(v1 + 64);
            __f.__param = (MpPlaySettleSpecifiedMonsterTakeDamageParam *)(v1 + 272);
            v36.__param = (MpPlaySettleSpecifiedMonsterTakeDamageParam *)(v1 + 272);
            v36.__damage_val = (float *)(v1 + 64);
            v36.__take_damage_uid_set = (std::set<unsigned int> *)(v1 + 400);
            v36.__this = this;
            std::function<ForeachPolicy ()(Player &)>::function<BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#3},void,void>(
              &p_func,
              v36);
            World::foreachPlayer(__lastg, &p_func);
            std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
            __for_range_0 = (std::set<unsigned int> *)(v1 + 400);
            *(std::set<unsigned int>::iterator *)(v1 + 176) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 400));
            *(std::set<unsigned int>::iterator *)(v1 + 240) = std::set<unsigned int>::end(__for_range_0);
            while ( std::operator!=(
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v1 + 176),
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v1 + 240)) )
            {
              v14 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v1 + 176));
              v15 = v14;
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v14);
              }
              *(_DWORD *)(v1 + 96) = *v15;
              __last = (int)*(float *)(v1 + 64);
              v16 = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                      &this->player_battle_stat_map_,
                      (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v1 + 48));
              v17 = (char *)(v1 + 96);
              v18 = std::map<unsigned int,unsigned int>::operator[](
                      v16,
                      (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 96));
              v19 = (int *)v18;
              v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
              if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
              {
                LOBYTE(v17) = v20 != 0;
                __asan_report_store4(v18, v17, (_BYTE)v18);
              }
              *v19 = __last;
              std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v1 + 176));
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 400));
            break;
        }
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
  }
LABEL_66:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 304));
  if ( v69 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8058) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8058) = -168430091;
  }
};

// Line 1707: range 0000000014EEE7BE-0000000014EEEA19
ForeachPolicy __cdecl BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#1}::operator()(
        const BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t WatcherComp; // esi
  char v6; // cl
  std::vector<std::pair<unsigned int,unsigned int>> *uid_progress_vec; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int *v9; // rcx
  unsigned int *v10; // r8
  std::vector<std::pair<unsigned int,unsigned int>> *v11; // r14
  unsigned int *v12; // rcx
  int *v13; // r8
  ForeachPolicy result; // eax
  unsigned int Uid; // [rsp+18h] [rbp-78h] BYREF
  unsigned int Progress; // [rsp+1Ch] [rbp-74h] BYREF
  char v18[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 watcher_ptr:1709";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  WatcherComp = (unsigned int)Player::getWatcherComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  v6 = *(_BYTE *)(((unsigned __int64)__closure->__param >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)(((__int64)__closure->__param & 7) + 3) >= v6 )
    __asan_report_load4(__closure->__param);
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 32), WatcherComp);
  if ( std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    uid_progress_vec = __closure->__uid_progress_vec;
    v8 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Progress = BaseWatcher::getProgress(v8);
    Uid = Player::getUid(player);
    std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int,unsigned int>(
      uid_progress_vec,
      &Uid,
      &Progress,
      v9,
      v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v11 = __closure->__uid_progress_vec;
    Progress = 0;
    Uid = Player::getUid(player);
    std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int,int>(
      v11,
      &Uid,
      (int *)&Progress,
      v12,
      v13);
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v18 == (char *)v2 )
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

// Line 1720: range 0000000014F567A8-0000000014F56A16
bool __fastcall BaseScenePlayBattle::calcPlayerBattleStat::_lambda_auto_23__auto_24__::operator()_std::pair_unsigned_int_unsigned_int__std::pair_unsigned_int_unsigned_int___(
        unsigned __int64 __closure,
        std::pair<unsigned int,unsigned int> lhs,
        std::pair<unsigned int,unsigned int> rhs)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  _DWORD *v6; // rdx
  MpPlaySettleWatcherProgressParam *v7; // rsi
  char v8; // di
  char v9; // si
  __int64 v10; // rdi
  char v11; // si
  bool result; // al
  char v13; // si
  __int64 v14; // rdi
  char v15; // si
  char v18[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 96;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 lhs:1720 64 8 8 rhs:1720";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::calcPlayerBattleStat::_lambda_auto_23__auto_24__::operator()_std::pair_unsigned_int_unsigned_int__std::pair_unsigned_int_unsigned_int___;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(std::pair<unsigned int,unsigned int> *)(v3 + 32) = lhs;
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = rhs;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(__closure);
  v7 = *(MpPlaySettleWatcherProgressParam **)__closure;
  v8 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 4LL) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && ((*(_BYTE *)__closure + 4) & 7) >= v8 )
    v5 = __asan_report_load1(*(_QWORD *)__closure + 4LL);
  if ( v7->is_max )
  {
    v9 = *(_BYTE *)(((unsigned __int64)(v5 - 64 + 4) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((v5 - 64 + 4) & 7) + 3) >= v9 )
      v5 = __asan_report_load4(v5 - 64 + 4);
    LODWORD(v10) = *(_DWORD *)(v5 - 60);
    v11 = *(_BYTE *)(((unsigned __int64)(v5 - 32 + 4) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((v5 - 32 + 4) & 7) + 3) >= v11 )
    {
      v10 = v5 - 32 + 4;
      v5 = __asan_report_load4(v10);
    }
    result = (unsigned int)v10 < *(_DWORD *)(v5 - 28);
  }
  else
  {
    v13 = *(_BYTE *)(((unsigned __int64)(v5 - 64 + 4) >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((v5 - 64 + 4) & 7) + 3) >= v13 )
      v5 = __asan_report_load4(v5 - 64 + 4);
    LODWORD(v14) = *(_DWORD *)(v5 - 60);
    v15 = *(_BYTE *)(((unsigned __int64)(v5 - 32 + 4) >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((v5 - 32 + 4) & 7) + 3) >= v15 )
    {
      v14 = v5 - 32 + 4;
      v5 = __asan_report_load4(v14);
    }
    result = (unsigned int)v14 > *(_DWORD *)(v5 - 28);
  }
  if ( v18 == (char *)v3 )
  {
    *((_QWORD *)v6 + 268431360) = 0LL;
    v6[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *((_QWORD *)v6 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v6[536862722] = -168430091;
  }
  return result;
};

// Line 1752: range 0000000014EEEA1A-0000000014EEF33C
ForeachPolicy __cdecl BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#3}::operator()(
        const BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>> *p_player_monster_combat_statistic_map; // r14
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false> *p_y; // rsi
  std::unordered_map<unsigned int,ScenePlayGroupStat> *p_second; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false>::pointer v8; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,ScenePlayGroupStat>,false,false>::pointer v9; // rax
  std::map<unsigned int,float> *p_hurt_monster_map; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::pointer v11; // rdx
  float *v12; // rax
  MpPlaySettleSpecifiedMonsterTakeDamageParam *param; // rdx
  float *damage_val; // rdx
  MpPlaySettleSpecifiedMonsterTakeDamageParam *v15; // rdx
  float *v16; // rdx
  std::set<unsigned int> *take_damage_uid_set; // rbx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::key_type *p_x; // rsi
  float *v19; // rdx
  char v20; // cl
  float *v21; // rdx
  std::set<unsigned int> *v22; // rbx
  ForeachPolicy result; // eax
  MpPlaySettleSpecifiedMonsterTakeDamageParam *v24; // rdx
  float *v25; // rdx
  float *v26; // rdx
  char v27; // cl
  std::set<unsigned int> *v28; // rbx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::key_type __x; // [rsp+18h] [rbp-C8h] BYREF
  float damage; // [rsp+1Ch] [rbp-C4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false> __y; // [rsp+20h] [rbp-C0h] BYREF
  ScenePlayGroupStat *player_group; // [rsp+28h] [rbp-B8h]
  char v34[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 23 player_combat_iter:1754 64 8 22 player_group_iter:1757 96 8 9 iter:1762";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_player_monster_combat_statistic_map = &__closure->__this->player_monster_combat_statistic_map_;
  __x = Player::getUid(player);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::find(p_player_monster_combat_statistic_map, &__x);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __y._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::end(&__closure->__this->player_monster_combat_statistic_map_)._M_cur;
  p_y = &__y;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false> *)(v2 + 32),
          &__y) )
    goto LABEL_82;
  p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false> *const)(v2 + 32))->second;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  *(std::unordered_map<unsigned int,ScenePlayGroupStat>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,ScenePlayGroupStat>::find(
                                                                                  p_second,
                                                                                  &__closure->__param->group_id);
  v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false> *const)(v2 + 32));
  __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false>::__node_type *)std::unordered_map<unsigned int,ScenePlayGroupStat>::end(&v8->second)._M_cur;
  p_y = &__y;
  if ( std::__detail::operator!=<std::pair<unsigned int const,ScenePlayGroupStat>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ScenePlayGroupStat>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ScenePlayGroupStat>,false> *)&__y) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,ScenePlayGroupStat>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ScenePlayGroupStat>,false,false> *const)(v2 + 64));
    player_group = &v9->second;
    damage = 0.0;
    p_hurt_monster_map = &v9->second.hurt_monster_map;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param);
    *(std::map<unsigned int,float>::iterator *)(v2 + 96) = std::map<unsigned int,float>::find(
                                                             p_hurt_monster_map,
                                                             &__closure->__param->config_id);
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false>::__node_type *)std::map<unsigned int,float>::end(&player_group->hurt_monster_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 96),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::_Self *)&__y) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,float> > *const)(v2 + 96));
      v12 = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      damage = v11->second;
    }
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param);
    param = __closure->__param;
    if ( *(_BYTE *)(((unsigned __int64)&param->is_max >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_max >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&param->is_max);
    }
    if ( param->is_max )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__damage_val >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__damage_val);
      damage_val = __closure->__damage_val;
      if ( *(_BYTE *)(((unsigned __int64)damage_val >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)damage_val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage_val >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__damage_val);
      }
      if ( damage > *damage_val )
        goto LABEL_83;
    }
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param);
    v15 = __closure->__param;
    if ( *(_BYTE *)(((unsigned __int64)&v15->is_max >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v15 + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->is_max >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&v15->is_max);
    }
    if ( v15->is_max )
      goto LABEL_84;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__damage_val >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__damage_val);
    v16 = __closure->__damage_val;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure->__damage_val);
    }
    if ( *v16 > damage )
    {
LABEL_83:
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__take_damage_uid_set >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__take_damage_uid_set);
      std::set<unsigned int>::clear(__closure->__take_damage_uid_set);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__take_damage_uid_set >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__take_damage_uid_set);
      take_damage_uid_set = __closure->__take_damage_uid_set;
      __x = Player::getUid(player);
      p_x = &__x;
      std::set<unsigned int>::insert(take_damage_uid_set, &__x);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__damage_val >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__damage_val);
      v19 = __closure->__damage_val;
      v20 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v20 )
      {
        LOBYTE(p_x) = v20 != 0;
        __asan_report_store4(__closure->__damage_val, p_x, (_BYTE)v19);
      }
      *v19 = damage;
    }
    else
    {
LABEL_84:
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__damage_val >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__damage_val);
      v21 = __closure->__damage_val;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__damage_val);
      }
      if ( *v21 == damage )
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__take_damage_uid_set >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__take_damage_uid_set);
        v22 = __closure->__take_damage_uid_set;
        __x = Player::getUid(player);
        std::set<unsigned int>::insert(v22, &__x);
      }
    }
    result = FOREACH_CONTINUE;
  }
  else
  {
LABEL_82:
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param);
    v24 = __closure->__param;
    if ( *(_BYTE *)(((unsigned __int64)&v24->is_max >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v24 + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&v24->is_max >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&v24->is_max);
    }
    if ( v24->is_max )
    {
      result = FOREACH_CONTINUE;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__damage_val >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__damage_val);
      v25 = __closure->__damage_val;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__damage_val);
      }
      if ( *v25 > 0.0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__take_damage_uid_set >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__take_damage_uid_set);
        std::set<unsigned int>::clear(__closure->__take_damage_uid_set);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__damage_val >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__damage_val);
        v26 = __closure->__damage_val;
        v27 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
        if ( v27 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v27 )
        {
          LOBYTE(p_y) = v27 != 0;
          __asan_report_store4(__closure->__damage_val, p_y, (_BYTE)v26);
        }
        *v26 = 0.0;
      }
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__take_damage_uid_set >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__take_damage_uid_set);
      v28 = __closure->__take_damage_uid_set;
      __x = Player::getUid(player);
      std::set<unsigned int>::insert(v28, &__x);
      result = FOREACH_CONTINUE;
    }
  }
  if ( v34 == (char *)v2 )
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

// Line 1808: range 0000000014EEF33E-0000000014EEFA85
ForeachPolicy __cdecl BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#4}::operator()(
        const BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>_1 *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>> *p_player_monster_combat_statistic_map; // r14
  std::unordered_map<unsigned int,ScenePlayGroupStat> *p_second; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false>::pointer v7; // rax
  std::map<unsigned int,unsigned int>::iterator *p_for_end; // rsi
  MpPlaySettleMonsterKillNumParam *param; // rax
  uint32_t *kill_num; // rdx
  uint32_t *v11; // rdx
  char v12; // cl
  uint32_t *v13; // rdx
  std::set<unsigned int> *uid_set; // r13
  ForeachPolicy result; // eax
  MpPlaySettleMonsterKillNumParam *v16; // rax
  std::set<unsigned int> *v17; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::key_type __x; // [rsp+10h] [rbp-D0h] BYREF
  uint32_t player_kill_num; // [rsp+14h] [rbp-CCh]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  ScenePlayGroupStat *player_group_stat; // [rsp+28h] [rbp-B8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-98h]
  char v28[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 23 player_combat_iter:1810 64 8 27 player_group_stat_iter:1813";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_player_monster_combat_statistic_map = &__closure->__this->player_monster_combat_statistic_map_;
  __x = Player::getUid(player);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::find(p_player_monster_combat_statistic_map, &__x);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::end(&__closure->__this->player_monster_combat_statistic_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false> *)&__for_end) )
  {
    p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false> *const)(v2 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param);
    *(std::unordered_map<unsigned int,ScenePlayGroupStat>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,ScenePlayGroupStat>::find(
                                                                                    p_second,
                                                                                    &__closure->__param->group_id);
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false> *const)(v2 + 32));
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,ScenePlayGroupStat>::end(&v7->second)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,ScenePlayGroupStat>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ScenePlayGroupStat>,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ScenePlayGroupStat>,false> *)&__for_end) )
    {
      player_group_stat = &std::__detail::_Node_iterator<std::pair<unsigned int const,ScenePlayGroupStat>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ScenePlayGroupStat>,false,false> *const)(v2 + 64))->second;
      player_kill_num = 0;
      __for_range = &player_group_stat->kill_monster_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&player_group_stat->kill_monster_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
      while ( 1 )
      {
        p_for_end = &__for_end;
        if ( !std::operator!=(&__for_begin, &__for_end) )
          break;
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        config_id = std::get<0ul,unsigned int const,unsigned int>(__in);
        num = std::get<1ul,unsigned int const,unsigned int>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__param);
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                &__closure->__param->exclude_set,
                config_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(num);
          }
          player_kill_num += *num;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__param);
      param = __closure->__param;
      if ( *(char *)(((unsigned __int64)&param->is_max >> 3) + 0x7FFF8000) < 0 )
        param = (MpPlaySettleMonsterKillNumParam *)__asan_report_load1(&param->is_max);
      if ( !param->is_max )
        goto LABEL_63;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__kill_num >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__kill_num);
      kill_num = __closure->__kill_num;
      if ( *(_BYTE *)(((unsigned __int64)kill_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)kill_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)kill_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__kill_num);
      }
      if ( player_kill_num > *kill_num )
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_set >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__uid_set);
        std::set<unsigned int>::clear(__closure->__uid_set);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__kill_num >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__kill_num);
        v11 = __closure->__kill_num;
        v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
        if ( v12 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v12 )
        {
          LOBYTE(p_for_end) = v12 != 0;
          __asan_report_store4(__closure->__kill_num, p_for_end, (_BYTE)v11);
        }
        *v11 = player_kill_num;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_set >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__uid_set);
      }
      else
      {
LABEL_63:
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__kill_num >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__kill_num);
        v13 = __closure->__kill_num;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(__closure->__kill_num);
        }
        if ( player_kill_num != *v13 )
          goto LABEL_48;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_set >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__uid_set);
      }
      uid_set = __closure->__uid_set;
      __x = Player::getUid(player);
      std::set<unsigned int>::insert(uid_set, &__x);
LABEL_48:
      result = FOREACH_CONTINUE;
      goto LABEL_58;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  v16 = __closure->__param;
  if ( *(char *)(((unsigned __int64)&v16->is_max >> 3) + 0x7FFF8000) < 0 )
    v16 = (MpPlaySettleMonsterKillNumParam *)__asan_report_load1(&v16->is_max);
  if ( v16->is_max )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_set >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__uid_set);
    v17 = __closure->__uid_set;
    __x = Player::getUid(player);
    std::set<unsigned int>::insert(v17, &__x);
    result = FOREACH_CONTINUE;
  }
LABEL_58:
  if ( v28 == (char *)v2 )
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
  return result;
};

// Line 1861: range 0000000014EEFA86-0000000014EEFEBE
ForeachPolicy __cdecl BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#5}::operator()(
        const BaseScenePlayBattle::calcPlayerBattleStat::<lambda(Player&)>_2 *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>> *p_player_monster_combat_statistic_map; // r14
  ForeachPolicy result; // eax
  std::unordered_map<unsigned int,ScenePlayGroupStat> *p_second; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false>::pointer v8; // rax
  ScenePlayGroupStat *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v10; // rdx
  unsigned int *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v12; // rdx
  unsigned int *v13; // rax
  unsigned int second; // r14d
  std::map<unsigned int,unsigned int> *uid_map; // rbx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::key_type *p_x; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  unsigned int *v18; // rdx
  char v19; // cl
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::key_type __x; // [rsp+1Ch] [rbp-C4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false> __y; // [rsp+20h] [rbp-C0h] BYREF
  ScenePlayGroupStat *player_group_stat; // [rsp+28h] [rbp-B8h]
  char v23[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 23 player_combat_iter:1863 64 8 22 player_group_iter:1868 96 8 9 iter:1874";
  *(_QWORD *)(v2 + 16) = BaseScenePlayBattle::calcPlayerBattleStat(void)::{lambda(Player &)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_player_monster_combat_statistic_map = &__closure->__this->player_monster_combat_statistic_map_;
  __x = Player::getUid(player);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::find(p_player_monster_combat_statistic_map, &__x);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __y._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::end(&__closure->__this->player_monster_combat_statistic_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false> *)(v2 + 32),
         &__y) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false> *const)(v2 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param);
    *(std::unordered_map<unsigned int,ScenePlayGroupStat>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,ScenePlayGroupStat>::find(
                                                                                    p_second,
                                                                                    (const std::unordered_map<unsigned int,ScenePlayGroupStat>::key_type *)__closure->__param);
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false,false> *const)(v2 + 32));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false>::__node_type *)std::unordered_map<unsigned int,ScenePlayGroupStat>::end(&v8->second)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,ScenePlayGroupStat>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ScenePlayGroupStat>,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ScenePlayGroupStat>,false> *)&__y) )
    {
      result = FOREACH_CONTINUE;
    }
    else
    {
      player_group_stat = &std::__detail::_Node_iterator<std::pair<unsigned int const,ScenePlayGroupStat>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ScenePlayGroupStat>,false,false> *const)(v2 + 64))->second;
      v9 = player_group_stat;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
        v9 = (ScenePlayGroupStat *)__asan_report_load8(&__closure->__param);
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                      &v9->kill_monster_map,
                                                                      &__closure->__param->config_id);
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,ScenePlayGroupStat> >,false>::__node_type *)std::map<unsigned int,unsigned int>::end(&player_group_stat->kill_monster_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__y) )
      {
        result = FOREACH_CONTINUE;
      }
      else
      {
        v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
        v11 = &v10->second;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        if ( v10->second )
        {
          v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
          v13 = &v12->second;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          second = v12->second;
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_map >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__uid_map);
          uid_map = __closure->__uid_map;
          __x = Player::getUid(player);
          p_x = &__x;
          v17 = std::map<unsigned int,unsigned int>::operator[](uid_map, &__x);
          v18 = v17;
          v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
          if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
          {
            LOBYTE(p_x) = v19 != 0;
            __asan_report_store4(v17, p_x, (_BYTE)v17);
          }
          *v18 = second;
        }
        result = FOREACH_CONTINUE;
      }
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 1899: range 0000000014EF1152-0000000014EF172E
void __cdecl BaseScenePlayBattle::fillPlayerBattleSettleInfo(
        BaseScenePlayBattle *const this,
        Player *player,
        proto::ScenePlayBattleResultNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const MpPlayExcelConfigMgr *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t Uid; // eax
  PlayerBasicComp *BasicComp; // r14
  proto::ProfilePicture *v11; // rax
  PlayerBasicComp *v12; // rax
  const std::string *v13; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  __gnu_cxx::__normal_iterator<ExhibitonCardParam*,std::vector<ExhibitonCardParam> >::reference v15; // rax
  _QWORD *v16; // rdx
  std::vector<ExhibitonCardParam>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  const MpPlayExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-108h]
  const data::MpPlayMatchExcelConfig *config_ptr; // [rsp+40h] [rbp-100h]
  proto::ScenePlayBattleSettlePlayerInfo *info; // [rsp+48h] [rbp-F8h]
  std::vector<ExhibitonCardParam> *__for_range; // [rsp+50h] [rbp-F0h]
  proto::ExhibitionDisplayInfo *card_info; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v25; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 10 param:1918 64 24 19 card_param_vec:1917";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::fillPlayerBattleSettleInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.mp_play_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v25);
  v6 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(v6, this->play_id_);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->series_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->series_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->series_id);
    }
    if ( config_ptr->series_id )
    {
      info = proto::ScenePlayBattleResultNotify::add_settle_player_info_list(notify);
      Uid = Player::getUid(player);
      proto::ScenePlayBattleSettlePlayerInfo::set_uid(info, Uid);
      BasicComp = Player::getBasicComp(player);
      v11 = proto::ScenePlayBattleSettlePlayerInfo::mutable_profile_picture(info);
      PlayerBasicComp::getProfilePictureToClient(BasicComp, v11);
      v12 = Player::getBasicComp(player);
      v13 = PlayerBasicComp::getNickName[abi:cxx11](v12);
      proto::ScenePlayBattleSettlePlayerInfo::set_nickname(info, v13);
      Player::getOnlineId[abi:cxx11]((std::string *)&v26, player);
      proto::ScenePlayBattleSettlePlayerInfo::set_online_id(info, (std::string *)&v26);
      std::string::~string(&v26);
      ExhibitionComp = Player::getExhibitionComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->series_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->series_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->series_id);
      }
      PlayerExhibitionComp::getSettleCardVec(
        (std::vector<ExhibitonCardParam> *)(v3 + 64),
        ExhibitionComp,
        config_ptr->series_id);
      __for_range = (std::vector<ExhibitonCardParam> *)(v3 + 64);
      __for_begin._M_current = std::vector<ExhibitonCardParam>::begin((std::vector<ExhibitonCardParam> *const)(v3 + 64))._M_current;
      __for_end._M_current = std::vector<ExhibitonCardParam>::end((std::vector<ExhibitonCardParam> *const)(v3 + 64))._M_current;
      while ( __gnu_cxx::operator!=<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>(&__for_begin, &__for_end) )
      {
        v15 = __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator*(&__for_begin);
        v16 = v15;
        if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v15->card_param + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->card_param + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v15, 8LL);
        }
        *(_QWORD *)(v3 + 32) = *v16;
        card_info = proto::ScenePlayBattleSettlePlayerInfo::add_card_list(info);
        proto::ExhibitionDisplayInfo::set_id(card_info, *(_DWORD *)(v3 + 32));
        proto::ExhibitionDisplayInfo::set_param(card_info, *(_DWORD *)(v3 + 36));
        __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator++(&__for_begin);
      }
      std::vector<ExhibitonCardParam>::~vector((std::vector<ExhibitonCardParam> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "fillPlayerBattleSettleInfo",
        1909);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v26,
             (const char (*)[35])"[SCENE_PLAY_BATTLE] seris_id is 0;");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_id_);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "fillPlayerBattleSettleInfo",
      1904);
    v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v26,
           (const char (*)[63])"[SCENE_PLAY_BATTLE] findMpPlayMatchExcelConfig fail. play_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_id_);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( v27 == (char *)v3 )
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
};

// Line 1927: range 0000000014EF1730-0000000014EF20AA
void __cdecl BaseScenePlayBattle::tryGrantReward(
        BaseScenePlayBattle *const this,
        Player *player,
        proto::ScenePlayBattleResultNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  uint32_t Uid; // eax
  unsigned int val; // [rsp+20h] [rbp-1C0h] BYREF
  uint32_t world_level; // [rsp+24h] [rbp-1BCh]
  data::ItemLimitType limit_type; // [rsp+28h] [rbp-1B8h]
  std::vector<ItemParam>::iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  const MpPlayExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-1A0h]
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+48h] [rbp-198h]
  const data::MpCrucibleRewardConfig *reward_config_ptr; // [rsp+50h] [rbp-190h]
  PlayerItemComp *item_comp; // [rsp+58h] [rbp-188h]
  proto::ScenePlayBattleSettleRewardInfo *info; // [rsp+60h] [rbp-180h]
  std::vector<ItemParam> *__for_range; // [rsp+68h] [rbp-178h]
  ItemParam *item_param; // [rsp+70h] [rbp-170h]
  proto::ItemParam *item_proto; // [rsp+78h] [rbp-168h]
  std::shared_ptr<Config> v32; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v33; // [rsp+90h] [rbp-150h] BYREF
  char v34[304]; // [rsp+B0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 18 output_result:1956 64 16 13 play_ptr:1928 96 16 10 param:1962 128 24 11 reason:1954 19"
                        "2 24 19 item_param_vec:1955";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::tryGrantReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  BaseScenePlayBattle::getScenePlay((const BaseScenePlayBattle *const)(v3 + 64));
  if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "tryGrantReward",
      1931);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v33,
      (const char (*)[37])"[SCENE_PLAY_BATTLE] play_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.mp_play_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v32);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    if ( entry_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->is_direct_to_bag >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)entry_config_ptr + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->is_direct_to_bag >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load1(&entry_config_ptr->is_direct_to_bag);
      }
      if ( entry_config_ptr->is_direct_to_bag )
      {
        BasicComp = Player::getBasicComp(player);
        world_level = PlayerBasicComp::getWorldLevel(BasicComp);
        if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->entry_id_);
        }
        reward_config_ptr = MpPlayExcelConfigMgr::findMpPlayRewardConfig(config_mgr, this->entry_id_, world_level);
        if ( reward_config_ptr )
        {
          item_comp = Player::getItemComp(player);
          v10 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          limit_type = BaseScenePlay::getGeneralRewardItemLimitType(v10);
          ActionReason::ActionReason((ActionReason *const)(v3 + 128), ACTION_REASON_MP_PLAY_TAKE_REWARD, limit_type);
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&reward_config_ptr->drop_id);
          }
          *(OutputResult *)(v3 + 32) = DropUtils::dropItems(
                                         player,
                                         reward_config_ptr->drop_id,
                                         1u,
                                         (const ActionReason *)(v3 + 128),
                                         (std::vector<ItemParam> *)(v3 + 192));
          if ( *(_DWORD *)(v3 + 32) )
          {
            LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 32));
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              LogLevel,
              "./src/player/scene_play/base_scene_play_battle.cpp",
              "tryGrantReward",
              1959);
            v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v33,
                    (const char (*)[44])"[SCENE_PLAY_BATTLE] dropItems failed, uid: ");
            val = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
          else
          {
            *(_DWORD *)(v3 + 96) = 0;
            *(_DWORD *)(v3 + 100) = 0;
            *(_DWORD *)(v3 + 104) = 0;
            *(_DWORD *)(v3 + 108) = 0;
            if ( PlayerItemComp::addItemBatchWithStackLimit(
                   item_comp,
                   (std::vector<ItemParam> *)(v3 + 192),
                   (const ActionReason *)(v3 + 128),
                   0LL) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play_battle.cpp",
                "tryGrantReward",
                1966);
              v13 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      &v33,
                      (const char (*)[54])"[SCENE_PLAY_BATTLE] addItemBatchWithStackLimit fail. ");
              v14 = common::milog::MiLogStream::operator<<<ItemParam>(v13, (const std::vector<ItemParam> *)(v3 + 192));
              v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" uid : ");
              val = Player::getUid(player);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
            else
            {
              info = proto::ScenePlayBattleResultNotify::add_settle_reward_info_list(notify);
              Uid = Player::getUid(player);
              proto::ScenePlayBattleSettleRewardInfo::set_uid(info, Uid);
              __for_range = (std::vector<ItemParam> *)(v3 + 192);
              __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 192))._M_current;
              __for_end._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 192))._M_current;
              while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
              {
                item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
                item_proto = proto::ScenePlayBattleSettleRewardInfo::add_reward_item_list(info);
                if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                               + 0x7FFF8000) )
                {
                  __asan_report_load4(item_param);
                }
                proto::ItemParam::set_item_id(item_proto, item_param->item_id);
                if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                           + 0x7FFF8000) )
                {
                  __asan_report_load4(&item_param->count);
                }
                proto::ItemParam::set_count(item_proto, item_param->count);
                __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
              }
            }
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 192));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/scene_play/base_scene_play_battle.cpp",
            "tryGrantReward",
            1949);
          v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                 &v33,
                 (const char (*)[59])"[SCENE_PLAY_BATTLE] findMpPlayRewardConfig fail. play_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->play_id_);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "tryGrantReward",
        1938);
      v7 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v33,
             (const char (*)[66])"[SCENE_PLAY_BATTLE] findMpPlayGroupExcelConfig failed, entry_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
  }
  std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v3 + 64));
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1982: range 0000000014EF20AC-0000000014EF25E0
uint32_t __cdecl BaseScenePlayBattle::createPlayTeamEntity(BaseScenePlayBattle *const this, Player *player)
{
  uint32_t EntityId; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  int v12; // r15d
  Player *v13; // r14
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  std::weak_ptr<Entity> *v16; // rax
  std::__shared_ptr_access<PlayTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::weak_ptr<Entity>>::key_type __x; // [rsp+24h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 9 iter:1983 64 16 14 scene_ptr:1995 96 16 15 entity_ptr:2001";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::createPlayTeamEntity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  __x = Player::getUid(player);
  *(std::map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v3 + 32) = std::map<unsigned int,std::weak_ptr<Entity>>::find(
                                                                           &this->play_team_entity_wtr_map_,
                                                                           &__x);
  __y._M_node = std::map<unsigned int,std::weak_ptr<Entity>>::end(&this->play_team_entity_wtr_map_)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > >::_Self *)(v3 + 32),
          &__y) )
    goto LABEL_9;
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> > > *const)(v3 + 32));
  std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 96));
  if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/scene_play/base_scene_play_battle.cpp",
      "createPlayTeamEntity",
      1989);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
    val = Player::getUid(player);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" playTeamEntity:");
    v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    __x = Entity::getEntityId(v9);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" still alive!");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v11 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    EntityId = Entity::getEntityId(v11);
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
  if ( v12 == 1 )
  {
LABEL_9:
    BaseScenePlayBattle::getScene((const BaseScenePlayBattle *const)(v3 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "createPlayTeamEntity",
        1998);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v22, (const char (*)[15])"getScene fails");
      common::milog::MiLogStream::~MiLogStream(&v22);
      EntityId = 0;
    }
    else
    {
      v13 = (Player *)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      BaseScenePlayBattle::getPlayTeamEntityGadgetId(this);
      Scene::addPlayTeamEntity((Scene *const)(v3 + 96), v13, (uint32_t)player);
      if ( std::operator==<PlayTeamEntity>(0LL, (const std::shared_ptr<PlayTeamEntity> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/scene_play/base_scene_play_battle.cpp",
          "createPlayTeamEntity",
          2004);
        v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
        __x = Player::getUid(player);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &__x);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v15,
          (const char (*)[25])" addPlayTeamEntity fails");
        common::milog::MiLogStream::~MiLogStream(&v22);
        EntityId = 0;
      }
      else
      {
        __x = Player::getUid(player);
        v16 = std::map<unsigned int,std::weak_ptr<Entity>>::operator[](&this->play_team_entity_wtr_map_, &__x);
        std::weak_ptr<Entity>::operator=<PlayTeamEntity>(v16, (const std::shared_ptr<PlayTeamEntity> *)(v3 + 96));
        v17 = std::__shared_ptr_access<PlayTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        EntityId = Entity::getEntityId((const Entity *const)v17);
      }
      std::shared_ptr<PlayTeamEntity>::~shared_ptr((std::shared_ptr<PlayTeamEntity> *const)(v3 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  result = EntityId;
  if ( v23 == (char *)v3 )
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

// Line 2012: range 0000000014EF25E2-0000000014EF2AA0
__int64 __fastcall BaseScenePlayBattle::calcBattleScore(
        BaseScenePlayBattle *const this,
        bool is_win,
        uint32_t cost_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  uint32_t play_type; // eax
  std::vector<unsigned int>::const_reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int>::const_reference v13; // rax
  _DWORD *v14; // rdx
  const data::MpPlayScoreExcelConfig *score_config; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-80h] BYREF
  char v19[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 cost_time:2011";
  *(_QWORD *)(v3 + 16) = BaseScenePlayBattle::calcBattleScore;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = cost_time;
  if ( !is_win )
  {
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->play_type_);
    }
    score_config = MpPlayExcelConfigMgr::findMpPlayScoreConfigByPlayType(p_mp_play_config_mgr, this->play_type_);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( score_config )
    {
      if ( *(char *)(((unsigned __int64)&score_config->is_calc_score >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&score_config->is_calc_score);
      if ( !score_config->is_calc_score )
      {
        result = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->play_type_);
        }
        play_type = this->play_type_;
        if ( play_type == 1 || play_type == 3 )
        {
          if ( std::vector<unsigned int>::size(&score_config->param) )
          {
            v10 = std::vector<unsigned int>::operator[](&score_config->param, 0LL);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v10);
            }
            if ( *v11 >= *(_DWORD *)(v3 + 32) )
            {
              v13 = std::vector<unsigned int>::operator[](&score_config->param, 0LL);
              v14 = v13;
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v13);
              }
              result = (unsigned int)(*v14 - *(_DWORD *)(v3 + 32));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/scene_play/base_scene_play_battle.cpp",
                "calcBattleScore",
                2041);
              v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v18,
                      (const char (*)[46])"cost_time logger than config time, cost_time:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v18);
              result = 0LL;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/scene_play/base_scene_play_battle.cpp",
              "calcBattleScore",
              2036);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v18,
              (const char (*)[23])"param size less than 1");
            common::milog::MiLogStream::~MiLogStream(&v18);
            result = 0LL;
          }
        }
        else
        {
          result = 0LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "calcBattleScore",
        2021);
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v18,
             (const char (*)[34])"score_config not find, play_type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_type_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0LL;
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2053: range 0000000014EF2AA2-0000000014EF3006
void __fastcall BaseScenePlayBattle::fireSettleResultEvent(
        BaseScenePlayBattle *const this,
        Player *player,
        bool is_win,
        uint32_t score)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  uint32_t WatcherComp; // eax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v14; // [rsp-8h] [rbp-198h]
  bool *v15; // [rsp+0h] [rbp-190h]
  unsigned int *v16; // [rsp+8h] [rbp-188h]
  Player *const playera; // [rsp+10h] [rbp-180h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  const std::vector<unsigned int> *watcher_id_vec; // [rsp+30h] [rbp-160h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-158h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-150h] BYREF
  char v23[304]; // [rsp+60h] [rbp-130h] BYREF

  LODWORD(v16) = score;
  BYTE4(v16) = is_win;
  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 1 11 is_win:2052 48 4 15 watcher_id:2066 64 4 10 score:2052 80 16 14 world_ptr:2058 112 16 "
                        "14 event_ptr:2078 144 16 16 watcher_ptr:2068 176 48 25 finished_watcher_set:2064";
  *(_QWORD *)(v4 + 16) = BaseScenePlayBattle::fireSettleResultEvent;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  *(_BYTE *)(v4 + 32) = BYTE4(v16);
  *(_DWORD *)(v4 + 64) = (_DWORD)v16;
  if ( *(_BYTE *)(v4 + 32) == 1 )
  {
    BaseScenePlayBattle::getWorld((const BaseScenePlayBattle *const)(v4 + 80));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/scene_play/base_scene_play_battle.cpp",
        "fireSettleResultEvent",
        2061);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v22,
        (const char (*)[34])"[SCENE_PLAY_BATTLE] world is null");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 176));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 144));
      p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144))->design_config.txt_config_mgr.mp_play_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->play_id_);
      }
      watcher_id_vec = MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(p_mp_play_config_mgr, this->play_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
      __for_range = watcher_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(watcher_id_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        *(_DWORD *)(v4 + 48) = *v9;
        WatcherComp = (unsigned int)Player::getWatcherComp(player);
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v4 + 144), WatcherComp);
        if ( std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v4 + 144)) )
        {
          v11 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          if ( BaseWatcher::isFinished(v11) )
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v4 + 176),
              (const std::set<unsigned int>::value_type *)(v4 + 48));
        }
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v4 + 144));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v12 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      *(_DWORD *)(v4 + 48) = PlayerWorld::getLevel(v12);
      common::tools::perf::make_shared<ScenePlayBattleSettleResultEvent,unsigned int &,unsigned int &,bool &,unsigned int &,unsigned int,std::set<unsigned int> &>(
        (unsigned int *)(v4 + 112),
        &this->play_id_,
        (bool *)&this->play_type_,
        (unsigned int *)(v4 + 32),
        (unsigned int *)(v4 + 64),
        (std::set<unsigned int> *)(v4 + 48),
        (unsigned int *)(v4 + 176),
        v14,
        v15,
        v16,
        (unsigned int *)player,
        (std::set<unsigned int> *)this);
      EventComp = Player::getEventComp(playera);
      std::shared_ptr<BaseEvent>::shared_ptr<ScenePlayBattleSettleResultEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v4 + 144),
        (const std::shared_ptr<ScenePlayBattleSettleResultEvent> *)(v4 + 112));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v4 + 144));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 144));
      std::shared_ptr<ScenePlayBattleSettleResultEvent>::~shared_ptr((std::shared_ptr<ScenePlayBattleSettleResultEvent> *const)(v4 + 112));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 176));
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 80));
  }
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
