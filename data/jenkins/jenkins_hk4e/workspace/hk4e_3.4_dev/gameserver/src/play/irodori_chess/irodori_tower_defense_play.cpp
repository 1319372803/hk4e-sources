// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/irodori_chess/irodori_tower_defense_play.cpp

// Line 33: range 00000000161BE55E-00000000161BE732
std::string *__cdecl IrodoriChessCardInfo::getDesc[abi:cxx11](
        std::string *retstr,
        const IrodoriChessCardInfo *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:34";
  *(_QWORD *)(v2 + 16) = IrodoriChessCardInfo::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[IRODORI] <card:");
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->card_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, "> ");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 40: range 00000000161BE734-00000000161BEA20
IrodoriChessEffectBasePtr __cdecl IrodoriChessCardInfo::createEffect(
        IrodoriChessCardInfo *const this,
        const data::IrodoriChessCardEffect *config)
{
  const data::IrodoriChessCardEffect *v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo> *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  IrodoriChessEffectBase *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  IrodoriChessEffectBasePtr result; // rax
  const data::IrodoriChessCardEffect *configa; // [rsp+8h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  configa = v2;
  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 effect_ptr:41";
  *(_QWORD *)(v3 + 16) = IrodoriChessCardInfo::createEffect;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance();
  if ( *(_BYTE *)(((unsigned __int64)&configa->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&configa->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::create(
    (common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo> *const)(v3 + 32),
    &v6->creators_map_,
    (IrodoriChessCardInfo *)(unsigned int)configa->effect_type,
    (std::remove_reference<IrodoriChessCardInfo&>::type *)config);
  if ( std::operator==<IrodoriChessEffectBase>(0LL, (const std::shared_ptr<IrodoriChessEffectBase> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "createEffect",
      44);
    v7 = common::milog::MiLogStream::operator<<<IrodoriChessCardInfo,(IrodoriChessCardInfo*)0>(
           &v15,
           (const IrodoriChessCardInfo *)config);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           v7,
           (const char (*)[24])"effect not implemented:");
    common::milog::MiLogStream::operator<<<data::IrodoriChessCardEffectType,(data::IrodoriChessCardEffectType*)0>(
      v8,
      &configa->effect_type);
    common::milog::MiLogStream::~MiLogStream(&v15);
    std::shared_ptr<IrodoriChessEffectBase>::shared_ptr((std::shared_ptr<IrodoriChessEffectBase> *const)this, 0LL);
  }
  else
  {
    v9 = std::__shared_ptr_access<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( IrodoriChessEffectBase::doInit(v9, configa) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "createEffect",
        49);
      v10 = common::milog::MiLogStream::operator<<<IrodoriChessCardInfo,(IrodoriChessCardInfo*)0>(
              &v15,
              (const IrodoriChessCardInfo *)config);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              v10,
              (const char (*)[37])"init effect by config failed. index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &configa->effect_index);
      common::milog::MiLogStream::~MiLogStream(&v15);
      std::shared_ptr<IrodoriChessEffectBase>::shared_ptr((std::shared_ptr<IrodoriChessEffectBase> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<IrodoriChessEffectBase>::shared_ptr(
        (std::shared_ptr<IrodoriChessEffectBase> *const)this,
        (std::shared_ptr<IrodoriChessEffectBase> *)(v3 + 32));
    }
  }
  std::shared_ptr<IrodoriChessEffectBase>::~shared_ptr((std::shared_ptr<IrodoriChessEffectBase> *const)(v3 + 32));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 56: range 00000000161BEA22-00000000161BEC8D
void __cdecl IrodoriChessCardInfo::addEffect(
        IrodoriChessCardInfo *const this,
        const data::IrodoriChessCardEffect *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::shared_ptr<IrodoriChessEffectBase> *v7; // rax
  IrodoriChessEffectBase *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 effect_ptr:62";
  *(_QWORD *)(v2 + 16) = IrodoriChessCardInfo::addEffect;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&config->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( config->effect_type && config->effect_type != IRODORI_CHESS_CARD_EFFECT_LUA_CUSTOM )
  {
    IrodoriChessCardInfo::createEffect(
      (IrodoriChessCardInfo *const)(v2 + 32),
      (const data::IrodoriChessCardEffect *)this);
    if ( std::operator==<IrodoriChessEffectBase>(0LL, (const std::shared_ptr<IrodoriChessEffectBase> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "addEffect",
        65);
      v5 = common::milog::MiLogStream::operator<<<IrodoriChessCardInfo,(IrodoriChessCardInfo*)0>(&v9, this);
      v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             v5,
             (const char (*)[28])"createEffect failed. index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &config->effect_index);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      v7 = std::map<unsigned int,std::shared_ptr<IrodoriChessEffectBase>>::operator[](
             &this->effect_map_,
             &config->effect_index);
      std::shared_ptr<IrodoriChessEffectBase>::operator=(v7, (const std::shared_ptr<IrodoriChessEffectBase> *)(v2 + 32));
      v8 = std::__shared_ptr_access<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      IrodoriChessEffectBase::start(v8);
    }
    std::shared_ptr<IrodoriChessEffectBase>::~shared_ptr((std::shared_ptr<IrodoriChessEffectBase> *const)(v2 + 32));
  }
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

// Line 73: range 00000000161BEC8E-00000000161BEE4F
void __cdecl IrodoriChessCardInfo::initEffects(IrodoriChessCardInfo *const this)
{
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  std::vector<data::IrodoriChessCardEffect>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::vector<data::IrodoriChessCardEffect>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const data::IrodoriChessCardExcelConfig *card_config_ptr; // [rsp+28h] [rbp-58h]
  const std::vector<data::IrodoriChessCardEffect> *__for_range; // [rsp+30h] [rbp-50h]
  const data::IrodoriChessCardEffect *extra_effect; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v8; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+50h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.activity_irodori_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  card_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessCardExcelConfig(
                      p_activity_irodori_config_mgr,
                      this->card_id_);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( card_config_ptr )
  {
    IrodoriChessCardInfo::addEffect(this, &card_config_ptr->effect);
    __for_range = &card_config_ptr->extra_effect_list;
    __for_begin._M_current = std::vector<data::IrodoriChessCardEffect>::begin(&card_config_ptr->extra_effect_list)._M_current;
    __for_end._M_current = std::vector<data::IrodoriChessCardEffect>::end(&card_config_ptr->extra_effect_list)._M_current;
    while ( __gnu_cxx::operator!=<data::IrodoriChessCardEffect const*,std::vector<data::IrodoriChessCardEffect>>(
              &__for_begin,
              &__for_end) )
    {
      extra_effect = __gnu_cxx::__normal_iterator<data::IrodoriChessCardEffect const*,std::vector<data::IrodoriChessCardEffect>>::operator*(&__for_begin);
      IrodoriChessCardInfo::addEffect(this, extra_effect);
      __gnu_cxx::__normal_iterator<data::IrodoriChessCardEffect const*,std::vector<data::IrodoriChessCardEffect>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "initEffects",
      77);
    v2 = common::milog::MiLogStream::operator<<<IrodoriChessCardInfo,(IrodoriChessCardInfo*)0>(&v9, this);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v2, (const char (*)[22])"card config not found");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
};

// Line 88: range 00000000161BEE50-00000000161BF0A2
std::string *__cdecl IrodoriTowerDefensePlay::getDesc[abi:cxx11](
        std::string *retstr,
        const IrodoriTowerDefensePlay *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  std::string v; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:89";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[IRODORI] ");
  TowerDefensePlayBase::getDesc[abi:cxx11](&v, this);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, &v);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " [uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->player_uid_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "] ");
  std::string::~string(&v);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 95: range 00000000161BF0A4-00000000161BF9CD
int32_t __cdecl IrodoriTowerDefensePlay::init(IrodoriTowerDefensePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 SceneMultistagePlay; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t DungeonId; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v19; // rdx
  uint32_t v20; // ecx
  uint32_t init_building_points; // ecx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  IrodoriChessDungeonContext *v24; // rax
  uint32_t map_id; // ecx
  unsigned __int64 v26; // rax
  void (__fastcall *v27)(IrodoriTowerDefensePlay *const, const std::set<unsigned int> *); // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const std::set<unsigned int> *TowerGadgetSet; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  std::_Rb_tree_const_iterator<unsigned int> v32; // [rsp+18h] [rbp-118h] BYREF
  const data::IrodoriChessMapExcelConfig *map_config_ptr; // [rsp+20h] [rbp-110h]
  const std::set<unsigned int> *team_uid_set; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v35; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-F0h] BYREF
  char v37[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 20 dungeon_scene_ptr:96 64 64 12 data_opt:126";
  *(_QWORD *)(v1 + 16) = IrodoriTowerDefensePlay::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862724] = -202116109;
  SceneMultistagePlay = (unsigned __int64)SceneMultistagePlayCompBase::getSceneMultistagePlay(&this->SceneMultistagePlayCompBase);
  if ( *(_BYTE *)((SceneMultistagePlay >> 3) + 0x7FFF8000) )
    SceneMultistagePlay = __asan_report_load8();
  v5 = *(_QWORD *)SceneMultistagePlay + 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    SceneMultistagePlay = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64))v5)(SceneMultistagePlay);
  toPtr<DungeonScene,Scene>((Scene *)(v1 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "init",
      99);
    v6 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v36, this);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])"dungeon scene nullptr ");
    common::milog::MiLogStream::~MiLogStream(&v36);
    v7 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.activity_irodori_config_mgr;
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonId = DungeonScene::getDungeonId(v9);
    map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByDungeonId(
                       p_activity_irodori_config_mgr,
                       DungeonId);
    std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( map_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->player_uid_ )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
          "init",
          111);
        v14 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v36, this);
        v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v14,
                (const char (*)[17])"duplicate init: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->player_uid_);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v7 = -1;
      }
      else
      {
        v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        team_uid_set = DungeonScene::getTeamUidSet(v16);
        if ( std::set<unsigned int>::size(team_uid_set) == 1 )
        {
          v32._M_node = std::set<unsigned int>::begin(team_uid_set)._M_node;
          v19 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&v32);
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v20 = *v19;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->player_uid_);
          }
          this->player_uid_ = v20;
          if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->init_building_points >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&map_config_ptr->init_building_points >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          init_building_points = map_config_ptr->init_building_points;
          if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&this->building_points_);
          }
          this->building_points_ = init_building_points;
          v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          DungeonScene::getDungeonExtraData<IrodoriChessDungeonContext>(
            (std::optional<IrodoriChessDungeonContext> *)(v1 + 64),
            v22);
          if ( !std::optional<IrodoriChessDungeonContext>::has_value((const std::optional<IrodoriChessDungeonContext> *const)(v1 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
              "init",
              129);
            v23 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(
                    &v36,
                    this);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v23, (const char (*)[38])off_25B8AB20);
            common::milog::MiLogStream::~MiLogStream(&v36);
            v7 = -1;
          }
          else
          {
            v24 = std::optional<IrodoriChessDungeonContext>::value((std::optional<IrodoriChessDungeonContext> *const)(v1 + 64));
            IrodoriChessDungeonContext::operator=(&this->dungeon_context_, v24);
            if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->map_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&map_config_ptr->map_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            map_id = map_config_ptr->map_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->mystery_data_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->mystery_data_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->mystery_data_);
            }
            this->mystery_data_.map_id = map_id;
            std::vector<unsigned int>::operator=(
              &this->mystery_data_.exit_point_id_vec,
              &map_config_ptr->exit_point_list);
            std::vector<unsigned int>::operator=(
              &this->mystery_data_.entrance_point_id_vec,
              &map_config_ptr->entrance_point_list);
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v26 = (unsigned __int64)(this->_vptr_DescribalBase + 23);
            if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
              v26 = __asan_report_load8();
            v27 = *(void (__fastcall **)(IrodoriTowerDefensePlay *const, const std::set<unsigned int> *))v26;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v35);
            v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
            TowerGadgetSet = ActivityIrodoriExcelConfigMgr::getTowerGadgetSet(&v28->design_config.txt_config_mgr.activity_irodori_config_mgr);
            v27(this, TowerGadgetSet);
            std::shared_ptr<Config>::~shared_ptr(&v35);
            IrodoriTowerDefensePlay::initCardsEffect(this);
            v7 = 0;
          }
          std::optional<IrodoriChessDungeonContext>::~optional((std::optional<IrodoriChessDungeonContext> *const)(v1 + 64));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
            "init",
            117);
          v17 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v36, this);
          v18 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  v17,
                  (const char (*)[32])"scene team uid set size not 1: ");
          common::milog::MiLogStream::operator<<<unsigned int>(v18, team_uid_set);
          common::milog::MiLogStream::~MiLogStream(&v36);
          v7 = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "init",
        105);
      v11 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v36, this);
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])off_25B8AA40);
      v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      val = DungeonScene::getDungeonId(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v36);
      v7 = -1;
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  result = v7;
  if ( v37 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 148: range 00000000161BF9CE-00000000161BFCFB
const data::IrodoriChessMapExcelConfig *__cdecl IrodoriTowerDefensePlay::getChessMapExcelConfig(
        const IrodoriTowerDefensePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 SceneMultistagePlay; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // rax
  const data::IrodoriChessMapExcelConfig *v7; // r14
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // r14
  std::__shared_ptr_access<const DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t DungeonId; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<const DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const data::IrodoriChessMapExcelConfig *result; // rax
  const data::IrodoriChessMapExcelConfig *map_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 dungeon_scene_ptr:149";
  *(_QWORD *)(v1 + 16) = IrodoriTowerDefensePlay::getChessMapExcelConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  SceneMultistagePlay = (unsigned __int64)SceneMultistagePlayCompBase::getSceneMultistagePlay(&this->SceneMultistagePlayCompBase);
  if ( *(_BYTE *)((SceneMultistagePlay >> 3) + 0x7FFF8000) )
    SceneMultistagePlay = __asan_report_load8();
  v5 = *(_QWORD *)SceneMultistagePlay + 32LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    SceneMultistagePlay = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64))v5)(SceneMultistagePlay);
  toPtr<DungeonScene const,Scene const>((const Scene *)(v1 + 32));
  if ( std::operator==<DungeonScene const>(0LL, (const std::shared_ptr<const DungeonScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "getChessMapExcelConfig",
      152);
    v6 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v17, this);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])"dungoen_scene nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_irodori_config_mgr;
    v9 = std::__shared_ptr_access<DungeonScene const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonId = DungeonScene::getDungeonId(v9);
    map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByDungeonId(
                       p_activity_irodori_config_mgr,
                       DungeonId);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( map_config_ptr )
    {
      v7 = map_config_ptr;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "getChessMapExcelConfig",
        158);
      v11 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v17, this);
      v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v11, (const char (*)[24])off_25B8AC40);
      v13 = std::__shared_ptr_access<DungeonScene const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v12, v13);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = 0LL;
    }
  }
  std::shared_ptr<DungeonScene const>::~shared_ptr((std::shared_ptr<const DungeonScene> *const)(v1 + 32));
  result = v7;
  if ( v18 == (char *)v1 )
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

// Line 165: range 00000000161BFCFC-00000000161BFF50
__int64 __fastcall IrodoriTowerDefensePlay::getTowerLimit(const IrodoriTowerDefensePlay *const this, uint32_t gear_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int delta; // [rsp+14h] [rbp-ACh]
  const data::IrodoriChessMapExcelConfig *map_config_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 16 config_limit:171 48 4 10 result:173 64 4 11 gear_id:164";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::getTowerLimit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = gear_id;
  map_config_ptr = IrodoriTowerDefensePlay::getChessMapExcelConfig(this);
  if ( map_config_ptr )
  {
    *(_DWORD *)(v2 + 32) = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                             &map_config_ptr->single_gear_limits,
                             (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64),
                             0);
    delta = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>(
              &this->tower_limit_delta_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64),
              0);
    *(_DWORD *)(v2 + 48) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v2 + 32), delta);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "getTowerLimit",
      174);
    v6 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v14, this);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])"gear:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])", limit: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])", config limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = *(unsigned int *)(v2 + 48);
  }
  else
  {
    result = 0LL;
  }
  if ( v15 == (char *)v2 )
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

// Line 179: range 00000000161BFF52-00000000161C01B4
uint32_t __cdecl IrodoriTowerDefensePlay::getAllTowerLimit(const IrodoriTowerDefensePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t result; // eax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const data::IrodoriChessMapExcelConfig *map_config_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 16 config_limit:185 64 4 10 result:186";
  *(_QWORD *)(v1 + 16) = IrodoriTowerDefensePlay::getAllTowerLimit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  map_config_ptr = IrodoriTowerDefensePlay::getChessMapExcelConfig(this);
  if ( map_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->all_gear_limits >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&map_config_ptr->all_gear_limits >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = map_config_ptr->all_gear_limits;
    if ( *(_BYTE *)(((unsigned __int64)&this->total_tower_limit_delta_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_tower_limit_delta_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 64) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v1 + 48), this->total_tower_limit_delta_);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "getAllTowerLimit",
      187);
    v5 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v10, this);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])"total gear limit: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])", config limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = *(_DWORD *)(v1 + 64);
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v1 )
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

// Line 193: range 00000000161C01B6-00000000161C047F
__int64 __fastcall IrodoriTowerDefensePlay::getTowerCost(
        const IrodoriTowerDefensePlay *const this,
        uint32_t tower_id,
        unsigned __int64 cost)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned int v6; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  uint32_t build_cost; // ecx
  const data::IrodoriChessGearExcelConfig *gear_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 tower_id:192";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::getTowerCost;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = tower_id;
  v6 = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)((cost >> 3) + 0x7FFF8000) != 0 && (char)((cost & 7) + 3) >= *(_BYTE *)((cost >> 3) + 0x7FFF8000) )
    __asan_report_store4(cost);
  *(_DWORD *)cost = v6;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                      &v7->design_config.txt_config_mgr.activity_irodori_config_mgr,
                      *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( gear_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->build_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gear_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config_ptr->build_cost >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    build_cost = gear_config_ptr->build_cost;
    if ( *(_BYTE *)((cost >> 3) + 0x7FFF8000) != 0 && (char)((cost & 7) + 3) >= *(_BYTE *)((cost >> 3) + 0x7FFF8000) )
      __asan_report_store4(cost);
    *(_DWORD *)cost = build_cost;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "getTowerCost",
      198);
    v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v15, this);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           v8,
           (const char (*)[32])"config not found for tower id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 5LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 206: range 00000000161C0480-00000000161C0A3C
__int64 __fastcall IrodoriTowerDefensePlay::getTowerRefund(
        const IrodoriTowerDefensePlay *const this,
        uint32_t tower_id,
        uint32_t *refund)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rax
  int v11; // edi
  uint32_t v12; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  const data::IrodoriChessGearExcelConfig *gear_config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 17 config_refund:214 48 4 12 tower_id:205 64 8 15 config_cost:217 96 8 17 result_refund:218";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::getTowerRefund;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = tower_id;
  if ( *(_BYTE *)(((unsigned __int64)refund >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)refund & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refund >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(refund);
  }
  *refund = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_irodori_config_mgr,
                      *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( gear_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->demolition_refund >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gear_config_ptr->demolition_refund >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = gear_config_ptr->demolition_refund;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_refund_by_cost_factor_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_refund_by_cost_factor_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->max_refund_by_cost_factor_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->build_cost >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gear_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config_ptr->build_cost >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(double *)(v3 + 64) = (double)(int)gear_config_ptr->build_cost;
      *(SelectType_9 *)(v3 + 96) = SAFE_MULTIPLY<double,double>(
                                     *(double *)(v3 + 64),
                                     (double)(int)this->max_refund_by_cost_factor_ * 0.0001);
      v10 = (unsigned __int64)std::min<double>((const double *)(v3 + 64), (const double *)(v3 + 96));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      *(_QWORD *)(v3 + 96) = *(_QWORD *)v10;
      v11 = (int)*(double *)(v3 + 96);
      if ( *(_BYTE *)(((unsigned __int64)refund >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)refund & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refund >> 3) + 0x7FFF8000) )
      {
        v11 = (int)refund;
        __asan_report_store4(refund);
      }
      *refund = v11;
    }
    else
    {
      v12 = *(_DWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)refund >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)refund & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refund >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(refund);
      }
      *refund = v12;
    }
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "getTowerRefund",
      226);
    v13 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v25, this);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])off_25B8AF80);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->max_refund_by_cost_factor_);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])", config_cost: ");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &gear_config_ptr->build_cost);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])", real_refund: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, refund);
    v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])", config_refund:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "getTowerRefund",
      211);
    v7 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v25, this);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           v7,
           (const char (*)[32])"config not found for tower id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 5LL;
  }
  if ( v26 == (char *)v3 )
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

// Line 231: range 00000000161C0A3E-00000000161C0C44
__int64 __fastcall IrodoriTowerDefensePlay::getBuildingPoints(const IrodoriTowerDefensePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:230";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::getBuildingPoints;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->player_uid_ == *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = this->building_points_;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "getBuildingPoints",
      236);
    v6 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v9, this);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])"player:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" not in this map.");
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 241: range 00000000161C0C46-00000000161C0E69
__int64 __fastcall IrodoriTowerDefensePlay::checkSubBuildingPoints(
        const IrodoriTowerDefensePlay *const this,
        uint32_t uid,
        uint32_t sub_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-80h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:240";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::checkSubBuildingPoints;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->player_uid_ == *(_DWORD *)(v3 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( sub_value <= this->building_points_ )
      result = 0LL;
    else
      result = 9254LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkSubBuildingPoints",
      250);
    v7 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v11, this);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])"player:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" not in this map.");
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  if ( v12 == (char *)v3 )
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

// Line 255: range 00000000161C0E6A-00000000161C117C
__int64 __fastcall IrodoriTowerDefensePlay::subBuildingPoints(
        IrodoriTowerDefensePlay *const this,
        uint32_t uid,
        uint32_t sub_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  SceneMultistagePlay *scene_multistage_play; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  unsigned int ret; // [rsp+14h] [rbp-ACh]
  uint32_t scene; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:254";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::subBuildingPoints;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_multistage_play = this->scene_multistage_play_;
  p_vptr_DescribalBase = &scene_multistage_play->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene_multistage_play >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v8 = *p_vptr_DescribalBase + 24LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  scene = (*(__int64 (__fastcall **)(SceneMultistagePlay *))v8)(scene_multistage_play);
  Scene::findPlayer((const Scene *const)&__a, scene);
  v9 = std::operator==<Player>(0LL, &__a);
  std::shared_ptr<Player>::~shared_ptr(&__a);
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "subBuildingPoints",
      259);
    v10 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v18, this);
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])"player:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v12, (const char (*)[20])" not in this scene.");
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0LL;
  }
  else
  {
    ret = IrodoriTowerDefensePlay::checkSubBuildingPoints(this, *(_DWORD *)(v3 + 32), sub_value);
    if ( ret )
    {
      result = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      this->building_points_ -= sub_value;
      IrodoriTowerDefensePlay::notifyPlayerInfo(this);
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

// Line 275: range 00000000161C117E-00000000161C1570
__int64 __fastcall IrodoriTowerDefensePlay::checkAddBuildingPoints(
        const IrodoriTowerDefensePlay *const this,
        uint32_t uid,
        uint32_t add_value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream v17; // [rsp+10h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:274 64 4 13 add_value:274";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::checkAddBuildingPoints;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = add_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->player_uid_ == *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->building_points_
      && *(_DWORD *)(v3 + 64)
      && *(_DWORD *)(v3 + 64) + this->building_points_ < this->building_points_ )
    {
      goto LABEL_18;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->building_points_
      || *(_DWORD *)(v3 + 64)
      || *(_DWORD *)(v3 + 64) + this->building_points_ <= this->building_points_ )
    {
      result = 0LL;
    }
    else
    {
LABEL_18:
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "checkAddBuildingPoints",
        284);
      v9 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v17, this);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v9, (const char (*)[5])"uid:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v11,
              (const char (*)[18])" building points:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->building_points_);
      v14 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v13, (const char (*)[4])" + ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" overflow");
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkAddBuildingPoints",
      278);
    v6 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v17, this);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v6,
           (const char (*)[25])"player not in map. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v3 )
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
  return result;
};

// Line 291: range 00000000161C1572-00000000161C18CA
__int64 __fastcall IrodoriTowerDefensePlay::addBuildingPoints(
        IrodoriTowerDefensePlay *const this,
        uint32_t uid,
        uint32_t add_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  SceneMultistagePlay *scene_multistage_play; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  uint32_t v14; // ecx
  uint32_t scene; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:290";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::addBuildingPoints;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_multistage_play = this->scene_multistage_play_;
  p_vptr_DescribalBase = &scene_multistage_play->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene_multistage_play >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v8 = *p_vptr_DescribalBase + 24LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  scene = (*(__int64 (__fastcall **)(SceneMultistagePlay *))v8)(scene_multistage_play);
  Scene::findPlayer((const Scene *const)&__a, scene);
  v9 = std::operator==<Player>(0LL, &__a);
  std::shared_ptr<Player>::~shared_ptr(&__a);
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "addBuildingPoints",
      295);
    v10 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v18, this);
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])"player:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" not in map.");
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0LL;
  }
  else if ( (unsigned int)IrodoriTowerDefensePlay::checkAddBuildingPoints(this, *(_DWORD *)(v3 + 32), add_value) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v14 = SAFE_ADD<unsigned int,unsigned int>(this->building_points_, add_value);
    if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->building_points_);
    }
    this->building_points_ = v14;
    IrodoriTowerDefensePlay::notifyPlayerInfo(this);
    result = 0LL;
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

// Line 310: range 00000000161C18CC-00000000161C206C
__int64 __fastcall IrodoriTowerDefensePlay::checkBuildTower(
        const IrodoriTowerDefensePlay *const this,
        Player *player,
        uint32_t tower_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  PlayerGmComp *GmComp; // rax
  const IrodoriTowerDefensePlay *v13; // rcx
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(const IrodoriTowerDefensePlay *, _QWORD); // r8
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const IrodoriTowerDefensePlay *v24; // rdx
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  PlayerGmComp *v34; // rax
  uint32_t Uid; // eax
  uint32_t v36; // r14d
  uint32_t v37; // eax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  unsigned int retcode; // [rsp+24h] [rbp-ECh]
  const data::IrodoriChessGearExcelConfig *gear_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v47; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v48; // [rsp+40h] [rbp-D0h] BYREF
  char v49[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 13 built_num:321 48 4 14 gear_limit:322 64 4 14 build_cost:340 80 4 17 current_point:349 "
                        "96 4 12 tower_id:309";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::checkBuildTower;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 96) = tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v47);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
  gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_irodori_config_mgr,
                      *(_DWORD *)(v3 + 96));
  std::shared_ptr<Config>::~shared_ptr(&v47);
  if ( !gear_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkBuildTower",
      314);
    v7 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v48, this);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           v7,
           (const char (*)[32])"config not found for tower id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 96));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", player: ");
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v48);
    result = 5LL;
    goto LABEL_27;
  }
  GmComp = Player::getGmComp(player);
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 5u) )
    goto LABEL_21;
  v13 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    v14 = __asan_report_load8();
  v15 = *(__int64 (__fastcall **)(const IrodoriTowerDefensePlay *, _QWORD))v14;
  if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gear_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config_ptr->gadget_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 32) = v15(v13, gear_config_ptr->gadget_id);
  *(_DWORD *)(v3 + 48) = IrodoriTowerDefensePlay::getTowerLimit(this, *(_DWORD *)(v3 + 96));
  if ( *(_DWORD *)(v3 + 32) >= *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkBuildTower",
      325);
    v16 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v48, this);
    v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])"tower id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 96));
    v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])", gadget num:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v20, (const char (*)[16])" exceeds limit:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
    v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])", player: ");
    operator<<(v23, player);
    common::milog::MiLogStream::~MiLogStream(&v48);
    result = 9265LL;
    goto LABEL_27;
  }
  v24 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v25 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    v25 = __asan_report_load8();
  *(_DWORD *)(v3 + 64) = (*(__int64 (__fastcall **)(const IrodoriTowerDefensePlay *))v25)(v24);
  *(_DWORD *)(v3 + 80) = IrodoriTowerDefensePlay::getAllTowerLimit(this);
  if ( *(_DWORD *)(v3 + 64) < *(_DWORD *)(v3 + 80) )
  {
LABEL_21:
    *(_DWORD *)(v3 + 64) = 0;
    retcode = IrodoriTowerDefensePlay::getTowerCost(this, *(_DWORD *)(v3 + 96), v3 + 64);
    if ( retcode )
    {
      result = retcode;
    }
    else
    {
      v34 = Player::getGmComp(player);
      if ( PlayerGmComp::getGmSetValue<bool>(v34, 7u)
        || (Uid = Player::getUid(player),
            *(_DWORD *)(v3 + 80) = IrodoriTowerDefensePlay::getBuildingPoints(this, Uid),
            v36 = *(_DWORD *)(v3 + 64),
            v37 = Player::getUid(player),
            !(unsigned int)IrodoriTowerDefensePlay::checkSubBuildingPoints(this, v37, v36)) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
          "checkBuildTower",
          352);
        v38 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v48, this);
        v39 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v38,
                (const char (*)[17])"current points: ");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v3 + 80));
        v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v40, (const char (*)[14])". cost need: ");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v3 + 64));
        v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])", player: ");
        operator<<(v43, player);
        common::milog::MiLogStream::~MiLogStream(&v48);
        result = 9254LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkBuildTower",
      334);
    v26 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v48, this);
    v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])"tower id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 96));
    v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v28, (const char (*)[17])", all tower num:");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 64));
    v31 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v30,
            (const char (*)[22])" exceeds total limit:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 80));
    v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])", player: ");
    operator<<(v33, player);
    common::milog::MiLogStream::~MiLogStream(&v48);
    result = 9264LL;
  }
LABEL_27:
  if ( v49 == (char *)v3 )
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

// Line 361: range 00000000161C206E-00000000161C240A
__int64 __fastcall IrodoriTowerDefensePlay::trySubTowerBuildPoints(
        IrodoriTowerDefensePlay *const this,
        Player *player,
        uint32_t tower_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  uint32_t Uid; // eax
  PlayerGmComp *GmComp; // rax
  uint32_t v9; // r14d
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int retcode; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 build_cost:362 64 4 17 current_point:369 80 4 13 new_point:378 96 4 12 tower_id:360";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::trySubTowerBuildPoints;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 96) = tower_id;
  *(_DWORD *)(v3 + 48) = 0;
  retcode = IrodoriTowerDefensePlay::getTowerCost(this, *(_DWORD *)(v3 + 96), v3 + 48);
  if ( retcode )
  {
    result = retcode;
  }
  else
  {
    Uid = Player::getUid(player);
    *(_DWORD *)(v3 + 64) = IrodoriTowerDefensePlay::getBuildingPoints(this, Uid);
    GmComp = Player::getGmComp(player);
    if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 7u)
      || (v9 = *(_DWORD *)(v3 + 48),
          v10 = Player::getUid(player),
          !(unsigned int)IrodoriTowerDefensePlay::subBuildingPoints(this, v10, v9)) )
    {
      v15 = Player::getUid(player);
      *(_DWORD *)(v3 + 80) = IrodoriTowerDefensePlay::getBuildingPoints(this, v15);
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "trySubTowerBuildPoints",
        379);
      v16 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v24, this);
      v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v16,
              (const char (*)[18])"building points: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
      v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" ==> ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 80));
      v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])", player: ");
      operator<<(v21, player);
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "trySubTowerBuildPoints",
        374);
      v11 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v24, this);
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              v11,
              (const char (*)[35])"subBuildingPoints failed. tower_id");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 96));
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])". player: ");
      operator<<(v14, player);
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v25 == (char *)v3 )
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

// Line 384: range 00000000161C240C-00000000161C29CA
__int64 __fastcall IrodoriTowerDefensePlay::fillTowerGadgetParam(
        const IrodoriTowerDefensePlay *const this,
        uint32_t tower_id,
        unsigned __int64 gadget_param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  uint32_t gadget_id; // ecx
  uint32_t init_level; // ecx
  const IrodoriTowerDefensePlay *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(const IrodoriTowerDefensePlay *, _QWORD); // r8
  const float *v15; // rdx
  int v16; // xmm0_4
  float __a; // [rsp+2Ch] [rbp-D4h] BYREF
  std::map<std::string,float>::iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::map<std::string,float>::iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const data::IrodoriChessGearExcelConfig *gear_config_ptr; // [rsp+40h] [rbp-C0h]
  const std::map<std::string,float> *global_value_map; // [rsp+48h] [rbp-B8h]
  std::map<std::string,float> *__for_range; // [rsp+50h] [rbp-B0h]
  std::pair<const std::string,float> *__in; // [rsp+58h] [rbp-A8h]
  std::tuple_element<0,std::pair<const std::string,float> >::type *_; // [rsp+60h] [rbp-A0h]
  std::tuple_element<1,std::pair<const std::string,float> >::type *value; // [rsp+68h] [rbp-98h]
  std::shared_ptr<Config> v27; // [rsp+70h] [rbp-90h] BYREF
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-80h] BYREF
  char v29[96]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 tower_id:383";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::fillTowerGadgetParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_irodori_config_mgr,
                      *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( gear_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gear_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config_ptr->gadget_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    gadget_id = gear_config_ptr->gadget_id;
    if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(gadget_param);
    *(_DWORD *)gadget_param = gadget_id;
    if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->init_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gear_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config_ptr->init_level >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    init_level = gear_config_ptr->init_level;
    if ( *(_BYTE *)(((gadget_param + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((gadget_param + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(gadget_param + 40);
    }
    *(_DWORD *)(gadget_param + 40) = init_level;
    if ( *(char *)(((unsigned __int64)&gear_config_ptr->is_enable_rotate >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&gear_config_ptr->is_enable_rotate);
    if ( gear_config_ptr->is_enable_rotate )
    {
      if ( *(_BYTE *)(((gadget_param + 228) >> 3) + 0x7FFF8000) != 0
        && (char)(((gadget_param - 28) & 7) + 3) >= *(_BYTE *)(((gadget_param + 228) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(gadget_param + 228);
      }
      *(_DWORD *)(gadget_param + 228) = 3;
    }
    v12 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)(this->_vptr_DescribalBase + 24);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    v14 = *(__int64 (__fastcall **)(const IrodoriTowerDefensePlay *, _QWORD))v13;
    if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4();
    global_value_map = (const std::map<std::string,float> *)v14(v12, *(unsigned int *)gadget_param);
    std::map<std::string,float>::operator=((std::map<std::string,float> *const)(gadget_param + 752), global_value_map);
    __for_range = (std::map<std::string,float> *)(gadget_param + 752);
    __for_begin._M_node = std::map<std::string,float>::begin((std::map<std::string,float> *const)(gadget_param + 752))._M_node;
    __for_end._M_node = std::map<std::string,float>::end((std::map<std::string,float> *const)(gadget_param + 752))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::string const,float>>::operator*(&__for_begin);
      _ = std::get<0ul,std::string const,float>(__in);
      value = std::get<1ul,std::string const,float>(__in);
      __a = 0.0;
      v15 = std::max<float>(&__a, value);
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v16 = *(_DWORD *)v15;
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(value);
      }
      *(_DWORD *)value = v16;
      std::_Rb_tree_iterator<std::pair<std::string const,float>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "fillTowerGadgetParam",
      388);
    v7 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v28, this);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           v7,
           (const char (*)[32])"config not found for tower id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 5LL;
  }
  if ( v29 == (char *)v3 )
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

// Line 409: range 00000000161C29CC-00000000161C2BE1
__int64 __fastcall IrodoriTowerDefensePlay::checkDemolishTower(
        const IrodoriTowerDefensePlay *const this,
        Player *player,
        uint32_t tower_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int retcode; // [rsp+2Ch] [rbp-A4h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 refund:410 64 4 12 tower_id:408";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::checkDemolishTower;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = tower_id;
  *(_DWORD *)(v3 + 48) = 0;
  retcode = IrodoriTowerDefensePlay::getTowerRefund(this, *(_DWORD *)(v3 + 64), (uint32_t *)(v3 + 48));
  if ( retcode )
  {
    result = retcode;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkDemolishTower",
      416);
    v7 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v15, this);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])"tower: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" refund:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" player: ");
    operator<<(v12, player);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
  }
  if ( v16 == (char *)v3 )
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
  return result;
};

// Line 421: range 00000000161C2BE2-00000000161C2F94
__int64 __fastcall IrodoriTowerDefensePlay::tryAddTowerRefundPoints(
        IrodoriTowerDefensePlay *const this,
        Player *player,
        uint32_t tower_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  uint32_t Uid; // eax
  uint32_t v8; // r14d
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned int retcode; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 10 refund:422 64 4 17 current_point:430 80 4 13 new_point:436 96 4 12 tower_id:420";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::tryAddTowerRefundPoints;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 96) = tower_id;
  *(_DWORD *)(v3 + 48) = 0;
  retcode = IrodoriTowerDefensePlay::getTowerRefund(this, *(_DWORD *)(v3 + 96), (uint32_t *)(v3 + 48));
  if ( retcode )
  {
    result = retcode;
  }
  else
  {
    Uid = Player::getUid(player);
    *(_DWORD *)(v3 + 64) = IrodoriTowerDefensePlay::getBuildingPoints(this, Uid);
    v8 = *(_DWORD *)(v3 + 48);
    v9 = Player::getUid(player);
    if ( (unsigned int)IrodoriTowerDefensePlay::addBuildingPoints(this, v9, v8) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "tryAddTowerRefundPoints",
        433);
      v10 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v27, this);
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])"refund:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              v12,
              (const char (*)[44])", addBuildingPoints failed. demolish tower:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 96));
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", player: ");
      operator<<(v15, player);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v16 = Player::getUid(player);
      *(_DWORD *)(v3 + 80) = IrodoriTowerDefensePlay::getBuildingPoints(this, v16);
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "tryAddTowerRefundPoints",
        437);
      v17 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v27, this);
      v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])"tower:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 96));
      v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v19,
              (const char (*)[23])" refund point change: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" ==> ");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 80));
      v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" player: ");
      operator<<(v24, player);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0LL;
    }
  }
  if ( v28 == (char *)v3 )
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

// Line 442: range 00000000161C2F96-00000000161C395C
__int64 __fastcall IrodoriTowerDefensePlay::checkRebuildTower(
        const IrodoriTowerDefensePlay *const this,
        Player *player,
        uint32_t new_tower_id,
        uint32_t old_tower_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerGmComp *GmComp; // rax
  uint32_t gadget_id; // ecx
  const IrodoriTowerDefensePlay *v20; // rdx
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  const IrodoriTowerDefensePlay *v30; // rdx
  unsigned __int64 v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  uint32_t Uid; // eax
  PlayerGmComp *v41; // rax
  uint32_t v42; // eax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  unsigned int retcode; // [rsp+28h] [rbp-E8h]
  unsigned int retcodea; // [rsp+28h] [rbp-E8h]
  int net_cost; // [rsp+2Ch] [rbp-E4h]
  const data::IrodoriChessGearExcelConfig *new_gear_config_ptr; // [rsp+30h] [rbp-E0h]
  const data::IrodoriChessGearExcelConfig *curr_gear_config_ptr; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v58; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v59; // [rsp+50h] [rbp-C0h] BYREF
  char v60[160]; // [rsp+70h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 14 build_cost:483 48 4 16 build_refund:490 64 4 17 current_point:497 80 4 16 new_tower_id"
                        ":441 96 4 16 old_tower_id:441";
  *(_QWORD *)(v4 + 16) = IrodoriTowerDefensePlay::checkRebuildTower;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 80) = new_tower_id;
  *(_DWORD *)(v4 + 96) = old_tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v58);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58);
  new_gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                          &v7->design_config.txt_config_mgr.activity_irodori_config_mgr,
                          *(_DWORD *)(v4 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v58);
  if ( !new_gear_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkRebuildTower",
      446);
    v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v59, this);
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           v8,
           (const char (*)[36])"config not found for new tower id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])", player: ");
    operator<<(v11, player);
    common::milog::MiLogStream::~MiLogStream(&v59);
    result = 5LL;
    goto LABEL_35;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v58);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58);
  curr_gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                           &v13->design_config.txt_config_mgr.activity_irodori_config_mgr,
                           *(_DWORD *)(v4 + 96));
  std::shared_ptr<Config>::~shared_ptr(&v58);
  if ( !curr_gear_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkRebuildTower",
      453);
    v14 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v59, this);
    v15 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v14,
            (const char (*)[40])"config not found for current tower id: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 96));
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])", player: ");
    operator<<(v17, player);
    common::milog::MiLogStream::~MiLogStream(&v59);
    result = 5LL;
    goto LABEL_35;
  }
  GmComp = Player::getGmComp(player);
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 5u) )
    goto LABEL_26;
  if ( *(_BYTE *)(((unsigned __int64)&new_gear_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)new_gear_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&new_gear_config_ptr->gadget_id >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  gadget_id = new_gear_config_ptr->gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&curr_gear_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)curr_gear_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curr_gear_config_ptr->gadget_id >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( gadget_id != curr_gear_config_ptr->gadget_id )
  {
    v20 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      v21 = __asan_report_load8();
    *(_DWORD *)(v4 + 48) = (*(__int64 (__fastcall **)(const IrodoriTowerDefensePlay *, _QWORD))v21)(
                             v20,
                             new_gear_config_ptr->gadget_id);
    *(_DWORD *)(v4 + 64) = IrodoriTowerDefensePlay::getTowerLimit(this, *(_DWORD *)(v4 + 80));
    if ( *(_DWORD *)(v4 + 48) >= *(_DWORD *)(v4 + 64) )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "checkRebuildTower",
        466);
      v22 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v59, this);
      v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])off_25B8B6E0);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 80));
      v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v24, (const char (*)[13])", built num:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 48));
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v26, (const char (*)[16])" exceeds limit:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 64));
      v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])", player: ");
      operator<<(v29, player);
      common::milog::MiLogStream::~MiLogStream(&v59);
      result = 9265LL;
      goto LABEL_35;
    }
  }
  v30 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v31 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    v31 = __asan_report_load8();
  *(_DWORD *)(v4 + 48) = (*(__int64 (__fastcall **)(const IrodoriTowerDefensePlay *))v31)(v30);
  *(_DWORD *)(v4 + 64) = IrodoriTowerDefensePlay::getAllTowerLimit(this);
  if ( *(_DWORD *)(v4 + 48) <= *(_DWORD *)(v4 + 64) )
  {
LABEL_26:
    *(_DWORD *)(v4 + 32) = 0;
    retcode = IrodoriTowerDefensePlay::getTowerCost(this, *(_DWORD *)(v4 + 80), v4 + 32);
    if ( retcode )
    {
      result = retcode;
    }
    else
    {
      *(_DWORD *)(v4 + 48) = 0;
      retcodea = IrodoriTowerDefensePlay::getTowerRefund(this, *(_DWORD *)(v4 + 96), (uint32_t *)(v4 + 48));
      if ( retcodea )
      {
        result = retcodea;
      }
      else
      {
        Uid = Player::getUid(player);
        *(_DWORD *)(v4 + 64) = IrodoriTowerDefensePlay::getBuildingPoints(this, Uid);
        if ( *(_DWORD *)(v4 + 48) >= *(_DWORD *)(v4 + 32)
          || (v41 = Player::getGmComp(player), PlayerGmComp::getGmSetValue<bool>(v41, 7u))
          || (net_cost = *(_DWORD *)(v4 + 32) - *(_DWORD *)(v4 + 48),
              v42 = Player::getUid(player),
              !(unsigned int)IrodoriTowerDefensePlay::checkSubBuildingPoints(this, v42, net_cost)) )
        {
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
            "checkRebuildTower",
            505);
          v43 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v59, this);
          v44 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  v43,
                  (const char (*)[35])"need more points. current points: ");
          v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v44,
                  (const unsigned int *)(v4 + 64));
          v46 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v45, (const char (*)[11])", refund: ");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v46,
                  (const unsigned int *)(v4 + 48));
          v48 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v47, (const char (*)[9])", need: ");
          v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v48,
                  (const unsigned int *)(v4 + 32));
          v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v49, (const char (*)[11])", player: ");
          operator<<(v50, player);
          common::milog::MiLogStream::~MiLogStream(&v59);
          result = 9254LL;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkRebuildTower",
      477);
    v32 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v59, this);
    v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v32, (const char (*)[14])off_25B8B6E0);
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 80));
    v35 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v34, (const char (*)[17])", all tower num:");
    v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v4 + 48));
    v37 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v36,
            (const char (*)[22])" exceeds total limit:");
    v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v4 + 64));
    v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])", player: ");
    operator<<(v39, player);
    common::milog::MiLogStream::~MiLogStream(&v59);
    result = 9264LL;
  }
LABEL_35:
  if ( v60 == (char *)v4 )
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
  return result;
};

// Line 515: range 00000000161C395E-00000000161C3BC4
__int64 __fastcall IrodoriTowerDefensePlay::checkRotateTower(
        const IrodoriTowerDefensePlay *const this,
        Player *player,
        uint32_t tower_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  const data::IrodoriChessGearExcelConfig *gear_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 tower_id:514";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::checkRotateTower;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_irodori_config_mgr,
                      *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( gear_config_ptr )
  {
    if ( *(char *)(((unsigned __int64)&gear_config_ptr->is_enable_rotate >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&gear_config_ptr->is_enable_rotate);
    if ( !gear_config_ptr->is_enable_rotate )
      result = 9263LL;
    else
      result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "checkRotateTower",
      519);
    v7 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v15, this);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           v7,
           (const char (*)[32])"config not found for tower id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", player: ");
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 5LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 532: range 00000000161C3BC6-00000000161C3DC0
__int64 __fastcall IrodoriTowerDefensePlay::isValidTowerGearId(
        const IrodoriTowerDefensePlay *const this,
        uint32_t gear_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const data::IrodoriChessGearExcelConfig *gear_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 gear_id:531";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::isValidTowerGearId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gear_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                      &v5->design_config.txt_config_mgr.activity_irodori_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( gear_config_ptr )
  {
    result = 1LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "isValidTowerGearId",
      538);
    v7 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v12, this);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])"tower gear:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" config not found.");
    common::milog::MiLogStream::~MiLogStream(&v12);
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

// Line 543: range 00000000161C3DC2-00000000161C4464
int32_t __cdecl IrodoriTowerDefensePlay::fillGlobalBuildingInfoNotify(
        const IrodoriTowerDefensePlay *const this,
        proto::GlobalBuildingInfoNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const IrodoriTowerDefensePlay *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(const IrodoriTowerDefensePlay *, _QWORD); // r8
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 TowerLimit; // eax
  const IrodoriTowerDefensePlay *v17; // rdx
  unsigned __int64 v18; // rax
  google::protobuf::uint32 v19; // edx
  uint32_t AllTowerLimit; // edx
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  const data::IrodoriChessGearExcelConfig *gear_config_ptr; // [rsp+30h] [rbp-130h]
  proto::BuildingInfo *gear_info; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 tower_id:545 48 4 8 cost:552 64 4 10 refund:553 80 48 16 tower_id_set:544";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::fillGlobalBuildingInfoNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>>(
    (std::set<unsigned int> *)(v2 + 80),
    &v5->design_config.txt_config_mgr.activity_irodori_config_mgr.irodori_chess_gear_excel_config_map);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  __for_range = (std::set<unsigned int> *)(v2 + 80);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    gear_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(
                        &v7->design_config.txt_config_mgr.activity_irodori_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( gear_config_ptr )
    {
      *(_DWORD *)(v2 + 48) = 0;
      *(_DWORD *)(v2 + 64) = 0;
      if ( (unsigned int)IrodoriTowerDefensePlay::getTowerCost(this, *(_DWORD *)(v2 + 32), v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
          "fillGlobalBuildingInfoNotify",
          556);
        v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v28, this);
        v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v8, (const char (*)[27])off_25B8B860);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      if ( (unsigned int)IrodoriTowerDefensePlay::getTowerRefund(this, *(_DWORD *)(v2 + 32), (uint32_t *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
          "fillGlobalBuildingInfoNotify",
          560);
        v10 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v29, this);
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v10, (const char (*)[29])off_25B8B8A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      gear_info = proto::GlobalBuildingInfoNotify::add_building_list(notify);
      proto::BuildingInfo::set_building_id(gear_info, *(_DWORD *)(v2 + 32));
      proto::BuildingInfo::set_cost(gear_info, *(_DWORD *)(v2 + 48));
      proto::BuildingInfo::set_refund(gear_info, *(_DWORD *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::BuildingInfo::set_owner_uid(gear_info, this->player_uid_);
      v12 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      v14 = *(__int64 (__fastcall **)(const IrodoriTowerDefensePlay *, _QWORD))v13;
      if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gear_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config_ptr->gadget_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v15 = v14(v12, gear_config_ptr->gadget_id);
      proto::BuildingInfo::set_current_num(gear_info, v15);
      TowerLimit = IrodoriTowerDefensePlay::getTowerLimit(this, *(_DWORD *)(v2 + 32));
      proto::BuildingInfo::set_max_num(gear_info, TowerLimit);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  v17 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v18 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    v18 = __asan_report_load8();
  v19 = (*(__int64 (__fastcall **)(const IrodoriTowerDefensePlay *))v18)(v17);
  proto::GlobalBuildingInfoNotify::set_current_num(notify, v19);
  AllTowerLimit = IrodoriTowerDefensePlay::getAllTowerLimit(this);
  proto::GlobalBuildingInfoNotify::set_max_num(notify, AllTowerLimit);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  result = 0;
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 576: range 00000000161C4466-00000000161C473E
void __cdecl IrodoriTowerDefensePlay::onDungeonSettle(
        const IrodoriTowerDefensePlay *const this,
        Player *player,
        bool *is_activity_end,
        bool *is_new_record)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  IrodoriActivity *p_settle_score; // rdi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:577";
  *(_QWORD *)(v4 + 16) = IrodoriTowerDefensePlay::onDungeonSettle;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<IrodoriActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<IrodoriActivity>(0LL, (const std::shared_ptr<IrodoriActivity> *)(v4 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)is_activity_end >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_activity_end & 7) >= *(_BYTE *)(((unsigned __int64)is_activity_end >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_activity_end);
    }
    *is_activity_end = 0;
    p_settle_score = std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_settle_score = (IrodoriActivity *)&this->settle_score_;
      __asan_report_load4();
    }
    IrodoriActivity::onChessDungeonSettle(p_settle_score, &this->dungeon_context_, this->settle_score_, is_new_record);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)is_activity_end >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_activity_end & 7) >= *(_BYTE *)(((unsigned __int64)is_activity_end >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_activity_end);
    }
    *is_activity_end = 1;
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "onDungeonSettle",
      586);
    v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v14, this);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" activity end! ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  std::shared_ptr<IrodoriActivity>::~shared_ptr((std::shared_ptr<IrodoriActivity> *const)(v4 + 32));
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 591: range 00000000161C4740-00000000161C4B6C
void __cdecl IrodoriTowerDefensePlay::notifyPlayerInfo(const IrodoriTowerDefensePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  SceneMultistagePlay *scene_multistage_play; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  proto::IrodoriChessPlayerInfo *player_info; // [rsp+18h] [rbp-B8h]
  char v13[176]; // [rsp+20h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:592 64 32 10 notify:598";
  *(_QWORD *)(v1 + 16) = IrodoriTowerDefensePlay::notifyPlayerInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_multistage_play = this->scene_multistage_play_;
  p_vptr_DescribalBase = &scene_multistage_play->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene_multistage_play >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = (*(__int64 (__fastcall **)(SceneMultistagePlay *))v6)(scene_multistage_play);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Scene::findPlayer((const Scene *const)(v1 + 32), v7);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "notifyPlayerInfo",
      595);
    v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           this);
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])"player:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->player_uid_);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])" not in this scene.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
  }
  else
  {
    proto::IrodoriChessPlayerInfoNotify::IrodoriChessPlayerInfoNotify((proto::IrodoriChessPlayerInfoNotify *const)(v1 + 64));
    player_info = proto::IrodoriChessPlayerInfoNotify::mutable_player_info((proto::IrodoriChessPlayerInfoNotify *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessPlayerInfo::set_uid(player_info, this->player_uid_);
    if ( *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessPlayerInfo::set_building_points(player_info, this->building_points_);
    if ( *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessPlayerInfo::set_settle_score(player_info, this->settle_score_);
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::sendProto(v11, (const google::protobuf::Message *)(v1 + 64));
    proto::IrodoriChessPlayerInfoNotify::~IrodoriChessPlayerInfoNotify((proto::IrodoriChessPlayerInfoNotify *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
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

// Line 607: range 00000000161C4B6E-00000000161C4C18
void __cdecl IrodoriTowerDefensePlay::addSettleScore(IrodoriTowerDefensePlay *const this, uint32_t add_value)
{
  uint32_t v2; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v2 = SAFE_ADD<unsigned int,unsigned int>(this->settle_score_, add_value);
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_score_);
  }
  this->settle_score_ = v2;
  IrodoriTowerDefensePlay::notifyPlayerInfo(this);
};

// Line 613: range 00000000161C4C1A-00000000161C593D
int32_t __cdecl IrodoriTowerDefensePlay::forceSetFoundationTowers(
        IrodoriTowerDefensePlay *const this,
        Group *group,
        const std::map<unsigned int,unsigned int> *config_id_to_gear_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  std::_Rb_tree_iterator<std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::_Base_ptr *v10; // rax
  std::_Rb_tree_iterator<std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::_Base_ptr *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int8 (__fastcall *v13)(IrodoriTowerDefensePlay *const, _QWORD); // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  IrodoriTowerDefensePlay *v16; // rcx
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(unsigned __int64, IrodoriTowerDefensePlay *, _QWORD); // r8
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v21; // r14d
  std::map<std::shared_ptr<FoundationComp>,unsigned int>::mapped_type *v22; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v23; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v25; // rax
  std::_Rb_tree_iterator<std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::_Base_ptr *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rcx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  int32_t result; // eax
  int32_t retcode; // [rsp+24h] [rbp-1BCh]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-1B8h] BYREF
  std::map<std::shared_ptr<FoundationComp>,unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-1B0h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-1A8h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  std::map<std::shared_ptr<FoundationComp>,unsigned int> *__for_range_1; // [rsp+48h] [rbp-198h]
  std::pair<const std::shared_ptr<FoundationComp>,unsigned int> *__in; // [rsp+50h] [rbp-190h]
  std::tuple_element<0,std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::type *foundation_comp_ptr; // [rsp+58h] [rbp-188h]
  std::tuple_element<1,std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::type *gear_id_1; // [rsp+60h] [rbp-180h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *gear_id_0; // [rsp+68h] [rbp-178h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *gear_num; // [rsp+70h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+78h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+80h] [rbp-160h]
  std::map<std::shared_ptr<FoundationComp>,unsigned int>::iterator __for_end; // [rsp+88h] [rbp-158h] BYREF
  common::milog::MiLogStream v55; // [rsp+90h] [rbp-150h] BYREF
  char v56[304]; // [rsp+B0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 19 all_tower_limit:615 48 4 14 gear_limit:645 64 16 23 foundation_comp_ptr:632 96 48 29 f"
                        "oundation_to_gear_id_map:622 176 48 19 gear_id_num_map:623";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::forceSetFoundationTowers;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  retcode = 0;
  *(_DWORD *)(v3 + 32) = IrodoriTowerDefensePlay::getAllTowerLimit(this);
  if ( std::map<unsigned int,unsigned int>::size(config_id_to_gear_map) <= *(unsigned int *)(v3 + 32) )
  {
    std::map<std::shared_ptr<FoundationComp>,unsigned int>::map((std::map<std::shared_ptr<FoundationComp>,unsigned int> *const)(v3 + 96));
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 176));
    __for_range = config_id_to_gear_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(config_id_to_gear_map)._M_node;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::_Base_ptr)std::map<unsigned int,unsigned int>::end(config_id_to_gear_map)._M_node;
    while ( std::operator!=(
              &__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
    {
      v10 = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::_Base_ptr *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v11 = v10;
      if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)v10 + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v10 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v10, 8LL);
      }
      __for_end._M_node = *v11;
      config_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
      gear_id = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = (unsigned __int64)(this->_vptr_DescribalBase + 25);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      v13 = *(unsigned __int8 (__fastcall **)(IrodoriTowerDefensePlay *const, _QWORD))v12;
      if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v13(this, *gear_id) != 1 )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
          "forceSetFoundationTowers",
          628);
        v14 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v55, this);
        v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v14,
                (const char (*)[24])"invalid tower gear_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, gear_id);
        common::milog::MiLogStream::~MiLogStream(&v55);
        retcode = -1;
      }
      else
      {
        v16 = this;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = (unsigned __int64)(this->_vptr_DescribalBase + 27);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8();
        v18 = *(void (__fastcall **)(unsigned __int64, IrodoriTowerDefensePlay *, _QWORD))v17;
        if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v18(v3 + 64, v16, *config_id);
        if ( std::operator==<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
            "forceSetFoundationTowers",
            635);
          v19 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v55, this);
          v20 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  v19,
                  (const char (*)[36])"foundation not found of config_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, config_id);
          common::milog::MiLogStream::~MiLogStream(&v55);
          retcode = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v21 = *gear_id;
          v22 = std::map<std::shared_ptr<FoundationComp>,unsigned int>::operator[](
                  (std::map<std::shared_ptr<FoundationComp>,unsigned int> *const)(v3 + 96),
                  (const std::map<std::shared_ptr<FoundationComp>,unsigned int>::key_type *)(v3 + 64));
          v23 = v22;
          if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v22);
          }
          *v23 = v21;
          v24 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 176),
                  gear_id);
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ++*v24;
        }
        std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v3 + 64));
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 176);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 176))._M_node;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
    {
      v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      v26 = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::_Base_ptr *)v25;
      if ( ((unsigned __int8)v25 & 7) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v25->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v25 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v25->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v25, 8LL);
      }
      __for_end._M_node = *v26;
      gear_id_0 = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
      gear_num = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
      if ( *(_BYTE *)(((unsigned __int64)gear_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gear_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = IrodoriTowerDefensePlay::getTowerLimit(this, *gear_id_0);
      if ( *(_BYTE *)(((unsigned __int64)gear_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gear_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *gear_num > *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
          "forceSetFoundationTowers",
          648);
        v27 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v55, this);
        v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])"gear:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, gear_id_0);
        v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" num:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, gear_num);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v31,
                (const char (*)[16])" exceeds limit:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v55);
        retcode = -1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    if ( retcode )
    {
      v9 = -1;
    }
    else
    {
      __for_range_1 = (std::map<std::shared_ptr<FoundationComp>,unsigned int> *)(v3 + 96);
      __for_begin_0._M_node = std::map<std::shared_ptr<FoundationComp>,unsigned int>::begin((std::map<std::shared_ptr<FoundationComp>,unsigned int> *const)(v3 + 96))._M_node;
      __for_end._M_node = std::map<std::shared_ptr<FoundationComp>,unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<FoundationComp> const,unsigned int>>::operator*(&__for_begin_0);
        foundation_comp_ptr = std::get<0ul,std::shared_ptr<FoundationComp> const,unsigned int>(__in);
        gear_id_1 = std::get<1ul,std::shared_ptr<FoundationComp> const,unsigned int>(__in);
        if ( !std::operator==<FoundationComp>(0LL, foundation_comp_ptr) )
        {
          v33 = std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)foundation_comp_ptr);
          if ( *(_BYTE *)(((unsigned __int64)gear_id_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gear_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id_1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( (unsigned int)FoundationComp::forceSetTower(v33, *gear_id_1) )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
              "forceSetFoundationTowers",
              666);
            v34 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(
                    &v55,
                    this);
            v35 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v34,
                    (const char (*)[15])"forceSetTower:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, gear_id_1);
            common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, (const char (*)[9])" failed.");
            common::milog::MiLogStream::~MiLogStream(&v55);
            v9 = -1;
            goto LABEL_57;
          }
        }
        std::_Rb_tree_iterator<std::pair<std::shared_ptr<FoundationComp> const,unsigned int>>::operator++(&__for_begin_0);
      }
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "forceSetFoundationTowers",
        670);
      v37 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v55, this);
      v38 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v37,
              (const char (*)[24])"force set towers done: ");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v38, config_id_to_gear_map);
      common::milog::MiLogStream::~MiLogStream(&v55);
      v9 = 0;
    }
LABEL_57:
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 176));
    std::map<std::shared_ptr<FoundationComp>,unsigned int>::~map((std::map<std::shared_ptr<FoundationComp>,unsigned int> *const)(v3 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "forceSetFoundationTowers",
      618);
    v6 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v55, this);
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<FoundationComp>,unsigned int> >::_Base_ptr)std::map<unsigned int,unsigned int>::size(config_id_to_gear_map);
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)&__for_end);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           v7,
           (const char (*)[26])" exceeds all tower_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v55);
    v9 = -1;
  }
  result = v9;
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 675: range 00000000161C593E-00000000161C5AB7
void __cdecl IrodoriTowerDefensePlay::getSelectedCards(
        const IrodoriTowerDefensePlay *const this,
        std::vector<unsigned int> *card_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 card_id:676";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::getSelectedCards;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &this->dungeon_context_.card_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->dungeon_context_.card_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->dungeon_context_.card_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    std::vector<unsigned int>::push_back(card_id_vec, (const std::vector<unsigned int>::value_type *)(v2 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 683: range 00000000161C5AB8-00000000161C5E74
__int64 __fastcall IrodoriTowerDefensePlay::killTowerByScript(IrodoriTowerDefensePlay *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 SceneMultistagePlay; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t GadgetId; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 result; // rax
  uint32_t scene; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 entity_id:682 64 16 14 gadget_ptr:685";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::killTowerByScript;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = entity_id;
  SceneMultistagePlay = (unsigned __int64)SceneMultistagePlayCompBase::getSceneMultistagePlay(&this->SceneMultistagePlayCompBase);
  if ( *(_BYTE *)((SceneMultistagePlay >> 3) + 0x7FFF8000) )
    SceneMultistagePlay = __asan_report_load8();
  v6 = *(_QWORD *)SceneMultistagePlay + 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    SceneMultistagePlay = __asan_report_load8();
  scene = (*(__int64 (__fastcall **)(unsigned __int64))v6)(SceneMultistagePlay);
  Scene::findEntity<Gadget>((const Scene *const)(v2 + 64), scene);
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
      "killTowerByScript",
      688);
    v7 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v22, this);
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])"gadget entity:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" not exist.");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v10 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_irodori_config_mgr;
    v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    GadgetId = Gadget::getGadgetId(v12);
    LOBYTE(p_activity_irodori_config_mgr) = !ActivityIrodoriExcelConfigMgr::isIrodoriTowerGadget(
                                               p_activity_irodori_config_mgr,
                                               GadgetId);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( (_BYTE)p_activity_irodori_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "killTowerByScript",
        694);
      v14 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v22, this);
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])"gadget: ");
      v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v17 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v15, v16);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v17, (const char (*)[23])off_25B8BE20);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v10 = -1;
    }
    else
    {
      v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = Creature::subCurHpToZero(v18, CHANGE_HP_SUB_SCRIPT, 1);
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  result = v10;
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

// Line 701: range 00000000161C5E76-00000000161C6273
void __cdecl IrodoriTowerDefensePlay::initCardsEffect(IrodoriTowerDefensePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  IrodoriChessCardInfo *v9; // rax
  IrodoriChessCardInfo *v10; // rax
  std::shared_ptr<IrodoriChessCardInfo> *v11; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-D0h]
  const data::IrodoriChessCardExcelConfig *card_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 11 card_id:702 64 16 17 card_info_ptr:710";
  *(_QWORD *)(v1 + 16) = IrodoriTowerDefensePlay::initCardsEffect;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  __for_range = &this->dungeon_context_.card_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->dungeon_context_.card_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->dungeon_context_.card_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = *v4;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    card_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessCardExcelConfig(
                        &v5->design_config.txt_config_mgr.activity_irodori_config_mgr,
                        *(_DWORD *)(v1 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( card_config_ptr )
    {
      common::tools::perf::make_shared<IrodoriChessCardInfo,IrodoriTowerDefensePlay &>(
        (IrodoriTowerDefensePlay *)(v1 + 64),
        this);
      if ( std::operator==<IrodoriChessCardInfo>(0LL, (const std::shared_ptr<IrodoriChessCardInfo> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
          "initCardsEffect",
          713);
        v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v17, this);
        common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])off_25B8BF20);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      else
      {
        v9 = std::__shared_ptr_access<IrodoriChessCardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriChessCardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        IrodoriChessCardInfo::setCardId(v9, *(_DWORD *)(v1 + 48));
        v10 = std::__shared_ptr_access<IrodoriChessCardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriChessCardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        IrodoriChessCardInfo::initEffects(v10);
        v11 = std::map<unsigned int,std::shared_ptr<IrodoriChessCardInfo>>::operator[](
                &this->card_info_map_,
                (const std::map<unsigned int,std::shared_ptr<IrodoriChessCardInfo>>::key_type *)(v1 + 48));
        std::shared_ptr<IrodoriChessCardInfo>::operator=(v11, (const std::shared_ptr<IrodoriChessCardInfo> *)(v1 + 64));
      }
      std::shared_ptr<IrodoriChessCardInfo>::~shared_ptr((std::shared_ptr<IrodoriChessCardInfo> *const)(v1 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
        "initCardsEffect",
        707);
      v6 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v17, this);
      v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             v6,
             (const char (*)[30])"card config not found for id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v1 )
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

// Line 723: range 00000000161C6274-00000000161C651E
void __fastcall IrodoriTowerDefensePlay::onEffectModifyRefundByCost(
        IrodoriTowerDefensePlay *const this,
        uint32_t factor,
        const IrodoriChessEffectBase *effect)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t *v6; // rdx
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  IrodoriTowerDefensePlay *v14; // rdx
  unsigned __int64 v15; // rax
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-80h] BYREF
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 factor:722";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::onEffectModifyRefundByCost;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = factor;
  v6 = (uint32_t *)std::max<unsigned int>(&this->max_refund_by_cost_factor_, (const unsigned int *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v7 = *v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_refund_by_cost_factor_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_refund_by_cost_factor_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_refund_by_cost_factor_);
  }
  this->max_refund_by_cost_factor_ = v7;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
    "onEffectModifyRefundByCost",
    725);
  v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v17, this);
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])"card_effect: ");
  v10 = common::milog::MiLogStream::operator<<<IrodoriChessEffectBase,(IrodoriChessEffectBase*)0>(v9, effect);
  v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])", factor:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", max:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->max_refund_by_cost_factor_);
  common::milog::MiLogStream::~MiLogStream(&v17);
  v14 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = (unsigned __int64)(this->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    v15 = __asan_report_load8();
  (*(void (__fastcall **)(IrodoriTowerDefensePlay *))v15)(v14);
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 730: range 00000000161C6520-00000000161C688E
void __cdecl IrodoriTowerDefensePlay::onEffectAddAbilityGroup(
        IrodoriTowerDefensePlay *const this,
        const std::set<std::string> *ability_group_set,
        const IrodoriChessEffectBase *effect)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *M_current; // r15
  std::vector<std::string>::iterator v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::set<std::string>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::set<std::string>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::set<std::string> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::string *ability_group; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 25 new_ability_group_vec:731";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::onEffectAddAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 32));
  __for_range = ability_group_set;
  __for_begin._M_node = std::set<std::string>::begin(ability_group_set)._M_node;
  __for_end._M_node = std::set<std::string>::end(ability_group_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    ability_group = std::_Rb_tree_const_iterator<std::string>::operator*(&__for_begin);
    if ( !common::tools::MiscUtils::isContains<std::set<std::string>,std::string>(
            &this->card_ability_group_set_,
            ability_group) )
      std::vector<std::string>::push_back((std::vector<std::string> *const)(v3 + 32), ability_group);
    std::_Rb_tree_const_iterator<std::string>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
    "onEffectAddAbilityGroup",
    739);
  common::milog::MiLogStream::operator<<<std::string>(&v19, (const std::vector<std::string> *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v19);
  M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v3 + 32))._M_current;
  v7._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v3 + 32))._M_current;
  std::set<std::string>::insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>>(
    &this->card_ability_group_set_,
    v7,
    (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current);
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
    "onEffectAddAbilityGroup",
    742);
  v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v19, this);
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])"card_effect: ");
  v10 = common::milog::MiLogStream::operator<<<IrodoriChessEffectBase,(IrodoriChessEffectBase*)0>(v9, effect);
  v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v10, (const char (*)[21])", add abiliy groups:");
  v12 = common::milog::MiLogStream::operator<<<std::string>(v11, ability_group_set);
  v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", now:");
  common::milog::MiLogStream::operator<<<std::string>(v13, &this->card_ability_group_set_);
  common::milog::MiLogStream::~MiLogStream(&v19);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 32));
  if ( v20 == (char *)v3 )
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

// Line 746: range 00000000161C6890-00000000161C6ADB
void __cdecl IrodoriTowerDefensePlay::onPostEnterScene(IrodoriTowerDefensePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v6; // rax
  PlayerAbilityGroupComp *v7; // rax
  std::set<std::string>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::set<std::string>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<std::string> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::string *ability_group; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 21 ability_group_vec:747";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::onPostEnterScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 32));
  __for_range = &this->card_ability_group_set_;
  __for_begin._M_node = std::set<std::string>::begin(&this->card_ability_group_set_)._M_node;
  __for_end._M_node = std::set<std::string>::end(&this->card_ability_group_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    ability_group = std::_Rb_tree_const_iterator<std::string>::operator*(&__for_begin);
    AbilityGroupComp = Player::getAbilityGroupComp(player);
    if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, ability_group) )
      std::vector<std::string>::push_back((std::vector<std::string> *const)(v2 + 32), ability_group);
    std::_Rb_tree_const_iterator<std::string>::operator++(&__for_begin);
  }
  if ( !std::vector<std::string>::empty((const std::vector<std::string> *const)(v2 + 32)) )
  {
    v6 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v6, (const std::vector<std::string> *)(v2 + 32), 0);
    v7 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v7);
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
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

// Line 764: range 00000000161C6ADC-00000000161C6B01
void __cdecl IrodoriTowerDefensePlay::onLeaveScene(IrodoriTowerDefensePlay *const this, Player *player)
{
  IrodoriTowerDefensePlay::onClearPlayer(this, player);
};

// Line 769: range 00000000161C6B02-00000000161C6D45
void __cdecl IrodoriTowerDefensePlay::onClearPlayer(IrodoriTowerDefensePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v6; // rax
  PlayerAbilityGroupComp *v7; // rax
  std::set<std::string>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::set<std::string>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::set<std::string> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::string *ability_group; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 21 ability_group_vec:770";
  *(_QWORD *)(v2 + 16) = IrodoriTowerDefensePlay::onClearPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 32));
  __for_range = &this->card_ability_group_set_;
  __for_begin._M_node = std::set<std::string>::begin(&this->card_ability_group_set_)._M_node;
  __for_end._M_node = std::set<std::string>::end(&this->card_ability_group_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    ability_group = std::_Rb_tree_const_iterator<std::string>::operator*(&__for_begin);
    AbilityGroupComp = Player::getAbilityGroupComp(player);
    if ( PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, ability_group) )
      std::vector<std::string>::push_back((std::vector<std::string> *const)(v2 + 32), ability_group);
    std::_Rb_tree_const_iterator<std::string>::operator++(&__for_begin);
  }
  if ( !std::vector<std::string>::empty((const std::vector<std::string> *const)(v2 + 32)) )
  {
    v6 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v6, (const std::vector<std::string> *)(v2 + 32));
    v7 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v7);
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
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

// Line 787: range 00000000161C6D46-00000000161C6FEC
void __fastcall IrodoriTowerDefensePlay::onEffectAddTotalTowerLimit(
        IrodoriTowerDefensePlay *const this,
        uint32_t add_value,
        const IrodoriChessEffectBase *effect)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned int v6; // edx
  uint32_t v7; // edx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  IrodoriTowerDefensePlay *v14; // rdx
  unsigned __int64 v15; // rax
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-80h] BYREF
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 add_value:786";
  *(_QWORD *)(v3 + 16) = IrodoriTowerDefensePlay::onEffectAddTotalTowerLimit;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = add_value;
  v6 = *(_DWORD *)(v3 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_tower_limit_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_tower_limit_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v7 = SAFE_ADD<unsigned int,unsigned int>(this->total_tower_limit_delta_, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_tower_limit_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_tower_limit_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_tower_limit_delta_);
  }
  this->total_tower_limit_delta_ = v7;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
    "onEffectAddTotalTowerLimit",
    789);
  v8 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v17, this);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])"card_effect:");
  v10 = common::milog::MiLogStream::operator<<<IrodoriChessEffectBase,(IrodoriChessEffectBase*)0>(v9, effect);
  v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", add_value:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" total_delta:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->total_tower_limit_delta_);
  common::milog::MiLogStream::~MiLogStream(&v17);
  v14 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = (unsigned __int64)(this->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    v15 = __asan_report_load8();
  (*(void (__fastcall **)(IrodoriTowerDefensePlay *))v15)(v14);
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 794: range 00000000161C6FEE-00000000161C740F
void __fastcall IrodoriTowerDefensePlay::onEffectAddTargetTowersLimit(
        IrodoriTowerDefensePlay *const this,
        const std::set<unsigned int> *gadget_id_set,
        uint32_t add_value,
        const IrodoriChessEffectBase *effect)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool GearIdByGadgetId; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  IrodoriTowerDefensePlay *v19; // rdx
  unsigned __int64 v20; // rax
  uint32_t gadget_id; // [rsp+24h] [rbp-DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 11 gear_id:797 64 4 13 add_value:793";
  *(_QWORD *)(v4 + 16) = IrodoriTowerDefensePlay::onEffectAddTargetTowersLimit;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = add_value;
  __for_range = gadget_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(gadget_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(gadget_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    gadget_id = *v7;
    *(_DWORD *)(v4 + 48) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    GearIdByGadgetId = ActivityIrodoriExcelConfigMgr::getGearIdByGadgetId(
                         &v8->design_config.txt_config_mgr.activity_irodori_config_mgr,
                         gadget_id,
                         (uint32_t *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( GearIdByGadgetId )
    {
      v10 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->tower_limit_delta_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *v10 += *(_DWORD *)(v4 + 64);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/irodori_chess/irodori_tower_defense_play.cpp",
    "onEffectAddTargetTowersLimit",
    803);
  v11 = common::milog::MiLogStream::operator<<<IrodoriTowerDefensePlay,(IrodoriTowerDefensePlay*)0>(&v28, this);
  v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])"card_effect:");
  v13 = common::milog::MiLogStream::operator<<<IrodoriChessEffectBase,(IrodoriChessEffectBase*)0>(v12, effect);
  v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", add_value:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" gadget_id_set:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, gadget_id_set);
  v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v17, (const char (*)[20])", result limit map:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v18, &this->tower_limit_delta_map_);
  common::milog::MiLogStream::~MiLogStream(&v28);
  v19 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v20 = (unsigned __int64)(this->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    v20 = __asan_report_load8();
  (*(void (__fastcall **)(IrodoriTowerDefensePlay *))v20)(v19);
  if ( v29 == (char *)v4 )
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
};
