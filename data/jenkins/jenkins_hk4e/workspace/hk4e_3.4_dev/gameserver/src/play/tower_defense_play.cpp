// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/tower_defense_play.cpp

// Line 29: range 00000000161AAE38-00000000161AB121
std::string *__cdecl CardInfo::getDesc[abi:cxx11](std::string *retstr, const CardInfo *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  char v14[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:30";
  *(_QWORD *)(v2 + 16) = CardInfo::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "<card:");
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->card_id);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " index:");
  if ( *(_BYTE *)(((unsigned __int64)&this->pick_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pick_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->pick_index);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " quality:");
  if ( *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->quality);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, " card_type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, this->card_type);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, ">");
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
  if ( v14 == (char *)v2 )
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

// Line 38: range 00000000161AB122-00000000161AB436
CardEffectBasePtr __cdecl CardInfo::createEffect(CardInfo *const this, const data::ChessCardEffect *config)
{
  const data::ChessCardEffect *v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo> *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  CardEffectBasePtr result; // rax
  const data::ChessCardEffect *configa; // [rsp+8h] [rbp-98h]
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
  *(_QWORD *)(v3 + 8) = "1 32 16 13 effect_ptr:39";
  *(_QWORD *)(v3 + 16) = CardInfo::createEffect;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance();
  if ( *(_BYTE *)(((unsigned __int64)&configa->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&configa->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::create(
    (common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo> *const)(v3 + 32),
    &v6->creators_map_,
    (CardInfo *)(unsigned int)configa->effect_type,
    (std::remove_reference<CardInfo&>::type *)config);
  if ( std::operator==<CardEffectBase>(0LL, (const std::shared_ptr<CardEffectBase> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "createEffect",
      42);
    v7 = common::milog::MiLogStream::operator<<<CardInfo,(CardInfo*)0>(&v15, (const CardInfo *)config);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           v7,
           (const char (*)[24])"effect not implemented:");
    common::milog::MiLogStream::operator<<<data::ChessCardEffectType,(data::ChessCardEffectType*)0>(
      v8,
      &configa->effect_type);
    common::milog::MiLogStream::~MiLogStream(&v15);
    std::shared_ptr<CardEffectBase>::shared_ptr((std::shared_ptr<CardEffectBase> *const)this, 0LL);
  }
  else
  {
    v9 = (unsigned __int64)std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 24LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, const data::ChessCardEffect *))v10)(v9, configa) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/tower_defense_play.cpp",
        "createEffect",
        47);
      v11 = common::milog::MiLogStream::operator<<<CardInfo,(CardInfo*)0>(&v15, (const CardInfo *)config);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v11,
        (const char (*)[31])" init effect by config failed.");
      common::milog::MiLogStream::~MiLogStream(&v15);
      std::shared_ptr<CardEffectBase>::shared_ptr((std::shared_ptr<CardEffectBase> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<CardEffectBase>::shared_ptr(
        (std::shared_ptr<CardEffectBase> *const)this,
        (std::shared_ptr<CardEffectBase> *)(v3 + 32));
    }
  }
  std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)(v3 + 32));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 54: range 00000000161AB438-00000000161AB79B
void __cdecl CardInfo::addEffect(CardInfo *const this, Player *player, const data::ChessCardEffect *config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::shared_ptr<CardEffectBase> *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  uint32_t round; // r14d
  std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  CardEffectBase *v12; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 effect_ptr:59";
  *(_QWORD *)(v3 + 16) = CardInfo::addEffect;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&config->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( config->effect_type && config->effect_type != CHESS_CARD_EFFECT_SET_HOME_HP )
  {
    CardInfo::createEffect((CardInfo *const)(v3 + 32), (const data::ChessCardEffect *)this);
    if ( std::operator==<CardEffectBase>(0LL, (const std::shared_ptr<CardEffectBase> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/play/tower_defense_play.cpp",
        "addEffect",
        62);
      v6 = common::milog::MiLogStream::operator<<<CardInfo,(CardInfo*)0>(&v14, this);
      common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" oom.");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v7 = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::operator[](&this->effect_map, &config->effect_index);
      std::shared_ptr<CardEffectBase>::operator=(v7, (const std::shared_ptr<CardEffectBase> *)(v3 + 32));
      v8 = (unsigned __int64)std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(_QWORD *)v8 + 48LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *))v9)(v8, player);
      if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      round = this->round;
      v11 = std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v11->begin_round >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v11 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->begin_round >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( round >= v11->begin_round )
      {
        v12 = std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        CardEffectBase::start(v12);
      }
    }
    std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)(v3 + 32));
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 74: range 00000000161AB79C-00000000161AB96B
void __cdecl CardInfo::initEffects(CardInfo *const this, Player *player)
{
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  std::vector<data::ChessCardEffect>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::vector<data::ChessCardEffect>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+28h] [rbp-58h]
  const std::vector<data::ChessCardEffect> *__for_range; // [rsp+30h] [rbp-50h]
  const data::ChessCardEffect *extra_effect; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.activity_chess_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                      p_activity_chess_config_mgr,
                      this->card_id);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( card_config_ptr )
  {
    CardInfo::addEffect(this, player, &card_config_ptr->effect);
    __for_range = &card_config_ptr->extra_effect_list;
    __for_begin._M_current = std::vector<data::ChessCardEffect>::begin(&card_config_ptr->extra_effect_list)._M_current;
    __for_end._M_current = std::vector<data::ChessCardEffect>::end(&card_config_ptr->extra_effect_list)._M_current;
    while ( __gnu_cxx::operator!=<data::ChessCardEffect const*,std::vector<data::ChessCardEffect>>(
              &__for_begin,
              &__for_end) )
    {
      extra_effect = __gnu_cxx::__normal_iterator<data::ChessCardEffect const*,std::vector<data::ChessCardEffect>>::operator*(&__for_begin);
      CardInfo::addEffect(this, player, extra_effect);
      __gnu_cxx::__normal_iterator<data::ChessCardEffect const*,std::vector<data::ChessCardEffect>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "initEffects",
      78);
    v3 = common::milog::MiLogStream::operator<<<CardInfo,(CardInfo*)0>(&v10, this);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v3, (const char (*)[23])" card config not found");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
};

// Line 89: range 00000000161AB96C-00000000161ABA7D
uint32_t __cdecl CardInfo::tryExpireEffects(CardInfo *const this)
{
  const std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > *v1; // rax
  CardEffectBase *v2; // rax
  uint32_t count; // [rsp+14h] [rbp-5Ch]
  std::map<unsigned int,std::shared_ptr<CardEffectBase>>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<CardEffectBase>>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<CardEffectBase>> *__for_range; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::type *index; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::type *effect_ptr; // [rsp+38h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > __in; // [rsp+40h] [rbp-30h] BYREF

  count = 0;
  __for_range = &this->effect_map;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::begin(&this->effect_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::end(&this->effect_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>::pair(&__in, v1);
    index = std::get<0ul,unsigned int const,std::shared_ptr<CardEffectBase>>(&__in);
    effect_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CardEffectBase>>(&__in);
    if ( !std::operator==<CardEffectBase>(0LL, effect_ptr) )
    {
      v2 = std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)effect_ptr);
      if ( CardEffectBase::tryExpire(v2) )
        ++count;
    }
    std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>>::operator++(&__for_begin);
  }
  return count;
};

// Line 106: range 00000000161ABA7E-00000000161ABB8F
uint32_t __cdecl CardInfo::tryEnableEffects(CardInfo *const this)
{
  const std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > *v1; // rax
  CardEffectBase *v2; // rax
  uint32_t count; // [rsp+14h] [rbp-5Ch]
  std::map<unsigned int,std::shared_ptr<CardEffectBase>>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<CardEffectBase>>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<CardEffectBase>> *__for_range; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::type *index; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::type *effect_ptr; // [rsp+38h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > __in; // [rsp+40h] [rbp-30h] BYREF

  count = 0;
  __for_range = &this->effect_map;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::begin(&this->effect_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::end(&this->effect_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>::pair(&__in, v1);
    index = std::get<0ul,unsigned int const,std::shared_ptr<CardEffectBase>>(&__in);
    effect_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CardEffectBase>>(&__in);
    if ( !std::operator==<CardEffectBase>(0LL, effect_ptr) )
    {
      v2 = std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)effect_ptr);
      if ( CardEffectBase::tryEnable(v2) )
        ++count;
    }
    std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>>::operator++(&__for_begin);
  }
  return count;
};

// Line 123: range 00000000161ABB90-00000000161ABC92
void __cdecl CardInfo::disableEffects(CardInfo *const this, Player *player)
{
  const std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > *v2; // rax
  CardEffectBase *v3; // rax
  std::map<unsigned int,std::shared_ptr<CardEffectBase>>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<CardEffectBase>>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<CardEffectBase>> *__for_range; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::type *index; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::type *effect_ptr; // [rsp+38h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > __in; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->effect_map;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::begin(&this->effect_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::end(&this->effect_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>::pair(&__in, v2);
    index = std::get<0ul,unsigned int const,std::shared_ptr<CardEffectBase>>(&__in);
    effect_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CardEffectBase>>(&__in);
    if ( !std::operator==<CardEffectBase>(0LL, effect_ptr) )
    {
      v3 = std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)effect_ptr);
      CardEffectBase::stop(v3);
    }
    std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>>::operator++(&__for_begin);
  }
};

// Line 135: range 00000000161ABC94-00000000161ABE58
bool __cdecl CardInfo::isActive(const CardInfo *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool isActive; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::pointer v5; // rax
  std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 iter:136 64 16 14 effect_ptr:141";
  *(_QWORD *)(v1 + 16) = CardInfo::isActive;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  *(std::map<unsigned int,std::shared_ptr<CardEffectBase>>::const_iterator *)(v1 + 32) = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::find(
                                                                                           &this->effect_map,
                                                                                           &CardInfo::MAIN_EFFECT_INDEX);
  __y._M_node = std::map<unsigned int,std::shared_ptr<CardEffectBase>>::end(&this->effect_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > >::_Self *)(v1 + 32),
         &__y) )
  {
    isActive = 0;
  }
  else
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<CardEffectBase> > > *const)(v1 + 32));
    std::shared_ptr<CardEffectBase>::shared_ptr((std::shared_ptr<CardEffectBase> *const)(v1 + 64), &v5->second);
    if ( std::operator==<CardEffectBase>(0LL, (const std::shared_ptr<CardEffectBase> *)(v1 + 64)) )
    {
      isActive = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      isActive = CardEffectBase::isActive(v6);
    }
    std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)(v1 + 64));
  }
  result = isActive;
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
  return result;
};

// Line 150: range 00000000161ABE5A-00000000161AC1A3
void __fastcall TowerDefensePlay::initPlayerInfo(TowerDefensePlay *const this, Player *player, uint32_t init_points)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::key_type __x; // [rsp+2Ch] [rbp-C4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::_Self __y; // [rsp+30h] [rbp-C0h] BYREF
  TowerDefensePlay::PlayerInfo *player_info; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 init_points:149 64 8 8 iter:151";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::initPlayerInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = init_points;
  __x = Player::getUid(player);
  *(std::map<unsigned int,TowerDefensePlay::PlayerInfo>::iterator *)(v3 + 64) = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::find(
                                                                                  &this->player_info_map_,
                                                                                  &__x);
  __y._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::end(&this->player_info_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::_Self *)(v3 + 64),
         &__y) )
  {
    __x = Player::getUid(player);
    player_info = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::operator[](&this->player_info_map_, &__x);
    v6 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(player_info);
    }
    player_info->building_points = v6;
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "initPlayerInfo",
      156);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v17, this);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" init player:");
    v9 = operator<<(v8, player);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" points:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "initPlayerInfo",
      159);
    v11 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v17, this);
    v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v11,
            (const char (*)[24])" duplicate init player:");
    operator<<(v12, player);
    common::milog::MiLogStream::~MiLogStream(&v17);
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
};

// Line 164: range 00000000161AC1A4-00000000161AC62C
uint32_t __cdecl TowerDefensePlay::getMaxTowerNum(const TowerDefensePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 SceneMultistagePlay; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // r14d
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // r14
  std::__shared_ptr_access<const DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t DungeonId; // eax
  double v11; // xmm0_8
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t result; // eax
  double __a; // [rsp+18h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 14 config_num:171 64 8 10 result:172 96 16 21 dungeon_scene_ptr:165";
  *(_QWORD *)(v1 + 16) = TowerDefensePlay::getMaxTowerNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  SceneMultistagePlay = (unsigned __int64)SceneMultistagePlayCompBase::getSceneMultistagePlay(&this->SceneMultistagePlayCompBase);
  if ( *(_BYTE *)((SceneMultistagePlay >> 3) + 0x7FFF8000) )
    SceneMultistagePlay = __asan_report_load8();
  v5 = *(_QWORD *)SceneMultistagePlay + 32LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    SceneMultistagePlay = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64))v5)(SceneMultistagePlay);
  toPtr<DungeonScene const,Scene const>((const Scene *)(v1 + 96));
  if ( std::operator==<DungeonScene const>(0LL, (const std::shared_ptr<const DungeonScene> *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "getMaxTowerNum",
      168);
    v6 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v20, this);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v6,
      (const char (*)[27])" get dungeon scene failed.");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_chess_config_mgr;
    v9 = std::__shared_ptr_access<DungeonScene const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    DungeonId = DungeonScene::getDungeonId(v9);
    *(_DWORD *)(v1 + 48) = ActivityChessExcelConfigMgr::queryMaxTowerNumByDungeonId(
                             p_activity_chess_config_mgr,
                             DungeonId);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    v11 = (double)*(int *)(v1 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->gear_num_delta_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(double *)(v1 + 64) = v11 + this->gear_num_delta_;
    __a = 0.0;
    v12 = (unsigned __int64)std::max<double>(&__a, (const double *)(v1 + 64));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    *(_QWORD *)(v1 + 64) = *(_QWORD *)v12;
    if ( *(double *)(v1 + 64) > (double)(int)std::numeric_limits<unsigned int>::max() )
      *(double *)(v1 + 64) = (double)(int)std::numeric_limits<unsigned int>::max();
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "getMaxTowerNum",
      178);
    v13 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v20, this);
    v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" max num: ");
    v15 = common::milog::MiLogStream::operator<<<double,(double *)0>(v14, (const double *)(v1 + 64));
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", config num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = (int)*(double *)(v1 + 64);
  }
  std::shared_ptr<DungeonScene const>::~shared_ptr((std::shared_ptr<const DungeonScene> *const)(v1 + 96));
  result = v7;
  if ( v21 == (char *)v1 )
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

// Line 184: range 00000000161AC62E-00000000161ACC1C
__int64 __fastcall TowerDefensePlay::getTowerCost(
        const TowerDefensePlay *const this,
        uint32_t tower_id,
        unsigned __int64 cost)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  uint32_t v12; // ecx
  unsigned int v13; // r14d
  double v14; // xmm0_8
  unsigned __int64 v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // ecx
  double __a; // [rsp+28h] [rbp-118h] BYREF
  const data::ActivityChessGearExcelConfig *tower_config_ptr; // [rsp+30h] [rbp-110h]
  const double *factor_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 13 gadget_id:192 48 4 15 config_cost:193 64 4 13 real_cost:202 80 4 12 tower_id:183 96 8 "
                        "16 total_factor:199 128 8 15 result_cost:200";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::getTowerCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 80) = tower_id;
  v6 = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)((cost >> 3) + 0x7FFF8000) != 0 && (char)((cost & 7) + 3) >= *(_BYTE *)((cost >> 3) + 0x7FFF8000) )
    __asan_report_store4(cost);
  *(_DWORD *)cost = v6;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  tower_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                       &v7->design_config.txt_config_mgr.activity_chess_config_mgr,
                       *(_DWORD *)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( tower_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tower_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tower_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_config_ptr->gadget_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = tower_config_ptr->gadget_id;
    if ( *(_BYTE *)(((unsigned __int64)&tower_config_ptr->build_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tower_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_config_ptr->build_cost >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = tower_config_ptr->build_cost;
    v12 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)((cost >> 3) + 0x7FFF8000) != 0 && (char)((cost & 7) + 3) >= *(_BYTE *)((cost >> 3) + 0x7FFF8000) )
      __asan_report_store4(cost);
    *(_DWORD *)cost = v12;
    factor_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,double> const>(
                   &this->gadget_build_cost_factor_map_,
                   (const std::map<unsigned int,double>::key_type *)(v3 + 32));
    if ( factor_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)factor_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(double *)(v3 + 96) = *factor_ptr;
      v13 = *(_DWORD *)(v3 + 48);
      v14 = SAFE_MULTIPLY<unsigned int,double>(v13, 0.0001 * *(double *)(v3 + 96));
      *(SelectType_11 *)(v3 + 128) = SAFE_ADD<double,unsigned int>(v14, v13);
      __a = 0.0;
      v15 = (unsigned __int64)std::max<double>(&__a, (const double *)(v3 + 128));
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      *(_QWORD *)(v3 + 128) = *(_QWORD *)v15;
      *(_DWORD *)(v3 + 64) = -1;
      if ( (double)(int)std::numeric_limits<unsigned int>::max() > *(double *)(v3 + 128) )
        *(_DWORD *)(v3 + 64) = (int)*(double *)(v3 + 128);
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "getTowerCost",
        207);
      v16 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" total_factor: ");
      v18 = common::milog::MiLogStream::operator<<<double,(double *)0>(v17, (const double *)(v3 + 96));
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])", config_cost: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])", real_cost: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v22 = *(_DWORD *)(v3 + 64);
      if ( *(_BYTE *)((cost >> 3) + 0x7FFF8000) != 0 && (char)((cost & 7) + 3) >= *(_BYTE *)((cost >> 3) + 0x7FFF8000) )
        __asan_report_store4(cost);
      *(_DWORD *)cost = v22;
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "getTowerCost",
      189);
    v8 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" tower_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])" config not found.");
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
  }
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 215: range 00000000161ACC1E-00000000161AD200
__int64 __fastcall TowerDefensePlay::getTowerRefund(
        const TowerDefensePlay *const this,
        uint32_t tower_id,
        unsigned __int64 refund)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  uint32_t v11; // ecx
  unsigned int v12; // r14d
  double v13; // xmm0_8
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t v21; // ecx
  double __a; // [rsp+28h] [rbp-118h] BYREF
  const data::ActivityChessGearExcelConfig *tower_config_ptr; // [rsp+30h] [rbp-110h]
  const double *factor_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 13 gadget_id:223 48 4 17 config_refund:224 64 4 15 real_refund:233 80 4 12 tower_id:214 9"
                        "6 8 16 total_factor:230 128 8 17 result_refund:231";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::getTowerRefund;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 80) = tower_id;
  if ( *(_BYTE *)((refund >> 3) + 0x7FFF8000) != 0 && (char)((refund & 7) + 3) >= *(_BYTE *)((refund >> 3) + 0x7FFF8000) )
    __asan_report_store4(refund);
  *(_DWORD *)refund = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  tower_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_chess_config_mgr,
                       *(_DWORD *)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( tower_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tower_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tower_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_config_ptr->gadget_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = tower_config_ptr->gadget_id;
    if ( *(_BYTE *)(((unsigned __int64)&tower_config_ptr->demolition_refund >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tower_config_ptr->demolition_refund >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = tower_config_ptr->demolition_refund;
    v11 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)((refund >> 3) + 0x7FFF8000) != 0
      && (char)((refund & 7) + 3) >= *(_BYTE *)((refund >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(refund);
    }
    *(_DWORD *)refund = v11;
    factor_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,double> const>(
                   &this->gadget_refund_factor_map_,
                   (const std::map<unsigned int,double>::key_type *)(v3 + 32));
    if ( factor_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)factor_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(double *)(v3 + 96) = *factor_ptr;
      v12 = *(_DWORD *)(v3 + 48);
      v13 = SAFE_MULTIPLY<unsigned int,double>(v12, 0.0001 * *(double *)(v3 + 96));
      *(SelectType_11 *)(v3 + 128) = SAFE_ADD<double,unsigned int>(v13, v12);
      __a = 0.0;
      v14 = (unsigned __int64)std::max<double>(&__a, (const double *)(v3 + 128));
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8();
      *(_QWORD *)(v3 + 128) = *(_QWORD *)v14;
      *(_DWORD *)(v3 + 64) = -1;
      if ( (double)(int)std::numeric_limits<unsigned int>::max() > *(double *)(v3 + 128) )
        *(_DWORD *)(v3 + 64) = (int)*(double *)(v3 + 128);
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "getTowerRefund",
        238);
      v15 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v27, this);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" total factor: ");
      v17 = common::milog::MiLogStream::operator<<<double,(double *)0>(v16, (const double *)(v3 + 96));
      v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v17,
              (const char (*)[18])", config_refund: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])", real_refund: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v21 = *(_DWORD *)(v3 + 64);
      if ( *(_BYTE *)((refund >> 3) + 0x7FFF8000) != 0
        && (char)((refund & 7) + 3) >= *(_BYTE *)((refund >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(refund);
      }
      *(_DWORD *)refund = v21;
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "getTowerRefund",
      220);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v27, this);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" tower_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" config not found.");
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 247: range 00000000161AD202-00000000161AD3C5
__int64 __fastcall TowerDefensePlay::getBuildingPoints(const TowerDefensePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::tools::transcribe_cv_t_18 *player_info_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:246";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::getBuildingPoints;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  player_info_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,TowerDefensePlay::PlayerInfo> const>(
                      &this->player_info_map_,
                      (const std::map<unsigned int,TowerDefensePlay::PlayerInfo>::key_type *)(v2 + 32));
  if ( player_info_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)player_info_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    result = player_info_ptr->building_points;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "getBuildingPoints",
      254);
    v6 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v9, this);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v6,
           (const char (*)[29])" player not in battle. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
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

// Line 259: range 00000000161AD3C6-00000000161AD5A3
__int64 __fastcall TowerDefensePlay::checkSubBuildingPoints(
        const TowerDefensePlay *const this,
        uint32_t uid,
        uint32_t sub_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::tools::transcribe_cv_t_18 *player_info_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:258";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::checkSubBuildingPoints;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  player_info_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,TowerDefensePlay::PlayerInfo> const>(
                      &this->player_info_map_,
                      (const std::map<unsigned int,TowerDefensePlay::PlayerInfo>::key_type *)(v3 + 32));
  if ( player_info_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)player_info_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( sub_value <= player_info_ptr->building_points )
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
      "./src/play/tower_defense_play.cpp",
      "checkSubBuildingPoints",
      263);
    v6 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v11, this);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v6,
           (const char (*)[29])" player not in battle. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
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

// Line 275: range 00000000161AD5A4-00000000161ADAB0
__int64 __fastcall TowerDefensePlay::subBuildingPoints(TowerDefensePlay *const this, uint32_t uid, uint32_t sub_value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  SceneMultistagePlay *scene_multistage_play; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int v13; // r14d
  SelectType v14; // ecx
  std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  int ret; // [rsp+1Ch] [rbp-C4h]
  uint32_t scene; // [rsp+20h] [rbp-C0h]
  TowerDefensePlay::PlayerInfo *player_info; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:274 64 16 18 chess_play_ptr:293";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::subBuildingPoints;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = uid;
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
  Scene::findPlayer((const Scene *const)(v3 + 64), scene);
  v9 = std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "subBuildingPoints",
      279);
    v10 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v22, this);
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v12, (const char (*)[20])" not in this scene.");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v13 = 0;
  }
  else
  {
    ret = TowerDefensePlay::checkSubBuildingPoints(this, *(_DWORD *)(v3 + 48), sub_value);
    if ( ret )
    {
      v13 = ret;
    }
    else
    {
      player_info = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::operator[](
                      &this->player_info_map_,
                      (const std::map<unsigned int,TowerDefensePlay::PlayerInfo>::key_type *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      player_info->building_points -= sub_value;
      if ( *(_BYTE *)(((unsigned __int64)&player_info->cost_points >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->cost_points >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v14 = SAFE_ADD<unsigned int,unsigned int>(player_info->cost_points, sub_value);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->cost_points >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->cost_points >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_store4(&player_info->cost_points);
      }
      player_info->cost_points = v14;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toPtr<ChessMultistagePlay,SceneMultistagePlay>((SceneMultistagePlay *)(v3 + 64));
      if ( std::operator!=<ChessMultistagePlay>(0LL, (const std::shared_ptr<ChessMultistagePlay> *)(v3 + 64)) )
      {
        v15 = std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        ChessMultistagePlay::notifyPlayerInfo(v15, *(_DWORD *)(v3 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/play/tower_defense_play.cpp",
          "subBuildingPoints",
          300);
        v16 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v22, this);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v16, (const char (*)[20])" chess play nullptr");
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      if ( sub_value )
        TowerDefensePlay::onBuildingPointsChange(this, *(_DWORD *)(v3 + 48));
      v13 = 0;
      std::shared_ptr<ChessMultistagePlay>::~shared_ptr((std::shared_ptr<ChessMultistagePlay> *const)(v3 + 64));
    }
  }
  result = v13;
  if ( v23 == (char *)v3 )
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

// Line 311: range 00000000161ADAB2-00000000161ADFCC
__int64 __fastcall TowerDefensePlay::checkAddBuildingPoints(
        const TowerDefensePlay *const this,
        uint32_t uid,
        uint32_t add_value,
        bool is_ignore_mp,
        __m128i a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::tools::transcribe_cv_t_18 *player_info_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-A0h] BYREF
  char v29[128]; // [rsp+60h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 13 mp_factor:322 48 4 7 uid:310 64 4 13 add_value:310";
  *(_QWORD *)(v5 + 16) = TowerDefensePlay::checkAddBuildingPoints;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = uid;
  *(_DWORD *)(v5 + 64) = add_value;
  player_info_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,TowerDefensePlay::PlayerInfo> const>(
                      &this->player_info_map_,
                      (const std::map<unsigned int,TowerDefensePlay::PlayerInfo>::key_type *)(v5 + 48));
  if ( player_info_ptr )
  {
    if ( !is_ignore_mp && TowerDefensePlay::getActivePlayerNum(this) > 1 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
      *(float *)a5.m128i_i32 = ConstValueExcelConfigMgr::getChessMpBuildingPointFactor(&v12->design_config.txt_config_mgr.const_value_config_mgr);
      *(_DWORD *)(v5 + 32) = _mm_cvtsi128_si32(a5);
      std::shared_ptr<Config>::~shared_ptr(&v27);
      *(_DWORD *)(v5 + 64) = (int)(float)((float)*(int *)(v5 + 64) * *(float *)(v5 + 32));
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "checkAddBuildingPoints",
        324);
      v13 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])off_25B83480);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 64));
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" factor:");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v16, (const float *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    if ( *(_BYTE *)(((unsigned __int64)player_info_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( player_info_ptr->building_points
      && *(_DWORD *)(v5 + 64)
      && *(_DWORD *)(v5 + 64) + player_info_ptr->building_points < player_info_ptr->building_points )
    {
      goto LABEL_22;
    }
    if ( *(_BYTE *)(((unsigned __int64)player_info_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( player_info_ptr->building_points
      || *(_DWORD *)(v5 + 64)
      || *(_DWORD *)(v5 + 64) + player_info_ptr->building_points <= player_info_ptr->building_points )
    {
      result = 0LL;
    }
    else
    {
LABEL_22:
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/play/tower_defense_play.cpp",
        "checkAddBuildingPoints",
        329);
      v17 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
      v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v19,
              (const char (*)[18])" building points:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              &player_info_ptr->building_points);
      v22 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v21, (const char (*)[4])" + ");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 64));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" overflow");
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "checkAddBuildingPoints",
      315);
    v8 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v8,
           (const char (*)[29])" player not in battle. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
  }
  if ( v29 == (char *)v5 )
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
  return result;
};

// Line 336: range 00000000161ADFCE-00000000161AE691
__int64 __fastcall TowerDefensePlay::addBuildingPoints(
        TowerDefensePlay *const this,
        uint32_t uid,
        uint32_t add_value,
        bool is_ignore_mp,
        __m128i a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  SceneMultistagePlay *scene_multistage_play; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int v22; // edx
  SelectType v23; // edx
  unsigned int v24; // edx
  SelectType v25; // edx
  std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  __int64 result; // rax
  uint32_t scene; // [rsp+20h] [rbp-E0h]
  TowerDefensePlay::PlayerInfo *player_info; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 13 mp_factor:347 64 4 7 uid:335 80 4 13 add_value:335 96 16 18 chess_play_ptr:360";
  *(_QWORD *)(v5 + 16) = TowerDefensePlay::addBuildingPoints;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 64) = uid;
  *(_DWORD *)(v5 + 80) = add_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_multistage_play = this->scene_multistage_play_;
  p_vptr_DescribalBase = &scene_multistage_play->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene_multistage_play >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v10 = *p_vptr_DescribalBase + 24LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8();
  scene = (*(__int64 (__fastcall **)(SceneMultistagePlay *))v10)(scene_multistage_play);
  Scene::findPlayer((const Scene *const)(v5 + 96), scene);
  v11 = std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 96));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 96));
  if ( v11 )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "addBuildingPoints",
      340);
    v12 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v33, this);
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 64));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v14, (const char (*)[20])" not in this scene.");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v15 = 0;
  }
  else
  {
    if ( !is_ignore_mp && TowerDefensePlay::getActivePlayerNum(this) > 1 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v5 + 96));
      v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      *(float *)a5.m128i_i32 = ConstValueExcelConfigMgr::getChessMpBuildingPointFactor(&v17->design_config.txt_config_mgr.const_value_config_mgr);
      *(_DWORD *)(v5 + 48) = _mm_cvtsi128_si32(a5);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 96));
      *(float *)a5.m128i_i32 = (float)*(int *)(v5 + 80) * *(float *)(v5 + 48);
      *(_DWORD *)(v5 + 80) = (int)*(float *)a5.m128i_i32;
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "addBuildingPoints",
        349);
      v18 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v33, this);
      v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])off_25B83480);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 80));
      v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" factor:");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v21, (const float *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    if ( (unsigned int)TowerDefensePlay::checkAddBuildingPoints(this, *(_DWORD *)(v5 + 64), *(_DWORD *)(v5 + 80), 1, a5) )
    {
      v15 = -1;
    }
    else
    {
      player_info = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::operator[](
                      &this->player_info_map_,
                      (const std::map<unsigned int,TowerDefensePlay::PlayerInfo>::key_type *)(v5 + 64));
      v22 = *(_DWORD *)(v5 + 80);
      if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v23 = SAFE_ADD<unsigned int,unsigned int>(player_info->building_points, v22);
      if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(player_info);
      }
      player_info->building_points = v23;
      v24 = *(_DWORD *)(v5 + 80);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->total_obtained_points >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&player_info->total_obtained_points >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v25 = SAFE_ADD<unsigned int,unsigned int>(player_info->total_obtained_points, v24);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->total_obtained_points >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&player_info->total_obtained_points >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&player_info->total_obtained_points);
      }
      player_info->total_obtained_points = v25;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toPtr<ChessMultistagePlay,SceneMultistagePlay>((SceneMultistagePlay *)(v5 + 96));
      if ( std::operator!=<ChessMultistagePlay>(0LL, (const std::shared_ptr<ChessMultistagePlay> *)(v5 + 96)) )
      {
        v26 = std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        ChessMultistagePlay::notifyPlayerInfo(v26, *(_DWORD *)(v5 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/play/tower_defense_play.cpp",
          "addBuildingPoints",
          367);
        v27 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v33, this);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v27, (const char (*)[20])" chess play nullptr");
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      if ( *(_DWORD *)(v5 + 80) )
        TowerDefensePlay::onBuildingPointsChange(this, *(_DWORD *)(v5 + 64));
      v15 = 0;
      std::shared_ptr<ChessMultistagePlay>::~shared_ptr((std::shared_ptr<ChessMultistagePlay> *const)(v5 + 96));
    }
  }
  result = v15;
  if ( v34 == (char *)v5 )
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
  return result;
};

// Line 377: range 00000000161AE692-00000000161AE8F4
void __cdecl TowerDefensePlay::foreachActiveCard(
        const TowerDefensePlay *const this,
        std::function<ForeachPolicy(CardInfo&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::shared_ptr<CardInfo> *v5; // rax
  int v6; // r14d
  CardInfo *v7; // rdx
  std::vector<std::shared_ptr<CardInfo>>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<std::shared_ptr<CardInfo>>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<std::shared_ptr<CardInfo>> *__for_range; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 card_ptr:379 64 24 16 card_ptr_vec:378";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::foreachActiveCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapValues<std::map<unsigned int,std::shared_ptr<CardInfo>>>(
    (std::vector<std::shared_ptr<CardInfo>> *)(v2 + 64),
    &this->card_info_map_);
  __for_range = (std::vector<std::shared_ptr<CardInfo>> *)(v2 + 64);
  __for_begin._M_current = std::vector<std::shared_ptr<CardInfo>>::begin((std::vector<std::shared_ptr<CardInfo>> *const)(v2 + 64))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<CardInfo>>::end((std::vector<std::shared_ptr<CardInfo>> *const)(v2 + 64))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<CardInfo> *,std::vector<std::shared_ptr<CardInfo>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<CardInfo> *,std::vector<std::shared_ptr<CardInfo>>>::operator*(&__for_begin);
    std::shared_ptr<CardInfo>::shared_ptr((std::shared_ptr<CardInfo> *const)(v2 + 32), v5);
    if ( std::operator==<CardInfo>((const std::shared_ptr<CardInfo> *)(v2 + 32), 0LL) )
    {
      v6 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v6 = std::function<ForeachPolicy ()(CardInfo &)>::operator()(p_func, v7) ? 1 : 2;
    }
    std::shared_ptr<CardInfo>::~shared_ptr((std::shared_ptr<CardInfo> *const)(v2 + 32));
    if ( v6 )
    {
      if ( v6 != 2 )
        break;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<CardInfo> *,std::vector<std::shared_ptr<CardInfo>>>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<CardInfo>>::~vector((std::vector<std::shared_ptr<CardInfo>> *const)(v2 + 64));
  if ( v11 == (char *)v2 )
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

// Line 393: range 00000000161AE8F6-00000000161AF042
void __fastcall TowerDefensePlay::takeCardEffect(
        TowerDefensePlay *const this,
        Player *player,
        uint32_t card_id,
        uint32_t pick_index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  uint32_t v14; // ecx
  uint32_t card_quality_type; // ecx
  uint32_t card_type; // ecx
  uint32_t current_round; // ecx
  uint32_t Uid; // edx
  bool is_show_on_pick; // cl
  uint32_t CurrentRound; // edx
  std::shared_ptr<CardInfo> *v21; // rax
  uint32_t v22; // ecx
  uint32_t v23; // edx
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+20h] [rbp-C0h]
  CardInfo *info; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 11 card_id:392 48 4 14 pick_index:392 64 16 12 info_ptr:400";
  *(_QWORD *)(v4 + 16) = TowerDefensePlay::takeCardEffect;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = card_id;
  *(_DWORD *)(v4 + 48) = pick_index;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                      &v7->design_config.txt_config_mgr.activity_chess_config_mgr,
                      *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( card_config_ptr )
  {
    common::tools::perf::make_shared<CardInfo,TowerDefensePlay &>((TowerDefensePlay *)(v4 + 64), this);
    if ( std::operator==<CardInfo>(0LL, (const std::shared_ptr<CardInfo> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/play/tower_defense_play.cpp",
        "takeCardEffect",
        403);
      v12 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" oom! ");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      info = std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v13 = *(_DWORD *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&info->card_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&info->card_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&info->card_id);
      }
      info->card_id = v13;
      v14 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&info->pick_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)info + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->pick_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&info->pick_index);
      }
      info->pick_index = v14;
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      card_quality_type = card_config_ptr->card_quality_type;
      if ( *(_BYTE *)(((unsigned __int64)&info->quality >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&info->quality >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&info->quality);
      }
      info->quality = card_quality_type;
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      card_type = card_config_ptr->card_type;
      if ( *(_BYTE *)(((unsigned __int64)&info->card_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)info + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->card_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&info->card_type);
      }
      info->card_type = card_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      current_round = this->current_round_;
      if ( *(_BYTE *)(((unsigned __int64)&info->round >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->round >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&info->round);
      }
      info->round = current_round;
      Uid = Player::getUid(player);
      if ( *(_BYTE *)(((unsigned __int64)&info->uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&info->uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&info->uid);
      }
      info->uid = Uid;
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->is_show_on_pick >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)card_config_ptr - 98) & 7) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->is_show_on_pick >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load1(&card_config_ptr->is_show_on_pick);
      }
      is_show_on_pick = card_config_ptr->is_show_on_pick;
      if ( *(_BYTE *)(((unsigned __int64)&info->is_show_on_pick >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)info + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_show_on_pick >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&info->is_show_on_pick);
      }
      info->is_show_on_pick = is_show_on_pick;
      CurrentRound = TowerDefensePlay::getCurrentRound(this);
      if ( *(_BYTE *)(((unsigned __int64)&info->pick_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&info->pick_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&info->pick_round);
      }
      info->pick_round = CurrentRound;
      CardInfo::initEffects(info, player);
      v21 = std::map<unsigned int,std::shared_ptr<CardInfo>>::operator[](
              &this->card_info_map_,
              (const std::map<unsigned int,std::shared_ptr<CardInfo>>::key_type *)(v4 + 48));
      std::shared_ptr<CardInfo>::operator=(v21, (const std::shared_ptr<CardInfo> *)(v4 + 64));
      v22 = *(_DWORD *)(v4 + 32);
      v23 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&info->uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&info->uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      TowerDefensePlay::notifyLuaCardEvent(this, info->uid, v23, v22);
    }
    std::shared_ptr<CardInfo>::~shared_ptr((std::shared_ptr<CardInfo> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "takeCardEffect",
      397);
    v8 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
    v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           v8,
           (const char (*)[31])" card config not found for id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    operator<<(v11, player);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
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

// Line 421: range 00000000161AF1F4-00000000161AF5EC
void __cdecl TowerDefensePlay::onNewRound(TowerDefensePlay *const this)
{
  __m128i v1; // xmm0
  uint32_t v2; // edi
  const std::pair<unsigned int const,std::shared_ptr<CardInfo> > *v3; // rax
  uint32_t current_round; // ebx
  std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  uint32_t *p_round; // rax
  CardInfo *v7; // rax
  CardInfo *v8; // rax
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,TowerDefensePlay::PlayerInfo> *__for_range; // [rsp+28h] [rbp-88h]
  const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> *v13; // [rsp+30h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *uid; // [rsp+38h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *_; // [rsp+40h] [rbp-70h]
  std::map<unsigned int,std::shared_ptr<CardInfo>> *__for_range_0; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CardInfo> > >::type *index; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CardInfo> > >::type *info_ptr; // [rsp+58h] [rbp-58h]
  std::pair<unsigned int const,std::shared_ptr<CardInfo> > __in; // [rsp+60h] [rbp-50h] BYREF
  std::function<ForeachPolicy(EffectPickCardLTEServerGlobalValue&)> p_func; // [rsp+80h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->round_end_points_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->round_end_points_ > 0.0 )
  {
    __for_range = &this->player_info_map_;
    __for_begin._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::begin(&this->player_info_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::end(&this->player_info_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v13);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->round_end_points_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v1 = (__m128i)*(unsigned __int64 *)&this->round_end_points_;
      v2 = (int)*(double *)v1.m128i_i64;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        v2 = (unsigned int)uid;
        *(double *)v1.m128i_i64 = __asan_report_load4();
      }
      TowerDefensePlay::addBuildingPoints(this, *uid, v2, 0, v1);
      std::_Rb_tree_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator++(&__for_begin);
    }
  }
  __for_range_0 = &this->card_info_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CardInfo>>::begin(&this->card_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CardInfo>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo> > >::_Self *)&__for_end) )
  {
    v3 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo> > > *const)&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<CardInfo>>::pair(&__in, v3);
    index = std::get<0ul,unsigned int const,std::shared_ptr<CardInfo>>(&__in);
    info_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CardInfo>>(&__in);
    if ( !std::operator==<CardInfo>(0LL, info_ptr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      current_round = this->current_round_;
      v5 = std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)info_ptr);
      p_round = &v5->round;
      if ( *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_round);
      }
      v5->round = current_round;
      v7 = std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)info_ptr);
      CardInfo::tryExpireEffects(v7);
      v8 = std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)info_ptr);
      CardInfo::tryEnableEffects(v8);
    }
    std::pair<unsigned int const,std::shared_ptr<CardInfo>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo> > > *const)&__for_begin);
  }
  std::function<ForeachPolicy ()(EffectPickCardLTEServerGlobalValue &)>::function<TowerDefensePlay::onNewRound(void)::{lambda(EffectPickCardLTEServerGlobalValue &)#1},void,void>(
    &p_func,
    (TowerDefensePlay::onNewRound::<lambda(EffectPickCardLTEServerGlobalValue&)>)this);
  TowerDefensePlay::foreachEffect<EffectPickCardLTEServerGlobalValue>(this, &p_func);
  std::function<ForeachPolicy ()(EffectPickCardLTEServerGlobalValue &)>::~function(&p_func);
  std::function<ForeachPolicy ()(EffectCardsCountStackServerGlobalValue &)>::function<TowerDefensePlay::onNewRound(void)::{lambda(EffectCardsCountStackServerGlobalValue &)#2},void,void>(
    (std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *const)&p_func,
    (TowerDefensePlay::onNewRound::<lambda(EffectCardsCountStackServerGlobalValue&)>)this);
  TowerDefensePlay::foreachEffect<EffectCardsCountStackServerGlobalValue>(
    this,
    (std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *)&p_func);
  std::function<ForeachPolicy ()(EffectCardsCountStackServerGlobalValue &)>::~function((std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *const)&p_func);
};

// Line 440: range 00000000161AF044-00000000161AF11A
ForeachPolicy __cdecl TowerDefensePlay::onNewRound(void)::{lambda(EffectPickCardLTEServerGlobalValue &)#1}::operator()(
        const TowerDefensePlay::onNewRound::<lambda(EffectPickCardLTEServerGlobalValue&)> *const __closure,
        EffectPickCardLTEServerGlobalValue *effect)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  EffectPickCardLTEServerGlobalValue::refreshStack(effect);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    443);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v5, __closure->__this);
  v3 = common::milog::MiLogStream::operator<<<EffectPickCardLTEServerGlobalValue,(EffectPickCardLTEServerGlobalValue*)0>(
         v2,
         effect);
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" refreshed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 448: range 00000000161AF11C-00000000161AF1F2
ForeachPolicy __cdecl TowerDefensePlay::onNewRound(void)::{lambda(EffectCardsCountStackServerGlobalValue &)#2}::operator()(
        const TowerDefensePlay::onNewRound::<lambda(EffectCardsCountStackServerGlobalValue&)> *const __closure,
        EffectCardsCountStackServerGlobalValue *effect)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  EffectCardsCountStackServerGlobalValue::refreshStack(effect);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    451);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v5, __closure->__this);
  v3 = common::milog::MiLogStream::operator<<<EffectCardsCountStackServerGlobalValue,(EffectCardsCountStackServerGlobalValue*)0>(
         v2,
         effect);
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" refreshed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 457: range 00000000161AF5EE-00000000161AF940
void __fastcall TowerDefensePlay::setCurrentRound(TowerDefensePlay *const this, uint32_t round)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 old_round:463 64 4 9 round:456";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::setCurrentRound;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = round;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->current_round_ < *(_DWORD *)(v2 + 64) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = this->current_round_;
    this->current_round_ = *(_DWORD *)(v2 + 64);
    TowerDefensePlay::onNewRound(this);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "setCurrentRound",
      466);
    v10 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v14, this);
    v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v10,
            (const char (*)[29])" change current_round_ from ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v12, (const char (*)[5])off_25B838E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->current_round_);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "setCurrentRound",
      460);
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v14, this);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v5,
           (const char (*)[28])"change current_round_ from ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->current_round_);
    v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v7, (const char (*)[5])off_25B838E0);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v14);
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
};

// Line 470: range 00000000161AF942-00000000161AFA1D
int32_t __cdecl TowerDefensePlay::init(TowerDefensePlay *const this)
{
  unsigned __int64 v1; // rax
  void (__fastcall *v2)(TowerDefensePlay *const, const std::set<unsigned int> *); // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  const std::set<unsigned int> *TowerGadgetSet; // rax
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 23);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  v2 = *(void (__fastcall **)(TowerDefensePlay *const, const std::set<unsigned int> *))v1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  TowerGadgetSet = ActivityChessExcelConfigMgr::getTowerGadgetSet(&v3->design_config.txt_config_mgr.activity_chess_config_mgr);
  v2(this, TowerGadgetSet);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return 0;
};

// Line 476: range 00000000161AFA1E-00000000161AFE69
void __cdecl TowerDefensePlay::modifyKillPointsByCards(TowerDefensePlay *const this, uint32_t *kill_points)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  double v6; // xmm0_8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // ecx
  uint32_t v10; // edi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  double __a; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 19 modified_points:478 64 8 17 result_points:480";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::modifyKillPointsByCards;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)kill_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v5 = *kill_points;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_points_factor_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = SAFE_MULTIPLY<unsigned int,double>(*kill_points, 0.0001 * this->kill_points_factor_);
  *(SelectType_11 *)(v2 + 32) = SAFE_ADD<double,unsigned int>(v6, v5);
  __a = 0.0;
  v7 = (unsigned __int64)std::max<double>(&__a, (const double *)(v2 + 32));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  *(_QWORD *)(v2 + 32) = *(_QWORD *)v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_points_delta_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(SelectType_9 *)(v2 + 64) = SAFE_ADD<double,double>(*(double *)(v2 + 32), this->kill_points_delta_);
  __a = 0.0;
  v8 = (unsigned __int64)std::max<double>(&__a, (const double *)(v2 + 64));
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  *(_QWORD *)(v2 + 64) = *(_QWORD *)v8;
  v9 = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)kill_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(kill_points);
  }
  *kill_points = v9;
  if ( (double)(int)std::numeric_limits<unsigned int>::max() > *(double *)(v2 + 64) )
  {
    v10 = (int)*(double *)(v2 + 64);
    if ( *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)kill_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)kill_points >> 3) + 0x7FFF8000) )
    {
      v10 = (unsigned int)kill_points;
      __asan_report_store4(kill_points);
    }
    *kill_points = v10;
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "modifyKillPointsByCards",
    488);
  v11 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v19, this);
  v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" factor:");
  v13 = common::milog::MiLogStream::operator<<<double,(double *)0>(v12, &this->kill_points_factor_);
  v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])"; delta:");
  v15 = common::milog::MiLogStream::operator<<<double,(double *)0>(v14, &this->kill_points_delta_);
  v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v15, (const char (*)[21])" final kill_points: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, kill_points);
  common::milog::MiLogStream::~MiLogStream(&v19);
  if ( v20 == (char *)v2 )
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

// Line 492: range 00000000161AFE6A-00000000161AFF52
_BOOL8 __fastcall TowerDefensePlay::getEffectStack(const TowerDefensePlay *const this, uint32_t pick_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 pick_index:491";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::getEffectStack;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = pick_index;
  result = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::shared_ptr<CardInfo>> const>(
             &this->card_info_map_,
             (const std::map<unsigned int,std::shared_ptr<CardInfo>>::key_type *)(v2 + 32)) != 0LL;
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

// Line 502: range 00000000161B0104-00000000161B049A
void __fastcall TowerDefensePlay::removeCard(TowerDefensePlay *const this, Player *player, uint32_t pick_index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo> > >::pointer v6; // rax
  CardInfo *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo> > >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 pick_index:501 64 8 8 iter:503 96 16 17 card_info_ptr:508";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::removeCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = pick_index;
  *(std::map<unsigned int,std::shared_ptr<CardInfo>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<CardInfo>>::find(
                                                                               &this->card_info_map_,
                                                                               (const std::map<unsigned int,std::shared_ptr<CardInfo>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<CardInfo>>::end(&this->card_info_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo> > >::_Self *)(v3 + 64),
          &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CardInfo> > > *const)(v3 + 64));
    std::shared_ptr<CardInfo>::shared_ptr((std::shared_ptr<CardInfo> *const)(v3 + 96), &v6->second);
    if ( !std::operator==<CardInfo>(0LL, (const std::shared_ptr<CardInfo> *)(v3 + 96)) )
    {
      v7 = std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      CardInfo::disableEffects(v7, player);
      std::map<unsigned int,std::shared_ptr<CardInfo>>::erase[abi:cxx11](
        &this->card_info_map_,
        *(std::map<unsigned int,std::shared_ptr<CardInfo>>::iterator *)(v3 + 64));
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "removeCard",
        515);
      v8 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v16, this);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" remove ");
      v10 = std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CardInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v11 = common::milog::MiLogStream::operator<<<CardInfo,(CardInfo*)0>(v9, v10);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      std::function<ForeachPolicy ()(EffectPickCardLTEServerGlobalValue &)>::function<TowerDefensePlay::removeCard(Player &,unsigned int)::{lambda(EffectPickCardLTEServerGlobalValue &)#1},void,void>(
        (std::function<ForeachPolicy(EffectPickCardLTEServerGlobalValue&)> *const)&v16,
        (TowerDefensePlay::removeCard::<lambda(EffectPickCardLTEServerGlobalValue&)>)this);
      TowerDefensePlay::foreachEffect<EffectPickCardLTEServerGlobalValue>(
        this,
        (std::function<ForeachPolicy(EffectPickCardLTEServerGlobalValue&)> *)&v16);
      std::function<ForeachPolicy ()(EffectPickCardLTEServerGlobalValue &)>::~function((std::function<ForeachPolicy(EffectPickCardLTEServerGlobalValue&)> *const)&v16);
      std::function<ForeachPolicy ()(EffectCardsCountStackServerGlobalValue &)>::function<TowerDefensePlay::removeCard(Player &,unsigned int)::{lambda(EffectCardsCountStackServerGlobalValue &)#2},void,void>(
        (std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *const)&v16,
        (TowerDefensePlay::removeCard::<lambda(EffectCardsCountStackServerGlobalValue&)>)this);
      TowerDefensePlay::foreachEffect<EffectCardsCountStackServerGlobalValue>(
        this,
        (std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *)&v16);
      std::function<ForeachPolicy ()(EffectCardsCountStackServerGlobalValue &)>::~function((std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *const)&v16);
    }
    std::shared_ptr<CardInfo>::~shared_ptr((std::shared_ptr<CardInfo> *const)(v3 + 96));
  }
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
};

// Line 517: range 00000000161AFF54-00000000161B002A
ForeachPolicy __cdecl TowerDefensePlay::removeCard(Player &,unsigned int)::{lambda(EffectPickCardLTEServerGlobalValue &)#1}::operator()(
        const TowerDefensePlay::removeCard::<lambda(EffectPickCardLTEServerGlobalValue&)> *const __closure,
        EffectPickCardLTEServerGlobalValue *effect)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  EffectPickCardLTEServerGlobalValue::refreshStack(effect);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    520);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v5, __closure->__this);
  v3 = common::milog::MiLogStream::operator<<<EffectPickCardLTEServerGlobalValue,(EffectPickCardLTEServerGlobalValue*)0>(
         v2,
         effect);
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" refreshed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 525: range 00000000161B002C-00000000161B0102
ForeachPolicy __cdecl TowerDefensePlay::removeCard(Player &,unsigned int)::{lambda(EffectCardsCountStackServerGlobalValue &)#2}::operator()(
        const TowerDefensePlay::removeCard::<lambda(EffectCardsCountStackServerGlobalValue&)> *const __closure,
        EffectCardsCountStackServerGlobalValue *effect)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  EffectCardsCountStackServerGlobalValue::refreshStack(effect);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    528);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v5, __closure->__this);
  v3 = common::milog::MiLogStream::operator<<<EffectCardsCountStackServerGlobalValue,(EffectCardsCountStackServerGlobalValue*)0>(
         v2,
         effect);
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" refreshed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 534: range 00000000161B049C-00000000161B0716
void __cdecl TowerDefensePlay::modifyGadgetBuildCost(
        TowerDefensePlay *const this,
        const std::set<unsigned int> *gadget_set,
        double factor,
        CardEffectBase *effect)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::set<unsigned int> *TowerGadgetSet; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  unsigned __int64 v11; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const std::set<unsigned int> *real_gadgets; // [rsp+30h] [rbp-90h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-80h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 gadget_id:536";
  *(_QWORD *)(v4 + 16) = TowerDefensePlay::modifyGadgetBuildCost;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  v7 = 0;
  if ( std::set<unsigned int>::empty(gadget_set) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v7 = 1;
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    TowerGadgetSet = ActivityChessExcelConfigMgr::getTowerGadgetSet(&v8->design_config.txt_config_mgr.activity_chess_config_mgr);
  }
  else
  {
    TowerGadgetSet = gadget_set;
  }
  real_gadgets = TowerGadgetSet;
  if ( v7 )
    std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_range = real_gadgets;
  __for_begin._M_node = std::set<unsigned int>::begin(real_gadgets)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(real_gadgets)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = *v10;
    v11 = (unsigned __int64)std::map<unsigned int,double>::operator[](
                              &this->gadget_build_cost_factor_map_,
                              (const std::map<unsigned int,double>::key_type *)(v4 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    *(double *)v11 = *(double *)v11 + factor;
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 543: range 00000000161B0718-00000000161B0992
void __cdecl TowerDefensePlay::modifyGadgetRefund(
        TowerDefensePlay *const this,
        const std::set<unsigned int> *gadget_set,
        double factor,
        CardEffectBase *effect)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::set<unsigned int> *TowerGadgetSet; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  unsigned __int64 v11; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const std::set<unsigned int> *real_gadgets; // [rsp+30h] [rbp-90h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-80h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 gadget_id:545";
  *(_QWORD *)(v4 + 16) = TowerDefensePlay::modifyGadgetRefund;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  v7 = 0;
  if ( std::set<unsigned int>::empty(gadget_set) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v7 = 1;
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    TowerGadgetSet = ActivityChessExcelConfigMgr::getTowerGadgetSet(&v8->design_config.txt_config_mgr.activity_chess_config_mgr);
  }
  else
  {
    TowerGadgetSet = gadget_set;
  }
  real_gadgets = TowerGadgetSet;
  if ( v7 )
    std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_range = real_gadgets;
  __for_begin._M_node = std::set<unsigned int>::begin(real_gadgets)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(real_gadgets)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = *v10;
    v11 = (unsigned __int64)std::map<unsigned int,double>::operator[](
                              &this->gadget_refund_factor_map_,
                              (const std::map<unsigned int,double>::key_type *)(v4 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    *(double *)v11 = *(double *)v11 + factor;
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 552: range 00000000161B0994-00000000161B0B15
void __cdecl TowerDefensePlay::modifyKillPoints(
        TowerDefensePlay *const this,
        double delta,
        double factor,
        CardEffectBase *effect)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->kill_points_delta_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->kill_points_delta_ = this->kill_points_delta_ + delta;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_points_factor_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->kill_points_factor_ = this->kill_points_factor_ + factor;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "modifyKillPoints",
    555);
  v4 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v10, this);
  v5 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v4, (const char (*)[7])" take ");
  v6 = common::milog::MiLogStream::operator<<<CardEffectBase,(CardEffectBase*)0>(v5, effect);
  v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v6, (const char (*)[20])" kill_points_delta_");
  v8 = common::milog::MiLogStream::operator<<<double,(double *)0>(v7, &this->kill_points_delta_);
  v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])". kill_points_factor_");
  common::milog::MiLogStream::operator<<<double,(double *)0>(v9, &this->kill_points_factor_);
  common::milog::MiLogStream::~MiLogStream(&v10);
};

// Line 559: range 00000000161B0B16-00000000161B0B71
void __cdecl TowerDefensePlay::modifyGearNum(TowerDefensePlay *const this, double delta, CardEffectBase *effect)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_num_delta_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->gear_num_delta_ = this->gear_num_delta_ + delta;
};

// Line 564: range 00000000161B0B72-00000000161B0FDA
void __cdecl TowerDefensePlay::randomKillGears(TowerDefensePlay *const this, uint32_t kill_num)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *v5; // rax
  bool v6; // r14
  const std::shared_ptr<FoundationComp> *v7; // rax
  std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::iterator __for_end; // [rsp+18h] [rbp-138h] BYREF
  std::map<unsigned int,std::weak_ptr<FoundationComp>> *__for_range; // [rsp+20h] [rbp-130h]
  std::vector<std::shared_ptr<FoundationComp>> *__for_range_0; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::type *_; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::type *foundation_wtr; // [rsp+38h] [rbp-118h]
  char v15[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 18 foundation_ptr:568 64 16 23 foundation_comp_ptr:581 96 24 27 foundation_comp_ptr_vec:"
                        "565 160 24 25 random_foundation_vec:579";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::randomKillGears;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::vector<std::shared_ptr<FoundationComp>>::vector((std::vector<std::shared_ptr<FoundationComp>> *const)(v2 + 96));
  __for_range = &this->foundation_wtr_map_;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<FoundationComp>>::begin(&this->foundation_wtr_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<FoundationComp>>::end(&this->foundation_wtr_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::weak_ptr<FoundationComp>>::pair(
      (std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *const)(v2 + 160),
      v5);
    _ = std::get<0ul,unsigned int const,std::weak_ptr<FoundationComp>>((std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *)(v2 + 160));
    foundation_wtr = std::get<1ul,unsigned int const,std::weak_ptr<FoundationComp>>((std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *)(v2 + 160));
    std::weak_ptr<FoundationComp>::lock((const std::weak_ptr<FoundationComp> *const)(v2 + 32));
    if ( !std::operator==<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v2 + 32)) )
    {
      std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      FoundationComp::getGearGadgetPtr((FoundationComp *const)(v2 + 64));
      v6 = std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64));
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
      if ( v6 )
        std::vector<std::shared_ptr<FoundationComp>>::push_back(
          (std::vector<std::shared_ptr<FoundationComp>> *const)(v2 + 96),
          (const std::vector<std::shared_ptr<FoundationComp>>::value_type *)(v2 + 32));
    }
    std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v2 + 32));
    std::pair<unsigned int const,std::weak_ptr<FoundationComp>>::~pair((std::pair<unsigned int const,std::weak_ptr<FoundationComp> > *const)(v2 + 160));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp>>>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<FoundationComp>>::vector((std::vector<std::shared_ptr<FoundationComp>> *const)(v2 + 160));
  common::tools::RandomUtils::randomSelect<std::shared_ptr<FoundationComp>>(
    (const std::vector<std::shared_ptr<FoundationComp>> *)(v2 + 96),
    (std::vector<std::shared_ptr<FoundationComp>> *)(v2 + 160),
    kill_num);
  __for_range_0 = (std::vector<std::shared_ptr<FoundationComp>> *)(v2 + 160);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::_Base_ptr)std::vector<std::shared_ptr<FoundationComp>>::begin((std::vector<std::shared_ptr<FoundationComp>> *const)(v2 + 160))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<FoundationComp> > >::_Base_ptr)std::vector<std::shared_ptr<FoundationComp>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<FoundationComp> *,std::vector<std::shared_ptr<FoundationComp>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp>*,std::vector<std::shared_ptr<FoundationComp>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp>*,std::vector<std::shared_ptr<FoundationComp>> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp> *,std::vector<std::shared_ptr<FoundationComp>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp>*,std::vector<std::shared_ptr<FoundationComp>> > *const)&__for_begin);
    std::shared_ptr<FoundationComp>::shared_ptr((std::shared_ptr<FoundationComp> *const)(v2 + 64), v7);
    if ( std::operator!=<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v2 + 64)) )
    {
      v8 = std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FoundationComp::killGear(v8);
    }
    std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v2 + 64));
    __gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp> *,std::vector<std::shared_ptr<FoundationComp>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<FoundationComp>*,std::vector<std::shared_ptr<FoundationComp>> > *const)&__for_begin);
  }
  std::vector<std::shared_ptr<FoundationComp>>::~vector((std::vector<std::shared_ptr<FoundationComp>> *const)(v2 + 160));
  std::vector<std::shared_ptr<FoundationComp>>::~vector((std::vector<std::shared_ptr<FoundationComp>> *const)(v2 + 96));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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
};

// Line 591: range 00000000161B0FDC-00000000161B10CC
void __cdecl TowerDefensePlay::modifyPointsOnRoundEnd(
        TowerDefensePlay *const this,
        double points,
        CardEffectBase *effect)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->round_end_points_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->round_end_points_ = this->round_end_points_ + points;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "modifyPointsOnRoundEnd",
    593);
  v3 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v5, this);
  v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" points:");
  common::milog::MiLogStream::operator<<<double,(double *)0>(v4, &this->round_end_points_);
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 597: range 00000000161B16EA-00000000161B1DF5
void __fastcall TowerDefensePlay::onSelectCard(TowerDefensePlay *const this, Player *player, uint32_t card_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::map<unsigned int,unsigned int> *p_card_type_count_map; // rcx
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-E8h]
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::key_type key; // [rsp+34h] [rbp-BCh] BYREF
  TowerDefensePlay::PlayerInfo *player_info_ptr; // [rsp+38h] [rbp-B8h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+40h] [rbp-B0h]
  const data::ActivityChessCardExcelConfig *card_config; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 card_id:596";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::onSelectCard;
  v15 = v3 >> 3;
  *(_DWORD *)(v15 + 2147450880) = -235802127;
  *(_DWORD *)(v15 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = card_id;
  key = Player::getUid(player);
  player_info_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,TowerDefensePlay::PlayerInfo>>(
                      &this->player_info_map_,
                      &key);
  if ( player_info_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                        &v7->design_config.txt_config_mgr.activity_chess_config_mgr,
                        *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( card_config_ptr )
    {
      card_config = card_config_ptr;
      p_card_type_count_map = &this->card_type_count_map_;
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      key = card_config->card_type;
      v11 = std::map<unsigned int,unsigned int>::operator[](p_card_type_count_map, &key);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v11;
      if ( *(_BYTE *)(((unsigned __int64)&player_info_ptr->pick_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&player_info_ptr->pick_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++player_info_ptr->pick_count;
      std::set<unsigned int>::insert(
        &player_info_ptr->pick_card_set,
        (const std::set<unsigned int>::value_type *)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->pick_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->pick_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++this->pick_count_;
      std::set<unsigned int>::insert(&this->pick_card_set_, (const std::set<unsigned int>::value_type *)(v3 + 32));
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "onSelectCard",
        616);
      v12 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v22, this);
      v13 = operator<<(v12, player);
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" picked: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
      std::function<ForeachPolicy ()(EffectPickCardLTEServerGlobalValue &)>::function<TowerDefensePlay::onSelectCard(Player &,unsigned int)::{lambda(EffectPickCardLTEServerGlobalValue &)#1},void,void>(
        (std::function<ForeachPolicy(EffectPickCardLTEServerGlobalValue&)> *const)&v22,
        (TowerDefensePlay::onSelectCard::<lambda(EffectPickCardLTEServerGlobalValue&)>)this);
      TowerDefensePlay::foreachEffect<EffectPickCardLTEServerGlobalValue>(
        this,
        (std::function<ForeachPolicy(EffectPickCardLTEServerGlobalValue&)> *)&v22);
      std::function<ForeachPolicy ()(EffectPickCardLTEServerGlobalValue &)>::~function((std::function<ForeachPolicy(EffectPickCardLTEServerGlobalValue&)> *const)&v22);
      std::function<ForeachPolicy ()(EffectCardsCountStackServerGlobalValue &)>::function<TowerDefensePlay::onSelectCard(Player &,unsigned int)::{lambda(EffectCardsCountStackServerGlobalValue &)#2},void,void>(
        (std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *const)&v22,
        (TowerDefensePlay::onSelectCard::<lambda(EffectCardsCountStackServerGlobalValue&)>)this);
      TowerDefensePlay::foreachEffect<EffectCardsCountStackServerGlobalValue>(
        this,
        (std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *)&v22);
      std::function<ForeachPolicy ()(EffectCardsCountStackServerGlobalValue &)>::~function((std::function<ForeachPolicy(EffectCardsCountStackServerGlobalValue&)> *const)&v22);
      std::function<ForeachPolicy ()(EffectCardTypeCountNoCost &)>::function<TowerDefensePlay::onSelectCard(Player &,unsigned int)::{lambda(EffectCardTypeCountNoCost &)#3},void,void>(
        (std::function<ForeachPolicy(EffectCardTypeCountNoCost&)> *const)&v22,
        (TowerDefensePlay::onSelectCard::<lambda(EffectCardTypeCountNoCost&)>)__PAIR128__(
                                                                                (unsigned __int64)this,
                                                                                (unsigned __int64)card_config));
      TowerDefensePlay::foreachEffect<EffectCardTypeCountNoCost>(
        this,
        (std::function<ForeachPolicy(EffectCardTypeCountNoCost&)> *)&v22);
      std::function<ForeachPolicy ()(EffectCardTypeCountNoCost &)>::~function((std::function<ForeachPolicy(EffectCardTypeCountNoCost&)> *const)&v22);
      std::function<ForeachPolicy ()(EffectCardTypeStackServerGlobalValue &)>::function<TowerDefensePlay::onSelectCard(Player &,unsigned int)::{lambda(EffectCardTypeStackServerGlobalValue &)#4},void,void>(
        (std::function<ForeachPolicy(EffectCardTypeStackServerGlobalValue&)> *const)&v22,
        (TowerDefensePlay::onSelectCard::<lambda(EffectCardTypeStackServerGlobalValue&)>)__PAIR128__(
                                                                                           (unsigned __int64)card_config,
                                                                                           (unsigned __int64)this));
      TowerDefensePlay::foreachEffect<EffectCardTypeStackServerGlobalValue>(
        this,
        (std::function<ForeachPolicy(EffectCardTypeStackServerGlobalValue&)> *)&v22);
      std::function<ForeachPolicy ()(EffectCardTypeStackServerGlobalValue &)>::~function((std::function<ForeachPolicy(EffectCardTypeStackServerGlobalValue&)> *const)&v22);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/tower_defense_play.cpp",
        "onSelectCard",
        607);
      v8 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v22, this);
      v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             v8,
             (const char (*)[52])" findActivityChessCardExcelConfig failed, card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "onSelectCard",
      601);
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v22, this);
    v6 = operator<<(v5, player);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" not in battle.");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 618: range 00000000161B10CE-00000000161B11A4
ForeachPolicy __cdecl TowerDefensePlay::onSelectCard(Player &,unsigned int)::{lambda(EffectPickCardLTEServerGlobalValue &)#1}::operator()(
        const TowerDefensePlay::onSelectCard::<lambda(EffectPickCardLTEServerGlobalValue&)> *const __closure,
        EffectPickCardLTEServerGlobalValue *effect)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  EffectPickCardLTEServerGlobalValue::refreshStack(effect);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    621);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v5, __closure->__this);
  v3 = common::milog::MiLogStream::operator<<<EffectPickCardLTEServerGlobalValue,(EffectPickCardLTEServerGlobalValue*)0>(
         v2,
         effect);
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" refreshed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 626: range 00000000161B11A6-00000000161B127C
ForeachPolicy __cdecl TowerDefensePlay::onSelectCard(Player &,unsigned int)::{lambda(EffectCardsCountStackServerGlobalValue &)#2}::operator()(
        const TowerDefensePlay::onSelectCard::<lambda(EffectCardsCountStackServerGlobalValue&)> *const __closure,
        EffectCardsCountStackServerGlobalValue *effect)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  EffectCardsCountStackServerGlobalValue::refreshStack(effect);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    629);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v5, __closure->__this);
  v3 = common::milog::MiLogStream::operator<<<EffectCardsCountStackServerGlobalValue,(EffectCardsCountStackServerGlobalValue*)0>(
         v2,
         effect);
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" refreshed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 634: range 00000000161B127E-00000000161B1519
ForeachPolicy __cdecl TowerDefensePlay::onSelectCard(Player &,unsigned int)::{lambda(EffectCardTypeCountNoCost &)#3}::operator()(
        const TowerDefensePlay::onSelectCard::<lambda(EffectCardTypeCountNoCost&)> *const __closure,
        EffectCardTypeCountNoCost *effect)
{
  uint32_t card_type; // esi
  const data::ActivityChessCardExcelConfig *card_config; // rax
  char v4; // dl
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  CardInfo *card_info; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&effect->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  card_type = effect->card_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_config = __closure->__card_config;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__card_config->card_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4();
  if ( card_type == card_config->card_type )
  {
    if ( *(_BYTE *)(((unsigned __int64)&effect->progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)effect + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->progress >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++effect->progress;
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "operator()",
      639);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v13, __closure->__this);
    v6 = common::milog::MiLogStream::operator<<<EffectCardTypeCountNoCost,(EffectCardTypeCountNoCost*)0>(v5, effect);
    v7 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v6, (const char (*)[3])": ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &effect->progress);
    v9 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])"/");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &effect->goal);
    common::milog::MiLogStream::~MiLogStream(&v13);
    if ( *(_BYTE *)(((unsigned __int64)&effect->index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect->index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !effect->index )
    {
      if ( *(_BYTE *)(((unsigned __int64)&effect->card_info >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      card_info = effect->card_info;
      if ( *(_BYTE *)(((unsigned __int64)&card_info->stack >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_info->stack >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++card_info->stack;
    }
  }
  return 0;
};

// Line 649: range 00000000161B151A-00000000161B16E8
ForeachPolicy __cdecl TowerDefensePlay::onSelectCard(Player &,unsigned int)::{lambda(EffectCardTypeStackServerGlobalValue &)#4}::operator()(
        const TowerDefensePlay::onSelectCard::<lambda(EffectCardTypeStackServerGlobalValue&)> *const __closure,
        EffectCardTypeStackServerGlobalValue *effect)
{
  uint32_t card_type; // esi
  const data::ActivityChessCardExcelConfig *card_config; // rax
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&effect->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  card_type = effect->card_type;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__card_config >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_config = __closure->__card_config;
  if ( *(_BYTE *)(((unsigned __int64)&card_config->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card_config->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( card_type == card_config->card_type )
  {
    if ( *(_BYTE *)(((unsigned __int64)&effect->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)effect + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++effect->count;
    EffectCardTypeStackServerGlobalValue::refreshStack(effect);
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "operator()",
      655);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v8, __closure->__this);
    v5 = common::milog::MiLogStream::operator<<<EffectCardTypeStackServerGlobalValue,(EffectCardTypeStackServerGlobalValue*)0>(
           v4,
           effect);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])" refreshed.");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  return 0;
};

// Line 662: range 00000000161B22A4-00000000161B28F5
__int64 __fastcall TowerDefensePlay::getCardCost(const TowerDefensePlay *const this, uint32_t card_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  double v9; // xmm0_8
  unsigned __int64 v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  __int64 result; // rax
  TowerDefensePlay::getCardCost::<lambda(EffectCardTypeCountNoCost&)> v20; // [rsp-20h] [rbp-1D0h]
  TowerDefensePlay::getCardCost::<lambda(EffectModifyCardCost&)> v21; // [rsp-20h] [rbp-1D0h]
  double __a; // [rsp+18h] [rbp-198h] BYREF
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+20h] [rbp-190h]
  const data::ActivityChessCardExcelConfig *card_config; // [rsp+28h] [rbp-188h]
  std::shared_ptr<Config> v25; // [rsp+30h] [rbp-180h] BYREF
  TowerDefensePlay::getCardCost::<lambda(EffectCardTypeCountNoCost&)> __f; // [rsp+40h] [rbp-170h]
  std::function<ForeachPolicy(EffectModifyCardCost&)> p_func; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-130h] BYREF
  char v29[272]; // [rsp+A0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 11 is_free:672 48 4 15 config_cost:670 64 4 13 real_cost:707 80 4 11 card_id:661 96 8 16 "
                        "total_factor:693 128 8 15 result_cost:705 160 24 14 effect_vec:694";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::getCardCost;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 80) = card_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                      &v5->design_config.txt_config_mgr.activity_chess_config_mgr,
                      *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( card_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = card_config_ptr->cost_points;
    card_config = card_config_ptr;
    *(_BYTE *)(v2 + 32) = 0;
    __f.__card_config = card_config;
    __f.__is_free = (bool *)(v2 + 32);
    __f.__this = this;
    v20.__this = this;
    v20.__is_free = (bool *)(v2 + 32);
    v20.__card_config = card_config;
    std::function<ForeachPolicy ()(EffectCardTypeCountNoCost &)>::function<TowerDefensePlay::getCardCost(unsigned int)::{lambda(EffectCardTypeCountNoCost &)#1},void,void>(
      (std::function<ForeachPolicy(EffectCardTypeCountNoCost&)> *const)&v28,
      v20);
    TowerDefensePlay::foreachEffect<EffectCardTypeCountNoCost>(
      this,
      (std::function<ForeachPolicy(EffectCardTypeCountNoCost&)> *)&v28);
    std::function<ForeachPolicy ()(EffectCardTypeCountNoCost &)>::~function((std::function<ForeachPolicy(EffectCardTypeCountNoCost&)> *const)&v28);
    if ( *(_BYTE *)(v2 + 32) )
    {
      v7 = 0;
    }
    else
    {
      *(_QWORD *)(v2 + 96) = 0LL;
      std::vector<std::shared_ptr<CardEffectBase>>::vector((std::vector<std::shared_ptr<CardEffectBase>> *const)(v2 + 160));
      v28.log_ = (common::milog::MiLog *)card_config;
      v28.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 96);
      v28.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 160);
      v28.ostr_ = (common::milog::MilogStringStream *)this;
      v21.__this = this;
      v21.__effect_vec = (std::vector<std::shared_ptr<CardEffectBase>> *)(v2 + 160);
      v21.__total_factor = (double *)(v2 + 96);
      v21.__card_config = card_config;
      std::function<ForeachPolicy ()(EffectModifyCardCost &)>::function<TowerDefensePlay::getCardCost(unsigned int)::{lambda(EffectModifyCardCost &)#2},void,void>(
        &p_func,
        v21);
      TowerDefensePlay::foreachEffect<EffectModifyCardCost>(this, &p_func);
      std::function<ForeachPolicy ()(EffectModifyCardCost &)>::~function(&p_func);
      v8 = *(_DWORD *)(v2 + 48);
      v9 = SAFE_MULTIPLY<unsigned int,double>(v8, 0.0001 * *(double *)(v2 + 96));
      *(SelectType_11 *)(v2 + 128) = SAFE_ADD<double,unsigned int>(v9, v8);
      __a = 0.0;
      v10 = (unsigned __int64)std::max<double>(&__a, (const double *)(v2 + 128));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      *(_QWORD *)(v2 + 128) = *(_QWORD *)v10;
      *(_DWORD *)(v2 + 64) = -1;
      if ( (double)(int)std::numeric_limits<unsigned int>::max() > *(double *)(v2 + 128) )
        *(_DWORD *)(v2 + 64) = (int)*(double *)(v2 + 128);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "getCardCost",
        712);
      v11 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(
              (common::milog::MiLogStream *const)&p_func,
              this);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" effect_vec:");
      v13 = common::milog::MiLogStream::operator<<<std::shared_ptr<CardEffectBase>>(
              v12,
              (const std::vector<std::shared_ptr<CardEffectBase>> *)(v2 + 160));
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" total_factor: ");
      v15 = common::milog::MiLogStream::operator<<<double,(double *)0>(v14, (const double *)(v2 + 96));
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])", config_cost: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])", real_cost: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v7 = *(_DWORD *)(v2 + 64);
      std::vector<std::shared_ptr<CardEffectBase>>::~vector((std::vector<std::shared_ptr<CardEffectBase>> *const)(v2 + 160));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "getCardCost",
      667);
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v28,
           (const char (*)[59])"[CHESS] findActivityChessCardExcelConfig failed, card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v28);
    v7 = -1;
  }
  result = v7;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 674: range 00000000161B1DF6-00000000161B20B4
ForeachPolicy __cdecl TowerDefensePlay::getCardCost(unsigned int)const::{lambda(EffectCardTypeCountNoCost &)#1}::operator()(
        const TowerDefensePlay::getCardCost::<lambda(EffectCardTypeCountNoCost&)> *const __closure,
        EffectCardTypeCountNoCost *effect)
{
  uint32_t progress; // ecx
  uint32_t quality; // esi
  const data::ActivityChessCardExcelConfig *card_config; // rdx
  char v6; // cl
  bool *is_free; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&effect->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  progress = effect->progress;
  if ( *(_BYTE *)(((unsigned __int64)&effect->goal >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->goal >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( progress < effect->goal )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&effect->quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  quality = effect->quality;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_config = __closure->__card_config;
  v6 = *(_BYTE *)(((unsigned __int64)&__closure->__card_config->card_quality_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)(((LOBYTE(__closure->__card_config) + 36) & 7) + 3) >= v6 )
    __asan_report_load4();
  if ( quality != card_config->card_quality_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_free >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  is_free = __closure->__is_free;
  if ( *(_BYTE *)(((unsigned __int64)is_free >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_free & 7) >= *(_BYTE *)(((unsigned __int64)is_free >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_free);
  }
  *is_free = 1;
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    683);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v15, __closure->__this);
  v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])off_25B83F40);
  v10 = common::milog::MiLogStream::operator<<<EffectCardTypeCountNoCost,(EffectCardTypeCountNoCost*)0>(v9, effect);
  v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])": ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &effect->progress);
  v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])"/");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &effect->goal);
  common::milog::MiLogStream::~MiLogStream(&v15);
  return 1;
};

// Line 695: range 00000000161B20B6-00000000161B22A3
ForeachPolicy __cdecl TowerDefensePlay::getCardCost(unsigned int)const::{lambda(EffectModifyCardCost &)#2}::operator()(
        const TowerDefensePlay::getCardCost::<lambda(EffectModifyCardCost&)> *const __closure,
        EffectModifyCardCost *effect)
{
  uint32_t card_type; // esi
  const data::ActivityChessCardExcelConfig *card_config; // rax
  char v4; // dl
  unsigned __int64 total_factor; // rax
  double v7; // xmm1_8
  double *v8; // rax
  double v9; // xmm0_8
  std::vector<std::shared_ptr<CardEffectBase>> *effect_vec; // rbx
  std::enable_shared_from_this<CardEffectBase> v12; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&effect->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  card_type = effect->card_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_config = __closure->__card_config;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__card_config->card_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4();
  if ( card_type != card_config->card_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__total_factor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  total_factor = (unsigned __int64)__closure->__total_factor;
  if ( *(_BYTE *)((total_factor >> 3) + 0x7FFF8000) )
    total_factor = __asan_report_load8();
  v7 = *(double *)total_factor;
  if ( *(_BYTE *)(((unsigned __int64)&effect->factor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = __closure->__total_factor;
  v9 = effect->factor + v7;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8(__closure->__total_factor);
  *v8 = v9;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__effect_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  effect_vec = __closure->__effect_vec;
  std::enable_shared_from_this<CardEffectBase>::shared_from_this(&v12);
  std::vector<std::shared_ptr<CardEffectBase>>::push_back(
    effect_vec,
    (std::vector<std::shared_ptr<CardEffectBase>>::value_type *)&v12);
  std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v12);
  return 0;
};

// Line 718: range 00000000161B28F6-00000000161B29B3
void __cdecl TowerDefensePlay::eraseEffectMap(CardEffectWtrMap *card_effect_map, const CardEffectBase *effect)
{
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::mapped_type *effect_map; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&effect->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  effect_map = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::operator[](
                 card_effect_map,
                 &effect->card_info->pick_index);
  std::map<unsigned int,std::weak_ptr<CardEffectBase>>::erase(effect_map, &effect->index);
  if ( std::map<unsigned int,std::weak_ptr<CardEffectBase>>::empty(effect_map) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&effect->card_info >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::map<unsigned int,std::weak_ptr<CardEffectBase>>::erase(effect_map, &effect->card_info->pick_index);
  }
};

// Line 728: range 00000000161B2BB4-00000000161B2FF4
void __cdecl TowerDefensePlay::modifyCandidateCardsNumByEffect(TowerDefensePlay *const this, uint32_t *card_num)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  double __a; // [rsp+28h] [rbp-108h] BYREF
  double __b; // [rsp+30h] [rbp-100h] BYREF
  double num; // [rsp+38h] [rbp-F8h]
  std::function<ForeachPolicy(EffectModifyCandidateCards&)> p_func; // [rsp+40h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 old_num:738 64 8 15 total_delta:729 96 24 14 effect_vec:730";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::modifyCandidateCardsNumByEffect;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_QWORD *)(v2 + 64) = 0LL;
  std::vector<std::shared_ptr<CardEffectBase>>::vector((std::vector<std::shared_ptr<CardEffectBase>> *const)(v2 + 96));
  std::function<ForeachPolicy ()(EffectModifyCandidateCards &)>::function<TowerDefensePlay::modifyCandidateCardsNumByEffect(unsigned int &)::{lambda(EffectModifyCandidateCards &)#1},void,void>(
    &p_func,
    (TowerDefensePlay::modifyCandidateCardsNumByEffect::<lambda(EffectModifyCandidateCards&)>)__PAIR128__(
                                                                                                v2 + 96,
                                                                                                v2 + 64));
  TowerDefensePlay::foreachEffect<EffectModifyCandidateCards>(this, &p_func);
  std::function<ForeachPolicy ()(EffectModifyCandidateCards &)>::~function(&p_func);
  if ( *(_BYTE *)(((unsigned __int64)card_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)card_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = *card_num;
  __b = (double)*(int *)(v2 + 48) + *(double *)(v2 + 64);
  __a = 1.0;
  v5 = (unsigned __int64)std::max<double>(&__a, &__b);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  num = *(double *)v5;
  v6 = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)card_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)card_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(card_num);
  }
  *card_num = v6;
  if ( (double)(int)*card_num > num )
    *card_num = (int)num;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "modifyCandidateCardsNumByEffect",
    745);
  v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(
         (common::milog::MiLogStream *const)&p_func,
         this);
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" effect_vec:");
  v9 = common::milog::MiLogStream::operator<<<std::shared_ptr<CardEffectBase>>(
         v8,
         (const std::vector<std::shared_ptr<CardEffectBase>> *)(v2 + 96));
  v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" total_delta:");
  v11 = common::milog::MiLogStream::operator<<<double,(double *)0>(v10, (const double *)(v2 + 64));
  v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" card_num:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v13, (const char (*)[3])"=>");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, card_num);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  std::vector<std::shared_ptr<CardEffectBase>>::~vector((std::vector<std::shared_ptr<CardEffectBase>> *const)(v2 + 96));
  if ( v19 == (char *)v2 )
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
};

// Line 731: range 00000000161B29B4-00000000161B2BB2
ForeachPolicy __cdecl TowerDefensePlay::modifyCandidateCardsNumByEffect(unsigned int &)::{lambda(EffectModifyCandidateCards &)#1}::operator()(
        const TowerDefensePlay::modifyCandidateCardsNumByEffect::<lambda(EffectModifyCandidateCards&)> *const __closure,
        EffectModifyCandidateCards *effect)
{
  double *total_delta; // rax
  double v3; // xmm1_8
  double *v4; // rax
  double v5; // xmm0_8
  std::vector<std::shared_ptr<CardEffectBase>> *effect_vec; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::enable_shared_from_this<CardEffectBase> v10; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  total_delta = __closure->__total_delta;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__total_delta >> 3) + 0x7FFF8000) )
    total_delta = (double *)__asan_report_load8();
  v3 = *total_delta;
  if ( *(_BYTE *)(((unsigned __int64)&effect->delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v4 = __closure->__total_delta;
  v5 = (double)effect->delta + v3;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__total_delta >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8(__closure->__total_delta);
  *v4 = v5;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__effect_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  effect_vec = __closure->__effect_vec;
  std::enable_shared_from_this<CardEffectBase>::shared_from_this(&v10);
  std::vector<std::shared_ptr<CardEffectBase>>::push_back(
    effect_vec,
    (std::vector<std::shared_ptr<CardEffectBase>>::value_type *)&v10);
  std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v10);
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    735);
  v7 = common::milog::MiLogStream::operator<<<EffectModifyCandidateCards,(EffectModifyCandidateCards*)0>(&v11, effect);
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" total_delta:");
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<double,(double *)0>(v8, __closure->__total_delta);
  common::milog::MiLogStream::~MiLogStream(&v11);
  return 0;
};

// Line 749: range 00000000161B2FF6-00000000161B30D2
void __cdecl TowerDefensePlay::addToCardEffectMap(TowerDefensePlay *const this, CardEffectBase *effect)
{
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>> *v2; // rcx
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::mapped_type *v3; // rax
  std::weak_ptr<CardEffectBase> *v4; // rax
  std::enable_shared_from_this<CardEffectBase> v5; // [rsp+10h] [rbp-20h] BYREF

  std::enable_shared_from_this<CardEffectBase>::weak_from_this(&v5);
  v2 = std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator[](
         &this->typed_card_effect_map_,
         &effect->effect_type);
  if ( *(_BYTE *)(((unsigned __int64)&effect->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>::operator[](
         v2,
         &effect->card_info->pick_index);
  v4 = std::map<unsigned int,std::weak_ptr<CardEffectBase>>::operator[](v3, &effect->index);
  std::weak_ptr<CardEffectBase>::operator=(v4, &v5._M_weak_this);
  std::weak_ptr<CardEffectBase>::~weak_ptr(&v5._M_weak_this);
};

// Line 754: range 00000000161B30D4-00000000161B3115
void __cdecl TowerDefensePlay::delFromCardEffectMap(TowerDefensePlay *const this, CardEffectBase *effect)
{
  std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::mapped_type *v2; // rdx

  v2 = std::map<data::ChessCardEffectType,std::map<unsigned int,std::map<unsigned int,std::weak_ptr<CardEffectBase>>>>::operator[](
         &this->typed_card_effect_map_,
         &effect->effect_type);
  TowerDefensePlay::eraseEffectMap(v2, effect);
};

// Line 759: range 00000000161B3398-00000000161B39AB
void __cdecl TowerDefensePlay::modifyQualityWeightMapByEffect(
        TowerDefensePlay *const this,
        const std::map<unsigned int,unsigned int> *input_map,
        std::map<unsigned int,unsigned int> *output_map)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  const unsigned int *v7; // rdx
  int v8; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  const unsigned int *v13; // rdx
  int v14; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rdx
  int v18; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rdx
  int v20; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rax
  int *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  TowerDefensePlay::modifyQualityWeightMapByEffect::<lambda(EffectModifyQualityProb&)> v29; // [rsp-20h] [rbp-140h]
  std::map<unsigned int,unsigned int>::key_type v31; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,unsigned int>::key_type v32; // [rsp+24h] [rbp-FCh] BYREF
  std::map<unsigned int,unsigned int>::key_type v33; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-F4h] BYREF
  TowerDefensePlay::modifyQualityWeightMapByEffect::<lambda(EffectModifyQualityProb&)> __f; // [rsp+30h] [rbp-F0h]
  std::function<ForeachPolicy(EffectModifyQualityProb&)> p_func; // [rsp+50h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 max_weight:760 48 4 14 min_weight:761 64 24 14 effect_vec:764";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::modifyQualityWeightMapByEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = 100;
  *(_DWORD *)(v3 + 48) = 0;
  std::map<unsigned int,unsigned int>::operator=(output_map, input_map);
  std::vector<std::shared_ptr<CardEffectBase>>::vector((std::vector<std::shared_ptr<CardEffectBase>> *const)(v3 + 64));
  __f.__input_map = input_map;
  __f.__output_map = output_map;
  __f.__effect_vec = (std::vector<std::shared_ptr<CardEffectBase>> *)(v3 + 64);
  v29.__effect_vec = (std::vector<std::shared_ptr<CardEffectBase>> *)(v3 + 64);
  v29.__output_map = output_map;
  v29.__input_map = input_map;
  std::function<ForeachPolicy ()(EffectModifyQualityProb &)>::function<TowerDefensePlay::modifyQualityWeightMapByEffect(std::map<unsigned int,unsigned int> const&,std::map<unsigned int,unsigned int>&)::{lambda(EffectModifyQualityProb &)#1},void,void>(
    &p_func,
    v29);
  TowerDefensePlay::foreachEffect<EffectModifyQualityProb>(this, &p_func);
  std::function<ForeachPolicy ()(EffectModifyQualityProb &)>::~function(&p_func);
  __k = 2;
  v6 = std::map<unsigned int,unsigned int>::operator[](output_map, &__k);
  v7 = std::clamp<unsigned int>(v6, (const unsigned int *)(v3 + 48), (const unsigned int *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = *v7;
  v33 = 2;
  v9 = std::map<unsigned int,unsigned int>::operator[](output_map, &v33);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = v8;
  v33 = 2;
  v11 = std::map<unsigned int,unsigned int>::operator[](output_map, &v33);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  __k = 100 - *v11;
  v32 = 1;
  v12 = std::map<unsigned int,unsigned int>::operator[](output_map, &v32);
  v13 = std::clamp<unsigned int>(v12, (const unsigned int *)(v3 + 48), &__k);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v14 = *v13;
  v31 = 1;
  v15 = std::map<unsigned int,unsigned int>::operator[](output_map, &v31);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = v14;
  v33 = 2;
  v17 = std::map<unsigned int,unsigned int>::operator[](output_map, &v33);
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v18 = *v17;
  __k = 1;
  v19 = std::map<unsigned int,unsigned int>::operator[](output_map, &__k);
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v20 = 100 - (v18 + *v19);
  v32 = 0;
  v21 = std::map<unsigned int,unsigned int>::operator[](output_map, &v32);
  v22 = (int *)v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v21);
  }
  *v22 = v20;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "modifyQualityWeightMapByEffect",
    777);
  v23 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(
          (common::milog::MiLogStream *const)&p_func,
          this);
  v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" effect_vec: ");
  v25 = common::milog::MiLogStream::operator<<<std::shared_ptr<CardEffectBase>>(
          v24,
          (const std::vector<std::shared_ptr<CardEffectBase>> *)(v3 + 64));
  v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" input: ");
  v27 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v26, input_map);
  v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" output:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v28, output_map);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  std::vector<std::shared_ptr<CardEffectBase>>::~vector((std::vector<std::shared_ptr<CardEffectBase>> *const)(v3 + 64));
  if ( v37 == (char *)v3 )
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

// Line 765: range 00000000161B3116-00000000161B3397
ForeachPolicy __cdecl TowerDefensePlay::modifyQualityWeightMapByEffect(std::map<unsigned int,unsigned int> const&,std::map<unsigned int,unsigned int>&)::{lambda(EffectModifyQualityProb &)#1}::operator()(
        const TowerDefensePlay::modifyQualityWeightMapByEffect::<lambda(EffectModifyQualityProb&)> *const __closure,
        EffectModifyQualityProb *effect)
{
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rdx
  int v5; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  std::vector<std::shared_ptr<CardEffectBase>> *effect_vec; // rbx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-40h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *key; // [rsp+28h] [rbp-38h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *val; // [rsp+30h] [rbp-30h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+38h] [rbp-28h] BYREF
  std::enable_shared_from_this<CardEffectBase> v15; // [rsp+40h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __for_range = __closure->__input_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    __in = *v3;
    key = std::get<0ul,unsigned int const,unsigned int>(&__in);
    val = std::get<1ul,unsigned int const,unsigned int>(&__in);
    v4 = std::map<unsigned int,unsigned int>::operator[](&effect->mod_weight_map, key);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__output_map >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = std::map<unsigned int,unsigned int>::operator[](__closure->__output_map, key);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *v6 += v5;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__effect_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  effect_vec = __closure->__effect_vec;
  std::enable_shared_from_this<CardEffectBase>::shared_from_this(&v15);
  std::vector<std::shared_ptr<CardEffectBase>>::push_back(
    effect_vec,
    (std::vector<std::shared_ptr<CardEffectBase>>::value_type *)&v15);
  std::shared_ptr<CardEffectBase>::~shared_ptr((std::shared_ptr<CardEffectBase> *const)&v15);
  return 0;
};

// Line 781: range 00000000161B3BEA-00000000161B3E4B
__int64 __fastcall TowerDefensePlay::isTriggerFreeCardOnRefresh(TowerDefensePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  TowerDefensePlay::isTriggerFreeCardOnRefresh::<lambda(EffectFreeCardOnRefresh&)> v9; // [rsp-20h] [rbp-F0h]
  __int64 __f_8; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 is_free:787 64 4 7 uid:780";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::isTriggerFreeCardOnRefresh;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = uid;
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,TowerDefensePlay::PlayerInfo>,unsigned int>(
          &this->player_info_map_,
          (const unsigned int *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "isTriggerFreeCardOnRefresh",
      784);
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v11, this);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" uid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" not in battle.");
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(v2 + 48) = 0;
    LODWORD(__f_8) = *(_DWORD *)(v2 + 64);
    v9.__is_free = (bool *)(v2 + 48);
    *(_QWORD *)&v9.__uid = __f_8;
    v9.__this = this;
    std::function<ForeachPolicy ()(EffectFreeCardOnRefresh &)>::function<TowerDefensePlay::isTriggerFreeCardOnRefresh(unsigned int)::{lambda(EffectFreeCardOnRefresh &)#1},void,void>(
      (std::function<ForeachPolicy(EffectFreeCardOnRefresh&)> *const)&v11,
      v9);
    TowerDefensePlay::foreachEffect<EffectFreeCardOnRefresh>(
      this,
      (std::function<ForeachPolicy(EffectFreeCardOnRefresh&)> *)&v11);
    std::function<ForeachPolicy ()(EffectFreeCardOnRefresh &)>::~function((std::function<ForeachPolicy(EffectFreeCardOnRefresh&)> *const)&v11);
    result = *(unsigned __int8 *)(v2 + 48);
  }
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
  return result;
};

// Line 788: range 00000000161B39AC-00000000161B3BE9
ForeachPolicy __cdecl TowerDefensePlay::isTriggerFreeCardOnRefresh(unsigned int)::{lambda(EffectFreeCardOnRefresh &)#1}::operator()(
        const TowerDefensePlay::isTriggerFreeCardOnRefresh::<lambda(EffectFreeCardOnRefresh&)> *const __closure,
        EffectFreeCardOnRefresh *effect)
{
  bool *is_free; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t *count; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  count = std::map<unsigned int,unsigned int>::operator[](&effect->uid_count_map, &__closure->__uid);
  if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ++*count;
  if ( *(_BYTE *)(((unsigned __int64)&effect->step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->step && !(*count % effect->step) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_free >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_free = __closure->__is_free;
    if ( *(_BYTE *)(((unsigned __int64)is_free >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_free & 7) >= *(_BYTE *)(((unsigned __int64)is_free >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_free);
    }
    *is_free = 1;
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "operator()",
      795);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v11, __closure->__this);
    v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])"[FREE] count:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, count);
    v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v5, (const char (*)[7])" step:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &effect->step);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__closure->__uid);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  return 0;
};

// Line 803: range 00000000161B3FDC-00000000161B4399
void __cdecl TowerDefensePlay::procRefreshCost(TowerDefensePlay *const this, uint32_t *cost, uint32_t uid)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  double v7; // xmm0_8
  unsigned __int64 v8; // rax
  uint32_t v9; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  double __a; // [rsp+28h] [rbp-D8h] BYREF
  std::function<ForeachPolicy(EffectModifyRefreshCost&)> p_func; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 old_cost:812 48 4 13 real_cost:815 64 8 16 total_factor:805 96 8 15 result_cost:813";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::procRefreshCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_QWORD *)(v3 + 64) = 0LL;
  std::function<ForeachPolicy ()(EffectModifyRefreshCost &)>::function<TowerDefensePlay::procRefreshCost(unsigned int &,unsigned int)::{lambda(EffectModifyRefreshCost &)#1},void,void>(
    &p_func,
    (TowerDefensePlay::procRefreshCost::<lambda(EffectModifyRefreshCost&)>)__PAIR128__(v3 + 64, (unsigned __int64)this));
  TowerDefensePlay::foreachEffect<EffectModifyRefreshCost>(this, &p_func);
  std::function<ForeachPolicy ()(EffectModifyRefreshCost &)>::~function(&p_func);
  if ( *(_BYTE *)(((unsigned __int64)cost >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cost & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 32) = *cost;
  v6 = *(_DWORD *)(v3 + 32);
  v7 = SAFE_MULTIPLY<unsigned int,double>(v6, 0.0001 * *(double *)(v3 + 64));
  *(SelectType_11 *)(v3 + 96) = SAFE_ADD<double,unsigned int>(v7, v6);
  __a = 0.0;
  v8 = (unsigned __int64)std::max<double>(&__a, (const double *)(v3 + 96));
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  *(_QWORD *)(v3 + 96) = *(_QWORD *)v8;
  *(_DWORD *)(v3 + 48) = -1;
  if ( (double)(int)std::numeric_limits<unsigned int>::max() > *(double *)(v3 + 96) )
    *(_DWORD *)(v3 + 48) = (int)*(double *)(v3 + 96);
  v9 = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)cost >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cost & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(cost);
  }
  *cost = v9;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "procRefreshCost",
    821);
  v10 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(
          (common::milog::MiLogStream *const)&p_func,
          this);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" total_factor: ");
  v12 = common::milog::MiLogStream::operator<<<double,(double *)0>(v11, (const double *)(v3 + 64));
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])", config_cost: ");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
  v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", real_cost: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  if ( v18 == (char *)v3 )
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

// Line 806: range 00000000161B3E4C-00000000161B3FDB
ForeachPolicy __cdecl TowerDefensePlay::procRefreshCost(unsigned int &,unsigned int)::{lambda(EffectModifyRefreshCost &)#1}::operator()(
        const TowerDefensePlay::procRefreshCost::<lambda(EffectModifyRefreshCost&)> *const __closure,
        EffectModifyRefreshCost *effect)
{
  unsigned __int64 total_factor; // rax
  double v3; // xmm1_8
  double *v4; // rax
  double v5; // xmm0_8
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *refreshed; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__total_factor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  total_factor = (unsigned __int64)__closure->__total_factor;
  if ( *(_BYTE *)((total_factor >> 3) + 0x7FFF8000) )
    total_factor = __asan_report_load8();
  v3 = *(double *)total_factor;
  if ( *(_BYTE *)(((unsigned __int64)&effect->factor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = __closure->__total_factor;
  v5 = effect->factor + v3;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8(__closure->__total_factor);
  *v4 = v5;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    809);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v10, __closure->__this);
  refreshed = common::milog::MiLogStream::operator<<<EffectModifyRefreshCost,(EffectModifyRefreshCost*)0>(v6, effect);
  v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(refreshed, (const char (*)[10])" +factor:");
  common::milog::MiLogStream::operator<<<double,(double *)0>(v8, &effect->factor);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0;
};

// Line 825: range 00000000161B439A-00000000161B456A
__int64 __fastcall TowerDefensePlay::getCostPointsByUid(const TowerDefensePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::tools::transcribe_cv_t_18 *player_info_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:824";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::getCostPointsByUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  player_info_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,TowerDefensePlay::PlayerInfo> const>(
                      &this->player_info_map_,
                      (const std::map<unsigned int,TowerDefensePlay::PlayerInfo>::key_type *)(v2 + 32));
  if ( player_info_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&player_info_ptr->cost_points >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)player_info_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info_ptr->cost_points >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = player_info_ptr->cost_points;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "getCostPointsByUid",
      829);
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v9, this);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v5,
           (const char (*)[29])" player not in battle. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
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

// Line 836: range 00000000161B456C-00000000161B4641
uint32_t __cdecl TowerDefensePlay::getTotalBuildlingPoints(const TowerDefensePlay *const this)
{
  uint32_t points; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,TowerDefensePlay::PlayerInfo> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *uid; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *player_info; // [rsp+48h] [rbp-8h]

  points = 0;
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v6);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v6);
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    points += player_info->building_points;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator++(&__for_begin);
  }
  return points;
};

// Line 846: range 00000000161B471A-00000000161B4780
void __cdecl TowerDefensePlay::onBuildingPointsChange(TowerDefensePlay *const this, uint32_t uid)
{
  std::function<ForeachPolicy(EffectPointsStackServerGlobalValue&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(EffectPointsStackServerGlobalValue &)>::function<TowerDefensePlay::onBuildingPointsChange(unsigned int)::{lambda(EffectPointsStackServerGlobalValue &)#1},void,void>(
    &p_func,
    (TowerDefensePlay::onBuildingPointsChange::<lambda(EffectPointsStackServerGlobalValue&)>)this);
  TowerDefensePlay::foreachEffect<EffectPointsStackServerGlobalValue>(this, &p_func);
  std::function<ForeachPolicy ()(EffectPointsStackServerGlobalValue &)>::~function(&p_func);
};

// Line 847: range 00000000161B4642-00000000161B4718
ForeachPolicy __cdecl TowerDefensePlay::onBuildingPointsChange(unsigned int)::{lambda(EffectPointsStackServerGlobalValue &)#1}::operator()(
        const TowerDefensePlay::onBuildingPointsChange::<lambda(EffectPointsStackServerGlobalValue&)> *const __closure,
        EffectPointsStackServerGlobalValue *effect)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  EffectPointsStackServerGlobalValue::refreshStack(effect);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "operator()",
    850);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v5, __closure->__this);
  v3 = common::milog::MiLogStream::operator<<<EffectPointsStackServerGlobalValue,(EffectPointsStackServerGlobalValue*)0>(
         v2,
         effect);
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" refreshed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 856: range 00000000161B4922-00000000161B4D51
void __cdecl TowerDefensePlay::queryTowerNumMap(
        TowerDefensePlay *const this,
        std::map<unsigned int,unsigned int> *gear_num_map)
{
  std::map<unsigned int,unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type v5; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type *v7; // rdx
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(TowerDefensePlay *const, std::function<ForeachPolicy(FoundationComp&)> *); // r15
  common::milog::MiLogStream *v10; // rax
  TowerDefensePlay::queryTowerNumMap::<lambda(FoundationComp&)> v11; // [rsp-20h] [rbp-180h]
  std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  const ActivityChessExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-128h]
  const std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig> *__for_range; // [rsp+40h] [rbp-120h]
  const std::pair<unsigned int const,data::ActivityChessGearExcelConfig> *v16; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type *id; // [rsp+50h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type *gear_config; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v19; // [rsp+60h] [rbp-100h] BYREF
  TowerDefensePlay::queryTowerNumMap::<lambda(FoundationComp&)> __f; // [rsp+70h] [rbp-F0h]
  std::function<ForeachPolicy(FoundationComp&)> v21; // [rsp+90h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,unsigned int> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 22 gadget_to_gear_map:858";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)TowerDefensePlay::queryTowerNumMap;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_chess_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  std::map<unsigned int,unsigned int>::map(v2 + 1);
  __for_range = &config_mgr->activity_chess_gear_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::begin(&config_mgr->activity_chess_gear_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::end(&config_mgr->activity_chess_gear_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::ActivityChessGearExcelConfig>(v16);
    gear_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityChessGearExcelConfig>(v16);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = *id;
    v6 = std::map<unsigned int,unsigned int>::operator[](v2 + 1, &gear_config->gadget_id);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = v5;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = *(void (__fastcall **)(TowerDefensePlay *const, std::function<ForeachPolicy(FoundationComp&)> *))v8;
  __f.__this = this;
  __f.__gadget_to_gear_map = v2 + 1;
  __f.__gear_num_map = gear_num_map;
  v11.__gear_num_map = gear_num_map;
  v11.__gadget_to_gear_map = v2 + 1;
  v11.__this = this;
  std::function<ForeachPolicy ()(FoundationComp &)>::function<TowerDefensePlay::queryTowerNumMap(std::map<unsigned int,unsigned int> &)::{lambda(FoundationComp &)#1},void,void>(
    &v21,
    v11);
  v9(this, &v21);
  std::function<ForeachPolicy ()(FoundationComp &)>::~function(&v21);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "queryTowerNumMap",
    877);
  v10 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(
          (common::milog::MiLogStream *const)&v21,
          this);
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v10, gear_num_map);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21);
  std::map<unsigned int,unsigned int>::~map(v2 + 1);
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 863: range 00000000161B4782-00000000161B4921
ForeachPolicy __cdecl TowerDefensePlay::queryTowerNumMap(std::map<unsigned int,unsigned int> &)::{lambda(FoundationComp &)#1}::operator()(
        const TowerDefensePlay::queryTowerNumMap::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  unsigned int *val_ptr; // [rsp+18h] [rbp-68h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 gear_gadget_id:865";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::queryTowerNumMap(std::map<unsigned int,unsigned int> &)::{lambda(FoundationComp &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = FoundationComp::getGearGadgetId(foundation_comp);
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__gadget_to_gear_map >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,unsigned int>>(
                __closure->__gadget_to_gear_map,
                (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    if ( val_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__gear_num_map >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v6 = std::map<unsigned int,unsigned int>::operator[](__closure->__gear_num_map, val_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v6;
    }
    result = FOREACH_CONTINUE;
  }
  else
  {
    result = FOREACH_CONTINUE;
  }
  if ( v8 == (char *)v2 )
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

// Line 881: range 00000000161B4D52-00000000161B4E72
__int64 __fastcall TowerDefensePlay::getPickCardCountByType(const TowerDefensePlay *const this, uint32_t card_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::tools::transcribe_cv_t_3 *count_ptr; // [rsp+18h] [rbp-68h]
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 card_type:880";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::getPickCardCountByType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_type;
  count_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,unsigned int> const>(
                &this->card_type_count_map_,
                (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( count_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)count_ptr >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = *count_ptr;
  }
  else
  {
    result = 0LL;
  }
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

// Line 891: range 00000000161B4EF0-00000000161B5030
bool __cdecl TowerDefensePlay::isAllCardsCursed(const TowerDefensePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  bool result; // al
  std::function<ForeachPolicy(EffectCardTypeForceCurse&)> p_func; // [rsp+10h] [rbp-90h] BYREF
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 19 is_force_cursed:892";
  *(_QWORD *)(v1 + 16) = TowerDefensePlay::isAllCardsCursed;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  *(_BYTE *)(v1 + 32) = 0;
  std::function<ForeachPolicy ()(EffectCardTypeForceCurse &)>::function<TowerDefensePlay::isAllCardsCursed(void)::{lambda(EffectCardTypeForceCurse &)#1},void,void>(
    &p_func,
    (TowerDefensePlay::isAllCardsCursed::<lambda(EffectCardTypeForceCurse&)>)__PAIR128__(
                                                                               v1 + 32,
                                                                               (unsigned __int64)this));
  TowerDefensePlay::foreachEffect<EffectCardTypeForceCurse>(this, &p_func);
  std::function<ForeachPolicy ()(EffectCardTypeForceCurse &)>::~function(&p_func);
  result = *(_BYTE *)(v1 + 32);
  if ( v6 == (char *)v1 )
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

// Line 893: range 00000000161B4E74-00000000161B4EEE
ForeachPolicy __cdecl TowerDefensePlay::isAllCardsCursed(void)const::{lambda(EffectCardTypeForceCurse &)#1}::operator()(
        const TowerDefensePlay::isAllCardsCursed::<lambda(EffectCardTypeForceCurse&)> *const __closure,
        EffectCardTypeForceCurse *effect)
{
  bool *is_force_cursed; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_force_cursed >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  is_force_cursed = __closure->__is_force_cursed;
  if ( *(_BYTE *)(((unsigned __int64)is_force_cursed >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_force_cursed & 7) >= *(_BYTE *)(((unsigned __int64)is_force_cursed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_force_cursed);
  }
  *is_force_cursed = 1;
  return 1;
};

// Line 902: range 00000000161B5032-00000000161B55AB
void __cdecl TowerDefensePlay::notifyLuaCardEvent(
        TowerDefensePlay *const this,
        uint32_t uid,
        uint32_t pick_index,
        uint32_t card_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t *p_uid; // rax
  Group *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 13 group_ptr:904 64 16 13 event_ptr:911";
  *(_QWORD *)(v4 + 16) = TowerDefensePlay::notifyLuaCardEvent;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneMultistagePlay::getGroupPtr((SceneMultistagePlay *const)(v4 + 32));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "notifyLuaCardEvent",
      907);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v23, this);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(
           v7,
           this->scene_multistage_play_);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" group: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->group_id_);
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" nullptr");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    EventUtil::createEvent((std::shared_ptr<Event> *)(v4 + 64), 65);
    if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/tower_defense_play.cpp",
        "notifyLuaCardEvent",
        914);
      v11 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v23, this);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(
              v11,
              this->scene_multistage_play_);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" make event oom!");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      p_param1 = &v13->param1;
      if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_param1);
      }
      v13->param1 = pick_index;
      v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v15->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->param2);
      }
      v15->param2 = card_id;
      v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      p_uid = &v16->uid;
      if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_uid);
      }
      v16->uid = uid;
      v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( Group::handleEvent(v18, (EventPtr *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/play/tower_defense_play.cpp",
          "notifyLuaCardEvent",
          923);
        v19 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v23, this);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v20 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(
                v19,
                this->scene_multistage_play_);
        common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          v20,
          (const char (*)[50])" handleEvent EVENT_MECHANICUS_PICKED_CARD fails. ");
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 64));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 32));
  if ( v24 == (char *)v4 )
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

// Line 929: range 00000000161B55AC-00000000161B5990
__int64 __fastcall TowerDefensePlay::isTowerBanned(const TowerDefensePlay *const this, uint32_t tower_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SceneMultistagePlay *scene_multistage_play; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // r14
  std::__shared_ptr_access<const DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t DungeonId; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  bool *v16; // rax
  unsigned __int8 *v17; // rdx
  __int64 result; // rax
  std::shared_ptr<Config> v19; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 2 17 is_banned_opt:936 48 4 12 tower_id:928 64 16 21 dungeon_scene_ptr:930";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::isTowerBanned;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556926;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = tower_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_multistage_play = this->scene_multistage_play_;
  p_vptr_DescribalBase = &scene_multistage_play->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene_multistage_play >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v7 = *p_vptr_DescribalBase + 24LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(SceneMultistagePlay *))v7)(scene_multistage_play);
  toPtr<DungeonScene const,Scene>((Scene *)(v2 + 64));
  if ( std::operator==<DungeonScene const>(0LL, (const std::shared_ptr<const DungeonScene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "isTowerBanned",
      933);
    v8 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v20, this);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v8,
      (const char (*)[27])" get dungeon scene failed.");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v9 = 1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_chess_config_mgr;
    v11 = std::__shared_ptr_access<DungeonScene const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    DungeonId = DungeonScene::getDungeonId(v11);
    *(std::optional<bool> *)(v2 + 32) = ActivityChessExcelConfigMgr::isTowerBannedInDungeon(
                                          p_activity_chess_config_mgr,
                                          *(_DWORD *)(v2 + 48),
                                          DungeonId);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( !std::optional<bool>::has_value((const std::optional<bool> *const)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/tower_defense_play.cpp",
        "isTowerBanned",
        939);
      v13 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v20, this);
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" chess tower:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v15,
        (const char (*)[31])" ban dungeon config not found.");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v9 = 1;
    }
    else
    {
      v16 = std::optional<bool>::value((std::optional<bool> *const)(v2 + 32));
      v17 = (unsigned __int8 *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v16);
      }
      v9 = *v17;
    }
  }
  std::shared_ptr<DungeonScene const>::~shared_ptr((std::shared_ptr<const DungeonScene> *const)(v2 + 64));
  result = v9;
  if ( v21 == (char *)v2 )
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

// Line 946: range 00000000161B5992-00000000161B5B6D
void __cdecl TowerDefensePlay::notifyAllPlayerInfo(const TowerDefensePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 18 chess_play_ptr:947";
  *(_QWORD *)(v1 + 16) = TowerDefensePlay::notifyAllPlayerInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<ChessMultistagePlay,SceneMultistagePlay>((SceneMultistagePlay *)(v1 + 32));
  if ( std::operator!=<ChessMultistagePlay>(0LL, (const std::shared_ptr<ChessMultistagePlay> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    ChessMultistagePlay::notifyAllPlayerInfo(v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "notifyAllPlayerInfo",
      953);
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v6, this);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])" chess play nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  std::shared_ptr<ChessMultistagePlay>::~shared_ptr((std::shared_ptr<ChessMultistagePlay> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 957: range 00000000161B5DBA-00000000161B5E2B
void __cdecl TowerDefensePlay::fillActiveCardInfoList(
        const TowerDefensePlay *const this,
        google::protobuf::RepeatedPtrField<proto::ChessCardInfo> *card_list)
{
  std::function<ForeachPolicy(CardInfo&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(CardInfo &)>::function<TowerDefensePlay::fillActiveCardInfoList(google::protobuf::RepeatedPtrField<proto::ChessCardInfo> &)::{lambda(CardInfo &)#1},void,void>(
    &p_func,
    (TowerDefensePlay::fillActiveCardInfoList::<lambda(CardInfo&)>)__PAIR128__(
                                                                     (unsigned __int64)this,
                                                                     (unsigned __int64)card_list));
  TowerDefensePlay::foreachActiveCard(this, &p_func);
  std::function<ForeachPolicy ()(CardInfo &)>::~function(&p_func);
};

// Line 958: range 00000000161B5B6E-00000000161B5DB9
ForeachPolicy __cdecl TowerDefensePlay::fillActiveCardInfoList(google::protobuf::RepeatedPtrField<proto::ChessCardInfo> &)const::{lambda(CardInfo &)#1}::operator()(
        const TowerDefensePlay::fillActiveCardInfoList::<lambda(CardInfo&)> *const __closure,
        CardInfo *info)
{
  uint32_t pick_round; // esi
  const TowerDefensePlay *this; // rdx
  proto::ChessCardInfo *card_proto; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&info->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)info + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( info->card_type == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&info->pick_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&info->pick_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    pick_round = info->pick_round;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( pick_round != this->current_round_ )
      return 0;
  }
  else
  {
    if ( !CardInfo::isActive(info) )
      return 0;
    if ( *(_BYTE *)(((unsigned __int64)&info->is_show_on_pick >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)info + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_show_on_pick >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&info->is_show_on_pick);
    }
    if ( !info->is_show_on_pick )
      return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_proto = google::protobuf::RepeatedPtrField<proto::ChessCardInfo>::Add(__closure->__card_list);
  if ( *(_BYTE *)(((unsigned __int64)&info->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&info->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessCardInfo::set_card_id(card_proto, info->card_id);
  if ( *(_BYTE *)(((unsigned __int64)&info->stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&info->stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessCardInfo::set_effect_stack(card_proto, info->stack);
  return 0;
};

// Line 983: range 00000000161B603A-00000000161B627F
uint32_t __cdecl TowerDefensePlay::countUniqueActiveCardsById(
        const TowerDefensePlay *const this,
        const std::set<unsigned int> *exclude_type_set)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  uint32_t v6; // r15d
  uint32_t result; // eax
  TowerDefensePlay::countUniqueActiveCardsById::<lambda(CardInfo&)> v8; // [rsp-20h] [rbp-120h]
  std::function<ForeachPolicy(CardInfo&)> p_func; // [rsp+30h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 15 card_id_set:984";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)TowerDefensePlay::countUniqueActiveCardsById;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set(v2 + 1);
  v8.__this = this;
  v8.__exclude_type_set = exclude_type_set;
  v8.__card_id_set = v2 + 1;
  std::function<ForeachPolicy ()(CardInfo &)>::function<TowerDefensePlay::countUniqueActiveCardsById(std::set<unsigned int> const&)::{lambda(CardInfo &)#1},void,void>(
    &p_func,
    v8);
  TowerDefensePlay::foreachActiveCard(this, &p_func);
  std::function<ForeachPolicy ()(CardInfo &)>::~function(&p_func);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_play.cpp",
    "countUniqueActiveCardsById",
    1009);
  v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(
         (common::milog::MiLogStream *const)&p_func,
         this);
  common::milog::MiLogStream::operator<<<unsigned int>(v5, v2 + 1);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  v6 = std::set<unsigned int>::size(v2 + 1);
  std::set<unsigned int>::~set(v2 + 1);
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 985: range 00000000161B5E2C-00000000161B6039
ForeachPolicy __cdecl TowerDefensePlay::countUniqueActiveCardsById(std::set<unsigned int> const&)const::{lambda(CardInfo &)#1}::operator()(
        const TowerDefensePlay::countUniqueActiveCardsById::<lambda(CardInfo&)> *const __closure,
        CardInfo *info)
{
  uint32_t pick_round; // esi
  const TowerDefensePlay *this; // rdx
  uint32_t *p_card_type; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&info->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)info + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( info->card_type == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&info->pick_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&info->pick_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    pick_round = info->pick_round;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( pick_round != this->current_round_ )
      return 0;
  }
  else
  {
    if ( !CardInfo::isActive(info) )
      return 0;
    if ( *(_BYTE *)(((unsigned __int64)&info->is_show_on_pick >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)info + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_show_on_pick >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&info->is_show_on_pick);
    }
    if ( !info->is_show_on_pick )
      return 0;
  }
  p_card_type = &info->card_type;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__exclude_type_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         __closure->__exclude_type_set,
         p_card_type) )
  {
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::set<unsigned int>::insert(__closure->__card_id_set, &info->card_id);
  return 0;
};

// Line 1014: range 00000000161B6280-00000000161B643C
void __cdecl TowerDefensePlay::broadcastSelectedCards(TowerDefensePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ChessMultistagePlay *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 chess_play_ptr:1015";
  *(_QWORD *)(v1 + 16) = TowerDefensePlay::broadcastSelectedCards;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<ChessMultistagePlay,SceneMultistagePlay>((SceneMultistagePlay *)(v1 + 32));
  if ( std::operator!=<ChessMultistagePlay>(0LL, (const std::shared_ptr<ChessMultistagePlay> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    ChessMultistagePlay::broadcastSelectedCards(v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "broadcastSelectedCards",
      1022);
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v6, this);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])" chess play nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  std::shared_ptr<ChessMultistagePlay>::~shared_ptr((std::shared_ptr<ChessMultistagePlay> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1027: range 00000000161B643E-00000000161B6518
uint32_t __cdecl TowerDefensePlay::getTotalObtainedBuildingPoints(const TowerDefensePlay *const this)
{
  uint32_t points; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,TowerDefensePlay::PlayerInfo> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *uid; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *player_info; // [rsp+48h] [rbp-8h]

  points = 0;
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v6);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&player_info->total_obtained_points >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&player_info->total_obtained_points >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    points += player_info->total_obtained_points;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator++(&__for_begin);
  }
  return points;
};

// Line 1037: range 00000000161B651A-00000000161B6606
void __cdecl TowerDefensePlay::addAllBuildingPoints(TowerDefensePlay *const this, uint32_t add_value)
{
  __m128i v2; // xmm0
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,TowerDefensePlay::PlayerInfo> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *uid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *_; // [rsp+38h] [rbp-8h]

  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v6);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      *(double *)v2.m128i_i64 = __asan_report_load4();
    }
    TowerDefensePlay::addBuildingPoints(this, *uid, add_value, 0, v2);
    std::_Rb_tree_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator++(&__for_begin);
  }
};

// Line 1045: range 00000000161B6608-00000000161B6867
uint32_t __cdecl TowerDefensePlay::getActivePlayerNum(const TowerDefensePlay *const this)
{
  SceneMultistagePlay *scene_multistage_play; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v3; // rax
  bool v4; // bl
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint32_t count; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  Scene *scene; // [rsp+28h] [rbp-68h]
  const std::map<unsigned int,TowerDefensePlay::PlayerInfo> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> *v14; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *uid; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *_; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Player> __a; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-30h] BYREF

  count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_multistage_play = this->scene_multistage_play_;
  p_vptr_DescribalBase = &scene_multistage_play->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene_multistage_play >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v3 = *p_vptr_DescribalBase + 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  scene = (Scene *)(*(__int64 (__fastcall **)(SceneMultistagePlay *))v3)(scene_multistage_play);
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v14);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v14);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)&__a, (uint32_t)scene);
    v4 = std::operator==<Player>(0LL, &__a);
    std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "getActivePlayerNum",
        1052);
      v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v18, this);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, uid);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" not in this scene.");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      ++count;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator++(&__for_begin);
  }
  return count;
};

// Line 1061: range 00000000161B6868-00000000161B7128
__int64 __fastcall TowerDefensePlay::checkBuildTower(
        const TowerDefensePlay *const this,
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
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerGmComp *GmComp; // rax
  const TowerDefensePlay *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 (__fastcall *v19)(const TowerDefensePlay *, _QWORD); // r8
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const TowerDefensePlay *v28; // rdx
  unsigned __int64 v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  PlayerGmComp *v38; // rax
  uint32_t Uid; // eax
  uint32_t v40; // r14d
  uint32_t v41; // eax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  unsigned int retcode; // [rsp+24h] [rbp-ECh]
  const data::ActivityChessGearExcelConfig *gear_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v51; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v52; // [rsp+40h] [rbp-D0h] BYREF
  char v53[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 built_num:1078 64 4 15 build_cost:1096 80 4 18 current_point:1105 96 4 13 tower_id:1060";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::checkBuildTower;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 96) = tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v51);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
  gear_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_chess_config_mgr,
                      *(_DWORD *)(v3 + 96));
  std::shared_ptr<Config>::~shared_ptr(&v51);
  if ( !gear_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkBuildTower",
      1065);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v52, this);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           v7,
           (const char (*)[33])" config not found for tower id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 96));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", player: ");
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v52);
    result = 5LL;
    goto LABEL_32;
  }
  if ( (unsigned __int8)TowerDefensePlay::isTowerBanned(this, *(_DWORD *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkBuildTower",
      1071);
    v12 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v52, this);
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" tower id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 96));
    v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v14, (const char (*)[21])off_25B84C80);
    operator<<(v15, player);
    common::milog::MiLogStream::~MiLogStream(&v52);
    result = 5LL;
    goto LABEL_32;
  }
  GmComp = Player::getGmComp(player);
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 5u) )
    goto LABEL_26;
  v17 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v18 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    v18 = __asan_report_load8();
  v19 = *(__int64 (__fastcall **)(const TowerDefensePlay *, _QWORD))v18;
  if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gear_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config_ptr->gadget_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 48) = v19(v17, gear_config_ptr->gadget_id);
  if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->build_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gear_config_ptr->build_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( gear_config_ptr->build_limit && gear_config_ptr->build_limit <= *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkBuildTower",
      1081);
    v20 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v52, this);
    v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" tower id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 96));
    v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])", gadget num:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])" exceeds limit:");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &gear_config_ptr->build_limit);
    v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])", player: ");
    operator<<(v27, player);
    common::milog::MiLogStream::~MiLogStream(&v52);
    result = 9265LL;
    goto LABEL_32;
  }
  v28 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v29 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    v29 = __asan_report_load8();
  *(_DWORD *)(v3 + 64) = (*(__int64 (__fastcall **)(const TowerDefensePlay *))v29)(v28);
  *(_DWORD *)(v3 + 80) = TowerDefensePlay::getMaxTowerNum(this);
  if ( *(_DWORD *)(v3 + 64) < *(_DWORD *)(v3 + 80) )
  {
LABEL_26:
    *(_DWORD *)(v3 + 64) = 0;
    retcode = TowerDefensePlay::getTowerCost(this, *(_DWORD *)(v3 + 96), v3 + 64);
    if ( retcode )
    {
      result = retcode;
    }
    else
    {
      v38 = Player::getGmComp(player);
      if ( PlayerGmComp::getGmSetValue<bool>(v38, 7u)
        || (Uid = Player::getUid(player),
            *(_DWORD *)(v3 + 80) = TowerDefensePlay::getBuildingPoints(this, Uid),
            v40 = *(_DWORD *)(v3 + 64),
            v41 = Player::getUid(player),
            !(unsigned int)TowerDefensePlay::checkSubBuildingPoints(this, v41, v40)) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/play/tower_defense_play.cpp",
          "checkBuildTower",
          1108);
        v42 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v52, this);
        v43 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v42,
                (const char (*)[18])" current points: ");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v43,
                (const unsigned int *)(v3 + 80));
        v45 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v44, (const char (*)[14])". cost need: ");
        v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v45,
                (const unsigned int *)(v3 + 64));
        v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v46, (const char (*)[11])", player: ");
        operator<<(v47, player);
        common::milog::MiLogStream::~MiLogStream(&v52);
        result = 9254LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkBuildTower",
      1090);
    v30 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v52, this);
    v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" tower id:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 96));
    v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])", gear num:");
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 64));
    v35 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v34,
            (const char (*)[22])" exceeds total limit:");
    v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 80));
    v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])", player: ");
    operator<<(v37, player);
    common::milog::MiLogStream::~MiLogStream(&v52);
    result = 9264LL;
  }
LABEL_32:
  if ( v53 == (char *)v3 )
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

// Line 1118: range 00000000161B712A-00000000161B761C
__int64 __fastcall TowerDefensePlay::trySubTowerBuildPoints(
        TowerDefensePlay *const this,
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
  uint32_t Uid; // eax
  PlayerGmComp *GmComp; // rax
  uint32_t v14; // r14d
  uint32_t v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t v20; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned int retcode; // [rsp+24h] [rbp-ECh]
  const data::ActivityChessGearExcelConfig *gear_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 15 build_cost:1126 64 4 18 current_point:1133 80 4 14 new_point:1143 96 4 13 tower_id:1117";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::trySubTowerBuildPoints;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 96) = tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  gear_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_chess_config_mgr,
                      *(_DWORD *)(v3 + 96));
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( gear_config_ptr )
  {
    *(_DWORD *)(v3 + 48) = 0;
    retcode = TowerDefensePlay::getTowerCost(this, *(_DWORD *)(v3 + 96), v3 + 48);
    if ( retcode )
    {
      result = retcode;
    }
    else
    {
      Uid = Player::getUid(player);
      *(_DWORD *)(v3 + 64) = TowerDefensePlay::getBuildingPoints(this, Uid);
      GmComp = Player::getGmComp(player);
      if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 7u)
        || (v14 = *(_DWORD *)(v3 + 48),
            v15 = Player::getUid(player),
            !(unsigned int)TowerDefensePlay::subBuildingPoints(this, v15, v14)) )
      {
        v20 = Player::getUid(player);
        *(_DWORD *)(v3 + 80) = TowerDefensePlay::getBuildingPoints(this, v20);
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/play/tower_defense_play.cpp",
          "trySubTowerBuildPoints",
          1144);
        v21 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v31, this);
        v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v21,
                (const char (*)[19])" building points: ");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 64));
        v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" ==> ");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v3 + 80));
        v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" player: ");
        operator<<(v26, player);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/play/tower_defense_play.cpp",
          "trySubTowerBuildPoints",
          1138);
        v16 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v31, this);
        v17 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                v16,
                (const char (*)[37])" subBuildingPoints failed. gadget_id");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &gear_config_ptr->gadget_id);
        v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])". player: ");
        operator<<(v19, player);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "trySubTowerBuildPoints",
      1122);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v31, this);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           v7,
           (const char (*)[33])" config not found for tower id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 96));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", player: ");
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 5LL;
  }
  if ( v32 == (char *)v3 )
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

// Line 1149: range 00000000161B761E-00000000161B7BDC
__int64 __fastcall TowerDefensePlay::fillTowerGadgetParam(
        const TowerDefensePlay *const this,
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
  const TowerDefensePlay *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(const TowerDefensePlay *, _QWORD); // r8
  const float *v15; // rdx
  int v16; // xmm0_4
  float __a; // [rsp+2Ch] [rbp-D4h] BYREF
  std::map<std::string,float>::iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::map<std::string,float>::iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const data::ActivityChessGearExcelConfig *gear_config_ptr; // [rsp+40h] [rbp-C0h]
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
  *(_QWORD *)(v3 + 8) = "1 32 4 13 tower_id:1148";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::fillTowerGadgetParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  gear_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_chess_config_mgr,
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
      && (char)((((_BYTE)gear_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_config_ptr->init_level >> 3)
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
    v14 = *(__int64 (__fastcall **)(const TowerDefensePlay *, _QWORD))v13;
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
      "./src/play/tower_defense_play.cpp",
      "fillTowerGadgetParam",
      1153);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           v7,
           (const char (*)[33])" config not found for tower id: ");
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

// Line 1174: range 00000000161B7BDE-00000000161B7F43
__int64 __fastcall TowerDefensePlay::checkDemolishTower(
        const TowerDefensePlay *const this,
        Player *player,
        uint32_t tower_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int retcode; // [rsp+24h] [rbp-BCh]
  const data::ActivityChessGearExcelConfig *gear_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 refund:1182 64 4 13 tower_id:1173";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::checkDemolishTower;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  gear_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_chess_config_mgr,
                      *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( gear_config_ptr )
  {
    *(_DWORD *)(v3 + 48) = 0;
    retcode = TowerDefensePlay::getTowerRefund(this, *(_DWORD *)(v3 + 64), v3 + 48);
    if ( retcode )
    {
      result = retcode;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "checkDemolishTower",
        1189);
      v12 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v22, this);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" tower: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" refund:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" player: ");
      operator<<(v17, player);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkDemolishTower",
      1178);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v22, this);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           v7,
           (const char (*)[33])" config not found for tower id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", player: ");
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 5LL;
  }
  if ( v23 == (char *)v3 )
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

// Line 1194: range 00000000161B7F44-00000000161B82F9
__int64 __fastcall TowerDefensePlay::tryAddTowerRefundPoints(
        TowerDefensePlay *const this,
        Player *player,
        uint32_t tower_id,
        __m128i a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  uint32_t Uid; // eax
  uint32_t v9; // r14d
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned int retcode; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 11 refund:1195 64 4 18 current_point:1203 80 4 14 new_point:1209 96 4 13 tower_id:1193";
  *(_QWORD *)(v4 + 16) = TowerDefensePlay::tryAddTowerRefundPoints;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 96) = tower_id;
  *(_DWORD *)(v4 + 48) = 0;
  retcode = TowerDefensePlay::getTowerRefund(this, *(_DWORD *)(v4 + 96), v4 + 48);
  if ( retcode )
  {
    result = retcode;
  }
  else
  {
    Uid = Player::getUid(player);
    *(_DWORD *)(v4 + 64) = TowerDefensePlay::getBuildingPoints(this, Uid);
    v9 = *(_DWORD *)(v4 + 48);
    v10 = Player::getUid(player);
    if ( (unsigned int)TowerDefensePlay::addBuildingPoints(this, v10, v9, 1, a4) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "tryAddTowerRefundPoints",
        1206);
      v11 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" refund:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              v13,
              (const char (*)[44])", addBuildingPoints failed. demolish tower:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 96));
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])", player: ");
      operator<<(v16, player);
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v17 = Player::getUid(player);
      *(_DWORD *)(v4 + 80) = TowerDefensePlay::getBuildingPoints(this, v17);
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "tryAddTowerRefundPoints",
        1210);
      v18 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v28, this);
      v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" tower:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 96));
      v21 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v20,
              (const char (*)[23])" refund point change: ");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 64));
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" ==> ");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 80));
      v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" player: ");
      operator<<(v25, player);
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 0LL;
    }
  }
  if ( v29 == (char *)v4 )
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

// Line 1215: range 00000000161B82FA-00000000161B8DE0
__int64 __fastcall TowerDefensePlay::checkRebuildTower(
        const TowerDefensePlay *const this,
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
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  PlayerGmComp *GmComp; // rax
  uint32_t gadget_id; // ecx
  const TowerDefensePlay *v24; // rdx
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  const TowerDefensePlay *v34; // rdx
  unsigned __int64 v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  uint32_t Uid; // eax
  PlayerGmComp *v45; // rax
  uint32_t v46; // eax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  unsigned int retcode; // [rsp+28h] [rbp-E8h]
  unsigned int retcodea; // [rsp+28h] [rbp-E8h]
  int net_cost; // [rsp+2Ch] [rbp-E4h]
  const data::ActivityChessGearExcelConfig *new_gear_config_ptr; // [rsp+30h] [rbp-E0h]
  const data::ActivityChessGearExcelConfig *curr_gear_config_ptr; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v62; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v63; // [rsp+50h] [rbp-C0h] BYREF
  char v64[160]; // [rsp+70h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 15 build_cost:1261 48 4 17 build_refund:1268 64 4 18 current_point:1275 80 4 17 new_tower"
                        "_id:1214 96 4 17 old_tower_id:1214";
  *(_QWORD *)(v4 + 16) = TowerDefensePlay::checkRebuildTower;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 80) = new_tower_id;
  *(_DWORD *)(v4 + 96) = old_tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v62);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62);
  new_gear_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                          &v7->design_config.txt_config_mgr.activity_chess_config_mgr,
                          *(_DWORD *)(v4 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v62);
  if ( !new_gear_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkRebuildTower",
      1219);
    v8 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v63, this);
    v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           v8,
           (const char (*)[37])" config not found for new tower id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])", player: ");
    operator<<(v11, player);
    common::milog::MiLogStream::~MiLogStream(&v63);
    result = 5LL;
    goto LABEL_40;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v62);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62);
  curr_gear_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                           &v13->design_config.txt_config_mgr.activity_chess_config_mgr,
                           *(_DWORD *)(v4 + 96));
  std::shared_ptr<Config>::~shared_ptr(&v62);
  if ( !curr_gear_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkRebuildTower",
      1226);
    v14 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v63, this);
    v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            v14,
            (const char (*)[37])" config not found for new tower id: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 96));
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])", player: ");
    operator<<(v17, player);
    common::milog::MiLogStream::~MiLogStream(&v63);
    result = 5LL;
    goto LABEL_40;
  }
  if ( (unsigned __int8)TowerDefensePlay::isTowerBanned(this, *(_DWORD *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkRebuildTower",
      1232);
    v18 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v63, this);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])" new tower id: ");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 80));
    v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v20, (const char (*)[21])off_25B85500);
    operator<<(v21, player);
    common::milog::MiLogStream::~MiLogStream(&v63);
    result = 5LL;
    goto LABEL_40;
  }
  GmComp = Player::getGmComp(player);
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 5u) )
    goto LABEL_31;
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
    v24 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v25 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      v25 = __asan_report_load8();
    *(_DWORD *)(v4 + 64) = (*(__int64 (__fastcall **)(const TowerDefensePlay *, _QWORD))v25)(
                             v24,
                             new_gear_config_ptr->gadget_id);
    if ( *(_BYTE *)(((unsigned __int64)&new_gear_config_ptr->build_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&new_gear_config_ptr->build_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( new_gear_config_ptr->build_limit && new_gear_config_ptr->build_limit <= *(_DWORD *)(v4 + 64) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_play.cpp",
        "checkRebuildTower",
        1244);
      v26 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v63, this);
      v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])" new tower id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 80));
      v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v28, (const char (*)[13])", built num:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 64));
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v30, (const char (*)[16])" exceeds limit:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v31,
              &new_gear_config_ptr->build_limit);
      v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])", player: ");
      operator<<(v33, player);
      common::milog::MiLogStream::~MiLogStream(&v63);
      result = 9265LL;
      goto LABEL_40;
    }
  }
  v34 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v35 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
    v35 = __asan_report_load8();
  *(_DWORD *)(v4 + 48) = (*(__int64 (__fastcall **)(const TowerDefensePlay *))v35)(v34);
  *(_DWORD *)(v4 + 64) = TowerDefensePlay::getMaxTowerNum(this);
  if ( *(_DWORD *)(v4 + 48) <= *(_DWORD *)(v4 + 64) )
  {
LABEL_31:
    *(_DWORD *)(v4 + 32) = 0;
    retcode = TowerDefensePlay::getTowerCost(this, *(_DWORD *)(v4 + 80), v4 + 32);
    if ( retcode )
    {
      result = retcode;
    }
    else
    {
      *(_DWORD *)(v4 + 48) = 0;
      retcodea = TowerDefensePlay::getTowerRefund(this, *(_DWORD *)(v4 + 96), v4 + 48);
      if ( retcodea )
      {
        result = retcodea;
      }
      else
      {
        Uid = Player::getUid(player);
        *(_DWORD *)(v4 + 64) = TowerDefensePlay::getBuildingPoints(this, Uid);
        if ( *(_DWORD *)(v4 + 48) >= *(_DWORD *)(v4 + 32)
          || (v45 = Player::getGmComp(player), PlayerGmComp::getGmSetValue<bool>(v45, 7u))
          || (net_cost = *(_DWORD *)(v4 + 32) - *(_DWORD *)(v4 + 48),
              v46 = Player::getUid(player),
              !(unsigned int)TowerDefensePlay::checkSubBuildingPoints(this, v46, net_cost)) )
        {
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/play/tower_defense_play.cpp",
            "checkRebuildTower",
            1283);
          v47 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v63, this);
          v48 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  v47,
                  (const char (*)[36])" need more points. current points: ");
          v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v48,
                  (const unsigned int *)(v4 + 64));
          v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v49, (const char (*)[11])", refund: ");
          v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v50,
                  (const unsigned int *)(v4 + 48));
          v52 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v51, (const char (*)[9])", need: ");
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v52,
                  (const unsigned int *)(v4 + 32));
          v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v53, (const char (*)[11])", player: ");
          operator<<(v54, player);
          common::milog::MiLogStream::~MiLogStream(&v63);
          result = 9254LL;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "checkRebuildTower",
      1255);
    v36 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v63, this);
    v37 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v36, (const char (*)[15])" new tower id:");
    v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v4 + 80));
    v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v38, (const char (*)[13])", tower num:");
    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 48));
    v41 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v40,
            (const char (*)[22])" exceeds total limit:");
    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v4 + 64));
    v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])", player: ");
    operator<<(v43, player);
    common::milog::MiLogStream::~MiLogStream(&v63);
    result = 9264LL;
  }
LABEL_40:
  if ( v64 == (char *)v4 )
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

// Line 1294: range 00000000161B8DE2-00000000161B9048
__int64 __fastcall TowerDefensePlay::checkRotateTower(
        const TowerDefensePlay *const this,
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
  const data::ActivityChessGearExcelConfig *gear_config_ptr; // [rsp+28h] [rbp-98h]
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
  *(_QWORD *)(v3 + 8) = "1 32 4 13 tower_id:1293";
  *(_QWORD *)(v3 + 16) = TowerDefensePlay::checkRotateTower;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = tower_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  gear_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_chess_config_mgr,
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
      "./src/play/tower_defense_play.cpp",
      "checkRotateTower",
      1298);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v15, this);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           v7,
           (const char (*)[33])" config not found for tower id: ");
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

// Line 1312: range 00000000161B904A-00000000161B9C52
int32_t __cdecl TowerDefensePlay::fillGlobalBuildingInfoNotify(
        const TowerDefensePlay *const this,
        proto::GlobalBuildingInfoNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  const TowerDefensePlay *v32; // rdx
  unsigned __int64 v33; // rax
  google::protobuf::uint32 v34; // edx
  uint32_t MaxTowerNum; // edx
  int32_t result; // eax
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-218h] BYREF
  std::map<unsigned int,TowerDefensePlay::PlayerInfo>::const_iterator __for_end; // [rsp+20h] [rbp-210h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-208h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-200h] BYREF
  const std::map<unsigned int,TowerDefensePlay::PlayerInfo> *__for_range; // [rsp+38h] [rbp-1F8h]
  const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> *v42; // [rsp+40h] [rbp-1F0h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *uid; // [rsp+48h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *_; // [rsp+50h] [rbp-1E0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-1D8h]
  const data::ActivityChessGearExcelConfig *tower_config_ptr; // [rsp+60h] [rbp-1D0h]
  proto::BuildingInfo *gear_info; // [rsp+68h] [rbp-1C8h]
  std::shared_ptr<Config> v48; // [rsp+70h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v49; // [rsp+80h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v50; // [rsp+A0h] [rbp-190h] BYREF
  common::milog::MiLogStream v51; // [rsp+C0h] [rbp-170h] BYREF
  common::milog::MiLogStream v52; // [rsp+E0h] [rbp-150h] BYREF
  common::milog::MiLogStream v53; // [rsp+100h] [rbp-130h] BYREF
  char v54[272]; // [rsp+120h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 16 chess_level:1330 48 4 13 tower_id:1331 64 4 9 cost:1349 80 4 11 refund:1350 96 16 19 c"
                        "hess_play_ptr:1313 128 16 22 dungeon_scene_ptr:1320 160 24 17 tower_id_vec:1327";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::fillGlobalBuildingInfoNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_multistage_play_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<ChessMultistagePlay,SceneMultistagePlay>((SceneMultistagePlay *)(v2 + 96));
  if ( std::operator==<ChessMultistagePlay>(0LL, (const std::shared_ptr<ChessMultistagePlay> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_play.cpp",
      "fillGlobalBuildingInfoNotify",
      1316);
    v5 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v53, this);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])" get chess multistage nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v53);
    v6 = -1;
  }
  else
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v8)(v7);
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 128));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/play/tower_defense_play.cpp",
        "fillGlobalBuildingInfoNotify",
        1323);
      v9 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v53, this);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v9,
        (const char (*)[27])" get dungeon scene failed.");
      common::milog::MiLogStream::~MiLogStream(&v53);
      v6 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v48);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
      common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>>(
        (std::vector<unsigned int> *)(v2 + 160),
        &v10->design_config.txt_config_mgr.activity_chess_config_mgr.activity_chess_gear_excel_config_map);
      std::shared_ptr<Config>::~shared_ptr(&v48);
      __for_range = &this->player_info_map_;
      __for_begin._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::begin(&this->player_info_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,TowerDefensePlay::PlayerInfo>::end(&this->player_info_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v42 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator*(&__for_begin);
        uid = std::get<0ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v42);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,TowerDefensePlay::PlayerInfo> >::type *)std::get<1ul,unsigned int const,TowerDefensePlay::PlayerInfo>(v42);
        v11 = std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = ChessMultistagePlay::getPlayerChessLevel(v11, *uid);
        __for_range_0 = (std::vector<unsigned int> *)(v2 + 160);
        __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 160))._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = *v12;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v48);
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
          tower_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                               &v13->design_config.txt_config_mgr.activity_chess_config_mgr,
                               *(_DWORD *)(v2 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v48);
          if ( tower_config_ptr )
          {
            if ( (unsigned __int8)TowerDefensePlay::isTowerBanned(this, *(_DWORD *)(v2 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/play/tower_defense_play.cpp",
                "fillGlobalBuildingInfoNotify",
                1341);
              v17 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v50, this);
              v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" tower:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v2 + 48));
              v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v19,
                      (const char (*)[12])" banned in:");
              v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v20, v21);
              common::milog::MiLogStream::~MiLogStream(&v50);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&tower_config_ptr->need_chess_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&tower_config_ptr->need_chess_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( tower_config_ptr->need_chess_level <= *(_DWORD *)(v2 + 32) )
              {
                *(_DWORD *)(v2 + 64) = 0;
                *(_DWORD *)(v2 + 80) = 0;
                if ( (unsigned int)TowerDefensePlay::getTowerCost(this, *(_DWORD *)(v2 + 48), v2 + 64) )
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/play/tower_defense_play.cpp",
                    "fillGlobalBuildingInfoNotify",
                    1353);
                  v28 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v52, this);
                  v29 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          v28,
                          (const char (*)[28])" get cost failed for tower:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v52);
                }
                if ( (unsigned int)TowerDefensePlay::getTowerRefund(this, *(_DWORD *)(v2 + 48), v2 + 80) )
                {
                  common::milog::MiLogStream::create(
                    &v53,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/play/tower_defense_play.cpp",
                    "fillGlobalBuildingInfoNotify",
                    1357);
                  v30 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v53, this);
                  v31 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          v30,
                          (const char (*)[30])" get refund failed for tower:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v53);
                }
                gear_info = proto::GlobalBuildingInfoNotify::add_building_list(notify);
                proto::BuildingInfo::set_building_id(gear_info, *(_DWORD *)(v2 + 48));
                proto::BuildingInfo::set_cost(gear_info, *(_DWORD *)(v2 + 64));
                proto::BuildingInfo::set_refund(gear_info, *(_DWORD *)(v2 + 80));
                if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::BuildingInfo::set_owner_uid(gear_info, *uid);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/play/tower_defense_play.cpp",
                  "fillGlobalBuildingInfoNotify",
                  1346);
                v22 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v51, this);
                v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" tower:");
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v23,
                        (const unsigned int *)(v2 + 48));
                v25 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v24,
                        (const char (*)[24])" locked by chess level:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v2 + 32));
                v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, uid);
                common::milog::MiLogStream::~MiLogStream(&v51);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/play/tower_defense_play.cpp",
              "fillGlobalBuildingInfoNotify",
              1336);
            v14 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v49, this);
            v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v14,
                    (const char (*)[14])" chess tower:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v16,
              (const char (*)[19])" config not found.");
            common::milog::MiLogStream::~MiLogStream(&v49);
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerDefensePlay::PlayerInfo>>::operator++(&__for_begin);
      }
      v32 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v33 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
        v33 = __asan_report_load8();
      v34 = (*(__int64 (__fastcall **)(const TowerDefensePlay *))v33)(v32);
      proto::GlobalBuildingInfoNotify::set_current_num(notify, v34);
      MaxTowerNum = TowerDefensePlay::getMaxTowerNum(this);
      proto::GlobalBuildingInfoNotify::set_max_num(notify, MaxTowerNum);
      v6 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 128));
  }
  std::shared_ptr<ChessMultistagePlay>::~shared_ptr((std::shared_ptr<ChessMultistagePlay> *const)(v2 + 96));
  result = v6;
  if ( v54 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 1376: range 00000000161B9C54-00000000161B9E4E
__int64 __fastcall TowerDefensePlay::isValidTowerGearId(const TowerDefensePlay *const this, uint32_t gear_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const data::ActivityChessGearExcelConfig *tower_config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 gear_id:1375";
  *(_QWORD *)(v2 + 16) = TowerDefensePlay::isValidTowerGearId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gear_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  tower_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_chess_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( tower_config_ptr )
  {
    result = 1LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_play.cpp",
      "isValidTowerGearId",
      1382);
    v7 = common::milog::MiLogStream::operator<<<TowerDefensePlay,(TowerDefensePlay*)0>(&v12, this);
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" tower gear:");
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
