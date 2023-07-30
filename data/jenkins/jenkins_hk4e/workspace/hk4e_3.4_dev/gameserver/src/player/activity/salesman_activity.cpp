// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/salesman_activity.cpp

// Line 27: range 0000000016C53588-0000000016C53785
int32_t __cdecl SalesmanActivity::fromScheduleBin(SalesmanActivity *const this, const proto::ActivityScheduleBin *bin)
{
  google::protobuf::uint32 v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx
  char v6; // al
  uint32_t deliver_day_index; // ecx
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // al
  const google::protobuf::RepeatedField<unsigned int> *v12; // rax
  const google::protobuf::RepeatedField<unsigned int> *v13; // rax
  const google::protobuf::RepeatedField<unsigned int> *v14; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v15; // rax
  const proto::SalesmanScheduleBin *salesman_bin; // [rsp+18h] [rbp-18h]

  salesman_bin = proto::ActivityScheduleBin::salesman_schedule_bin(bin);
  v2 = proto::SalesmanScheduleBin::status(salesman_bin);
  v3 = (((_BYTE)this - 92) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
  {
    v2 = (_DWORD)this + 932;
    __asan_report_store4(&this->status_, v3, v4);
  }
  this->status_ = v2;
  v5 = proto::SalesmanScheduleBin::day_index(salesman_bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v3) = v6 != 0;
    __asan_report_store4(&this->day_index_, v3, v5);
  }
  this->day_index_ = v5;
  deliver_day_index = proto::SalesmanScheduleBin::last_deliver_day_index(salesman_bin);
  v8 = *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->last_deliver_day_index_, v3, v9);
  this->last_deliver_day_index_ = deliver_day_index;
  v10 = proto::SalesmanScheduleBin::deliver_count(salesman_bin);
  v11 = *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v3) = v11 != 0;
    __asan_report_store4(&this->deliver_count_, v3, v10);
  }
  this->deliver_count_ = v10;
  v12 = proto::SalesmanScheduleBin::obtained_normal_reward_index_list(salesman_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v12, &this->obtained_normal_reward_index_vec_);
  v13 = proto::SalesmanScheduleBin::obtained_special_reward_index_list(salesman_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v13, &this->obtained_special_reward_index_vec_);
  v14 = proto::SalesmanScheduleBin::finished_talk_id_list(salesman_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v14, &this->finished_talk_id_vec_);
  v15 = proto::SalesmanScheduleBin::selected_reward_id_map(salesman_bin);
  common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->selected_reward_id_map_,
    v15);
  return 0;
};

// Line 42: range 0000000016C53786-0000000016C53982
int32_t __cdecl SalesmanActivity::toScheduleBin(const SalesmanActivity *const this, proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v5; // rax
  proto::SalesmanScheduleBin *salesman_bin; // [rsp+18h] [rbp-8h]

  salesman_bin = proto::ActivityScheduleBin::mutable_salesman_schedule_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->status_);
  }
  proto::SalesmanScheduleBin::set_status(salesman_bin, this->status_);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->day_index_);
  }
  proto::SalesmanScheduleBin::set_day_index(salesman_bin, this->day_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_deliver_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_deliver_day_index_);
  }
  proto::SalesmanScheduleBin::set_last_deliver_day_index(salesman_bin, this->last_deliver_day_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->deliver_count_);
  }
  proto::SalesmanScheduleBin::set_deliver_count(salesman_bin, this->deliver_count_);
  v2 = proto::SalesmanScheduleBin::mutable_obtained_normal_reward_index_list(salesman_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->obtained_normal_reward_index_vec_, v2);
  v3 = proto::SalesmanScheduleBin::mutable_obtained_special_reward_index_list(salesman_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->obtained_special_reward_index_vec_, v3);
  v4 = proto::SalesmanScheduleBin::mutable_finished_talk_id_list(salesman_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->finished_talk_id_vec_, v4);
  v5 = proto::SalesmanScheduleBin::mutable_selected_reward_id_map(salesman_bin);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->selected_reward_id_map_,
    v5);
  return 0;
};

// Line 57: range 0000000016C53984-0000000016C53BA0
int32_t __cdecl SalesmanActivity::toClient(SalesmanActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  google::protobuf::Map<unsigned int,unsigned int> *v4; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::SalesmanActivityDetailInfo *salesman_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_activity.cpp",
      "toClient",
      60);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v7,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
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
    v4 = proto::SalesmanActivityDetailInfo::mutable_selected_reward_id_map(salesman_info);
    common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
      &this->selected_reward_id_map_,
      v4);
    return 0;
  }
};

// Line 72: range 0000000016C53BA2-0000000016C53BC8
void __cdecl SalesmanActivity::onLogin(SalesmanActivity *const this)
{
  BaseActivity::onLogin((BaseActivity *const)this);
  SalesmanActivity::refreshDayIndexByCurrentTime(this);
};

// Line 78: range 0000000016C53BCA-0000000016C53BE4
void __cdecl SalesmanActivity::onStart(SalesmanActivity *const this)
{
  SalesmanActivity::refreshDayIndexByCurrentTime(this);
};

// Line 83: range 0000000016C53BE6-0000000016C53D6A
void __cdecl SalesmanActivity::onClear(SalesmanActivity *const this)
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
  if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deliver_count_, v3, &this->deliver_count_);
  }
  this->deliver_count_ = 0;
  std::vector<unsigned int>::clear(&this->obtained_normal_reward_index_vec_);
  std::vector<unsigned int>::clear(&this->obtained_special_reward_index_vec_);
  std::vector<unsigned int>::clear(&this->finished_talk_id_vec_);
  std::set<std::pair<unsigned int,unsigned int>>::clear(&this->loaded_group_config_id_set_);
  std::map<unsigned int,unsigned int>::clear(&this->selected_reward_id_map_);
};

// Line 97: range 0000000016C53D6C-0000000016C542D6
bool __cdecl SalesmanActivity::checkCondIsMeet(SalesmanActivity *const this, const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  bool result; // al
  std::vector<int>::const_reference v7; // rax
  _DWORD *v8; // rdx
  std::vector<int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  std::vector<int>::const_reference v11; // rax
  _DWORD *v12; // rdx
  uint32_t last_deliver_day_index; // ecx
  uint32_t RewardedCount; // ecx
  bool is_need_finish; // [rsp+1Fh] [rbp-C1h]
  size_t idx; // [rsp+20h] [rbp-C0h]
  std::pair<unsigned int,unsigned int> value; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:119 64 4 13 config_id:120";
  *(_QWORD *)(v2 + 16) = SalesmanActivity::checkCondIsMeet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  switch ( cond->type )
  {
    case NEW_ACTIVITY_COND_FINISH_TALK:
    case NEW_ACTIVITY_COND_NOT_FINISH_TALK:
      if ( std::vector<int>::size(&cond->param) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cond->type);
        }
        is_need_finish = cond->type == NEW_ACTIVITY_COND_FINISH_TALK;
        v7 = std::vector<int>::operator[](&cond->param, 0LL);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        *(_DWORD *)(v2 + 64) = *v8;
        result = is_need_finish == common::tools::MiscUtils::isContains<unsigned int>(
                                     &this->finished_talk_id_vec_,
                                     (const unsigned int *)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/salesman_activity.cpp",
          "checkCondIsMeet",
          105);
        v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
               &v18,
               (const char (*)[36])"cond param size error, activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 0;
      }
      break;
    case NEW_ACTIVITY_COND_CREATE_NPC:
      for ( idx = 0LL;
            idx < std::vector<int>::size(&cond->param) && idx + 1 < std::vector<int>::size(&cond->param);
            idx += 2LL )
      {
        v9 = std::vector<int>::operator[](&cond->param, idx);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v2 + 48) = *v10;
        v11 = std::vector<int>::operator[](&cond->param, idx + 1);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v2 + 64) = *v12;
        value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v2 + 48), (unsigned int *)(v2 + 64));
        if ( common::tools::MiscUtils::isContains<std::set<std::pair<unsigned int,unsigned int>>,std::pair<unsigned int,unsigned int>>(
               &this->loaded_group_config_id_set_,
               &value) )
        {
          result = 1;
          goto LABEL_34;
        }
      }
      result = 0;
      break;
    case NEW_ACTIVITY_COND_SALESMAN_CAN_DELIVER:
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
      result = last_deliver_day_index < this->day_index_;
      break;
    case NEW_ACTIVITY_COND_SALESMAN_CAN_GET_REWARD:
      RewardedCount = SalesmanActivity::getRewardedCount(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->deliver_count_);
      }
      result = RewardedCount < this->deliver_count_;
      break;
    default:
      result = BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
      break;
  }
LABEL_34:
  if ( v19 == (char *)v2 )
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

// Line 144: range 0000000016C542D8-0000000016C54921
void __fastcall SalesmanActivity::recordSalesmanTalkOnTalkFinish(SalesmanActivity *const this, uint32_t talk_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
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
  const ActivitySalesmanExcelConfigMgr *p_activity_salesman_config_mgr; // rdi
  uint32_t day_index; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  __int64 v22; // rdx
  const data::ActivitySalesmanDailyExcelConfig *daily_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-80h] BYREF
  char v27[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 talk_id:143";
  *(_QWORD *)(v2 + 16) = SalesmanActivity::recordSalesmanTalkOnTalkFinish;
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
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/salesman_activity.cpp",
        "recordSalesmanTalkOnTalkFinish",
        155);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v26,
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
      common::milog::MiLogStream::~MiLogStream(&v26);
      if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->status_);
      }
      if ( this->status_ <= SALESMAN_STATUS_UNSTARTED )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        p_activity_salesman_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_salesman_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          p_activity_salesman_config_mgr = (const ActivitySalesmanExcelConfigMgr *)&this->day_index_;
          __asan_report_load4(&this->day_index_);
        }
        day_index = this->day_index_;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          p_activity_salesman_config_mgr = (const ActivitySalesmanExcelConfigMgr *)&this->schedule_id_;
          __asan_report_load4(&this->schedule_id_);
        }
        daily_config_ptr = ActivitySalesmanExcelConfigMgr::findDailyConfig(
                             p_activity_salesman_config_mgr,
                             this->schedule_id_,
                             day_index);
        std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( daily_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_talk_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_talk_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&daily_config_ptr->daily_talk_id);
          }
          if ( daily_config_ptr->daily_talk_id == *(_DWORD *)(v2 + 32) )
          {
            v22 = (*(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000));
            if ( (_BYTE)v22 )
              __asan_report_store4(&this->status_, (((_BYTE)this - 92) & 7u) + 3, v22);
            this->status_ = SALESMAN_STATUS_STARTED;
            BaseActivity::notifyClientData((BaseActivity *const)this, 0);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/salesman_activity.cpp",
            "recordSalesmanTalkOnTalkFinish",
            163);
          v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v26,
                  (const char (*)[35])"findDailyConfig fail, schedule_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->schedule_id_);
          v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" day_index:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->day_index_);
          v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v21, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
      }
      BaseActivity::updateAllConds((BaseActivity *const)this);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/salesman_activity.cpp",
      "recordSalesmanTalkOnTalkFinish",
      147);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v26, (const char (*)[42])off_25F11700);
    v6 = common::milog::MiLogStream::operator<<<unsigned int>(v5, &this->finished_talk_id_vec_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 178: range 0000000016C54922-0000000016C54D08
void __fastcall SalesmanActivity::recordSalesmanNpcCreation(
        SalesmanActivity *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  unsigned int *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  std::pair<unsigned int,unsigned int> value; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 group_id:177 64 4 13 config_id:177";
  *(_QWORD *)(v3 + 16) = SalesmanActivity::recordSalesmanNpcCreation;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = group_id;
  *(_DWORD *)(v3 + 64) = config_id;
  if ( std::set<std::pair<unsigned int,unsigned int>>::size(&this->loaded_group_config_id_set_) <= 0x63 )
  {
    value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 48), (unsigned int *)(v3 + 64));
    if ( !common::tools::MiscUtils::isContains<std::set<std::pair<unsigned int,unsigned int>>,std::pair<unsigned int,unsigned int>>(
            &this->loaded_group_config_id_set_,
            &value) )
    {
      std::set<std::pair<unsigned int,unsigned int>>::emplace<unsigned int &,unsigned int &>(
        &this->loaded_group_config_id_set_,
        (unsigned int *)(v3 + 48),
        (unsigned int *)(v3 + 64),
        (unsigned int *)&this->loaded_group_config_id_set_,
        v9);
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/salesman_activity.cpp",
        "recordSalesmanNpcCreation",
        189);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v21,
              (const char (*)[34])"record npc creation. schedule_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->schedule_id_);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" activity_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" group_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" config_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v18, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v21);
      SalesmanActivity::refreshDayIndexByCurrentTime(this);
      BaseActivity::updateAllConds((BaseActivity *const)this);
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/salesman_activity.cpp",
      "recordSalesmanNpcCreation",
      181);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(&v21, (const char (*)[48])off_25F11880);
    v7 = common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>(
           v6,
           &this->loaded_group_config_id_set_);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v3 )
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

// Line 202: range 0000000016C54D0A-0000000016C55567
void __cdecl SalesmanActivity::beforeGetActivityInfoReq(SalesmanActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rax
  _DWORD *v10; // rdx
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  Group *v15; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-268h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-260h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-258h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-250h] BYREF
  char v20[560]; // [rsp+50h] [rbp-230h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 4 17 new_day_index:203 64 4 12 group_id:217 80 16 19 world_scene_ptr:211 112 16 13 group_pt"
                        "r:219 144 28 15 log_context:225 208 48 16 group_id_set:210 288 160 18 script_context:229";
  *(_QWORD *)(v1 + 16) = SalesmanActivity::beforeGetActivityInfoReq;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = -219020288;
  v3[536862726] = 62194;
  v3[536862728] = -218959118;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  *(_DWORD *)(v1 + 48) = SalesmanActivity::getDayIndexByCurrentTime(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->day_index_);
  }
  if ( this->day_index_ < *(_DWORD *)(v1 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 112));
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112))->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    NewActivityExcelConfigMgr::getActivityCreateNpcRelatedGroups(
      (std::set<unsigned int> *)(v1 + 208),
      p_new_activity_config_mgr,
      this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 80));
    if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/salesman_activity.cpp",
        "beforeGetActivityInfoReq",
        214);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v19,
             (const char (*)[32])"getMainWorldScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      __for_range = (std::set<unsigned int> *)(v1 + 208);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 208))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 208))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v1 + 64) = *v10;
        v11 = (unsigned int)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        Scene::findGroup((Scene *const)(v1 + 112), v11);
        if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/salesman_activity.cpp",
            "beforeGetActivityInfoReq",
            222);
          v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v19,
                  (const char (*)[26])"findGroup fail, group_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v1 + 64));
          v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v14, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
        else
        {
          SuiteLogContext::SuiteLogContext((SuiteLogContext *const)(v1 + 144));
          *(_DWORD *)(v1 + 144) = 9;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->activity_id_);
          }
          *(_DWORD *)(v1 + 156) = this->activity_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->schedule_id_);
          }
          *(_DWORD *)(v1 + 160) = this->schedule_id_;
          ScriptContext::ScriptContext((ScriptContext *const)(v1 + 288));
          v15 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
          Group::refresh(v15, (const ScriptContext *)(v1 + 288), *(SuiteLogContext *)(v1 + 144));
          ScriptContext::~ScriptContext((ScriptContext *const)(v1 + 288));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 112));
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 80));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 208));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/salesman_activity.cpp",
      "beforeGetActivityInfoReq",
      206);
    v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])"day_index:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->day_index_);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" new_day_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
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
  }
};

// Line 236: range 0000000016C55568-0000000016C562C7
int32_t __cdecl SalesmanActivity::deliverItemToSalesman(SalesmanActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
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
  std::vector<data::IdCountConfig> *p_cost_item_list; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  uint32_t v32; // ecx
  char v33; // dl
  __int64 v34; // rdx
  __int64 v35; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  Player *player; // r14
  PlayerWatcherComp *WatcherComp; // rcx
  int32_t result; // eax
  std::string v41; // [rsp+0h] [rbp-110h]
  SalesmanActivity *thisa; // [rsp+8h] [rbp-108h]
  const data::ActivitySalesmanDailyExcelConfig *daily_config_ptr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v45; // [rsp+30h] [rbp-E0h] BYREF
  std::string v46; // [rsp+40h] [rbp-D0h] BYREF
  char v47[176]; // [rsp+60h] [rbp-B0h] BYREF

  v41._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 1 10 holder:237 48 4 7 ret:268 64 8 19 sub_item_reason:275 96 16 11 log_ptr:292";
  *(_QWORD *)(v1 + 16) = SalesmanActivity::deliverItemToSalesman;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v46, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0xAF2u, v41);
  std::string::~string(&v46);
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
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v45);
        p_activity_salesman_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.activity_salesman_config_mgr;
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
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v45);
        if ( daily_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          ItemComp = Player::getItemComp(thisa->player_);
          *(_DWORD *)(v1 + 48) = PlayerItemComp::checkSubItemBatch(ItemComp, &daily_config_ptr->cost_item_list);
          if ( *(_DWORD *)(v1 + 48) )
          {
            v6 = *(_DWORD *)(v1 + 48);
          }
          else
          {
            SubItemReason::SubItemReason((SubItemReason *const)(v1 + 64), ACTION_REASON_SALESMAN_DELIVER_ITEM);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            v27 = Player::getItemComp(thisa->player_);
            p_cost_item_list = &daily_config_ptr->cost_item_list;
            *(_DWORD *)(v1 + 48) = PlayerItemComp::subItemBatch(
                                     v27,
                                     &daily_config_ptr->cost_item_list,
                                     (const SubItemReason *)(v1 + 64));
            if ( *(_DWORD *)(v1 + 48) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v46,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/salesman_activity.cpp",
                "deliverItemToSalesman",
                279);
              v29 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      (common::milog::MiLogStream *const)&v46,
                      (const char (*)[24])"subItemBatch fail, ret:");
              v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, (const int *)(v1 + 48));
              v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              operator<<(v31, thisa->player_);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46);
              v6 = *(_DWORD *)(v1 + 48);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&thisa->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&thisa->deliver_count_);
              }
              ++thisa->deliver_count_;
              if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&thisa->day_index_);
              }
              v32 = thisa->day_index_;
              v33 = *(_BYTE *)(((unsigned __int64)&thisa->last_deliver_day_index_ >> 3) + 0x7FFF8000);
              LOBYTE(p_cost_item_list) = v33 != 0;
              v34 = (v33 != 0) & (unsigned __int8)((char)((((_BYTE)thisa - 84) & 7) + 3) >= v33);
              if ( (_BYTE)v34 )
                __asan_report_store4(&thisa->last_deliver_day_index_, p_cost_item_list, v34);
              thisa->last_deliver_day_index_ = v32;
              v35 = (*(_BYTE *)(((unsigned __int64)&thisa->status_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->status_ >> 3) + 0x7FFF8000));
              if ( (_BYTE)v35 )
                __asan_report_store4(&thisa->status_, (((_BYTE)thisa - 92) & 7u) + 3, v35);
              thisa->status_ = SALESMAN_STATUS_DELIVERED;
              BaseActivity::notifyClientData((BaseActivity *const)thisa, 0);
              common::tools::perf::make_shared<proto_log::PlayerLogBodySalesmanDeliverItem>();
              v36 = std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&thisa->schedule_id_);
              }
              proto_log::PlayerLogBodySalesmanDeliverItem::set_schedule_id(v36, thisa->schedule_id_);
              v37 = std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySalesmanDeliverItem,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&thisa->day_index_);
              }
              proto_log::PlayerLogBodySalesmanDeliverItem::set_day_index(v37, thisa->day_index_);
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              player = thisa->player_;
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v45, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySalesmanDeliverItem,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodySalesmanDeliverItem> *)(v1 + 96));
              Player::printStatLog(player, &p_body_ptr, &v45, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v45);
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
              std::shared_ptr<proto_log::PlayerLogBodySalesmanDeliverItem>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySalesmanDeliverItem> *const)(v1 + 96));
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/salesman_activity.cpp",
            "deliverItemToSalesman",
            263);
          v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)&v46,
                  (const char (*)[35])"findDailyConfig fail, schedule_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &thisa->schedule_id_);
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" day_index:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &thisa->day_index_);
          v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          operator<<(v25, thisa->player_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46);
          v6 = 5;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/salesman_activity.cpp",
          "deliverItemToSalesman",
          255);
        v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                (common::milog::MiLogStream *const)&v46,
                (const char (*)[15])"deliver_count:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &thisa->deliver_count_);
        v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" day_index:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &thisa->day_index_);
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        operator<<(v18, thisa->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46);
        v6 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v46,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/salesman_activity.cpp",
        "deliverItemToSalesman",
        248);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             (common::milog::MiLogStream *const)&v46,
             (const char (*)[43])"already delivered. last_deliver_day_index:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &thisa->last_deliver_day_index_);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" day_index:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &thisa->day_index_);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      operator<<(v12, thisa->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46);
      v6 = 868;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_activity.cpp",
      "deliverItemToSalesman",
      241);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)&v46,
           (const char (*)[45])"day_index_ is 0, activity is closed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    operator<<(v5, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v46);
    v6 = 860;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
  result = v6;
  if ( v47 == (char *)v1 )
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

// Line 308: range 0000000016C562C8-0000000016C57284
__int64 __fastcall SalesmanActivity::getRandomRewardFromSalesman(
        SalesmanActivity *const this,
        uint32_t selected_position,
        uint32_t *reward_id,
        double a4,
        float a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  __int64 result; // rax
  ActivitySalesmanExcelConfigMgr *p_activity_salesman_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::vector<unsigned int>::size_type v18; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rbx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::vector<unsigned int>::size_type v25; // r14
  std::vector<float>::size_type v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  std::vector<float>::const_reference v32; // rax
  std::vector<unsigned int>::size_type v33; // r14
  common::milog::MiLogStream *v34; // rcx
  common::milog::MiLogStream *v35; // rcx
  std::vector<unsigned int>::size_type v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  std::vector<unsigned int>::size_type v41; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v42; // rax
  uint32_t *v43; // rdx
  uint32_t v44; // ecx
  char v45; // dl
  __int64 v46; // rdx
  PlayerItemComp *ItemComp; // rcx
  PlayerItemComp *v48; // rdi
  PlayerActivityComp *ActivityComp; // r15
  uint32_t v50; // r14d
  uint32_t ActivityId; // eax
  uint32_t v52; // r14d
  char *v53; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v54; // rax
  uint32_t *v55; // rdx
  char v56; // cl
  uint32_t schedule_id; // [rsp+14h] [rbp-14Ch]
  unsigned int ret; // [rsp+3Ch] [rbp-124h]
  unsigned __int64 val; // [rsp+40h] [rbp-120h] BYREF
  const std::vector<unsigned int> *config_reward_id_vec_ptr; // [rsp+48h] [rbp-118h]
  std::vector<unsigned int> *obtained_reward_index_vec_ptr; // [rsp+50h] [rbp-110h]
  const data::ActivitySalesmanExcelConfig *salesman_config_ptr; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v65; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v66; // [rsp+70h] [rbp-F0h] BYREF
  char v67[208]; // [rsp+90h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 18 rewarded_count:310 64 4 16 reward_index:332 80 4 21 selected_position:307 96 24 10 reason:409";
  *(_QWORD *)(v5 + 16) = SalesmanActivity::getRandomRewardFromSalesman;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 80) = selected_position;
  *(_DWORD *)(v5 + 48) = SalesmanActivity::getRewardedCount(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->deliver_count_);
  }
  if ( this->deliver_count_ <= *(_DWORD *)(v5 + 48) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_activity.cpp",
      "getRandomRewardFromSalesman",
      313);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v66, (const char (*)[16])"rewarded_count:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" deliver_count:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->deliver_count_);
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v66);
    result = 869LL;
    goto LABEL_76;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v65);
  p_activity_salesman_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65)->design_config.txt_config_mgr.activity_salesman_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  salesman_config_ptr = data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanExcelConfig(
                          p_activity_salesman_config_mgr,
                          this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v65);
  if ( !salesman_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/salesman_activity.cpp",
      "getRandomRewardFromSalesman",
      320);
    v15 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v66,
            (const char (*)[51])"findActivitySalesmanExcelConfig fail, schedule_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->schedule_id_);
    v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v17, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v66);
    result = 5LL;
    goto LABEL_76;
  }
  if ( !*(_DWORD *)(v5 + 80)
    || (v18 = *(unsigned int *)(v5 + 80),
        v18 > std::vector<unsigned int>::size(&salesman_config_ptr->daily_config_id_list))
    || common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
         &this->selected_reward_id_map_,
         (const unsigned int *)(v5 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_activity.cpp",
      "getRandomRewardFromSalesman",
      327);
    v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v66, (const char (*)[18])"invalid position:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 80));
    v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v21,
            (const char (*)[20])" daily_config_size:");
    val = std::vector<unsigned int>::size(&salesman_config_ptr->daily_config_id_list);
    v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, &val);
    v24 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v23,
            (const char (*)[25])" selected_reward_id_map:");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v24, &this->selected_reward_id_map_);
    common::milog::MiLogStream::~MiLogStream(&v66);
    result = 870LL;
    goto LABEL_76;
  }
  *(_DWORD *)(v5 + 64) = 0;
  config_reward_id_vec_ptr = 0LL;
  obtained_reward_index_vec_ptr = 0LL;
  v25 = std::vector<unsigned int>::size(&this->obtained_special_reward_index_vec_);
  if ( v25 < std::vector<unsigned int>::size(&salesman_config_ptr->special_reward_id_list) )
  {
    v26 = *(unsigned int *)(v5 + 48);
    if ( v26 >= std::vector<float>::size(&salesman_config_ptr->special_prob_list) )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/salesman_activity.cpp",
        "getRandomRewardFromSalesman",
        348);
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v66, (const char (*)[16])"rewarded_count:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v5 + 48));
      v29 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              v28,
              (const char (*)[41])" salesman_config_ptr->special_prob_list:");
      v30 = common::milog::MiLogStream::operator<<<float>(v29, &salesman_config_ptr->special_prob_list);
      v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_27:
      operator<<(v31, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v66);
      goto LABEL_36;
    }
    v32 = std::vector<float>::operator[](&salesman_config_ptr->special_prob_list, *(unsigned int *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v32);
    }
    if ( common::tools::RandomUtils::randomTestProbability(a5) )
    {
      if ( SalesmanActivity::randUnobtainedReward(
             this,
             &salesman_config_ptr->special_reward_id_list,
             &this->obtained_special_reward_index_vec_,
             (uint32_t *)(v5 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/salesman_activity.cpp",
          "getRandomRewardFromSalesman",
          361);
        v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v66,
                (const char (*)[35])"randUnobtainedReward fail, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_27;
      }
      config_reward_id_vec_ptr = &salesman_config_ptr->special_reward_id_list;
      obtained_reward_index_vec_ptr = &this->obtained_special_reward_index_vec_;
    }
  }
LABEL_36:
  if ( !config_reward_id_vec_ptr || !obtained_reward_index_vec_ptr )
  {
    v33 = std::vector<unsigned int>::size(&this->obtained_normal_reward_index_vec_);
    if ( v33 < std::vector<unsigned int>::size(&salesman_config_ptr->normal_reward_id_list) )
    {
      if ( SalesmanActivity::randUnobtainedReward(
             this,
             &salesman_config_ptr->normal_reward_id_list,
             &this->obtained_normal_reward_index_vec_,
             (uint32_t *)(v5 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/salesman_activity.cpp",
          "getRandomRewardFromSalesman",
          386);
        v34 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v66,
                (const char (*)[35])"randUnobtainedReward fail, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v34, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v66);
      }
      else
      {
        config_reward_id_vec_ptr = &salesman_config_ptr->normal_reward_id_list;
        obtained_reward_index_vec_ptr = &this->obtained_normal_reward_index_vec_;
      }
    }
  }
  if ( !config_reward_id_vec_ptr || !obtained_reward_index_vec_ptr )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_activity.cpp",
      "getRandomRewardFromSalesman",
      397);
    v35 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
            &v66,
            (const char (*)[75])"config_reward_id_vec_ptr or obtained_reward_index_vec_ptr is null, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_48:
    operator<<(v35, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v66);
    result = 0xFFFFFFFFLL;
    goto LABEL_76;
  }
  v36 = *(unsigned int *)(v5 + 64);
  if ( v36 >= std::vector<unsigned int>::size(config_reward_id_vec_ptr) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_activity.cpp",
      "getRandomRewardFromSalesman",
      403);
    v37 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v66, (const char (*)[14])"reward_index:");
    v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v5 + 64));
    v39 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v38,
            (const char (*)[23])" config_reward_id_vec:");
    v40 = common::milog::MiLogStream::operator<<<unsigned int>(v39, config_reward_id_vec_ptr);
    v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v40, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_48;
  }
  v41 = *(unsigned int *)(v5 + 64);
  v42 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::at(
                                                                                              config_reward_id_vec_ptr,
                                                                                              v41);
  v43 = v42;
  if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v42);
  }
  v44 = *v43;
  v45 = *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000);
  LOBYTE(v41) = v45 != 0;
  v46 = (v45 != 0) & (unsigned __int8)((char)(((unsigned __int8)reward_id & 7) + 3) >= v45);
  if ( (_BYTE)v46 )
    __asan_report_store4(reward_id, v41, v46);
  *reward_id = v44;
  ActionReason::ActionReason(
    (ActionReason *const)(v5 + 96),
    ACTION_REASON_SALESMAN_REWARD,
    ITEM_LIMIT_ACTIVITY_SALESMAN);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(reward_id);
  }
  ret = PlayerItemComp::checkGrantReward(ItemComp, *reward_id, (const ActionReason *)(v5 + 96));
  if ( ret )
  {
    result = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v48 = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) )
    {
      v48 = (PlayerItemComp *)reward_id;
      __asan_report_load4(reward_id);
    }
    PlayerItemComp::grantReward(v48, *reward_id, (const ActionReason *)(v5 + 96), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ActivityComp = Player::getActivityComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(reward_id);
    }
    v50 = *reward_id;
    schedule_id = BaseActivity::getScheduleId((const BaseActivity *const)this);
    ActivityId = BaseActivity::getActivityId((const BaseActivity *const)this);
    PlayerActivityComp::logGetActivityReward(ActivityComp, ActivityId, schedule_id, v50);
    std::vector<unsigned int>::push_back(
      obtained_reward_index_vec_ptr,
      (const std::vector<unsigned int>::value_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(reward_id);
    }
    v52 = *reward_id;
    v53 = (char *)(v5 + 80);
    v54 = std::map<unsigned int,unsigned int>::operator[](
            &this->selected_reward_id_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 80));
    v55 = v54;
    v56 = *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000);
    if ( v56 != 0 && (char)(((unsigned __int8)v54 & 7) + 3) >= v56 )
    {
      LOBYTE(v53) = v56 != 0;
      __asan_report_store4(v54, v53, v54);
    }
    *v55 = v52;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    BaseActivity::updateAllConds((BaseActivity *const)this);
    result = 0LL;
  }
LABEL_76:
  if ( v67 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 436: range 0000000016C57286-0000000016C57682
uint32_t __cdecl SalesmanActivity::getDayIndexByCurrentTime(const SalesmanActivity *const this)
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
  uint32_t new_day_index; // [rsp+1Ch] [rbp-54h]
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
      "./src/player/activity/salesman_activity.cpp",
      "getDayIndexByCurrentTime",
      440);
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
      "./src/player/activity/salesman_activity.cpp",
      "getDayIndexByCurrentTime",
      447);
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
  new_day_index = common::tools::TimeUtils::getTimeDay(Now, time_offset_sec) - start_time_day + 1;
  if ( new_day_index <= std::vector<unsigned int>::size(&salesman_config_ptr->daily_config_id_list) )
    return new_day_index;
  else
    return 0;
};

// Line 466: range 0000000016C57684-0000000016C57894
void __cdecl SalesmanActivity::refreshDayIndexByCurrentTime(SalesmanActivity *const this)
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

  new_day_index = SalesmanActivity::getDayIndexByCurrentTime(this);
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
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/salesman_activity.cpp",
        "refreshDayIndexByCurrentTime",
        481);
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

// Line 486: range 0000000016C57896-0000000016C57C1D
int32_t __cdecl SalesmanActivity::randUnobtainedReward(
        const SalesmanActivity *const this,
        const std::vector<unsigned int> *reward_id_vec,
        const std::vector<unsigned int> *obtained_index_vec,
        uint32_t *selected_reward_index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<unsigned int>::size_type v7; // r14
  int32_t v8; // r14d
  int v9; // eax
  std::vector<unsigned int>::size_type v10; // r14
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::size_type v12; // rsi
  std::vector<unsigned int>::reference v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 rand_index:502 64 24 30 candidate_reward_index_vec:487";
  *(_QWORD *)(v4 + 16) = SalesmanActivity::randUnobtainedReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 64));
  for ( *(_DWORD *)(v4 + 48) = 0; ; ++*(_DWORD *)(v4 + 48) )
  {
    v7 = *(unsigned int *)(v4 + 48);
    if ( v7 >= std::vector<unsigned int>::size(reward_id_vec) )
      break;
    if ( !common::tools::MiscUtils::isContains<unsigned int>(obtained_index_vec, (const unsigned int *)(v4 + 48)) )
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v4 + 64),
        (const std::vector<unsigned int>::value_type *)(v4 + 48));
  }
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/salesman_activity.cpp",
      "randUnobtainedReward",
      498);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v21,
      (const char (*)[36])"candidate_reward_index_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = -1;
  }
  else
  {
    v9 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::tools::RandomUtils::rand<unsigned int>(0, v9 - 1);
    v10 = *(unsigned int *)(v4 + 48);
    if ( v10 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 64)) )
    {
      v12 = *(unsigned int *)(v4 + 48);
      v13 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 64), v12);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((unsigned __int64)selected_reward_index >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v16 != 0;
      v17 = (v16 != 0) & (unsigned __int8)((char)(((unsigned __int8)selected_reward_index & 7) + 3) >= v16);
      if ( (_BYTE)v17 )
        __asan_report_store4(selected_reward_index, v12, v17);
      *selected_reward_index = v15;
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/salesman_activity.cpp",
        "randUnobtainedReward",
        505);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v21, (const char (*)[12])"rand_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = -1;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
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

// Line 515: range 0000000016C57C1E-0000000016C57C59
uint32_t __cdecl SalesmanActivity::getRewardedCount(const SalesmanActivity *const this)
{
  int v1; // ebx

  v1 = std::vector<unsigned int>::size(&this->obtained_normal_reward_index_vec_);
  return v1 + std::vector<unsigned int>::size(&this->obtained_special_reward_index_vec_);
};

// Line 521: range 0000000016C57C5A-0000000016C57D51
void __fastcall SalesmanActivity::clearTalkRecordByGm(SalesmanActivity *const this, uint32_t talk_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 talk_id:520";
  *(_QWORD *)(v2 + 16) = SalesmanActivity::clearTalkRecordByGm;
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
