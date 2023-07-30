// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/salesman_mp_activity.cpp

// Line 27: range 0000000016C57D52-0000000016C58006
int32_t __cdecl SalesmanMpActivity::fromScheduleBin(
        SalesmanMpActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  google::protobuf::uint32 v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx
  char v6; // al
  uint32_t deliver_day_index; // ecx
  char v8; // dl
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  char v12; // al
  const google::protobuf::RepeatedField<unsigned int> *v13; // rax
  const google::protobuf::RepeatedField<unsigned int> *v14; // rax
  const google::protobuf::RepeatedField<unsigned int> *v15; // rax
  const google::protobuf::RepeatedField<unsigned int> *v16; // rax
  const google::protobuf::RepeatedField<unsigned int> *v17; // rax
  const google::protobuf::RepeatedField<unsigned int> *v18; // rax
  const google::protobuf::RepeatedField<unsigned int> *v19; // rax
  __int64 v20; // rsi
  const proto::SalesmanMpScheduleBin *salesman_mp_bin; // [rsp+18h] [rbp-18h]

  salesman_mp_bin = proto::ActivityScheduleBin::salesman_mp_bin(bin);
  v2 = proto::SalesmanMpScheduleBin::status(salesman_mp_bin);
  v3 = (((_BYTE)this - 92) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
  {
    v2 = (_DWORD)this + 932;
    __asan_report_store4(&this->status_, v3, v4);
  }
  this->status_ = v2;
  v5 = proto::SalesmanMpScheduleBin::day_index(salesman_mp_bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v3) = v6 != 0;
    __asan_report_store4(&this->day_index_, v3, v5);
  }
  this->day_index_ = v5;
  deliver_day_index = proto::SalesmanMpScheduleBin::last_deliver_day_index(salesman_mp_bin);
  v8 = *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->last_deliver_day_index_, v3, v9);
  this->last_deliver_day_index_ = deliver_day_index;
  LOBYTE(v10) = proto::SalesmanMpScheduleBin::is_has_taken_special_reward(salesman_mp_bin);
  v11 = v10;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_has_taken_special_reward_ >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v3) = v12 != 0;
    __asan_report_store1(&this->is_has_taken_special_reward_, v3, v11);
  }
  this->is_has_taken_special_reward_ = v11;
  v13 = proto::SalesmanMpScheduleBin::normal_reward_list(salesman_mp_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v13, &this->normal_reward_vec_);
  v14 = proto::SalesmanMpScheduleBin::obtained_normal_reward_list(salesman_mp_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v14, &this->obtained_normal_reward_vec_);
  v15 = proto::SalesmanMpScheduleBin::obtained_special_reward_list(salesman_mp_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v15, &this->obtained_special_reward_vec_);
  v16 = proto::SalesmanMpScheduleBin::obtained_special_material_list(salesman_mp_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v16, &this->obtained_special_material_vec_);
  v17 = proto::SalesmanMpScheduleBin::obtained_special_drop_list(salesman_mp_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v17, &this->obtained_special_drop_vec_);
  v18 = proto::SalesmanMpScheduleBin::finished_talk_id_list(salesman_mp_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v18, &this->finished_talk_id_vec_);
  v19 = proto::SalesmanMpScheduleBin::deliver_day_index_list(salesman_mp_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v19, &this->deliver_day_index_vec_);
  v20 = (unsigned int)std::vector<unsigned int>::size(&this->deliver_day_index_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deliver_count_, v20, &this->deliver_count_);
  }
  this->deliver_count_ = v20;
  return 0;
};

// Line 45: range 0000000016C58008-0000000016C58274
int32_t __cdecl SalesmanMpActivity::toScheduleBin(
        const SalesmanMpActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  proto::SalesmanMpScheduleBin *salesman_mp_bin; // [rsp+18h] [rbp-8h]

  salesman_mp_bin = proto::ActivityScheduleBin::mutable_salesman_mp_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->status_);
  }
  proto::SalesmanMpScheduleBin::set_status(salesman_mp_bin, this->status_);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->day_index_);
  }
  proto::SalesmanMpScheduleBin::set_day_index(salesman_mp_bin, this->day_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_deliver_day_index_);
  }
  proto::SalesmanMpScheduleBin::set_last_deliver_day_index(salesman_mp_bin, this->last_deliver_day_index_);
  if ( *(char *)(((unsigned __int64)&this->is_has_taken_special_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_has_taken_special_reward_);
  proto::SalesmanMpScheduleBin::set_is_has_taken_special_reward(salesman_mp_bin, this->is_has_taken_special_reward_);
  v2 = proto::SalesmanMpScheduleBin::mutable_normal_reward_list(salesman_mp_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->normal_reward_vec_, v2);
  v3 = proto::SalesmanMpScheduleBin::mutable_obtained_normal_reward_list(salesman_mp_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->obtained_normal_reward_vec_, v3);
  v4 = proto::SalesmanMpScheduleBin::mutable_obtained_special_reward_list(salesman_mp_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->obtained_special_reward_vec_, v4);
  v5 = proto::SalesmanMpScheduleBin::mutable_obtained_special_material_list(salesman_mp_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->obtained_special_material_vec_, v5);
  v6 = proto::SalesmanMpScheduleBin::mutable_obtained_special_drop_list(salesman_mp_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->obtained_special_drop_vec_, v6);
  v7 = proto::SalesmanMpScheduleBin::mutable_finished_talk_id_list(salesman_mp_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->finished_talk_id_vec_, v7);
  v8 = proto::SalesmanMpScheduleBin::mutable_deliver_day_index_list(salesman_mp_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->deliver_day_index_vec_, v8);
  return 0;
};

// Line 62: range 0000000016C58276-0000000016C58AAB
int32_t __cdecl SalesmanMpActivity::toClient(SalesmanMpActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  int32_t result; // eax
  ActivitySalesmanExcelConfigMgr *p_activity_salesman_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int>::reference v13; // rax
  google::protobuf::uint32 *v14; // rdx
  std::vector<unsigned int>::reference v15; // rax
  uint32_t *v16; // rdx
  uint32_t v17; // ecx
  char v18; // al
  proto::SalesmanActivityDetailInfo *salesman_info; // [rsp+10h] [rbp-B0h]
  const data::ActivitySalesmanExcelConfig *salesman_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-90h] BYREF
  char v23[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 day_count:79";
  *(_QWORD *)(v2 + 16) = SalesmanMpActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "toClient",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v22,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = -1;
  }
  else
  {
    salesman_info = proto::ActivityInfo::mutable_salesman_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->status_);
    }
    proto::SalesmanActivityDetailInfo::set_status(salesman_info, this->status_);
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->day_index_);
    }
    proto::SalesmanActivityDetailInfo::set_day_index(salesman_info, this->day_index_);
    if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->deliver_count_);
    }
    proto::SalesmanActivityDetailInfo::set_deliver_count(salesman_info, this->deliver_count_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_activity_salesman_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_salesman_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    salesman_config_ptr = data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanExcelConfig(
                            p_activity_salesman_config_mgr,
                            this->schedule_id_);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( salesman_config_ptr )
    {
      *(_DWORD *)(v2 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &salesman_config_ptr->special_reward.obtain_param,
             (unsigned int *)(v2 + 32),
             1) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/salesman_mp_activity.cpp",
          "toClient",
          82);
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v22,
                (const char (*)[29])"strToNum failed schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->schedule_id_);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
      }
      else if ( std::vector<unsigned int>::empty(&this->normal_reward_vec_) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/salesman_mp_activity.cpp",
          "toClient",
          87);
        v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v22,
                (const char (*)[39])"normal_reward_vec_ empty, schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->schedule_id_);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
      }
      else
      {
        v13 = std::vector<unsigned int>::back(&this->normal_reward_vec_);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        proto::SalesmanActivityDetailInfo::set_day_reward_id(salesman_info, *v14);
        if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.preview_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)salesman_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.preview_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&salesman_config_ptr->special_reward.preview_id);
        }
        proto::SalesmanActivityDetailInfo::set_special_reward_preview_id(
          salesman_info,
          salesman_config_ptr->special_reward.preview_id);
        proto::SalesmanActivityDetailInfo::set_cond_day_count(salesman_info, *(_DWORD *)(v2 + 32));
        if ( *(char *)(((unsigned __int64)&this->is_has_taken_special_reward_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_has_taken_special_reward_);
        proto::SalesmanActivityDetailInfo::set_is_has_taken_special_reward(
          salesman_info,
          this->is_has_taken_special_reward_);
        if ( std::vector<unsigned int>::empty(&this->deliver_day_index_vec_) )
          goto LABEL_36;
        v15 = std::vector<unsigned int>::back(&this->deliver_day_index_vec_);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        v17 = *v16;
        if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->day_index_);
        }
        if ( v17 < this->day_index_ )
LABEL_36:
          v18 = 1;
        else
          v18 = 0;
        if ( v18 )
          proto::SalesmanActivityDetailInfo::set_is_today_has_delivered(salesman_info, 0);
        else
          proto::SalesmanActivityDetailInfo::set_is_today_has_delivered(salesman_info, 1);
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/salesman_mp_activity.cpp",
        "toClient",
        76);
      v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v22,
             (const char (*)[51])"findActivitySalesmanExcelConfig fail, schedule_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->schedule_id_);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 5;
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 107: range 0000000016C58AAC-0000000016C58AD2
void __cdecl SalesmanMpActivity::onLogin(SalesmanMpActivity *const this)
{
  BaseActivity::onLogin((BaseActivity *const)this);
  SalesmanMpActivity::refreshDayIndexByCurrentTime(this);
};

// Line 113: range 0000000016C58AD4-0000000016C58AEE
void __cdecl SalesmanMpActivity::onStart(SalesmanMpActivity *const this)
{
  SalesmanMpActivity::refreshDayIndexByCurrentTime(this);
};

// Line 119: range 0000000016C58AF0-0000000016C58B33
void __cdecl SalesmanMpActivity::onRefresh(SalesmanMpActivity *const this)
{
  SalesmanMpActivity::refreshDayIndexByCurrentTime(this);
  BaseActivity::updateAllConds((BaseActivity *const)this);
  BaseActivity::onRefresh((BaseActivity *const)this);
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 128: range 0000000016C58B34-0000000016C58D1C
void __cdecl SalesmanMpActivity::onClear(SalesmanMpActivity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (((_BYTE)this - 92) & 7u) + 3;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->status_, v1, v2);
  this->status_ = SALESMAN_STATUS_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_, v1, &this->day_index_);
  }
  this->day_index_ = 0;
  v3 = (((_BYTE)this - 84) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->last_deliver_day_index_, v3, v4);
  this->last_deliver_day_index_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_has_taken_special_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_has_taken_special_reward_, v3, &this->is_has_taken_special_reward_);
  this->is_has_taken_special_reward_ = 0;
  std::vector<unsigned int>::clear(&this->deliver_day_index_vec_);
  std::vector<unsigned int>::clear(&this->normal_reward_vec_);
  std::vector<unsigned int>::clear(&this->obtained_normal_reward_vec_);
  std::vector<unsigned int>::clear(&this->obtained_special_reward_vec_);
  std::vector<unsigned int>::clear(&this->obtained_special_material_vec_);
  std::vector<unsigned int>::clear(&this->obtained_special_drop_vec_);
  std::vector<unsigned int>::clear(&this->finished_talk_id_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deliver_count_, v3, &this->deliver_count_);
  }
  this->deliver_count_ = 0;
};

// Line 147: range 0000000016C58D1E-0000000016C58FF9
bool __cdecl SalesmanMpActivity::checkCondIsMeet(SalesmanMpActivity *const this, const data::NewActivityCond *cond)
{
  data::NewActivityCondType type; // eax
  common::milog::MiLogStream *v3; // rax
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v5; // rax
  unsigned int *v6; // rdx
  uint32_t last_deliver_day_index; // ecx
  uint32_t RewardedCount; // ecx
  bool is_need_finish; // [rsp+1Bh] [rbp-35h]
  unsigned int value; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type == NEW_ACTIVITY_COND_SALESMAN_CAN_GET_REWARD )
  {
    RewardedCount = SalesmanMpActivity::getRewardedCount(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->deliver_count_);
    }
    return RewardedCount < this->deliver_count_;
  }
  else
  {
    if ( type > NEW_ACTIVITY_COND_SALESMAN_CAN_GET_REWARD )
      return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
    if ( type != NEW_ACTIVITY_COND_SALESMAN_CAN_DELIVER )
    {
      if ( type == NEW_ACTIVITY_COND_FINISH_TALK || type == NEW_ACTIVITY_COND_NOT_FINISH_TALK )
      {
        if ( std::vector<int>::size(&cond->param) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cond->type);
          }
          is_need_finish = cond->type == NEW_ACTIVITY_COND_FINISH_TALK;
          v5 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                   &cond->param,
                                                                                   0LL);
          v6 = (unsigned int *)v5;
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v5);
          }
          value = *v6;
          return is_need_finish == common::tools::MiscUtils::isContains<unsigned int>(
                                     &this->finished_talk_id_vec_,
                                     &value);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/salesman_mp_activity.cpp",
            "checkCondIsMeet",
            155);
          v3 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                 &v11,
                 (const char (*)[36])"cond param size error, activity id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->activity_id_);
          common::milog::MiLogStream::~MiLogStream(&v11);
          return 0;
        }
      }
      return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_deliver_day_index_);
    }
    last_deliver_day_index = this->last_deliver_day_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->day_index_);
    }
    return last_deliver_day_index < this->day_index_;
  }
};

// Line 177: range 0000000016C58FFA-0000000016C59328
void __fastcall SalesmanMpActivity::recordSalesmanTalkOnTalkFinish(SalesmanMpActivity *const this, uint32_t talk_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-80h] BYREF
  char v16[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 talk_id:176";
  *(_QWORD *)(v2 + 16) = SalesmanMpActivity::recordSalesmanTalkOnTalkFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = talk_id;
  if ( std::vector<unsigned int>::size(&this->finished_talk_id_vec_) <= 0x63 )
  {
    if ( !common::tools::MiscUtils::isContains<unsigned int>(
            &this->finished_talk_id_vec_,
            (const unsigned int *)(v2 + 32)) )
    {
      std::vector<unsigned int>::push_back(
        &this->finished_talk_id_vec_,
        (const std::vector<unsigned int>::value_type *)(v2 + 32));
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/salesman_mp_activity.cpp",
        "recordSalesmanTalkOnTalkFinish",
        188);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"record talk_id. schedule_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->schedule_id_);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" activity_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->activity_id_);
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" talk_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v14, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v15);
      BaseActivity::updateAllConds((BaseActivity *const)this);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "recordSalesmanTalkOnTalkFinish",
      180);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v15, (const char (*)[42])off_25F11700);
    v6 = common::milog::MiLogStream::operator<<<unsigned int>(v5, &this->finished_talk_id_vec_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v15);
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
};

// Line 196: range 0000000016C5932A-0000000016C59334
void __cdecl SalesmanMpActivity::beforeGetActivityInfoReq(SalesmanMpActivity *const this)
{
  ;
};

// Line 201: range 0000000016C59336-0000000016C5A465
int32_t __cdecl SalesmanMpActivity::deliverItemToSalesman(SalesmanMpActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  uint32_t last_deliver_day_index; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  uint32_t deliver_count; // ecx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  ActivitySalesmanExcelConfigMgr *p_activity_salesman_config_mgr; // rdi
  uint32_t day_index; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v27; // rax
  common::milog::MiLogStream *v28; // rax
  PlayerItemComp *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  PlayerItemComp *v33; // rax
  __int64 v34; // rsi
  uint32_t v35; // ecx
  char v36; // dl
  __int64 v37; // rdx
  __int64 v38; // rdx
  PlayerActivityComp *ActivityComp; // r15
  uint32_t v40; // r14d
  uint32_t ActivityId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rcx
  Player *player; // r14
  PlayerWatcherComp *WatcherComp; // rcx
  int32_t result; // eax
  std::string v47; // [rsp+0h] [rbp-180h]
  char *v48; // [rsp+8h] [rbp-178h]
  uint32_t schedule_id; // [rsp+14h] [rbp-16Ch]
  SalesmanMpActivity *thisa; // [rsp+18h] [rbp-168h]
  const data::ActivitySalesmanDailyExcelConfig *daily_config_ptr; // [rsp+28h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v53; // [rsp+40h] [rbp-140h] BYREF
  std::string v54; // [rsp+50h] [rbp-130h] BYREF
  char v55[272]; // [rsp+70h] [rbp-110h] BYREF

  *(&v47._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v1 = (unsigned __int64)v55;
  v47._M_string_length = (std::string::size_type)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 1 10 holder:202 64 4 13 reward_id:224 80 4 7 ret:225 96 8 19 sub_item_reason:263 128 16 11 "
                        "log_ptr:288 160 24 10 reason:254";
  *(_QWORD *)(v1 + 16) = SalesmanMpActivity::deliverItemToSalesman;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -219021312;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v54, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xAF2u, v47);
  std::string::~string(&v54);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->day_index_);
  }
  if ( thisa->day_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->last_deliver_day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->last_deliver_day_index_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->last_deliver_day_index_);
    }
    last_deliver_day_index = thisa->last_deliver_day_index_;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->day_index_);
    }
    if ( last_deliver_day_index < thisa->day_index_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->deliver_count_);
      }
      deliver_count = thisa->deliver_count_;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->day_index_);
      }
      if ( deliver_count < thisa->day_index_ )
      {
        *(_DWORD *)(v1 + 64) = 0;
        *(_DWORD *)(v1 + 80) = SalesmanMpActivity::getOwnerCurRewardId(thisa, (uint32_t *)(v1 + 64));
        if ( *(_DWORD *)(v1 + 80) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v54,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/salesman_mp_activity.cpp",
            "deliverItemToSalesman",
            228);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&v54,
            (const char (*)[27])"getOwnerCurRewardId failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
          v6 = *(_DWORD *)(v1 + 80);
        }
        else if ( *(_DWORD *)(v1 + 64) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v53);
          p_activity_salesman_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.activity_salesman_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
          {
            p_activity_salesman_config_mgr = (ActivitySalesmanExcelConfigMgr *)&thisa->day_index_;
            __asan_report_load4(&thisa->day_index_);
          }
          day_index = thisa->day_index_;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            p_activity_salesman_config_mgr = (ActivitySalesmanExcelConfigMgr *)&thisa->schedule_id_;
            __asan_report_load4(&thisa->schedule_id_);
          }
          daily_config_ptr = ActivitySalesmanExcelConfigMgr::findDailyConfig(
                               p_activity_salesman_config_mgr,
                               thisa->schedule_id_,
                               day_index);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
          if ( daily_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            ItemComp = Player::getItemComp(thisa->player_);
            *(_DWORD *)(v1 + 80) = PlayerItemComp::checkSubItemBatch(ItemComp, &daily_config_ptr->cost_item_list);
            if ( *(_DWORD *)(v1 + 80) )
            {
              v6 = *(_DWORD *)(v1 + 80);
            }
            else
            {
              ActionReason::ActionReason(
                (ActionReason *const)(v1 + 160),
                ACTION_REASON_SALESMAN_MP_REWARD,
                ITEM_LIMIT_ACTIVITY_SALESMAN_MP);
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              v27 = Player::getItemComp(thisa->player_);
              *(_DWORD *)(v1 + 80) = PlayerItemComp::checkGrantReward(
                                       v27,
                                       *(_DWORD *)(v1 + 64),
                                       (const ActionReason *)(v1 + 160));
              if ( *(_DWORD *)(v1 + 80) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v54,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/salesman_mp_activity.cpp",
                  "deliverItemToSalesman",
                  258);
                v28 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        (common::milog::MiLogStream *const)&v54,
                        (const char (*)[36])"checkGrantReward failed, reward_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v1 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
                v6 = *(_DWORD *)(v1 + 80);
              }
              else
              {
                SubItemReason::SubItemReason((SubItemReason *const)(v1 + 96), ACTION_REASON_SALESMAN_DELIVER_ITEM);
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->player_);
                v29 = Player::getItemComp(thisa->player_);
                *(_DWORD *)(v1 + 80) = PlayerItemComp::subItemBatch(
                                         v29,
                                         &daily_config_ptr->cost_item_list,
                                         (const SubItemReason *)(v1 + 96));
                if ( *(_DWORD *)(v1 + 80) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v54,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/salesman_mp_activity.cpp",
                    "deliverItemToSalesman",
                    267);
                  v30 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          (common::milog::MiLogStream *const)&v54,
                          (const char (*)[24])"subItemBatch fail, ret:");
                  v31 = common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(v1 + 80));
                  v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v31,
                          (const char (*)[9])" player:");
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&thisa->player_);
                  operator<<(v32, thisa->player_);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
                  v6 = *(_DWORD *)(v1 + 80);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&thisa->player_);
                  v33 = Player::getItemComp(thisa->player_);
                  PlayerItemComp::grantReward(v33, *(_DWORD *)(v1 + 64), (const ActionReason *)(v1 + 160), 0LL);
                  std::vector<unsigned int>::push_back(&thisa->deliver_day_index_vec_, &thisa->day_index_);
                  v34 = (unsigned int)std::vector<unsigned int>::size(&thisa->deliver_day_index_vec_);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&thisa->deliver_count_, v34, &thisa->deliver_count_);
                  }
                  thisa->deliver_count_ = v34;
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&thisa->day_index_);
                  }
                  v35 = thisa->day_index_;
                  v36 = *(_BYTE *)(((unsigned __int64)&thisa->last_deliver_day_index_ >> 3) + 0x7FFF8000);
                  LOBYTE(v34) = v36 != 0;
                  v37 = (v36 != 0) & (unsigned __int8)((char)((((_BYTE)thisa - 84) & 7) + 3) >= v36);
                  if ( (_BYTE)v37 )
                    __asan_report_store4(&thisa->last_deliver_day_index_, v34, v37);
                  thisa->last_deliver_day_index_ = v35;
                  v38 = (*(_BYTE *)(((unsigned __int64)&thisa->status_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->status_ >> 3) + 0x7FFF8000));
                  if ( (_BYTE)v38 )
                    __asan_report_store4(&thisa->status_, (((_BYTE)thisa - 92) & 7u) + 3, v38);
                  thisa->status_ = SALESMAN_STATUS_DELIVERED;
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&thisa->player_);
                  ActivityComp = Player::getActivityComp(thisa->player_);
                  v40 = *(_DWORD *)(v1 + 64);
                  schedule_id = BaseActivity::getScheduleId((const BaseActivity *const)thisa);
                  ActivityId = BaseActivity::getActivityId((const BaseActivity *const)thisa);
                  PlayerActivityComp::logGetActivityReward(ActivityComp, ActivityId, schedule_id, v40);
                  std::vector<unsigned int>::push_back(
                    &thisa->obtained_normal_reward_vec_,
                    (const std::vector<unsigned int>::value_type *)(v1 + 64));
                  BaseActivity::notifyClientData((BaseActivity *const)thisa, 0);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodySalesmanDeliverItem>();
                  v42 = std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4(&thisa->schedule_id_);
                  }
                  proto_log::PlayerLogBodySalesmanDeliverItem::set_schedule_id(v42, thisa->schedule_id_);
                  v43 = std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&thisa->day_index_);
                  }
                  proto_log::PlayerLogBodySalesmanDeliverItem::set_day_index(v43, thisa->day_index_);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&thisa->player_);
                  player = thisa->player_;
                  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v53, 0LL);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySalesmanDeliverItem,void>(
                    &p_body_ptr,
                    (const std::shared_ptr<proto_log::PlayerLogBodySalesmanDeliverItem> *)(v1 + 128));
                  Player::printStatLog(player, &p_body_ptr, &v53, 0xEu);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v53);
                  BaseActivity::updateAllConds((BaseActivity *const)thisa);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&thisa->player_);
                  WatcherComp = Player::getWatcherComp(thisa->player_);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&thisa->deliver_count_);
                  }
                  PlayerWatcherComp::triggerDeliverItemToSalesman(WatcherComp, thisa->deliver_count_);
                  v6 = 0;
                  std::shared_ptr<proto_log::PlayerLogBodySalesmanDeliverItem>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySalesmanDeliverItem> *const)(v1 + 128));
                }
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v54,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/salesman_mp_activity.cpp",
              "deliverItemToSalesman",
              241);
            v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    (common::milog::MiLogStream *const)&v54,
                    (const char (*)[35])"findDailyConfig fail, schedule_id:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &thisa->schedule_id_);
            v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v22,
                    (const char (*)[12])" day_index:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &thisa->day_index_);
            v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            operator<<(v25, thisa->player_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
            v6 = 5;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v54,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/salesman_mp_activity.cpp",
            "deliverItemToSalesman",
            233);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)&v54,
            (const char (*)[35])"getOwnerCurRewardId equal 0, error");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
          v6 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v54,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/salesman_mp_activity.cpp",
          "deliverItemToSalesman",
          220);
        v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                (common::milog::MiLogStream *const)&v54,
                (const char (*)[15])"deliver_count:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &thisa->deliver_count_);
        v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" day_index:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &thisa->day_index_);
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        operator<<(v18, thisa->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
        v6 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v54,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/salesman_mp_activity.cpp",
        "deliverItemToSalesman",
        213);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             (common::milog::MiLogStream *const)&v54,
             (const char (*)[43])"already delivered. last_deliver_day_index:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &thisa->last_deliver_day_index_);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" day_index:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &thisa->day_index_);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      operator<<(v12, thisa->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
      v6 = 868;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "deliverItemToSalesman",
      206);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)&v54,
           (const char (*)[45])"day_index_ is 0, activity is closed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    operator<<(v5, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v54);
    v6 = 860;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  result = v6;
  if ( v48 == (char *)v1 )
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
  return result;
};

// Line 304: range 0000000016C5A466-0000000016C5BF45
int32_t __cdecl SalesmanMpActivity::takeSpecialReward(SalesmanMpActivity *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  ActivitySalesmanExcelConfigMgr *p_activity_salesman_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rcx
  uint32_t deliver_count; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // r14
  int v18; // eax
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t OwnerUid; // r15d
  char v22; // al
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t v24; // r15d
  char v25; // al
  _BOOL4 v26; // r15d
  Player *v27; // rax
  uint32_t ActivityComp; // r15d
  std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int v35; // r15d
  PlayerItemComp *v36; // rax
  PlayerItemComp *v37; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v39; // rax
  PlayerItemComp *p_id; // rdi
  __int64 id; // rsi
  PlayerItemComp *v42; // rdi
  common::milog::MiLogStream *v43; // rax
  PlayerItemComp *v44; // rdi
  __int64 v45; // rsi
  std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  google::protobuf::RepeatedPtrField<proto_log::ItemLog> *v50; // rax
  Player *player; // r14
  common::milog::MiLogStream *v52; // rax
  int32_t result; // eax
  std::string mem_func; // [rsp+0h] [rbp-1F0h]
  char *v55; // [rsp+10h] [rbp-1E0h]
  SalesmanMpActivity *thisa; // [rsp+18h] [rbp-1D8h]
  char *val; // [rsp+28h] [rbp-1C8h] BYREF
  const data::ActivitySalesmanExcelConfig *salesman_config_ptr; // [rsp+30h] [rbp-1C0h]
  const NewActivityExcelConfigMgr *conf_mgr; // [rsp+38h] [rbp-1B8h]
  std::string v60; // [rsp+40h] [rbp-1B0h] BYREF
  char v61[400]; // [rsp+60h] [rbp-190h] BYREF

  *(&mem_func._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v2 = (unsigned __int64)v61;
  mem_func._anon_0._M_allocated_capacity = (std::string::size_type)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 10 holder:305 64 4 24 accumulate_day_count:334 80 4 7 ret:386 96 16 13 owner_ptr:356 128 "
                        "16 11 log_ptr:436 160 16 13 world_ptr:365 192 16 19 mp_activity_ptr:378 224 24 10 reason:387 288"
                        " 24 23 add_item_result_vec:427";
  *(_QWORD *)(v2 + 16) = SalesmanMpActivity::takeSpecialReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v60, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xAF3u, mem_func);
  std::string::~string(&v60);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 192));
  p_activity_salesman_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))->design_config.txt_config_mgr.activity_salesman_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->schedule_id_);
  }
  salesman_config_ptr = data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanExcelConfig(
                          p_activity_salesman_config_mgr,
                          thisa->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
  if ( salesman_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->day_index_);
    }
    if ( thisa->day_index_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->deliver_count_);
      }
      deliver_count = thisa->deliver_count_;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->day_index_);
      }
      if ( deliver_count <= thisa->day_index_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.obtain_method >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)salesman_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.obtain_method >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&salesman_config_ptr->special_reward.obtain_method);
        }
        if ( salesman_config_ptr->special_reward.obtain_method == METHOD_DAY_ACCUMULATION )
        {
          *(_DWORD *)(v2 + 64) = 0;
          if ( common::tools::StringUtils::strToNum<unsigned int>(
                 &salesman_config_ptr->special_reward.obtain_param,
                 (unsigned int *)(v2 + 64),
                 1) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v60,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/salesman_mp_activity.cpp",
              "takeSpecialReward",
              337);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&v60,
              (const char (*)[37])"strToNum accumulate_day_count failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
            v1 = -1;
            goto LABEL_135;
          }
          v18 = *(unsigned __int8 *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000);
          if ( (_BYTE)v18 != 0 && (char)v18 <= 3 )
            __asan_report_load4(&thisa->deliver_count_);
          if ( thisa->deliver_count_ < *(_DWORD *)(v2 + 64) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v60,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/salesman_mp_activity.cpp",
              "takeSpecialReward",
              342);
            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)&v60,
              (const char (*)[46])"deliver_count_ less than accumulate_day_count");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
            v1 = -1;
            goto LABEL_135;
          }
          if ( *(char *)(((unsigned __int64)&thisa->is_has_taken_special_reward_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&thisa->is_has_taken_special_reward_);
          if ( thisa->is_has_taken_special_reward_ )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v60,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/salesman_mp_activity.cpp",
              "takeSpecialReward",
              349);
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)&v60,
              (const char (*)[32])"player has taken special reward");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
            v1 = -1;
            goto LABEL_135;
          }
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          MpComp = Player::getMpComp(thisa->player_);
          if ( !PlayerMpComp::isInOtherWorldOrScene(MpComp) )
            goto LABEL_79;
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 96), 0LL);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          Player::getSceneComp(thisa->player_);
          PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 128));
          if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL) )
            goto LABEL_52;
          v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          OwnerUid = Scene::getOwnerUid(v20);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          if ( OwnerUid == Player::getUid(thisa->player_) )
LABEL_52:
            v22 = 0;
          else
            v22 = 1;
          if ( v22 )
          {
            std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            Scene::getOwnPlayer((const Scene *const)(v2 + 192));
            std::shared_ptr<Player>::operator=(
              (std::shared_ptr<Player> *const)(v2 + 96),
              (std::shared_ptr<Player> *)(v2 + 192));
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 192));
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            Player::getSceneComp(thisa->player_);
            PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 160));
            if ( !std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 160), 0LL) )
              goto LABEL_62;
            v23 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            v24 = World::getOwnerUid(v23);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            if ( v24 == Player::getUid(thisa->player_) )
LABEL_62:
              v25 = 0;
            else
              v25 = 1;
            if ( v25 )
            {
              std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 192));
              std::shared_ptr<Player>::operator=(
                (std::shared_ptr<Player> *const)(v2 + 96),
                (std::shared_ptr<Player> *)(v2 + 192));
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 192));
            }
            std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 160));
          }
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v60,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/salesman_mp_activity.cpp",
              "takeSpecialReward",
              374);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              (common::milog::MiLogStream *const)&v60,
              (const char (*)[18])"owner_ptr nullptr");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
            v1 = -1;
            v26 = 0;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 160));
            conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160))->design_config.txt_config_mgr.new_activity_config_mgr;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
            v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            ActivityComp = (unsigned int)Player::getActivityComp(v27);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&thisa->schedule_id_);
            }
            NewActivityExcelConfigMgr::getActivityIdByScheduleId(conf_mgr, thisa->schedule_id_);
            PlayerActivityComp::findActivity<SalesmanMpActivity>((PlayerActivityComp *const)(v2 + 192), ActivityComp);
            if ( std::operator==<SalesmanMpActivity>((const std::shared_ptr<SalesmanMpActivity> *)(v2 + 192), 0LL)
              || (v29 = std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192)),
                  !BaseActivity::isOpening((const BaseActivity *const)v29, 0)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v60,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/salesman_mp_activity.cpp",
                "takeSpecialReward",
                381);
              v31 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&v60,
                      (const char (*)[42])"owner salesman_mp is not open, owner_uid:");
              v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              *(_DWORD *)(v2 + 80) = Player::getUid(v32);
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v31,
                      (const unsigned int *)(v2 + 80));
              v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v33,
                      (const char (*)[15])", schedule_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &thisa->schedule_id_);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
              v1 = -1;
              v35 = 0;
            }
            else
            {
              v35 = 1;
            }
            std::shared_ptr<SalesmanMpActivity>::~shared_ptr((std::shared_ptr<SalesmanMpActivity> *const)(v2 + 192));
            v26 = v35 == 1;
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
          if ( v26 )
          {
LABEL_79:
            *(_DWORD *)(v2 + 80) = 0;
            ActionReason::ActionReason(
              (ActionReason *const)(v2 + 224),
              ACTION_REASON_SALESMAN_MP_REWARD,
              ITEM_LIMIT_ACTIVITY_SALESMAN_MP);
            if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.reward_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.reward_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&salesman_config_ptr->special_reward.reward_type);
            }
            if ( salesman_config_ptr->special_reward.reward_type )
            {
              if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.reward_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.reward_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&salesman_config_ptr->special_reward.reward_type);
              }
              if ( salesman_config_ptr->special_reward.reward_type == SPECIAL_MATERIAL )
              {
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->player_);
                ItemComp = Player::getItemComp(thisa->player_);
                if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&salesman_config_ptr->special_reward.id);
                }
                *(_DWORD *)(v2 + 80) = PlayerItemComp::checkGrantReward(
                                         ItemComp,
                                         salesman_config_ptr->special_reward.id,
                                         (const ActionReason *)(v2 + 224));
                if ( *(_DWORD *)(v2 + 80) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v60,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/salesman_mp_activity.cpp",
                    "takeSpecialReward",
                    409);
                  v39 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          (common::milog::MiLogStream *const)&v60,
                          (const char (*)[36])"checkGrantReward failed, reward_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    &salesman_config_ptr->special_reward.id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
                  v1 = *(_DWORD *)(v2 + 80);
                  goto LABEL_135;
                }
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->player_);
                p_id = Player::getItemComp(thisa->player_);
                if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
                {
                  p_id = (PlayerItemComp *)&salesman_config_ptr->special_reward.id;
                  __asan_report_load4(&salesman_config_ptr->special_reward.id);
                }
                id = salesman_config_ptr->special_reward.id;
                PlayerItemComp::grantReward(p_id, id, (const ActionReason *)(v2 + 224), 0LL);
                if ( *(char *)(((unsigned __int64)&thisa->is_has_taken_special_reward_ >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_store1(&thisa->is_has_taken_special_reward_, id, &thisa->is_has_taken_special_reward_);
                thisa->is_has_taken_special_reward_ = 1;
                std::vector<unsigned int>::push_back(
                  &thisa->obtained_special_reward_vec_,
                  &salesman_config_ptr->special_reward.id);
                BaseActivity::notifyClientData((BaseActivity *const)thisa, 0);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.reward_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.reward_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&salesman_config_ptr->special_reward.reward_type);
                }
                if ( salesman_config_ptr->special_reward.reward_type != SPECIAL_DROP )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v60,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/salesman_mp_activity.cpp",
                    "takeSpecialReward",
                    445);
                  v52 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                          (common::milog::MiLogStream *const)&v60,
                          (const char (*)[47])"unexpected salesman special type, schedule_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &thisa->schedule_id_);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
                  v1 = -1;
                  goto LABEL_135;
                }
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->player_);
                v42 = Player::getItemComp(thisa->player_);
                if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
                {
                  v42 = (PlayerItemComp *)&salesman_config_ptr->special_reward.id;
                  __asan_report_load4(&salesman_config_ptr->special_reward.id);
                }
                *(_DWORD *)(v2 + 80) = PlayerItemComp::checkFrontLooseGrantDropItems(
                                         v42,
                                         salesman_config_ptr->special_reward.id,
                                         1u,
                                         (const ActionReason *)(v2 + 224),
                                         0LL);
                if ( *(_DWORD *)(v2 + 80) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v60,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/salesman_mp_activity.cpp",
                    "takeSpecialReward",
                    424);
                  v43 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          (common::milog::MiLogStream *const)&v60,
                          (const char (*)[43])"checkFrontLooseGrantDropItems failed, ret:");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v43, (const int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
                  v1 = *(_DWORD *)(v2 + 80);
                  goto LABEL_135;
                }
                std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v2 + 288));
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->player_);
                v44 = Player::getItemComp(thisa->player_);
                if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
                {
                  v44 = (PlayerItemComp *)&salesman_config_ptr->special_reward.id;
                  __asan_report_load4(&salesman_config_ptr->special_reward.id);
                }
                v45 = salesman_config_ptr->special_reward.id;
                PlayerItemComp::grantDropItems(
                  v44,
                  v45,
                  1u,
                  (const ActionReason *)(v2 + 224),
                  (std::vector<AddItemResult> *)(v2 + 288));
                if ( *(char *)(((unsigned __int64)&thisa->is_has_taken_special_reward_ >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_store1(&thisa->is_has_taken_special_reward_, v45, &thisa->is_has_taken_special_reward_);
                thisa->is_has_taken_special_reward_ = 1;
                std::vector<unsigned int>::push_back(
                  &thisa->obtained_special_drop_vec_,
                  &salesman_config_ptr->special_reward.id);
                BaseActivity::notifyClientData((BaseActivity *const)thisa, 0);
                common::tools::perf::make_shared<proto_log::PlayerLogBodySalesmanTakeSpecialReward>();
                v46 = std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&thisa->activity_id_);
                }
                proto_log::PlayerLogBodySalesmanTakeSpecialReward::set_activity_id(v46, thisa->activity_id_);
                v47 = std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&thisa->schedule_id_);
                }
                proto_log::PlayerLogBodySalesmanTakeSpecialReward::set_schedule_id(v47, thisa->schedule_id_);
                v48 = std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&salesman_config_ptr->special_reward.id);
                }
                proto_log::PlayerLogBodySalesmanTakeSpecialReward::set_drop_id(
                  v48,
                  salesman_config_ptr->special_reward.id);
                v49 = std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanTakeSpecialReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                v50 = proto_log::PlayerLogBodySalesmanTakeSpecialReward::mutable_item_vec(v49);
                common::tools::MiscUtils::vectorToRepeated<AddItemResult,proto_log::ItemLog,void (AddItemResult::*)(proto_log::ItemLog&)const>(
                  (const std::vector<AddItemResult> *)(v2 + 288),
                  v50,
                  (void (*)(const AddItemResult *, proto_log::ItemLog *))AddItemResult::toItemLog);
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->player_);
                player = thisa->player_;
                std::shared_ptr<google::protobuf::Message>::shared_ptr(
                  (std::shared_ptr<google::protobuf::Message> *const)(v2 + 192),
                  0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySalesmanTakeSpecialReward,void>(
                  (std::shared_ptr<google::protobuf::Message> *const)(v2 + 160),
                  (const std::shared_ptr<proto_log::PlayerLogBodySalesmanTakeSpecialReward> *)(v2 + 128));
                Player::printStatLog(player, (MessagePtr *)(v2 + 160), (MessagePtr *)(v2 + 192), 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 160));
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 192));
                std::shared_ptr<proto_log::PlayerLogBodySalesmanTakeSpecialReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySalesmanTakeSpecialReward> *const)(v2 + 128));
                std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v2 + 288));
              }
            }
            else
            {
              *(_QWORD *)(v2 + 192) = 0LL;
              *(_QWORD *)(v2 + 200) = 0LL;
              *(_DWORD *)(v2 + 196) = 1;
              if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&salesman_config_ptr->special_reward.id);
              }
              *(_DWORD *)(v2 + 192) = salesman_config_ptr->special_reward.id;
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              v36 = Player::getItemComp(thisa->player_);
              *(_DWORD *)(v2 + 80) = PlayerItemComp::checkAddItem(
                                       v36,
                                       (const ItemParam *)(v2 + 192),
                                       (const ActionReason *)(v2 + 224));
              if ( *(_DWORD *)(v2 + 80) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v60,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/salesman_mp_activity.cpp",
                  "takeSpecialReward",
                  395);
                common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  (common::milog::MiLogStream *const)&v60,
                  (const char (*)[20])"checkAddItem failed");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
                v1 = *(_DWORD *)(v2 + 80);
                goto LABEL_135;
              }
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              v37 = Player::getItemComp(thisa->player_);
              PlayerItemComp::addItem(v37, (const ItemParam *)(v2 + 192), (const ActionReason *)(v2 + 224), 0LL);
              if ( *(char *)(((unsigned __int64)&thisa->is_has_taken_special_reward_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(
                  &thisa->is_has_taken_special_reward_,
                  v2 + 192,
                  &thisa->is_has_taken_special_reward_);
              thisa->is_has_taken_special_reward_ = 1;
              std::vector<unsigned int>::push_back(
                &thisa->obtained_special_material_vec_,
                &salesman_config_ptr->special_reward.id);
              BaseActivity::notifyClientData((BaseActivity *const)thisa, 0);
            }
            v1 = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v60,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/salesman_mp_activity.cpp",
            "takeSpecialReward",
            330);
          v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  (common::milog::MiLogStream *const)&v60,
                  (const char (*)[56])"salesman_mp special reward obtain_method error, method:");
          if ( *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.obtain_method >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)salesman_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&salesman_config_ptr->special_reward.obtain_method >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&salesman_config_ptr->special_reward.obtain_method);
          }
          val = (char *)data::enumValToStr(salesman_config_ptr->special_reward.obtain_method);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v17, (const char *const *)&val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
          v1 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/salesman_mp_activity.cpp",
          "takeSpecialReward",
          323);
        v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                (common::milog::MiLogStream *const)&v60,
                (const char (*)[15])"deliver_count:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &thisa->deliver_count_);
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" day_index:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &thisa->day_index_);
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        operator<<(v16, thisa->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
        v1 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/salesman_mp_activity.cpp",
        "takeSpecialReward",
        316);
      v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              (common::milog::MiLogStream *const)&v60,
              (const char (*)[45])"day_index_ is 0, activity is closed, player:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      operator<<(v10, thisa->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
      v1 = 860;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v60,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "takeSpecialReward",
      310);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           (common::milog::MiLogStream *const)&v60,
           (const char (*)[51])"findActivitySalesmanExcelConfig fail, schedule_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &thisa->schedule_id_);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    operator<<(v9, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
    v1 = 0;
  }
LABEL_135:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = v1;
  if ( v55 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 454: range 0000000016C5BF46-0000000016C5C3C1
uint32_t __cdecl SalesmanMpActivity::getDayIndexByCurrentTime(const SalesmanMpActivity *const this)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  ActivitySalesmanExcelConfigMgr *p_activity_salesman_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  time_t v10; // rdx
  time_t Now; // rax
  uint32_t time_offset_sec; // [rsp+10h] [rbp-60h]
  uint32_t start_time_day; // [rsp+14h] [rbp-5Ch]
  uint32_t cur_time_day; // [rsp+18h] [rbp-58h]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+20h] [rbp-50h]
  const data::ActivitySalesmanExcelConfig *salesman_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                          p_new_activity_config_mgr,
                          this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( !schedule_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "getDayIndexByCurrentTime",
      458);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"findActivityScheduleExcelConfig fail, schedule_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_6:
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return 0;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_activity_salesman_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_salesman_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  salesman_config_ptr = data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanExcelConfig(
                          p_activity_salesman_config_mgr,
                          this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( !salesman_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "getDayIndexByCurrentTime",
      465);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"findActivitySalesmanExcelConfig fail, schedule_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_6;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  time_offset_sec = ConstValueExcelConfigMgr::getTimeOffsetSec(&v9->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  v10 = time_offset_sec;
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&schedule_config_ptr->begin_time);
  }
  start_time_day = common::tools::TimeUtils::getTimeDay(schedule_config_ptr->begin_time, v10);
  Now = common::tools::TimeUtils::getNow();
  cur_time_day = common::tools::TimeUtils::getTimeDay(Now, time_offset_sec);
  if ( start_time_day <= cur_time_day )
  {
    if ( cur_time_day - start_time_day + 1 <= std::vector<unsigned int>::size(&salesman_config_ptr->daily_config_id_list) )
      return cur_time_day - start_time_day + 1;
    else
      return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "getDayIndexByCurrentTime",
      474);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v18,
      (const char (*)[39])"start_time_day great than cur_time_day");
    common::milog::MiLogStream::~MiLogStream(&v18);
    return 0;
  }
};

// Line 489: range 0000000016C5C3C2-0000000016C5C5DE
void __cdecl SalesmanMpActivity::refreshDayIndexByCurrentTime(SalesmanMpActivity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  uint32_t new_day_index; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  new_day_index = SalesmanMpActivity::getDayIndexByCurrentTime(this);
  if ( new_day_index )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->day_index_);
    }
    if ( new_day_index > this->day_index_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->day_index_, v1, &this->day_index_);
      }
      this->day_index_ = new_day_index;
      v2 = (*(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v2 )
        __asan_report_store4(&this->status_, (((_BYTE)this - 92) & 7u) + 3, v2);
      this->status_ = SALESMAN_STATUS_UNSTARTED;
      v3 = ((_BYTE)this + 42) & 7;
      v4 = (*(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v4 )
        __asan_report_store1(&this->is_play_open_anim_, v3, v4);
      this->is_play_open_anim_ = 0;
      SalesmanMpActivity::updateNormalReward(this);
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/salesman_mp_activity.cpp",
        "refreshDayIndexByCurrentTime",
        505);
      v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v9, (const char (*)[11])"day_index:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->day_index_);
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v7, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
  }
};

// Line 510: range 0000000016C5C5E0-0000000016C5C92F
int32_t __cdecl SalesmanMpActivity::updateNormalReward(SalesmanMpActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ActivitySalesmanExcelConfigMgr *p_activity_salesman_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  const data::ActivitySalesmanExcelConfig *salesman_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 24 select_normal_reward:517";
  *(_QWORD *)(v1 + 16) = SalesmanMpActivity::updateNormalReward;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_activity_salesman_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_salesman_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  salesman_config_ptr = data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanExcelConfig(
                          p_activity_salesman_config_mgr,
                          this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( salesman_config_ptr )
  {
    *(_DWORD *)(v1 + 32) = 0;
    if ( SalesmanMpActivity::randNewNormalReward(
           this,
           &salesman_config_ptr->normal_reward_id_list,
           &this->normal_reward_vec_,
           (uint32_t *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/salesman_mp_activity.cpp",
        "updateNormalReward",
        520);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v12,
             (const char (*)[41])"randNewNormalReward failed, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->schedule_id_);
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = -1;
    }
    else
    {
      std::vector<unsigned int>::push_back(
        &this->normal_reward_vec_,
        (const std::vector<unsigned int>::value_type *)(v1 + 32));
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "updateNormalReward",
      514);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v12,
           (const char (*)[51])"findActivitySalesmanExcelConfig fail, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 5;
  }
  if ( v13 == (char *)v1 )
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

// Line 529: range 0000000016C5C930-0000000016C5CD43
int32_t __cdecl SalesmanMpActivity::randNewNormalReward(
        const SalesmanMpActivity *const this,
        const std::vector<unsigned int> *reward_id_vec,
        const std::vector<unsigned int> *normal_reward_vec,
        uint32_t *selected_normal_reward)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  int32_t v9; // r14d
  int v10; // eax
  std::vector<unsigned int>::size_type v11; // r14
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int>::size_type v13; // rsi
  std::vector<unsigned int>::reference v14; // rax
  uint32_t *v15; // rdx
  uint32_t v16; // ecx
  char v17; // dl
  __int64 v18; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 rand_index:543 64 24 24 candidate_reward_vec:530";
  *(_QWORD *)(v4 + 16) = SalesmanMpActivity::randNewNormalReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 64));
  __for_range = reward_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(reward_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(reward_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 48) = *v8;
    if ( !common::tools::MiscUtils::isContains<unsigned int>(normal_reward_vec, (const unsigned int *)(v4 + 48)) )
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v4 + 64),
        (const std::vector<unsigned int>::value_type *)(v4 + 48));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "randNewNormalReward",
      540);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v25,
      (const char (*)[30])"candidate_reward_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v9 = -1;
  }
  else
  {
    v10 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::tools::RandomUtils::rand<unsigned int>(0, v10 - 1);
    v11 = *(unsigned int *)(v4 + 48);
    if ( v11 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 64)) )
    {
      v13 = *(unsigned int *)(v4 + 48);
      v14 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 64), v13);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      v17 = *(_BYTE *)(((unsigned __int64)selected_normal_reward >> 3) + 0x7FFF8000);
      LOBYTE(v13) = v17 != 0;
      v18 = (v17 != 0) & (unsigned __int8)((char)(((unsigned __int8)selected_normal_reward & 7) + 3) >= v17);
      if ( (_BYTE)v18 )
        __asan_report_store4(selected_normal_reward, v13, v18);
      *selected_normal_reward = v16;
      v9 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/salesman_mp_activity.cpp",
        "randNewNormalReward",
        546);
      v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v25,
              (const char (*)[57])"rand_index exceed candidate_reward_vec size, rand_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      v9 = -1;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 64));
  result = v9;
  if ( v26 == (char *)v4 )
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

// Line 555: range 0000000016C5CD44-0000000016C5CD63
uint32_t __cdecl SalesmanMpActivity::getRewardedCount(const SalesmanMpActivity *const this)
{
  return std::vector<unsigned int>::size(&this->obtained_normal_reward_vec_);
};

// Line 561: range 0000000016C5CD64-0000000016C5CE5B
void __fastcall SalesmanMpActivity::clearTalkRecordByGm(SalesmanMpActivity *const this, uint32_t talk_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 talk_id:560";
  *(_QWORD *)(v2 + 16) = SalesmanMpActivity::clearTalkRecordByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = talk_id;
  if ( *(_DWORD *)(v2 + 32) )
    common::tools::MiscUtils::removeValues<std::vector<unsigned int>,unsigned int>(
      &this->finished_talk_id_vec_,
      (const unsigned int *)(v2 + 32));
  else
    std::vector<unsigned int>::clear(&this->finished_talk_id_vec_);
  BaseActivity::updateAllConds((BaseActivity *const)this);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 575: range 0000000016C5CE5C-0000000016C5D6AB
int32_t __cdecl SalesmanMpActivity::getOwnerCurRewardId(SalesmanMpActivity *const this, uint32_t *reward_id)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t OwnerUid; // r15d
  char v8; // al
  _BOOL4 v9; // r15d
  Player *v10; // rax
  uint32_t ActivityComp; // r15d
  __int64 v12; // rsi
  std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  SalesmanMpActivity *v15; // rax
  uint32_t CurRewardId; // ecx
  char v17; // dl
  __int64 v18; // rdx
  int v19; // r15d
  const char *v20; // rsi
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // r15d
  char v23; // al
  _BOOL4 v24; // r15d
  Player *v25; // rax
  uint32_t v26; // r15d
  std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  SalesmanMpActivity *v29; // rax
  uint32_t v30; // ecx
  char v31; // dl
  __int64 v32; // rdx
  int v33; // r15d
  uint32_t v34; // ecx
  char v35; // dl
  __int64 v36; // rdx
  int32_t result; // eax
  NewActivityExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v40; // [rsp+30h] [rbp-F0h] BYREF
  char v41[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 13 scene_ptr:578 64 16 13 world_ptr:595 96 16 13 owner_ptr:599 128 16 19 mp_activity_ptr:605";
  *(_QWORD *)(v3 + 16) = SalesmanMpActivity::getOwnerCurRewardId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
    goto LABEL_11;
  v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  OwnerUid = Scene::getOwnerUid(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( OwnerUid == Player::getUid(this->player_) )
LABEL_11:
    v8 = 0;
  else
    v8 = 1;
  if ( !v8 )
    goto LABEL_61;
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  Scene::getOwnPlayer((const Scene *const)(v3 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "getOwnerCurRewardId",
      584);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v40, (const char (*)[18])"owner_ptr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v2 = -1;
    v9 = 0;
  }
  else
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    ActivityComp = (unsigned int)Player::getActivityComp(v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    NewActivityExcelConfigMgr::getActivityIdByScheduleId(conf_mgr, this->schedule_id_);
    PlayerActivityComp::findActivity<SalesmanMpActivity>((PlayerActivityComp *const)(v3 + 128), ActivityComp);
    v12 = 0LL;
    if ( std::operator!=<SalesmanMpActivity>((const std::shared_ptr<SalesmanMpActivity> *)(v3 + 128), 0LL)
      && (v13 = std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
          v12 = 0LL,
          BaseActivity::isOpening((const BaseActivity *const)v13, 0)) )
    {
      v15 = std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      CurRewardId = SalesmanMpActivity::getCurRewardId(v15);
      v17 = *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v17 != 0;
      v18 = (v17 != 0) & (unsigned __int8)((char)(((unsigned __int8)reward_id & 7) + 3) >= v17);
      if ( (_BYTE)v18 )
        __asan_report_store4(reward_id, v12, v18);
      *reward_id = CurRewardId;
      SalesmanMpActivity::tryUpdateStatus(this);
      v2 = 0;
      v19 = 0;
    }
    else
    {
      v19 = 1;
    }
    std::shared_ptr<SalesmanMpActivity>::~shared_ptr((std::shared_ptr<SalesmanMpActivity> *const)(v3 + 128));
    v9 = v19 == 1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  if ( v9 )
  {
LABEL_61:
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 64));
    v20 = 0LL;
    if ( !std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 64), 0LL) )
      goto LABEL_35;
    v21 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v22 = World::getOwnerUid(v21);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    if ( v22 == Player::getUid(this->player_) )
LABEL_35:
      v23 = 0;
    else
      v23 = 1;
    if ( !v23 )
      goto LABEL_52;
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 96));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/salesman_mp_activity.cpp",
        "getOwnerCurRewardId",
        602);
      v20 = "owner_ptr nullptr";
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v40, (const char (*)[18])"owner_ptr nullptr");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v2 = -1;
      v24 = 0;
    }
    else
    {
      v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v26 = (unsigned int)Player::getActivityComp(v25);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      NewActivityExcelConfigMgr::getActivityIdByScheduleId(conf_mgr, this->schedule_id_);
      PlayerActivityComp::findActivity<SalesmanMpActivity>((PlayerActivityComp *const)(v3 + 128), v26);
      v20 = 0LL;
      if ( std::operator!=<SalesmanMpActivity>((const std::shared_ptr<SalesmanMpActivity> *)(v3 + 128), 0LL)
        && (v27 = std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
            v20 = 0LL,
            BaseActivity::isOpening((const BaseActivity *const)v27, 0)) )
      {
        v29 = std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        v30 = SalesmanMpActivity::getCurRewardId(v29);
        v31 = *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000);
        LOBYTE(v20) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)(((unsigned __int8)reward_id & 7) + 3) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store4(reward_id, v20, v32);
        *reward_id = v30;
        SalesmanMpActivity::tryUpdateStatus(this);
        v2 = 0;
        v33 = 0;
      }
      else
      {
        v33 = 1;
      }
      std::shared_ptr<SalesmanMpActivity>::~shared_ptr((std::shared_ptr<SalesmanMpActivity> *const)(v3 + 128));
      v24 = v33 == 1;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
    if ( v24 )
    {
LABEL_52:
      v34 = SalesmanMpActivity::getCurRewardId(this);
      v35 = *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000);
      LOBYTE(v20) = v35 != 0;
      v36 = (v35 != 0) & (unsigned __int8)((char)(((unsigned __int8)reward_id & 7) + 3) >= v35);
      if ( (_BYTE)v36 )
        __asan_report_store4(reward_id, v20, v36);
      *reward_id = v34;
      SalesmanMpActivity::tryUpdateStatus(this);
      v2 = 0;
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v2;
  if ( v41 == (char *)v3 )
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

// Line 622: range 0000000016C5D6AC-0000000016C5D793
uint32_t __cdecl SalesmanMpActivity::getCurRewardId(SalesmanMpActivity *const this)
{
  std::vector<unsigned int>::reference v2; // rax
  uint32_t *v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->normal_reward_vec_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_mp_activity.cpp",
      "getCurRewardId",
      625);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v4, (const char (*)[25])"normal_reward_vec_ emtpy");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
  else
  {
    v2 = std::vector<unsigned int>::back(&this->normal_reward_vec_);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    return *v3;
  }
};

// Line 633: range 0000000016C5D794-0000000016C5D819
void __cdecl SalesmanMpActivity::tryUpdateStatus(SalesmanMpActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->status_);
  }
  if ( this->status_ <= SALESMAN_STATUS_UNSTARTED )
  {
    this->status_ = SALESMAN_STATUS_STARTED;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    BaseActivity::updateAllConds((BaseActivity *const)this);
  }
};
