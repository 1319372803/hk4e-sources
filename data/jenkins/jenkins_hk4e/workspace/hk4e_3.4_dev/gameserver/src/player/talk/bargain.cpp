// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/talk/bargain.cpp

// Line 20: range 0000000016D2064C-0000000016D2089B
// local variable allocation has failed, the output may be wrong!
void __cdecl Bargain::Bargain(Bargain *const this, uint32_t bargain_id, PlayerPtr *p_player_ptr)
{
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl

  std::enable_shared_from_this<Bargain>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bargain_id_, *(_QWORD *)&bargain_id, (_BYTE)this + 16);
  }
  this->bargain_id_ = 0;
  v3 = (((_BYTE)this + 20) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->cur_mood_, v3, v4);
  this->cur_mood_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->low_limit_price_, v3, (_BYTE)this + 24);
  }
  this->low_limit_price_ = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->belonged_quest_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->belonged_quest_id_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->belonged_quest_id_, v5, v6);
  this->belonged_quest_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expected_price_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expected_price_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expected_price_, v5, (_BYTE)this + 32);
  }
  this->expected_price_ = 0;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3)
                                                        + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->last_bargain_result_, v7, v8);
  this->last_bargain_result_ = BARGAIN_COMPLETE_SUCC;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_state_, v7, (_BYTE)this + 40);
  }
  this->cur_state_ = BARGAIN_UNSTART;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bargain_id_, v7, (_BYTE)this + 16);
  }
  this->bargain_id_ = bargain_id;
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
};

// Line 27: range 0000000016D2089C-0000000016D20EFE
int32_t __cdecl Bargain::activate(Bargain *const this, uint32_t quest_id)
{
  bool v2; // dl
  BargainExcelConfigMgr *p_bargain_excel_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v6; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  unsigned int *v8; // rdx
  unsigned int v9; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v10; // rax
  unsigned int *v11; // rdx
  __int64 v12; // rsi
  uint32_t v13; // edx
  char v14; // al
  uint32_t expected_price; // ecx
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  unsigned int *v19; // rdx
  unsigned int v20; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v21; // rax
  unsigned int *v22; // rdx
  int32_t v23; // edi
  __int64 v24; // rsi
  bool v25; // dl
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  unsigned __int64 val; // [rsp+10h] [rbp-50h] BYREF
  const data::BargainExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v34; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v35; // [rsp+30h] [rbp-30h] BYREF

  v2 = *(_BYTE *)(((unsigned __int64)&this->belonged_quest_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->belonged_quest_id_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->belonged_quest_id_, (((_BYTE)this + 28) & 7u) + 3, v2);
  this->belonged_quest_id_ = quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  p_bargain_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.bargain_excel_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->bargain_id_);
  }
  config_ptr = data::BargainExcelConfigMgrBase::findBargainExcelConfig(p_bargain_excel_config_mgr, this->bargain_id_);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( config_ptr )
  {
    if ( std::vector<unsigned int>::size(&config_ptr->expected_value) == 2 )
    {
      v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &config_ptr->expected_value,
                                                                                                 1uLL);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &config_ptr->expected_value,
                                                                                                  0LL);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = v9;
      v13 = common::tools::RandomUtils::rand<unsigned int>(*v11, v9);
      v14 = *(_BYTE *)(((unsigned __int64)&this->expected_price_ >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v12) = v14 != 0;
        __asan_report_store4(&this->expected_price_, v12, v13);
      }
      this->expected_price_ = v13;
      expected_price = this->expected_price_;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->space >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->space >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->space);
      }
      v16 = expected_price - config_ptr->space;
      if ( *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->low_limit_price_, v16, (_BYTE)this + 24);
      }
      this->low_limit_price_ = v16;
      if ( std::vector<unsigned int>::size(&config_ptr->random_mood) == 2 )
      {
        v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &config_ptr->random_mood,
                                                                                                    1uLL);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v20 = *v19;
        v21 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &config_ptr->random_mood,
                                                                                                    0LL);
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        v23 = common::tools::RandomUtils::rand<unsigned int>(*v22, v20);
        v24 = (((_BYTE)this + 20) & 7u) + 3;
        v25 = *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000);
        if ( v25 )
        {
          v23 = (_DWORD)this + 20;
          __asan_report_store4(&this->cur_mood_, v24, v25);
        }
        this->cur_mood_ = v23;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->cur_state_, v24, (_BYTE)this + 40);
        }
        this->cur_state_ = BARGAIN_START;
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/talk/bargain.cpp",
          "activate",
          54);
        v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v35,
                (const char (*)[31])"[Bargain]  bargain activited: ");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->bargain_id_);
        v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])", cur_mood: ");
        v29 = common::milog::MiLogStream::operator<<<int,(int *)0>(v28, &this->cur_mood_);
        v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v29,
                (const char (*)[18])", execped_price: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->expected_price_);
        common::milog::MiLogStream::~MiLogStream(&v35);
        Bargain::notifyClientBargainStart(this);
        return 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/talk/bargain.cpp",
          "activate",
          47);
        v17 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v35,
                (const char (*)[48])"[Bargain] config random_mood size should be 2: ");
        val = std::vector<unsigned int>::size(&config_ptr->random_mood);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v35);
        return -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/talk/bargain.cpp",
        "activate",
        38);
      v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v35,
             (const char (*)[51])"[Bargain] config expected_value size should be 2: ");
      val = std::vector<unsigned int>::size(&config_ptr->expected_value);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v35);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/bargain.cpp",
      "activate",
      32);
    v4 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v35,
           (const char (*)[33])"[Bargain] bargain id not found: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->bargain_id_);
    common::milog::MiLogStream::~MiLogStream(&v35);
    return -1;
  }
};

// Line 60: range 0000000016D20F00-0000000016D21020
int32_t __cdecl Bargain::terminate(Bargain *const this)
{
  __int64 v1; // rsi
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_state_);
  }
  if ( this->cur_state_ == BARGAIN_START )
    Bargain::notifyClientBargainTerminate(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_state_, v1, (_BYTE)this + 40);
  }
  this->cur_state_ = BARGAIN_UNSTART;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/talk/bargain.cpp",
    "terminate",
    66);
  v2 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v4, (const char (*)[22])"[Bargain] terminate: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->bargain_id_);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 71: range 0000000016D21022-0000000016D21086
bool __cdecl Bargain::isFinish(Bargain *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_state_);
  }
  return this->cur_state_ == BARGAIN_SUCC || this->cur_state_ == BARGAIN_FAILED;
};

// Line 76: range 0000000016D21088-0000000016D21B3E
int32_t __cdecl Bargain::offerPrice(
        Bargain *const this,
        uint32_t price,
        proto::BargainResultType *result,
        uint32_t *result_param)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v6; // rax
  BargainExcelConfigMgr *p_bargain_excel_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  float v13; // xmm0_4
  bool v14; // dl
  bool v15; // dl
  bool v16; // dl
  int32_t cur_mood; // esi
  int32_t v18; // ecx
  bool v19; // dl
  bool v20; // dl
  uint32_t v21; // ecx
  float v22; // xmm1_4
  bool v23; // dl
  bool v24; // dl
  bool v25; // dl
  __int64 v26; // rsi
  bool v27; // dl
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  const data::BargainExcelConfig *config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v37; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_state_);
  }
  if ( this->cur_state_ )
  {
    if ( Bargain::isFinish(this) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/talk/bargain.cpp",
        "offerPrice",
        86);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v38,
             (const char (*)[29])"[Bargain] bargain finished: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->bargain_id_);
      common::milog::MiLogStream::~MiLogStream(&v38);
      return -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v37);
      p_bargain_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.bargain_excel_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->bargain_id_);
      }
      config_ptr = data::BargainExcelConfigMgrBase::findBargainExcelConfig(
                     p_bargain_excel_config_mgr,
                     this->bargain_id_);
      std::shared_ptr<Config>::~shared_ptr(&v37);
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->space >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->space >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->space);
        }
        if ( config_ptr->space )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->low_limit_price_);
          }
          if ( price < this->low_limit_price_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->cur_mood_);
            }
            cur_mood = this->cur_mood_;
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->single_fail_mood_deduction >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr->single_fail_mood_deduction >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config_ptr->single_fail_mood_deduction);
            }
            this->cur_mood_ = cur_mood - config_ptr->single_fail_mood_deduction;
            v18 = this->cur_mood_;
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->mood_low_limit >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->mood_low_limit >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->mood_low_limit);
            }
            if ( v18 < config_ptr->mood_low_limit )
            {
              v25 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
                 && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
              if ( v25 )
                __asan_report_store4(result, ((unsigned __int8)result & 7u) + 3, v25);
              *result = BARGAIN_COMPLETE_FAIL;
              v26 = (((_BYTE)this + 36) & 7u) + 3;
              v27 = *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3) + 0x7FFF8000) != 0
                 && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3)
                                                                     + 0x7FFF8000);
              if ( v27 )
                __asan_report_store4(&this->last_bargain_result_, v26, v27);
              this->last_bargain_result_ = BARGAIN_COMPLETE_FAIL;
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&this->cur_state_, v26, (_BYTE)this + 40);
              }
              this->cur_state_ = BARGAIN_FAILED;
            }
            else
            {
              v19 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
                 && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
              if ( v19 )
                __asan_report_store4(result, ((unsigned __int8)result & 7u) + 3, v19);
              *result = BARGAIN_SINGLE_FAIL;
              v20 = *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3) + 0x7FFF8000) != 0
                 && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3)
                                                                     + 0x7FFF8000);
              if ( v20 )
                __asan_report_store4(&this->last_bargain_result_, (((_BYTE)this + 36) & 7u) + 3, v20);
              this->last_bargain_result_ = BARGAIN_SINGLE_FAIL;
              v21 = price;
              if ( *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->low_limit_price_);
              }
              v22 = (float)(int)(v21 - this->low_limit_price_);
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->space >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config_ptr->space >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config_ptr->space);
              }
              if ( (float)(v22 / (float)(int)config_ptr->space) >= -0.30000001 )
              {
                v24 = *(_BYTE *)(((unsigned __int64)result_param >> 3) + 0x7FFF8000) != 0
                   && (char)(((unsigned __int8)result_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_param >> 3)
                                                                                  + 0x7FFF8000);
                if ( v24 )
                  __asan_report_store4(result_param, ((unsigned __int8)result_param & 7u) + 3, v24);
                *result_param = 1;
              }
              else
              {
                v23 = *(_BYTE *)(((unsigned __int64)result_param >> 3) + 0x7FFF8000) != 0
                   && (char)(((unsigned __int8)result_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_param >> 3)
                                                                                  + 0x7FFF8000);
                if ( v23 )
                  __asan_report_store4(result_param, ((unsigned __int8)result_param & 7u) + 3, v23);
                *result_param = 0;
              }
            }
          }
          else
          {
            v10 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
               && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
            if ( v10 )
              __asan_report_store4(result, ((unsigned __int8)result & 7u) + 3, v10);
            *result = BARGAIN_COMPLETE_SUCC;
            if ( *(_BYTE *)(((unsigned __int64)&this->expected_price_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->expected_price_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->expected_price_);
            }
            if ( price <= this->expected_price_ )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->low_limit_price_);
              }
              v13 = (float)(int)(price - this->low_limit_price_);
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->space >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config_ptr->space >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config_ptr->space);
              }
              if ( (float)(v13 / (float)(int)config_ptr->space) <= 0.30000001 )
              {
                v11 = ((unsigned __int8)result_param & 7u) + 3;
                v15 = *(_BYTE *)(((unsigned __int64)result_param >> 3) + 0x7FFF8000) != 0
                   && (char)(((unsigned __int8)result_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_param >> 3)
                                                                                  + 0x7FFF8000);
                if ( v15 )
                  __asan_report_store4(result_param, v11, v15);
                *result_param = 2;
              }
              else
              {
                v11 = ((unsigned __int8)result_param & 7u) + 3;
                v14 = *(_BYTE *)(((unsigned __int64)result_param >> 3) + 0x7FFF8000) != 0
                   && (char)(((unsigned __int8)result_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_param >> 3)
                                                                                  + 0x7FFF8000);
                if ( v14 )
                  __asan_report_store4(result_param, v11, v14);
                *result_param = 1;
              }
            }
            else
            {
              v11 = ((unsigned __int8)result_param & 7u) + 3;
              v12 = *(_BYTE *)(((unsigned __int64)result_param >> 3) + 0x7FFF8000) != 0
                 && (char)(((unsigned __int8)result_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_param >> 3)
                                                                                + 0x7FFF8000);
              if ( v12 )
                __asan_report_store4(result_param, v11, v12);
              *result_param = 0;
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->cur_state_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->cur_state_, v11, (_BYTE)this + 40);
            }
            this->cur_state_ = BARGAIN_SUCC;
            v16 = *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3) + 0x7FFF8000) != 0
               && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3)
                                                                   + 0x7FFF8000);
            if ( v16 )
              __asan_report_store4(&this->last_bargain_result_, (((_BYTE)this + 36) & 7u) + 3, v16);
            this->last_bargain_result_ = BARGAIN_COMPLETE_SUCC;
            Bargain::onBargainSucc(this, price);
          }
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/talk/bargain.cpp",
            "offerPrice",
            159);
          v28 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v38,
                  (const char (*)[29])"[Bargain] offerPrice succ.: ");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->bargain_id_);
          v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])" result: ");
          v31 = common::milog::MiLogStream::operator<<<proto::BargainResultType,(proto::BargainResultType*)0>(
                  v30,
                  result);
          v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v31,
                  (const char (*)[14])", cur_mood_: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v32, &this->cur_mood_);
          common::milog::MiLogStream::~MiLogStream(&v38);
          return 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/talk/bargain.cpp",
            "offerPrice",
            99);
          v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                 &v38,
                 (const char (*)[38])"[Bargain] bargain space cannot be 0: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->bargain_id_);
          common::milog::MiLogStream::~MiLogStream(&v38);
          return -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/talk/bargain.cpp",
          "offerPrice",
          93);
        v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v38,
               (const char (*)[33])"[Bargain] bargain id not found: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->bargain_id_);
        common::milog::MiLogStream::~MiLogStream(&v38);
        return -1;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/bargain.cpp",
      "offerPrice",
      80);
    v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v38,
           (const char (*)[30])"[Bargain] bargain not start: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->bargain_id_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    return -1;
  }
};

// Line 164: range 0000000016D21B40-0000000016D21C62
int32_t __cdecl Bargain::getBargainResult(Bargain *const this, proto::BargainResultType *result)
{
  __int64 v3; // rsi
  proto::BargainResultType last_bargain_result; // ecx
  char v5; // dl
  bool v6; // dl
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  if ( !Bargain::isFinish(this) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/bargain.cpp",
      "getBargainResult",
      167);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v8,
      (const char (*)[32])"[Bargain] bargain is not finish");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    v3 = (((_BYTE)this + 36) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_bargain_result_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_bargain_result_);
    }
    last_bargain_result = this->last_bargain_result_;
    v5 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
    LOBYTE(v3) = v5 != 0;
    v6 = v5 != 0 && (char)(((unsigned __int8)result & 7) + 3) >= v5;
    if ( v6 )
      __asan_report_store4(result, v3, v6);
    *result = last_bargain_result;
    return 0;
  }
};

// Line 176: range 0000000016D21C64-0000000016D21DBE
int32_t __cdecl Bargain::getBargainSnapshot(Bargain *const this, proto::BargainSnapshot *snapshot)
{
  if ( Bargain::isFinish(this) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mood_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_mood_);
  }
  proto::BargainSnapshot::set_cur_mood(snapshot, this->cur_mood_);
  if ( *(_BYTE *)(((unsigned __int64)&this->expected_price_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expected_price_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->expected_price_);
  }
  proto::BargainSnapshot::set_expected_price(snapshot, this->expected_price_);
  if ( *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->low_limit_price_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->low_limit_price_);
  }
  proto::BargainSnapshot::set_price_low_limit(snapshot, this->low_limit_price_);
  if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->bargain_id_);
  }
  proto::BargainSnapshot::set_bargain_id(snapshot, this->bargain_id_);
  return 0;
};

// Line 190: range 0000000016D21DC0-0000000016D2225C
int32_t __cdecl Bargain::onBargainSucc(Bargain *const this, uint32_t dealed_price)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  BargainExcelConfigMgr *p_bargain_excel_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  Player *v8; // rax
  PlayerItemComp *ItemComp; // rax
  Player *v10; // rax
  PlayerItemComp *v11; // r14
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-104h]
  const data::BargainExcelConfig *config_ptr; // [rsp+20h] [rbp-100h]
  SubItemReason reason; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 player_ptr:198 64 16 14 item_param:207 96 24 17 action_reason:213";
  *(_QWORD *)(v2 + 16) = Bargain::onBargainSucc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  p_bargain_excel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.bargain_excel_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->bargain_id_);
  }
  config_ptr = data::BargainExcelConfigMgrBase::findBargainExcelConfig(p_bargain_excel_config_mgr, this->bargain_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/bargain.cpp",
      "onBargainSucc",
      194);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v16,
           (const char (*)[33])"[Bargain] bargain id not found: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->bargain_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
    goto LABEL_20;
  }
  Bargain::getOwner((Bargain *const)(v2 + 32));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    if ( *(char *)(((unsigned __int64)&config_ptr->delete_item >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config_ptr->delete_item);
    if ( config_ptr->delete_item )
    {
      *(_QWORD *)(v2 + 64) = 0LL;
      *(_QWORD *)(v2 + 72) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->item_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->item_id);
      }
      *(_DWORD *)(v2 + 64) = config_ptr->item_id;
      *(_DWORD *)(v2 + 68) = dealed_price;
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ItemComp = Player::getItemComp(v8);
      ret = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v2 + 64));
      if ( ret )
      {
        v7 = ret;
        goto LABEL_19;
      }
      ActionReason::ActionReason((ActionReason *const)(v2 + 96), ACTION_REASON_BARGAIN_DEDUCT, ITEM_LIMIT_USE_ITEM);
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v11 = Player::getItemComp(v10);
      SubItemReason::SubItemReason(&reason, (const ActionReason *)(v2 + 96));
      PlayerItemComp::subItem(v11, (const ItemParam *)(v2 + 64), &reason);
    }
    v7 = 0;
    goto LABEL_19;
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/talk/bargain.cpp",
    "onBargainSucc",
    201);
  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
    &v16,
    (const char (*)[30])"[Bargain] player_ptr is null ");
  common::milog::MiLogStream::~MiLogStream(&v16);
  v7 = -1;
LABEL_19:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
LABEL_20:
  result = v7;
  if ( v17 == (char *)v2 )
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

// Line 221: range 0000000016D2225E-0000000016D224F5
void __cdecl Bargain::notifyClientBargainTerminate(Bargain *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto::BargainTerminateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  Player *v5; // r14
  std::shared_ptr<proto::BargainTerminateNotify> __r; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:222 64 16 14 notify_ptr:229";
  *(_QWORD *)(v1 + 16) = Bargain::notifyClientBargainTerminate;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Bargain::getOwner((Bargain *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/bargain.cpp",
      "notifyClientBargainTerminate",
      225);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v7,
      (const char (*)[30])"[Bargain] player_ptr is null ");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    common::tools::perf::make_shared<proto::BargainTerminateNotify>();
    v4 = std::__shared_ptr_access<proto::BargainTerminateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BargainTerminateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->bargain_id_);
    }
    proto::BargainTerminateNotify::set_bargain_id(v4, this->bargain_id_);
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::BargainTerminateNotify>(&__r);
    Player::sendMessage(v5, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::BargainTerminateNotify>::~shared_ptr((std::shared_ptr<proto::BargainTerminateNotify> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 236: range 0000000016D224F6-0000000016D227CA
void __cdecl Bargain::notifyClientBargainStart(Bargain *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto::BargainStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  std::__shared_ptr_access<proto::BargainStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  proto::BargainSnapshot *v6; // rdx
  Player *v7; // r14
  std::shared_ptr<proto::BargainStartNotify> __r; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:237 64 16 14 notify_ptr:244";
  *(_QWORD *)(v1 + 16) = Bargain::notifyClientBargainStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Bargain::getOwner((Bargain *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/talk/bargain.cpp",
      "notifyClientBargainStart",
      240);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v9,
      (const char (*)[30])"[Bargain] player_ptr is null ");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    common::tools::perf::make_shared<proto::BargainStartNotify>();
    v4 = std::__shared_ptr_access<proto::BargainStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BargainStartNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->bargain_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->bargain_id_);
    }
    proto::BargainStartNotify::set_bargain_id(v4, this->bargain_id_);
    v5 = std::__shared_ptr_access<proto::BargainStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BargainStartNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v6 = proto::BargainStartNotify::mutable_snapshot(v5);
    Bargain::getBargainSnapshot(this, v6);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::BargainStartNotify>(&__r);
    Player::sendMessage(v7, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::BargainStartNotify>::~shared_ptr((std::shared_ptr<proto::BargainStartNotify> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
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
