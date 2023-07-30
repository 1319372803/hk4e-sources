// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_condition.cpp

// Line 21: range 00000000155689A2-0000000015568B73
void __cdecl DungeonCondition::notifyEndTime(DungeonCondition *const this, Player *player, uint32_t end_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<proto::DungeonDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+24h] [rbp-8Ch] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_data_map; // [rsp+28h] [rbp-88h]
  std::shared_ptr<proto::DungeonDataNotify> __r; // [rsp+30h] [rbp-80h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 notify_ptr:22";
  *(_QWORD *)(v3 + 16) = DungeonCondition::notifyEndTime;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::DungeonDataNotify>();
  v6 = std::__shared_ptr_access<proto::DungeonDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_data_map = proto::DungeonDataNotify::mutable_dungeon_data_map(v6);
  key = 1;
  v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_data_map, &key);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = end_time;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonDataNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::DungeonDataNotify>::~shared_ptr((std::shared_ptr<proto::DungeonDataNotify> *const)(v3 + 32));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 30: range 0000000015568B74-0000000015568DBF
void __cdecl DungeonCondKillMonster::onMonsterDie(
        DungeonCondKillMonster *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  common::milog::MiLogStream *v3; // rax
  std::vector<int>::reference v4; // rax
  uint32_t *v5; // rdx
  std::vector<int>::reference v6; // rax
  uint32_t *v7; // rdx
  uint32_t monster_id; // [rsp+28h] [rbp-38h]
  uint32_t monster_count; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( std::vector<int>::size(&this->cond_config_.param) > 1 )
  {
    v4 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v5 = (uint32_t *)v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    monster_id = *v5;
    v6 = std::vector<int>::operator[](&this->cond_config_.param, 1uLL);
    v7 = (uint32_t *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    monster_count = *v7;
    if ( monster_id == Monster::getMonsterId(monster) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->kill_count_);
      }
      if ( monster_count <= ++this->kill_count_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->cond_state_);
        }
        this->cond_state_ = COND_STATE_MEET;
        if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->dungeon_scene_);
        DungeonScene::trySettle(this->dungeon_scene_);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "onMonsterDie",
      33);
    v3 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v11,
           (const char (*)[20])"param is not enough");
    common::milog::MiLogStream::operator<<<int>(v3, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 51: range 0000000015568DC0-0000000015568E20
void __cdecl DungeonCondKillMonster::clear(DungeonCondKillMonster *const this)
{
  DungeonCondition::clear((DungeonCondition *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
};

// Line 58: range 0000000015568E22-0000000015569202
void __cdecl DungeonCondKillGroupMonster::onMonsterDie(
        DungeonCondKillGroupMonster *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::vector<int>::reference v7; // rax
  uint32_t *v8; // rdx
  std::vector<int>::reference v9; // rax
  uint32_t *v10; // rdx
  common::milog::MiLogStream *v11; // rdx
  Group *v12; // rax
  uint32_t group_id; // [rsp+28h] [rbp-98h]
  uint32_t monster_id; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 group_ptr:68";
  *(_QWORD *)(v3 + 16) = DungeonCondKillGroupMonster::onMonsterDie;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::vector<int>::size(&this->cond_config_.param) > 1 )
  {
    v7 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v8 = (uint32_t *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    group_id = *v8;
    v9 = std::vector<int>::operator[](&this->cond_config_.param, 1uLL);
    v10 = (uint32_t *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    monster_id = *v10;
    if ( group_id == Entity::getGroupId((const Entity *const)monster) )
    {
      Entity::getGroup((const Entity *const)(v3 + 32));
      if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_condition.cpp",
          "onMonsterDie",
          71);
        v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v16,
                (const char (*)[15])"getGroup fails");
        common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v11, monster);
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      else
      {
        v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( !Group::getMonsterCount(v12, monster_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->cond_state_);
          }
          this->cond_state_ = COND_STATE_MEET;
          if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->dungeon_scene_);
          DungeonScene::trySettle(this->dungeon_scene_);
        }
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "onMonsterDie",
      61);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v16,
           (const char (*)[20])"param is not enough");
    common::milog::MiLogStream::operator<<<int>(v6, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 84: range 0000000015569204-000000001556944F
void __cdecl DungeonCondKillTypeMonster::onMonsterDie(
        DungeonCondKillTypeMonster *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  common::milog::MiLogStream *v3; // rax
  std::vector<int>::reference v4; // rax
  data::MonsterType *v5; // rdx
  std::vector<int>::reference v6; // rax
  uint32_t *v7; // rdx
  data::MonsterType monster_type; // [rsp+28h] [rbp-38h]
  uint32_t monster_count; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( std::vector<int>::size(&this->cond_config_.param) > 1 )
  {
    v4 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v5 = (data::MonsterType *)v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    monster_type = *v5;
    v6 = std::vector<int>::operator[](&this->cond_config_.param, 1uLL);
    v7 = (uint32_t *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    monster_count = *v7;
    if ( monster_type == Monster::getMonsterType(monster) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->kill_count_);
      }
      if ( monster_count <= ++this->kill_count_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->cond_state_);
        }
        this->cond_state_ = COND_STATE_MEET;
        if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->dungeon_scene_);
        DungeonScene::trySettle(this->dungeon_scene_);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "onMonsterDie",
      87);
    v3 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v11,
           (const char (*)[20])"param is not enough");
    common::milog::MiLogStream::operator<<<int>(v3, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 105: range 0000000015569450-00000000155694B0
void __cdecl DungeonCondKillTypeMonster::clear(DungeonCondKillTypeMonster *const this)
{
  DungeonCondition::clear((DungeonCondition *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
};

// Line 112: range 00000000155694B2-0000000015569633
void __cdecl DungeonCondFinishQuest::onQuestFinish(DungeonCondFinishQuest *const this, uint32_t quest_id)
{
  common::milog::MiLogStream *v2; // rax
  std::vector<int>::reference v3; // rax
  _DWORD *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::vector<int>::empty(&this->cond_config_.param) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "onQuestFinish",
      115);
    v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v5, (const char (*)[20])"param is not enough");
    common::milog::MiLogStream::operator<<<int>(v2, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v3 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( *v4 == quest_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cond_state_);
      }
      this->cond_state_ = COND_STATE_MEET;
      if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->dungeon_scene_);
      DungeonScene::trySettle(this->dungeon_scene_);
    }
  }
};

// Line 128: range 0000000015569634-0000000015569810
void __cdecl DungeonCondKillMonsterCount::onMonsterDie(
        DungeonCondKillMonsterCount *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  common::milog::MiLogStream *v3; // rax
  std::vector<int>::reference v4; // rax
  uint32_t *v5; // rdx
  uint32_t monster_count; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( std::vector<int>::size(&this->cond_config_.param) )
  {
    v4 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v5 = (uint32_t *)v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    monster_count = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->kill_count_);
    }
    if ( monster_count <= ++this->kill_count_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cond_state_);
      }
      this->cond_state_ = COND_STATE_MEET;
      if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->dungeon_scene_);
      DungeonScene::trySettle(this->dungeon_scene_);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "onMonsterDie",
      131);
    v3 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v7, (const char (*)[20])"param is not enough");
    common::milog::MiLogStream::operator<<<int>(v3, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 145: range 0000000015569812-0000000015569872
void __cdecl DungeonCondKillMonsterCount::clear(DungeonCondKillMonsterCount *const this)
{
  DungeonCondition::clear((DungeonCondition *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_count_);
  }
  this->kill_count_ = 0;
};

// Line 151: range 0000000015569874-000000001556995B
void __cdecl DungeonCondInTime::DungeonCondInTime(
        DungeonCondInTime *const this,
        const data::DungeonCondConfig *cond_config,
        uint32_t cond_index,
        DungeonScene *dungeon_scene)
{
  int (**v4)(...); // rdx

  DungeonCondition::DungeonCondition((DungeonCondition *const)this, cond_config, cond_index, dungeon_scene);
  v4 = (int (**)(...))(&`vtable for'DungeonCondInTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonCondition = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->relax_secs_);
  }
  this->relax_secs_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_state_);
  }
  this->cond_state_ = COND_STATE_MEET;
};

// Line 158: range 000000001556995C-0000000015569B65
void __cdecl DungeonCondInTime::onTimer(DungeonCondInTime *const this, uint32_t now)
{
  common::milog::MiLogStream *v2; // rax
  std::vector<int>::reference v3; // rax
  int *v4; // rdx
  int v5; // edi
  uint32_t time_limit; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( std::vector<int>::size(&this->cond_config_.param) )
  {
    v3 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) )
    {
      v5 = (_DWORD)this + 76;
      __asan_report_load4(&this->relax_secs_);
    }
    time_limit = v5 + this->relax_secs_;
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->start_time_);
    }
    if ( now > this->start_time_ + time_limit )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cond_state_);
      }
      this->cond_state_ = COND_STATE_NOT_MEET;
      if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->dungeon_scene_);
      DungeonScene::trySettle(this->dungeon_scene_);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "onTimer",
      161);
    v2 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v8,
           (const char (*)[21])"param is not enough ");
    common::milog::MiLogStream::operator<<<int>(v2, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 174: range 0000000015569B66-0000000015569D0D
void __cdecl DungeonCondInTime::notifyDungeonData(DungeonCondInTime *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rax
  std::vector<int>::reference v3; // rax
  int *v4; // rdx
  int v5; // edi
  uint32_t time_limit; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( std::vector<int>::size(&this->cond_config_.param) )
  {
    v3 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) )
    {
      v5 = (_DWORD)this + 76;
      __asan_report_load4(&this->relax_secs_);
    }
    time_limit = v5 + this->relax_secs_;
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->start_time_);
    }
    DungeonCondition::notifyEndTime((DungeonCondition *const)this, player, this->start_time_ + time_limit);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "notifyDungeonData",
      177);
    v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"param is not enough");
    common::milog::MiLogStream::operator<<<int>(v2, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 186: range 0000000015569D0E-0000000015569D6E
void __cdecl DungeonCondInTime::clear(DungeonCondInTime *const this)
{
  DungeonCondition::clear((DungeonCondition *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->relax_secs_);
  }
  this->relax_secs_ = 0;
};

// Line 193: range 0000000015569D70-0000000015569DD3
int32_t __cdecl DungeonCondInTime::relaxTimeRestriction(DungeonCondInTime *const this, uint32_t relax_secs)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->relax_secs_);
  }
  this->relax_secs_ += relax_secs;
  return 0;
};

// Line 199: range 0000000015569DD4-0000000015569F65
bool __cdecl DungeonCondInTime::checkAndGetLeftTime(DungeonCondInTime *const this, uint32_t *left_time)
{
  std::vector<int>::reference v2; // rax
  int *v3; // rdx
  int v4; // edi
  uint32_t v5; // ecx
  uint32_t now; // [rsp+18h] [rbp-8h]
  uint32_t time_limit; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->dungeon_scene_);
  now = Scene::getSceneTimeMs((Scene *const)this->dungeon_scene_) / 0x3E8;
  v2 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v4 = *v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->relax_secs_ >> 3) + 0x7FFF8000) )
  {
    v4 = (_DWORD)this + 76;
    __asan_report_load4(&this->relax_secs_);
  }
  time_limit = v4 + this->relax_secs_;
  if ( now <= time_limit )
  {
    v5 = time_limit - now;
    if ( *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)left_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(left_time);
    }
    *left_time = v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)left_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(left_time);
    }
    *left_time = 0;
  }
  return 1;
};

// Line 215: range 0000000015569F66-000000001556A146
void __cdecl DungeonCondFinishChallenge::onChallengeFinish(
        DungeonCondFinishChallenge *const this,
        uint32_t challenge_index,
        bool success)
{
  common::milog::MiLogStream *v3; // rax
  std::vector<int>::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<int>::size(&this->cond_config_.param) )
  {
    v4 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( challenge_index == *v5 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cond_state_);
      }
      if ( this->cond_state_ == COND_STATE_NONE && success )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->cond_state_);
        }
        this->cond_state_ = COND_STATE_MEET;
        if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->dungeon_scene_);
        DungeonScene::trySettle(this->dungeon_scene_);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "onChallengeFinish",
      218);
    v3 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v7, (const char (*)[20])"param is not enough");
    common::milog::MiLogStream::operator<<<int>(v3, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 236: range 000000001556A148-000000001556A7F9
void __fastcall DungeonCondEndMultistagePlay::onMultistagePlayEnd(
        DungeonCondEndMultistagePlay *const this,
        uint32_t group_id,
        uint32_t play_index,
        bool success)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  std::vector<int>::reference v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<int>::reference v15; // rax
  _DWORD *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  ConditionState v22; // esi
  std::vector<int>::reference v23; // rax
  _DWORD *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool is_force_success; // [rsp+2Bh] [rbp-A5h]
  common::milog::MiLogStream v35; // [rsp+30h] [rbp-A0h] BYREF
  char v36[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 19 target_group_id:243 48 4 12 group_id:235 64 4 14 play_index:235";
  *(_QWORD *)(v4 + 16) = DungeonCondEndMultistagePlay::onMultistagePlayEnd;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = group_id;
  *(_DWORD *)(v4 + 64) = play_index;
  if ( std::vector<int>::size(&this->cond_config_.param) > 1 )
  {
    v8 = std::vector<int>::operator[](&this->cond_config_.param, 0LL);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v4 + 32) = *v9;
    if ( *(_DWORD *)(v4 + 48) == *(_DWORD *)(v4 + 32) )
    {
      v15 = std::vector<int>::operator[](&this->cond_config_.param, 1uLL);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      if ( *v16 == *(_DWORD *)(v4 + 64) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cond_state_);
        }
        if ( this->cond_state_ == COND_STATE_NONE )
        {
          if ( success )
            v22 = COND_STATE_MEET;
          else
            v22 = COND_STATE_NOT_MEET;
          if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->cond_state_);
          }
          this->cond_state_ = v22;
          is_force_success = 0;
          if ( std::vector<int>::size(&this->cond_config_.param) > 2 )
          {
            v23 = std::vector<int>::operator[](&this->cond_config_.param, 2uLL);
            v24 = v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            is_force_success = *v24 != 0;
          }
          if ( is_force_success )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->cond_state_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->cond_state_);
            }
            this->cond_state_ = COND_STATE_MEET;
          }
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/dungeon_condition.cpp",
            "onMultistagePlayEnd",
            274);
          v25 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v35,
                  (const char (*)[25])"[MULTISTAGE] play_index ");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v4 + 64));
          v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])" group:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v4 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v28, (const char (*)[8])", succ:");
          v30 = common::milog::MiLogStream::operator<<(v29, success);
          v31 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v30,
                  (const char (*)[19])" is_force_success:");
          common::milog::MiLogStream::operator<<(v31, is_force_success);
          common::milog::MiLogStream::~MiLogStream(&v35);
          if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->dungeon_scene_);
          DungeonScene::trySettle(this->dungeon_scene_);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/dungeon_condition.cpp",
          "onMultistagePlayEnd",
          253);
        v17 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v35,
                (const char (*)[25])"[MULTISTAGE] play_index ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v18,
                (const char (*)[24])" mismatch. param group:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 32));
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" @play_index ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/dungeon_condition.cpp",
        "onMultistagePlayEnd",
        246);
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v35,
              (const char (*)[20])"[MULTISTAGE] group ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v11,
              (const char (*)[24])" mismatch. param group:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" @play_index ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_condition.cpp",
      "onMultistagePlayEnd",
      239);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v35,
           (const char (*)[20])"param is not enough");
    common::milog::MiLogStream::operator<<<int>(v7, &this->cond_config_.param);
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  if ( v36 == (char *)v4 )
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
