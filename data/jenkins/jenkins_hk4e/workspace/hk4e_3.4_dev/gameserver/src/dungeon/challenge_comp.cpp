// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/challenge_comp.cpp

// Line 37: range 0000000014F07448-0000000014F07776
void __cdecl Challenge::init(Challenge *const this)
{
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  bool is_settle_when_all_related_player_exit_sight_as_child; // cl
  bool is_hide_unrelated_player_as_father; // cl
  unsigned int val; // [rsp+1Ch] [rbp-54h] BYREF
  const data::DungeonChallengeConfig *dungeon_challenge_config_ptr; // [rsp+20h] [rbp-50h]
  const std::string *group_name; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->challenge_id);
  }
  dungeon_challenge_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(
                                   p_dungeon_config_mgr,
                                   this->challenge_id);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( dungeon_challenge_config_ptr )
  {
    if ( Challenge::isChild(this) )
    {
      if ( *(char *)(((unsigned __int64)&dungeon_challenge_config_ptr->is_settle_when_all_related_player_exit_sight_as_child >> 3)
                   + 0x7FFF8000) < 0 )
        __asan_report_load1(&dungeon_challenge_config_ptr->is_settle_when_all_related_player_exit_sight_as_child);
      is_settle_when_all_related_player_exit_sight_as_child = dungeon_challenge_config_ptr->is_settle_when_all_related_player_exit_sight_as_child;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_settle_related_player_exit_as_child_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settle_related_player_exit_as_child_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_settle_related_player_exit_as_child_);
      }
      this->is_settle_related_player_exit_as_child_ = is_settle_when_all_related_player_exit_sight_as_child;
    }
    else if ( Challenge::isFather(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->is_hide_unrelated_player_as_father >> 3)
                    + 0x7FFF8000) != 0
        && (((unsigned __int8)dungeon_challenge_config_ptr + 65) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->is_hide_unrelated_player_as_father >> 3)
                                                                                  + 0x7FFF8000) )
      {
        __asan_report_load1(&dungeon_challenge_config_ptr->is_hide_unrelated_player_as_father);
      }
      is_hide_unrelated_player_as_father = dungeon_challenge_config_ptr->is_hide_unrelated_player_as_father;
      if ( *(char *)(((unsigned __int64)&this->is_hide_unrelated_player_as_father_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_hide_unrelated_player_as_father_);
      this->is_hide_unrelated_player_as_father_ = is_hide_unrelated_player_as_father;
    }
    group_name = &dungeon_challenge_config_ptr->ability_group_name;
    if ( (unsigned __int8)std::string::empty(&dungeon_challenge_config_ptr->ability_group_name) != 1 )
      std::vector<std::string>::push_back(&this->ability_group_vec, group_name);
    std::vector<std::string>::operator=(
      &this->team_ability_group_vec,
      &dungeon_challenge_config_ptr->team_ability_group_list);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "init",
      41);
    v2 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v12, (const char (*)[10])"group_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    val = Group::getGroupId(this->group_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v3, (const char (*)[15])" challenge_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->challenge_id);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])" config not found.");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
};

// Line 63: range 0000000014F07778-0000000014F079EE
bool __cdecl Challenge::isLastViewingRelatedPlayer(Challenge *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  bool is_have_uid; // [rsp+13h] [rbp-9Dh]
  uint32_t count; // [rsp+14h] [rbp-9Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  std::vector<unsigned int> v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 viewing_uid:71";
  *(_QWORD *)(v2 + 16) = Challenge::isLastViewingRelatedPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::unordered_set<unsigned int>::empty(&this->uid_set) )
  {
    result = 0;
  }
  else
  {
    count = 0;
    is_have_uid = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    Group::getViewingPlayerUids(&v13, this->group_);
    __for_range = &v13;
    __for_begin._M_current = std::vector<unsigned int>::begin(&v13)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&v13)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v2 + 32) = *v7;
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->uid_set,
             (const unsigned int *)(v2 + 32)) )
      {
        ++count;
      }
      if ( uid == *(_DWORD *)(v2 + 32) )
        is_have_uid = 1;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::~vector(&v13);
    result = is_have_uid && count == 1;
  }
  if ( v14 == (char *)v2 )
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

// Line 86: range 0000000014F079F0-0000000014F07B07
void __cdecl Challenge::toClient(const Challenge *const this, proto::ChallengeBrief *proto)
{
  uint32_t CurDisplayProgress; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->challenge_id);
  }
  proto::ChallengeBrief::set_challenge_id(proto, this->challenge_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->challenge_index);
  }
  proto::ChallengeBrief::set_challenge_index(proto, this->challenge_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_success);
  }
  proto::ChallengeBrief::set_is_success(proto, this->is_success);
  CurDisplayProgress = Challenge::getCurDisplayProgress(this);
  proto::ChallengeBrief::set_cur_progress(proto, CurDisplayProgress);
};

// Line 94: range 0000000014F07B08-0000000014F07D34
uint32_t __cdecl Challenge::getCurDisplayProgress(const Challenge *const this)
{
  uint32_t v1; // r15d
  std::shared_ptr<ChallengeCondition> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<ChallengeCondition> *v5; // rax
  int v6; // r14d
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  uint32_t result; // eax
  std::vector<std::shared_ptr<ChallengeCondition>>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+28h] [rbp-78h]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<ChallengeCondition> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<ChallengeCondition> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<ChallengeCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 21 challenge_cond_ptr:96";
  v2[1]._M_ptr = (std::__shared_ptr<ChallengeCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)Challenge::getCurDisplayProgress;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->condition_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&this->condition_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(&this->condition_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
    std::shared_ptr<ChallengeCondition>::shared_ptr(v2 + 2, v5);
    if ( std::operator==<ChallengeCondition>(0LL, v2 + 2) )
    {
      v6 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
      if ( ChallengeCondition::getChallengeCondType(v7) == CHALLENGE_COND_TRIGGER )
      {
        v8 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(v8);
        v9 = *(_QWORD *)v8 + 24LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(*(_QWORD *)v8 + 24LL);
        v1 = (*(__int64 (__fastcall **)(unsigned __int64))v9)(v8);
        v6 = 1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::shared_ptr<ChallengeCondition>::~shared_ptr(v2 + 2);
    if ( v6 )
      goto LABEL_18;
    __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
  }
  v1 = 0;
LABEL_18:
  result = v1;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<ChallengeCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 112: range 0000000014F07D36-0000000014F081B8
void __cdecl Challenge::setDurationByGm(Challenge *const this, uint32_t duration)
{
  std::shared_ptr<ChallengeCondition> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 GroupId; // rcx
  __int64 v6; // rcx
  const std::shared_ptr<ChallengeCondition> *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (std::shared_ptr<ChallengeCondition> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<ChallengeCondition> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<ChallengeCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 challenge_cond_ptr:123";
  v2[1]._M_ptr = (std::__shared_ptr<ChallengeCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)Challenge::setDurationByGm;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->finished);
  if ( this->finished )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "setDurationByGm",
      115);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->challenge_index);
    }
    common::milog::MiLogStream::operator()(
      &v13,
      "challenge @index[%u] finished. group[%u]",
      this->challenge_index,
      GroupId);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->start_time);
    }
    if ( this->start_time )
    {
      __for_range = &this->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&this->condition_vec)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(&this->condition_vec)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                &__for_begin,
                &__for_end) )
      {
        v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
        std::shared_ptr<ChallengeCondition>::shared_ptr(v2 + 2, v7);
        if ( !std::operator==<ChallengeCondition>(0LL, v2 + 2) )
        {
          v8 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v8 = __asan_report_load8(v8);
          v9 = *(_QWORD *)v8 + 232LL;
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v8 = __asan_report_load8(*(_QWORD *)v8 + 232LL);
          (*(void (__fastcall **)(unsigned __int64, _QWORD))v9)(v8, duration);
        }
        std::shared_ptr<ChallengeCondition>::~shared_ptr(v2 + 2);
        __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "setDurationByGm",
        120);
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      v6 = Group::getGroupId(this->group_);
      if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->challenge_index);
      }
      common::milog::MiLogStream::operator()(
        &v13,
        "challenge @index[%u] NOT start. group[%u]",
        this->challenge_index,
        v6);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<ChallengeCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 135: range 0000000014F081BA-0000000014F08659
int32_t __cdecl ChallengeComp::fromBin(ChallengeComp *const this, const proto::GroupBin *bin)
{
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rbx
  uint32_t v3; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  google::protobuf::uint32 v8; // ecx
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int *v14; // rcx
  const proto::ChallengeRecordBin *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin> >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rbx
  unsigned int val; // [rsp+14h] [rbp-8Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::ChallengeRecordBin>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  google::protobuf::RepeatedPtrField<proto::ChallengeRecordBin>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ChallengeRecordBin> *__for_range; // [rsp+28h] [rbp-78h]
  const proto::ChallengeRecordBin *challenge_record_bin; // [rsp+30h] [rbp-70h]
  const data::DungeonChallengeConfig *dungeon_challenge_config_ptr; // [rsp+38h] [rbp-68h]
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-50h] BYREF
  std::string output; // [rsp+70h] [rbp-30h] BYREF

  __for_range = proto::GroupBin::challenge_record_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ChallengeRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ChallengeRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ChallengeRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    challenge_record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ChallengeRecordBin const>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.dungeon_config_mgr;
    v3 = proto::ChallengeRecordBin::challenge_id(challenge_record_bin);
    dungeon_challenge_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(p_dungeon_config_mgr, v3);
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( dungeon_challenge_config_ptr )
    {
      v8 = proto::ChallengeRecordBin::challenge_record_type(challenge_record_bin);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->record_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->record_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_challenge_config_ptr->record_type);
      }
      if ( v8 == dungeon_challenge_config_ptr->record_type )
      {
        val = proto::ChallengeRecordBin::challenge_index(challenge_record_bin);
        v16 = std::map<unsigned int,proto::ChallengeRecordBin>::emplace<unsigned int,proto::ChallengeRecordBin const&>(
                &this->challenge_record_map_,
                &val,
                challenge_record_bin,
                v14,
                v15);
        if ( !v16.second )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&output,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/dungeon/challenge_comp.cpp",
            "fromBin",
            158);
          v17 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  (common::milog::MiLogStream *const)&output,
                  (const char (*)[55])"challenge_record_map_ emplace failed, challenge_index:");
          val = proto::ChallengeRecordBin::challenge_index(challenge_record_bin);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&output);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/challenge_comp.cpp",
          "fromBin",
          150);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v26,
               (const char (*)[33])"record_type not match! group_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        val = Group::getGroupId(this->group_);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v10,
                (const char (*)[23])" challenge_record_bin:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          &output,
          &challenge_record_bin->google::protobuf::Message);
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &output);
        v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v12,
                (const char (*)[21])" config record_type:");
        common::milog::MiLogStream::operator<<<data::ChallengeRecordType,(data::ChallengeRecordType*)0>(
          v13,
          &dungeon_challenge_config_ptr->record_type);
        std::string::~string(&output);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/challenge_comp.cpp",
        "fromBin",
        142);
      v4 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v26, (const char (*)[10])"group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v5,
             (const char (*)[23])" challenge_record_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &challenge_record_bin->google::protobuf::Message);
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &output);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v7,
        (const char (*)[29])" challenge config not found.");
      std::string::~string(&output);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ChallengeRecordBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 167: range 0000000014F0865A-0000000014F0870F
int32_t __cdecl ChallengeComp::toBin(const ChallengeComp *const this, proto::GroupBin *bin)
{
  proto::ChallengeRecordBin *v2; // rax
  std::map<unsigned int,proto::ChallengeRecordBin>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,proto::ChallengeRecordBin>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,proto::ChallengeRecordBin> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,proto::ChallengeRecordBin> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::ChallengeRecordBin> >::type *challenge_index; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::ChallengeRecordBin> >::type *challenge_record_bin; // [rsp+38h] [rbp-8h]

  __for_range = &this->challenge_record_map_;
  __for_begin._M_node = std::map<unsigned int,proto::ChallengeRecordBin>::begin(&this->challenge_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::ChallengeRecordBin>::end(&this->challenge_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin>>::operator*(&__for_begin);
    challenge_index = std::get<0ul,unsigned int const,proto::ChallengeRecordBin>(v7);
    challenge_record_bin = (std::tuple_element<1,const std::pair<unsigned int const,proto::ChallengeRecordBin> >::type *)std::get<1ul,unsigned int const,proto::ChallengeRecordBin>(v7);
    v2 = proto::GroupBin::add_challenge_record_list(bin);
    proto::ChallengeRecordBin::operator=(v2, challenge_record_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 178: range 0000000014F08710-0000000014F0871E
int32_t __cdecl ChallengeComp::init(ChallengeComp *const this)
{
  return 0;
};

// Line 185: range 0000000014F088F6-0000000014F08C75
int32_t __cdecl ChallengeComp::start(ChallengeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  int32_t result; // eax
  std::shared_ptr<Group> __r; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v7; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:186 64 16 13 group_wtr:192";
  *(_QWORD *)(v1 + 16) = ChallengeComp::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getScene((const Group *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "start",
      189);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    toThisPtr<Group>((Group *)&__r);
    std::weak_ptr<Group>::weak_ptr<Group,void>((std::weak_ptr<Group> *const)(v1 + 64), &__r);
    std::shared_ptr<Group>::~shared_ptr(&__r);
    std::weak_ptr<Group>::weak_ptr((std::weak_ptr<Group> *const)&__r, (const std::weak_ptr<Group> *)(v1 + 64));
    common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene> &,ChallengeComp::start(void)::{lambda(unsigned long)#1}>(
      &v7,
      (ChallengeComp::start::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (ChallengeComp::start::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneTimer>::operator=(&this->challenge_timer_ptr_, (std::shared_ptr<SceneTimer> *)&v7);
    std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)&v7);
    ChallengeComp::start(void)::{lambda(unsigned long)#1}::~start((ChallengeComp::start::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneTimer>(0LL, &this->challenge_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "start",
        205);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v8,
        (const char (*)[25])"createSettleTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      v4 = -1;
    }
    else
    {
      v4 = 0;
    }
    std::weak_ptr<Group>::~weak_ptr((std::weak_ptr<Group> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v4;
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

// Line 193: range 0000000014F08720-0000000014F088D9
void __cdecl ChallengeComp::start(void)::{lambda(unsigned long)#1}::operator()(
        const ChallengeComp::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Group *v5; // rax
  ChallengeComp *ChallengeComp; // rdx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 group_ptr:195";
  *(_QWORD *)(v2 + 16) = ChallengeComp::start(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 32));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "operator()",
      198);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"group_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ChallengeComp = Group::getChallengeComp(v5);
    ChallengeComp::onTimer(ChallengeComp, now_ms);
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 193: range 0000000014F6BA64-0000000014F6BA89
void __cdecl ChallengeComp::start(void)::{lambda(unsigned long)#1}::start(
        ChallengeComp::start::<lambda(uint64_t)> *const this,
        ChallengeComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Group>::weak_ptr(&this->__group_wtr, &a2->__group_wtr);
};

// Line 193: range 0000000014F6D4B6-0000000014F6D4DB
void __cdecl ChallengeComp::start(void)::{lambda(unsigned long)#1}::start(
        ChallengeComp::start::<lambda(uint64_t)> *const this,
        const ChallengeComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Group>::weak_ptr(&this->__group_wtr, &a2->__group_wtr);
};

// Line 193: range 0000000014F088DA-0000000014F088F4
void __cdecl ChallengeComp::start(void)::{lambda(unsigned long)#1}::~start(
        ChallengeComp::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Group>::~weak_ptr(&this->__group_wtr);
};

// Line 212: range 0000000014F08C76-0000000014F0906C
void __cdecl ChallengeComp::fillChildChallengeBrief(
        ChallengeComp *const this,
        const Challenge *challenge,
        google::protobuf::RepeatedPtrField<proto::ChallengeBrief> *brief_list)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::__tuple_element_t_38 *v6; // rax
  _BYTE *v7; // rdx
  google::protobuf::uint32 *v8; // rax
  google::protobuf::uint32 *v9; // rdx
  std::__tuple_element_t_36 *v10; // rax
  bool *v11; // rdx
  google::protobuf::uint32 *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v15; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  proto::ChallengeBrief *v17; // rax
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::const_iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+30h] [rbp-A0h] BYREF
  const std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>> *__for_range; // [rsp+38h] [rbp-98h]
  const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > *v23; // [rsp+40h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *index; // [rsp+48h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *child_info; // [rsp+50h] [rbp-80h]
  proto::ChallengeBrief *brief; // [rsp+58h] [rbp-78h]
  char v27[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:227";
  *(_QWORD *)(v3 + 16) = ChallengeComp::fillChildChallengeBrief;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  __for_range = &challenge->child_map;
  __for_begin._M_node = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::begin(&challenge->child_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::end(&challenge->child_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator*(&__for_begin);
    index = std::get<0ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v23);
    child_info = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v23);
    v6 = std::get<2ul,unsigned int,unsigned int,bool,bool,unsigned int>(child_info);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v6);
    }
    if ( *v7 )
    {
      brief = google::protobuf::RepeatedPtrField<proto::ChallengeBrief>::Add(brief_list);
      if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(index);
      }
      proto::ChallengeBrief::set_challenge_index(brief, *index);
      v8 = (google::protobuf::uint32 *)std::get<0ul,unsigned int,unsigned int,bool,bool,unsigned int>(child_info);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      proto::ChallengeBrief::set_challenge_id(brief, *v9);
      v10 = (std::__tuple_element_t_36 *)std::get<3ul,unsigned int,unsigned int,bool,bool,unsigned int>(child_info);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v10);
      }
      proto::ChallengeBrief::set_is_success(brief, *v11);
      v12 = (google::protobuf::uint32 *)std::get<4ul,unsigned int,unsigned int,bool,bool,unsigned int>(child_info);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      proto::ChallengeBrief::set_cur_progress(brief, *v13);
    }
    else
    {
      *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v3 + 32) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                    &this->challenge_map_,
                                                                                    index);
      __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v3 + 32),
              &__y) )
      {
        v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 32));
        if ( !std::operator==<Challenge>(0LL, &v14->second) )
        {
          v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 32));
          v16 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15->second);
          v17 = google::protobuf::RepeatedPtrField<proto::ChallengeBrief>::Add(brief_list);
          Challenge::toClient(v16, v17);
        }
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator++(&__for_begin);
  }
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 245: range 0000000014F0906E-0000000014F09DFA
__int64 __fastcall ChallengeComp::beginChallenge(
        ChallengeComp *const this,
        const ScriptContext *script_context,
        uint32_t challenge_id,
        uint32_t challenge_index,
        std::vector<unsigned int> *param_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  unsigned int *v23; // r9
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  Challenge *v40; // rax
  Player *v41; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  Challenge *v44; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  SceneTimer *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  Challenge *v50; // rax
  uint32_t Now; // r14d
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint64_t SceneTimeMs; // r14
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  std::shared_ptr<Challenge> *v56; // r8
  Player *v57; // r14
  Challenge *v58; // rax
  __int64 result; // rax
  std::vector<unsigned int> *param_vecb; // [rsp+0h] [rbp-120h]
  data::ChallengeType *v62; // [rsp+8h] [rbp-118h]
  unsigned int val; // [rsp+20h] [rbp-100h] BYREF
  int32_t ret; // [rsp+24h] [rbp-FCh]
  const data::DungeonChallengeConfig *dungeon_challenge_config_ptr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v66; // [rsp+30h] [rbp-F0h] BYREF
  char v67[208]; // [rsp+50h] [rbp-D0h] BYREF

  v62 = (data::ChallengeType *)__PAIR64__(challenge_id, challenge_index);
  v5 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 18 challenge_type:274 64 4 16 challenge_id:244 80 4 19 challenge_index:244 96 16 14 playe"
                        "r_ptr:246 128 16 17 challenge_ptr:281";
  *(_QWORD *)(v5 + 16) = ChallengeComp::beginChallenge;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  *(_DWORD *)(v5 + 64) = HIDWORD(v62);
  *(_DWORD *)(v5 + 80) = (_DWORD)v62;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getOwnerPlayer((const Group *const)(v5 + 96));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "beginChallenge",
      249);
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v66, (const char (*)[10])"group_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    val = Group::getGroupId(this->group_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])" getOwnerPlayer fail");
    common::milog::MiLogStream::~MiLogStream(&v66);
    v10 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "beginChallenge",
      253);
    v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v66,
            (const char (*)[26])"[challenge] challenge_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])" challenge_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream(&v66);
    if ( std::operator==<SceneTimer>(0LL, &this->challenge_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "beginChallenge",
        256);
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v66, (const char (*)[10])"group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" challenge_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 64));
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v17,
        (const char (*)[29])" challenge_timer_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v66);
      v10 = -1;
    }
    else if ( std::map<unsigned int,std::shared_ptr<Challenge>>::count(
                &this->challenge_map_,
                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v5 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "beginChallenge",
        263);
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v66, (const char (*)[10])"group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v19,
              (const char (*)[18])" challenge_index:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])" already exist.");
      common::milog::MiLogStream::~MiLogStream(&v66);
      v10 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v5 + 128));
      v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      dungeon_challenge_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(
                                       &v22->design_config.txt_config_mgr.dungeon_config_mgr,
                                       *(_DWORD *)(v5 + 64));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 128));
      if ( dungeon_challenge_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->challenge_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->challenge_type >> 3)
                                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_challenge_config_ptr->challenge_type);
        }
        *(_DWORD *)(v5 + 48) = dungeon_challenge_config_ptr->challenge_type;
        if ( *(_DWORD *)(v5 + 48) == 13 )
        {
          common::milog::MiLogStream::create(
            &v66,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "beginChallenge",
            277);
          v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v66, (const char (*)[10])"group_id:");
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          val = Group::getGroupId(this->group_);
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
          v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v29,
                  (const char (*)[15])" challenge_id:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v5 + 64));
          v32 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v31,
                  (const char (*)[19])" challenge_index: ");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v33,
            (const char (*)[25])" can NOT be father type.");
          common::milog::MiLogStream::~MiLogStream(&v66);
          v10 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          common::tools::perf::make_shared<Challenge,Group &,unsigned int &,unsigned int &,data::ChallengeType &>(
            (Group *)(v5 + 128),
            (unsigned int *)this->group_,
            (unsigned int *)(v5 + 80),
            (data::ChallengeType *)(v5 + 64),
            (Group *)(v5 + 48),
            v23,
            (unsigned int *)param_vec,
            v62);
          if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v5 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v66,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/challenge_comp.cpp",
              "beginChallenge",
              284);
            v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v66, (const char (*)[10])"group_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            val = Group::getGroupId(this->group_);
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
            v36 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v35,
                    (const char (*)[15])" challenge_id:");
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v5 + 64));
            v38 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v37,
                    (const char (*)[19])" challenge_index: ");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v5 + 80));
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v39,
              (const char (*)[27])" create Challenge nullptr.");
            common::milog::MiLogStream::~MiLogStream(&v66);
            v10 = -1;
          }
          else
          {
            v40 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
            Challenge::init(v40);
            v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            BasicComp = Player::getBasicComp(v41);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v66, BasicComp);
            v43 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
            std::string::operator=(&v43->trans_no, &v66);
            std::string::~string(&v66);
            v44 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
            if ( ChallengeComp::buildConditionAndParams(this, v44, param_vecb) )
            {
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/challenge_comp.cpp",
                "beginChallenge",
                292);
              common::milog::MiLogStream::operator()(
                &v66,
                "buildConditionAndParams for challenge @index[%u] failed, challenge id[%u].",
                *(unsigned int *)(v5 + 80),
                *(unsigned int *)(v5 + 64));
              common::milog::MiLogStream::~MiLogStream(&v66);
              v10 = -1;
            }
            else
            {
              v45 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->challenge_timer_ptr_);
              if ( !common::tools::MiTimer::isActive(v45)
                && (v46 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->challenge_timer_ptr_),
                    (ret = SceneTimer::startMS(v46, 0xC8u, 1, "./src/dungeon/challenge_comp.cpp", "beginChallenge", 298)) != 0) )
              {
                common::milog::MiLogStream::create(
                  &v66,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/dungeon/challenge_comp.cpp",
                  "beginChallenge",
                  301);
                v47 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        &v66,
                        (const char (*)[49])"start challenge_timer fail, GAME_TIMER_INTERVAL:");
                val = 200;
                v48 = common::milog::MiLogStream::operator<<<int,(int *)0>(v47, (const int *)&val);
                v49 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v48,
                        (const char (*)[15])" challenge_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  (const unsigned int *)(v5 + 64));
                common::milog::MiLogStream::~MiLogStream(&v66);
                v10 = -1;
              }
              else
              {
                v50 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
                ChallengeComp::fillTriggerInfo(this, v50, script_context);
                Now = common::tools::TimeUtils::getNow();
                v52 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v52->start_time >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v52->start_time >> 3) + 0x7FFF8000) <= 3 )
                {
                  v52 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v52->start_time);
                }
                v52->start_time = Now;
                SceneTimeMs = ChallengeComp::getSceneTimeMs(this);
                v54 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v54->start_scene_time_ms >> 3) + 0x7FFF8000) )
                  v54 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v54->start_scene_time_ms);
                v54->start_scene_time_ms = SceneTimeMs;
                v55 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
                std::vector<unsigned int>::operator=(&v55->param_vec, param_vecb);
                std::map<unsigned int,std::shared_ptr<Challenge>>::emplace<unsigned int &,std::shared_ptr<Challenge>&>(
                  &this->challenge_map_,
                  (unsigned int *)(v5 + 80),
                  (std::shared_ptr<Challenge> *)(v5 + 128),
                  (unsigned int *)(v5 + 80),
                  v56);
                v57 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                v58 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
                ChallengeComp::onChallengeBegin(this, v58, v57, 1);
                v10 = 0;
              }
            }
          }
          std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v5 + 128));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "beginChallenge",
          271);
        v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v66, (const char (*)[10])"group_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        val = Group::getGroupId(this->group_);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
        v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v25, (const char (*)[15])" challenge_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v5 + 64));
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v27, (const char (*)[19])" config not found.");
        common::milog::MiLogStream::~MiLogStream(&v66);
        v10 = -1;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 96));
  result = v10;
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

// Line 318: range 0000000014F09DFC-0000000014F0A342
void __fastcall ChallengeComp::onConditionMeet(
        ChallengeComp *const this,
        uint32_t challenge_index,
        data::ChallengeCondType challenge_cond_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+30h] [rbp-E0h]
  const ChallengeConditionPtr *challenge_condition_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 19 challenge_index:317 48 4 23 challenge_cond_type:317 64 8 18 challenge_iter:320 96 16 1"
                        "7 challenge_ptr:326";
  *(_QWORD *)(v3 + 16) = ChallengeComp::onConditionMeet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = challenge_index;
  *(_DWORD *)(v3 + 48) = challenge_cond_type;
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/challenge_comp.cpp",
    "onConditionMeet",
    319);
  v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v25,
         (const char (*)[46])"[challenge] onConditionMeet: challenge_index:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" cond_type:");
  common::milog::MiLogStream::operator<<<data::ChallengeCondType,(data::ChallengeCondType*)0>(
    v8,
    (const data::ChallengeCondType *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v25);
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v3 + 32));
  __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "onConditionMeet",
      323);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v25, (const char (*)[10])"group_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    val = Group::getGroupId(this->group_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])" challenge_index:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" not found.");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96), &v13->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/challenge_comp.cpp",
        "onConditionMeet",
        329);
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v25, (const char (*)[10])"group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v15,
              (const char (*)[18])" challenge_index:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      __for_range = &std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
        v18 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
        if ( !ChallengeCondition::isMeet(v18) )
          goto LABEL_17;
        __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
      }
      ChallengeComp::finishChallenge(
        this,
        *(_DWORD *)(v3 + 32),
        1,
        NONE,
        PlayerLogBodyChallengeFinish_FinishType_SUCC,
        0);
    }
LABEL_17:
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96));
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
};

// Line 344: range 0000000014F0A344-0000000014F0A681
void __fastcall ChallengeComp::onConditionNotMeet(
        ChallengeComp *const this,
        uint32_t challenge_index,
        data::ChallengeCondType challenge_cond_type,
        bool is_timeout)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  proto_log::PlayerLogBodyChallengeFinish::FinishType v14; // edx
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 19 challenge_index:343 48 4 23 challenge_cond_type:343 64 8 18 challenge_iter:346";
  *(_QWORD *)(v4 + 16) = ChallengeComp::onConditionNotMeet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 32) = challenge_index;
  *(_DWORD *)(v4 + 48) = challenge_cond_type;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/challenge_comp.cpp",
    "onConditionNotMeet",
    345);
  v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
         &v19,
         (const char (*)[49])"[challenge] onConditionNotMeet: challenge_index:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" cond_type:");
  common::milog::MiLogStream::operator<<<data::ChallengeCondType,(data::ChallengeCondType*)0>(
    v9,
    (const data::ChallengeCondType *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v19);
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v4 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v4 + 32));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "onConditionNotMeet",
      349);
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v19, (const char (*)[10])"group_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    val = Group::getGroupId(this->group_);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" challenge_index:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" not found.");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    if ( is_timeout )
      v14 = PlayerLogBodyChallengeFinish_FinishType_TIMEOUT;
    else
      v14 = PlayerLogBodyChallengeFinish_FinishType_FAIL;
    ChallengeComp::finishChallenge(this, *(_DWORD *)(v4 + 32), 0, NONE, v14, 0);
  }
  if ( v20 == (char *)v4 )
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

// Line 357: range 0000000014F0A716-0000000014F0D48E
void __fastcall ChallengeComp::finishChallenge(
        ChallengeComp *const this,
        uint32_t challenge_index,
        bool is_success,
        __int32 reason,
        __int32 stat_reason,
        __int8 is_pause)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // r14d
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  Player *v23; // rax
  PlayerBasicComp *BasicComp; // rax
  char v25; // cl
  proto::ChallengeFinishType v26; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  const std::shared_ptr<ChallengeCondition> *v32; // rax
  int v33; // r14d
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  uint32_t v40; // r14d
  Player *v41; // rax
  uint64_t v42; // rax
  float v43; // xmm0_4
  uint32_t v44; // eax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r14
  char v56; // r14
  Player *v57; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  const std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *v59; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v61; // rax
  uint32_t *v62; // rdx
  GameserverService *v63; // rax
  unsigned int GameThreadLocal; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  const std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *ChallengeSettleCallback; // r14
  DungeonScene *v67; // r15
  Player *v68; // rax
  Player *v69; // rax
  data::EventType v70; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  uint32_t challenge_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rdx
  int32_t *p_param1; // rax
  int32_t v75; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  std::string *p_trans_no; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rdx
  uint32_t *p_source_entity_id; // rax
  unsigned int *p_challenge_index; // r14
  DungeonScene *v84; // rax
  DungeonScene *v85; // rdi
  char v86; // cl
  uint32_t v87; // eax
  unsigned int *p_challenge_id; // r14
  Player *v89; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v91; // r14
  const std::__tuple_element_t_37 *v92; // rax
  _DWORD *v93; // rdx
  const std::__tuple_element_t_35 *v94; // rax
  _DWORD *v95; // rdx
  std::__tuple_element_t_38 *v96; // rax
  char *v97; // rdx
  std::__tuple_element_t_36 *v98; // rax
  char *v99; // rdx
  std::__shared_ptr_access<ChallengeFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v100; // rax
  Player *v101; // rax
  PlayerEventComp *v102; // r14
  bool *v103; // r14
  unsigned int *v104; // r9
  Scene *v105; // r14
  uint32_t v106; // r15d
  char v107; // r14
  Player *v108; // rax
  uint32_t father_index; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v110; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v111; // rax
  char v112; // r14
  Challenge *v113; // r15
  Player *v114; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v115; // rax
  Challenge *v116; // rax
  __int64 v117; // rcx
  Challenge *v118; // rax
  uint32_t v119; // r14d
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v120; // rax
  std::string v121; // [rsp+0h] [rbp-490h]
  unsigned int *v122; // [rsp+0h] [rbp-490h]
  unsigned int *v123; // [rsp+8h] [rbp-488h]
  unsigned int *duration; // [rsp+10h] [rbp-480h]
  uint32_t durationa; // [rsp+10h] [rbp-480h]
  unsigned int *stat_reasona; // [rsp+18h] [rbp-478h]
  unsigned int *v127; // [rsp+20h] [rbp-470h]
  ChallengeComp *thisb; // [rsp+28h] [rbp-468h]
  unsigned int *v130; // [rsp+30h] [rbp-460h]
  std::string *v131; // [rsp+38h] [rbp-458h] BYREF
  unsigned int val; // [rsp+40h] [rbp-450h] BYREF
  proto::ChallengeFinishType finish_type; // [rsp+44h] [rbp-44Ch]
  data::EventType event_type; // [rsp+48h] [rbp-448h]
  uint32_t record_type; // [rsp+4Ch] [rbp-444h]
  uint32_t cur_progress; // [rsp+50h] [rbp-440h]
  uint32_t time_cost; // [rsp+54h] [rbp-43Ch]
  uint32_t uid; // [rsp+58h] [rbp-438h]
  uint32_t now; // [rsp+5Ch] [rbp-434h]
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::iterator __for_begin; // [rsp+60h] [rbp-430h] BYREF
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::iterator __for_end; // [rsp+68h] [rbp-428h] BYREF
  Challenge *challenge; // [rsp+70h] [rbp-420h]
  const data::DungeonChallengeConfig *dungeon_challenge_config_ptr; // [rsp+78h] [rbp-418h]
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+80h] [rbp-410h]
  proto::ChallengeRecordBin *challenge_record_bin; // [rsp+88h] [rbp-408h]
  uint64_t scene_now; // [rsp+90h] [rbp-400h]
  std::vector<unsigned int> *__for_range_0; // [rsp+98h] [rbp-3F8h]
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>> *__for_range_1; // [rsp+A0h] [rbp-3F0h]
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>> *__for_range_2; // [rsp+A8h] [rbp-3E8h]
  const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > *v150; // [rsp+B0h] [rbp-3E0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *child_index_0; // [rsp+B8h] [rbp-3D8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *_; // [rsp+C0h] [rbp-3D0h]
  const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > *v153; // [rsp+C8h] [rbp-3C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *child_index; // [rsp+D0h] [rbp-3C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *child_info; // [rsp+D8h] [rbp-3B8h]
  common::milog::MiLogStream v156; // [rsp+E0h] [rbp-3B0h] BYREF
  common::milog::MiLogStream v157; // [rsp+100h] [rbp-390h] BYREF
  char v158[880]; // [rsp+120h] [rbp-370h] BYREF

  HIDWORD(v127) = challenge_index;
  *((_DWORD *)&v121._anon_0._M_allocated_capacity + 3) = reason;
  *((_DWORD *)&v121._anon_0._M_allocated_capacity + 2) = stat_reason;
  LOBYTE(v127) = is_success;
  v121._anon_0._M_local_buf[4] = is_pause;
  v6 = (unsigned __int64)v158;
  v121._M_string_length = (std::string::size_type)v158;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(832LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "18 48 1 10 holder:394 64 1 14 is_success:356 80 4 23 challenge_left_time:470 96 4 12 duration:54"
                        "9 112 4 19 challenge_index:356 128 8 8 iter:358 160 8 14 child_iter:601 192 8 18 challenge_pair:"
                        "541 224 16 17 challenge_ptr:365 256 16 14 player_ptr:387 288 16 21 dungeon_scene_ptr:485 320 16 "
                        "13 scene_ptr:533 352 16 13 scene_ptr:575 384 16 20 finish_event_ptr:578 416 16 23 child_challeng"
                        "e_ptr:604 448 24 12 uid_list:557 512 128 27 challenge_finish_notify:400 672 128 10 notify:493";
  *(_QWORD *)(v6 + 16) = ChallengeComp::finishChallenge;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234556927;
  v8[536862723] = -234556924;
  v8[536862724] = -218959360;
  v8[536862725] = -218959360;
  v8[536862726] = -218959360;
  v8[536862727] = -219021312;
  v8[536862728] = -219021312;
  v8[536862729] = -219021312;
  v8[536862730] = -219021312;
  v8[536862731] = -219021312;
  v8[536862732] = -219021312;
  v8[536862733] = -219021312;
  v8[536862734] = -234881024;
  v8[536862735] = -218959118;
  v8[536862740] = -218959118;
  v8[536862745] = -202116109;
  *(_DWORD *)(v6 + 112) = challenge_index;
  *(_BYTE *)(v6 + 64) = (_BYTE)v127;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v6 + 128) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                 &this->challenge_map_,
                                                                                 (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v6 + 112));
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v6 + 192) = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_);
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v6 + 128),
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v6 + 192)) )
  {
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v6 + 128));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v6 + 224), &v12->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v6 + 224)) )
    {
      common::milog::MiLogStream::create(
        &v157,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "finishChallenge",
        368);
      v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v157,
              (const char (*)[29])"challenge nullptr, group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v14,
              (const char (*)[18])" challenge_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v6 + 112));
      common::milog::MiLogStream::~MiLogStream(&v157);
    }
    else
    {
      v16 = *(_DWORD *)(v6 + 112);
      v17 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
      if ( *(_BYTE *)(((unsigned __int64)&v17->challenge_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->challenge_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v17->challenge_id);
      }
      ChallengeComp::delFinishedChallengeInScene(this, v17->challenge_id, v16);
      std::map<unsigned int,std::shared_ptr<Challenge>>::erase[abi:cxx11](
        &this->challenge_map_,
        *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v6 + 128));
      challenge = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
      if ( *(char *)(((unsigned __int64)&challenge->finished >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&challenge->finished);
      if ( challenge->finished )
      {
        common::milog::MiLogStream::create(
          &v157,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "finishChallenge",
          377);
        v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v157,
                (const char (*)[38])"challenge already finished. group_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&challenge->start_time);
        }
        if ( challenge->start_time )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          Group::getOwnerPlayer((const Group *const)(v6 + 256));
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v6 + 256), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v157,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/challenge_comp.cpp",
              "finishChallenge",
              390);
            v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                    &v157,
                    (const char (*)[10])"group_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            val = Group::getGroupId(this->group_);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v22,
              (const char (*)[21])" getOwnerPlayer fail");
            common::milog::MiLogStream::~MiLogStream(&v157);
          }
          else
          {
            v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
            BasicComp = Player::getBasicComp(v23);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v157, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0x7D2u, v121);
            std::string::~string(&v157);
            if ( *(char *)(((unsigned __int64)&challenge->finished >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&challenge->finished);
            challenge->finished = 1;
            v25 = *(_BYTE *)(v6 + 64);
            if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_store1(&challenge->is_success);
            }
            challenge->is_success = v25;
            if ( *(_BYTE *)(((unsigned __int64)&challenge->finish_reason >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&challenge->finish_reason >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&challenge->finish_reason);
            }
            challenge->finish_reason = HIDWORD(stat_reasona);
            proto::DungeonChallengeFinishNotify::DungeonChallengeFinishNotify((proto::DungeonChallengeFinishNotify *const)(v6 + 512));
            if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4(&challenge->challenge_index);
            }
            proto::DungeonChallengeFinishNotify::set_challenge_index(
              (proto::DungeonChallengeFinishNotify *const)(v6 + 512),
              challenge->challenge_index);
            proto::DungeonChallengeFinishNotify::set_is_success(
              (proto::DungeonChallengeFinishNotify *const)(v6 + 512),
              *(_BYTE *)(v6 + 64));
            finish_type = CHALLENGE_FINISH_TYPE_NONE;
            if ( BYTE4(duration) )
            {
              finish_type = CHALLENGE_FINISH_TYPE_PAUSE;
            }
            else
            {
              if ( *(_BYTE *)(v6 + 64) )
                v26 = CHALLENGE_FINISH_TYPE_SUCC;
              else
                v26 = CHALLENGE_FINISH_TYPE_FAIL;
              finish_type = v26;
            }
            proto::DungeonChallengeFinishNotify::set_finish_type(
              (proto::DungeonChallengeFinishNotify *const)(v6 + 512),
              finish_type);
            if ( *(_BYTE *)(v6 + 64) == 1 && HIDWORD(stat_reasona) != 1 && !BYTE4(duration) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v6 + 416));
              p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416))->design_config.txt_config_mgr.dungeon_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&challenge->challenge_id);
              }
              dungeon_challenge_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(
                                               p_dungeon_config_mgr,
                                               challenge->challenge_id);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 416));
              if ( dungeon_challenge_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->record_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->record_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&dungeon_challenge_config_ptr->record_type);
                }
                record_type = dungeon_challenge_config_ptr->record_type;
                if ( record_type )
                {
                  __for_range = &challenge->condition_vec;
                  *(std::vector<std::shared_ptr<ChallengeCondition>>::iterator *)(v6 + 160) = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challenge->condition_vec);
                  *(std::vector<std::shared_ptr<ChallengeCondition>>::iterator *)(v6 + 192) = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range);
                  while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                            (const __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition>*,std::vector<std::shared_ptr<ChallengeCondition>> > *)(v6 + 160),
                            (const __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition>*,std::vector<std::shared_ptr<ChallengeCondition>> > *)(v6 + 192)) )
                  {
                    v32 = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition>*,std::vector<std::shared_ptr<ChallengeCondition>> > *const)(v6 + 160));
                    std::shared_ptr<ChallengeCondition>::shared_ptr(
                      (std::shared_ptr<ChallengeCondition> *const)(v6 + 416),
                      v32);
                    if ( std::operator==<ChallengeCondition>(
                           (const std::shared_ptr<ChallengeCondition> *)(v6 + 416),
                           0LL) )
                    {
                      common::milog::MiLogStream::create(
                        &v157,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/dungeon/challenge_comp.cpp",
                        "finishChallenge",
                        440);
                      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v157,
                        (const char (*)[27])"challenge_cond_ptr is null");
                      common::milog::MiLogStream::~MiLogStream(&v157);
                      v33 = 0;
                    }
                    else
                    {
                      v34 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                      if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                        v34 = __asan_report_load8(v34);
                      v35 = *(_QWORD *)v34 + 40LL;
                      if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
                        v34 = __asan_report_load8(*(_QWORD *)v34 + 40LL);
                      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v35)(v34, record_type) != 1 )
                      {
                        v33 = 0;
                      }
                      else
                      {
                        v36 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                        if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                          v36 = __asan_report_load8(v36);
                        v37 = *(_QWORD *)v36 + 24LL;
                        if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                          v36 = __asan_report_load8(*(_QWORD *)v36 + 24LL);
                        cur_progress = (*(__int64 (__fastcall **)(unsigned __int64))v37)(v36);
                        proto::DungeonChallengeFinishNotify::set_challenge_record_type(
                          (proto::DungeonChallengeFinishNotify *const)(v6 + 512),
                          record_type);
                        proto::DungeonChallengeFinishNotify::set_current_value(
                          (proto::DungeonChallengeFinishNotify *const)(v6 + 512),
                          cur_progress);
                        v38 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                        if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                          v38 = __asan_report_load8(v38);
                        v39 = *(_QWORD *)v38 + 48LL;
                        if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
                          v38 = __asan_report_load8(*(_QWORD *)v38 + 48LL);
                        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v39)(v38, cur_progress) != 1 )
                        {
                          v33 = 0;
                        }
                        else
                        {
                          challenge_record_bin = std::map<unsigned int,proto::ChallengeRecordBin>::operator[](
                                                   &this->challenge_record_map_,
                                                   &challenge->challenge_index);
                          if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
                            && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                                     + 0x7FFF8000) )
                          {
                            __asan_report_load4(&challenge->challenge_index);
                          }
                          proto::ChallengeRecordBin::set_challenge_index(
                            challenge_record_bin,
                            challenge->challenge_index);
                          if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&challenge->challenge_id);
                          }
                          proto::ChallengeRecordBin::set_challenge_id(challenge_record_bin, challenge->challenge_id);
                          proto::ChallengeRecordBin::set_challenge_record_type(challenge_record_bin, record_type);
                          proto::ChallengeRecordBin::set_best_value(challenge_record_bin, cur_progress);
                          if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
                            && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                                     + 0x7FFF8000) )
                          {
                            __asan_report_load4(&challenge->challenge_index);
                          }
                          v40 = challenge->challenge_index;
                          v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
                          ChallengeComp::notifyChallengeRecords(this, v41, v40);
                          proto::DungeonChallengeFinishNotify::set_is_new_record(
                            (proto::DungeonChallengeFinishNotify *const)(v6 + 512),
                            1);
                          v33 = 1;
                        }
                      }
                    }
                    std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v6 + 416));
                    if ( v33 )
                      break;
                    __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition>*,std::vector<std::shared_ptr<ChallengeCondition>> > *const)(v6 + 160));
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v157,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/dungeon/challenge_comp.cpp",
                  "finishChallenge",
                  425);
                v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        &v157,
                        (const char (*)[10])"group_id:");
                if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->group_);
                val = Group::getGroupId(this->group_);
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
                v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v29,
                        (const char (*)[15])" challenge_id:");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        &challenge->challenge_id);
                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v31,
                  (const char (*)[19])" config not found.");
                common::milog::MiLogStream::~MiLogStream(&v157);
              }
            }
            *(_DWORD *)(v6 + 80) = 0;
            HIBYTE(v130) = ChallengeComp::checkAndGetChallengeLeftTime(this, challenge, (uint32_t *)(v6 + 80));
            ChallengeComp::clearChallengeAbilityGroup(this, challenge);
            scene_now = ChallengeComp::getSceneTimeMs(this);
            if ( *(_BYTE *)(((unsigned __int64)&challenge->start_scene_time_ms >> 3) + 0x7FFF8000) )
              __asan_report_load8(&challenge->start_scene_time_ms);
            if ( scene_now <= challenge->start_scene_time_ms )
            {
              v44 = 0;
            }
            else
            {
              v42 = scene_now - challenge->start_scene_time_ms;
              if ( (v42 & 0x8000000000000000LL) != 0LL )
                v43 = (float)(int)(v42 & 1 | (v42 >> 1)) + (float)(int)(v42 & 1 | (v42 >> 1));
              else
                v43 = (float)(int)v42;
              v44 = (int)std::ceil(v43 / 1000.0);
            }
            time_cost = v44;
            proto::DungeonChallengeFinishNotify::set_time_cost(
              (proto::DungeonChallengeFinishNotify *const)(v6 + 512),
              v44);
            common::milog::MiLogStream::create(
              &v156,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/challenge_comp.cpp",
              "finishChallenge",
              481);
            v45 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v156,
                    (const char (*)[27])"[challenge] has_left_time:");
            v46 = common::milog::MiLogStream::operator<<(v45, SHIBYTE(v130));
            v47 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v46,
                    (const char (*)[22])" challenge_left_time:");
            v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v47,
                    (const unsigned int *)(v6 + 80));
            v49 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    v48,
                    (const char (*)[26])" challenge_finish_notify:");
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)&v157,
              (google::protobuf::Message *)(v6 + 512));
            v50 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, (const std::string *)&v157);
            v51 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v50,
                    (const char (*)[15])" ,dungeon_id: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            HIDWORD(v131) = Group::getDungeonId(this->group_);
            v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v51,
                    (const unsigned int *)&v131 + 1);
            v53 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v52, (const char (*)[11])",is_pause:");
            v54 = common::milog::MiLogStream::operator<<(v53, SBYTE4(duration));
            v55 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v54, (const char (*)[11])",group_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            val = Group::getGroupId(this->group_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &val);
            std::string::~string(&v157);
            common::milog::MiLogStream::~MiLogStream(&v156);
            v56 = *(_BYTE *)(v6 + 64);
            v57 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
            ChallengeComp::getDungeonStrengthenDataOnChallengeFinish(
              this,
              v57,
              v56,
              (proto::DungeonChallengeFinishNotify *)(v6 + 512));
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            Group::getScene((const Group *const)(v6 + 416));
            std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v6 + 288));
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 416));
            if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v6 + 288))
              && (v58 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288)),
                  v59 = DungeonScene::getChallengeSettleCallback(v58),
                  std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::operator bool(v59)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->group_);
              Group::getViewingPlayerUids((std::vector<unsigned int> *)(v6 + 448), this->group_);
              __for_range_0 = (std::vector<unsigned int> *)(v6 + 448);
              *(std::vector<unsigned int>::iterator *)(v6 + 160) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v6 + 448));
              *(std::vector<unsigned int>::iterator *)(v6 + 192) = std::vector<unsigned int>::end(__for_range_0);
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v6 + 160),
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v6 + 192)) )
              {
                v61 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v6 + 160));
                v62 = v61;
                if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v61);
                }
                uid = *v62;
                v63 = ServiceBox::findService<GameserverService>();
                GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v63);
                PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v6 + 416), GameThreadLocal + 16);
                if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v6 + 416), 0LL) )
                {
                  proto::DungeonChallengeFinishNotify::DungeonChallengeFinishNotify(
                    (proto::DungeonChallengeFinishNotify *const)(v6 + 672),
                    (const proto::DungeonChallengeFinishNotify *)(v6 + 512));
                  v65 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288));
                  ChallengeSettleCallback = DungeonScene::getChallengeSettleCallback(v65);
                  v67 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288));
                  v68 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                  std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::operator()(
                    ChallengeSettleCallback,
                    v68,
                    v67,
                    challenge,
                    (proto::DungeonChallengeFinishNotify *)(v6 + 672));
                  v69 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                  Player::sendProto(v69, (const google::protobuf::Message *)(v6 + 672));
                  proto::DungeonChallengeFinishNotify::~DungeonChallengeFinishNotify((proto::DungeonChallengeFinishNotify *const)(v6 + 672));
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 416));
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v6 + 160));
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 448));
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->group_);
              Group::notifyAllPlayer<proto::DungeonChallengeFinishNotify>(
                this->group_,
                (proto::DungeonChallengeFinishNotify *)(v6 + 512),
                0);
            }
            if ( HIDWORD(stat_reasona) != 2 )
            {
              event_type = EVENT_NONE;
              if ( BYTE4(duration) )
              {
                event_type = EVENT_CHALLENGE_PAUSE;
              }
              else
              {
                if ( *(_BYTE *)(v6 + 64) )
                  v70 = EVENT_CHALLENGE_SUCCESS;
                else
                  v70 = EVENT_CHALLENGE_FAIL;
                event_type = v70;
              }
              EventUtil::createEvent((data::EventType)(v6 + 384));
              if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v6 + 384), 0LL) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                           + 0x7FFF8000) )
                {
                  __asan_report_load4(&challenge->challenge_index);
                }
                common::tools::StringUtils::numToStr<unsigned int>((std::string *)&v157, challenge->challenge_index);
                v71 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 384));
                std::string::operator=(&v71->source_name, &v157);
                std::string::~string(&v157);
                if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&challenge->challenge_id);
                }
                challenge_id = challenge->challenge_id;
                v73 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 384));
                p_param1 = &v73->param1;
                if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(p_param1);
                }
                v73->param1 = challenge_id;
                v75 = *(_DWORD *)(v6 + 80);
                v76 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 384));
                if ( *(_BYTE *)(((unsigned __int64)&v76->param2 >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v76->param2 >> 3) + 0x7FFF8000) <= 3 )
                {
                  v76 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v76->param2);
                }
                v76->param2 = v75;
                p_trans_no = &challenge->trans_no;
                v78 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 384));
                std::string::operator=(&v78->param_str1, p_trans_no);
                std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
                Player::getCurAvatar((Player *const)(v6 + 416));
                if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v6 + 416), 0LL) )
                {
                  v79 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                  EntityId = Entity::getEntityId((const Entity *const)v79);
                  v81 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 384));
                  p_source_entity_id = &v81->source_entity_id;
                  if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_source_entity_id);
                  }
                  v81->source_entity_id = EntityId;
                }
                if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->group_);
                Group::handleEvent(this->group_, (EventPtr *)(v6 + 384));
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v6 + 416));
              }
              std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v6 + 384));
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            Group::getScene((const Group *const)(v6 + 320));
            if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v6 + 320), 0LL) )
            {
              std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v6 + 416));
              if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v6 + 416), 0LL) )
              {
                if ( HIBYTE(v130) )
                {
                  p_challenge_index = &challenge->challenge_index;
                  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->group_);
                  val = Group::getGroupId(this->group_);
                  *(std::pair<unsigned int,unsigned int> *)(v6 + 192) = std::make_pair<unsigned int,unsigned int &>(
                                                                          &val,
                                                                          p_challenge_index);
                  v84 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                  DungeonScene::setChallengeLeftTime(
                    v84,
                    (const std::pair<unsigned int,unsigned int> *)(v6 + 192),
                    *(_DWORD *)(v6 + 80));
                }
                v85 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                v86 = *(_BYTE *)(v6 + 64);
                if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                           + 0x7FFF8000) )
                {
                  v85 = (DungeonScene *)&challenge->challenge_index;
                  __asan_report_load4(&challenge->challenge_index);
                }
                DungeonScene::onChallengeFinish(v85, challenge->challenge_index, v86);
              }
              std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v6 + 416));
            }
            now = common::tools::TimeUtils::getNow();
            if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&challenge->start_time);
            }
            if ( now <= challenge->start_time )
              v87 = 0;
            else
              v87 = now - challenge->start_time;
            *(_DWORD *)(v6 + 96) = v87;
            if ( *(_BYTE *)(v6 + 64) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->group_);
              val = Group::getSceneId(this->group_);
              p_challenge_id = &challenge->challenge_id;
              if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->group_);
              HIDWORD(v131) = Group::getGroupId(this->group_);
              if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->group_);
              LODWORD(v131) = Group::getDungeonId(this->group_);
              common::tools::perf::make_shared<DungeonChallengeSuccessEvent,unsigned int,unsigned int,unsigned int &,unsigned int,unsigned int &>(
                (unsigned int *)(v6 + 384),
                (unsigned int *)&v131,
                (unsigned int *)&v131 + 1,
                p_challenge_id,
                &val,
                (unsigned int *)(v6 + 112),
                v122,
                v123,
                duration,
                stat_reasona);
              std::shared_ptr<BaseEvent>::shared_ptr<DungeonChallengeSuccessEvent,void>(
                (std::shared_ptr<BaseEvent> *const)(v6 + 352),
                (std::shared_ptr<DungeonChallengeSuccessEvent> *)(v6 + 384));
              std::shared_ptr<DungeonChallengeSuccessEvent>::~shared_ptr((std::shared_ptr<DungeonChallengeSuccessEvent> *const)(v6 + 384));
              v89 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
              EventComp = Player::getEventComp(v89);
              std::shared_ptr<BaseEvent>::shared_ptr(
                (std::shared_ptr<BaseEvent> *const)(v6 + 416),
                (const std::shared_ptr<BaseEvent> *)(v6 + 352));
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v6 + 416));
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v6 + 416));
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v6 + 352));
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,int>>(
              (std::vector<unsigned int> *)(v6 + 448),
              &this->group_->viewing_uid_map_);
            v91 = (unsigned int *)&challenge->trans_no;
            val = Group::getSceneId(this->group_);
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            HIDWORD(v131) = Group::getGroupId(this->group_);
            common::tools::perf::make_shared<ChallengeFinishEvent,unsigned int &,unsigned int &,unsigned int,bool &,std::vector<unsigned int> &,unsigned int &,unsigned int &,unsigned int,std::string &>(
              (unsigned int *)(v6 + 384),
              &challenge->challenge_index,
              &challenge->challenge_id,
              (bool *)&v131 + 4,
              (std::vector<unsigned int> *)(v6 + 64),
              (unsigned int *)(v6 + 448),
              (unsigned int *)(v6 + 96),
              (unsigned int *)(v6 + 80),
              (std::string *)&val,
              v91,
              v122,
              v123,
              (bool *)duration,
              (std::vector<unsigned int> *)stat_reasona,
              v127,
              (unsigned int *)this,
              v130,
              v131);
            __for_range_1 = &challenge->child_map;
            *(std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::iterator *)(v6 + 160) = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::begin(&challenge->child_map);
            *(std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::iterator *)(v6 + 192) = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::end(__for_range_1);
            while ( std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::_Self *)(v6 + 160),
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::_Self *)(v6 + 192)) )
            {
              v153 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > > *const)(v6 + 160));
              child_index = std::get<0ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v153);
              child_info = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v153);
              *(_DWORD *)(v6 + 416) = 0;
              *(_DWORD *)(v6 + 420) = 0;
              *(_DWORD *)(v6 + 424) = 0;
              *(_BYTE *)(v6 + 428) = 0;
              *(_BYTE *)(v6 + 429) = 0;
              if ( *(_BYTE *)(((unsigned __int64)child_index >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)child_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)child_index >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(child_index);
              }
              *(_DWORD *)(v6 + 416) = *child_index;
              v92 = std::get<0ul,unsigned int,unsigned int,bool,bool,unsigned int>(child_info);
              v93 = v92;
              if ( *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v92 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v92);
              }
              *(_DWORD *)(v6 + 420) = *v93;
              v94 = std::get<1ul,unsigned int,unsigned int,bool,bool,unsigned int>(child_info);
              v95 = v94;
              if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v94 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v94);
              }
              *(_DWORD *)(v6 + 424) = *v95;
              v96 = (std::__tuple_element_t_38 *)std::get<2ul,unsigned int,unsigned int,bool,bool,unsigned int>(child_info);
              v97 = (char *)v96;
              if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)v96 & 7) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(v96);
              }
              *(_BYTE *)(v6 + 428) = *v97;
              v98 = (std::__tuple_element_t_36 *)std::get<3ul,unsigned int,unsigned int,bool,bool,unsigned int>(child_info);
              v99 = (char *)v98;
              if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)v98 & 7) >= *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(v98);
              }
              *(_BYTE *)(v6 + 429) = *v99;
              v100 = std::__shared_ptr_access<ChallengeFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 384));
              std::vector<ChallengeFinishEvent::ChildChallengeInfo>::push_back(
                &v100->child_challenge_vec,
                (const std::vector<ChallengeFinishEvent::ChildChallengeInfo>::value_type *)(v6 + 416));
              std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > > *const)(v6 + 160));
            }
            v101 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
            v102 = Player::getEventComp(v101);
            std::shared_ptr<BaseEvent>::shared_ptr<ChallengeFinishEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v6 + 416),
              (const std::shared_ptr<ChallengeFinishEvent> *)(v6 + 384));
            PlayerEventComp::notifyEvent(v102, (BaseEventPtr *)(v6 + 416));
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v6 + 416));
            std::shared_ptr<ChallengeFinishEvent>::~shared_ptr((std::shared_ptr<ChallengeFinishEvent> *const)(v6 + 384));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 448));
            ChallengeComp::tryTriggerMarkedEvent(
              thisb,
              challenge,
              *((ChallengeFinishReason *)&v121._anon_0._M_allocated_capacity + 3),
              *(_BYTE *)(v6 + 64),
              0);
            if ( *(_BYTE *)(((unsigned __int64)&thisb->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisb->group_);
            if ( Group::getDungeonId(thisb->group_) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&thisb->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisb->group_);
              Group::getScene((const Group *const)(v6 + 352));
              if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v6 + 352)) )
              {
                v103 = (bool *)&challenge->challenge_id;
                if ( *(_BYTE *)(((unsigned __int64)&thisb->group_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisb->group_);
                val = Group::getGroupId(thisb->group_);
                if ( *(_BYTE *)(((unsigned __int64)&thisb->group_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisb->group_);
                HIDWORD(v131) = Group::getDungeonId(thisb->group_);
                common::tools::perf::make_shared<DungeonChallengeFinishEvent,unsigned int,unsigned int,unsigned int &,bool &>(
                  (unsigned int *)(v6 + 416),
                  (unsigned int *)&v131 + 1,
                  &val,
                  v103,
                  (unsigned int *)(v6 + 64),
                  v104,
                  (unsigned int *)v121._M_dataplus._M_p,
                  (bool *)v121._M_string_length);
                std::shared_ptr<BaseEvent>::shared_ptr<DungeonChallengeFinishEvent,void>(
                  (std::shared_ptr<BaseEvent> *const)(v6 + 384),
                  (std::shared_ptr<DungeonChallengeFinishEvent> *)(v6 + 416));
                std::shared_ptr<DungeonChallengeFinishEvent>::~shared_ptr((std::shared_ptr<DungeonChallengeFinishEvent> *const)(v6 + 416));
                v105 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 352));
                std::shared_ptr<BaseEvent>::shared_ptr(
                  (std::shared_ptr<BaseEvent> *const)(v6 + 416),
                  (const std::shared_ptr<BaseEvent> *)(v6 + 384));
                std::function<ForeachPolicy ()(Player &)>::function<ChallengeComp::finishChallenge(unsigned int,bool,ChallengeFinishReason,proto_log::PlayerLogBodyChallengeFinish_FinishType,bool)::{lambda(Player &)#1},void,void>(
                  (std::function<ForeachPolicy(Player&)> *const)&v157,
                  (ChallengeComp::finishChallenge::<lambda(Player&)> *)(v6 + 416));
                Scene::foreachPlayer(v105, (std::function<ForeachPolicy(Player&)> *)&v157);
                std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v157);
                ChallengeComp::finishChallenge(unsigned int,bool,ChallengeFinishReason,proto_log::PlayerLogBodyChallengeFinish_FinishType,bool)::{lambda(Player &)#1}::~Player((ChallengeComp::finishChallenge::<lambda(Player&)> *const)(v6 + 416));
                std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v6 + 384));
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 352));
            }
            v106 = *(_DWORD *)(v6 + 96);
            v107 = *(_BYTE *)(v6 + 64);
            v108 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
            ChallengeComp::writeChallengeFinishStatLog(
              thisb,
              v108,
              challenge,
              v107,
              v106,
              *((proto_log::PlayerLogBodyChallengeFinish::FinishType *)&v121._anon_0._M_allocated_capacity + 2));
            ChallengeComp::flushExhibitionTemporaryDataOnChallengeFinish(thisb, challenge);
            ChallengeComp::recordToViewingPlayersOnChallengeEnd(thisb, challenge);
            if ( ChallengeComp::isChildChallenge(thisb, challenge) )
              ChallengeComp::onChildSettle(thisb, *(_BYTE *)(v6 + 64), challenge);
            if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&challenge->father_index);
            }
            father_index = challenge->father_index;
            if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4(&challenge->challenge_index);
            }
            if ( father_index == challenge->challenge_index )
            {
              __for_range_2 = &challenge->child_map;
              __for_begin._M_node = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::begin(&challenge->child_map)._M_node;
              __for_end._M_node = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::end(__for_range_2)._M_node;
              while ( std::operator!=(&__for_begin, &__for_end) )
              {
                v150 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator*(&__for_begin);
                child_index_0 = std::get<0ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v150);
                _ = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v150);
                *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v6 + 160) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                               &thisb->challenge_map_,
                                                                                               child_index_0);
                *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v6 + 192) = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&thisb->challenge_map_);
                if ( std::operator!=(
                       (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v6 + 160),
                       (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v6 + 192)) )
                {
                  v110 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v6 + 160));
                  std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v6 + 416), &v110->second);
                  if ( std::operator!=<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v6 + 416)) )
                  {
                    v111 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                    if ( *(char *)(((unsigned __int64)&v111->finished >> 3) + 0x7FFF8000) < 0 )
                      v111 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v111->finished);
                    if ( !v111->finished )
                    {
                      durationa = *(_DWORD *)(v6 + 96);
                      v112 = *(_BYTE *)(v6 + 64);
                      v113 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                      v114 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
                      ChallengeComp::writeChallengeFinishStatLog(
                        thisb,
                        v114,
                        v113,
                        v112,
                        durationa,
                        PlayerLogBodyChallengeFinish_FinishType_STOP);
                    }
                    v115 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                    ChallengeComp::clearChallengeAbilityGroup(thisb, v115);
                    v116 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                    ChallengeComp::flushExhibitionTemporaryDataOnChallengeFinish(thisb, v116);
                    common::milog::MiLogStream::create(
                      &v157,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/dungeon/challenge_comp.cpp",
                      "finishChallenge",
                      614);
                    if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4(&challenge->challenge_index);
                    }
                    v117 = challenge->challenge_index;
                    if ( *(_BYTE *)(((unsigned __int64)child_index_0 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)child_index_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)child_index_0 >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4(child_index_0);
                    }
                    common::milog::MiLogStream::operator()(
                      &v157,
                      "Erase Child Challenge @index[%u] on Father @index[%u] finish.",
                      *child_index_0,
                      v117);
                    common::milog::MiLogStream::~MiLogStream(&v157);
                    v118 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                    ChallengeComp::recordToViewingPlayersOnChallengeEnd(thisb, v118);
                    if ( *(_BYTE *)(((unsigned __int64)child_index_0 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)child_index_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)child_index_0 >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4(child_index_0);
                    }
                    v119 = *child_index_0;
                    v120 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 416));
                    if ( *(_BYTE *)(((unsigned __int64)&v120->challenge_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&v120->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&v120->challenge_id);
                    }
                    ChallengeComp::delFinishedChallengeInScene(thisb, v120->challenge_id, v119);
                  }
                  std::map<unsigned int,std::shared_ptr<Challenge>>::erase[abi:cxx11](
                    &thisb->challenge_map_,
                    *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v6 + 160));
                  std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v6 + 416));
                }
                std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator++(&__for_begin);
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 320));
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v6 + 288));
            proto::DungeonChallengeFinishNotify::~DungeonChallengeFinishNotify((proto::DungeonChallengeFinishNotify *const)(v6 + 512));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 256));
          goto LABEL_225;
        }
        common::milog::MiLogStream::create(
          &v157,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "finishChallenge",
          383);
        v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v157,
                (const char (*)[31])"challenge NOT start. group_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
      }
      val = Group::getGroupId(this->group_);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v19,
              (const char (*)[18])" challenge_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &challenge->challenge_index);
      common::milog::MiLogStream::~MiLogStream(&v157);
    }
LABEL_225:
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v6 + 224));
    goto LABEL_226;
  }
  common::milog::MiLogStream::create(
    &v157,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/dungeon/challenge_comp.cpp",
    "finishChallenge",
    361);
  v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v157,
         (const char (*)[31])"challenge not found, group_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  val = Group::getGroupId(this->group_);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])" challenge_index:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v6 + 112));
  common::milog::MiLogStream::~MiLogStream(&v157);
LABEL_226:
  if ( v121._M_string_length == v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8064) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 579: range 0000000014F0A682-0000000014F0A6F9
ForeachPolicy __cdecl ChallengeComp::finishChallenge(unsigned int,bool,ChallengeFinishReason,proto_log::PlayerLogBodyChallengeFinish_FinishType,bool)::{lambda(Player &)#1}::operator()(
        const ChallengeComp::finishChallenge::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-20h] BYREF

  EventComp = Player::getEventComp(player);
  std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, &__closure->__finish_event_ptr);
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  return 0;
};

// Line 579: range 0000000014F5DEDA-0000000014F5DEFF
void __cdecl ChallengeComp::finishChallenge(unsigned int,bool,ChallengeFinishReason,proto_log::PlayerLogBodyChallengeFinish_FinishType,bool)::{lambda(Player &)#1}::Player(
        ChallengeComp::finishChallenge::<lambda(Player&)> *const this,
        ChallengeComp::finishChallenge::<lambda(Player&)> *a2)
{
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__finish_event_ptr, &a2->__finish_event_ptr);
};

// Line 579: range 0000000014F5DFCA-0000000014F5DFEF
void __cdecl ChallengeComp::finishChallenge(unsigned int,bool,ChallengeFinishReason,proto_log::PlayerLogBodyChallengeFinish_FinishType,bool)::{lambda(Player &)#1}::Player(
        ChallengeComp::finishChallenge::<lambda(Player&)> *const this,
        const ChallengeComp::finishChallenge::<lambda(Player&)> *a2)
{
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__finish_event_ptr, &a2->__finish_event_ptr);
};

// Line 579: range 0000000014F0A6FA-0000000014F0A714
void __cdecl ChallengeComp::finishChallenge(unsigned int,bool,ChallengeFinishReason,proto_log::PlayerLogBodyChallengeFinish_FinishType,bool)::{lambda(Player &)#1}::~Player(
        ChallengeComp::finishChallenge::<lambda(Player&)> *const this)
{
  std::shared_ptr<BaseEvent>::~shared_ptr(&this->__finish_event_ptr);
};

// Line 625: range 0000000014F0D490-0000000014F0D95B
__int64 __fastcall ChallengeComp::pauseChallengeByScript(ChallengeComp *const this, uint32_t challenge_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 challenge_index:624 64 8 8 iter:626 96 16 17 challenge_ptr:633";
  *(_QWORD *)(v2 + 16) = ChallengeComp::pauseChallengeByScript;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = challenge_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v2 + 64),
          &__y) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v2 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 96), &v9->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "pauseChallengeByScript",
        636);
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v18,
              (const char (*)[37])"challenge null ptr. challenge_index:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
    }
    else
    {
      v13 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(char *)(((unsigned __int64)&v13->finished >> 3) + 0x7FFF8000) < 0 )
        v13 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v13->finished);
      if ( !v13->finished )
      {
        ChallengeComp::finishChallenge(this, *(_DWORD *)(v2 + 48), 0, 1, 5, 1);
        v8 = 0;
        goto LABEL_19;
      }
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "pauseChallengeByScript",
        641);
      v14 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v18,
              (const char (*)[45])"challenge already finished. challenge_index:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
    }
    operator<<(v12, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v8 = -1;
LABEL_19:
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 96));
    goto LABEL_20;
  }
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/challenge_comp.cpp",
    "pauseChallengeByScript",
    629);
  v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v18,
         (const char (*)[38])"challenge not found. challenge_index:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  operator<<(v7, this->group_);
  common::milog::MiLogStream::~MiLogStream(&v18);
  v8 = -1;
LABEL_20:
  result = v8;
  if ( v19 == (char *)v2 )
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

// Line 652: range 0000000014F0D95C-0000000014F0DE38
__int64 __fastcall ChallengeComp::finishChallengeByScript(
        ChallengeComp *const this,
        uint32_t challenge_index,
        bool is_success)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 19 challenge_index:651 64 8 8 iter:653 96 16 17 challenge_ptr:660";
  *(_QWORD *)(v3 + 16) = ChallengeComp::finishChallengeByScript;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = challenge_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v3 + 64),
          &__y) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96), &v10->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "finishChallengeByScript",
        663);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v20,
              (const char (*)[37])"challenge null ptr. challenge_index:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
    }
    else
    {
      v14 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(char *)(((unsigned __int64)&v14->finished >> 3) + 0x7FFF8000) < 0 )
        v14 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v14->finished);
      if ( !v14->finished )
      {
        ChallengeComp::finishChallenge(this, *(_DWORD *)(v3 + 48), is_success, 1, !is_success, 0);
        v9 = 0;
        goto LABEL_19;
      }
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "finishChallengeByScript",
        668);
      v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v20,
              (const char (*)[45])"challenge already finished. challenge_index:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
    }
    operator<<(v13, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v9 = -1;
LABEL_19:
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96));
    goto LABEL_20;
  }
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/challenge_comp.cpp",
    "finishChallengeByScript",
    656);
  v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v20,
         (const char (*)[38])"challenge not found. challenge_index:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" group:");
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  operator<<(v8, this->group_);
  common::milog::MiLogStream::~MiLogStream(&v20);
  v9 = -1;
LABEL_20:
  result = v9;
  if ( v21 == (char *)v3 )
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

// Line 678: range 0000000014F0DE3A-0000000014F0DFFF
uint64_t __cdecl ChallengeComp::getSceneTimeMs(ChallengeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint64_t SceneTimeMs; // r14
  Scene *v5; // rax
  uint64_t result; // rax
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
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:679";
  *(_QWORD *)(v1 + 16) = ChallengeComp::getSceneTimeMs;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getScene((const Group *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "getSceneTimeMs",
      682);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    SceneTimeMs = 0LL;
  }
  else
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneTimeMs = Scene::getSceneTimeMs(v5);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = SceneTimeMs;
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

// Line 690: range 0000000014F0E000-0000000014F0E5DD
__int64 __fastcall ChallengeComp::finishChallengeByClient(
        ChallengeComp *const this,
        Player *player,
        uint32_t challenge_index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // r14
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+20h] [rbp-F0h] BYREF
  const data::DungeonChallengeConfig *dungeon_challenge_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v23; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 19 challenge_index:689 64 8 8 iter:691 96 16 17 challenge_ptr:698";
  *(_QWORD *)(v3 + 16) = ChallengeComp::finishChallengeByClient;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = challenge_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v3 + 64),
          &__y) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96), &v10->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/challenge_comp.cpp",
        "finishChallengeByClient",
        701);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v24,
              (const char (*)[37])"challenge null ptr. challenge_index:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
    }
    else
    {
      v14 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(char *)(((unsigned __int64)&v14->finished >> 3) + 0x7FFF8000) < 0 )
        v14 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v14->finished);
      if ( !v14->finished )
      {
        ChallengeComp::finishChallenge(this, *(_DWORD *)(v3 + 48), 0, 0, 2, 0);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v23);
        p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.dungeon_config_mgr;
        v18 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v18->challenge_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v18->challenge_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v18->challenge_id);
        }
        dungeon_challenge_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(
                                         p_dungeon_config_mgr,
                                         v18->challenge_id);
        std::shared_ptr<Config>::~shared_ptr(&v23);
        if ( dungeon_challenge_config_ptr )
        {
          if ( *(char *)(((unsigned __int64)&dungeon_challenge_config_ptr->is_trans_back_when_interrupt >> 3)
                       + 0x7FFF8000) < 0 )
            __asan_report_load1(&dungeon_challenge_config_ptr->is_trans_back_when_interrupt);
          if ( dungeon_challenge_config_ptr->is_trans_back_when_interrupt )
            ChallengeComp::transPlayerToChallengeBeginPos(this, player);
        }
        v9 = 0;
        goto LABEL_26;
      }
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/challenge_comp.cpp",
        "finishChallengeByClient",
        706);
      v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v24,
              (const char (*)[45])"challenge already finished. challenge_index:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
    }
    operator<<(v13, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v9 = -1;
LABEL_26:
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96));
    goto LABEL_27;
  }
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/challenge_comp.cpp",
    "finishChallengeByClient",
    694);
  v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v24,
         (const char (*)[38])"challenge not found. challenge_index:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" group:");
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  operator<<(v8, this->group_);
  common::milog::MiLogStream::~MiLogStream(&v24);
  v9 = -1;
LABEL_27:
  result = v9;
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

// Line 722: range 0000000014F0E5DE-0000000014F0EB1E
void __cdecl ChallengeComp::transPlayerToChallengeBeginPos(ChallengeComp *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerSceneComp *SceneComp; // r14
  Scene *v9; // rsi
  common::milog::MiLogStream *v10; // rax
  const GroupInfoScriptConfig *group_info_script_config_ptr; // [rsp+18h] [rbp-128h]
  const Vector3 *rot; // [rsp+20h] [rbp-120h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-110h] BYREF
  TransferReason p_reason; // [rsp+50h] [rbp-F0h] BYREF
  char v15[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:724 64 16 13 scene_ptr:725 96 16 14 avatar_ptr:737";
  *(_QWORD *)(v2 + 16) = ChallengeComp::transPlayerToChallengeBeginPos;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  *(_DWORD *)(v2 + 48) = Group::getGroupId(this->group_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getScene((const Group *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "transPlayerToChallengeBeginPos",
      728);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    group_info_script_config_ptr = LuaConfigMgr::findGroupInfoConfig(
                                     &v5->design_config.lua_config_mgr,
                                     *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( group_info_script_config_ptr )
    {
      Player::getAvatarComp(player);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 96));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "transPlayerToChallengeBeginPos",
          740);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v13, (const char (*)[16])"avatar nullptr.");
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
      else
      {
        v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        rot = Avatar::getLastValidRot(v7);
        SceneComp = Player::getSceneComp(player);
        TransferReason::TransferReason(&p_reason, ENTER_REASON_CHALLENGE_INTERRUPT_BACK);
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        LOBYTE(SceneComp) = PlayerSceneComp::jumpToScene(
                              SceneComp,
                              v9,
                              &group_info_script_config_ptr->pos,
                              rot,
                              0,
                              &p_reason) != 0;
        TransferReason::~TransferReason(&p_reason);
        if ( (_BYTE)SceneComp )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "transPlayerToChallengeBeginPos",
            748);
          v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v13,
                  (const char (*)[48])"transPlayerToChallengeBeginPos fail. group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v13);
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "transPlayerToChallengeBeginPos",
        734);
      v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v13,
             (const char (*)[48])"group_info_script_config_ptr is null, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v15 == (char *)v2 )
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

// Line 754: range 0000000014F0EB20-0000000014F0ECAA
void __cdecl ChallengeComp::foreachUnfinishedChallengeCondition(
        ChallengeComp *const this,
        const std::function<ForeachPolicy(ChallengeCondition&)> *func,
        ChallengeFilter filter)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<unsigned int> p_index_vec; // [rsp+20h] [rbp-A0h] BYREF
  char v8[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 23 challenge_index_vec:755";
  *(_QWORD *)(v3 + 16) = ChallengeComp::foreachUnfinishedChallengeCondition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,std::shared_ptr<Challenge>>>(
    (std::vector<unsigned int> *)(v3 + 32),
    &this->challenge_map_);
  std::vector<unsigned int>::vector(&p_index_vec, (const std::vector<unsigned int> *)(v3 + 32));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &p_index_vec, func, filter);
  std::vector<unsigned int>::~vector(&p_index_vec);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
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

// Line 761: range 0000000014F0ECAC-0000000014F0F006
void __cdecl ChallengeComp::finishUnfinishedChallenges(
        ChallengeComp *const this,
        ChallengeFinishReason reason,
        uint32_t exclude_father_index,
        proto_log::PlayerLogBodyChallengeFinish::FinishType stat_reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v9; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+30h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-F8h]
  char v17[240]; // [rsp+40h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 19 challenge_index:763 64 8 8 iter:765 96 16 17 challenge_ptr:768 128 24 23 challenge_index_vec:762";
  *(_QWORD *)(v4 + 16) = ChallengeComp::finishUnfinishedChallenges;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,std::shared_ptr<Challenge>>>(
    (std::vector<unsigned int> *)(v4 + 128),
    &this->challenge_map_);
  __for_range = (std::vector<unsigned int> *)(v4 + 128);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 128))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 128))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 48) = *v8;
    *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v4 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                  &this->challenge_map_,
                                                                                  (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v4 + 48));
    __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v4 + 64),
           &__y) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v4 + 64));
      std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96), &v9->second);
      if ( !std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v4 + 96)) )
      {
        v10 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( !Challenge::isChildOf(v10, exclude_father_index) )
          ChallengeComp::finishChallenge(this, *(_DWORD *)(v4 + 48), 0, reason, stat_reason, 0);
      }
      std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96));
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 784: range 0000000014F0F008-0000000014F0F1A0
void __cdecl ChallengeComp::clear(ChallengeComp *const this, ChallengeFinishReason reason)
{
  uint32_t v2; // ebx
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::map<unsigned int,std::shared_ptr<Challenge>>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,std::shared_ptr<Challenge>>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,std::shared_ptr<Challenge>> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,std::shared_ptr<Challenge> > *v8; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *challenge_index; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *challenge_ptr; // [rsp+38h] [rbp-18h]

  ChallengeComp::finishUnfinishedChallenges(this, reason, 0, PlayerLogBodyChallengeFinish_FinishType_EXIT_SIGHT);
  __for_range = &this->challenge_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::begin(&this->challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator*(&__for_begin);
    challenge_index = std::get<0ul,unsigned int const,std::shared_ptr<Challenge>>(v8);
    challenge_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Challenge>>(v8);
    if ( std::operator!=<Challenge>(0LL, challenge_ptr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)challenge_index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)challenge_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_index >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(challenge_index);
      }
      v2 = *challenge_index;
      v3 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v3->challenge_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v3->challenge_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v3->challenge_id);
      }
      ChallengeComp::delFinishedChallengeInScene(this, v3->challenge_id, v2);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<Challenge>>::clear(&this->challenge_map_);
  if ( std::operator!=<SceneTimer>(0LL, &this->challenge_timer_ptr_) )
  {
    v4 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->challenge_timer_ptr_);
    common::tools::MiTimer::cancel(v4);
  }
};

// Line 804: range 0000000014F0F1A2-0000000014F0F85F
__int64 __fastcall ChallengeComp::relaxChallengeTimeRestriction(
        ChallengeComp *const this,
        uint32_t challenge_index,
        uint32_t relax_secs,
        ChallengeRelaxTimeType relax_time_type)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const Challenge *challenge; // [rsp+38h] [rbp-E8h]
  const std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+40h] [rbp-E0h]
  const std::shared_ptr<ChallengeCondition> *challenge_condition_ptr; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 19 challenge_index:802 48 4 19 relax_time_type:803 64 8 18 challenge_iter:805 96 16 17 challenge_ptr:812";
  *(_QWORD *)(v4 + 16) = ChallengeComp::relaxChallengeTimeRestriction;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 32) = challenge_index;
  *(_DWORD *)(v4 + 48) = relax_time_type;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v4 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v4 + 32));
  __for_end._M_current = (const std::shared_ptr<ChallengeCondition> *)std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v4 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "relaxChallengeTimeRestriction",
      808);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v31, (const char (*)[10])"group_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    val = Group::getGroupId(this->group_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" challenge_index:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" not found.");
    common::milog::MiLogStream::~MiLogStream(&v31);
    v11 = -1;
  }
  else
  {
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v4 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96), &v12->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "relaxChallengeTimeRestriction",
        815);
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v31, (const char (*)[10])"group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v14,
              (const char (*)[18])" challenge_index:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v31);
      v11 = -1;
    }
    else
    {
      challenge = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(char *)(((unsigned __int64)&challenge->finished >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&challenge->finished);
      if ( challenge->finished )
      {
        v11 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&challenge->start_time);
        }
        if ( challenge->start_time )
        {
          __for_range = &challenge->condition_vec;
          __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challenge->condition_vec)._M_current;
          __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>(
                    &__for_begin,
                    &__for_end) )
          {
            challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
            if ( std::operator==<ChallengeCondition>(challenge_condition_ptr, 0LL) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/challenge_comp.cpp",
                "relaxChallengeTimeRestriction",
                833);
              v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      &v31,
                      (const char (*)[17])"challenge_index:");
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      (const unsigned int *)(v4 + 32));
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                v18,
                (const char (*)[32])" challenge_condition not found.");
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              v19 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
              if ( !ChallengeCondition::isFinished(v19) )
              {
                v20 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
                if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                  v20 = __asan_report_load8(v20);
                v21 = *(_QWORD *)v20 + 56LL;
                if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                  v20 = __asan_report_load8(*(_QWORD *)v20 + 56LL);
                (*(void (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, __int64))v21)(
                  v20,
                  relax_secs,
                  v4 + 48,
                  1LL);
              }
            }
            __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
          }
          v11 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "relaxChallengeTimeRestriction",
            826);
          common::milog::MiLogStream::operator()(&v31, "challenge @ index[%u] NOT started.", *(unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v31);
          v11 = -1;
        }
      }
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96));
  }
  result = v11;
  if ( v32 == (char *)v4 )
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

// Line 847: range 0000000014F0F860-0000000014F0F8B6
void __cdecl ChallengeComp::notifyToAll(
        ChallengeComp *const this,
        const proto::ChallengeDataNotify *data_notify,
        const std::unordered_set<unsigned int> *uid_set)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::notifyAllPlayerInSet<proto::ChallengeDataNotify const>(this->group_, data_notify, uid_set);
};

// Line 853: range 0000000014F0F8B8-0000000014F0FD30
void __cdecl ChallengeComp::notifyChallengeData(const ChallengeComp *const this, const Challenge *challenge)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<Player> *); // r15
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::shared_ptr<ChallengeCondition> *challenge_condition_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Player> v16; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-90h] BYREF
  char v18[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 challenge_ptr:854";
  *(_QWORD *)(v2 + 16) = ChallengeComp::notifyChallengeData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_index);
  }
  ChallengeComp::findChallenge((const ChallengeComp *const)(v2 + 32), (uint32_t)this);
  if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "notifyChallengeData",
      857);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"challenge_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &challenge->challenge_index);
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" nullptr");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    v7 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v7->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v7->start_time);
    }
    if ( v7->start_time )
    {
      __for_range = &std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
        if ( std::operator!=<ChallengeCondition>(challenge_condition_ptr, 0LL) )
        {
          v8 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
          v9 = v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v8);
          v10 = (unsigned __int64)(v9->_vptr_ChallengeCondition + 4);
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8(v9->_vptr_ChallengeCondition + 4);
          v11 = *(void (__fastcall **)(std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<Player> *))v10;
          std::shared_ptr<Player>::shared_ptr(&v16, 0LL);
          v11(v9, &v16);
          std::shared_ptr<Player>::~shared_ptr(&v16);
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/challenge_comp.cpp",
        "notifyChallengeData",
        863);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&challenge->challenge_index);
      }
      common::milog::MiLogStream::operator()(&v17, "challenge @index[%u] NOT started.", challenge->challenge_index);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
  }
  std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 32));
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

// Line 878: range 0000000014F0FD32-0000000014F105BB
void __cdecl ChallengeComp::notifyOnGuestEnter(ChallengeComp *const this, PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  proto::DungeonChallengeBeginNotify *v7; // rcx
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<proto::DungeonChallengeBeginNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // r14
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<proto::DungeonChallengeBeginNotify> *); // r15
  Player *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  Player *v17; // rcx
  std::map<unsigned int,std::shared_ptr<Challenge>>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::map<unsigned int,std::shared_ptr<Challenge>>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin_0; // [rsp+38h] [rbp-128h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end_0; // [rsp+40h] [rbp-120h] BYREF
  std::map<unsigned int,std::shared_ptr<Challenge>> *__for_range; // [rsp+48h] [rbp-118h]
  const std::pair<unsigned int const,std::shared_ptr<Challenge> > *v23; // [rsp+50h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *challenge_index; // [rsp+58h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *challenge_ptr; // [rsp+60h] [rbp-100h]
  Challenge *challenge; // [rsp+68h] [rbp-F8h]
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range_0; // [rsp+70h] [rbp-F0h]
  const ChallengeConditionPtr *challenge_condition_ptr; // [rsp+78h] [rbp-E8h]
  std::shared_ptr<proto::DungeonChallengeBeginNotify> __r; // [rsp+80h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-D0h] BYREF
  common::milog::MiLogStream v31; // [rsp+B0h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+D0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:902 64 16 30 challenge_begin_notify_ptr:909";
  *(_QWORD *)(v2 + 16) = ChallengeComp::notifyOnGuestEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( !std::operator==<Player>(p_player_ptr, 0LL) )
  {
    __for_range = &this->challenge_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::begin(&this->challenge_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator*(&__for_begin);
      challenge_index = std::get<0ul,unsigned int const,std::shared_ptr<Challenge>>(v23);
      challenge_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Challenge>>(v23);
      if ( !std::operator==<Challenge>(0LL, challenge_ptr) )
      {
        challenge = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_ptr);
        if ( *(char *)(((unsigned __int64)&challenge->finished >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&challenge->finished);
        if ( !challenge->finished )
        {
          if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&challenge->start_time);
          }
          if ( challenge->start_time )
          {
            v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            *(_DWORD *)(v2 + 48) = Player::getUid(v5);
            if ( !std::unordered_set<unsigned int>::empty(&challenge->uid_set)
              && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                    &challenge->uid_set,
                    (const unsigned int *)(v2 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/dungeon/challenge_comp.cpp",
                "notifyOnGuestEnter",
                905);
              if ( *(_BYTE *)(((unsigned __int64)challenge_index >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)challenge_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_index >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(challenge_index);
              }
              common::milog::MiLogStream::operator()(
                &v31,
                "guest %u not in challenge %u uid_set.",
                *(unsigned int *)(v2 + 48),
                *challenge_index);
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              common::tools::perf::make_shared<proto::DungeonChallengeBeginNotify>();
              if ( std::operator!=<proto::DungeonChallengeBeginNotify>(
                     0LL,
                     (const std::shared_ptr<proto::DungeonChallengeBeginNotify> *)(v2 + 64)) )
              {
                v7 = std::__shared_ptr_access<proto::DungeonChallengeBeginNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonChallengeBeginNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                ChallengeComp::fillBeginNotify(this, v7, challenge);
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/dungeon/challenge_comp.cpp",
                  "notifyOnGuestEnter",
                  913);
                v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                       &v30,
                       (const char (*)[36])"[challenge] challenge_begin_notify:");
                v9 = std::__shared_ptr_access<proto::DungeonChallengeBeginNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonChallengeBeginNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v31, v9);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)&v31);
                std::string::~string(&v31);
                common::milog::MiLogStream::~MiLogStream(&v30);
                v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
                std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonChallengeBeginNotify>(&__r);
                Player::sendMessage(v10, (common::minet::ConstMessagePtr *)&__r, 0LL);
                std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v31,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/dungeon/challenge_comp.cpp",
                  "notifyOnGuestEnter",
                  918);
                common::milog::MiLogStream::operator()(&v31, "make_shared DungeonChallengeBeginNotify failed");
                common::milog::MiLogStream::~MiLogStream(&v31);
              }
              __for_range_0 = &challenge->condition_vec;
              __for_begin_0._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challenge->condition_vec)._M_current;
              __for_end_0._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                        &__for_begin_0,
                        &__for_end_0) )
              {
                challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin_0);
                if ( std::operator!=<ChallengeCondition>(challenge_condition_ptr, 0LL) )
                {
                  v11 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
                  v12 = v11;
                  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v11);
                  v13 = (unsigned __int64)(v12->_vptr_ChallengeCondition + 4);
                  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
                    v13 = __asan_report_load8(v12->_vptr_ChallengeCondition + 4);
                  v14 = *(void (__fastcall **)(std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<proto::DungeonChallengeBeginNotify> *))v13;
                  std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&__r, p_player_ptr);
                  v14(v12, &__r);
                  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&__r);
                }
                __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin_0);
              }
              v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
              SceneComp = Player::getSceneComp(v15);
              PlayerSceneComp::onChallengeBegin(SceneComp, challenge);
              std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&__r, p_player_ptr);
              ChallengeComp::addGuestChallengeAbilityGroup(this, challenge, (PlayerPtr *)&__r);
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&__r);
              std::shared_ptr<proto::DungeonChallengeBeginNotify>::~shared_ptr((std::shared_ptr<proto::DungeonChallengeBeginNotify> *const)(v2 + 64));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/challenge_comp.cpp",
              "notifyOnGuestEnter",
              898);
            if ( *(_BYTE *)(((unsigned __int64)challenge_index >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)challenge_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_index >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(challenge_index);
            }
            common::milog::MiLogStream::operator()(&v30, "challenge @ index[%u] NOT started.", *challenge_index);
            common::milog::MiLogStream::~MiLogStream(&v30);
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator++(&__for_begin);
    }
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    ChallengeComp::notifyChallengeRecords(this, v17, 0);
  }
  if ( v32 == (char *)v2 )
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

// Line 943: range 0000000014F105BC-0000000014F10CFD
void __cdecl ChallengeComp::notifyOnGuestExit(ChallengeComp *const this, PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  proto::DungeonChallengeFinishNotify *v7; // rcx
  proto::DungeonChallengeFinishNotify *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<proto::DungeonChallengeFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *v11; // r14
  Player *v12; // rax
  PlayerSceneComp *SceneComp; // rax
  std::map<unsigned int,std::shared_ptr<Challenge>>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,std::shared_ptr<Challenge>>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::map<unsigned int,std::shared_ptr<Challenge>> *__for_range; // [rsp+28h] [rbp-108h]
  const std::pair<unsigned int const,std::shared_ptr<Challenge> > *v17; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *challenge_index; // [rsp+38h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *challenge_ptr; // [rsp+40h] [rbp-F0h]
  Challenge *challenge; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Player> v21; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v23; // [rsp+80h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:963 64 16 31 challenge_finish_notify_ptr:979";
  *(_QWORD *)(v2 + 16) = ChallengeComp::notifyOnGuestExit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "notifyOnGuestExit",
      946);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v23, (const char (*)[15])"player is null");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    __for_range = &this->challenge_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::begin(&this->challenge_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator*(&__for_begin);
      challenge_index = std::get<0ul,unsigned int const,std::shared_ptr<Challenge>>(v17);
      challenge_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Challenge>>(v17);
      if ( !std::operator==<Challenge>(0LL, challenge_ptr) )
      {
        challenge = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_ptr);
        if ( *(char *)(((unsigned __int64)&challenge->finished >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&challenge->finished);
        if ( !challenge->finished )
        {
          v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          *(_DWORD *)(v2 + 48) = Player::getUid(v5);
          if ( !std::unordered_set<unsigned int>::empty(&challenge->uid_set)
            && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                  &challenge->uid_set,
                  (const unsigned int *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/challenge_comp.cpp",
              "notifyOnGuestExit",
              966);
            if ( *(_BYTE *)(((unsigned __int64)challenge_index >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)challenge_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_index >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(challenge_index);
            }
            common::milog::MiLogStream::operator()(
              &v22,
              "guest %u not in challenge %u uid_set.",
              *(unsigned int *)(v2 + 48),
              *challenge_index);
            common::milog::MiLogStream::~MiLogStream(&v22);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&challenge->start_time);
            }
            if ( challenge->start_time )
            {
              std::shared_ptr<Player>::shared_ptr(&v21, p_player_ptr);
              ChallengeComp::delGuestChallengeAbilityGroup(this, challenge, &v21);
              std::shared_ptr<Player>::~shared_ptr(&v21);
              common::tools::perf::make_shared<proto::DungeonChallengeFinishNotify>();
              v7 = std::__shared_ptr_access<proto::DungeonChallengeFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonChallengeFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                         + 0x7FFF8000) )
              {
                __asan_report_load4(&challenge->challenge_index);
              }
              proto::DungeonChallengeFinishNotify::set_challenge_index(v7, challenge->challenge_index);
              v8 = std::__shared_ptr_access<proto::DungeonChallengeFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonChallengeFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              proto::DungeonChallengeFinishNotify::set_is_success(v8, 0);
              common::milog::MiLogStream::create(
                &v22,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/dungeon/challenge_comp.cpp",
                "notifyOnGuestExit",
                982);
              v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                     &v22,
                     (const char (*)[37])"[challenge] challenge_finish_notify:");
              v10 = std::__shared_ptr_access<proto::DungeonChallengeFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonChallengeFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v23, v10);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)&v23);
              std::string::~string(&v23);
              common::milog::MiLogStream::~MiLogStream(&v22);
              v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
              std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonChallengeFinishNotify>((const std::shared_ptr<proto::DungeonChallengeFinishNotify> *)&v21);
              Player::sendMessage(v11, (common::minet::ConstMessagePtr *)&v21, 0LL);
              std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v21);
              v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
              SceneComp = Player::getSceneComp(v12);
              PlayerSceneComp::onChallengeEnd(SceneComp, challenge);
              std::shared_ptr<proto::DungeonChallengeFinishNotify>::~shared_ptr((std::shared_ptr<proto::DungeonChallengeFinishNotify> *const)(v2 + 64));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/dungeon/challenge_comp.cpp",
                "notifyOnGuestExit",
                972);
              if ( *(_BYTE *)(((unsigned __int64)challenge_index >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)challenge_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_index >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(challenge_index);
              }
              common::milog::MiLogStream::operator()(&v23, "challenge @ index[%u] NOT started.", *challenge_index);
              common::milog::MiLogStream::~MiLogStream(&v23);
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator++(&__for_begin);
    }
  }
  if ( v24 == (char *)v2 )
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

// Line 990: range 0000000014F10CFE-0000000014F10D80
void __cdecl ChallengeComp::challengeRecordBinToClient(
        proto::ChallengeRecord *proto,
        const proto::ChallengeRecordBin *bin)
{
  google::protobuf::uint32 v2; // edx
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  google::protobuf::uint32 v5; // edx

  v2 = proto::ChallengeRecordBin::challenge_index(bin);
  proto::ChallengeRecord::set_challenge_index(proto, v2);
  v3 = proto::ChallengeRecordBin::challenge_id(bin);
  proto::ChallengeRecord::set_challenge_id(proto, v3);
  v4 = proto::ChallengeRecordBin::challenge_record_type(bin);
  proto::ChallengeRecord::set_challenge_record_type(proto, v4);
  v5 = proto::ChallengeRecordBin::best_value(bin);
  proto::ChallengeRecord::set_best_value(proto, v5);
};

// Line 999: range 0000000014F10D82-0000000014F111EA
void __fastcall ChallengeComp::notifyChallengeRecords(
        ChallengeComp *const this,
        Player *player,
        uint32_t challenge_index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  uint32_t GroupId; // eax
  std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::map<unsigned int,proto::ChallengeRecordBin>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<unsigned int,proto::ChallengeRecordBin>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const proto::ChallengeRecordBin *challenge_record_bin_0; // [rsp+38h] [rbp-118h]
  proto::ChallengeRecord *proto_challenge_record_0; // [rsp+40h] [rbp-110h]
  std::map<unsigned int,proto::ChallengeRecordBin> *__for_range; // [rsp+48h] [rbp-108h]
  const std::pair<unsigned int const,proto::ChallengeRecordBin> *v21; // [rsp+50h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::ChallengeRecordBin> >::type *_; // [rsp+58h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::ChallengeRecordBin> >::type *challenge_record_bin; // [rsp+60h] [rbp-F0h]
  proto::ChallengeRecord *proto_challenge_record; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<proto::ChallengeRecordNotify> __r; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-D0h] BYREF
  std::string val; // [rsp+A0h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+C0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 challenge_index:998 64 16 32 challenge_record_notify_ptr:1010";
  *(_QWORD *)(v3 + 16) = ChallengeComp::notifyChallengeRecords;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = challenge_index;
  if ( !std::map<unsigned int,proto::ChallengeRecordBin>::empty(&this->challenge_record_map_)
    && (!*(_DWORD *)(v3 + 48)
     || common::tools::MiscUtils::isContains<std::map<unsigned int,proto::ChallengeRecordBin>,unsigned int>(
          &this->challenge_record_map_,
          (const unsigned int *)(v3 + 48))) )
  {
    common::tools::perf::make_shared<proto::ChallengeRecordNotify>();
    v7 = std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    proto::ChallengeRecordNotify::set_group_id(v7, GroupId);
    if ( *(_DWORD *)(v3 + 48) )
    {
      challenge_record_bin_0 = std::map<unsigned int,proto::ChallengeRecordBin>::operator[](
                                 &this->challenge_record_map_,
                                 (const std::map<unsigned int,proto::ChallengeRecordBin>::key_type *)(v3 + 48));
      v10 = std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      proto_challenge_record_0 = proto::ChallengeRecordNotify::add_challenge_record_list(v10);
      ChallengeComp::challengeRecordBinToClient(proto_challenge_record_0, challenge_record_bin_0);
    }
    else
    {
      __for_range = &this->challenge_record_map_;
      __for_begin._M_node = std::map<unsigned int,proto::ChallengeRecordBin>::begin(&this->challenge_record_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,proto::ChallengeRecordBin>::end(&this->challenge_record_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin>>::operator*(&__for_begin);
        _ = std::get<0ul,unsigned int const,proto::ChallengeRecordBin>(v21);
        challenge_record_bin = (std::tuple_element<1,const std::pair<unsigned int const,proto::ChallengeRecordBin> >::type *)std::get<1ul,unsigned int const,proto::ChallengeRecordBin>(v21);
        v9 = std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        proto_challenge_record = proto::ChallengeRecordNotify::add_challenge_record_list(v9);
        ChallengeComp::challengeRecordBinToClient(proto_challenge_record, challenge_record_bin);
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin>>::operator++(&__for_begin);
      }
    }
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "notifyChallengeRecords",
      1027);
    v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v26,
            (const char (*)[30])"proto::ChallengeRecordNotify:");
    v12 = std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ChallengeRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, v12);
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
    operator<<(v14, player);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::ChallengeRecordNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::ChallengeRecordNotify>::~shared_ptr((std::shared_ptr<proto::ChallengeRecordNotify> *const)(v3 + 64));
  }
  if ( v28 == (char *)v3 )
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

// Line 1033: range 0000000014F111EC-0000000014F11347
uint32_t __fastcall ChallengeComp::getRecordBestValue(const ChallengeComp *const this, uint32_t index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin> >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 index:1032 64 8 9 iter:1034";
  *(_QWORD *)(v2 + 16) = ChallengeComp::getRecordBestValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = index;
  *(std::map<unsigned int,proto::ChallengeRecordBin>::const_iterator *)(v2 + 64) = std::map<unsigned int,proto::ChallengeRecordBin>::find(
                                                                                     &this->challenge_record_map_,
                                                                                     (const std::map<unsigned int,proto::ChallengeRecordBin>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,proto::ChallengeRecordBin>::end(&this->challenge_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ChallengeRecordBin> > *const)(v2 + 64));
    result = proto::ChallengeRecordBin::best_value(&v6->second);
  }
  if ( v8 == (char *)v2 )
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

// Line 1044: range 0000000014F11348-0000000014F1144E
bool __cdecl ChallengeComp::checkAndGetChallengeLeftTime(
        const ChallengeComp *const this,
        const Challenge *challenge,
        uint32_t *left_time)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  std::vector<std::shared_ptr<ChallengeCondition>>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+30h] [rbp-10h]
  const ChallengeConditionPtr *challenge_condition_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &challenge->condition_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challenge->condition_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(&challenge->condition_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>(
            &__for_begin,
            &__for_end) )
  {
    challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
    if ( !std::operator==<ChallengeCondition>(0LL, challenge_condition_ptr) )
    {
      v3 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(v3);
      v4 = *(_QWORD *)v3 + 64LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(*(_QWORD *)v3 + 64LL);
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, uint32_t *))v4)(v3, left_time) )
        return 1;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1061: range 0000000014F11518-0000000014F1159B
void __cdecl ChallengeComp::onMonsterDie(ChallengeComp *const this, ChangeHpContext *context, Monster *monster)
{
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onMonsterDie(ChangeHpContext &,Monster &)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onMonsterDie::<lambda(ChallengeCondition&)>)__PAIR128__(
                                                                  (unsigned __int64)monster,
                                                                  (unsigned __int64)context));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
};

// Line 1062: range 0000000014F11450-0000000014F11517
ForeachPolicy __cdecl ChallengeComp::onMonsterDie(ChangeHpContext &,Monster &)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onMonsterDie::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, ChangeHpContext *, Monster *); // r8
  Monster *monster; // rdx

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 9);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 9);
  v3 = *(void (__fastcall **)(ChallengeCondition *, ChangeHpContext *, Monster *))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__monster >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__monster);
  monster = __closure->__monster;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(challenge_condition, __closure->__context, monster);
  return 0;
};

// Line 1071: range 0000000014F11B34-0000000014F121C4
void __cdecl ChallengeComp::onTimer(ChallengeComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonScene *v5; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v6; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char v8; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v9; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t challenge_index; // [rsp+34h] [rbp-15Ch]
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *__for_range; // [rsp+40h] [rbp-150h]
  std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> *__in; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *challenge_pair; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *left_time; // [rsp+58h] [rbp-138h]
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+60h] [rbp-130h] BYREF
  char v20[272]; // [rsp+80h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 8 9 iter:1110 80 16 22 dungeon_scene_ptr:1100 112 16 18 challenge_ptr:1112 144 48 28 challe"
                        "nge_left_time_map:1072";
  *(_QWORD *)(v2 + 16) = ChallengeComp::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map((std::map<std::pair<unsigned int,unsigned int>,unsigned int> *const)(v2 + 144));
  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onTimer(unsigned long)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onTimer::<lambda(ChallengeCondition&)>)__PAIR128__(v2 + 144, now_ms));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, CHILD);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onTimer(unsigned long)::{lambda(ChallengeCondition &)#2},void,void>(
    &func,
    (ChallengeComp::onTimer::<lambda(ChallengeCondition&)>)__PAIR128__(v2 + 144, now_ms));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, FATHER_OR_NORMAL);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getScene((const Group *const)(v2 + 112));
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 80));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 80), 0LL) )
  {
    __for_range = (std::map<std::pair<unsigned int,unsigned int>,unsigned int> *)(v2 + 144);
    *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::iterator *)(v2 + 48) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::begin((std::map<std::pair<unsigned int,unsigned int>,unsigned int> *const)(v2 + 144));
    __for_end._M_node = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v2 + 48),
              &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > *const)(v2 + 48));
      challenge_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,unsigned int>(__in);
      left_time = std::get<1ul,std::pair<unsigned int,unsigned int> const,unsigned int>(__in);
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)left_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(left_time);
      }
      DungeonScene::setChallengeLeftTime(v5, challenge_pair, *left_time);
      std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > *const)(v2 + 48));
    }
  }
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v2 + 48) = std::map<unsigned int,std::shared_ptr<Challenge>>::begin(&this->challenge_map_);
  while ( 1 )
  {
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v2 + 48),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__for_end) )
      break;
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v2 + 48));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 112), &v6->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 112)) )
      goto LABEL_18;
    v7 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    if ( *(char *)(((unsigned __int64)&v7->finished >> 3) + 0x7FFF8000) < 0 )
      v7 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v7->finished);
    if ( v7->finished )
LABEL_18:
      v8 = 1;
    else
      v8 = 0;
    if ( v8 )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v9);
      }
      challenge_index = v9->first;
      if ( std::operator!=<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 112)) )
      {
        v10 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&v10->challenge_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->challenge_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v10->challenge_id);
        }
        ChallengeComp::delFinishedChallengeInScene(this, v10->challenge_id, challenge_index);
      }
      *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v2 + 48) = std::map<unsigned int,std::shared_ptr<Challenge>>::erase[abi:cxx11](
                                                                                    &this->challenge_map_,
                                                                                    *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v2 + 48));
    }
    else
    {
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v2 + 48));
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 112));
  }
  if ( std::map<unsigned int,std::shared_ptr<Challenge>>::empty(&this->challenge_map_)
    && std::operator!=<SceneTimer>(0LL, &this->challenge_timer_ptr_) )
  {
    v12 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->challenge_timer_ptr_);
    common::tools::MiTimer::cancel(v12);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 80));
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map((std::map<std::pair<unsigned int,unsigned int>,unsigned int> *const)(v2 + 144));
  if ( v20 == (char *)v2 )
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
};

// Line 1074: range 0000000014F1159C-0000000014F11867
ForeachPolicy __cdecl ChallengeComp::onTimer(unsigned long)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onTimer::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(ChallengeCondition *, uint64_t); // rcx
  unsigned __int64 v7; // rax
  int v8; // r15d
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *challenge_left_time_map; // r14
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  ForeachPolicy result; // eax
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type __k; // [rsp+28h] [rbp-98h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 left_time:1077 48 4 10 index:1080 64 4 13 group_id:1081";
  *(_QWORD *)(v2 + 16) = ChallengeComp::onTimer(unsigned long)::{lambda(ChallengeCondition &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v5 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 10);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 10);
  v6 = *(void (__fastcall **)(ChallengeCondition *, uint64_t))v5;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v6(challenge_condition, __closure->__now_ms);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v7 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 8);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 8);
  if ( (*(unsigned __int8 (__fastcall **)(ChallengeCondition *, unsigned __int64))v7)(challenge_condition, v2 + 32) )
  {
    *(_DWORD *)(v2 + 48) = ChallengeCondition::getChallengeIndex(challenge_condition);
    *(_DWORD *)(v2 + 64) = ChallengeCondition::getGroupId(challenge_condition);
    v8 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__challenge_left_time_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__challenge_left_time_map);
    challenge_left_time_map = __closure->__challenge_left_time_map;
    __k = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v2 + 64), (unsigned int *)(v2 + 48));
    v10 = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::operator[](challenge_left_time_map, &__k);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    *v11 = v8;
  }
  result = FOREACH_CONTINUE;
  if ( v14 == (char *)v2 )
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

// Line 1087: range 0000000014F11868-0000000014F11B33
ForeachPolicy __cdecl ChallengeComp::onTimer(unsigned long)::{lambda(ChallengeCondition &)#2}::operator()(
        const ChallengeComp::onTimer::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(ChallengeCondition *, uint64_t); // rcx
  unsigned __int64 v7; // rax
  int v8; // r15d
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *challenge_left_time_map; // r14
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  ForeachPolicy result; // eax
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type __k; // [rsp+28h] [rbp-98h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 left_time:1090 48 4 10 index:1093 64 4 13 group_id:1094";
  *(_QWORD *)(v2 + 16) = ChallengeComp::onTimer(unsigned long)::{lambda(ChallengeCondition &)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v5 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 10);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 10);
  v6 = *(void (__fastcall **)(ChallengeCondition *, uint64_t))v5;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v6(challenge_condition, __closure->__now_ms);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v7 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 8);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 8);
  if ( (*(unsigned __int8 (__fastcall **)(ChallengeCondition *, unsigned __int64))v7)(challenge_condition, v2 + 32) )
  {
    *(_DWORD *)(v2 + 48) = ChallengeCondition::getChallengeIndex(challenge_condition);
    *(_DWORD *)(v2 + 64) = ChallengeCondition::getGroupId(challenge_condition);
    v8 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__challenge_left_time_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__challenge_left_time_map);
    challenge_left_time_map = __closure->__challenge_left_time_map;
    __k = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v2 + 64), (unsigned int *)(v2 + 48));
    v10 = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::operator[](challenge_left_time_map, &__k);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    *v11 = v8;
  }
  result = FOREACH_CONTINUE;
  if ( v14 == (char *)v2 )
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

// Line 1137: range 0000000014F1228E-0000000014F12311
void __cdecl ChallengeComp::onAvatarDie(ChallengeComp *const this, ChangeHpContext *context, Avatar *avatar)
{
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onAvatarDie(ChangeHpContext &,Avatar &)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onAvatarDie::<lambda(ChallengeCondition&)>)__PAIR128__(
                                                                 (unsigned __int64)avatar,
                                                                 (unsigned __int64)context));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
};

// Line 1138: range 0000000014F121C6-0000000014F1228D
ForeachPolicy __cdecl ChallengeComp::onAvatarDie(ChangeHpContext &,Avatar &)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onAvatarDie::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, ChangeHpContext *, Avatar *); // r8
  Avatar *avatar; // rdx

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 11);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 11);
  v3 = *(void (__fastcall **)(ChallengeCondition *, ChangeHpContext *, Avatar *))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__avatar);
  avatar = __closure->__avatar;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(challenge_condition, __closure->__context, avatar);
  return 0;
};

// Line 1147: range 0000000014F12382-0000000014F123E7
void __cdecl ChallengeComp::onAvatarDown(ChallengeComp *const this, Avatar *avatar)
{
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onAvatarDown(Avatar &)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onAvatarDown::<lambda(ChallengeCondition&)>)avatar);
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
};

// Line 1148: range 0000000014F12312-0000000014F12380
ForeachPolicy __cdecl ChallengeComp::onAvatarDown(Avatar &)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onAvatarDown::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 12);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 12);
  (*(void (__fastcall **)(ChallengeCondition *))v2)(challenge_condition);
  return 0;
};

// Line 1157: range 0000000014F12458-0000000014F124BD
void __cdecl ChallengeComp::onAvatarBeaten(ChallengeComp *const this, Avatar *avatar)
{
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onAvatarBeaten(Avatar &)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onAvatarBeaten::<lambda(ChallengeCondition&)>)avatar);
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
};

// Line 1158: range 0000000014F123E8-0000000014F12456
ForeachPolicy __cdecl ChallengeComp::onAvatarBeaten(Avatar &)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onAvatarBeaten::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 13);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 13);
  (*(void (__fastcall **)(ChallengeCondition *))v2)(challenge_condition);
  return 0;
};

// Line 1167: range 0000000014F1252E-0000000014F12593
void __cdecl ChallengeComp::onAvatarFrozen(ChallengeComp *const this, Avatar *avatar)
{
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onAvatarFrozen(Avatar &)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onAvatarFrozen::<lambda(ChallengeCondition&)>)avatar);
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
};

// Line 1168: range 0000000014F124BE-0000000014F1252C
ForeachPolicy __cdecl ChallengeComp::onAvatarFrozen(Avatar &)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onAvatarFrozen::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 14);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 14);
  (*(void (__fastcall **)(ChallengeCondition *))v2)(challenge_condition);
  return 0;
};

// Line 1177: range 0000000014F1265C-0000000014F126DF
void __cdecl ChallengeComp::onGadgetHpPercentChange(
        ChallengeComp *const this,
        Gadget *gadget,
        const ChangeHpContext *change_hp_context)
{
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onGadgetHpPercentChange(Gadget &,ChangeHpContext const&)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onGadgetHpPercentChange::<lambda(ChallengeCondition&)>)__PAIR128__(
                                                                             (unsigned __int64)change_hp_context,
                                                                             (unsigned __int64)gadget));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
};

// Line 1178: range 0000000014F12594-0000000014F1265B
ForeachPolicy __cdecl ChallengeComp::onGadgetHpPercentChange(Gadget &,ChangeHpContext const&)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onGadgetHpPercentChange::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, Gadget *, const ChangeHpContext *); // r8
  const ChangeHpContext *change_hp_context; // rdx

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 15);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 15);
  v3 = *(void (__fastcall **)(ChallengeCondition *, Gadget *, const ChangeHpContext *))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__change_hp_context >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__change_hp_context);
  change_hp_context = __closure->__change_hp_context;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(challenge_condition, __closure->__gadget, change_hp_context);
  return 0;
};

// Line 1187: range 0000000014F127AA-0000000014F1282D
void __cdecl ChallengeComp::onTriggerFired(
        ChallengeComp *const this,
        const std::vector<data::EventType> *trigger_event_vec,
        const std::string *trigger_source)
{
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onTriggerFired(std::vector<data::EventType> const&,std::string const&)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onTriggerFired::<lambda(ChallengeCondition&)>)__PAIR128__(
                                                                    (unsigned __int64)trigger_source,
                                                                    (unsigned __int64)trigger_event_vec));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
};

// Line 1188: range 0000000014F126E0-0000000014F127A9
ForeachPolicy __cdecl ChallengeComp::onTriggerFired(std::vector<data::EventType> const&,std::string const&)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onTriggerFired::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, const std::vector<data::EventType> *, const std::string *); // r8
  const std::string *trigger_source; // rdx

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 17);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 17);
  v3 = *(void (__fastcall **)(ChallengeCondition *, const std::vector<data::EventType> *, const std::string *))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__trigger_source >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__trigger_source);
  trigger_source = __closure->__trigger_source;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(challenge_condition, __closure->__trigger_event_vec, trigger_source);
  return 0;
};

// Line 1197: range 0000000014F12924-0000000014F129B9
void __cdecl ChallengeComp::onCreatureHurt(
        ChallengeComp *const this,
        Creature *attacker,
        Creature *defenser,
        HurtContext *context)
{
  ChallengeComp::onCreatureHurt::<lambda(ChallengeCondition&)> v4; // [rsp-18h] [rbp-90h]
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+48h] [rbp-30h] BYREF

  v4.__context = context;
  v4.__defenser = defenser;
  v4.__attacker = attacker;
  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onCreatureHurt(Creature &,Creature &,HurtContext &)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    v4);
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
};

// Line 1198: range 0000000014F1282E-0000000014F12922
ForeachPolicy __cdecl ChallengeComp::onCreatureHurt(Creature &,Creature &,HurtContext &)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onCreatureHurt::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, Creature *, Creature *, HurtContext *); // r8
  HurtContext *context; // rcx
  Creature *defenser; // rdx

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 21);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 21);
  v3 = *(void (__fastcall **)(ChallengeCondition *, Creature *, Creature *, HurtContext *))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__context >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__context);
  context = __closure->__context;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__defenser >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__defenser);
  defenser = __closure->__defenser;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3(challenge_condition, __closure->__attacker, defenser, context);
  return 0;
};

// Line 1207: range 0000000014F12B08-0000000014F12C5B
void __fastcall ChallengeComp::onShieldAbsorbDamage(
        ChallengeComp *const this,
        CreaturePtr *p_actor_ptr,
        float delta_damage)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-90h] BYREF
  char v7[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 delta_damage:1206";
  *(_QWORD *)(v3 + 16) = ChallengeComp::onShieldAbsorbDamage;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)(v3 + 32) = delta_damage;
  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onShieldAbsorbDamage(std::shared_ptr<Creature>,float)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onShieldAbsorbDamage::<lambda(ChallengeCondition&)>)__PAIR128__(
                                                                          v3 + 32,
                                                                          (unsigned __int64)p_actor_ptr));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1208: range 0000000014F129BA-0000000014F12B07
ForeachPolicy __cdecl ChallengeComp::onShieldAbsorbDamage(std::shared_ptr<Creature>,float)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onShieldAbsorbDamage::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, std::shared_ptr<Creature> *, double); // r12
  float *delta_damage; // rdx
  unsigned int v5; // ebx
  std::shared_ptr<Creature> v7; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 22);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 22);
  v3 = *(void (__fastcall **)(ChallengeCondition *, std::shared_ptr<Creature> *, double))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__delta_damage >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__delta_damage);
  delta_damage = __closure->__delta_damage;
  if ( *(_BYTE *)(((unsigned __int64)delta_damage >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)delta_damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__delta_damage);
  }
  v5 = *(_DWORD *)delta_damage;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::shared_ptr<Creature>::shared_ptr(&v7, __closure->__actor_ptr);
  v3(challenge_condition, &v7, *(double *)_mm_cvtsi32_si128(v5).m128i_i64);
  std::shared_ptr<Creature>::~shared_ptr(&v7);
  return 0;
};

// Line 1217: range 0000000014F12DA8-0000000014F12EF5
void __fastcall ChallengeComp::onTriggerElementReaction(
        ChallengeComp *const this,
        CreaturePtr *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+20h] [rbp-90h] BYREF
  char v8[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 18 reaction_type:1216";
  *(_QWORD *)(v3 + 16) = ChallengeComp::onTriggerElementReaction;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = reaction_type;
  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onTriggerElementReaction(std::shared_ptr<Creature>,data::ElementReactionType)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    (ChallengeComp::onTriggerElementReaction::<lambda(ChallengeCondition&)>)__PAIR128__(
                                                                              v3 + 32,
                                                                              (unsigned __int64)p_attacker_ptr));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1218: range 0000000014F12C5C-0000000014F12DA7
ForeachPolicy __cdecl ChallengeComp::onTriggerElementReaction(std::shared_ptr<Creature>,data::ElementReactionType)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onTriggerElementReaction::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, std::shared_ptr<Creature> *, _QWORD); // r12
  data::ElementReactionType *reaction_type; // rdx
  unsigned int v5; // ebx
  std::shared_ptr<Creature> v7; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 23);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 23);
  v3 = *(void (__fastcall **)(ChallengeCondition *, std::shared_ptr<Creature> *, _QWORD))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__reaction_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__reaction_type);
  reaction_type = __closure->__reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)reaction_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)reaction_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reaction_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__reaction_type);
  }
  v5 = *reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::shared_ptr<Creature>::shared_ptr(&v7, __closure->__attacker_ptr);
  v3(challenge_condition, &v7, v5);
  std::shared_ptr<Creature>::~shared_ptr(&v7);
  return 0;
};

// Line 1227: range 0000000014F12FA8-0000000014F13605
__int64 __fastcall ChallengeComp::addChallengeProgress(
        ChallengeComp *const this,
        uint32_t challenge_index,
        ChallengeComp::addChallengeProgress::<lambda(ChallengeCondition&)> count)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t GroupId; // eax
  unsigned int v7; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v8; // rax
  uint32_t v9; // eax
  uint32_t v10; // eax
  uint32_t v11; // eax
  __int64 result; // rax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-105h] BYREF
  _DWORD __l[5]; // [rsp+2Ch] [rbp-104h] BYREF
  std::vector<unsigned int> p_index_vec; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 20 challenge_index:1226 64 8 9 iter:1228 96 16 18 challenge_ptr:1234";
  *(_QWORD *)(v3 + 16) = ChallengeComp::addChallengeProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = challenge_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v3 + 48));
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)&__l[1] = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__l[1]) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "addChallengeProgress",
      1231);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    common::milog::MiLogStream::operator()(
      &v17,
      "challenge @index[%u] not exist. group[%u]",
      *(unsigned int *)(v3 + 48),
      GroupId);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96), &v8->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "addChallengeProgress",
        1237);
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      v9 = Group::getGroupId(this->group_);
      common::milog::MiLogStream::operator()(
        &v17,
        "challenge @index[%u] nullptr. group[%u]",
        *(unsigned int *)(v3 + 48),
        v9);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = -1;
    }
    else
    {
      *(_QWORD *)&__l[3] = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(char *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 40LL) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(*(_QWORD *)&__l[3] + 40LL);
      if ( *(_BYTE *)(*(_QWORD *)&__l[3] + 40LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/challenge_comp.cpp",
          "addChallengeProgress",
          1243);
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        v10 = Group::getGroupId(this->group_);
        common::milog::MiLogStream::operator()(
          &v17,
          "challenge @index[%u] finished. group[%u]",
          *(unsigned int *)(v3 + 48),
          v10);
        common::milog::MiLogStream::~MiLogStream(&v17);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 184LL) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 184LL) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(*(_QWORD *)&__l[3] + 184LL);
        }
        if ( *(_DWORD *)(*(_QWORD *)&__l[3] + 184LL) )
        {
          std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::addChallengeProgress(unsigned int,unsigned int)::{lambda(ChallengeCondition &)#1},void,void>(
            (std::function<ForeachPolicy(ChallengeCondition&)> *const)&v17,
            count);
          __l[0] = *(_DWORD *)(v3 + 48);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            &p_index_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
            &__a);
          ChallengeComp::foreachUnfinishedChallengeCondition(
            this,
            &p_index_vec,
            (const std::function<ForeachPolicy(ChallengeCondition&)> *)&v17,
            ALL_0);
          std::vector<unsigned int>::~vector(&p_index_vec);
          std::allocator<unsigned int>::~allocator(&__a);
          std::function<ForeachPolicy ()(ChallengeCondition &)>::~function((std::function<ForeachPolicy(ChallengeCondition&)> *const)&v17);
          v7 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "addChallengeProgress",
            1248);
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          v11 = Group::getGroupId(this->group_);
          common::milog::MiLogStream::operator()(
            &v17,
            "challenge @index[%u] NOT start. group[%u]",
            *(unsigned int *)(v3 + 48),
            v11);
          common::milog::MiLogStream::~MiLogStream(&v17);
          v7 = -1;
        }
      }
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96));
  }
  result = v7;
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
  return result;
};

// Line 1251: range 0000000014F12EF6-0000000014F12FA6
ForeachPolicy __cdecl ChallengeComp::addChallengeProgress(unsigned int,unsigned int)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::addChallengeProgress::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, _QWORD); // rcx

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 24);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 24);
  v3 = *(void (__fastcall **)(ChallengeCondition *, _QWORD))v2;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  v3(challenge_condition, __closure->__count);
  return 0;
};

// Line 1261: range 0000000014F13606-0000000014F141EB
__int64 __fastcall ChallengeComp::createFatherChallenge(
        ChallengeComp *const this,
        const ScriptContext *script_context,
        uint32_t challenge_id,
        uint32_t father_index,
        uint32_t duration,
        uint32_t succ_points,
        uint32_t fail_points,
        bool is_fail_on_wipe)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  unsigned int v13; // r14d
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  unsigned int *p_challenge_type; // r8
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  Challenge *v40; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  Challenge *v45; // rax
  Player *v46; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::shared_ptr<Challenge> *v49; // r8
  __int64 result; // rax
  unsigned int *v51; // [rsp+0h] [rbp-160h]
  unsigned int *v52; // [rsp+8h] [rbp-158h]
  bool is_fail_on_wipea; // [rsp+Ch] [rbp-154h]
  const data::ChallengeType *v54; // [rsp+10h] [rbp-150h]
  unsigned int *v55; // [rsp+18h] [rbp-148h]
  unsigned int val; // [rsp+3Ch] [rbp-124h] BYREF
  char *v57; // [rsp+40h] [rbp-120h] BYREF
  const data::DungeonChallengeConfig *dungeon_challenge_config_ptr; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v59; // [rsp+50h] [rbp-110h] BYREF
  char v60[240]; // [rsp+70h] [rbp-F0h] BYREF

  v55 = (unsigned int *)__PAIR64__(challenge_id, father_index);
  v54 = (const data::ChallengeType *)__PAIR64__(duration, succ_points);
  BYTE4(v52) = is_fail_on_wipe;
  v8 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(192LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "7 48 4 17 challenge_id:1260 64 4 17 father_index:1260 80 4 13 duration:1260 96 4 16 succ_points:"
                        "1260 112 4 16 fail_points:1260 128 16 15 player_ptr:1262 160 16 18 challenge_ptr:1298";
  *(_QWORD *)(v8 + 16) = ChallengeComp::createFatherChallenge;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556943;
  v10[536862722] = -234556924;
  v10[536862723] = -234556924;
  v10[536862724] = -219021312;
  v10[536862725] = -202178560;
  *(_DWORD *)(v8 + 48) = HIDWORD(v55);
  *(_DWORD *)(v8 + 64) = (_DWORD)v55;
  *(_DWORD *)(v8 + 80) = HIDWORD(v54);
  *(_DWORD *)(v8 + 96) = (_DWORD)v54;
  *(_DWORD *)(v8 + 112) = fail_points;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getOwnerPlayer((const Group *const)(v8 + 128));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v8 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "createFatherChallenge",
      1265);
    v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v59, (const char (*)[10])"group_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    val = Group::getGroupId(this->group_);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v12, (const char (*)[21])" getOwnerPlayer fail");
    common::milog::MiLogStream::~MiLogStream(&v59);
    v13 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "createFatherChallenge",
      1270);
    v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v59,
            (const char (*)[26])"[challenge] challenge_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v8 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" father_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v8 + 64));
    common::milog::MiLogStream::~MiLogStream(&v59);
    if ( std::operator==<SceneTimer>(0LL, &this->challenge_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "createFatherChallenge",
        1273);
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v59, (const char (*)[10])"group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" challenge_id:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v8 + 48));
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v20,
        (const char (*)[29])" challenge_timer_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v59);
      v13 = -1;
    }
    else if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<Challenge>>,unsigned int>(
                &this->challenge_map_,
                (const unsigned int *)(v8 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "createFatherChallenge",
        1280);
      v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v59, (const char (*)[10])"group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" father_index:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v8 + 64));
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])" already exist.");
      common::milog::MiLogStream::~MiLogStream(&v59);
      v13 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v8 + 160));
      v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 160));
      dungeon_challenge_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(
                                       &v25->design_config.txt_config_mgr.dungeon_config_mgr,
                                       *(_DWORD *)(v8 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v8 + 160));
      if ( dungeon_challenge_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->challenge_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->challenge_type >> 3)
                                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_challenge_config_ptr->challenge_type);
        }
        if ( dungeon_challenge_config_ptr->challenge_type == CHALLENGE_FATHER_SUCC_IN_TIME )
        {
          p_challenge_type = (unsigned int *)&dungeon_challenge_config_ptr->challenge_type;
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          common::tools::perf::make_shared<Challenge,Group &,unsigned int &,unsigned int &,data::ChallengeType const&,unsigned int &>(
            (Group *)(v8 + 160),
            (unsigned int *)this->group_,
            (unsigned int *)(v8 + 64),
            (const data::ChallengeType *)(v8 + 48),
            p_challenge_type,
            (Group *)(v8 + 64),
            v51,
            v52,
            v54,
            v55);
          if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v8 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/challenge_comp.cpp",
              "createFatherChallenge",
              1301);
            v36 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v59, (const char (*)[10])"group_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            val = Group::getGroupId(this->group_);
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
            v38 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v37,
                    (const char (*)[15])" challenge_id:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v8 + 48));
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v39,
              (const char (*)[27])" create Challenge nullptr.");
            common::milog::MiLogStream::~MiLogStream(&v59);
            v13 = -1;
          }
          else
          {
            v40 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 160));
            Challenge::init(v40);
            v41 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 160));
            google::protobuf::RepeatedField<unsigned int>::Add(
              &v41->initial_param_list,
              (const unsigned int *)(v8 + 96));
            v42 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 160));
            google::protobuf::RepeatedField<unsigned int>::Add(
              &v42->initial_param_list,
              (const unsigned int *)(v8 + 112));
            v43 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 160));
            google::protobuf::RepeatedField<unsigned int>::Add(
              &v43->initial_param_list,
              (const unsigned int *)(v8 + 80));
            v44 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 160));
            if ( *(char *)(((unsigned __int64)&v44->is_fail_on_wipe >> 3) + 0x7FFF8000) < 0 )
              v44 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store1(&v44->is_fail_on_wipe);
            v44->is_fail_on_wipe = is_fail_on_wipea;
            v45 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 160));
            ChallengeComp::fillTriggerInfo(this, v45, script_context);
            v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 128));
            BasicComp = Player::getBasicComp(v46);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v59, BasicComp);
            v48 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 160));
            std::string::operator=(&v48->trans_no, &v59);
            std::string::~string(&v59);
            std::map<unsigned int,std::shared_ptr<Challenge>>::emplace<unsigned int &,std::shared_ptr<Challenge>&>(
              &this->challenge_map_,
              (unsigned int *)(v8 + 64),
              (std::shared_ptr<Challenge> *)(v8 + 160),
              (unsigned int *)(v8 + 64),
              v49);
            v13 = 0;
          }
          std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v8 + 160));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "createFatherChallenge",
            1294);
          v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v59, (const char (*)[10])"group_id:");
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          val = Group::getGroupId(this->group_);
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
          v32 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v31,
                  (const char (*)[15])" challenge_id:");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v8 + 48));
          v34 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v33,
                  (const char (*)[26])" invalid challenge type: ");
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->challenge_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->challenge_type >> 3)
                                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&dungeon_challenge_config_ptr->challenge_type);
          }
          v57 = (char *)data::enumValToStr(dungeon_challenge_config_ptr->challenge_type);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v34, (const char *const *)&v57);
          common::milog::MiLogStream::~MiLogStream(&v59);
          v13 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "createFatherChallenge",
          1288);
        v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v59, (const char (*)[10])"group_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        val = Group::getGroupId(this->group_);
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
        v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v27, (const char (*)[15])" challenge_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v8 + 48));
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v29, (const char (*)[19])" config not found.");
        common::milog::MiLogStream::~MiLogStream(&v59);
        v13 = -1;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v8 + 128));
  result = v13;
  if ( v60 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1317: range 0000000014F141EC-0000000014F154DE
__int64 __fastcall ChallengeComp::startFatherChallenge(
        ChallengeComp *const this,
        const ScriptContext *script_context,
        uint32_t fahter_index)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t GroupId; // eax
  unsigned int *v13; // rsi
  unsigned int *v14; // rax
  unsigned int *v15; // rdx
  uint32_t *v16; // rax
  uint32_t *v17; // rdx
  int v18; // r13d
  int v19; // r13d
  uint32_t Now; // esi
  __int64 SceneTimeMs; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  SceneTimer *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  Player *v27; // rax
  __int64 result; // rax
  std::initializer_list<unsigned int> __l; // [rsp+0h] [rbp-1F0h]
  std::initializer_list<unsigned int> v30; // [rsp+10h] [rbp-1E0h]
  std::initializer_list<unsigned int> v31; // [rsp+20h] [rbp-1D0h]
  std::allocator<unsigned int> __a; // [rsp+5Bh] [rbp-195h] BYREF
  unsigned int val; // [rsp+5Ch] [rbp-194h] BYREF
  uint32_t dur; // [rsp+60h] [rbp-190h]
  int32_t ret; // [rsp+64h] [rbp-18Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+68h] [rbp-188h] BYREF
  Challenge *challenge; // [rsp+70h] [rbp-180h]
  google::protobuf::RepeatedField<unsigned int> *init_param_vec; // [rsp+78h] [rbp-178h]
  std::vector<unsigned int> v40; // [rsp+80h] [rbp-170h] BYREF
  common::milog::MiLogStream v41; // [rsp+A0h] [rbp-150h] BYREF
  char v42[304]; // [rsp+C0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 17 fahter_index:1316 64 8 9 iter:1318 96 16 18 challenge_ptr:1325 128 16 15 player_ptr:13"
                        "51 160 16 23 condition_succ_ptr:1366 192 16 23 condition_fail_ptr:1373 224 16 31 condition_fail_"
                        "on_wipe_ptr:1398";
  *(_QWORD *)(v4 + 16) = ChallengeComp::startFatherChallenge;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  *(_DWORD *)(v4 + 48) = fahter_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v4 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/challenge_comp.cpp",
      "startFatherChallenge",
      1321);
    common::milog::MiLogStream::operator()(&v41, "challenge @index[%u] NOT found", *(unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v3 = -1;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v4 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96), &v7->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/challenge_comp.cpp",
        "startFatherChallenge",
        1328);
      common::milog::MiLogStream::operator()(&v41, "challenge @index[%u] nullptr", *(unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v41);
      v3 = -1;
    }
    else
    {
      challenge = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(char *)(((unsigned __int64)&challenge->finished >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&challenge->finished);
      if ( challenge->finished )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "startFatherChallenge",
          1335);
        common::milog::MiLogStream::operator()(&v41, "challenge @index[%u] already done", *(unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v41);
        v3 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&challenge->start_time);
        }
        if ( challenge->start_time )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "startFatherChallenge",
            1341);
          common::milog::MiLogStream::operator()(
            &v41,
            "challenge @index[%u] already started.",
            *(unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v3 = -1;
        }
        else if ( std::operator==<SceneTimer>(0LL, &this->challenge_timer_ptr_) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "startFatherChallenge",
            1347);
          v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v41, (const char (*)[10])"group_id:");
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          val = Group::getGroupId(this->group_);
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
          v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v9,
                  (const char (*)[15])" challenge_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &challenge->challenge_id);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v11,
            (const char (*)[29])" challenge_timer_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v41);
          v3 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          Group::getOwnerPlayer((const Group *const)(v4 + 128));
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/challenge_comp.cpp",
              "startFatherChallenge",
              1354);
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            GroupId = Group::getGroupId(this->group_);
            common::milog::MiLogStream::operator()(&v41, "group_id %u getOwnerPlayer fail", GroupId);
            common::milog::MiLogStream::~MiLogStream(&v41);
            v3 = -1;
          }
          else
          {
            init_param_vec = &challenge->initial_param_list;
            if ( google::protobuf::RepeatedField<unsigned int>::size(&challenge->initial_param_list) > 2 )
            {
              v13 = (unsigned int *)google::protobuf::RepeatedField<unsigned int>::Get(init_param_vec, 0);
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v13);
              }
              val = *v13;
              __l._M_array = &val;
              __l._M_len = 1LL;
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(&v40, __l, &__a);
              ChallengeCondition::createChallengeCond(
                (data::ChallengeCondType)(v4 + 160),
                0xFu,
                (ChallengeComp *)1,
                (Challenge *)this,
                (const std::vector<unsigned int> *)challenge);
              std::vector<unsigned int>::~vector(&v40);
              std::allocator<unsigned int>::~allocator(&__a);
              if ( std::operator==<ChallengeCondition>((const std::shared_ptr<ChallengeCondition> *)(v4 + 160), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/dungeon/challenge_comp.cpp",
                  "startFatherChallenge",
                  1369);
                if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&challenge->challenge_id);
                }
                common::milog::MiLogStream::operator()(
                  &v41,
                  "initialize CHALLENGE_COND_CHILD_SUCC failed, challenge_id: %u",
                  challenge->challenge_id);
                common::milog::MiLogStream::~MiLogStream(&v41);
                v3 = -1;
              }
              else
              {
                v14 = (unsigned int *)google::protobuf::RepeatedField<unsigned int>::Get(init_param_vec, 1);
                v15 = v14;
                if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v14);
                }
                val = *v15;
                v30._M_array = &val;
                v30._M_len = 1LL;
                std::allocator<unsigned int>::allocator(&__a);
                std::vector<unsigned int>::vector(&v40, v30, &__a);
                ChallengeCondition::createChallengeCond(
                  (data::ChallengeCondType)(v4 + 192),
                  0x10u,
                  (ChallengeComp *)2,
                  (Challenge *)this,
                  (const std::vector<unsigned int> *)challenge);
                std::vector<unsigned int>::~vector(&v40);
                std::allocator<unsigned int>::~allocator(&__a);
                if ( std::operator==<ChallengeCondition>((const std::shared_ptr<ChallengeCondition> *)(v4 + 192), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v41,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/dungeon/challenge_comp.cpp",
                    "startFatherChallenge",
                    1376);
                  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&challenge->challenge_id);
                  }
                  common::milog::MiLogStream::operator()(
                    &v41,
                    "initialize CHALLENGE_COND_CHILD_FAIL failed, challenge_id: %u",
                    challenge->challenge_id);
                  common::milog::MiLogStream::~MiLogStream(&v41);
                  v3 = -1;
                }
                else
                {
                  std::vector<std::shared_ptr<ChallengeCondition>>::emplace_back<std::shared_ptr<ChallengeCondition>&>(
                    &challenge->condition_vec,
                    (std::shared_ptr<ChallengeCondition> *)(v4 + 160),
                    (std::shared_ptr<ChallengeCondition> *)&challenge->condition_vec);
                  std::vector<std::shared_ptr<ChallengeCondition>>::emplace_back<std::shared_ptr<ChallengeCondition>&>(
                    &challenge->condition_vec,
                    (std::shared_ptr<ChallengeCondition> *)(v4 + 192),
                    (std::shared_ptr<ChallengeCondition> *)&challenge->condition_vec);
                  v16 = (uint32_t *)google::protobuf::RepeatedField<unsigned int>::Get(init_param_vec, 2);
                  v17 = v16;
                  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v16);
                  }
                  dur = *v17;
                  if ( !dur )
                    goto LABEL_49;
                  val = dur;
                  v31._M_array = &val;
                  v31._M_len = 1LL;
                  std::allocator<unsigned int>::allocator(&__a);
                  std::vector<unsigned int>::vector(&v40, v31, &__a);
                  ChallengeCondition::createChallengeCond(
                    (data::ChallengeCondType)(v4 + 224),
                    1u,
                    (ChallengeComp *)3,
                    (Challenge *)this,
                    (const std::vector<unsigned int> *)challenge);
                  std::vector<unsigned int>::~vector(&v40);
                  std::allocator<unsigned int>::~allocator(&__a);
                  if ( std::operator==<ChallengeCondition>((const std::shared_ptr<ChallengeCondition> *)(v4 + 224), 0LL) )
                  {
                    common::milog::MiLogStream::create(
                      &v41,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/dungeon/challenge_comp.cpp",
                      "startFatherChallenge",
                      1390);
                    if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&challenge->challenge_id);
                    }
                    common::milog::MiLogStream::operator()(
                      &v41,
                      "initialize CHALLENGE_COND_IN_TIME failed, challenge_id: %u",
                      challenge->challenge_id);
                    common::milog::MiLogStream::~MiLogStream(&v41);
                    v3 = -1;
                    v18 = 0;
                  }
                  else
                  {
                    std::vector<std::shared_ptr<ChallengeCondition>>::emplace_back<std::shared_ptr<ChallengeCondition>&>(
                      &challenge->condition_vec,
                      (std::shared_ptr<ChallengeCondition> *)(v4 + 224),
                      (std::shared_ptr<ChallengeCondition> *)&challenge->condition_vec);
                    v18 = 1;
                  }
                  std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v4 + 224));
                  if ( v18 == 1 )
                  {
LABEL_49:
                    if ( *(char *)(((unsigned __int64)&challenge->is_fail_on_wipe >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_load1(&challenge->is_fail_on_wipe);
                    if ( !challenge->is_fail_on_wipe )
                      goto LABEL_77;
                    memset(&v40, 0, sizeof(v40));
                    std::vector<unsigned int>::vector(&v40);
                    ChallengeCondition::createChallengeCond(
                      (data::ChallengeCondType)(v4 + 224),
                      4u,
                      0LL,
                      (Challenge *)this,
                      (const std::vector<unsigned int> *)challenge);
                    std::vector<unsigned int>::~vector(&v40);
                    if ( std::operator==<ChallengeCondition>(
                           (const std::shared_ptr<ChallengeCondition> *)(v4 + 224),
                           0LL) )
                    {
                      common::milog::MiLogStream::create(
                        &v41,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/dungeon/challenge_comp.cpp",
                        "startFatherChallenge",
                        1401);
                      if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&challenge->challenge_id);
                      }
                      common::milog::MiLogStream::operator()(
                        &v41,
                        "initialize CHALLENGE_COND_SURVIVE failed, challenge_id: %u",
                        challenge->challenge_id);
                      common::milog::MiLogStream::~MiLogStream(&v41);
                      v3 = -1;
                      v19 = 0;
                    }
                    else
                    {
                      std::vector<std::shared_ptr<ChallengeCondition>>::emplace_back<std::shared_ptr<ChallengeCondition>&>(
                        &challenge->condition_vec,
                        (std::shared_ptr<ChallengeCondition> *)(v4 + 224),
                        (std::shared_ptr<ChallengeCondition> *)&challenge->condition_vec);
                      v19 = 1;
                    }
                    std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v4 + 224));
                    if ( v19 == 1 )
                    {
LABEL_77:
                      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->group_);
                      Group::finishAllPlayersChallengesInGroup(this->group_, *(_DWORD *)(v4 + 48));
                      Now = common::tools::TimeUtils::getNow();
                      if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(&challenge->start_time);
                      }
                      challenge->start_time = Now;
                      SceneTimeMs = ChallengeComp::getSceneTimeMs(this);
                      if ( *(_BYTE *)(((unsigned __int64)&challenge->start_scene_time_ms >> 3) + 0x7FFF8000) )
                        SceneTimeMs = __asan_report_store8(&challenge->start_scene_time_ms);
                      challenge->start_scene_time_ms = SceneTimeMs;
                      v22 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->challenge_timer_ptr_);
                      if ( !common::tools::MiTimer::isActive(v22)
                        && (v23 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->challenge_timer_ptr_),
                            (ret = SceneTimer::startMS(
                                     v23,
                                     0xC8u,
                                     1,
                                     "./src/dungeon/challenge_comp.cpp",
                                     "startFatherChallenge",
                                     1415)) != 0) )
                      {
                        common::milog::MiLogStream::create(
                          &v41,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/dungeon/challenge_comp.cpp",
                          "startFatherChallenge",
                          1418);
                        v24 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                &v41,
                                (const char (*)[49])"start challenge_timer fail, GAME_TIMER_INTERVAL:");
                        val = 200;
                        v25 = common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)&val);
                        v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v25,
                                (const char (*)[15])" fahter_index:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v26,
                          (const unsigned int *)(v4 + 48));
                        common::milog::MiLogStream::~MiLogStream(&v41);
                        v3 = -1;
                      }
                      else
                      {
                        v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                        ChallengeComp::onChallengeBegin(this, challenge, v27, 0);
                        ChallengeComp::startAllChildren(this, challenge);
                        v3 = 0;
                      }
                    }
                  }
                }
                std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v4 + 192));
              }
              std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v4 + 160));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/challenge_comp.cpp",
                "startFatherChallenge",
                1361);
              common::milog::MiLogStream::operator()(
                &v41,
                "challenge @index[%u] param list size less than 3.",
                *(unsigned int *)(v4 + 48));
              common::milog::MiLogStream::~MiLogStream(&v41);
              v3 = -1;
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
        }
      }
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96));
  }
  result = v3;
  if ( v42 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1433: range 0000000014F154E0-0000000014F1666A
__int64 __fastcall ChallengeComp::attachChildChallenge(
        ChallengeComp *const this,
        const ScriptContext *script_context,
        uint32_t father_index,
        uint32_t child_index,
        uint32_t challenge_id,
        std::vector<unsigned int> *param_vec,
        const std::vector<unsigned int> *uid_list_vec,
        uint32_t succ_points,
        uint32_t fail_points)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r12
  unsigned int v12; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v13; // rax
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  uint32_t GroupId; // eax
  uint32_t v17; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned int v19; // r15d
  unsigned int v20; // r14d
  uint32_t v21; // eax
  unsigned int v22; // r15d
  unsigned int v23; // r14d
  uint32_t v24; // eax
  unsigned int v25; // r15d
  unsigned int v26; // r14d
  uint32_t v27; // eax
  Challenge *v28; // rax
  Challenge *v29; // rax
  Challenge *v30; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::insert_iterator<std::unordered_set<unsigned int> > v34; // rax
  std::unordered_set<unsigned int> *container; // r14
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v36; // r15
  std::vector<unsigned int>::const_iterator v37; // rax
  std::insert_iterator<std::unordered_set<unsigned int> > v38; // rdx
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rdx
  uint32_t *p_fail_points; // rax
  Player *v43; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::shared_ptr<Challenge> *v46; // r8
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>> *p_child_map; // r14
  unsigned int *v48; // rcx
  std::tuple<unsigned int,data::ChallengeType,bool,bool,int> *v49; // r8
  std::unordered_set<unsigned int>::iterator v50; // rax
  std::insert_iterator<std::unordered_set<unsigned int> > v51; // rax
  std::unordered_set<unsigned int> *v52; // r14
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v53; // r15
  std::vector<unsigned int>::const_iterator v54; // rax
  std::insert_iterator<std::unordered_set<unsigned int> > v55; // rdx
  uint32_t Now; // r14d
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  uint64_t SceneTimeMs; // r14
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  common::milog::MiLogStream *v60; // rax
  Player *v61; // r14
  Challenge *v62; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  __int64 result; // rax
  unsigned int *v66; // [rsp+0h] [rbp-1A0h]
  data::ChallengeType *v67; // [rsp+0h] [rbp-1A0h]
  bool *v68; // [rsp+8h] [rbp-198h]
  data::ChallengeType *__last; // [rsp+10h] [rbp-190h]
  unsigned int __lasta; // [rsp+10h] [rbp-190h]
  unsigned int __lastb; // [rsp+10h] [rbp-190h]
  unsigned int __lastc; // [rsp+10h] [rbp-190h]
  unsigned int __lastd; // [rsp+10h] [rbp-190h]
  bool *__laste; // [rsp+10h] [rbp-190h]
  const unsigned int *__lastf; // [rsp+10h] [rbp-190h]
  std::vector<unsigned int> *param_vecb; // [rsp+18h] [rbp-188h]
  bool v81; // [rsp+42h] [rbp-15Eh] BYREF
  char __args_0[5]; // [rsp+43h] [rbp-15Dh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+48h] [rbp-158h] BYREF
  Challenge *fahter_challenge; // [rsp+50h] [rbp-150h]
  const data::DungeonChallengeConfig *dungeon_challenge_config_ptr; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v86; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v87; // [rsp+70h] [rbp-130h] BYREF
  unsigned int v88[68]; // [rsp+90h] [rbp-110h] BYREF

  v9 = (unsigned __int64)v88;
  v68 = (bool *)v88;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(224LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "8 32 4 19 challenge_type:1492 48 4 17 father_index:1431 64 4 16 child_index:1431 80 4 17 challen"
                        "ge_id:1431 96 8 16 father_iter:1435 128 16 15 father_ptr:1442 160 16 15 player_ptr:1477 192 16 1"
                        "4 child_ptr:1499";
  *(_QWORD *)(v9 + 16) = ChallengeComp::attachChildChallenge;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -234556924;
  v11[536862722] = -234556924;
  v11[536862723] = -218959360;
  v11[536862724] = -219021312;
  v11[536862725] = -219021312;
  v11[536862726] = -202178560;
  *(_DWORD *)(v9 + 48) = father_index;
  *(_DWORD *)(v9 + 64) = child_index;
  *(_DWORD *)(v9 + 80) = challenge_id;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v9 + 96) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v9 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v9 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v87,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "attachChildChallenge",
      1438);
    common::milog::MiLogStream::operator()(&v87, "father challenge @index[%u] NOT found.", *(unsigned int *)(v9 + 48));
    common::milog::MiLogStream::~MiLogStream(&v87);
    v12 = -1;
  }
  else
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v9 + 96));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v9 + 128), &v13->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v9 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v87,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "attachChildChallenge",
        1445);
      common::milog::MiLogStream::operator()(&v87, "father challenge @index[%u] nullptr.", *(unsigned int *)(v9 + 48));
      common::milog::MiLogStream::~MiLogStream(&v87);
      v12 = -1;
    }
    else
    {
      fahter_challenge = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&fahter_challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&fahter_challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&fahter_challenge->father_index);
      }
      if ( fahter_challenge->father_index == *(_DWORD *)(v9 + 48) )
      {
        if ( *(char *)(((unsigned __int64)&fahter_challenge->finished >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&fahter_challenge->finished);
        if ( fahter_challenge->finished )
        {
          common::milog::MiLogStream::create(
            &v87,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "attachChildChallenge",
            1458);
          common::milog::MiLogStream::operator()(
            &v87,
            "fahter challenge @index[%u] already finished.",
            *(unsigned int *)(v9 + 48));
          common::milog::MiLogStream::~MiLogStream(&v87);
          v12 = -1;
        }
        else if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<Challenge>>,unsigned int>(
                    &this->challenge_map_,
                    (const unsigned int *)(v9 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v87,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "attachChildChallenge",
            1465);
          common::milog::MiLogStream::operator()(&v87, "duplicate child_index[%u].", *(unsigned int *)(v9 + 64));
          common::milog::MiLogStream::~MiLogStream(&v87);
          v12 = -1;
        }
        else if ( std::operator==<SceneTimer>(0LL, &this->challenge_timer_ptr_) )
        {
          common::milog::MiLogStream::create(
            &v87,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "attachChildChallenge",
            1472);
          __lasta = *(_DWORD *)(v9 + 80);
          v14 = *(_DWORD *)(v9 + 64);
          v15 = *(_DWORD *)(v9 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          GroupId = Group::getGroupId(this->group_);
          common::milog::MiLogStream::operator()(
            &v87,
            "group_id: %u father_index: %u child_index: %u challenge_id: %u challenge_timer_ptr is null",
            GroupId,
            v15,
            v14,
            __lasta);
          common::milog::MiLogStream::~MiLogStream(&v87);
          v12 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          Group::getOwnerPlayer((const Group *const)(v9 + 160));
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v9 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v87,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/challenge_comp.cpp",
              "attachChildChallenge",
              1480);
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            v17 = Group::getGroupId(this->group_);
            common::milog::MiLogStream::operator()(&v87, "group_id %u getOwnerPlayer fail", v17);
            common::milog::MiLogStream::~MiLogStream(&v87);
            v12 = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v86);
            v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v86);
            dungeon_challenge_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(
                                             &v18->design_config.txt_config_mgr.dungeon_config_mgr,
                                             *(_DWORD *)(v9 + 80));
            std::shared_ptr<Config>::~shared_ptr(&v86);
            if ( dungeon_challenge_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->challenge_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_challenge_config_ptr->challenge_type >> 3)
                                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&dungeon_challenge_config_ptr->challenge_type);
              }
              *(_DWORD *)(v9 + 32) = dungeon_challenge_config_ptr->challenge_type;
              if ( *(_DWORD *)(v9 + 32) == 13 )
              {
                common::milog::MiLogStream::create(
                  &v87,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/dungeon/challenge_comp.cpp",
                  "attachChildChallenge",
                  1495);
                __lastc = *(_DWORD *)(v9 + 80);
                v22 = *(_DWORD *)(v9 + 64);
                v23 = *(_DWORD *)(v9 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->group_);
                v24 = Group::getGroupId(this->group_);
                common::milog::MiLogStream::operator()(
                  &v87,
                  "group_id: %u father_index: %u child_index: %u challenge_id: %u can NOT be father type.",
                  v24,
                  v23,
                  v22,
                  __lastc);
                common::milog::MiLogStream::~MiLogStream(&v87);
                v12 = -1;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->group_);
                common::tools::perf::make_shared<Challenge,Group &,unsigned int &,unsigned int &,data::ChallengeType &,unsigned int &>(
                  (Group *)(v9 + 192),
                  (unsigned int *)this->group_,
                  (unsigned int *)(v9 + 64),
                  (data::ChallengeType *)(v9 + 80),
                  (unsigned int *)(v9 + 32),
                  (Group *)(v9 + 48),
                  v66,
                  v88,
                  __last,
                  (unsigned int *)param_vec);
                if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v9 + 192)) )
                {
                  common::milog::MiLogStream::create(
                    &v87,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/dungeon/challenge_comp.cpp",
                    "attachChildChallenge",
                    1502);
                  __lastd = *(_DWORD *)(v9 + 80);
                  v25 = *(_DWORD *)(v9 + 64);
                  v26 = *(_DWORD *)(v9 + 48);
                  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->group_);
                  v27 = Group::getGroupId(this->group_);
                  common::milog::MiLogStream::operator()(
                    &v87,
                    "group_id: %u father_index: %u child_index: %u challenge_id: %u create Child nullptr.",
                    v27,
                    v26,
                    v25,
                    __lastd);
                  common::milog::MiLogStream::~MiLogStream(&v87);
                  v12 = -1;
                }
                else
                {
                  v28 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                  Challenge::init(v28);
                  v29 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                  if ( ChallengeComp::buildConditionAndParams(this, v29, param_vecb) )
                  {
                    common::milog::MiLogStream::create(
                      &v87,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/dungeon/challenge_comp.cpp",
                      "attachChildChallenge",
                      1508);
                    common::milog::MiLogStream::operator()(
                      &v87,
                      "buildConditionAndParams for challenge @index[%u] failed, challenge id[%u], fahter_index[%u].",
                      *(unsigned int *)(v9 + 64),
                      *(unsigned int *)(v9 + 80),
                      *(unsigned int *)(v9 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v87);
                    v12 = -1;
                  }
                  else
                  {
                    v30 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                    ChallengeComp::fillTriggerInfo(this, v30, script_context);
                    v31 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                    M_cur = std::unordered_set<unsigned int>::begin(&v31->uid_set)._M_cur;
                    v33 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                    v34 = std::inserter<std::unordered_set<unsigned int>,std::__detail::_Node_iterator<unsigned int,true,false>>(
                            &v33->uid_set,
                            (std::__detail::_Node_iterator<unsigned int,true,false>)M_cur);
                    container = v34.container;
                    v36 = v34.iter._M_cur;
                    __laste = (bool *)std::vector<unsigned int>::end(uid_list_vec)._M_current;
                    v37._M_current = std::vector<unsigned int>::begin(uid_list_vec)._M_current;
                    v38.container = container;
                    v38.iter._M_cur = v36;
                    std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::unordered_set<unsigned int>>>(
                      v37,
                      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__laste,
                      v38);
                    v39 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                    std::vector<unsigned int>::operator=(&v39->param_vec, param_vecb);
                    v40 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                    if ( *(_BYTE *)(((unsigned __int64)&v40->succ_points_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&v40->succ_points_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      v40 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v40->succ_points_);
                    }
                    v40->succ_points_ = succ_points;
                    v41 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                    p_fail_points = &v41->fail_points_;
                    if ( *(_BYTE *)(((unsigned __int64)p_fail_points >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_fail_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_fail_points >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_store4(p_fail_points);
                    }
                    v41->fail_points_ = fail_points;
                    v43 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 160));
                    BasicComp = Player::getBasicComp(v43);
                    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v87, BasicComp);
                    v45 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                    std::string::operator=(&v45->trans_no, &v87);
                    std::string::~string(&v87);
                    std::map<unsigned int,std::shared_ptr<Challenge>>::emplace<unsigned int &,std::shared_ptr<Challenge>&>(
                      &this->challenge_map_,
                      (unsigned int *)(v9 + 64),
                      (std::shared_ptr<Challenge> *)(v9 + 192),
                      (unsigned int *)(v9 + 64),
                      v46);
                    p_child_map = &fahter_challenge->child_map;
                    memset(__args_0, 0, sizeof(__args_0));
                    v81 = 0;
                    std::make_tuple<unsigned int &,data::ChallengeType &,bool,bool,int>(
                      (unsigned int *)&v86,
                      (data::ChallengeType *)(v9 + 80),
                      (bool *)(v9 + 32),
                      &v81,
                      (int *)__args_0,
                      (unsigned int *)&__args_0[1],
                      v67,
                      v68,
                      __laste,
                      (int *)param_vecb);
                    std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::emplace<unsigned int &,std::tuple<unsigned int,data::ChallengeType,bool,bool,int>>(
                      p_child_map,
                      (unsigned int *)(v9 + 64),
                      (std::tuple<unsigned int,data::ChallengeType,bool,bool,int> *)&v86,
                      v48,
                      v49);
                    if ( *(char *)(((unsigned __int64)&fahter_challenge->is_hide_unrelated_player_as_father_ >> 3)
                                 + 0x7FFF8000) < 0 )
                      __asan_report_load1(&fahter_challenge->is_hide_unrelated_player_as_father_);
                    if ( fahter_challenge->is_hide_unrelated_player_as_father_ )
                    {
                      v50._M_cur = std::unordered_set<unsigned int>::begin(&fahter_challenge->uid_set)._M_cur;
                      v51 = std::inserter<std::unordered_set<unsigned int>,std::__detail::_Node_iterator<unsigned int,true,false>>(
                              &fahter_challenge->uid_set,
                              v50);
                      v52 = v51.container;
                      v53 = v51.iter._M_cur;
                      __lastf = std::vector<unsigned int>::end(uid_list_vec)._M_current;
                      v54._M_current = std::vector<unsigned int>::begin(uid_list_vec)._M_current;
                      v55.container = v52;
                      v55.iter._M_cur = v53;
                      std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::unordered_set<unsigned int>>>(
                        v54,
                        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lastf,
                        v55);
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&fahter_challenge->start_time >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&fahter_challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&fahter_challenge->start_time);
                    }
                    if ( fahter_challenge->start_time )
                    {
                      Now = common::tools::TimeUtils::getNow();
                      v57 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                      if ( *(_BYTE *)(((unsigned __int64)&v57->start_time >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&v57->start_time >> 3) + 0x7FFF8000) <= 3 )
                      {
                        v57 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v57->start_time);
                      }
                      v57->start_time = Now;
                      SceneTimeMs = ChallengeComp::getSceneTimeMs(this);
                      v59 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                      if ( *(_BYTE *)(((unsigned __int64)&v59->start_scene_time_ms >> 3) + 0x7FFF8000) )
                        v59 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v59->start_scene_time_ms);
                      v59->start_scene_time_ms = SceneTimeMs;
                      common::milog::MiLogStream::create(
                        &v87,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/dungeon/challenge_comp.cpp",
                        "attachChildChallenge",
                        1529);
                      v60 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                              &v87,
                              (const char (*)[58])"[challenge] child start on attach challenge_begin_notify:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v60,
                        (const unsigned int *)(v9 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v87);
                      v61 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 160));
                      v62 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                      ChallengeComp::onChallengeBegin(this, v62, v61, 1);
                    }
                    else
                    {
                      v63 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                      google::protobuf::RepeatedField<unsigned int>::Clear(&v63->initial_param_list);
                      v64 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 192));
                      std::vector<std::shared_ptr<ChallengeCondition>>::clear(&v64->condition_vec);
                    }
                    v12 = 0;
                  }
                }
                std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v9 + 192));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v87,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/challenge_comp.cpp",
                "attachChildChallenge",
                1489);
              __lastb = *(_DWORD *)(v9 + 80);
              v19 = *(_DWORD *)(v9 + 64);
              v20 = *(_DWORD *)(v9 + 48);
              if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->group_);
              v21 = Group::getGroupId(this->group_);
              common::milog::MiLogStream::operator()(
                &v87,
                "group_id: %u father_index: %u child_index: %u challenge_id: %u config not found.",
                v21,
                v20,
                v19,
                __lastb);
              common::milog::MiLogStream::~MiLogStream(&v87);
              v12 = -1;
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v9 + 160));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v87,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "attachChildChallenge",
          1452);
        common::milog::MiLogStream::operator()(
          &v87,
          "challenge @index[%u] father_index[%u] mismatch.",
          *(unsigned int *)(v9 + 48),
          fahter_challenge->father_index);
        common::milog::MiLogStream::~MiLogStream(&v87);
        v12 = -1;
      }
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v9 + 128));
  }
  result = v12;
  if ( v68 == (bool *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1543: range 0000000014F16EDE-0000000014F1B297
int32_t __cdecl ChallengeComp::buildConditionAndParams(
        ChallengeComp *const this,
        Challenge *challenge,
        std::vector<unsigned int> *param_vec)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  std::vector<unsigned int>::size_type v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  std::initializer_list<unsigned int> __l; // [rsp+0h] [rbp-5E0h]
  std::initializer_list<unsigned int> v15; // [rsp+10h] [rbp-5D0h]
  std::initializer_list<unsigned int> v16; // [rsp+20h] [rbp-5C0h]
  std::initializer_list<unsigned int> v17; // [rsp+30h] [rbp-5B0h]
  std::initializer_list<unsigned int> v18; // [rsp+40h] [rbp-5A0h]
  std::initializer_list<unsigned int> v19; // [rsp+50h] [rbp-590h]
  std::initializer_list<unsigned int> v20; // [rsp+60h] [rbp-580h]
  std::initializer_list<unsigned int> v21; // [rsp+70h] [rbp-570h]
  std::initializer_list<unsigned int> v22; // [rsp+80h] [rbp-560h]
  std::initializer_list<unsigned int> v23; // [rsp+90h] [rbp-550h]
  std::initializer_list<unsigned int> v24; // [rsp+A0h] [rbp-540h]
  std::initializer_list<unsigned int> v25; // [rsp+B0h] [rbp-530h]
  std::initializer_list<unsigned int> v26; // [rsp+C0h] [rbp-520h]
  std::initializer_list<unsigned int> v27; // [rsp+D0h] [rbp-510h]
  std::initializer_list<unsigned int> v28; // [rsp+E0h] [rbp-500h]
  std::initializer_list<unsigned int> v29; // [rsp+F0h] [rbp-4F0h]
  std::initializer_list<unsigned int> v30; // [rsp+100h] [rbp-4E0h]
  std::initializer_list<unsigned int> v31; // [rsp+110h] [rbp-4D0h]
  std::initializer_list<unsigned int> v32; // [rsp+120h] [rbp-4C0h]
  std::initializer_list<unsigned int> v33; // [rsp+130h] [rbp-4B0h]
  std::initializer_list<unsigned int> v34; // [rsp+140h] [rbp-4A0h]
  std::initializer_list<unsigned int> v35; // [rsp+150h] [rbp-490h]
  std::initializer_list<unsigned int> v36; // [rsp+160h] [rbp-480h]
  std::initializer_list<unsigned int> v37; // [rsp+170h] [rbp-470h]
  std::initializer_list<unsigned int> v38; // [rsp+180h] [rbp-460h]
  std::initializer_list<unsigned int> v39; // [rsp+190h] [rbp-450h]
  std::initializer_list<unsigned int> v40; // [rsp+1A0h] [rbp-440h]
  std::initializer_list<unsigned int> v41; // [rsp+1B0h] [rbp-430h]
  std::initializer_list<unsigned int> v42; // [rsp+1C0h] [rbp-420h]
  std::initializer_list<unsigned int> v43; // [rsp+1D0h] [rbp-410h]
  std::initializer_list<unsigned int> v44; // [rsp+1E0h] [rbp-400h]
  std::initializer_list<unsigned int> v45; // [rsp+1F0h] [rbp-3F0h]
  std::initializer_list<unsigned int> v46; // [rsp+200h] [rbp-3E0h]
  std::initializer_list<unsigned int> v47; // [rsp+210h] [rbp-3D0h]
  std::initializer_list<unsigned int> v48; // [rsp+220h] [rbp-3C0h]
  std::initializer_list<unsigned int> v49; // [rsp+230h] [rbp-3B0h]
  std::initializer_list<unsigned int> v50; // [rsp+240h] [rbp-3A0h]
  std::initializer_list<unsigned int> v51; // [rsp+250h] [rbp-390h]
  std::initializer_list<unsigned int> v52; // [rsp+260h] [rbp-380h]
  std::initializer_list<unsigned int> v53; // [rsp+270h] [rbp-370h]
  std::initializer_list<unsigned int> v54; // [rsp+280h] [rbp-360h]
  std::initializer_list<unsigned int> v55; // [rsp+290h] [rbp-350h]
  std::initializer_list<unsigned int> v56; // [rsp+2A0h] [rbp-340h]
  std::initializer_list<unsigned int> v57; // [rsp+2B0h] [rbp-330h]
  std::initializer_list<unsigned int> v58; // [rsp+2C0h] [rbp-320h]
  std::initializer_list<unsigned int> v59; // [rsp+2D0h] [rbp-310h]
  std::initializer_list<unsigned int> v60; // [rsp+2E0h] [rbp-300h]
  std::initializer_list<unsigned int> v61; // [rsp+2F0h] [rbp-2F0h]
  std::initializer_list<unsigned int> v62; // [rsp+300h] [rbp-2E0h]
  std::initializer_list<unsigned int> v63; // [rsp+310h] [rbp-2D0h]
  std::initializer_list<unsigned int> v64; // [rsp+320h] [rbp-2C0h]
  std::initializer_list<unsigned int> v65; // [rsp+330h] [rbp-2B0h]
  std::initializer_list<unsigned int> v66; // [rsp+340h] [rbp-2A0h]
  std::initializer_list<unsigned int> v67; // [rsp+350h] [rbp-290h]
  std::initializer_list<unsigned int> v68; // [rsp+360h] [rbp-280h]
  std::initializer_list<unsigned int> v69; // [rsp+370h] [rbp-270h]
  std::initializer_list<unsigned int> v70; // [rsp+380h] [rbp-260h]
  std::initializer_list<unsigned int> v71; // [rsp+390h] [rbp-250h]
  std::initializer_list<unsigned int> v72; // [rsp+3A0h] [rbp-240h]
  std::initializer_list<unsigned int> v73; // [rsp+3B0h] [rbp-230h]
  std::initializer_list<unsigned int> v74; // [rsp+3C0h] [rbp-220h]
  std::initializer_list<unsigned int> v75; // [rsp+3D0h] [rbp-210h]
  std::initializer_list<unsigned int> v76; // [rsp+3E0h] [rbp-200h]
  std::initializer_list<unsigned int> v77; // [rsp+3F0h] [rbp-1F0h]
  std::initializer_list<unsigned int> v78; // [rsp+400h] [rbp-1E0h]
  std::initializer_list<unsigned int> v79; // [rsp+410h] [rbp-1D0h]
  std::allocator<unsigned int> __a; // [rsp+44Bh] [rbp-195h] BYREF
  std::vector<unsigned int>::value_type __x; // [rsp+44Ch] [rbp-194h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+450h] [rbp-190h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+458h] [rbp-188h]
  const std::shared_ptr<ChallengeCondition> *challenge_condition_ptr; // [rsp+460h] [rbp-180h]
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+468h] [rbp-178h] BYREF
  int v87; // [rsp+474h] [rbp-16Ch] BYREF
  int v88; // [rsp+478h] [rbp-168h]
  int v89; // [rsp+47Ch] [rbp-164h]
  int v90; // [rsp+480h] [rbp-160h] BYREF
  int v91; // [rsp+484h] [rbp-15Ch]
  int v92; // [rsp+488h] [rbp-158h]
  int v93; // [rsp+48Ch] [rbp-154h]
  int v94; // [rsp+490h] [rbp-150h] BYREF
  int v95; // [rsp+494h] [rbp-14Ch]
  int v96; // [rsp+498h] [rbp-148h]
  int v97; // [rsp+49Ch] [rbp-144h]
  int v98; // [rsp+4A0h] [rbp-140h]
  std::vector<unsigned int> index_vec; // [rsp+4B0h] [rbp-130h] BYREF
  common::milog::MiLogStream v100; // [rsp+4D0h] [rbp-110h] BYREF
  char v101[240]; // [rsp+4F0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v101;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 19 need_param_num:1544 48 4 19 challenge_type:1545 64 24 26 append_initial_params:1565 12"
                        "8 32 21 append_condition:1547";
  *(_QWORD *)(v3 + 16) = ChallengeComp::buildConditionAndParams;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_type >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_type);
  }
  *(_DWORD *)(v3 + 48) = challenge->challenge_type;
  *(_QWORD *)(v3 + 128) = challenge;
  *(_QWORD *)(v3 + 136) = param_vec;
  *(_QWORD *)(v3 + 144) = v3 + 32;
  *(_QWORD *)(v3 + 152) = this;
  *(_QWORD *)(v3 + 64) = challenge;
  *(_QWORD *)(v3 + 72) = param_vec;
  *(_QWORD *)(v3 + 80) = v3 + 32;
  switch ( *(_DWORD *)(v3 + 48) )
  {
    case 1:
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x100000000LL;
      __l._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      __l._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, __l, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_KILL_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 1;
      v15._M_array = &__x;
      v15._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v15, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 2:
      __x = 0;
      v16._M_array = &__x;
      v16._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v16, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_IN_TIME,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x200000001LL;
      v17._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v17._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v17, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_KILL_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)2;
      v18._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v18._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v18, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 3:
      __x = 0;
      v19._M_array = &__x;
      v19._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v19, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_ALL_TIME,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      memset(&index_vec, 0, sizeof(index_vec));
      std::vector<unsigned int>::vector(&index_vec);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_SURVIVE,
        0,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      __x = 1;
      v20._M_array = &__x;
      v20._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v20, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_TIME_DEC,
        0,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x100000000LL;
      v21._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v21._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v21, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 4:
      __x = 2;
      v22._M_array = &__x;
      v22._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v22, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_IN_TIME,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x100000000LL;
      v23._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v23._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v23, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_KILL_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x300000000LL;
      v24._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v24._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v24, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_TIME_INC,
        0,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x200000001LL;
      v25._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v25._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v25, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 5:
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)1;
      v26._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v26._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v26, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_KILL_FAST,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x200000001LL;
      v27._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v27._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v27, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_KILL_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)2;
      v28._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v28._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v28, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 6:
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x100000000LL;
      v29._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v29._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v29, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_KILL_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 2;
      v30._M_array = &__x;
      v30._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v30, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_FROZEN_LESS,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x200000001LL;
      v31._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v31._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v31, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 7:
      __x = 0;
      v32._M_array = &__x;
      v32._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v32, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_IN_TIME,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x200000001LL;
      v33._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v33._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v33, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_KILL_MONSTER,
        0,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 0;
      v34._M_array = &__x;
      v34._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v34, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 8:
      if ( std::vector<unsigned int>::size(param_vec) <= 4 )
      {
        __x = 1;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 5 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 6 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      __x = 0;
      v35._M_array = &__x;
      v35._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v35, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_IN_TIME,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v94 = 1;
      v95 = 2;
      v96 = 3;
      v97 = 4;
      v98 = 6;
      v36._M_array = (std::initializer_list<unsigned int>::iterator)&v94;
      v36._M_len = 5LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v36, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_TRIGGER,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v87 = 0;
      v88 = 3;
      v89 = 5;
      v37._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v37._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v37, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 9:
      __x = 0;
      v38._M_array = &__x;
      v38._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v38, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_ALL_TIME,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v87 = 1;
      v88 = 2;
      v89 = 3;
      v39._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v39._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v39, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_GUARD_HP,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( std::vector<unsigned int>::size(param_vec) <= 4 )
      {
        __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)3;
        v42._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
        v42._M_len = 2LL;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&index_vec, v42, &__a);
      }
      else
      {
        __x = 4;
        v40._M_array = &__x;
        v40._M_len = 1LL;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&index_vec, v40, &__a);
        ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
          (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
          CHALLENGE_COND_TIME_DEC,
          0,
          &index_vec);
        std::vector<unsigned int>::~vector(&index_vec);
        std::allocator<unsigned int>::~allocator(&__a);
        v87 = 3;
        v88 = 0;
        v89 = 4;
        v41._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
        v41._M_len = 3LL;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&index_vec, v41, &__a);
      }
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0xA:
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x100000000LL;
      v43._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v43._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v43, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_KILL_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v87 = 0;
      v88 = 2;
      v89 = 3;
      v44._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v44._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v44, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_GUARD_HP,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x300000001LL;
      v45._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v45._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v45, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0xB:
      if ( std::vector<unsigned int>::size(param_vec) <= 4 )
      {
        __x = 1;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 5 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        __x = Group::getGroupId(this->group_);
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 6 )
      {
        __x = 1;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      __x = 0;
      v46._M_array = &__x;
      v46._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v46, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_IN_TIME,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v90 = 1;
      v91 = 2;
      v92 = 4;
      v93 = 6;
      v47._M_array = (std::initializer_list<unsigned int>::iterator)&v90;
      v47._M_len = 4LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v47, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_TRIGGER,
        0,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x300000005LL;
      v48._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v48._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v48, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_TIME_INC,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 0;
      v49._M_array = &__x;
      v49._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v49, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0xC:
      if ( std::vector<unsigned int>::size(param_vec) <= 6 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 7 )
      {
        __x = 1;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      v90 = 0;
      v91 = 1;
      v92 = 2;
      v93 = 6;
      v50._M_array = (std::initializer_list<unsigned int>::iterator)&v90;
      v50._M_len = 4LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v50, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_TRIGGER,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v90 = 3;
      v91 = 4;
      v92 = 5;
      v93 = 7;
      v51._M_array = (std::initializer_list<unsigned int>::iterator)&v90;
      v51._M_len = 4LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v51, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_TRIGGER,
        0,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 2;
      v52._M_array = &__x;
      v52._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v52, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0xD:
      __x = 0;
      v53._M_array = &__x;
      v53._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v53, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_CHILD_SUCC,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 1;
      v54._M_array = &__x;
      v54._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v54, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_CHILD_FAIL,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 2;
      v55._M_array = &__x;
      v55._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v55, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_IN_TIME,
        3u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v87 = 0;
      v88 = 1;
      v89 = 2;
      v56._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v56._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v56, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0xE:
      __x = 0;
      v57._M_array = &__x;
      v57._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v57, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_MONSTER_DAMAGE_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 0;
      v58._M_array = &__x;
      v58._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v58, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0xF:
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x100000000LL;
      v59._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v59._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v59, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_ELEMENT_REACTION_CONT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 1;
      v60._M_array = &__x;
      v60._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v60, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x10:
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x100000000LL;
      v61._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v61._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v61, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_FREEZE_ENEMY_IN_TIME,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x11:
      v94 = 0;
      v95 = 1;
      v96 = 2;
      v97 = 3;
      v98 = 4;
      v62._M_array = (std::initializer_list<unsigned int>::iterator)&v94;
      v62._M_len = 5LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v62, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_CRYSTAL_ELEMENT_REACTION_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 4;
      v63._M_array = &__x;
      v63._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v63, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x12:
      __x = 0;
      v64._M_array = &__x;
      v64._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v64, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_SHEILD_ABSORB_DAMAGE_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 0;
      v65._M_array = &__x;
      v65._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v65, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x14:
      v94 = 0;
      v95 = 1;
      v96 = 2;
      v97 = 3;
      v98 = 4;
      v66._M_array = (std::initializer_list<unsigned int>::iterator)&v94;
      v66._M_len = 5LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v66, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_SWIRL_ELEMENT_REACTION_COUNT,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 4;
      v67._M_array = &__x;
      v67._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v67, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x15:
      __x = 0;
      v68._M_array = &__x;
      v68._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v68, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_ALL_TIME,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __x = 1;
      v69._M_array = &__x;
      v69._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v69, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_DIE_LESS,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      __for_end._M_current = (std::shared_ptr<ChallengeCondition> *)0x100000000LL;
      v70._M_array = (std::initializer_list<unsigned int>::iterator)&__for_end;
      v70._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v70, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x16:
      __x = 0;
      v71._M_array = &__x;
      v71._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v71, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_IN_TIME,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      memset(&index_vec, 0, sizeof(index_vec));
      std::vector<unsigned int>::vector(&index_vec);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_SURVIVE,
        0,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      __x = 0;
      v72._M_array = &__x;
      v72._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v72, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x17:
      if ( std::vector<unsigned int>::size(param_vec) <= 3 )
      {
        __x = 1;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 4 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 5 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      v94 = 0;
      v95 = 1;
      v96 = 2;
      v97 = 3;
      v98 = 4;
      v73._M_array = (std::initializer_list<unsigned int>::iterator)&v94;
      v73._M_len = 5LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v73, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_TRIGGER,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v87 = 2;
      v88 = 4;
      v89 = 5;
      v74._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v74._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v74, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x18:
      if ( std::vector<unsigned int>::size(param_vec) <= 1 )
      {
        __x = 1;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 2 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 3 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      v87 = 0;
      v88 = 1;
      v89 = 2;
      v75._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v75._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v75, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_LUA,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v87 = 0;
      v88 = 2;
      v89 = 3;
      v76._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v76._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v76, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      goto LABEL_71;
    case 0x19:
      if ( std::vector<unsigned int>::size(param_vec) <= 2 )
      {
        __x = 1;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 3 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      if ( std::vector<unsigned int>::size(param_vec) <= 4 )
      {
        __x = 0;
        std::vector<unsigned int>::push_back(param_vec, &__x);
      }
      __x = 0;
      v77._M_array = &__x;
      v77._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v77, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_IN_TIME,
        1u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v87 = 1;
      v88 = 2;
      v89 = 3;
      v78._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v78._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v78, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const)(v3 + 128),
        CHALLENGE_COND_LUA,
        2u,
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v87 = 0;
      v88 = 1;
      v89 = 4;
      v79._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
      v79._M_len = 3LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&index_vec, v79, &__a);
      ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        (const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const)(v3 + 64),
        &index_vec);
      std::vector<unsigned int>::~vector(&index_vec);
      std::allocator<unsigned int>::~allocator(&__a);
LABEL_71:
      v9 = *(unsigned int *)(v3 + 32);
      if ( v9 > std::vector<unsigned int>::size(param_vec) )
      {
        common::milog::MiLogStream::create(
          &v100,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "buildConditionAndParams",
          1730);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v100,
                (const char (*)[38])"param list not match! need_param_num:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" param_vec:");
        common::milog::MiLogStream::operator<<<unsigned int>(v12, param_vec);
        common::milog::MiLogStream::~MiLogStream(&v100);
        result = -2;
        goto LABEL_79;
      }
      __for_range = &challenge->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challenge->condition_vec)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
      break;
    default:
      common::milog::MiLogStream::create(
        &v100,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "buildConditionAndParams",
        1724);
      v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
             &v100,
             (const char (*)[17])"challenge_type: ");
      v7 = common::milog::MiLogStream::operator<<<data::ChallengeType,(data::ChallengeType*)0>(
             v6,
             (const data::ChallengeType *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])" not implemented.");
      common::milog::MiLogStream::~MiLogStream(&v100);
      result = -1;
      goto LABEL_79;
  }
  while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
            &__for_begin,
            &__for_end) )
  {
    challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
    if ( std::operator==<ChallengeCondition>(challenge_condition_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v100,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "buildConditionAndParams",
        1738);
      v13 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v100,
              (const char (*)[43])"initialize challenge failed, challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &challenge->challenge_id);
      common::milog::MiLogStream::~MiLogStream(&v100);
      result = -1;
      goto LABEL_79;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_79:
  if ( v101 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 1547: range 0000000014F1666C-0000000014F16B48
void __cdecl ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator()(
        const ChallengeComp::buildConditionAndParams::<lambda(data::ChallengeCondType, uint32_t, const std::vector<unsigned int>&)> *const __closure,
        data::ChallengeCondType cond_type,
        uint32_t param_index,
        const std::vector<unsigned int> *index_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  std::vector<unsigned int>::size_type v9; // r14
  std::vector<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  uint32_t *v12; // rdx
  uint32_t *need_param_num; // rcx
  uint32_t v14; // esi
  const std::vector<unsigned int> *challenge; // rdi
  unsigned int __b; // [rsp+20h] [rbp-F0h] BYREF
  uint32_t index; // [rsp+24h] [rbp-ECh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  char v25[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 11 cparam:1553 64 16 18 condition_ptr:1561 96 24 15 cparam_vec:1550";
  *(_QWORD *)(v4 + 16) = ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(data::ChallengeCondType,unsigned int,std::vector<unsigned int> const&)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 96));
  __for_range = index_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(index_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(index_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    index = *v8;
    *(_DWORD *)(v4 + 48) = 0;
    v9 = index;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param_vec);
    if ( v9 < std::vector<unsigned int>::size(__closure->__param_vec) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param_vec >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__param_vec);
      v10 = std::vector<unsigned int>::operator[](__closure->__param_vec, index);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v4 + 48) = *v11;
    }
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v4 + 96),
      (const std::vector<unsigned int>::value_type *)(v4 + 48));
    __b = index + 1;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__need_param_num >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__need_param_num);
    v12 = (uint32_t *)std::max<unsigned int>(__closure->__need_param_num, &__b);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__need_param_num >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__need_param_num);
    need_param_num = __closure->__need_param_num;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    v14 = *v12;
    if ( *(_BYTE *)(((unsigned __int64)need_param_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)need_param_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)need_param_num >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_store4(need_param_num);
    }
    *need_param_num = v14;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  challenge = (const std::vector<unsigned int> *)__closure->__challenge;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
  {
    challenge = (const std::vector<unsigned int> *)&__closure->__this;
    __asan_report_load8(&__closure->__this);
  }
  ChallengeCondition::createChallengeCond(
    (data::ChallengeCondType)(v4 + 64),
    cond_type,
    (ChallengeComp *)param_index,
    (Challenge *)__closure->__this,
    challenge);
  std::vector<std::shared_ptr<ChallengeCondition>>::emplace_back<std::shared_ptr<ChallengeCondition>&>(
    &__closure->__challenge->condition_vec,
    (std::shared_ptr<ChallengeCondition> *)(v4 + 64),
    (std::shared_ptr<ChallengeCondition> *)&__closure->__challenge->condition_vec);
  std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v4 + 64));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 96));
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1565: range 0000000014F16B4A-0000000014F16EDD
void __cdecl ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator()(
        const ChallengeComp::buildConditionAndParams::<lambda(const std::vector<unsigned int>&)> *const __closure,
        const std::vector<unsigned int> *index_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  std::vector<unsigned int>::size_type v7; // r14
  std::vector<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  uint32_t *v10; // rdx
  uint32_t *need_param_num; // rcx
  uint32_t v12; // esi
  unsigned int __b; // [rsp+10h] [rbp-90h] BYREF
  uint32_t index; // [rsp+14h] [rbp-8Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-78h]
  char v18[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 cparam:1569";
  *(_QWORD *)(v2 + 16) = ChallengeComp::buildConditionAndParams(Challenge &,std::vector<unsigned int> &)::{lambda(std::vector<unsigned int> const&)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = index_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(index_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(index_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    index = *v6;
    *(_DWORD *)(v2 + 32) = 0;
    v7 = index;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param_vec);
    if ( v7 < std::vector<unsigned int>::size(__closure->__param_vec) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param_vec >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__param_vec);
      v8 = std::vector<unsigned int>::operator[](__closure->__param_vec, index);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v2 + 32) = *v9;
    }
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    google::protobuf::RepeatedField<unsigned int>::Add(
      &__closure->__challenge->initial_param_list,
      (const unsigned int *)(v2 + 32));
    __b = index + 1;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__need_param_num >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__need_param_num);
    v10 = (uint32_t *)std::max<unsigned int>(__closure->__need_param_num, &__b);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__need_param_num >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__need_param_num);
    need_param_num = __closure->__need_param_num;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    v12 = *v10;
    if ( *(_BYTE *)(((unsigned __int64)need_param_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)need_param_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)need_param_num >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_store4(need_param_num);
    }
    *need_param_num = v12;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
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

// Line 1748: range 0000000014F1B308-0000000014F1C2CD
void __cdecl ChallengeComp::startAllChildren(ChallengeComp *const this, Challenge *challenge)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t challenge_index; // ecx
  uint32_t v6; // ebx
  uint32_t GroupId; // eax
  uint32_t v8; // eax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v9; // rax
  _DWORD *v10; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v11; // rax
  uint32_t father_index; // ecx
  uint32_t v13; // esi
  uint32_t Now; // esi
  __int64 SceneTimeMs; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  SceneTimer *v17; // rax
  uint32_t v18; // eax
  common::milog::MiLogStream *v19; // rax
  Player *v20; // rdx
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-198h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end_0; // [rsp+20h] [rbp-190h] BYREF
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>> *__for_range; // [rsp+30h] [rbp-180h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  Challenge *child_challenge; // [rsp+40h] [rbp-170h]
  const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > *v28; // [rsp+48h] [rbp-168h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *child_index; // [rsp+50h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *_; // [rsp+58h] [rbp-158h]
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-150h] BYREF
  char v32[304]; // [rsp+80h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 16 child_index:1774 64 8 9 iter:1776 96 16 15 player_ptr:1761 128 16 14 child_ptr:1782 16"
                        "0 56 27 dup_children_index_set:1769";
  *(_QWORD *)(v2 + 16) = ChallengeComp::startAllChildren;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_index);
  }
  challenge_index = challenge->challenge_index;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->father_index);
  }
  if ( challenge_index == challenge->father_index )
  {
    if ( std::operator==<SceneTimer>(0LL, &this->challenge_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/challenge_comp.cpp",
        "startAllChildren",
        1757);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&challenge->challenge_index);
      }
      v6 = challenge->challenge_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      GroupId = Group::getGroupId(this->group_);
      common::milog::MiLogStream::operator()(
        &v31,
        "group_id: %u father challenge index: %u hallenge_timer_ptr is null",
        GroupId,
        v6);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      Group::getOwnerPlayer((const Group *const)(v2 + 96));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "startAllChildren",
          1764);
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        v8 = Group::getGroupId(this->group_);
        common::milog::MiLogStream::operator()(&v31, "group_id %u getOwnerPlayer fail", v8);
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/challenge_comp.cpp",
          "startAllChildren",
          1768);
        if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&challenge->challenge_index);
        }
        common::milog::MiLogStream::operator()(
          &v31,
          "Starting all children of father challenge @index[%u]",
          challenge->challenge_index);
        common::milog::MiLogStream::~MiLogStream(&v31);
        std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 160));
        __for_range = &challenge->child_map;
        *(std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::begin(&challenge->child_map);
        __for_end._M_node = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::end(__for_range)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::_Self *)(v2 + 64),
                  &__for_end) )
        {
          v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > > *const)(v2 + 64));
          child_index = std::get<0ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v28);
          _ = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v28);
          std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v2 + 160), child_index);
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > > *const)(v2 + 64));
        }
        __for_range_0 = (std::unordered_set<unsigned int> *)(v2 + 160);
        __for_begin._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 160))._M_cur;
        __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end_0) )
        {
          v9 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v9);
          }
          *(_DWORD *)(v2 + 48) = *v10;
          *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                        &this->challenge_map_,
                                                                                        (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v2 + 48));
          __for_end._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v2 + 64),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__for_end) )
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/challenge_comp.cpp",
              "startAllChildren",
              1779);
            common::milog::MiLogStream::operator()(
              &v31,
              "Child Challenge @index[%u] NOT found.",
              *(unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v31);
          }
          else
          {
            v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v2 + 64));
            std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 128), &v11->second);
            if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/challenge_comp.cpp",
                "startAllChildren",
                1785);
              common::milog::MiLogStream::operator()(
                &v31,
                "Child Challenge @index[%u] nullptr.",
                *(unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              child_challenge = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&child_challenge->father_index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&child_challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&child_challenge->father_index);
              }
              father_index = child_challenge->father_index;
              if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                                         + 0x7FFF8000) )
              {
                __asan_report_load4(&challenge->challenge_index);
              }
              if ( father_index == challenge->challenge_index )
              {
                if ( *(char *)(((unsigned __int64)&child_challenge->finished >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&child_challenge->finished);
                if ( child_challenge->finished )
                {
                  common::milog::MiLogStream::create(
                    &v31,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/dungeon/challenge_comp.cpp",
                    "startAllChildren",
                    1796);
                  common::milog::MiLogStream::operator()(
                    &v31,
                    "Child Challenge @index[%u] finished.",
                    *(unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v31);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&child_challenge->start_time >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&child_challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&child_challenge->start_time);
                  }
                  if ( child_challenge->start_time )
                  {
                    common::milog::MiLogStream::create(
                      &v31,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/dungeon/challenge_comp.cpp",
                      "startAllChildren",
                      1801);
                    common::milog::MiLogStream::operator()(
                      &v31,
                      "Child Challenge @index[%u] started.",
                      *(unsigned int *)(v2 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v31);
                  }
                  else if ( ChallengeComp::buildConditionAndParams(this, child_challenge, &child_challenge->param_vec) )
                  {
                    common::milog::MiLogStream::create(
                      &v31,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/dungeon/challenge_comp.cpp",
                      "startAllChildren",
                      1806);
                    if ( *(_BYTE *)(((unsigned __int64)&child_challenge->father_index >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&child_challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&child_challenge->father_index);
                    }
                    v13 = child_challenge->father_index;
                    if ( *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&child_challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&child_challenge->challenge_id);
                    }
                    common::milog::MiLogStream::operator()(
                      &v31,
                      "buildConditionAndParams for challenge @index[%u] failed, challenge id[%u], fahter_index[%u].",
                      *(unsigned int *)(v2 + 48),
                      child_challenge->challenge_id,
                      v13);
                    common::milog::MiLogStream::~MiLogStream(&v31);
                  }
                  else
                  {
                    Now = common::tools::TimeUtils::getNow();
                    if ( *(_BYTE *)(((unsigned __int64)&child_challenge->start_time >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&child_challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&child_challenge->start_time);
                    }
                    child_challenge->start_time = Now;
                    SceneTimeMs = ChallengeComp::getSceneTimeMs(this);
                    if ( *(_BYTE *)(((unsigned __int64)&child_challenge->start_scene_time_ms >> 3) + 0x7FFF8000) )
                      SceneTimeMs = __asan_report_store8(&child_challenge->start_scene_time_ms);
                    child_challenge->start_scene_time_ms = SceneTimeMs;
                    v16 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->challenge_timer_ptr_);
                    if ( !common::tools::MiTimer::isActive(v16)
                      && (v17 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->challenge_timer_ptr_),
                          SceneTimer::startMS(
                            v17,
                            0xC8u,
                            1,
                            "./src/dungeon/challenge_comp.cpp",
                            "startAllChildren",
                            1814)) )
                    {
                      common::milog::MiLogStream::create(
                        &v31,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/dungeon/challenge_comp.cpp",
                        "startAllChildren",
                        1817);
                      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->group_);
                      v18 = Group::getGroupId(this->group_);
                      common::milog::MiLogStream::operator()(
                        &v31,
                        "start challenge_timer fail, GAME_TIMER_INTERVAL: %u for challenge index: %u @ group: %u",
                        200LL,
                        *(unsigned int *)(v2 + 48),
                        v18);
                      common::milog::MiLogStream::~MiLogStream(&v31);
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v31,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/dungeon/challenge_comp.cpp",
                        "startAllChildren",
                        1822);
                      v19 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                              &v31,
                              (const char (*)[42])"[challenge child] challenge_begin_notify:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v2 + 48));
                      common::milog::MiLogStream::~MiLogStream(&v31);
                      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                      ChallengeComp::onChallengeBegin(this, child_challenge, v20, 0);
                    }
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v31,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/dungeon/challenge_comp.cpp",
                  "startAllChildren",
                  1791);
                common::milog::MiLogStream::operator()(
                  &v31,
                  "Child Challenge @index[%u]: fahter index mismatch [%u vs %u].",
                  *(unsigned int *)(v2 + 48),
                  child_challenge->father_index,
                  challenge->challenge_index);
                common::milog::MiLogStream::~MiLogStream(&v31);
              }
            }
            std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 128));
          }
          std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
        }
        std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::startAllChildren(Challenge &)::{lambda(ChallengeCondition &)#1},void,void>(
          (std::function<ForeachPolicy(ChallengeCondition&)> *const)&v31,
          (ChallengeComp::startAllChildren::<lambda(ChallengeCondition&)>)&__for_end_0);
        ChallengeComp::foreachUnfinishedChallengeCondition(
          this,
          (const std::function<ForeachPolicy(ChallengeCondition&)> *)&v31,
          ALL_0);
        std::function<ForeachPolicy ()(ChallengeCondition &)>::~function((std::function<ForeachPolicy(ChallengeCondition&)> *const)&v31);
        std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/challenge_comp.cpp",
      "startAllChildren",
      1751);
    common::milog::MiLogStream::operator()(
      &v31,
      "challenge @index[%u] is not father. father_index[%u]",
      challenge->challenge_index,
      challenge->father_index);
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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
};

// Line 1827: range 0000000014F1B298-0000000014F1B306
ForeachPolicy __cdecl ChallengeComp::startAllChildren(Challenge &)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::startAllChildren::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 16);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 16);
  (*(void (__fastcall **)(ChallengeCondition *))v2)(challenge_condition);
  return 0;
};

// Line 1835: range 0000000014F1C426-0000000014F1C73A
void __fastcall ChallengeComp::onChildSettle(ChallengeComp *const this, bool is_success, Challenge *challenge)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r15
  uint32_t father_index; // ecx
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> *v8; // rax
  data::ChallengeType *v9; // [rsp+0h] [rbp-F0h]
  Challenge *challengea; // [rsp+8h] [rbp-E8h]
  bool *v11; // [rsp+10h] [rbp-E0h]
  ChallengeComp *thisa; // [rsp+18h] [rbp-D8h]
  bool v13; // [rsp+2Bh] [rbp-C5h] BYREF
  unsigned int __args_0; // [rsp+2Ch] [rbp-C4h] BYREF
  std::tuple<unsigned int,data::ChallengeType,bool,bool,unsigned int> __in; // [rsp+30h] [rbp-C0h] BYREF
  std::function<ForeachPolicy(ChallengeCondition&)> func; // [rsp+40h] [rbp-B0h] BYREF
  data::ChallengeType v17[36]; // [rsp+60h] [rbp-90h] BYREF
  ChallengeComp::onChildSettle::<lambda(ChallengeCondition&)> v18; // 0:rsi.8,8:dl.1

  thisa = this;
  challengea = challenge;
  BYTE4(v11) = is_success;
  v3 = (unsigned __int64)v17;
  v9 = v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 15 is_success:1834 64 16 15 father_ptr:1838";
  *(_QWORD *)(v3 + 16) = ChallengeComp::onChildSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  *(_BYTE *)(v3 + 48) = is_success;
  if ( *(_BYTE *)(((unsigned __int64)&challengea->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challengea->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challengea->father_index);
  }
  father_index = challengea->father_index;
  if ( *(_BYTE *)(((unsigned __int64)&challengea->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challengea + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challengea->challenge_index >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&challengea->challenge_index);
  }
  if ( father_index != challengea->challenge_index )
  {
    ChallengeComp::findChallenge((const ChallengeComp *const)(v3 + 64), (uint32_t)this);
    if ( std::operator!=<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 64)) )
    {
      __args_0 = Challenge::getCurDisplayProgress(challengea);
      v13 = 1;
      std::make_tuple<unsigned int const&,data::ChallengeType const&,bool,bool &,unsigned int>(
        (const unsigned int *)&__in.std::_Tuple_impl<2,bool,bool,unsigned int>,
        (const data::ChallengeType *)&challengea->challenge_id,
        (bool *)&challengea->challenge_type,
        &v13,
        (unsigned int *)(v3 + 48),
        &__args_0,
        v17,
        (bool *)challengea,
        v11,
        (unsigned int *)this);
      v7 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v8 = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::operator[](
             &v7->child_map,
             &challengea->challenge_index);
      std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>::operator=<unsigned int,data::ChallengeType,bool,bool,unsigned int>(
        v8,
        &__in);
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 64));
  }
  v18.__is_success = *(_BYTE *)(v3 + 48);
  v18.__challenge = challengea;
  std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onChildSettle(bool,Challenge const&)::{lambda(ChallengeCondition &)#1},void,void>(
    &func,
    v18);
  ChallengeComp::foreachUnfinishedChallengeCondition(thisa, &func, ALL_0);
  std::function<ForeachPolicy ()(ChallengeCondition &)>::~function(&func);
  if ( v9 == (data::ChallengeType *)v3 )
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

// Line 1844: range 0000000014F1C2CE-0000000014F1C424
ForeachPolicy __cdecl ChallengeComp::onChildSettle(bool,Challenge const&)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onChildSettle::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  const Challenge *challenge; // rax
  char v3; // dl
  uint32_t father_index; // ebx
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(ChallengeCondition *, bool, const Challenge *); // r8
  const Challenge *v7; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  challenge = __closure->__challenge;
  v3 = *(_BYTE *)(((unsigned __int64)&__closure->__challenge->father_index >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
    __asan_report_load4(&__closure->__challenge->father_index);
  father_index = challenge->father_index;
  if ( father_index == ChallengeCondition::getChallengeIndex(challenge_condition) )
  {
    if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
      __asan_report_load8(challenge_condition);
    v5 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 18);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 18);
    v6 = *(void (__fastcall **)(ChallengeCondition *, bool, const Challenge *))v5;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v7 = __closure->__challenge;
    if ( *(char *)(((unsigned __int64)&__closure->__is_success >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&__closure->__is_success);
    v6(challenge_condition, __closure->__is_success, v7);
  }
  return 0;
};

// Line 1855: range 0000000014F1C73C-0000000014F1C7E5
bool __cdecl ChallengeComp::isChildChallenge(const ChallengeComp *const this, const Challenge *challenge)
{
  uint32_t father_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->father_index);
  }
  if ( !challenge->father_index )
    return 0;
  father_index = challenge->father_index;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_index);
  }
  return father_index != challenge->challenge_index;
};

// Line 1861: range 0000000014F1C7E6-0000000014F1C943
void __cdecl ChallengeComp::fillBeginNotify(
        const ChallengeComp *const this,
        proto::DungeonChallengeBeginNotify *notify,
        const Challenge *challenge)
{
  uint32_t *p_father_index; // rdx
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  uint32_t GroupId; // edx

  p_father_index = &challenge->father_index;
  if ( *(_BYTE *)(((unsigned __int64)p_father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_father_index);
  }
  proto::DungeonChallengeBeginNotify::set_father_index(notify, challenge->father_index);
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->challenge_id);
  }
  proto::DungeonChallengeBeginNotify::set_challenge_id(notify, challenge->challenge_id);
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_index);
  }
  proto::DungeonChallengeBeginNotify::set_challenge_index(notify, challenge->challenge_index);
  v4 = proto::DungeonChallengeBeginNotify::mutable_param_list(notify);
  google::protobuf::RepeatedField<unsigned int>::CopyFrom(v4, &challenge->initial_param_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  GroupId = Group::getGroupId(this->group_);
  proto::DungeonChallengeBeginNotify::set_group_id(notify, GroupId);
};

// Line 1871: range 0000000014F1C944-0000000014F1C972
int32_t __cdecl ChallengeComp::endFatherChallenge(
        ChallengeComp *const this,
        const ScriptContext *context,
        uint32_t father_index,
        bool is_succ)
{
  return ChallengeComp::finishChallengeByScript(this, father_index, is_succ);
};

// Line 1877: range 0000000014F1CA6C-0000000014F1D247
__int64 __fastcall ChallengeComp::modifyFatherChallengeProperty(
        ChallengeComp *const this,
        const ScriptContext *context,
        uint32_t father_index,
        data::FatherChallengeProperty father_property,
        int32_t value)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  uint32_t GroupId; // eax
  unsigned int v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v10; // rax
  uint32_t v11; // eax
  int v12; // ecx
  uint32_t v13; // eax
  uint32_t v14; // eax
  uint32_t v15; // eax
  __int64 result; // rax
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-105h] BYREF
  _DWORD __l[5]; // [rsp+3Ch] [rbp-104h] BYREF
  std::vector<unsigned int> p_index_vec; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+90h] [rbp-B0h] BYREF
  ChallengeComp::modifyFatherChallengeProperty::<lambda(ChallengeCondition&)> v25; // 0:rsi.8

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 17 father_index:1876 64 8 9 iter:1878 96 16 18 challenge_ptr:1885";
  *(_QWORD *)(v5 + 16) = ChallengeComp::modifyFatherChallengeProperty;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 48) = father_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v5 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v5 + 48));
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)&__l[1] = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v5 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__l[1]) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "modifyFatherChallengeProperty",
      1881);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    common::milog::MiLogStream::operator()(
      &v23,
      "father challenge @index[%u] not exist. group[%u]",
      *(unsigned int *)(v5 + 48),
      GroupId);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v9 = -1;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v5 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v5 + 96), &v10->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v5 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "modifyFatherChallengeProperty",
        1888);
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      v11 = Group::getGroupId(this->group_);
      common::milog::MiLogStream::operator()(
        &v23,
        "father challenge @index[%u] nullptr. group[%u]",
        *(unsigned int *)(v5 + 48),
        v11);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v9 = -1;
    }
    else
    {
      *(_QWORD *)&__l[3] = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(*(_QWORD *)&__l[3] + 24LL);
      }
      v12 = *(_DWORD *)(*(_QWORD *)&__l[3] + 24LL);
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 28LL) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(__l[3]) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 28LL) >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(*(_QWORD *)&__l[3] + 28LL);
      }
      if ( v12 == *(_DWORD *)(*(_QWORD *)&__l[3] + 28LL) )
      {
        if ( *(char *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 40LL) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(*(_QWORD *)&__l[3] + 40LL);
        if ( *(_BYTE *)(*(_QWORD *)&__l[3] + 40LL) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/challenge_comp.cpp",
            "modifyFatherChallengeProperty",
            1901);
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          v14 = Group::getGroupId(this->group_);
          common::milog::MiLogStream::operator()(
            &v23,
            "father challenge @index[%u] finished. group[%u]",
            *(unsigned int *)(v5 + 48),
            v14);
          common::milog::MiLogStream::~MiLogStream(&v23);
          v9 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 184LL) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 184LL) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(*(_QWORD *)&__l[3] + 184LL);
          }
          if ( *(_DWORD *)(*(_QWORD *)&__l[3] + 184LL) )
          {
            v25.__father_property = father_property;
            v25.__value = value;
            std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::modifyFatherChallengeProperty(ScriptContext const&,unsigned int,data::FatherChallengeProperty,int)::{lambda(ChallengeCondition &)#1},void,void>(
              (std::function<ForeachPolicy(ChallengeCondition&)> *const)&v23,
              v25);
            __l[0] = *(_DWORD *)(v5 + 48);
            std::allocator<unsigned int>::allocator(&__a);
            std::vector<unsigned int>::vector(
              &p_index_vec,
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
              &__a);
            ChallengeComp::foreachUnfinishedChallengeCondition(
              this,
              &p_index_vec,
              (const std::function<ForeachPolicy(ChallengeCondition&)> *)&v23,
              ALL_0);
            std::vector<unsigned int>::~vector(&p_index_vec);
            std::allocator<unsigned int>::~allocator(&__a);
            std::function<ForeachPolicy ()(ChallengeCondition &)>::~function((std::function<ForeachPolicy(ChallengeCondition&)> *const)&v23);
            v9 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/challenge_comp.cpp",
              "modifyFatherChallengeProperty",
              1907);
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->group_);
            v15 = Group::getGroupId(this->group_);
            common::milog::MiLogStream::operator()(
              &v23,
              "father challenge @index[%u] NOT start. group[%u]",
              *(unsigned int *)(v5 + 48),
              v15);
            common::milog::MiLogStream::~MiLogStream(&v23);
            v9 = -1;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "modifyFatherChallengeProperty",
          1895);
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        v13 = Group::getGroupId(this->group_);
        common::milog::MiLogStream::operator()(
          &v23,
          "father challenge @index[%u] is NOT father. group[%u]",
          *(unsigned int *)(v5 + 48),
          v13);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v9 = -1;
      }
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v5 + 96));
  }
  result = v9;
  if ( v24 == (char *)v5 )
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

// Line 1911: range 0000000014F1C974-0000000014F1CA6B
ForeachPolicy __cdecl ChallengeComp::modifyFatherChallengeProperty(ScriptContext const&,unsigned int,data::FatherChallengeProperty,int)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::modifyFatherChallengeProperty::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, _QWORD, _QWORD, __int64); // r8
  unsigned int value; // edi

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 19);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 19);
  v3 = *(void (__fastcall **)(ChallengeCondition *, _QWORD, _QWORD, __int64))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__value);
  }
  value = __closure->__value;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    value = (unsigned int)__closure;
    __asan_report_load4(__closure);
  }
  v3(challenge_condition, (unsigned int)__closure->__father_property, value, 1LL);
  return 0;
};

// Line 1927: range 0000000014F1D340-0000000014F1D9D8
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ChallengeComp::addChallengeDuration(
        ChallengeComp *const this,
        uint32_t challenge_index,
        unsigned int mod_value,
        bool can_exceed_limit)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t GroupId; // eax
  unsigned int v8; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v9; // rax
  uint32_t v10; // eax
  uint32_t v11; // eax
  uint32_t v12; // eax
  unsigned __int64 v13; // rsi OVERLAPPED
  __int64 result; // rax
  __int64 v15; // [rsp+8h] [rbp-138h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-105h] BYREF
  _DWORD __l[5]; // [rsp+3Ch] [rbp-104h] BYREF
  std::vector<unsigned int> p_index_vec; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+90h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 20 challenge_index:1926 64 8 9 iter:1928 96 16 18 challenge_ptr:1934";
  *(_QWORD *)(v4 + 16) = ChallengeComp::addChallengeDuration;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = challenge_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v4 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v4 + 48));
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)&__l[1] = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v4 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__l[1]) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "addChallengeDuration",
      1931);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    common::milog::MiLogStream::operator()(
      &v21,
      "challenge @index[%u] not exist. group[%u]",
      *(unsigned int *)(v4 + 48),
      GroupId);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = -1;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v4 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96), &v9->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "addChallengeDuration",
        1937);
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      v10 = Group::getGroupId(this->group_);
      common::milog::MiLogStream::operator()(
        &v21,
        "challenge @index[%u] nullptr. group[%u]",
        *(unsigned int *)(v4 + 48),
        v10);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = -1;
    }
    else
    {
      *(_QWORD *)&__l[3] = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(char *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 40LL) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(*(_QWORD *)&__l[3] + 40LL);
      if ( *(_BYTE *)(*(_QWORD *)&__l[3] + 40LL) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/challenge_comp.cpp",
          "addChallengeDuration",
          1943);
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        v11 = Group::getGroupId(this->group_);
        common::milog::MiLogStream::operator()(
          &v21,
          "challenge @index[%u] finished. group[%u]",
          *(unsigned int *)(v4 + 48),
          v11);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 184LL) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 184LL) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(*(_QWORD *)&__l[3] + 184LL);
        }
        if ( *(_DWORD *)(*(_QWORD *)&__l[3] + 184LL) )
        {
          v13 = v15 & 0xFFFFFF0000000000LL | mod_value | ((unsigned __int64)can_exceed_limit << 32);
          std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::addChallengeDuration(unsigned int,int,bool)::{lambda(ChallengeCondition &)#1},void,void>(
            (std::function<ForeachPolicy(ChallengeCondition&)> *const)&v21,
            (ChallengeComp::addChallengeDuration::<lambda(ChallengeCondition&)>)v13);
          __l[0] = *(_DWORD *)(v4 + 48);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            &p_index_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
            &__a);
          ChallengeComp::foreachUnfinishedChallengeCondition(
            this,
            &p_index_vec,
            (const std::function<ForeachPolicy(ChallengeCondition&)> *)&v21,
            ALL_0);
          std::vector<unsigned int>::~vector(&p_index_vec);
          std::allocator<unsigned int>::~allocator(&__a);
          std::function<ForeachPolicy ()(ChallengeCondition &)>::~function((std::function<ForeachPolicy(ChallengeCondition&)> *const)&v21);
          v8 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "addChallengeDuration",
            1948);
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          v12 = Group::getGroupId(this->group_);
          common::milog::MiLogStream::operator()(
            &v21,
            "challenge @index[%u] NOT start. group[%u]",
            *(unsigned int *)(v4 + 48),
            v12);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v8 = -1;
        }
      }
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96));
  }
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

// Line 1951: range 0000000014F1D248-0000000014F1D33F
ForeachPolicy __cdecl ChallengeComp::addChallengeDuration(unsigned int,int,bool)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::addChallengeDuration::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, _QWORD, _QWORD, _BOOL8); // r8
  _BOOL8 can_exceed_limit; // rcx

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 19);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 19);
  v3 = *(void (__fastcall **)(ChallengeCondition *, _QWORD, _QWORD, _BOOL8))v2;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__can_exceed_limit >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__closure + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__can_exceed_limit >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load1(&__closure->__can_exceed_limit);
  }
  can_exceed_limit = __closure->__can_exceed_limit;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  v3(challenge_condition, 0LL, (unsigned int)__closure->__mod_value, can_exceed_limit);
  return 0;
};

// Line 1961: range 0000000014F1DA8C-0000000014F1E0E9
__int64 __fastcall ChallengeComp::setChallengeDuration(
        ChallengeComp *const this,
        uint32_t challenge_index,
        ChallengeComp::setChallengeDuration::<lambda(ChallengeCondition&)> left_time)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t GroupId; // eax
  unsigned int v7; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v8; // rax
  uint32_t v9; // eax
  uint32_t v10; // eax
  uint32_t v11; // eax
  __int64 result; // rax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-105h] BYREF
  _DWORD __l[5]; // [rsp+2Ch] [rbp-104h] BYREF
  std::vector<unsigned int> p_index_vec; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 20 challenge_index:1960 64 8 9 iter:1962 96 16 18 challenge_ptr:1968";
  *(_QWORD *)(v3 + 16) = ChallengeComp::setChallengeDuration;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = challenge_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v3 + 48));
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)&__l[1] = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__l[1]) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "setChallengeDuration",
      1965);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    common::milog::MiLogStream::operator()(
      &v17,
      "challenge @index[%u] not exist. group[%u]",
      *(unsigned int *)(v3 + 48),
      GroupId);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96), &v8->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "setChallengeDuration",
        1971);
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      v9 = Group::getGroupId(this->group_);
      common::milog::MiLogStream::operator()(
        &v17,
        "challenge @index[%u] nullptr. group[%u]",
        *(unsigned int *)(v3 + 48),
        v9);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = -1;
    }
    else
    {
      *(_QWORD *)&__l[3] = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(char *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 40LL) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(*(_QWORD *)&__l[3] + 40LL);
      if ( *(_BYTE *)(*(_QWORD *)&__l[3] + 40LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/challenge_comp.cpp",
          "setChallengeDuration",
          1977);
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        v10 = Group::getGroupId(this->group_);
        common::milog::MiLogStream::operator()(
          &v17,
          "challenge @index[%u] finished. group[%u]",
          *(unsigned int *)(v3 + 48),
          v10);
        common::milog::MiLogStream::~MiLogStream(&v17);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 184LL) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 184LL) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(*(_QWORD *)&__l[3] + 184LL);
        }
        if ( *(_DWORD *)(*(_QWORD *)&__l[3] + 184LL) )
        {
          std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::setChallengeDuration(unsigned int,unsigned int)::{lambda(ChallengeCondition &)#1},void,void>(
            (std::function<ForeachPolicy(ChallengeCondition&)> *const)&v17,
            left_time);
          __l[0] = *(_DWORD *)(v3 + 48);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            &p_index_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
            &__a);
          ChallengeComp::foreachUnfinishedChallengeCondition(
            this,
            &p_index_vec,
            (const std::function<ForeachPolicy(ChallengeCondition&)> *)&v17,
            ALL_0);
          std::vector<unsigned int>::~vector(&p_index_vec);
          std::allocator<unsigned int>::~allocator(&__a);
          std::function<ForeachPolicy ()(ChallengeCondition &)>::~function((std::function<ForeachPolicy(ChallengeCondition&)> *const)&v17);
          v7 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/challenge_comp.cpp",
            "setChallengeDuration",
            1982);
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->group_);
          v11 = Group::getGroupId(this->group_);
          common::milog::MiLogStream::operator()(
            &v17,
            "challenge @index[%u] NOT start. group[%u]",
            *(unsigned int *)(v3 + 48),
            v11);
          common::milog::MiLogStream::~MiLogStream(&v17);
          v7 = -1;
        }
      }
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 96));
  }
  result = v7;
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
  return result;
};

// Line 1985: range 0000000014F1D9DA-0000000014F1DA8A
ForeachPolicy __cdecl ChallengeComp::setChallengeDuration(unsigned int,unsigned int)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::setChallengeDuration::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(ChallengeCondition *, _QWORD); // rcx

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 20);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 20);
  v3 = *(void (__fastcall **)(ChallengeCondition *, _QWORD))v2;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  v3(challenge_condition, __closure->__left_time);
  return 0;
};

// Line 1994: range 0000000014F1E0EA-0000000014F1E18D
void __cdecl ChallengeComp::initChallengeAbilityGroup(ChallengeComp *const this, const Challenge *challenge)
{
  Group *group; // rbx
  std::unordered_set<unsigned int> p_uid_set; // [rsp+10h] [rbp-50h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  group = this->group_;
  std::unordered_set<unsigned int>::unordered_set(&p_uid_set, &challenge->uid_set);
  Group::operatePlayerAbilityGroup(group, challenge, 1, &p_uid_set);
  std::unordered_set<unsigned int>::~unordered_set(&p_uid_set);
};

// Line 1999: range 0000000014F1E18E-0000000014F1E231
void __cdecl ChallengeComp::clearChallengeAbilityGroup(ChallengeComp *const this, const Challenge *challenge)
{
  Group *group; // rbx
  std::unordered_set<unsigned int> p_uid_set; // [rsp+10h] [rbp-50h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  group = this->group_;
  std::unordered_set<unsigned int>::unordered_set(&p_uid_set, &challenge->uid_set);
  Group::operatePlayerAbilityGroup(group, challenge, 0, &p_uid_set);
  std::unordered_set<unsigned int>::~unordered_set(&p_uid_set);
};

// Line 2004: range 0000000014F1E232-0000000014F1E3A9
void __cdecl ChallengeComp::addGuestChallengeAbilityGroup(
        ChallengeComp *const this,
        const Challenge *challenge,
        PlayerPtr *p_player_ptr)
{
  Player *v3; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rbx
  uint32_t GroupId; // eax
  Player *v6; // rax
  PlayerAbilityGroupComp *v7; // rax
  Player *v8; // rax
  PlayerAbilityGroupComp *v9; // rax
  Player *v10; // rax
  PlayerAbilityGroupComp *v11; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Player>(0LL, p_player_ptr) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "addGuestChallengeAbilityGroup",
      2007);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"nullptr player_ptr");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v3 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    AbilityGroupComp = Player::getAbilityGroupComp(v3);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    PlayerAbilityGroupComp::markAbilityGroupSource(AbilityGroupComp, ABILITY_GROUP_SOURCE_CHALLENGE, GroupId);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v7 = Player::getAbilityGroupComp(v6);
    PlayerAbilityGroupComp::addTeamAbilityGroup(v7, &challenge->team_ability_group_vec, 0);
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v9 = Player::getAbilityGroupComp(v8);
    PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v9, &challenge->ability_group_vec, 0);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v11 = Player::getAbilityGroupComp(v10);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v11);
  }
};

// Line 2017: range 0000000014F1E3AA-0000000014F1E517
void __cdecl ChallengeComp::delGuestChallengeAbilityGroup(
        ChallengeComp *const this,
        const Challenge *challenge,
        PlayerPtr *p_player_ptr)
{
  Player *v3; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rbx
  uint32_t GroupId; // eax
  Player *v6; // rax
  PlayerAbilityGroupComp *v7; // rax
  Player *v8; // rax
  PlayerAbilityGroupComp *v9; // rax
  Player *v10; // rax
  PlayerAbilityGroupComp *v11; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Player>(0LL, p_player_ptr) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "delGuestChallengeAbilityGroup",
      2020);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"nullptr player_ptr");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v3 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    AbilityGroupComp = Player::getAbilityGroupComp(v3);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    PlayerAbilityGroupComp::markAbilityGroupSource(AbilityGroupComp, ABILITY_GROUP_SOURCE_CHALLENGE, GroupId);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v7 = Player::getAbilityGroupComp(v6);
    PlayerAbilityGroupComp::delTeamAbilityGroup(v7, &challenge->team_ability_group_vec);
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v9 = Player::getAbilityGroupComp(v8);
    PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v9, &challenge->ability_group_vec);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    v11 = Player::getAbilityGroupComp(v10);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v11);
  }
};

// Line 2033: range 0000000014F1E518-0000000014F1EB8F
void __cdecl ChallengeComp::foreachUnfinishedChallengeCondition(
        ChallengeComp *const this,
        const std::vector<unsigned int> *p_index_vec,
        const std::function<ForeachPolicy(ChallengeCondition&)> *func,
        ChallengeFilter filter)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v9; // rax
  int v10; // r14d
  std::shared_ptr<ChallengeCondition> *M_current; // r14
  std::shared_ptr<ChallengeCondition> *v12; // r15
  int v13; // r14d
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  ChallengeCondition *v15; // rdx
  int v16; // r14d
  std::allocator<std::weak_ptr<ChallengeCondition> > __a; // [rsp+3Fh] [rbp-171h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-170h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-168h] BYREF
  std::vector<std::weak_ptr<ChallengeCondition>>::iterator __for_begin_0; // [rsp+50h] [rbp-160h] BYREF
  std::vector<std::weak_ptr<ChallengeCondition>>::iterator __for_end_0; // [rsp+58h] [rbp-158h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-150h]
  Challenge *challenge; // [rsp+68h] [rbp-148h]
  std::vector<std::weak_ptr<ChallengeCondition>> *__for_range_0; // [rsp+70h] [rbp-140h]
  std::weak_ptr<ChallengeCondition> *challenge_condition_wtr; // [rsp+78h] [rbp-138h]
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-130h] BYREF
  char v29[272]; // [rsp+A0h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 20 challenge_index:2034 64 8 9 iter:2036 96 16 18 challenge_ptr:2041 128 16 28 challenge_"
                        "condition_ptr:2063 160 24 28 challenge_condition_vec:2060";
  *(_QWORD *)(v4 + 16) = ChallengeComp::foreachUnfinishedChallengeCondition;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  __for_range = p_index_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(p_index_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(p_index_vec)._M_current;
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
    *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v4 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                  &this->challenge_map_,
                                                                                  (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v4 + 48));
    __for_end_0._M_current = (std::weak_ptr<ChallengeCondition> *)std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
    if ( !std::operator==(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v4 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)&__for_end_0) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v4 + 64));
      std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96), &v9->second);
      if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v4 + 96)) )
      {
        v10 = 0;
      }
      else
      {
        challenge = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(char *)(((unsigned __int64)&challenge->finished >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&challenge->finished);
        if ( challenge->finished )
        {
          v10 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&challenge->start_time);
          }
          if ( challenge->start_time )
          {
            if ( !Challenge::isMatchFilter(challenge, filter) )
            {
              v10 = 0;
            }
            else
            {
              M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challenge->condition_vec)._M_current;
              v12 = std::vector<std::shared_ptr<ChallengeCondition>>::end(&challenge->condition_vec)._M_current;
              std::allocator<std::weak_ptr<ChallengeCondition>>::allocator(&__a);
              std::vector<std::weak_ptr<ChallengeCondition>>::vector<__gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>,void>(
                (std::vector<std::weak_ptr<ChallengeCondition>> *const)(v4 + 160),
                (__gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition>*,std::vector<std::shared_ptr<ChallengeCondition>> >)M_current,
                (__gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition>*,std::vector<std::shared_ptr<ChallengeCondition>> >)v12,
                &__a);
              std::allocator<std::weak_ptr<ChallengeCondition>>::~allocator(&__a);
              __for_range_0 = (std::vector<std::weak_ptr<ChallengeCondition>> *)(v4 + 160);
              __for_begin_0._M_current = std::vector<std::weak_ptr<ChallengeCondition>>::begin((std::vector<std::weak_ptr<ChallengeCondition>> *const)(v4 + 160))._M_current;
              __for_end_0._M_current = std::vector<std::weak_ptr<ChallengeCondition>>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<std::weak_ptr<ChallengeCondition> *,std::vector<std::weak_ptr<ChallengeCondition>>>(
                        &__for_begin_0,
                        &__for_end_0) )
              {
                challenge_condition_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<ChallengeCondition> *,std::vector<std::weak_ptr<ChallengeCondition>>>::operator*(&__for_begin_0);
                std::weak_ptr<ChallengeCondition>::lock((const std::weak_ptr<ChallengeCondition> *const)(v4 + 128));
                if ( std::operator==<ChallengeCondition>((const std::shared_ptr<ChallengeCondition> *)(v4 + 128), 0LL) )
                {
                  v13 = 0;
                }
                else
                {
                  v14 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                  if ( ChallengeCondition::isFinished(v14) )
                  {
                    v13 = 0;
                  }
                  else
                  {
                    v15 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    if ( std::function<ForeachPolicy ()(ChallengeCondition &)>::operator()(func, v15) == FOREACH_BREAK )
                    {
                      v13 = 1;
                    }
                    else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<Challenge>>,unsigned int>(
                                 &this->challenge_map_,
                                 (const unsigned int *)(v4 + 48)) )
                    {
                      v13 = 0;
                    }
                    else
                    {
                      v13 = 2;
                    }
                  }
                }
                std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v4 + 128));
                if ( v13 && v13 != 2 )
                {
                  v16 = 0;
                  goto LABEL_37;
                }
                __gnu_cxx::__normal_iterator<std::weak_ptr<ChallengeCondition> *,std::vector<std::weak_ptr<ChallengeCondition>>>::operator++(&__for_begin_0);
              }
              v16 = 1;
LABEL_37:
              std::vector<std::weak_ptr<ChallengeCondition>>::~vector((std::vector<std::weak_ptr<ChallengeCondition>> *const)(v4 + 160));
              v10 = v16 == 1 ? 2 : 1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/challenge_comp.cpp",
              "foreachUnfinishedChallengeCondition",
              2053);
            common::milog::MiLogStream::operator()(
              &v28,
              "challenge @ index[%u] NOT started.",
              *(unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v28);
            v10 = 0;
          }
        }
      }
      std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v4 + 96));
      if ( v10 )
      {
        if ( v10 != 2 )
          break;
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2086: range 0000000014F1EB90-0000000014F1EDD9
void __cdecl ChallengeComp::foreachUnfinishedChildChallengeCondition(
        ChallengeComp *const this,
        const Challenge *father_challenge,
        const std::function<ForeachPolicy(ChallengeCondition&)> *func)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > *v10; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *child_index; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *_; // [rsp+48h] [rbp-A8h]
  std::vector<unsigned int> p_index_vec; // [rsp+50h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 20 child_index_vec:2087";
  *(_QWORD *)(v3 + 16) = ChallengeComp::foreachUnfinishedChildChallengeCondition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  __for_range = &father_challenge->child_map;
  __for_begin._M_node = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::begin(&father_challenge->child_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::end(&father_challenge->child_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator*(&__for_begin);
    child_index = std::get<0ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v10);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>(v10);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 32), child_index);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::vector(&p_index_vec, (const std::vector<unsigned int> *)(v3 + 32));
  ChallengeComp::foreachUnfinishedChallengeCondition(this, &p_index_vec, func, ALL_0);
  std::vector<unsigned int>::~vector(&p_index_vec);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  if ( v14 == (char *)v3 )
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

// Line 2096: range 0000000014F1EDDA-0000000014F1EFBC
void __cdecl ChallengeComp::fillTriggerInfo(
        const ChallengeComp *const this,
        Challenge *challenge,
        const ScriptContext *script_context)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Group *group; // r14
  std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const TriggerScriptConfig *trigger_config_ptr; // [rsp+28h] [rbp-78h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 trigger_ptr:2097";
  *(_QWORD *)(v3 + 16) = ChallengeComp::fillTriggerInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ScriptContext::getTriggerPtr((const ScriptContext *const)(v3 + 32));
  if ( std::operator!=<Trigger>(0LL, (const std::shared_ptr<Trigger> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::string::operator=(&challenge->trigger_name, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    group = this->group_;
    v8 = std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Trigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    trigger_config_ptr = Group::findTriggerConfig(group, &v8->name);
    if ( trigger_config_ptr )
    {
      std::string::operator=(&challenge->tlog_tag, &trigger_config_ptr->tlog_tag);
      std::string::operator=(&challenge->tag, &trigger_config_ptr->tag);
    }
  }
  std::shared_ptr<Trigger>::~shared_ptr((std::shared_ptr<Trigger> *const)(v3 + 32));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2111: range 0000000014F1F042-0000000014F1F5BE
void __cdecl ChallengeComp::writeChallengeBeginStatLog(
        const ChallengeComp *const this,
        Player *player,
        Challenge *challenge)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  uint32_t GroupId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  uint32_t *v16; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  PlayerAvatarComp *AvatarComp; // r14
  uint32_t param; // [rsp+24h] [rbp-CCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-B0h] BYREF
  std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin> v26; // [rsp+50h] [rbp-A0h] BYREF
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+60h] [rbp-90h] BYREF
  char v28[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 begin_log_ptr:2112";
  *(_QWORD *)(v3 + 16) = ChallengeComp::writeChallengeBeginStatLog;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyChallengeBegin>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  GroupId = Group::getGroupId(this->group_);
  proto_log::PlayerLogBodyChallengeBegin::set_group_id(v6, GroupId);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::PlayerLogBodyChallengeBegin::set_trigger_name(v8, &challenge->trigger_name);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::PlayerLogBodyChallengeBegin::set_tlog_tag(v9, &challenge->tlog_tag);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::PlayerLogBodyChallengeBegin::set_tag(v10, &challenge->tag);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->challenge_id);
  }
  proto_log::PlayerLogBodyChallengeBegin::set_challenge_id(v11, challenge->challenge_id);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_index);
  }
  proto_log::PlayerLogBodyChallengeBegin::set_challenge_index(v12, challenge->challenge_index);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_type >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_type);
  }
  proto_log::PlayerLogBodyChallengeBegin::set_challenge_type(v13, challenge->challenge_type);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->father_index);
  }
  proto_log::PlayerLogBodyChallengeBegin::set_father_index(v14, challenge->father_index);
  __for_range = &challenge->param_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&challenge->param_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&challenge->param_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    param = *v16;
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    proto_log::PlayerLogBodyChallengeBegin::add_param_list(v17, param);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::PlayerLogBodyChallengeBegin::set_trans_no(v18, &challenge->trans_no);
  AvatarComp = Player::getAvatarComp(player);
  std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin>::shared_ptr(
    &v26,
    (const std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin> *)(v3 + 32));
  std::function<ForeachPolicy ()(Avatar &)>::function<ChallengeComp::writeChallengeBeginStatLog(Player &,Challenge &)::{lambda(Avatar &)#1},void,void>(
    &p_func,
    (ChallengeComp::writeChallengeBeginStatLog::<lambda(Avatar&)> *)&v26);
  PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
  ChallengeComp::writeChallengeBeginStatLog(Player &,Challenge &)const::{lambda(Avatar &)#1}::~Avatar((ChallengeComp::writeChallengeBeginStatLog::<lambda(Avatar&)> *const)&v26);
  std::shared_ptr<google::protobuf::Message>::shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v26, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChallengeBegin,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin> *)(v3 + 32));
  Player::printStatLog(player, &p_body_ptr, (MessagePtr *)&v26, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v26);
  std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin> *const)(v3 + 32));
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2126: range 0000000014F1EFBE-0000000014F1F024
ForeachPolicy __cdecl ChallengeComp::writeChallengeBeginStatLog(Player &,Challenge &)const::{lambda(Avatar &)#1}::operator()(
        const ChallengeComp::writeChallengeBeginStatLog::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t AvatarId; // edx
  uint32_t Level; // edx
  proto_log::CombatAvatarLog *combat_avatar_log; // [rsp+18h] [rbp-8h]

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  combat_avatar_log = proto_log::PlayerLogBodyChallengeBegin::add_avatar_log_list(v2);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::CombatAvatarLog::set_avatar_id(combat_avatar_log, AvatarId);
  Level = Creature::getLevel(avatar);
  proto_log::CombatAvatarLog::set_avatar_level(combat_avatar_log, Level);
  return 0;
};

// Line 2126: range 0000000014F5FE30-0000000014F5FE55
void __cdecl ChallengeComp::writeChallengeBeginStatLog(Player &,Challenge &)const::{lambda(Avatar &)#1}::Avatar(
        ChallengeComp::writeChallengeBeginStatLog::<lambda(Avatar&)> *const this,
        ChallengeComp::writeChallengeBeginStatLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin>::shared_ptr(&this->__begin_log_ptr, &a2->__begin_log_ptr);
};

// Line 2126: range 0000000014F5FF20-0000000014F5FF45
void __cdecl ChallengeComp::writeChallengeBeginStatLog(Player &,Challenge &)const::{lambda(Avatar &)#1}::Avatar(
        ChallengeComp::writeChallengeBeginStatLog::<lambda(Avatar&)> *const this,
        const ChallengeComp::writeChallengeBeginStatLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin>::shared_ptr(&this->__begin_log_ptr, &a2->__begin_log_ptr);
};

// Line 2126: range 0000000014F1F026-0000000014F1F040
void __cdecl ChallengeComp::writeChallengeBeginStatLog(Player &,Challenge &)const::{lambda(Avatar &)#1}::~Avatar(
        ChallengeComp::writeChallengeBeginStatLog::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyChallengeBegin>::~shared_ptr(&this->__begin_log_ptr);
};

// Line 2138: range 0000000014F1F5C0-0000000014F1FB86
void __cdecl ChallengeComp::writeChallengeFinishStatLog(
        const ChallengeComp *const this,
        Player *player,
        Challenge *challenge,
        bool is_success,
        uint32_t duration,
        proto_log::PlayerLogBodyChallengeFinish::FinishType reason)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  proto_log::PlayerLogBodyChallengeFinish *v9; // r14
  uint32_t GroupId; // eax
  proto_log::PlayerLogBodyChallengeFinish *v11; // rax
  proto_log::PlayerLogBodyChallengeFinish *v12; // rax
  proto_log::PlayerLogBodyChallengeFinish *v13; // rax
  proto_log::PlayerLogBodyChallengeFinish *v14; // rcx
  proto_log::PlayerLogBodyChallengeFinish *v15; // rcx
  proto_log::PlayerLogBodyChallengeFinish *v16; // rcx
  proto_log::PlayerLogBodyChallengeFinish *v17; // rax
  proto_log::PlayerLogBodyChallengeFinish *v18; // rax
  const std::shared_ptr<ChallengeCondition> *v19; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  proto_log::PlayerLogBodyChallengeFinish *v23; // rax
  proto_log::PlayerLogBodyChallengeFinish *v24; // rax
  proto_log::PlayerLogBodyChallengeFinish *v25; // rax
  uint32_t cond_type; // [rsp+38h] [rbp-C8h]
  uint32_t progress; // [rsp+3Ch] [rbp-C4h]
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+40h] [rbp-C0h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+48h] [rbp-B8h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+50h] [rbp-B0h]
  proto_log::ChallengeCondLog *cond_log; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-A0h] BYREF
  char v37[144]; // [rsp+70h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 16 19 finish_log_ptr:2139 64 16 23 challenge_cond_ptr:2149";
  *(_QWORD *)(v6 + 16) = ChallengeComp::writeChallengeFinishStatLog;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyChallengeFinish>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  GroupId = Group::getGroupId(this->group_);
  proto_log::PlayerLogBodyChallengeFinish::set_group_id(v9, GroupId);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyChallengeFinish::set_trigger_name(v11, &challenge->trigger_name);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyChallengeFinish::set_tlog_tag(v12, &challenge->tlog_tag);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyChallengeFinish::set_tag(v13, &challenge->tag);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->challenge_id);
  }
  proto_log::PlayerLogBodyChallengeFinish::set_challenge_id(v14, challenge->challenge_id);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_index);
  }
  proto_log::PlayerLogBodyChallengeFinish::set_challenge_index(v15, challenge->challenge_index);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challenge + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_type >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&challenge->challenge_type);
  }
  proto_log::PlayerLogBodyChallengeFinish::set_challenge_type(v16, challenge->challenge_type);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyChallengeFinish::set_use_time(v17, duration);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyChallengeFinish::set_is_success(v18, is_success);
  __for_range = &challenge->condition_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challenge->condition_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(&challenge->condition_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
            &__for_begin,
            &__for_end) )
  {
    v19 = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
    std::shared_ptr<ChallengeCondition>::shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v6 + 64), v19);
    if ( std::operator!=<ChallengeCondition>((const std::shared_ptr<ChallengeCondition> *)(v6 + 64), 0LL) )
    {
      v20 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      cond_type = ChallengeCondition::getChallengeCondType(v20);
      v21 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8(v21);
      v22 = *(_QWORD *)v21 + 24LL;
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8(*(_QWORD *)v21 + 24LL);
      progress = (*(__int64 (__fastcall **)(unsigned __int64))v22)(v21);
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
      cond_log = proto_log::PlayerLogBodyChallengeFinish::add_cond_list(v23);
      proto_log::ChallengeCondLog::set_condition_type(cond_log, cond_type);
      proto_log::ChallengeCondLog::set_progress(cond_log, progress);
    }
    std::shared_ptr<ChallengeCondition>::~shared_ptr((std::shared_ptr<ChallengeCondition> *const)(v6 + 64));
    __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
  }
  v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyChallengeFinish::set_trans_no(v24, &challenge->trans_no);
  v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyChallengeFinish::set_reason(v25, reason);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(
    (std::shared_ptr<google::protobuf::Message> *const)(v6 + 64),
    0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChallengeFinish,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyChallengeFinish> *)(v6 + 32));
  Player::printStatLog(player, &p_body_ptr, (MessagePtr *)(v6 + 64), 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v6 + 64));
  std::shared_ptr<proto_log::PlayerLogBodyChallengeFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChallengeFinish> *const)(v6 + 32));
  if ( v37 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2166: range 0000000014F1FB88-0000000014F1FD08
const ChallengeComp *__fastcall ChallengeComp::findChallenge(
        const ChallengeComp *const this,
        const std::map<unsigned int,std::shared_ptr<Challenge>> *challenge_index,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 20 challenge_index:2165 64 8 19 challenge_iter:2167";
  *(_QWORD *)(v3 + 16) = ChallengeComp::findChallenge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                      challenge_index,
                                                                                      (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(challenge_index)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 2176: range 0000000014F1FD0A-0000000014F1FE2D
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Challenge> __cdecl ChallengeComp::findChallengeById(
        const ChallengeComp *const this,
        uint32_t challenge_id)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<Challenge> result; // rax
  uint32_t challenge_ida; // [rsp+Ch] [rbp-44h]
  std::map<unsigned int,std::shared_ptr<Challenge>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Challenge>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,std::shared_ptr<Challenge>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<Challenge> > *v9; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *idx; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *challenge_ptr; // [rsp+48h] [rbp-8h]

  challenge_ida = v2;
  __for_range = *(const std::map<unsigned int,std::shared_ptr<Challenge>> **)&challenge_id;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::begin(*(const std::map<unsigned int,std::shared_ptr<Challenge>> *const *)&challenge_id)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(*(const std::map<unsigned int,std::shared_ptr<Challenge>> *const *)&challenge_id)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator*(&__for_begin);
    idx = std::get<0ul,unsigned int const,std::shared_ptr<Challenge>>(v9);
    challenge_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Challenge> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Challenge>>(v9);
    if ( !std::operator==<Challenge>(0LL, challenge_ptr) )
    {
      v3 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v3->challenge_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v3->challenge_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v3->challenge_id);
      }
      if ( challenge_ida == v3->challenge_id )
      {
        std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)this, challenge_ptr);
        goto LABEL_10;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)this, 0LL);
LABEL_10:
  result._M_ptr = (std::__shared_ptr<Challenge,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2192: range 0000000014F1FE2E-0000000014F200E1
int32_t __cdecl ChallengeComp::setChallengeEventMark(
        ChallengeComp *const this,
        uint32_t challenge_index,
        data::ChallengeEventMarkType mark_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int32_t v6; // r14d
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  const char *v8; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rsi
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 challenge_ptr:2193";
  *(_QWORD *)(v3 + 16) = ChallengeComp::setChallengeEventMark;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ChallengeComp::findChallenge((const ChallengeComp *const)(v3 + 32), &this->challenge_map_, challenge_index);
  if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "setChallengeEventMark",
      2196);
    common::milog::MiLogStream::operator()(&v12, "challenge nullptr @index[%u]", challenge_index);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v7->event_mark >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v7 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->event_mark >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&v7->event_mark);
    }
    v7->event_mark = mark_type;
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "setChallengeEventMark",
      2201);
    v8 = data::enumValToStr(mark_type);
    common::milog::MiLogStream::operator()(&v12, off_25629900, challenge_index, v8);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v9 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    ChallengeComp::tryTriggerMarkedEvent(this, v9, NONE, 0, 1);
    v6 = 0;
  }
  std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 32));
  result = v6;
  if ( v13 == (char *)v3 )
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

// Line 2207: range 0000000014F200E2-0000000014F20AB4
void __fastcall ChallengeComp::tryTriggerMarkedEvent(
        ChallengeComp *const this,
        Challenge *challenge,
        ChallengeFinishReason reason,
        bool is_success,
        bool is_init)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int event_mark; // eax
  std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int *p_limit; // r14
  std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  Player *v33; // rax
  PlayerEventComp *EventComp; // r14
  const data::ChallengeEventMarkType *v35; // [rsp+0h] [rbp-140h]
  bool is_inita; // [rsp+4h] [rbp-13Ch]
  int *v37; // [rsp+8h] [rbp-138h]
  const Challenge *challengea; // [rsp+10h] [rbp-130h]
  ChallengeComp *thisa; // [rsp+18h] [rbp-128h]
  bool need_notify; // [rsp+2Ah] [rbp-116h]
  data::ChallengeEventMarkType GroupId; // [rsp+2Ch] [rbp-114h] BYREF
  bool v42[4]; // [rsp+30h] [rbp-110h] BYREF
  unsigned int __args_0; // [rsp+34h] [rbp-10Ch] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::const_iterator __for_begin; // [rsp+38h] [rbp-108h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::const_iterator __for_end; // [rsp+40h] [rbp-100h] BYREF
  const std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+48h] [rbp-F8h]
  const std::shared_ptr<ChallengeCondition> *challenge_condition_ptr; // [rsp+50h] [rbp-F0h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+58h] [rbp-E8h] BYREF
  std::tuple<unsigned int&,unsigned int&> v49; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-D0h] BYREF
  char v51[176]; // [rsp+90h] [rbp-B0h] BYREF

  HIDWORD(v37) = reason;
  LOBYTE(v37) = is_success;
  BYTE4(v35) = is_init;
  v5 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 1 15 is_success:2206 64 16 14 event_ptr:2209 96 16 15 player_ptr:2260";
  *(_QWORD *)(v5 + 16) = ChallengeComp::tryTriggerMarkedEvent;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  *(_BYTE *)(v5 + 48) = (_BYTE)v37;
  common::milog::MiLogStream::create(
    &v50,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/challenge_comp.cpp",
    "tryTriggerMarkedEvent",
    2208);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  v8 = common::milog::MiLogStream::operator<<<Group,(Group*)0>(&v50, this->group_);
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" challenge:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &challenge->challenge_index);
  v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" mark:");
  v12 = common::milog::MiLogStream::operator<<<data::ChallengeEventMarkType,(data::ChallengeEventMarkType*)0>(
          v11,
          &challenge->event_mark);
  v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" is_succ:");
  common::milog::MiLogStream::operator<<(v13, *(_BYTE *)(v5 + 48));
  common::milog::MiLogStream::~MiLogStream(&v50);
  __args_0 = HIDWORD(v37);
  *(_DWORD *)v42 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  GroupId = Group::getGroupId(this->group_);
  common::tools::perf::make_shared<LuaMarkedChallengeEvent,unsigned int,data::ChallengeEventMarkType const&,int,bool &,unsigned int>(
    (unsigned int *)(v5 + 64),
    &GroupId,
    (int *)&challenge->event_mark,
    v42,
    (unsigned int *)(v5 + 48),
    &__args_0,
    v35,
    v37,
    (bool *)challenge,
    (unsigned int *)this);
  if ( std::operator==<LuaMarkedChallengeEvent>(0LL, (const std::shared_ptr<LuaMarkedChallengeEvent> *)(v5 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/challenge_comp.cpp",
      "tryTriggerMarkedEvent",
      2212);
    common::milog::MiLogStream::operator()(&v50, "make LuaMarkedChallengeEvent ptr failed");
    common::milog::MiLogStream::~MiLogStream(&v50);
    goto LABEL_48;
  }
  need_notify = 1;
  if ( *(_BYTE *)(((unsigned __int64)&challengea->event_mark >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)challengea - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challengea->event_mark >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&challengea->event_mark);
  }
  event_mark = challengea->event_mark;
  if ( event_mark == 4 )
    goto LABEL_24;
  if ( event_mark > 4 )
    goto LABEL_38;
  if ( event_mark == 3 || event_mark == 1 )
  {
    if ( is_inita )
    {
      need_notify = 0;
    }
    else
    {
      v15 = std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( !ChallengeComp::checkAndGetChallengeLeftTime(thisa, challengea, &v15->value) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "tryTriggerMarkedEvent",
          2230);
        if ( *(_BYTE *)(((unsigned __int64)&challengea->challenge_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)challengea + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challengea->challenge_index >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&challengea->challenge_index);
        }
        common::milog::MiLogStream::operator()(
          &v50,
          " challenge @index[%u] NOT time type.",
          challengea->challenge_index);
        common::milog::MiLogStream::~MiLogStream(&v50);
      }
    }
    goto LABEL_39;
  }
  if ( event_mark == 2 )
  {
LABEL_24:
    __for_range = &challengea->condition_vec;
    __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challengea->condition_vec)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>(
              &__for_begin,
              &__for_end) )
    {
      challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
      if ( !std::operator==<ChallengeCondition>(0LL, challenge_condition_ptr) )
      {
        v16 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(v16);
        v17 = *(_QWORD *)v16 + 224LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(*(_QWORD *)v16 + 224LL);
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v17)(v16) == 2 )
        {
          v18 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8(v18);
          v19 = *(_QWORD *)v18 + 200LL;
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8(*(_QWORD *)v18 + 200LL);
          __in = (std::pair<unsigned int,unsigned int>)(*(__int64 (__fastcall **)(unsigned __int64))v19)(v18);
          p_limit = &std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64))->limit;
          v21 = std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          std::tie<unsigned int,unsigned int>((unsigned int *)&v49, &v21->value, p_limit, &v21->value);
          std::tuple<unsigned int &,unsigned int &>::operator=<unsigned int,unsigned int>(&v49, &__in);
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/challenge_comp.cpp",
            "tryTriggerMarkedEvent",
            2246);
          v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v50,
                  (const char (*)[22])"collect value/limit =");
          v23 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v22, (const char (*)[2])"(");
          v24 = std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &v24->value);
          v26 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v25, (const char (*)[2])"/");
          v27 = std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaMarkedChallengeEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v27->limit);
          v29 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v28, (const char (*)[3])") ");
          v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])" init:");
          common::milog::MiLogStream::operator<<(v30, is_inita);
          common::milog::MiLogStream::~MiLogStream(&v50);
        }
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> const*,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
    }
  }
  else
  {
LABEL_38:
    need_notify = 0;
  }
LABEL_39:
  if ( need_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->group_);
    Group::getOwnerPlayer((const Group *const)(v5 + 96));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v5 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "tryTriggerMarkedEvent",
        2263);
      v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v50, (const char (*)[10])"group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->group_);
      __args_0 = Group::getGroupId(thisa->group_);
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &__args_0);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v32, (const char (*)[21])" getOwnerPlayer fail");
      common::milog::MiLogStream::~MiLogStream(&v50);
    }
    else
    {
      v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      EventComp = Player::getEventComp(v33);
      std::shared_ptr<BaseEvent>::shared_ptr<LuaMarkedChallengeEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v49,
        (const std::shared_ptr<LuaMarkedChallengeEvent> *)(v5 + 64));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v49);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v49);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 96));
  }
LABEL_48:
  std::shared_ptr<LuaMarkedChallengeEvent>::~shared_ptr((std::shared_ptr<LuaMarkedChallengeEvent> *const)(v5 + 64));
  if ( v51 == (char *)v5 )
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

// Line 2271: range 0000000014F20AB6-0000000014F20EE8
void __cdecl ChallengeComp::fireChallengeBeginEvent(
        const ChallengeComp *const this,
        const Challenge *challenge,
        const std::string *trans_no)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerEventComp *EventComp; // r14
  const unsigned int *v10; // [rsp-8h] [rbp-138h]
  const unsigned int *v11; // [rsp+0h] [rbp-130h]
  const ChallengeComp *thisa; // [rsp+18h] [rbp-118h]
  std::vector<unsigned int> v14; // [rsp+2Ch] [rbp-104h] BYREF
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 14 event_ptr:2273 64 16 15 player_ptr:2274 96 24 13 uid_list:2272";
  *(_QWORD *)(v3 + 16) = ChallengeComp::fireChallengeBeginEvent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,int>>(
    (std::vector<unsigned int> *)(v3 + 96),
    &this->group_->viewing_uid_map_);
  LODWORD(v14._M_impl._M_start) = Group::getGroupId(this->group_);
  common::tools::perf::make_shared<ChallengeBeginEvent,unsigned int const&,unsigned int const&,unsigned int const&,unsigned int,std::vector<unsigned int> &,std::string const&>(
    (const unsigned int *)&v14._M_impl._M_start + 1,
    &challenge->challenge_index,
    &challenge->challenge_id,
    &challenge->father_index,
    &v14,
    (const std::string *)(v3 + 96),
    (const unsigned int *)trans_no,
    v10,
    v11,
    (unsigned int *)trans_no,
    (std::vector<unsigned int> *)challenge,
    (const std::string *)this);
  std::shared_ptr<BaseEvent>::shared_ptr<ChallengeBeginEvent,void>(
    (std::shared_ptr<BaseEvent> *const)(v3 + 32),
    (std::shared_ptr<ChallengeBeginEvent> *)((char *)&v14._M_impl._M_start + 4));
  std::shared_ptr<ChallengeBeginEvent>::~shared_ptr((std::shared_ptr<ChallengeBeginEvent> *const)((char *)&v14._M_impl._M_start
                                                                                                + 4));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->group_);
  Group::getOwnerPlayer((const Group *const)(v3 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)((char *)&v14._M_impl._M_end_of_storage + 4),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "fireChallengeBeginEvent",
      2277);
    v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
           (common::milog::MiLogStream *const)((char *)&v14._M_impl._M_end_of_storage + 4),
           (const char (*)[10])"group_id:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->group_);
    LODWORD(v14._M_impl._M_start) = Group::getGroupId(thisa->group_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)&v14);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" getOwnerPlayer fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)((char *)&v14._M_impl._M_end_of_storage
                                                                               + 4));
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    EventComp = Player::getEventComp(v8);
    std::shared_ptr<BaseEvent>::shared_ptr(
      (std::shared_ptr<BaseEvent> *const)((char *)&v14._M_impl._M_start + 4),
      (const std::shared_ptr<BaseEvent> *)(v3 + 32));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)((char *)&v14._M_impl._M_start + 4));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)((char *)&v14._M_impl._M_start + 4));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 32));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  if ( v15 == (char *)v3 )
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
};

// Line 2285: range 0000000014F20EEA-0000000014F210C9
void __cdecl ChallengeComp::getDungeonStrengthenDataOnChallengeFinish(
        const ChallengeComp *const this,
        Player *player,
        bool is_success,
        proto::DungeonChallengeFinishNotify *challenge_finish_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PlayerMpComp *MpComp; // rax
  DungeonScene *v9; // r14
  google::protobuf::Map<unsigned int,proto::StrengthenPointData> *v10; // rdx
  std::shared_ptr<Scene> v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 22 dungeon_scene_ptr:2290";
  *(_QWORD *)(v4 + 16) = ChallengeComp::getDungeonStrengthenDataOnChallengeFinish;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( !is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    Group::getScene((const Group *const)&v13);
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 32));
    std::shared_ptr<Scene>::~shared_ptr(&v13);
    if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 32)) )
    {
      MpComp = Player::getMpComp(player);
      if ( !PlayerMpComp::isInMpMode(MpComp) )
      {
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v10 = proto::DungeonChallengeFinishNotify::mutable_strengthen_point_data_map(challenge_finish_notify);
        DungeonScene::getDungeonStrengthenPointData(v9, player, v10);
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 32));
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2299: range 0000000014F2113A-0000000014F21A38
void __cdecl ChallengeComp::onChallengeBegin(
        ChallengeComp *const this,
        Challenge *challenge,
        Player *owner_player,
        bool check_on_begin)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Scene *v7; // r15
  uint32_t challenge_index; // r14d
  uint32_t GroupId; // esi
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  ChallengeComp::onChallengeBegin::<lambda(ChallengeCondition&)> v14; // si
  DungeonScene *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::string v21; // [rsp+0h] [rbp-220h]
  char *v22; // [rsp+8h] [rbp-218h]
  bool check_on_begina; // [rsp+14h] [rbp-20Ch]
  Player *owner_playera; // [rsp+18h] [rbp-208h]
  unsigned int __x; // [rsp+3Ch] [rbp-1E4h] BYREF
  std::shared_ptr<Scene> v27; // [rsp+40h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-1D0h] BYREF
  std::string val; // [rsp+70h] [rbp-1B0h] BYREF
  char v30[400]; // [rsp+90h] [rbp-190h] BYREF

  *(&v21._anon_0._M_allocated_capacity + 1) = (std::string::size_type)owner_player;
  v21._anon_0._M_local_buf[4] = check_on_begin;
  v4 = (unsigned __int64)v30;
  v21._M_string_length = (std::string::size_type)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 1 11 holder:2308 64 4 24 challenge_left_time:2329 80 8 19 challenge_pair:2333 112 16 14 sce"
                        "ne_ptr:2301 144 16 22 dungeon_scene_ptr:2326 176 32 13 trans_no:2307 240 80 27 challenge_begin_notify:2310";
  *(_QWORD *)(v4 + 16) = ChallengeComp::onChallengeBegin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getScene((const Group *const)(v4 + 112));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 112), 0LL) )
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&challenge->challenge_index);
    }
    challenge_index = challenge->challenge_index;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&challenge->challenge_id);
    }
    Scene::addOnGoingChallenge(v7, challenge->challenge_id, GroupId, challenge_index);
  }
  BasicComp = Player::getBasicComp(*((Player *const *)&v21._anon_0._M_allocated_capacity + 1));
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v4 + 176), BasicComp);
  std::string::basic_string(&val, v4 + 176);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x7D1u, v21);
  std::string::~string(&val);
  proto::DungeonChallengeBeginNotify::DungeonChallengeBeginNotify((proto::DungeonChallengeBeginNotify *const)(v4 + 240));
  ChallengeComp::fillBeginNotify(this, (proto::DungeonChallengeBeginNotify *)(v4 + 240), challenge);
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/challenge_comp.cpp",
    "onChallengeBegin",
    2312);
  v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v28,
          (const char (*)[24])"challenge_begin_notify:");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v4 + 240));
  v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
  v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])"\n uid set: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v13, &challenge->uid_set);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v28);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::notifyAllPlayerInSet<proto::DungeonChallengeBeginNotify>(
    this->group_,
    (proto::DungeonChallengeBeginNotify *)(v4 + 240),
    &challenge->uid_set);
  ChallengeComp::notifyChallengeData(this, challenge);
  ChallengeComp::recordToViewingPlayersOnChallengeBegin(this, challenge);
  ChallengeComp::fireChallengeBeginEvent(this, challenge, (const std::string *)(v4 + 176));
  ChallengeComp::initChallengeAbilityGroup(this, challenge);
  ChallengeComp::writeChallengeBeginStatLog(this, owner_playera, challenge);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getScene((const Group *const)&v27);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 144));
  std::shared_ptr<Scene>::~shared_ptr(&v27);
  v14.gap0[0] = 0;
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 144), 0LL) )
  {
    *(_DWORD *)(v4 + 64) = 0;
    v14.gap0[0] = (char)challenge;
    if ( ChallengeComp::checkAndGetChallengeLeftTime(this, challenge, (uint32_t *)(v4 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      __x = Group::getGroupId(this->group_);
      *(std::pair<unsigned int,unsigned int> *)(v4 + 80) = std::make_pair<unsigned int,unsigned int &>(
                                                             &__x,
                                                             &challenge->challenge_index);
      v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      DungeonScene::setChallengeLeftTime(
        v15,
        (const std::pair<unsigned int,unsigned int> *)(v4 + 80),
        *(_DWORD *)(v4 + 64));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/challenge_comp.cpp",
        "onChallengeBegin",
        2335);
      v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[32])" set init challenge left_time: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" index:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &challenge->challenge_index);
      v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" group:");
      v14.gap0[0] = v4 + 80;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
  }
  if ( check_on_begina )
  {
    std::function<ForeachPolicy ()(ChallengeCondition &)>::function<ChallengeComp::onChallengeBegin(Challenge &,Player &,bool)::{lambda(ChallengeCondition &)#1},void,void>(
      (std::function<ForeachPolicy(ChallengeCondition&)> *const)&val,
      v14);
    ChallengeComp::foreachUnfinishedChallengeCondition(
      this,
      (const std::function<ForeachPolicy(ChallengeCondition&)> *)&val,
      ALL_0);
    std::function<ForeachPolicy ()(ChallengeCondition &)>::~function((std::function<ForeachPolicy(ChallengeCondition&)> *const)&val);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 144));
  proto::DungeonChallengeBeginNotify::~DungeonChallengeBeginNotify((proto::DungeonChallengeBeginNotify *const)(v4 + 240));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  std::string::~string((void *)(v4 + 176));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 112));
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 2344: range 0000000014F210CA-0000000014F21138
ForeachPolicy __cdecl ChallengeComp::onChallengeBegin(Challenge &,Player &,bool)::{lambda(ChallengeCondition &)#1}::operator()(
        const ChallengeComp::onChallengeBegin::<lambda(ChallengeCondition&)> *const __closure,
        ChallengeCondition *challenge_condition)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)challenge_condition >> 3) + 0x7FFF8000) )
    __asan_report_load8(challenge_condition);
  v2 = (unsigned __int64)(challenge_condition->_vptr_ChallengeCondition + 16);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(challenge_condition->_vptr_ChallengeCondition + 16);
  (*(void (__fastcall **)(ChallengeCondition *))v2)(challenge_condition);
  return 0;
};

// Line 2352: range 0000000014F21A9A-0000000014F21EA6
void __cdecl ChallengeComp::flushExhibitionTemporaryDataOnChallengeFinish(
        ChallengeComp *const this,
        Challenge *challenge)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  ExhibitionTemporaryData *v6; // r14
  Scene *v7; // rax
  std::function<void(Player&)> func; // [rsp+10h] [rbp-110h] BYREF
  char v9[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 34 exhibition_temporary_data_ptr:2357 80 16 14 scene_ptr:2367 112 48 19 player_uid_set:2362";
  *(_QWORD *)(v2 + 16) = ChallengeComp::flushExhibitionTemporaryDataOnChallengeFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&challenge->is_success);
  }
  if ( challenge->is_success )
  {
    std::shared_ptr<ExhibitionTemporaryData>::shared_ptr(
      (std::shared_ptr<ExhibitionTemporaryData> *const)(v2 + 48),
      &challenge->exhibition_temporary_data_ptr);
    if ( !std::operator==<ExhibitionTemporaryData>(0LL, (const std::shared_ptr<ExhibitionTemporaryData> *)(v2 + 48)) )
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
      std::function<void ()(Player &)>::function<ChallengeComp::flushExhibitionTemporaryDataOnChallengeFinish(Challenge &)::{lambda(Player &)#1},void,void>(
        &func,
        (ChallengeComp::flushExhibitionTemporaryDataOnChallengeFinish::<lambda(Player&)>)(v2 + 112));
      ChallengeComp::foreachViewingChallengePlayers(this, &challenge->uid_set, &func);
      std::function<void ()(Player &)>::~function(&func);
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      Group::getScene((const Group *const)(v2 + 80));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&func,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/challenge_comp.cpp",
          "flushExhibitionTemporaryDataOnChallengeFinish",
          2370);
        v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               (common::milog::MiLogStream *const)&func,
               (const char (*)[22])"scene is null, group:");
        if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->group_);
        operator<<(v5, this->group_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&func);
      }
      else
      {
        v6 = std::__shared_ptr_access<ExhibitionTemporaryData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ExhibitionTemporaryData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        ExhibitionTemporaryData::flushTemporaryData(v6, v7, (std::set<unsigned int> *)(v2 + 112));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
    }
    std::shared_ptr<ExhibitionTemporaryData>::~shared_ptr((std::shared_ptr<ExhibitionTemporaryData> *const)(v2 + 48));
  }
  if ( v9 == (char *)v2 )
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
};

// Line 2363: range 0000000014F21A3A-0000000014F21A98
void __cdecl ChallengeComp::flushExhibitionTemporaryDataOnChallengeFinish(Challenge &)::{lambda(Player &)#1}::operator()(
        const ChallengeComp::flushExhibitionTemporaryDataOnChallengeFinish::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::set<unsigned int> *player_uid_set; // rbx
  std::set<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  player_uid_set = __closure->__player_uid_set;
  __x[0] = Player::getUid(player);
  std::set<unsigned int>::insert(player_uid_set, __x);
};

// Line 2377: range 0000000014F21EA8-0000000014F2239A
uint32_t __cdecl ChallengeComp::getFatherTimeProgress(const ChallengeComp *const this, const Challenge *challenge)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // r14d
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  uint32_t result; // eax
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::shared_ptr<ChallengeCondition> *challenge_condition_ptr; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 father_ptr:2378";
  *(_QWORD *)(v2 + 16) = ChallengeComp::getFatherTimeProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->father_index);
  }
  ChallengeComp::findChallenge((const ChallengeComp *const)(v2 + 32), &this->challenge_map_, challenge->father_index);
  if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "getFatherTimeProgress",
      2381);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"challenge_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &challenge->father_index);
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" nullptr");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v8->start_time);
    }
    if ( v8->start_time )
    {
      __for_range = &std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
        if ( !std::operator==<ChallengeCondition>(0LL, challenge_condition_ptr) )
        {
          v9 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
          if ( ChallengeCondition::challengeCondType(v9) == CHALLENGE_COND_IN_TIME )
          {
            v10 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
            if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
              v10 = __asan_report_load8(v10);
            v11 = *(_QWORD *)v10 + 24LL;
            if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
              v10 = __asan_report_load8(*(_QWORD *)v10 + 24LL);
            v7 = (*(__int64 (__fastcall **)(unsigned __int64))v11)(v10);
            goto LABEL_27;
          }
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "getFatherTimeProgress",
        2403);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge->father_index);
      }
      common::milog::MiLogStream::operator()(
        &v17,
        "CHALLENGE_COND_IN_TIME not found for challenge @index[%u].",
        challenge->father_index);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "getFatherTimeProgress",
        2387);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge->father_index);
      }
      common::milog::MiLogStream::operator()(&v17, "challenge @index[%u] NOT started.", challenge->father_index);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = 0;
    }
  }
LABEL_27:
  std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 32));
  result = v7;
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

// Line 2408: range 0000000014F2239C-0000000014F22891
uint32_t __cdecl ChallengeComp::getFatherTimestamp(const ChallengeComp *const this, const Challenge *challenge)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // r14d
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  uint32_t result; // eax
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::shared_ptr<ChallengeCondition> *challenge_condition_ptr; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 father_ptr:2409";
  *(_QWORD *)(v2 + 16) = ChallengeComp::getFatherTimestamp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->father_index);
  }
  ChallengeComp::findChallenge((const ChallengeComp *const)(v2 + 32), &this->challenge_map_, challenge->father_index);
  if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "getFatherTimestamp",
      2412);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"challenge_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &challenge->father_index);
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" nullptr");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v8->start_time);
    }
    if ( v8->start_time )
    {
      __for_range = &std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
        if ( !std::operator==<ChallengeCondition>(0LL, challenge_condition_ptr) )
        {
          v9 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
          if ( ChallengeCondition::challengeCondType(v9) == CHALLENGE_COND_IN_TIME )
          {
            v10 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
            if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
              v10 = __asan_report_load8(v10);
            v11 = *(_QWORD *)v10 + 208LL;
            if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
              v10 = __asan_report_load8(*(_QWORD *)v10 + 208LL);
            v7 = (*(__int64 (__fastcall **)(unsigned __int64))v11)(v10);
            goto LABEL_27;
          }
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "getFatherTimestamp",
        2434);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge->father_index);
      }
      common::milog::MiLogStream::operator()(
        &v17,
        "CHALLENGE_COND_IN_TIME not found for challenge @index[%u].",
        challenge->father_index);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "getFatherTimestamp",
        2418);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge->father_index);
      }
      common::milog::MiLogStream::operator()(&v17, "challenge @index[%u] NOT started.", challenge->father_index);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = 0;
    }
  }
LABEL_27:
  std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 32));
  result = v7;
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

// Line 2439: range 0000000014F22892-0000000014F22D6C
void __cdecl ChallengeComp::relaxFatherTimeRestriction(
        ChallengeComp *const this,
        const Challenge *challenge,
        uint32_t relax_secs,
        const ChallengeRelaxTimeType *relax_time_type,
        bool can_exceed_limit)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+30h] [rbp-90h]
  const std::shared_ptr<ChallengeCondition> *challenge_condition_ptr; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-80h] BYREF
  char v22[96]; // [rsp+60h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 15 father_ptr:2440";
  *(_QWORD *)(v5 + 16) = ChallengeComp::relaxFatherTimeRestriction;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->father_index);
  }
  ChallengeComp::findChallenge((const ChallengeComp *const)(v5 + 32), &this->challenge_map_, challenge->father_index);
  if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v5 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/challenge_comp.cpp",
      "relaxFatherTimeRestriction",
      2443);
    v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v21, (const char (*)[17])"challenge_index:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &challenge->father_index);
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" nullptr");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    v10 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v10->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v10->start_time);
    }
    if ( v10->start_time )
    {
      __for_range = &std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32))->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
        if ( !std::operator==<ChallengeCondition>(0LL, challenge_condition_ptr) )
        {
          v11 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
          if ( ChallengeCondition::challengeCondType(v11) == CHALLENGE_COND_IN_TIME )
          {
            v12 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
            if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
              v12 = __asan_report_load8(v12);
            v13 = *(_QWORD *)v12 + 56LL;
            if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
              v12 = __asan_report_load8(*(_QWORD *)v12 + 56LL);
            (*(void (__fastcall **)(unsigned __int64, _QWORD, const ChallengeRelaxTimeType *, bool))v13)(
              v12,
              relax_secs,
              relax_time_type,
              can_exceed_limit);
            goto LABEL_27;
          }
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "relaxFatherTimeRestriction",
        2466);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge->father_index);
      }
      common::milog::MiLogStream::operator()(
        &v21,
        "CHALLENGE_COND_IN_TIME not found for challenge @index[%u].",
        challenge->father_index);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "relaxFatherTimeRestriction",
        2449);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge->father_index);
      }
      common::milog::MiLogStream::operator()(&v21, "challenge @index[%u] NOT started.", challenge->father_index);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
  }
LABEL_27:
  std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v5 + 32));
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2471: range 0000000014F22D6E-0000000014F23369
std::tuple<long unsigned int,long unsigned int,long unsigned int> *__cdecl ChallengeComp::getFatherTimeInfo(
        std::tuple<long unsigned int,long unsigned int,long unsigned int> *retstr,
        const ChallengeComp *const this,
        const Challenge *challenge)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::tuple<long unsigned int,long unsigned int,long unsigned int> *, std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r8
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::shared_ptr<ChallengeCondition> *challenge_condition_ptr; // [rsp+38h] [rbp-C8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 15 father_ptr:2473 64 24 8 res:2472";
  *(_QWORD *)(v3 + 16) = ChallengeComp::getFatherTimeInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->father_index);
  }
  ChallengeComp::findChallenge((const ChallengeComp *const)(v3 + 32), &this->challenge_map_, challenge->father_index);
  if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "getFatherTimeInfo",
      2476);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"challenge_index:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &challenge->father_index);
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" nullptr");
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::tuple<unsigned long,unsigned long,unsigned long>::tuple(
      retstr,
      (std::tuple<long unsigned int,long unsigned int,long unsigned int> *)(v3 + 64));
  }
  else
  {
    v8 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v8->start_time);
    }
    if ( v8->start_time )
    {
      __for_range = &std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
        if ( !std::operator==<ChallengeCondition>(0LL, challenge_condition_ptr) )
        {
          v9 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
          if ( ChallengeCondition::challengeCondType(v9) == CHALLENGE_COND_IN_TIME )
          {
            v10 = std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v10);
            v12 = (unsigned __int64)(v11->_vptr_ChallengeCondition + 27);
            if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
              v12 = __asan_report_load8(v11->_vptr_ChallengeCondition + 27);
            v13 = *(void (__fastcall **)(std::tuple<long unsigned int,long unsigned int,long unsigned int> *, std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12;
            if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&retstr->std::_Tuple_impl<0,long unsigned int,long unsigned int,long unsigned int>::std::_Head_base<0,long unsigned int,false>::_M_head_impl
                            + 7) >> 3)
                          + 0x7FFF8000) != 0
              && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Tuple_impl<0,long unsigned int,long unsigned int,long unsigned int>::std::_Head_base<0,long unsigned int,false>::_M_head_impl
                                                                    + 7) >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_store_n(retstr, 24LL);
            }
            v13(retstr, v11);
            goto LABEL_29;
          }
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "getFatherTimeInfo",
        2498);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge->father_index);
      }
      common::milog::MiLogStream::operator()(
        &v20,
        "CHALLENGE_COND_IN_TIME not found for challenge @index[%u].",
        challenge->father_index);
      common::milog::MiLogStream::~MiLogStream(&v20);
      std::tuple<unsigned long,unsigned long,unsigned long>::tuple(
        retstr,
        (std::tuple<long unsigned int,long unsigned int,long unsigned int> *)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "getFatherTimeInfo",
        2482);
      if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge->father_index);
      }
      common::milog::MiLogStream::operator()(&v20, "challenge @index[%u] NOT started.", challenge->father_index);
      common::milog::MiLogStream::~MiLogStream(&v20);
      std::tuple<unsigned long,unsigned long,unsigned long>::tuple(
        retstr,
        (std::tuple<long unsigned int,long unsigned int,long unsigned int> *)(v3 + 64));
    }
  }
LABEL_29:
  std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 32));
  if ( v21 == (char *)v3 )
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
  return retstr;
};

// Line 2503: range 0000000014F233C0-0000000014F23432
void __cdecl ChallengeComp::recordToViewingPlayersOnChallengeBegin(
        const ChallengeComp *const this,
        Challenge *challenge)
{
  std::function<void(Player&)> func; // [rsp+10h] [rbp-30h] BYREF

  std::function<void ()(Player &)>::function<ChallengeComp::recordToViewingPlayersOnChallengeBegin(Challenge &)::{lambda(Player &)#1},void,void>(
    &func,
    (ChallengeComp::recordToViewingPlayersOnChallengeBegin::<lambda(Player&)>)challenge);
  ChallengeComp::foreachViewingChallengePlayers(this, &challenge->uid_set, &func);
  std::function<void ()(Player &)>::~function(&func);
};

// Line 2504: range 0000000014F2336A-0000000014F233BE
void __cdecl ChallengeComp::recordToViewingPlayersOnChallengeBegin(Challenge &)const::{lambda(Player &)#1}::operator()(
        const ChallengeComp::recordToViewingPlayersOnChallengeBegin::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerSceneComp *SceneComp; // rcx

  SceneComp = Player::getSceneComp(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  PlayerSceneComp::onChallengeBegin(SceneComp, __closure->__challenge);
};

// Line 2511: range 0000000014F2348A-0000000014F234FC
void __cdecl ChallengeComp::recordToViewingPlayersOnChallengeEnd(const ChallengeComp *const this, Challenge *challenge)
{
  std::function<void(Player&)> func; // [rsp+10h] [rbp-30h] BYREF

  std::function<void ()(Player &)>::function<ChallengeComp::recordToViewingPlayersOnChallengeEnd(Challenge &)::{lambda(Player &)#1},void,void>(
    &func,
    (ChallengeComp::recordToViewingPlayersOnChallengeEnd::<lambda(Player&)>)challenge);
  ChallengeComp::foreachViewingChallengePlayers(this, &challenge->uid_set, &func);
  std::function<void ()(Player &)>::~function(&func);
};

// Line 2512: range 0000000014F23434-0000000014F23488
void __cdecl ChallengeComp::recordToViewingPlayersOnChallengeEnd(Challenge &)const::{lambda(Player &)#1}::operator()(
        const ChallengeComp::recordToViewingPlayersOnChallengeEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerSceneComp *SceneComp; // rcx

  SceneComp = Player::getSceneComp(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  PlayerSceneComp::onChallengeEnd(SceneComp, __closure->__challenge);
};

// Line 2519: range 0000000014F234FE-0000000014F237DE
void __cdecl ChallengeComp::foreachViewingChallengePlayers(
        const ChallengeComp *const this,
        const std::unordered_set<unsigned int> *uid_set,
        const std::function<void(Player&)> *func)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  GameserverService *v9; // rax
  unsigned int GameThreadLocal; // eax
  Player *v11; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  std::vector<unsigned int> v16; // [rsp+40h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 uid:2520 64 16 15 player_ptr:2526";
  *(_QWORD *)(v3 + 16) = ChallengeComp::foreachViewingChallengePlayers;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getViewingPlayerUids(&v16, this->group_);
  __for_range = &v16;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v16)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v16)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    if ( std::unordered_set<unsigned int>::empty(uid_set)
      || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           uid_set,
           (const unsigned int *)(v3 + 48)) )
    {
      v9 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v9);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 64), GameThreadLocal + 16);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      {
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        std::function<void ()(Player &)>::operator()(func, v11);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v16);
  if ( v17 == (char *)v3 )
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

// Line 2535: range 0000000014F237E0-0000000014F23F52
void __cdecl ChallengeComp::onGroupExitPlayerView(
        ChallengeComp *const this,
        Player *player,
        uint32_t cur_group_viewing_uid_size)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v12; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  bool *p_is_settle_related_player_exit_as_child; // rax
  Challenge *v16; // r14
  uint32_t Uid; // eax
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  bool is_need_clear; // [rsp+2Bh] [rbp-175h]
  unsigned int val; // [rsp+2Ch] [rbp-174h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+40h] [rbp-160h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-150h] BYREF
  char v30[304]; // [rsp+70h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 20 challenge_index:2569 64 8 9 iter:2571 96 16 14 scene_ptr:2540 128 16 22 dungeon_scene_"
                        "ptr:2541 160 16 19 dest_scene_ptr:2548 192 24 24 challenge_index_vec:2568";
  *(_QWORD *)(v3 + 16) = ChallengeComp::onGroupExitPlayerView;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( cur_group_viewing_uid_size == 1 )
  {
    is_need_clear = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    Group::getScene((const Group *const)(v3 + 96));
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 128));
    if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 128), 0LL) )
    {
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( DungeonScene::getDungeonType(v6) == DUNGEON_EFFIGY
        || (v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
            DungeonScene::getDungeonType(v7) == DUNGEON_CHAR_AMUSEMENT) )
      {
        Player::getSceneComp(player);
        PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 160));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160))
          || std::operator==<Scene,Scene>(
               (const std::shared_ptr<Scene> *)(v3 + 160),
               (const std::shared_ptr<Scene> *)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/challenge_comp.cpp",
            "onGroupExitPlayerView",
            2551);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v29,
            (const char (*)[28])"in dungeon onExitPlayerView");
          common::milog::MiLogStream::~MiLogStream(&v29);
          is_need_clear = 0;
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
      }
    }
    if ( is_need_clear )
    {
      ChallengeComp::clear(this, EXIT_VIEW);
    }
    else
    {
      toPtr<Player,Player>((Player *)(v3 + 160));
      ChallengeComp::notifyOnGuestExit(this, (PlayerPtr *)(v3 + 160));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 128));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  }
  else
  {
    common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,std::shared_ptr<Challenge>>>(
      (std::vector<unsigned int> *)(v3 + 192),
      &this->challenge_map_);
    __for_range = (std::vector<unsigned int> *)(v3 + 192);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 192))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 192))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v3 + 48) = *v11;
      *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                    &this->challenge_map_,
                                                                                    (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v3 + 48));
      __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v3 + 64),
             &__y) )
      {
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v3 + 64));
        std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 160), &v12->second);
        if ( !std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 160)) )
        {
          v13 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( !Challenge::isChild(v13) )
            goto LABEL_36;
          v14 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          p_is_settle_related_player_exit_as_child = &v14->is_settle_related_player_exit_as_child_;
          if ( *(_BYTE *)(((unsigned __int64)p_is_settle_related_player_exit_as_child >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_settle_related_player_exit_as_child & 7) >= *(_BYTE *)(((unsigned __int64)p_is_settle_related_player_exit_as_child >> 3)
                                                                                           + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_settle_related_player_exit_as_child);
          }
          if ( v14->is_settle_related_player_exit_as_child_
            && (v16 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160)),
                Uid = Player::getUid(player),
                Challenge::isLastViewingRelatedPlayer(v16, Uid)) )
          {
            v18 = 1;
          }
          else
          {
LABEL_36:
            v18 = 0;
          }
          if ( v18 )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/challenge_comp.cpp",
              "onGroupExitPlayerView",
              2582);
            v19 = common::milog::MiLogStream::operator<<<char [92],(char *[92])0>(
                    &v29,
                    (const char (*)[92])"player is last related player in this challenge, settle when he exit view, challenge_index:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 48));
            v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])", uid:");
            val = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            common::milog::MiLogStream::~MiLogStream(&v29);
            ChallengeComp::finishChallenge(this, *(_DWORD *)(v3 + 48), 0, 0, 4, 0);
          }
        }
        std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 160));
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    toPtr<Player,Player>((Player *)(v3 + 160));
    ChallengeComp::notifyOnGuestExit(this, (PlayerPtr *)(v3 + 160));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
  }
  if ( v30 == (char *)v3 )
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

// Line 2592: range 0000000014F23F54-0000000014F23F9D
void __cdecl ChallengeComp::finishChallengeByGm(ChallengeComp *const this, uint32_t challenge_index, bool is_success)
{
  ChallengeComp::finishChallenge(this, challenge_index, is_success, 0, !is_success, 0);
};

// Line 2597: range 0000000014F23F9E-0000000014F243CB
__int64 __fastcall ChallengeComp::isChallengeOnGoing(ChallengeComp *const this, uint32_t challenge_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::pointer v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 challenge_index:2596 64 8 9 iter:2598 96 16 18 challenge_ptr:2604";
  *(_QWORD *)(v2 + 16) = ChallengeComp::isChallengeOnGoing;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = challenge_index;
  *(std::map<unsigned int,std::shared_ptr<Challenge>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Challenge>>::find(
                                                                                &this->challenge_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<Challenge>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Challenge>>::end(&this->challenge_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/challenge_comp.cpp",
      "isChallengeOnGoing",
      2601);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v18,
           (const char (*)[38])"challenge not found. challenge_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    operator<<(v7, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v8 = 0;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Challenge> > > *const)(v2 + 64));
    std::shared_ptr<Challenge>::shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 96), &v9->second);
    if ( std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/challenge_comp.cpp",
        "isChallengeOnGoing",
        2607);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v18,
              (const char (*)[29])"challenge nullptr, group_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->group_);
      val = Group::getGroupId(this->group_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v11,
              (const char (*)[18])" challenge_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      v8 = 0;
    }
    else
    {
      v13 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(char *)(((unsigned __int64)&v13->finished >> 3) + 0x7FFF8000) < 0 )
        v13 = (std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v13->finished);
      if ( v13->finished )
        goto LABEL_19;
      v14 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v14->start_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->start_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v14->start_time);
      }
      if ( v14->start_time )
        v8 = 1;
      else
LABEL_19:
        v8 = 0;
    }
    std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 96));
  }
  result = v8;
  if ( v19 == (char *)v2 )
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

// Line 2614: range 0000000014F243CC-0000000014F2455F
void __cdecl ChallengeComp::delFinishedChallengeInScene(
        ChallengeComp *const this,
        uint32_t challenge_id,
        uint32_t challenge_index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  Scene *v6; // r14
  uint32_t GroupId; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 scene_ptr:2616";
  *(_QWORD *)(v3 + 16) = ChallengeComp::delFinishedChallengeInScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  Group::getScene((const Group *const)(v3 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->group_);
    GroupId = Group::getGroupId(this->group_);
    Scene::delOnGoingChallenge(v6, challenge_id, GroupId, challenge_index);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
