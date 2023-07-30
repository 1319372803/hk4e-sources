// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/personal_line/player_personal_line_comp.cpp

// Line 28: range 0000000016CCDAC6-0000000016CCDE60
int32_t __cdecl PlayerPersonalLineComp::init(PlayerPersonalLineComp *const this)
{
  std::weak_ptr<PlayerPersonalLineComp> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t result; // eax
  std::weak_ptr<PlayerPersonalLineComp> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<PlayerPersonalLineComp> *v6; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<PlayerPersonalLineComp> *p_this_wtr; // [rsp+30h] [rbp-B0h]
  std::weak_ptr<Observer> v8; // [rsp+40h] [rbp-A0h] BYREF
  std::weak_ptr<Observer> v9; // [rsp+50h] [rbp-90h] BYREF
  std::shared_ptr<PlayerPersonalLineComp> __r; // [rsp+60h] [rbp-80h] BYREF
  char v11[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<PlayerPersonalLineComp> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<PlayerPersonalLineComp> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<PlayerPersonalLineComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 11 this_wtr:29";
  v1[1]._M_ptr = (std::__weak_ptr<PlayerPersonalLineComp,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerPersonalLineComp::init;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<PlayerPersonalLineComp>((PlayerPersonalLineComp *)&__r);
  std::weak_ptr<PlayerPersonalLineComp>::weak_ptr<PlayerPersonalLineComp,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerPersonalLineComp>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<PlayerPersonalLineComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerPersonalLineComp>::weak_ptr((std::weak_ptr<PlayerPersonalLineComp> *const)&__r, v1 + 2);
  PlayerEventComp::registerObserver<PlayerPersonalLineComp,DailyTaskRewardEvent>(
    (PlayerEventComp *const)&v8,
    p_this_wtr,
    (void (*)(PlayerPersonalLineComp *, const DailyTaskRewardEvent *))&__r);
  std::weak_ptr<Observer>::~weak_ptr(&v8);
  std::weak_ptr<PlayerPersonalLineComp>::~weak_ptr((std::weak_ptr<PlayerPersonalLineComp> *const)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = (std::weak_ptr<PlayerPersonalLineComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerPersonalLineComp>::weak_ptr((std::weak_ptr<PlayerPersonalLineComp> *const)&__r, v1 + 2);
  PlayerEventComp::registerObserver<PlayerPersonalLineComp,PlayerLevelupEvent>(
    (PlayerEventComp *const)&v9,
    EventComp,
    (void (*)(PlayerPersonalLineComp *, const PlayerLevelupEvent *))&__r);
  std::weak_ptr<Observer>::~weak_ptr(&v9);
  std::weak_ptr<PlayerPersonalLineComp>::~weak_ptr((std::weak_ptr<PlayerPersonalLineComp> *const)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (std::weak_ptr<PlayerPersonalLineComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerPersonalLineComp>::weak_ptr((std::weak_ptr<PlayerPersonalLineComp> *const)&v9, v1 + 2);
  PlayerEventComp::registerObserver<PlayerPersonalLineComp,FinishQuestEvent>(
    (PlayerEventComp *const)&__r,
    v6,
    (void (*)(PlayerPersonalLineComp *, const FinishQuestEvent *))&v9);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
  std::weak_ptr<PlayerPersonalLineComp>::~weak_ptr((std::weak_ptr<PlayerPersonalLineComp> *const)&v9);
  std::weak_ptr<PlayerPersonalLineComp>::~weak_ptr(v1 + 2);
  result = 0;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<PlayerPersonalLineComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 0000000016CCDE62-0000000016CCE02A
int32_t __cdecl PlayerPersonalLineComp::fromBin(
        PlayerPersonalLineComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  char v6; // al
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-80h]
  const proto::PlayerPersonalLineCompBin *proto_comp; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 personal_line_id:41";
  *(_QWORD *)(v2 + 16) = PlayerPersonalLineComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::personal_line_bin(player_data_bin);
  __for_range = proto::PlayerPersonalLineCompBin::unlock_personal_line_id_list(proto_comp);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    player_data_bin = (const proto::PlayerDataBin *)(v2 + 32);
    std::unordered_set<unsigned int>::insert(
      &this->unlock_personal_line_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  v5 = proto::PlayerPersonalLineCompBin::finished_daily_task_num(proto_comp);
  v6 = *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(player_data_bin) = v6 != 0;
    __asan_report_store4(&this->cur_finished_daily_task_num_, player_data_bin, v5);
  }
  this->cur_finished_daily_task_num_ = v5;
  result = 0;
  if ( v12 == (char *)v2 )
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

// Line 52: range 0000000016CCE02C-0000000016CCE151
int32_t __cdecl PlayerPersonalLineComp::toBin(
        PlayerPersonalLineComp *const this,
        proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::PlayerPersonalLineCompBin *proto_comp; // [rsp+30h] [rbp-10h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_personal_line_bin(player_data_bin);
  __for_range = &this->unlock_personal_line_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlock_personal_line_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlock_personal_line_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerPersonalLineCompBin::add_unlock_personal_line_id_list(proto_comp, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_finished_daily_task_num_);
  }
  proto::PlayerPersonalLineCompBin::set_finished_daily_task_num(proto_comp, this->cur_finished_daily_task_num_);
  return 0;
};

// Line 65: range 0000000016CCE152-0000000016CCE175
int32_t __cdecl PlayerPersonalLineComp::onLogin(PlayerPersonalLineComp *const this, bool is_new_player)
{
  PlayerPersonalLineComp::refreshPersonalLineAndRefreshTime(this);
  return 0;
};

// Line 72: range 0000000016CCE176-0000000016CCE6A2
int32_t __cdecl PlayerPersonalLineComp::redeemLegendaryKey(PlayerPersonalLineComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  int32_t result; // eax
  uint32_t cur_finished_daily_task_num; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Player *player; // rbx
  int32_t retcode; // [rsp+14h] [rbp-10Ch]
  PlayerItemComp *item_comp; // [rsp+18h] [rbp-108h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-100h] BYREF
  proto::PropValue prop_value; // [rsp+40h] [rbp-E0h] BYREF
  char v14[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 8 param:84 64 24 16 action_reason:85";
  *(_QWORD *)(v1 + 16) = PlayerPersonalLineComp::redeemLegendaryKey;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x39u) )
  {
    result = 8004;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_finished_daily_task_num_);
    }
    cur_finished_daily_task_num = this->cur_finished_daily_task_num_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 32));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    LOBYTE(cur_finished_daily_task_num) = cur_finished_daily_task_num < ConstValueExcelConfigMgr::getDailyTaskTransferLegendaryKeyNum(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
    if ( (_BYTE)cur_finished_daily_task_num )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/personal_line/player_personal_line_comp.cpp",
        "redeemLegendaryKey",
        79);
      v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v12,
             (const char (*)[50])"[PERSONAL_LINE] not enough daily task to redeem: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cur_finished_daily_task_num_);
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 8003;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      item_comp = Player::getItemComp(this->player_);
      *(_DWORD *)(v1 + 32) = 107;
      *(_DWORD *)(v1 + 36) = 1;
      *(_DWORD *)(v1 + 40) = 0;
      *(_DWORD *)(v1 + 44) = 0;
      ActionReason::ActionReason(
        (ActionReason *const)(v1 + 64),
        ACTION_REASON_DAILY_TASK_EXCHANGE_LEGENDARY_KEY,
        ITEM_LIMIT_UNLIMITED);
      retcode = PlayerItemComp::checkAddItem(item_comp, (const ItemParam *)(v1 + 32), (const ActionReason *)(v1 + 64));
      if ( retcode )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/personal_line/player_personal_line_comp.cpp",
          "redeemLegendaryKey",
          92);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v12,
          (const char (*)[36])"[PERSONAL_LINE] checkAddItem failed");
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
      else
      {
        retcode = PlayerItemComp::addItem(item_comp, (const ItemParam *)(v1 + 32), (const ActionReason *)(v1 + 64), 0LL);
        if ( retcode )
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/personal_line/player_personal_line_comp.cpp",
            "redeemLegendaryKey",
            98);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v12,
            (const char (*)[31])"[PERSONAL_LINE] addItem failed");
          common::milog::MiLogStream::~MiLogStream(&v12);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->cur_finished_daily_task_num_, v1 + 32, &this->cur_finished_daily_task_num_);
          }
          this->cur_finished_daily_task_num_ = 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          buildIntProp(&prop_value, 0x2739u, this->cur_finished_daily_task_num_);
          Player::notifyPlayerProp(player, &prop_value);
          proto::PropValue::~PropValue(&prop_value);
        }
      }
      result = retcode;
    }
  }
  if ( v14 == (char *)v1 )
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

// Line 112: range 0000000016CCE6A4-0000000016CCED2B
int32_t __cdecl PlayerPersonalLineComp::requestAllPersonalLineData(
        PlayerPersonalLineComp *const this,
        proto::PersonalLineAllDataRsp *rsp_0)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int v6; // eax
  PlayerItemComp *ItemComp; // rax
  uint32_t LegendaryKey; // edx
  PersonalLineExcelConfigMgr *p_personal_line_config_mgr; // r14
  uint32_t Now; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerQuestComp *QuestComp; // rcx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-118h]
  const data::PersonalLineExcelConfig *personal_line_config_ptr; // [rsp+30h] [rbp-110h]
  proto::LockedPersonallineData *locked_personal_line_data; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 personal_line_id:122 64 8 15 result_pair:139 96 24 21 personal_line_vec:121";
  *(_QWORD *)(v2 + 16) = PlayerPersonalLineComp::requestAllPersonalLineData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( PlayerPersonalLineComp::repairUnlockPersonalLineSet(this) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/personal_line/player_personal_line_comp.cpp",
      "requestAllPersonalLineData",
      115);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v23,
      (const char (*)[51])"[PERSONAL_LINE] repairUnlockPersonalLineSet failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    v6 = *(unsigned __int8 *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
      __asan_report_load4(&this->cur_finished_daily_task_num_);
    proto::PersonalLineAllDataRsp::set_cur_finished_daily_task_count(rsp_0, this->cur_finished_daily_task_num_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    LegendaryKey = PlayerItemComp::getLegendaryKey(ItemComp);
    proto::PersonalLineAllDataRsp::set_legendary_key_count(rsp_0, LegendaryKey);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    p_personal_line_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.personal_line_config_mgr;
    Now = common::tools::TimeUtils::getNow();
    PersonalLineExcelConfigMgr::getAllOpenPersonalLineVec(
      (std::vector<unsigned int> *)(v2 + 96),
      p_personal_line_config_mgr,
      Now);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    __for_range = (std::vector<unsigned int> *)(v2 + 96);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 96))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v2 + 48) = *v12;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      personal_line_config_ptr = data::PersonalLineExcelConfigMgrBase::findPersonalLineExcelConfig(
                                   &v13->design_config.txt_config_mgr.personal_line_config_mgr,
                                   *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( !personal_line_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/personal_line/player_personal_line_comp.cpp",
          "requestAllPersonalLineData",
          127);
        v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v23,
                (const char (*)[33])"personal line config not found: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v23);
        v5 = -1;
        goto LABEL_32;
      }
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->unlock_personal_line_set_,
             (const unsigned int *)(v2 + 48)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        QuestComp = Player::getQuestComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)personal_line_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->chapter_id >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&personal_line_config_ptr->chapter_id);
        }
        if ( !PlayerQuestComp::isChapterEnd(QuestComp, personal_line_config_ptr->chapter_id) )
          proto::PersonalLineAllDataRsp::add_ongoing_personal_line_list(rsp_0, *(_DWORD *)(v2 + 48));
      }
      else
      {
        *(std::pair<int,unsigned int> *)(v2 + 64) = PlayerPersonalLineComp::isPersonlineUnlockable(
                                                      this,
                                                      personal_line_config_ptr);
        if ( *(_DWORD *)(v2 + 64) )
        {
          locked_personal_line_data = proto::PersonalLineAllDataRsp::add_locked_personal_line_list(rsp_0);
          proto::LockedPersonallineData::set_personal_line_id(locked_personal_line_data, *(_DWORD *)(v2 + 48));
          if ( *(_DWORD *)(v2 + 64) == 8005 )
          {
            proto::LockedPersonallineData::set_lock_reason(
              locked_personal_line_data,
              LockedPersonallineData_LockReason_LEVEL);
            proto::LockedPersonallineData::set_level(locked_personal_line_data, *(_DWORD *)(v2 + 68));
          }
          else
          {
            if ( *(_DWORD *)(v2 + 64) != 8007 )
            {
              v5 = *(_DWORD *)(v2 + 64);
              goto LABEL_32;
            }
            proto::LockedPersonallineData::set_lock_reason(
              locked_personal_line_data,
              LockedPersonallineData_LockReason_QUEST);
            proto::LockedPersonallineData::set_chapter_id(locked_personal_line_data, *(_DWORD *)(v2 + 68));
          }
        }
        else
        {
          proto::PersonalLineAllDataRsp::add_can_be_unlocked_personal_line_list(rsp_0, *(_DWORD *)(v2 + 48));
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v5 = 0;
LABEL_32:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  }
  result = v5;
  if ( v24 == (char *)v2 )
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

// Line 171: range 0000000016CCED2C-0000000016CCF464
__int64 __fastcall PlayerPersonalLineComp::unlockPersonalLine(
        PlayerPersonalLineComp *const this,
        uint32_t personal_line_id,
        proto::UnlockPersonalLineRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  int32_t retcode; // [rsp+24h] [rbp-12Ch]
  int32_t retcodea; // [rsp+24h] [rbp-12Ch]
  const data::PersonalLineExcelConfig *config_ptr; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-110h] BYREF
  char v23[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 20 personal_line_id:170 64 8 15 result_pair:191 96 8 10 reason:213 128 16 9 param:206 160"
                        " 16 13 event_ptr:223";
  *(_QWORD *)(v3 + 16) = PlayerPersonalLineComp::unlockPersonalLine;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 48) = personal_line_id;
  proto::UnlockPersonalLineRsp::set_personal_line_id(rsp_0, *(_DWORD *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x39u) )
  {
    v7 = 8004;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    config_ptr = data::PersonalLineExcelConfigMgrBase::findPersonalLineExcelConfig(
                   &v8->design_config.txt_config_mgr.personal_line_config_mgr,
                   *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( config_ptr )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->unlock_personal_line_set_,
             (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/personal_line/player_personal_line_comp.cpp",
          "unlockPersonalLine",
          187);
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v22,
                (const char (*)[49])"[PERSONAL_LINE] personal line already unlocked: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v7 = -1;
      }
      else
      {
        *(std::pair<int,unsigned int> *)(v3 + 64) = PlayerPersonalLineComp::isPersonlineUnlockable(
                                                      this,
                                                      *(_DWORD *)(v3 + 48));
        if ( *(_DWORD *)(v3 + 64) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/personal_line/player_personal_line_comp.cpp",
            "unlockPersonalLine",
            194);
          v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v22,
                  (const char (*)[51])"[PERSONAL_LINE] personal line cannot be unlocked: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
          if ( *(_DWORD *)(v3 + 64) == 8005 )
          {
            proto::UnlockPersonalLineRsp::set_level(rsp_0, *(_DWORD *)(v3 + 68));
          }
          else if ( *(_DWORD *)(v3 + 64) == 8007 )
          {
            proto::UnlockPersonalLineRsp::set_chapter_id(rsp_0, *(_DWORD *)(v3 + 68));
          }
          v7 = *(_DWORD *)(v3 + 64);
        }
        else
        {
          *(_DWORD *)(v3 + 128) = 107;
          *(_DWORD *)(v3 + 132) = 1;
          *(_DWORD *)(v3 + 136) = 0;
          *(_DWORD *)(v3 + 140) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(this->player_);
          retcode = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 128));
          if ( retcode )
          {
            v7 = retcode;
          }
          else
          {
            SubItemReason::SubItemReason((SubItemReason *const)(v3 + 96), ACTION_REASON_UNLOCK_PERSON_LINE);
            *(_DWORD *)(v3 + 100) = *(_DWORD *)(v3 + 48);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v13 = Player::getItemComp(this->player_);
            retcodea = PlayerItemComp::subItem(v13, (const ItemParam *)(v3 + 128), (const SubItemReason *)(v3 + 96));
            if ( retcodea )
            {
              v7 = retcodea;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v22,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/personal_line/player_personal_line_comp.cpp",
                "unlockPersonalLine",
                221);
              v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      &v22,
                      (const char (*)[44])"[PERSONAL_LINE] unlock personal line succ: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v22);
              std::unordered_set<unsigned int>::insert(
                &this->unlock_personal_line_set_,
                (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
              common::tools::perf::make_shared<UnlockPersonalLineEvent,unsigned int &>(
                (unsigned int *)&v21,
                (unsigned int *)(v3 + 48));
              std::shared_ptr<BaseEvent>::shared_ptr<UnlockPersonalLineEvent,void>(
                (std::shared_ptr<BaseEvent> *const)(v3 + 160),
                (std::shared_ptr<UnlockPersonalLineEvent> *)&v21);
              std::shared_ptr<UnlockPersonalLineEvent>::~shared_ptr((std::shared_ptr<UnlockPersonalLineEvent> *const)&v21);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              EventComp = Player::getEventComp(this->player_);
              std::shared_ptr<BaseEvent>::shared_ptr(
                (std::shared_ptr<BaseEvent> *const)&v21,
                (const std::shared_ptr<BaseEvent> *)(v3 + 160));
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v21);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v21);
              v7 = 0;
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 160));
            }
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/personal_line/player_personal_line_comp.cpp",
        "unlockPersonalLine",
        181);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v22,
             (const char (*)[42])"[PERSONAL_LINE] personal line not found: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v7 = -1;
    }
  }
  result = v7;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 230: range 0000000016CCF466-0000000016CCF7B7
__int64 __fastcall PlayerPersonalLineComp::unlockPersonalLineByGm(
        PlayerPersonalLineComp *const this,
        uint32_t personal_line_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  const data::PersonalLineExcelConfig *config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 20 personal_line_id:229 64 16 13 event_ptr:244";
  *(_QWORD *)(v2 + 16) = PlayerPersonalLineComp::unlockPersonalLineByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = personal_line_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  config_ptr = data::PersonalLineExcelConfigMgrBase::findPersonalLineExcelConfig(
                 &v5->design_config.txt_config_mgr.personal_line_config_mgr,
                 *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( config_ptr )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->unlock_personal_line_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      v7 = 0;
    }
    else
    {
      std::unordered_set<unsigned int>::insert(
        &this->unlock_personal_line_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
      common::tools::perf::make_shared<UnlockPersonalLineEvent,unsigned int &>(
        (unsigned int *)&v11,
        (unsigned int *)(v2 + 48));
      std::shared_ptr<BaseEvent>::shared_ptr<UnlockPersonalLineEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v2 + 64),
        (std::shared_ptr<UnlockPersonalLineEvent> *)&v11);
      std::shared_ptr<UnlockPersonalLineEvent>::~shared_ptr((std::shared_ptr<UnlockPersonalLineEvent> *const)&v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)&v11,
        (const std::shared_ptr<BaseEvent> *)(v2 + 64));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v11);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v11);
      v7 = 0;
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/personal_line/player_personal_line_comp.cpp",
      "unlockPersonalLineByGm",
      234);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v12,
           (const char (*)[42])"[PERSONAL_LINE] personal line not found: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  result = v7;
  if ( v13 == (char *)v2 )
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

// Line 250: range 0000000016CCF7B8-0000000016CCF891
std::pair<int,unsigned int> __cdecl PlayerPersonalLineComp::isPersonlineUnlockable(
        PlayerPersonalLineComp *const this,
        uint32_t personal_line_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  int __x; // [rsp+10h] [rbp-40h] BYREF
  int __y; // [rsp+14h] [rbp-3Ch] BYREF
  const data::PersonalLineExcelConfig *config_ptr; // [rsp+18h] [rbp-38h]
  std::pair<int,int> __p; // [rsp+20h] [rbp-30h] BYREF
  std::pair<int,unsigned int> v8; // [rsp+28h] [rbp-28h] BYREF
  std::shared_ptr<Config> v9[2]; // [rsp+30h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9);
  config_ptr = data::PersonalLineExcelConfigMgrBase::findPersonalLineExcelConfig(
                 &v2->design_config.txt_config_mgr.personal_line_config_mgr,
                 personal_line_id);
  std::shared_ptr<Config>::~shared_ptr(v9);
  if ( config_ptr )
  {
    return PlayerPersonalLineComp::isPersonlineUnlockable(this, config_ptr);
  }
  else
  {
    __y = 0;
    __x = -1;
    __p = std::make_pair<int,int>(&__x, &__y);
    std::pair<int,unsigned int>::pair<int,int,true>(&v8, &__p);
    return v8;
  }
};

// Line 260: range 0000000016CCF892-0000000016CD06C4
std::pair<int,unsigned int> __cdecl PlayerPersonalLineComp::isPersonlineUnlockable(
        PlayerPersonalLineComp *const this,
        const data::PersonalLineExcelConfig *personal_line_config_ptr)
{
  const unsigned int *M_current; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  PersonalLineExcelConfigMgr *p_personal_line_config_mgr; // rcx
  bool v9; // r15
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v12; // rdx
  unsigned int *v13; // rax
  PlayerQuestComp *QuestComp; // rcx
  uint32_t in_activity_need_player_level; // r15d
  PlayerBasicComp *BasicComp; // rax
  PlayerBasicComp *v17; // rax
  uint32_t Level; // ecx
  char v19; // al
  PlayerBasicComp *v20; // rax
  PersonalLineExcelConfigMgr *v21; // rcx
  unsigned int *v22; // rax
  uint32_t *v23; // rdx
  PlayerQuestComp *v24; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  QuestExcelConfigMgr *v26; // rcx
  int v27; // r15d
  std::pair<int,unsigned int> v28; // rax
  int __y; // [rsp+20h] [rbp-130h] BYREF
  uint32_t unfinished_chapter_level; // [rsp+24h] [rbp-12Ch]
  uint32_t now; // [rsp+28h] [rbp-128h]
  uint32_t quest_id; // [rsp+2Ch] [rbp-124h]
  const data::ChapterExcelConfig *chapter_config_ptr; // [rsp+30h] [rbp-120h]
  const PersonalLineExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-118h]
  const std::vector<unsigned int> *rely_quest_id_vec; // [rsp+40h] [rbp-110h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-108h]
  const data::MainQuestExcelConfig *main_quest_config_ptr; // [rsp+50h] [rbp-100h]
  const data::ChapterExcelConfig *chapter_config_ptr_0; // [rsp+58h] [rbp-F8h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+60h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+68h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v41; // [rsp+70h] [rbp-E0h] BYREF
  std::vector<unsigned int> v42; // [rsp+80h] [rbp-D0h] BYREF
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+C0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 start_timestamp:278 64 8 8 iter:279";
  *(_QWORD *)(v3 + 16) = PlayerPersonalLineComp::isPersonlineUnlockable;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  if ( !personal_line_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/personal_line/player_personal_line_comp.cpp",
      "isPersonlineUnlockable",
      263);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v43,
      (const char (*)[45])"[PERSONAL_LINE] personal line config is null");
    common::milog::MiLogStream::~MiLogStream(&v43);
    __y = 0;
    *(_DWORD *)(v3 + 48) = -1;
    __for_begin._M_current = (const unsigned int *)std::make_pair<int,int>((int *)(v3 + 48), &__y);
    std::pair<int,unsigned int>::pair<int,int,true>(
      (std::pair<int,unsigned int> *const)&__for_end,
      (std::pair<int,int> *)&__for_begin);
    M_current = __for_end._M_current;
    goto LABEL_77;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.quest_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)personal_line_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->chapter_id >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&personal_line_config_ptr->chapter_id);
  }
  chapter_config_ptr = data::QuestExcelConfigMgrBase::findChapterExcelConfig(
                         p_quest_config_mgr,
                         personal_line_config_ptr->chapter_id);
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( !chapter_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/personal_line/player_personal_line_comp.cpp",
      "isPersonlineUnlockable",
      270);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v43,
           (const char (*)[57])"[PERSONAL_LINE] chapter_config_ptr is null, chapter_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &personal_line_config_ptr->chapter_id);
    common::milog::MiLogStream::~MiLogStream(&v43);
    __y = 0;
    *(_DWORD *)(v3 + 48) = -1;
    __for_begin._M_current = (const unsigned int *)std::make_pair<int,int>((int *)(v3 + 48), &__y);
    std::pair<int,unsigned int>::pair<int,int,true>(
      (std::pair<int,unsigned int> *const)&__for_end,
      (std::pair<int,int> *)&__for_begin);
    M_current = __for_end._M_current;
    goto LABEL_77;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.personal_line_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v41);
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  p_personal_line_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.personal_line_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&personal_line_config_ptr->id);
  }
  v9 = !PersonalLineExcelConfigMgr::isPersonalLineOpen(p_personal_line_config_mgr, personal_line_config_ptr->id, now);
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( v9 )
  {
    *(_DWORD *)(v3 + 48) = 0;
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    &config_mgr->personal_line_id_open_timestamp_map_,
                                                                                    &personal_line_config_ptr->id);
    __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned int>::end(&config_mgr->personal_line_id_open_timestamp_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
      p_second = &v10->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      if ( now < v10->second )
      {
        v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
        v13 = &v12->second;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v3 + 48) = v12->second;
      }
    }
    __y = 8006;
    __for_begin._M_current = (const unsigned int *)std::make_pair<proto::Retcode,unsigned int &>(
                                                     (proto::Retcode *)&__y,
                                                     (unsigned int *)(v3 + 48));
    std::pair<int,unsigned int>::pair<proto::Retcode,unsigned int,true>(
      (std::pair<int,unsigned int> *const)&__for_end,
      (std::pair<proto::Retcode,unsigned int> *)&__for_begin);
    M_current = __for_end._M_current;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    QuestComp = Player::getQuestComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&chapter_config_ptr->id);
    }
    if ( PlayerQuestComp::isChapterPreOpen(QuestComp, chapter_config_ptr->id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->in_activity_need_player_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)chapter_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->in_activity_need_player_level >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&chapter_config_ptr->in_activity_need_player_level);
      }
      in_activity_need_player_level = chapter_config_ptr->in_activity_need_player_level;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      if ( in_activity_need_player_level > PlayerBasicComp::getLevel(BasicComp) )
      {
        __y = 8005;
        __for_begin._M_current = (const unsigned int *)std::make_pair<proto::Retcode,unsigned int const&>(
                                                         (proto::Retcode *)&__y,
                                                         &chapter_config_ptr->in_activity_need_player_level);
        std::pair<int,unsigned int>::pair<proto::Retcode,unsigned int,true>(
          (std::pair<int,unsigned int> *const)&__for_end,
          (std::pair<proto::Retcode,unsigned int> *)&__for_begin);
        M_current = __for_end._M_current;
        goto LABEL_77;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->need_player_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)chapter_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->need_player_level >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&chapter_config_ptr->need_player_level);
      }
      if ( !chapter_config_ptr->need_player_level )
        goto LABEL_41;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = Player::getBasicComp(this->player_);
      Level = PlayerBasicComp::getLevel(v17);
      if ( *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->need_player_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)chapter_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->need_player_level >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&chapter_config_ptr->need_player_level);
      }
      if ( Level < chapter_config_ptr->need_player_level )
        v19 = 1;
      else
LABEL_41:
        v19 = 0;
      if ( v19 )
      {
        __y = 8005;
        __for_begin._M_current = (const unsigned int *)std::make_pair<proto::Retcode,unsigned int const&>(
                                                         (proto::Retcode *)&__y,
                                                         &chapter_config_ptr->need_player_level);
        std::pair<int,unsigned int>::pair<proto::Retcode,unsigned int,true>(
          (std::pair<int,unsigned int> *const)&__for_end,
          (std::pair<proto::Retcode,unsigned int> *)&__for_begin);
        M_current = __for_end._M_current;
        goto LABEL_77;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->start_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&personal_line_config_ptr->start_quest_id);
    }
    if ( !personal_line_config_ptr->start_quest_id )
      goto LABEL_76;
    *(_DWORD *)(v3 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = Player::getBasicComp(this->player_);
    unfinished_chapter_level = PlayerBasicComp::getPlayerLevelLimit(v20);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    v21 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.personal_line_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&personal_line_config_ptr->id);
    }
    PersonalLineExcelConfigMgr::getPersonlineRelyQuestVec(&v42, v21, personal_line_config_ptr->id);
    rely_quest_id_vec = &v42;
    std::shared_ptr<Config>::~shared_ptr(&v41);
    __for_range = &v42;
    __for_begin._M_current = std::vector<unsigned int>::begin(&v42)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&v42)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v22 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v23 = v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      quest_id = *v23;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = Player::getQuestComp(this->player_);
      if ( PlayerQuestComp::getQuestState(v24, quest_id) != QUEST_STATE_FINISHED )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v41);
        v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
        main_quest_config_ptr = QuestExcelConfigMgr::findParentQuestConfigByChildId(
                                  &v25->design_config.txt_config_mgr.quest_config_mgr,
                                  quest_id);
        std::shared_ptr<Config>::~shared_ptr(&v41);
        if ( main_quest_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&main_quest_config_ptr->chapter_id);
          }
          if ( main_quest_config_ptr->chapter_id )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v41);
            v26 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.quest_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&main_quest_config_ptr->chapter_id);
            }
            chapter_config_ptr_0 = data::QuestExcelConfigMgrBase::findChapterExcelConfig(
                                     v26,
                                     main_quest_config_ptr->chapter_id);
            std::shared_ptr<Config>::~shared_ptr(&v41);
            if ( chapter_config_ptr_0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&chapter_config_ptr_0->need_player_level >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)chapter_config_ptr_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_config_ptr_0->need_player_level >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&chapter_config_ptr_0->need_player_level);
              }
              if ( unfinished_chapter_level > chapter_config_ptr_0->need_player_level )
              {
                if ( *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&main_quest_config_ptr->chapter_id);
                }
                *(_DWORD *)(v3 + 48) = main_quest_config_ptr->chapter_id;
                unfinished_chapter_level = chapter_config_ptr_0->need_player_level;
              }
            }
          }
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_DWORD *)(v3 + 48) )
    {
      __y = 8007;
      __for_begin._M_current = (const unsigned int *)std::make_pair<proto::Retcode,unsigned int &>(
                                                       (proto::Retcode *)&__y,
                                                       (unsigned int *)(v3 + 48));
      std::pair<int,unsigned int>::pair<proto::Retcode,unsigned int,true>(
        (std::pair<int,unsigned int> *const)&__for_end,
        (std::pair<proto::Retcode,unsigned int> *)&__for_begin);
      M_current = __for_end._M_current;
      v27 = 0;
    }
    else
    {
      v27 = 1;
    }
    std::vector<unsigned int>::~vector(&v42);
    if ( v27 == 1 )
    {
LABEL_76:
      __y = 0;
      *(_DWORD *)(v3 + 48) = 0;
      __for_begin._M_current = (const unsigned int *)std::make_pair<proto::Retcode,int>(
                                                       (proto::Retcode *)(v3 + 48),
                                                       &__y);
      std::pair<int,unsigned int>::pair<proto::Retcode,int,true>(
        (std::pair<int,unsigned int> *const)&__for_end,
        (std::pair<proto::Retcode,int> *)&__for_begin);
      M_current = __for_end._M_current;
    }
  }
LABEL_77:
  v28 = (std::pair<int,unsigned int>)M_current;
  if ( v44 == (char *)v3 )
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
  return v28;
};

// Line 342: range 0000000016CD06C6-0000000016CD0A8D
void __cdecl PlayerPersonalLineComp::onDailyTaskRewardEvent(
        PlayerPersonalLineComp *const this,
        const DailyTaskRewardEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int *p_b; // rsi
  uint32_t *v8; // rax
  uint32_t *v9; // rdx
  uint32_t v10; // ecx
  char v11; // al
  Player *player; // r13
  common::milog::MiLogStream *v13; // rax
  unsigned int __b; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  proto::PropValue prop_value; // [rsp+50h] [rbp-90h] BYREF
  char v18[96]; // [rsp+80h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 22 max_daily_task_num:352";
  *(_QWORD *)(v2 + 16) = PlayerPersonalLineComp::onDailyTaskRewardEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x39u) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_grant_reward >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_grant_reward >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_grant_reward);
    }
    if ( event->is_grant_reward )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      *(_DWORD *)(v2 + 32) = ConstValueExcelConfigMgr::getDailyTaskTransferLegendaryKeyNum(&v6->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_finished_daily_task_num_);
      }
      __b = this->cur_finished_daily_task_num_ + 1;
      p_b = &__b;
      v8 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v2 + 32), &__b);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((unsigned __int64)&this->cur_finished_daily_task_num_ >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(p_b) = v11 != 0;
        __asan_report_store4(&this->cur_finished_daily_task_num_, p_b, &this->cur_finished_daily_task_num_);
      }
      this->cur_finished_daily_task_num_ = v10;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      buildIntProp(&prop_value, 0x2739u, this->cur_finished_daily_task_num_);
      Player::notifyPlayerProp(player, &prop_value);
      proto::PropValue::~PropValue(&prop_value);
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/personal_line/player_personal_line_comp.cpp",
        "onDailyTaskRewardEvent",
        356);
      v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v16,
              (const char (*)[40])"[PERSONAL_LINE] finish daily task cur: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->cur_finished_daily_task_num_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 359: range 0000000016CD0A8E-0000000016CD0F4C
int32_t __cdecl PlayerPersonalLineComp::repairUnlockPersonalLineSet(PlayerPersonalLineComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PersonalLineExcelConfigMgr *p_personal_line_config_mgr; // r14
  uint32_t Now; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  const data::PersonalLineExcelConfig *personal_line_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 20 personal_line_id:361 64 24 21 personal_line_vec:360";
  *(_QWORD *)(v1 + 16) = PlayerPersonalLineComp::repairUnlockPersonalLineSet;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_personal_line_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.personal_line_config_mgr;
  Now = common::tools::TimeUtils::getNow();
  PersonalLineExcelConfigMgr::getAllOpenPersonalLineVec(
    (std::vector<unsigned int> *)(v1 + 64),
    p_personal_line_config_mgr,
    Now);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  __for_range = (std::vector<unsigned int> *)(v1 + 64);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v1 + 48) = *v7;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->unlock_personal_line_set_,
            (const unsigned int *)(v1 + 48)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      personal_line_config_ptr = data::PersonalLineExcelConfigMgrBase::findPersonalLineExcelConfig(
                                   &v8->design_config.txt_config_mgr.personal_line_config_mgr,
                                   *(_DWORD *)(v1 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( !personal_line_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/personal_line/player_personal_line_comp.cpp",
          "repairUnlockPersonalLineSet",
          370);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v19,
               (const char (*)[33])"personal line config not found: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
        v10 = -1;
        goto LABEL_19;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->start_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&personal_line_config_ptr->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&personal_line_config_ptr->start_quest_id);
      }
      if ( PlayerQuestComp::getQuestState(QuestComp, personal_line_config_ptr->start_quest_id) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/personal_line/player_personal_line_comp.cpp",
          "repairUnlockPersonalLineSet",
          376);
        v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v19,
                (const char (*)[41])"[PERSONAL_LINE] repair personal line id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
        std::unordered_set<unsigned int>::insert(
          &this->unlock_personal_line_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v1 + 48));
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v10 = 0;
LABEL_19:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  result = v10;
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

// Line 384: range 0000000016CD0F4E-0000000016CD0F6C
void __cdecl PlayerPersonalLineComp::onPlayerLevelupEvent(
        PlayerPersonalLineComp *const this,
        const PlayerLevelupEvent *event)
{
  PlayerPersonalLineComp::refreshPersonalLineAndRefreshTime(this);
};

// Line 388: range 0000000016CD0F6E-0000000016CD1008
void __cdecl PlayerPersonalLineComp::onFinishQuestEvent(
        PlayerPersonalLineComp *const this,
        const FinishQuestEvent *event)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool v3; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  v3 = std::unordered_set<unsigned int>::count(
         &v2->design_config.txt_config_mgr.personal_line_config_mgr.personal_line_rely_quest_id_set_,
         &event->quest_id) != 0;
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( v3 )
    PlayerPersonalLineComp::refreshPersonalLineAndRefreshTime(this);
};

// Line 396: range 0000000016CD100A-0000000016CD1028
void __cdecl PlayerPersonalLineComp::onPersonalLineTimer(PlayerPersonalLineComp *const this, uint64_t now_ms)
{
  PlayerPersonalLineComp::refreshPersonalLineAndRefreshTime(this);
};

// Line 401: range 0000000016CD102A-0000000016CD1751
void __cdecl PlayerPersonalLineComp::refreshPersonalLineAndRefreshTime(PlayerPersonalLineComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  const unsigned int *v5; // rax
  _DWORD *v6; // rdx
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  bool is_not_open_personal_line; // [rsp+1Bh] [rbp-185h]
  unsigned int val; // [rsp+1Ch] [rbp-184h] BYREF
  uint32_t now; // [rsp+20h] [rbp-180h]
  uint32_t delta_time; // [rsp+24h] [rbp-17Ch]
  std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::const_iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  const PersonalLineExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-168h]
  const std::unordered_map<unsigned int,data::PersonalLineExcelConfig> *__for_range; // [rsp+40h] [rbp-160h]
  const std::pair<unsigned int const,data::PersonalLineExcelConfig> *v18; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,data::PersonalLineExcelConfig> >::type *personal_line_id; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PersonalLineExcelConfig> >::type *personal_line_config; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-130h] BYREF
  char v23[272]; // [rsp+90h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 21 next_refresh_time:403 48 8 12 ret_pair:415 80 24 37 can_be_unlcoked_personal_line_vec:"
                        "406 144 40 10 notify:440";
  *(_QWORD *)(v1 + 16) = PlayerPersonalLineComp::refreshPersonalLineAndRefreshTime;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = -218959360;
  v3[536862724] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.personal_line_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  *(_DWORD *)(v1 + 32) = -1;
  now = common::tools::TimeUtils::getNow();
  is_not_open_personal_line = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 80));
  __for_range = &config_mgr->personal_line_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::begin(&config_mgr->personal_line_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::end(&config_mgr->personal_line_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false>::operator*(&__for_begin);
    personal_line_id = std::get<0ul,unsigned int const,data::PersonalLineExcelConfig>(v18);
    personal_line_config = (std::tuple_element<1,const std::pair<unsigned int const,data::PersonalLineExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PersonalLineExcelConfig>(v18);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->unlock_personal_line_set_,
           personal_line_id) )
    {
      goto LABEL_7;
    }
    if ( *(_BYTE *)(((unsigned __int64)personal_line_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)personal_line_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)personal_line_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(personal_line_id);
    }
    *(std::pair<int,unsigned int> *)(v1 + 48) = PlayerPersonalLineComp::isPersonlineUnlockable(this, *personal_line_id);
    if ( !*(_DWORD *)(v1 + 48) )
    {
      if ( std::unordered_set<unsigned int>::count(&this->cannot_unlock_personal_line_set_, personal_line_id) )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 80), personal_line_id);
LABEL_7:
      std::unordered_set<unsigned int>::erase(&this->cannot_unlock_personal_line_set_, personal_line_id);
      goto LABEL_21;
    }
    if ( *(_DWORD *)(v1 + 48) == 8006 )
    {
      if ( !*(_DWORD *)(v1 + 52) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/personal_line/player_personal_line_comp.cpp",
          "refreshPersonalLineAndRefreshTime",
          429);
        v4 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
               &v22,
               (const char (*)[71])"[PERSONAL_LINE] personal line next start time is 0, perosonal_line_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, personal_line_id);
        common::milog::MiLogStream::~MiLogStream(&v22);
        goto LABEL_21;
      }
      v5 = std::min<unsigned int>((const unsigned int *)(v1 + 32), (const unsigned int *)(v1 + 52));
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v1 + 32) = *v6;
      is_not_open_personal_line = 1;
    }
    std::unordered_set<unsigned int>::insert(&this->cannot_unlock_personal_line_set_, personal_line_id);
LABEL_21:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 80)) )
  {
    proto::PersonalLineNewUnlockNotify::PersonalLineNewUnlockNotify((proto::PersonalLineNewUnlockNotify *const)(v1 + 144));
    v7 = proto::PersonalLineNewUnlockNotify::mutable_personal_line_id_list((proto::PersonalLineNewUnlockNotify *const)(v1 + 144));
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v1 + 80),
      v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 144));
    proto::PersonalLineNewUnlockNotify::~PersonalLineNewUnlockNotify((proto::PersonalLineNewUnlockNotify *const)(v1 + 144));
  }
  if ( is_not_open_personal_line && now < *(_DWORD *)(v1 + 32) )
  {
    delta_time = *(_DWORD *)(v1 + 32) - now;
    if ( common::tools::MiTimer::isActive(&this->personal_line_timer_) )
      common::tools::MiTimer::cancel(&this->personal_line_timer_);
    if ( PlayerUnixTimer::startS(
           &this->personal_line_timer_,
           delta_time,
           0,
           "./src/player/personal_line/player_personal_line_comp.cpp",
           "refreshPersonalLineAndRefreshTime",
           459) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/personal_line/player_personal_line_comp.cpp",
        "refreshPersonalLineAndRefreshTime",
        461);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v22, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        v9,
        (const char (*)[35])" personal_line_timer_ startS fails");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 80));
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};
