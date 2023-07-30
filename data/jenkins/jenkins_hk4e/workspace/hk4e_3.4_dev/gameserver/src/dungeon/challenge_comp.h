// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/challenge_comp.h

// Line 60: range 00000000150438E6-00000000150439D0
void __cdecl Challenge::~Challenge(Challenge *const this)
{
  std::shared_ptr<ExhibitionTemporaryData>::~shared_ptr(&this->exhibition_temporary_data_ptr);
  std::vector<std::string>::~vector(&this->team_ability_group_vec);
  std::vector<std::string>::~vector(&this->ability_group_vec);
  std::string::~string(&this->trans_no);
  std::vector<unsigned int>::~vector(&this->param_vec);
  std::unordered_set<unsigned int>::~unordered_set(&this->uid_set);
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::~map(&this->child_map);
  std::string::~string(&this->tag);
  std::string::~string(&this->tlog_tag);
  std::string::~string(&this->trigger_name);
  google::protobuf::RepeatedField<unsigned int>::~RepeatedField(&this->initial_param_list);
  std::vector<std::shared_ptr<ChallengeCondition>>::~vector(&this->condition_vec);
  std::enable_shared_from_this<Challenge>::~enable_shared_from_this(this);
};

// Line 93: range 0000000014F775DE-0000000014F77AE4
void __cdecl Challenge::Challenge(
        Challenge *const this,
        Group *group,
        uint32_t challenge_index,
        uint32_t challenge_id,
        data::ChallengeType challenge_type,
        uint32_t father_index)
{
  std::enable_shared_from_this<Challenge>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->group_);
  this->group_ = group;
  if ( *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->father_index);
  }
  this->father_index = father_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_index);
  }
  this->challenge_index = challenge_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_type);
  }
  this->challenge_type = challenge_type;
  if ( *(char *)(((unsigned __int64)&this->finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->finished);
  this->finished = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_success);
  }
  this->is_success = 0;
  std::vector<std::shared_ptr<ChallengeCondition>>::vector(&this->condition_vec);
  google::protobuf::RepeatedField<unsigned int>::RepeatedField(&this->initial_param_list);
  std::string::basic_string(&this->trigger_name);
  std::string::basic_string(&this->tlog_tag);
  std::string::basic_string(&this->tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time);
  }
  this->start_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_scene_time_ms);
  this->start_scene_time_ms = 0LL;
  std::map<unsigned int,std::tuple<unsigned int,unsigned int,bool,bool,unsigned int>>::map(&this->child_map);
  std::unordered_set<unsigned int>::unordered_set(&this->uid_set);
  std::vector<unsigned int>::vector(&this->param_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->succ_points_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->succ_points_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->succ_points_);
  }
  this->succ_points_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fail_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fail_points_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fail_points_);
  }
  this->fail_points_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_fail_on_wipe >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_fail_on_wipe);
  this->is_fail_on_wipe = 0;
  std::string::basic_string(&this->trans_no);
  if ( *(char *)(((unsigned __int64)&this->is_hide_unrelated_player_as_father_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_hide_unrelated_player_as_father_);
  this->is_hide_unrelated_player_as_father_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_settle_related_player_exit_as_child_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settle_related_player_exit_as_child_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_settle_related_player_exit_as_child_);
  }
  this->is_settle_related_player_exit_as_child_ = 0;
  std::vector<std::string>::vector(&this->ability_group_vec);
  std::vector<std::string>::vector(&this->team_ability_group_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_reason);
  }
  this->finish_reason = NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_mark >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_mark >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->event_mark);
  }
  this->event_mark = CHALLENGE_EVENT_NONE;
  std::shared_ptr<ExhibitionTemporaryData>::shared_ptr(&this->exhibition_temporary_data_ptr);
};

// Line 96: range 0000000014F77AE6-0000000014F77B47
bool __cdecl Challenge::isChildOf(const Challenge *const this, uint32_t target_index)
{
  if ( !target_index )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->father_index);
  }
  return target_index == this->father_index;
};

// Line 97: range 0000000013EB9EFE-0000000013EB9FA2
bool __cdecl Challenge::isChild(const Challenge *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->father_index);
  }
  if ( !this->father_index )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->challenge_index);
  }
  return this->challenge_index != this->father_index;
};

// Line 98: range 0000000014F77B48-0000000014F77BEC
bool __cdecl Challenge::isFather(const Challenge *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->father_index);
  }
  if ( !this->father_index )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->challenge_index);
  }
  return this->challenge_index == this->father_index;
};

// Line 99: range 0000000014F77BEE-0000000014F77C3A
bool __cdecl Challenge::isNormal(const Challenge *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->father_index);
  }
  return this->father_index == 0;
};

// Line 100: range 0000000014F77C3C-0000000014F77CA8
bool __cdecl Challenge::isMatchFilter(const Challenge *const this, ChallengeFilter filter)
{
  if ( Challenge::isNormal(this) )
    return (filter & 1) != 0;
  if ( Challenge::isChild(this) )
    return (filter & 2) != 0;
  if ( Challenge::isFather(this) )
    return (filter & 4) != 0;
  return 0;
};

// Line 126: range 0000000015A1AE36-0000000015A1AE70
void __cdecl ChallengeComp::~ChallengeComp(ChallengeComp *const this)
{
  std::map<unsigned int,proto::ChallengeRecordBin>::~map(&this->challenge_record_map_);
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->challenge_timer_ptr_);
  std::map<unsigned int,std::shared_ptr<Challenge>>::~map(&this->challenge_map_);
};

// Line 129: range 000000001604FE28-000000001604FE97
void __cdecl ChallengeComp::ChallengeComp(ChallengeComp *const this, Group *group)
{
  std::map<unsigned int,std::shared_ptr<Challenge>>::map(&this->challenge_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->group_);
  this->group_ = group;
  std::shared_ptr<SceneTimer>::shared_ptr(&this->challenge_timer_ptr_);
  std::map<unsigned int,proto::ChallengeRecordBin>::map(&this->challenge_record_map_);
};

// Line 183: range 00000000155B8252-00000000155B828C
Group *__cdecl ChallengeComp::getGroup(const ChallengeComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->group_);
  return this->group_;
};

// Line 290: range 0000000017A014F6-0000000017A01512
bool __cdecl ChallengeComp::hasOngoingChallenge(const ChallengeComp *const this)
{
  return !std::map<unsigned int,std::shared_ptr<Challenge>>::empty(&this->challenge_map_);
};
