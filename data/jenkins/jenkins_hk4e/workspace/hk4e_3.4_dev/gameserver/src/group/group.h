// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/group/group.h

// Line 38: range 000000001619EF38-000000001619EF52
void __cdecl Trigger::~Trigger(Trigger *const this)
{
  std::string::~string(this);
};

// Line 47: range 00000000149EEA5C-00000000149EEB39
void __cdecl GroupMonsterParam::GroupMonsterParam(GroupMonsterParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type);
  }
  this->born_type = MONSTER_BORN_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_hp_percentage);
  }
  this->initial_hp_percentage = 0.0;
  std::set<unsigned int>::set(&this->affix_set);
};

// Line 47: range 0000000014AE2782-0000000014AE2917
void __cdecl GroupMonsterParam::GroupMonsterParam(GroupMonsterParam *const this, GroupMonsterParam *a2)
{
  uint32_t level; // ecx
  proto::MonsterBornType born_type; // ecx
  float initial_hp_percentage; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level = a2->level;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  born_type = a2->born_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type);
  }
  this->born_type = born_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->initial_hp_percentage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  initial_hp_percentage = a2->initial_hp_percentage;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_hp_percentage);
  }
  this->initial_hp_percentage = initial_hp_percentage;
  std::set<unsigned int>::set(&this->affix_set, &a2->affix_set);
};

// Line 47: range 00000000160521B6-000000001605234B
void __cdecl GroupMonsterParam::GroupMonsterParam(GroupMonsterParam *const this, const GroupMonsterParam *a2)
{
  uint32_t level; // ecx
  proto::MonsterBornType born_type; // ecx
  float initial_hp_percentage; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level = a2->level;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  born_type = a2->born_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type);
  }
  this->born_type = born_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->initial_hp_percentage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  initial_hp_percentage = a2->initial_hp_percentage;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_hp_percentage);
  }
  this->initial_hp_percentage = initial_hp_percentage;
  std::set<unsigned int>::set(&this->affix_set, &a2->affix_set);
};

// Line 47: range 00000000149EEB3A-00000000149EEB58
void __cdecl GroupMonsterParam::~GroupMonsterParam(GroupMonsterParam *const this)
{
  std::set<unsigned int>::~set(&this->affix_set);
};

// Line 55: range 0000000016053D44-0000000016053FEE
GroupBlossomChestParam *__cdecl GroupBlossomChestParam::operator=(
        GroupBlossomChestParam *const this,
        GroupBlossomChestParam *a2)
{
  uint32_t blossom_chest_id; // ecx
  uint32_t drop_id; // ecx
  uint32_t dead_time; // ecx
  uint32_t item_limit_type; // ecx
  uint32_t refresh_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  blossom_chest_id = a2->blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->blossom_chest_id = blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  drop_id = a2->drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dead_time = a2->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = dead_time;
  std::set<unsigned int>::operator=(&this->qualify_uid_set, &a2->qualify_uid_set);
  std::set<unsigned int>::operator=(&this->remain_uid_set, &a2->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = a2->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  refresh_id = a2->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = refresh_id;
  return this;
};

// Line 55: range 0000000017219D92-000000001721A03C
GroupBlossomChestParam *__cdecl GroupBlossomChestParam::operator=(
        GroupBlossomChestParam *const this,
        const GroupBlossomChestParam *a2)
{
  uint32_t blossom_chest_id; // ecx
  uint32_t drop_id; // ecx
  uint32_t dead_time; // ecx
  uint32_t item_limit_type; // ecx
  uint32_t refresh_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  blossom_chest_id = a2->blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->blossom_chest_id = blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  drop_id = a2->drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dead_time = a2->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = dead_time;
  std::set<unsigned int>::operator=(&this->qualify_uid_set, &a2->qualify_uid_set);
  std::set<unsigned int>::operator=(&this->remain_uid_set, &a2->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = a2->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  refresh_id = a2->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = refresh_id;
  return this;
};

// Line 55: range 00000000149EEB5A-00000000149EECC9
void __cdecl GroupBlossomChestParam::GroupBlossomChestParam(GroupBlossomChestParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->blossom_chest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = 0;
  std::set<unsigned int>::set(&this->qualify_uid_set);
  std::set<unsigned int>::set(&this->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = 0;
};

// Line 55: range 0000000014AE2918-0000000014AE2BBF
void __cdecl GroupBlossomChestParam::GroupBlossomChestParam(
        GroupBlossomChestParam *const this,
        GroupBlossomChestParam *a2)
{
  uint32_t blossom_chest_id; // ecx
  uint32_t drop_id; // ecx
  uint32_t dead_time; // ecx
  uint32_t item_limit_type; // ecx
  uint32_t refresh_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  blossom_chest_id = a2->blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->blossom_chest_id = blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  drop_id = a2->drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dead_time = a2->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = dead_time;
  std::set<unsigned int>::set(&this->qualify_uid_set, &a2->qualify_uid_set);
  std::set<unsigned int>::set(&this->remain_uid_set, &a2->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = a2->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  refresh_id = a2->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = refresh_id;
};

// Line 55: range 000000001605234C-000000001605261A
void __cdecl GroupBlossomChestParam::GroupBlossomChestParam(
        GroupBlossomChestParam *const this,
        const GroupBlossomChestParam *a2)
{
  uint32_t blossom_chest_id; // ecx
  uint32_t drop_id; // ecx
  uint32_t dead_time; // ecx
  uint32_t item_limit_type; // ecx
  uint32_t refresh_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  blossom_chest_id = a2->blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->blossom_chest_id = blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  drop_id = a2->drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dead_time = a2->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = dead_time;
  std::set<unsigned int>::set(&this->qualify_uid_set, &a2->qualify_uid_set);
  std::set<unsigned int>::set(&this->remain_uid_set, &a2->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = a2->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  refresh_id = a2->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = refresh_id;
};

// Line 55: range 00000000149EECCA-00000000149EECF8
void __cdecl GroupBlossomChestParam::~GroupBlossomChestParam(GroupBlossomChestParam *const this)
{
  std::set<unsigned int>::~set(&this->remain_uid_set);
  std::set<unsigned int>::~set(&this->qualify_uid_set);
};

// Line 66: range 00000000149EF9EC-00000000149EFDA7
GroupGadgetGeneralRewardParam *__cdecl GroupGadgetGeneralRewardParam::operator=(
        GroupGadgetGeneralRewardParam *const this,
        GroupGadgetGeneralRewardParam *a2)
{
  uint32_t resin; // ecx
  uint32_t dead_time; // ecx
  uint32_t destroy_cd; // ecx
  uint32_t item_limit_type; // ecx
  __int64 v6; // rdx
  bool is_general_reward_hiden; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  resin = a2->resin;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->resin = resin;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  dead_time = a2->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  destroy_cd = a2->destroy_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_cd);
  }
  this->destroy_cd = destroy_cd;
  std::map<unsigned int,proto::GeneralRewardBin>::operator=(&this->qualify_info_map, &a2->qualify_info_map);
  std::set<unsigned int>::operator=(&this->remain_uid_set, &a2->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = a2->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->item_param.promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)((((unsigned __int64)&this->item_param.promote_level + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->item_param, 16LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->item_param.promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->item_param.promote_level + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->item_param, 16LL);
  }
  v6 = *(_QWORD *)&a2->item_param.level;
  *(_QWORD *)&this->item_param.item_id = *(_QWORD *)&a2->item_param.item_id;
  *(_QWORD *)&this->item_param.level = v6;
  std::set<unsigned int>::operator=(&this->open_state_set, &a2->open_state_set);
  if ( *(char *)(((unsigned __int64)&a2->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_general_reward_hiden);
  is_general_reward_hiden = a2->is_general_reward_hiden;
  if ( *(char *)(((unsigned __int64)&this->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_general_reward_hiden);
  this->is_general_reward_hiden = is_general_reward_hiden;
  return this;
};

// Line 66: range 00000000149EECFA-00000000149EEE85
void __cdecl GroupGadgetGeneralRewardParam::GroupGadgetGeneralRewardParam(GroupGadgetGeneralRewardParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->resin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_cd);
  }
  this->destroy_cd = 0;
  std::map<unsigned int,proto::GeneralRewardBin>::map(&this->qualify_info_map);
  std::set<unsigned int>::set(&this->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = 0;
  ItemParam::ItemParam(&this->item_param);
  std::set<unsigned int>::set(&this->open_state_set);
  if ( *(char *)(((unsigned __int64)&this->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_general_reward_hiden);
  this->is_general_reward_hiden = 0;
};

// Line 66: range 0000000014AE2C60-0000000014AE3018
void __cdecl GroupGadgetGeneralRewardParam::GroupGadgetGeneralRewardParam(
        GroupGadgetGeneralRewardParam *const this,
        GroupGadgetGeneralRewardParam *a2)
{
  uint32_t resin; // ecx
  uint32_t dead_time; // ecx
  uint32_t destroy_cd; // ecx
  uint32_t item_limit_type; // ecx
  __int64 v6; // rdx
  bool is_general_reward_hiden; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  resin = a2->resin;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->resin = resin;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  dead_time = a2->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  destroy_cd = a2->destroy_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_cd);
  }
  this->destroy_cd = destroy_cd;
  std::map<unsigned int,proto::GeneralRewardBin>::map(&this->qualify_info_map, &a2->qualify_info_map);
  std::set<unsigned int>::set(&this->remain_uid_set, &a2->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = a2->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->item_param.promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)((((unsigned __int64)&this->item_param.promote_level + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->item_param, 16LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->item_param.promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->item_param.promote_level + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->item_param, 16LL);
  }
  v6 = *(_QWORD *)&a2->item_param.level;
  *(_QWORD *)&this->item_param.item_id = *(_QWORD *)&a2->item_param.item_id;
  *(_QWORD *)&this->item_param.level = v6;
  std::set<unsigned int>::set(&this->open_state_set, &a2->open_state_set);
  if ( *(char *)(((unsigned __int64)&a2->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_general_reward_hiden);
  is_general_reward_hiden = a2->is_general_reward_hiden;
  if ( *(char *)(((unsigned __int64)&this->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_general_reward_hiden);
  this->is_general_reward_hiden = is_general_reward_hiden;
};

// Line 66: range 000000001605261C-0000000016052A10
void __cdecl GroupGadgetGeneralRewardParam::GroupGadgetGeneralRewardParam(
        GroupGadgetGeneralRewardParam *const this,
        const GroupGadgetGeneralRewardParam *a2)
{
  uint32_t resin; // ecx
  uint32_t dead_time; // ecx
  uint32_t destroy_cd; // ecx
  uint32_t item_limit_type; // ecx
  __int64 v6; // rdx
  bool is_general_reward_hiden; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  resin = a2->resin;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->resin = resin;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  dead_time = a2->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_time);
  }
  this->dead_time = dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  destroy_cd = a2->destroy_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->destroy_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->destroy_cd);
  }
  this->destroy_cd = destroy_cd;
  std::map<unsigned int,proto::GeneralRewardBin>::map(&this->qualify_info_map, &a2->qualify_info_map);
  std::set<unsigned int>::set(&this->remain_uid_set, &a2->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = a2->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->item_param.promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)((((unsigned __int64)&this->item_param.promote_level + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->item_param, 16LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->item_param.promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->item_param.promote_level + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->item_param, 16LL);
  }
  v6 = *(_QWORD *)&a2->item_param.level;
  *(_QWORD *)&this->item_param.item_id = *(_QWORD *)&a2->item_param.item_id;
  *(_QWORD *)&this->item_param.level = v6;
  std::set<unsigned int>::set(&this->open_state_set, &a2->open_state_set);
  if ( *(char *)(((unsigned __int64)&a2->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_general_reward_hiden);
  is_general_reward_hiden = a2->is_general_reward_hiden;
  if ( *(char *)(((unsigned __int64)&this->is_general_reward_hiden >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_general_reward_hiden);
  this->is_general_reward_hiden = is_general_reward_hiden;
};

// Line 66: range 00000000149EEE86-00000000149EEEC6
void __cdecl GroupGadgetGeneralRewardParam::~GroupGadgetGeneralRewardParam(GroupGadgetGeneralRewardParam *const this)
{
  std::set<unsigned int>::~set(&this->open_state_set);
  std::set<unsigned int>::~set(&this->remain_uid_set);
  std::map<unsigned int,proto::GeneralRewardBin>::~map(&this->qualify_info_map);
};

// Line 82: range 0000000016053FF0-000000001605408B
GroupGadgetFoundationParam *__cdecl GroupGadgetFoundationParam::operator=(
        GroupGadgetFoundationParam *const this,
        GroupGadgetFoundationParam *a2)
{
  uint32_t point_config_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  point_config_id = a2->point_config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->point_config_id = point_config_id;
  std::shared_ptr<TowerDefensePlayBase>::operator=(&this->play_base_ptr, &a2->play_base_ptr);
  return this;
};

// Line 82: range 00000000149EEEC8-00000000149EEF1F
void __cdecl GroupGadgetFoundationParam::GroupGadgetFoundationParam(GroupGadgetFoundationParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->point_config_id = 0;
  std::shared_ptr<TowerDefensePlayBase>::shared_ptr(&this->play_base_ptr);
};

// Line 82: range 0000000014AE301A-0000000014AE30B2
void __cdecl GroupGadgetFoundationParam::GroupGadgetFoundationParam(
        GroupGadgetFoundationParam *const this,
        GroupGadgetFoundationParam *a2)
{
  uint32_t point_config_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  point_config_id = a2->point_config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->point_config_id = point_config_id;
  std::shared_ptr<TowerDefensePlayBase>::shared_ptr(&this->play_base_ptr, &a2->play_base_ptr);
};

// Line 82: range 0000000016052AB6-0000000016052B4E
void __cdecl GroupGadgetFoundationParam::GroupGadgetFoundationParam(
        GroupGadgetFoundationParam *const this,
        const GroupGadgetFoundationParam *a2)
{
  uint32_t point_config_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  point_config_id = a2->point_config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->point_config_id = point_config_id;
  std::shared_ptr<TowerDefensePlayBase>::shared_ptr(&this->play_base_ptr, &a2->play_base_ptr);
};

// Line 82: range 00000000149EEF20-00000000149EEF3E
void __cdecl GroupGadgetFoundationParam::~GroupGadgetFoundationParam(GroupGadgetFoundationParam *const this)
{
  std::shared_ptr<TowerDefensePlayBase>::~shared_ptr(&this->play_base_ptr);
};

// Line 87: range 0000000013EB9FF4-0000000013EBA043
uint32_t __cdecl Group::getPatternId(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pattern_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pattern_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->pattern_id_;
};

// Line 88: range 000000001605408C-00000000160540EF
GroupGadgetParam *__cdecl GroupGadgetParam::operator=(GroupGadgetParam *const this, GroupGadgetParam *a2)
{
  GroupBlossomChestParam::operator=(&this->blossom_chest, &a2->blossom_chest);
  GroupGadgetGeneralRewardParam::operator=(&this->general_reward, &a2->general_reward);
  GroupGadgetFoundationParam::operator=(&this->foundation, &a2->foundation);
  return this;
};

// Line 88: range 00000000149EEF40-00000000149EEF7C
void __cdecl GroupGadgetParam::GroupGadgetParam(GroupGadgetParam *const this)
{
  GroupBlossomChestParam::GroupBlossomChestParam(&this->blossom_chest);
  GroupGadgetGeneralRewardParam::GroupGadgetGeneralRewardParam(&this->general_reward);
  GroupGadgetFoundationParam::GroupGadgetFoundationParam(&this->foundation);
};

// Line 88: range 0000000014AE30B4-0000000014AE3114
void __cdecl GroupGadgetParam::GroupGadgetParam(GroupGadgetParam *const this, GroupGadgetParam *a2)
{
  GroupBlossomChestParam::GroupBlossomChestParam(&this->blossom_chest, &a2->blossom_chest);
  GroupGadgetGeneralRewardParam::GroupGadgetGeneralRewardParam(&this->general_reward, &a2->general_reward);
  GroupGadgetFoundationParam::GroupGadgetFoundationParam(&this->foundation, &a2->foundation);
};

// Line 88: range 0000000016052B50-0000000016052BD3
void __cdecl GroupGadgetParam::GroupGadgetParam(GroupGadgetParam *const this, const GroupGadgetParam *a2)
{
  GroupBlossomChestParam::GroupBlossomChestParam(&this->blossom_chest, &a2->blossom_chest);
  GroupGadgetGeneralRewardParam::GroupGadgetGeneralRewardParam(&this->general_reward, &a2->general_reward);
  GroupGadgetFoundationParam::GroupGadgetFoundationParam(&this->foundation, &a2->foundation);
};

// Line 88: range 00000000149EEF7E-00000000149EEFBA
void __cdecl GroupGadgetParam::~GroupGadgetParam(GroupGadgetParam *const this)
{
  GroupGadgetFoundationParam::~GroupGadgetFoundationParam(&this->foundation);
  GroupGadgetGeneralRewardParam::~GroupGadgetGeneralRewardParam(&this->general_reward);
  GroupBlossomChestParam::~GroupBlossomChestParam(&this->blossom_chest);
};

// Line 96: range 000000001605411A-0000000016054753
GroupEntityParam *__cdecl GroupEntityParam::operator=(GroupEntityParam *const this, GroupEntityParam *a2)
{
  uint32_t config_id; // ecx
  uint32_t gather_id; // ecx
  bool is_from_script; // cl
  __int64 v5; // rdx
  __int64 v6; // rdx
  uint32_t route_id; // ecx
  uint32_t route_index; // ecx
  bool is_platform_started; // cl
  bool is_platform_use_last_index; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  gather_id = a2->gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gather_id);
  }
  this->gather_id = gather_id;
  if ( *(char *)(((unsigned __int64)&a2->is_from_script >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_from_script);
  is_from_script = a2->is_from_script;
  if ( *(char *)(((unsigned __int64)&this->is_from_script >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_from_script);
  this->is_from_script = is_from_script;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->pos_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->pos_opt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos_opt, 16LL);
  }
  if ( (((unsigned __int8)a2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->pos_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->pos_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->pos_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->pos_opt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->pos_opt, 16LL);
  }
  v5 = *(_QWORD *)&a2->pos_opt._M_payload._M_payload._M_value.z;
  *(_QWORD *)this->pos_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)a2->pos_opt._M_payload._M_payload._M_empty.gap0;
  *(_QWORD *)&this->pos_opt._M_payload._M_payload._M_value.z = v5;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rot_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rot_opt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot_opt, 16LL);
  }
  if ( (((unsigned __int8)a2 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rot_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rot_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->rot_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->rot_opt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rot_opt, 16LL);
  }
  v6 = *(_QWORD *)&a2->rot_opt._M_payload._M_payload._M_value.z;
  *(_QWORD *)this->rot_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)a2->rot_opt._M_payload._M_payload._M_empty.gap0;
  *(_QWORD *)&this->rot_opt._M_payload._M_payload._M_value.z = v6;
  GroupMonsterParam::operator=(&this->monster, &a2->monster);
  GroupGadgetParam::operator=(&this->gadget, &a2->gadget);
  std::map<std::string,float>::operator=(&this->global_value_map, &a2->global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_opt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->state_opt);
  if ( *(_BYTE *)(((unsigned __int64)&a2->state_opt >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->state_opt = a2->state_opt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  route_id = a2->route_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_id);
  }
  this->route_id = route_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->route_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  route_index = a2->route_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->route_index);
  }
  this->route_index = route_index;
  if ( *(char *)(((unsigned __int64)&a2->is_platform_started >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_platform_started);
  is_platform_started = a2->is_platform_started;
  if ( *(char *)(((unsigned __int64)&this->is_platform_started >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_platform_started);
  this->is_platform_started = is_platform_started;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_platform_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_platform_use_last_index >> 3)
                                                   + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_platform_use_last_index);
  }
  is_platform_use_last_index = a2->is_platform_use_last_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_platform_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_platform_use_last_index >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_platform_use_last_index);
  }
  this->is_platform_use_last_index = is_platform_use_last_index;
  return this;
};

// Line 96: range 00000000149EEFBC-00000000149EF1FB
void __cdecl GroupEntityParam::GroupEntityParam(GroupEntityParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gather_id);
  }
  this->gather_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_from_script >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_from_script);
  this->is_from_script = 0;
  std::optional<Vector3>::optional(&this->pos_opt);
  std::optional<Vector3>::optional(&this->rot_opt);
  GroupMonsterParam::GroupMonsterParam(&this->monster);
  GroupGadgetParam::GroupGadgetParam(&this->gadget);
  std::map<std::string,float>::map(&this->global_value_map);
  std::optional<unsigned int>::optional(&this->state_opt);
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_id);
  }
  this->route_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->route_index);
  }
  this->route_index = 0;
  if ( *(char *)(((unsigned __int64)&this->is_platform_started >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_platform_started);
  this->is_platform_started = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_platform_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_platform_use_last_index >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_platform_use_last_index);
  }
  this->is_platform_use_last_index = 0;
};

// Line 96: range 0000000014AE31B6-0000000014AE37EC
void __cdecl GroupEntityParam::GroupEntityParam(GroupEntityParam *const this, GroupEntityParam *a2)
{
  uint32_t config_id; // ecx
  uint32_t gather_id; // ecx
  bool is_from_script; // cl
  __int64 v5; // rdx
  __int64 v6; // rdx
  uint32_t route_id; // ecx
  uint32_t route_index; // ecx
  bool is_platform_started; // cl
  bool is_platform_use_last_index; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  gather_id = a2->gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gather_id);
  }
  this->gather_id = gather_id;
  if ( *(char *)(((unsigned __int64)&a2->is_from_script >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_from_script);
  is_from_script = a2->is_from_script;
  if ( *(char *)(((unsigned __int64)&this->is_from_script >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_from_script);
  this->is_from_script = is_from_script;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->pos_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->pos_opt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos_opt, 16LL);
  }
  if ( (((unsigned __int8)a2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->pos_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->pos_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->pos_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->pos_opt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->pos_opt, 16LL);
  }
  v5 = *(_QWORD *)&a2->pos_opt._M_payload._M_payload._M_value.z;
  *(_QWORD *)this->pos_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)a2->pos_opt._M_payload._M_payload._M_empty.gap0;
  *(_QWORD *)&this->pos_opt._M_payload._M_payload._M_value.z = v5;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rot_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rot_opt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot_opt, 16LL);
  }
  if ( (((unsigned __int8)a2 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rot_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rot_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->rot_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->rot_opt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rot_opt, 16LL);
  }
  v6 = *(_QWORD *)&a2->rot_opt._M_payload._M_payload._M_value.z;
  *(_QWORD *)this->rot_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)a2->rot_opt._M_payload._M_payload._M_empty.gap0;
  *(_QWORD *)&this->rot_opt._M_payload._M_payload._M_value.z = v6;
  GroupMonsterParam::GroupMonsterParam(&this->monster, &a2->monster);
  GroupGadgetParam::GroupGadgetParam(&this->gadget, &a2->gadget);
  std::map<std::string,float>::map(&this->global_value_map, &a2->global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_opt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->state_opt);
  if ( *(_BYTE *)(((unsigned __int64)&a2->state_opt >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->state_opt = a2->state_opt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  route_id = a2->route_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_id);
  }
  this->route_id = route_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->route_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  route_index = a2->route_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->route_index);
  }
  this->route_index = route_index;
  if ( *(char *)(((unsigned __int64)&a2->is_platform_started >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_platform_started);
  is_platform_started = a2->is_platform_started;
  if ( *(char *)(((unsigned __int64)&this->is_platform_started >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_platform_started);
  this->is_platform_started = is_platform_started;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_platform_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_platform_use_last_index >> 3)
                                                   + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_platform_use_last_index);
  }
  is_platform_use_last_index = a2->is_platform_use_last_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_platform_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_platform_use_last_index >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_platform_use_last_index);
  }
  this->is_platform_use_last_index = is_platform_use_last_index;
};

// Line 96: range 0000000016052BD4-0000000016053246
void __cdecl GroupEntityParam::GroupEntityParam(GroupEntityParam *const this, const GroupEntityParam *a2)
{
  uint32_t config_id; // ecx
  uint32_t gather_id; // ecx
  bool is_from_script; // cl
  __int64 v5; // rdx
  __int64 v6; // rdx
  uint32_t route_id; // ecx
  uint32_t route_index; // ecx
  bool is_platform_started; // cl
  bool is_platform_use_last_index; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  gather_id = a2->gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gather_id);
  }
  this->gather_id = gather_id;
  if ( *(char *)(((unsigned __int64)&a2->is_from_script >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_from_script);
  is_from_script = a2->is_from_script;
  if ( *(char *)(((unsigned __int64)&this->is_from_script >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_from_script);
  this->is_from_script = is_from_script;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->pos_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->pos_opt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos_opt, 16LL);
  }
  if ( (((unsigned __int8)a2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->pos_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->pos_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->pos_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->pos_opt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->pos_opt, 16LL);
  }
  v5 = *(_QWORD *)&a2->pos_opt._M_payload._M_payload._M_value.z;
  *(_QWORD *)this->pos_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)a2->pos_opt._M_payload._M_payload._M_empty.gap0;
  *(_QWORD *)&this->pos_opt._M_payload._M_payload._M_value.z = v5;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rot_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rot_opt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot_opt, 16LL);
  }
  if ( (((unsigned __int8)a2 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rot_opt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rot_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->rot_opt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->rot_opt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rot_opt, 16LL);
  }
  v6 = *(_QWORD *)&a2->rot_opt._M_payload._M_payload._M_value.z;
  *(_QWORD *)this->rot_opt._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)a2->rot_opt._M_payload._M_payload._M_empty.gap0;
  *(_QWORD *)&this->rot_opt._M_payload._M_payload._M_value.z = v6;
  GroupMonsterParam::GroupMonsterParam(&this->monster, &a2->monster);
  GroupGadgetParam::GroupGadgetParam(&this->gadget, &a2->gadget);
  std::map<std::string,float>::map(&this->global_value_map, &a2->global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_opt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->state_opt);
  if ( *(_BYTE *)(((unsigned __int64)&a2->state_opt >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->state_opt = a2->state_opt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  route_id = a2->route_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_id);
  }
  this->route_id = route_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->route_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  route_index = a2->route_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->route_index);
  }
  this->route_index = route_index;
  if ( *(char *)(((unsigned __int64)&a2->is_platform_started >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_platform_started);
  is_platform_started = a2->is_platform_started;
  if ( *(char *)(((unsigned __int64)&this->is_platform_started >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_platform_started);
  this->is_platform_started = is_platform_started;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_platform_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_platform_use_last_index >> 3)
                                                   + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_platform_use_last_index);
  }
  is_platform_use_last_index = a2->is_platform_use_last_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_platform_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_platform_use_last_index >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_platform_use_last_index);
  }
  this->is_platform_use_last_index = is_platform_use_last_index;
};

// Line 96: range 00000000149EF1FC-00000000149EF23C
void __cdecl GroupEntityParam::~GroupEntityParam(GroupEntityParam *const this)
{
  std::map<std::string,float>::~map(&this->global_value_map);
  GroupGadgetParam::~GroupGadgetParam(&this->gadget);
  GroupMonsterParam::~GroupMonsterParam(&this->monster);
};

// Line 113: range 0000000016053BAA-0000000016053D42
GroupMonsterParam *__cdecl GroupMonsterParam::operator=(GroupMonsterParam *const this, GroupMonsterParam *a2)
{
  uint32_t level; // ecx
  proto::MonsterBornType born_type; // ecx
  float initial_hp_percentage; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level = a2->level;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  born_type = a2->born_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type);
  }
  this->born_type = born_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->initial_hp_percentage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  initial_hp_percentage = a2->initial_hp_percentage;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_hp_percentage);
  }
  this->initial_hp_percentage = initial_hp_percentage;
  std::set<unsigned int>::operator=(&this->affix_set, &a2->affix_set);
  return this;
};

// Line 123: range 000000001619ED02-000000001619ED3C
void __cdecl TimeAxis::~TimeAxis(TimeAxis *const this)
{
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->timer_ptr);
  std::vector<unsigned int>::~vector(&this->timer_vec);
  std::string::~string(this);
};

// Line 135: range 000000001518A198-000000001518A1AB
const Vector3 *__cdecl Group::getPosition(const Group *const this)
{
  return &this->position_;
};

// Line 147: range 00000000161706B4-00000000161707AA
void __cdecl TimeAxis::TimeAxis(TimeAxis *const this)
{
  std::string::basic_string(this);
  std::vector<unsigned int>::vector(&this->timer_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->idx);
  }
  this->idx = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_loop >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_loop >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_loop);
  }
  this->is_loop = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->loop_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->loop_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->loop_count);
  }
  this->loop_count = 0;
  std::shared_ptr<SceneTimer>::shared_ptr(&this->timer_ptr);
};

// Line 154: range 0000000015C2E220-0000000015C2E475
void __cdecl Group::~Group(Group *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Group + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  GroupOverrideParam::~GroupOverrideParam(&this->override_param_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->origin_owner_2_eid_set_map_);
  std::unordered_map<std::string,int>::~unordered_map(&this->temp_variable_map_);
  std::unordered_map<std::string,std::shared_ptr<TimeAxis>>::~unordered_map(&this->time_axis_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->occupied_point_set_);
  std::set<unsigned long>::~set(&this->multistage_play_key_set_);
  std::vector<std::shared_ptr<EntitySightGroup>>::~vector(&this->sight_group_ptr_vec_);
  std::map<data::GatherSaveType,unsigned int>::~map(&this->group_refresh_time_map_);
  std::map<unsigned int,unsigned int>::~map(&this->gather_refresh_time_map_);
  GroupInitParam::~GroupInitParam(&this->init_param_);
  std::queue<std::shared_ptr<Event>>::~queue((std::queue<std::shared_ptr<Event>>_0 *const)&this->cached_event_que_);
  PoolMonsterTideComp::~PoolMonsterTideComp(&this->pool_monster_tide_comp_);
  MonsterTideComp::~MonsterTideComp(&this->monster_tide_comp_);
  ChallengeComp::~ChallengeComp(&this->challenge_comp_);
  std::unordered_map<unsigned int,std::shared_ptr<SceneTimer>>::~unordered_map(&this->delay_create_monster_timer_map_);
  std::unordered_map<std::string,std::shared_ptr<SceneTimer>>::~unordered_map(&this->script_timer_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->config_id_2_eid_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->show_cutscene_chest_set_);
  std::map<unsigned int,proto::BossDieInfoBin>::~map(&this->boss_die_info_map_);
  std::map<unsigned int,proto::GroupGadgetBin>::~map(&this->gadget_bin_map_);
  std::map<unsigned int,proto::GroupMonsterBin>::~map(&this->monster_bin_map_);
  std::map<std::string,float>::~map(&this->sgv_map_);
  std::unordered_map<data::EventType,std::set<std::string>>::~unordered_map(&this->event_map_);
  std::unordered_map<std::string,std::shared_ptr<Trigger>>::~unordered_map(&this->trigger_map_);
  std::unordered_map<std::string,int>::~unordered_map(&this->variable_map_);
  std::map<proto::ProtEntityType,std::set<unsigned int>>::~map(&this->deleted_entity_record_map_);
  std::map<unsigned int,int>::~map(&this->viewing_uid_map_);
  std::map<unsigned int,std::shared_ptr<Entity>>::~map(&this->entity_map_);
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  std::enable_shared_from_this<Group>::~enable_shared_from_this(&this->std::enable_shared_from_this<Group>);
};

// Line 185: range 000000001616F06E-000000001616F10C
void __cdecl Trigger::Trigger(Trigger *const this)
{
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_count);
  }
  this->trigger_count = 0;
};

// Line 220: range 0000000014A05C1C-0000000014A05EAC
int32_t __cdecl Group::notifyAllPlayer<proto::MonsterForceAlertNotify>(
        Group *const this,
        proto::MonsterForceAlertNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GameserverService *v6; // rax
  uint32_t v7; // ecx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v10; // rdx
  int32_t result; // eax
  std::map<unsigned int,int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,int> *__for_range; // [rsp+30h] [rbp-90h]
  std::pair<unsigned int const,int> *__in; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *uid; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *_; // [rsp+48h] [rbp-78h]
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:779";
  *(_QWORD *)(v3 + 16) = Group::notifyAllPlayer<proto::MonsterForceAlertNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->viewing_uid_map_;
  __for_begin._M_node = std::map<unsigned int,int>::begin(&this->viewing_uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,int>::end(&this->viewing_uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,int>(__in);
    _ = std::get<1ul,unsigned int const,int>(__in);
    v6 = ServiceBox::findService<GameserverService>();
    v7 = (unsigned int)GameserverService::getGameThreadLocal(v6) + 16;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v8)) )
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v10, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 230: range 0000000015A1AECE-0000000015A1AFD6
void __cdecl Group::setPosition(Group *const this, const Vector3 *pos)
{
  if ( (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->position_, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->position_ = *pos;
};

// Line 231: range 000000001518A1AC-000000001518A1FF
void __cdecl Group::setProjectorEntityId(Group *const this, uint32_t projector_entity_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->projector_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->projector_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->projector_entity_id_);
  }
  this->projector_entity_id_ = projector_entity_id__out;
};

// Line 236: range 00000000149ED138-00000000149ED18A
void __cdecl Group::setReviseLevel(Group *const this, uint32_t revise_level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_level_);
  }
  this->revise_level_ = revise_level;
};

// Line 237: range 0000000015A1AFD8-0000000015A1B024
uint32_t __cdecl Group::getReviseLevel(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->revise_level_;
};

// Line 243: range 00000000146172AC-00000000146172FA
ScenePtr __cdecl Group::getScene(const Group *const this)
{
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)this);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 245: range 0000000015A1B026-0000000015A1B073
void __cdecl Group::setGroupType(Group *const this, GroupType type)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_type_);
  }
  this->group_type_ = type;
};

// Line 246: range 00000000131D9F6C-00000000131D9FB3
GroupType __cdecl Group::getGroupType(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->group_type_;
};

// Line 248: range 0000000015A1B074-0000000015A1B0C9
void __cdecl Group::setPatternId(Group *const this, uint32_t pattern_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pattern_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pattern_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pattern_id_);
  }
  this->pattern_id_ = pattern_id;
};

// Line 251: range 0000000015A1B0CA-0000000015A1B117
void __cdecl Group::setParentQuestId(Group *const this, uint32_t parent_quest_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id_);
  }
  this->parent_quest_id_ = parent_quest_id;
};

// Line 252: range 0000000013EBA044-0000000013EBA08B
uint32_t __cdecl Group::getParentQuestId(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->parent_quest_id_;
};

// Line 264: range 0000000014F86E00-0000000014F8707D
int32_t __cdecl Group::notifyAllPlayerInSet<proto::DungeonChallengeBeginNotify>(
        Group *const this,
        proto::DungeonChallengeBeginNotify *proto,
        const std::unordered_set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GameserverService *v7; // rax
  uint32_t v8; // ecx
  Player *v9; // rdx
  int32_t result; // eax
  std::map<unsigned int,int>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,int>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,int> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,int> *__in; // [rsp+38h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *uid; // [rsp+40h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *_; // [rsp+48h] [rbp-68h]
  char v18[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:800";
  *(_QWORD *)(v3 + 16) = Group::notifyAllPlayerInSet<proto::DungeonChallengeBeginNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->viewing_uid_map_;
  __for_begin._M_node = std::map<unsigned int,int>::begin(&this->viewing_uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,int>::end(&this->viewing_uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,int>(__in);
    _ = std::get<1ul,unsigned int const,int>(__in);
    if ( std::unordered_set<unsigned int>::empty(uid_set)
      || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(uid_set, uid) )
    {
      v7 = ServiceBox::findService<GameserverService>();
      v8 = (unsigned int)GameserverService::getGameThreadLocal(v7) + 16;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), v8);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v9, proto);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v18 == (char *)v3 )
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

// Line 279: range 0000000014F77CBE-0000000014F77D0D
uint32_t __cdecl Group::getDungeonId(Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->dungeon_id_;
};

// Line 362: range 0000000015A1B118-0000000015A1B165
void __cdecl Group::stopHandleEvent(Group *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_handle_event_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_handle_event_);
  this->is_handle_event_ = 0;
};

// Line 363: range 00000000160500EA-0000000016050137
void __cdecl Group::restartHandleEvent(Group *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_handle_event_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_handle_event_);
  this->is_handle_event_ = 1;
};

// Line 405: range 00000000131D9FB4-00000000131D9FC7
ChallengeComp *__cdecl Group::getChallengeComp(Group *const this)
{
  return &this->challenge_comp_;
};

// Line 405: range 00000000131D9FC8-00000000131DA00F
uint32_t __cdecl Group::getGroupId(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->group_id_;
};

// Line 408: range 00000000149ED18C-00000000149ED19F
MonsterTideComp *__cdecl Group::getMonsterTideComp(Group *const this)
{
  return &this->monster_tide_comp_;
};

// Line 411: range 00000000149ED1A0-00000000149ED1B3
PoolMonsterTideComp *__cdecl Group::getPoolMonsterTideComp(Group *const this)
{
  return &this->pool_monster_tide_comp_;
};

// Line 411: range 00000000149ED1B4-00000000149ED201
void __cdecl Group::setSuiteIndex(Group *const this, uint32_t suite_index)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->suite_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->suite_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->suite_index_);
  }
  this->suite_index_ = suite_index;
};

// Line 444: range 00000000141F57D2-00000000141F5819
uint32_t __cdecl Group::getSuiteIndex(Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->suite_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->suite_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->suite_index_;
};

// Line 451: range 0000000015A1B166-0000000015A1B179
const GroupInitParam *__cdecl Group::getInitParam(Group *const this)
{
  return &this->init_param_;
};

// Line 451: range 0000000015A1B17A-0000000015A1B1C7
void __cdecl Group::setSceneId(Group *const this, uint32_t scene_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id_);
  }
  this->scene_id_ = scene_id;
};

// Line 454: range 00000000146172FC-0000000014617343
uint32_t __cdecl Group::getSceneId(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->scene_id_;
};

// Line 456: range 0000000015A1B1C8-0000000015A1B21D
void __cdecl Group::setDungeonId(Group *const this, uint32_t dungeon_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id_);
  }
  this->dungeon_id_ = dungeon_id;
};

// Line 463: range 00000000160619C6-0000000016061BE9
ForeachPolicy __cdecl Group::removeEntities<std::map<unsigned int,SuiteDiskGadgetConfig>>(std::map<unsigned int,SuiteDiskGadgetConfig> const&,proto::ProtEntityType)::{lambda(Entity &)#1}::operator()(
        const Group::removeEntities<std::map<unsigned int,SuiteDiskGadgetConfig> >::<lambda(Entity&)> *const this,
        Entity *entity)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  int v6; // ecx
  ForeachPolicy result; // eax
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(Entity *, VisionContext *); // r13
  VisionContext v10; // [rsp+14h] [rbp-6Ch] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 config_id:818";
  *(_QWORD *)(v2 + 16) = Group::removeEntities<std::map<unsigned int,SuiteDiskGadgetConfig>>(std::map<unsigned int,SuiteDiskGadgetConfig> const&,proto::ProtEntityType)::{lambda(Entity &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = (*(__int64 (__fastcall **)(Entity *))v5)(entity);
  if ( *(_BYTE *)(((unsigned __int64)&this->__entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v6 == this->__entity_type )
  {
    *(_DWORD *)(v2 + 32) = Entity::getConfigId(entity);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,SuiteDiskGadgetConfig> const,unsigned int>(
            this->__keep_table,
            (const unsigned int *)(v2 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(entity->_vptr_DescribalBase + 16);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(void (__fastcall **)(Entity *, VisionContext *))v8;
      VisionContext::VisionContext(&v10, VISION_REMOVE);
      v9(entity, &v10);
    }
    result = FOREACH_CONTINUE;
  }
  else
  {
    result = FOREACH_CONTINUE;
  }
  if ( v11 == (char *)v2 )
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

// Line 495: range 0000000015A1B21E-0000000015A1B240
bool __cdecl Group::hasTimer(const Group *const this)
{
  return !std::unordered_map<std::string,std::shared_ptr<SceneTimer>>::empty(&this->script_timer_map_);
};

// Line 497: range 0000000013EBA08C-0000000013EBA0D9
bool __cdecl Group::isStarted(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_started_);
  }
  return this->is_started_;
};

// Line 536: range 0000000015A1B242-0000000015A1B28F
bool __cdecl Group::getIsReplaceable(Group *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_replaceable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_replaceable_);
  return this->is_replaceable_;
};

// Line 545: range 0000000017A03B9E-0000000017A03BBD
bool __cdecl Group::hasOngoingChallenge(const Group *const this)
{
  return ChallengeComp::hasOngoingChallenge(&this->challenge_comp_);
};

// Line 549: range 0000000015A1B2E4-0000000015A1B30F
void __cdecl Group::setOverrideParam(Group *const this, const GroupOverrideParam *override_param)
{
  GroupOverrideParam::operator=(&this->override_param_, override_param);
};

// Line 610: range 0000000016050138-0000000016050160
void __cdecl Group::setScene(Group *const this, ScenePtr *p_scene_ptr)
{
  std::weak_ptr<Scene>::operator=<Scene>(&this->scene_wtr_, p_scene_ptr);
};

// Line 612: range 000000001385C1A6-000000001385C358
void __cdecl SuiteLogContext::SuiteLogContext(SuiteLogContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id);
  }
  this->quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->schedule_id);
  }
  this->schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wq_parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wq_parent_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wq_parent_quest_id);
  }
  this->wq_parent_quest_id = 0;
};

// Line 693: range 0000000015A1B310-0000000015A1B35C
uint32_t __cdecl Group::getLastRefreshTime(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->last_refresh_time_;
};

// Line 723: range 0000000015A1B35E-0000000015A1B3B2
uint32_t __cdecl Group::getReplaceableVersion(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->replaceable_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->replaceable_version_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->replaceable_version_;
};

// Line 723: range 0000000015A1B3B4-0000000015A1B40F
void __cdecl Group::setReplaceableVersion(Group *const this, uint32_t replaceable_version__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->replaceable_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->replaceable_version_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->replaceable_version_);
  }
  this->replaceable_version_ = replaceable_version__out;
};

// Line 724: range 0000000015A1B410-0000000015A1B463
void __cdecl Group::setClientSilenceVersion(Group *const this, uint32_t client_silence_version__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_silence_version_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_silence_version_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_silence_version_);
  }
  this->client_silence_version_ = client_silence_version__out;
};

// Line 733: range 0000000015D331EC-0000000015D3323E
bool __cdecl Group::getIsUnloading(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unloading_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unloading_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_unloading_);
  }
  return this->is_unloading_;
};

// Line 733: range 0000000015A1B464-0000000015A1B4BF
void __cdecl Group::setIsUnloading(Group *const this, bool is_unloading__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unloading_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unloading_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_unloading_);
  }
  this->is_unloading_ = is_unloading__out;
};

// Line 739: range 00000000149ED202-00000000149ED256
data::GroupIOType __cdecl Group::getIOType(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->io_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->io_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->io_type_;
};

// Line 739: range 0000000015A1B4C0-0000000015A1B51B
void __cdecl Group::setIOType(Group *const this, data::GroupIOType io_type__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->io_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->io_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->io_type_);
  }
  this->io_type_ = io_type__out;
};

// Line 740: range 0000000015A1B51C-0000000015A1B56F
void __cdecl Group::setSubFlowType(Group *const this, data::FlowGroupSubType sub_flow_type__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_flow_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_flow_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_flow_type_);
  }
  this->sub_flow_type_ = sub_flow_type__out;
};

// Line 741: range 0000000015A1B570-0000000015A1B5CB
void __cdecl Group::setIsUnloaded(Group *const this, bool is_unloaded__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unloaded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unloaded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_unloaded_);
  }
  this->is_unloaded_ = is_unloaded__out;
};

// Line 742: range 0000000016050162-00000000160501AE
uint32_t __cdecl Group::getProjectorEntityId(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->projector_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->projector_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->projector_entity_id_;
};

// Line 748: range 00000000160501B0-00000000160501FC
uint32_t __cdecl Group::getRelyStartWorldLevelLimitActivityId(const Group *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rely_start_world_level_limit_activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rely_start_world_level_limit_activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->rely_start_world_level_limit_activity_id_;
};

// Line 748: range 0000000015A1B5CC-0000000015A1B61F
void __cdecl Group::setRelyStartWorldLevelLimitActivityId(
        Group *const this,
        uint32_t rely_start_world_level_limit_activity_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rely_start_world_level_limit_activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rely_start_world_level_limit_activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rely_start_world_level_limit_activity_id_);
  }
  this->rely_start_world_level_limit_activity_id_ = rely_start_world_level_limit_activity_id__out;
};

// Line 754: range 00000000160612FA-0000000016061437
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Gadget> __cdecl Group::findEntity<Gadget>(Group *const this, uint32_t entity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<Gadget> result; // rax
  int entity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  entity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 entity_ptr:756";
  *(_QWORD *)(v3 + 16) = Group::findEntity<Gadget>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Group::findEntity((Group *const)(v3 + 32), *(__int64 *)&entity_id, entity_ida);
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 754: range 00000000149FF936-00000000149FFA73
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Region> __cdecl Group::findEntity<Region>(Group *const this, uint32_t entity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<Region> result; // rax
  int entity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  entity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 entity_ptr:756";
  *(_QWORD *)(v3 + 16) = Group::findEntity<Region>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Group::findEntity((Group *const)(v3 + 32), *(__int64 *)&entity_id, entity_ida);
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Region>::shared_ptr((std::shared_ptr<Region> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Region,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Region,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 764: range 0000000014A0945E-0000000014A0959B
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Creature> __cdecl Group::findEntityByConfigId<Creature>(Group *const this, uint32_t config_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<Creature> result; // rax
  int config_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  config_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 entity_ptr:767";
  *(_QWORD *)(v3 + 16) = Group::findEntityByConfigId<Creature>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Group::findEntityByConfigId((Group *const)(v3 + 32), *(__int64 *)&config_id, config_ida);
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Creature,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 764: range 0000000013ECC8E0-0000000013ECCA1D
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Gadget> __cdecl Group::findEntityByConfigId<Gadget>(Group *const this, uint32_t config_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<Gadget> result; // rax
  int config_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  config_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 entity_ptr:767";
  *(_QWORD *)(v3 + 16) = Group::findEntityByConfigId<Gadget>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Group::findEntityByConfigId((Group *const)(v3 + 32), *(__int64 *)&config_id, config_ida);
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 764: range 000000001323A1CC-000000001323A309
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Monster> __cdecl Group::findEntityByConfigId<Monster>(Group *const this, uint32_t config_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<Monster> result; // rax
  int config_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  config_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 entity_ptr:767";
  *(_QWORD *)(v3 + 16) = Group::findEntityByConfigId<Monster>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Group::findEntityByConfigId((Group *const)(v3 + 32), *(__int64 *)&config_id, config_ida);
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 775: range 0000000017256BD6-0000000017256E66
int32_t __cdecl Group::notifyAllPlayer<proto::BlossomChestCreateNotify>(
        Group *const this,
        proto::BlossomChestCreateNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GameserverService *v6; // rax
  uint32_t v7; // ecx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v10; // rdx
  int32_t result; // eax
  std::map<unsigned int,int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,int> *__for_range; // [rsp+30h] [rbp-90h]
  std::pair<unsigned int const,int> *__in; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *uid; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *_; // [rsp+48h] [rbp-78h]
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:779";
  *(_QWORD *)(v3 + 16) = Group::notifyAllPlayer<proto::BlossomChestCreateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->viewing_uid_map_;
  __for_begin._M_node = std::map<unsigned int,int>::begin(&this->viewing_uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,int>::end(&this->viewing_uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,int>(__in);
    _ = std::get<1ul,unsigned int const,int>(__in);
    v6 = ServiceBox::findService<GameserverService>();
    v7 = (unsigned int)GameserverService::getGameThreadLocal(v6) + 16;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v8)) )
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v10, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 775: range 0000000014F83A70-0000000014F83D00
int32_t __cdecl Group::notifyAllPlayer<proto::DungeonChallengeFinishNotify>(
        Group *const this,
        proto::DungeonChallengeFinishNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GameserverService *v6; // rax
  uint32_t v7; // ecx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v10; // rdx
  int32_t result; // eax
  std::map<unsigned int,int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,int> *__for_range; // [rsp+30h] [rbp-90h]
  std::pair<unsigned int const,int> *__in; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *uid; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *_; // [rsp+48h] [rbp-78h]
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:779";
  *(_QWORD *)(v3 + 16) = Group::notifyAllPlayer<proto::DungeonChallengeFinishNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->viewing_uid_map_;
  __for_begin._M_node = std::map<unsigned int,int>::begin(&this->viewing_uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,int>::end(&this->viewing_uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,int>(__in);
    _ = std::get<1ul,unsigned int const,int>(__in);
    v6 = ServiceBox::findService<GameserverService>();
    v7 = (unsigned int)GameserverService::getGameThreadLocal(v6) + 16;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v8)) )
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v10, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 775: range 0000000017257556-00000000172577E6
int32_t __cdecl Group::notifyAllPlayer<proto::WorldOwnerBlossomScheduleInfoNotify>(
        Group *const this,
        proto::WorldOwnerBlossomScheduleInfoNotify *proto,
        uint32_t exclude_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GameserverService *v6; // rax
  uint32_t v7; // ecx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v10; // rdx
  int32_t result; // eax
  std::map<unsigned int,int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,int> *__for_range; // [rsp+30h] [rbp-90h]
  std::pair<unsigned int const,int> *__in; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *uid; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *_; // [rsp+48h] [rbp-78h]
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:779";
  *(_QWORD *)(v3 + 16) = Group::notifyAllPlayer<proto::WorldOwnerBlossomScheduleInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->viewing_uid_map_;
  __for_begin._M_node = std::map<unsigned int,int>::begin(&this->viewing_uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,int>::end(&this->viewing_uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,int>(__in);
    _ = std::get<1ul,unsigned int const,int>(__in);
    v6 = ServiceBox::findService<GameserverService>();
    v7 = (unsigned int)GameserverService::getGameThreadLocal(v6) + 16;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      if ( !exclude_uid
        || (v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
            exclude_uid != Player::getUid(v8)) )
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v10, proto);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 792: range 0000000014F848CA-0000000014F84B47
int32_t __cdecl Group::notifyAllPlayerInSet<proto::ChallengeDataNotify const>(
        Group *const this,
        const proto::ChallengeDataNotify *proto,
        const std::unordered_set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GameserverService *v7; // rax
  uint32_t v8; // ecx
  Player *v9; // rdx
  int32_t result; // eax
  std::map<unsigned int,int>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,int>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,int> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,int> *__in; // [rsp+38h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *uid; // [rsp+40h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *_; // [rsp+48h] [rbp-68h]
  char v18[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:800";
  *(_QWORD *)(v3 + 16) = Group::notifyAllPlayerInSet<proto::ChallengeDataNotify const>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->viewing_uid_map_;
  __for_begin._M_node = std::map<unsigned int,int>::begin(&this->viewing_uid_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,int>::end(&this->viewing_uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,int>(__in);
    _ = std::get<1ul,unsigned int const,int>(__in);
    if ( std::unordered_set<unsigned int>::empty(uid_set)
      || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(uid_set, uid) )
    {
      v7 = ServiceBox::findService<GameserverService>();
      v8 = (unsigned int)GameserverService::getGameThreadLocal(v7) + 16;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), v8);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v9, proto);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v18 == (char *)v3 )
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

// Line 810: range 0000000016061BEA-0000000016061C7C
// local variable allocation has failed, the output may be wrong!
void __cdecl Group::removeEntities<std::map<unsigned int,SuiteDiskGadgetConfig>>(
        Group *const this,
        const std::map<unsigned int,SuiteDiskGadgetConfig> *keep_table,
        proto::ProtEntityType entity_type)
{
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Entity &)>::function<void Group::removeEntities<std::map<unsigned int,SuiteDiskGadgetConfig>>(std::map<unsigned int,SuiteDiskGadgetConfig> const&,proto::ProtEntityType)::{lambda(Entity &)#1},void,void>(
    &p_func,
    *(Group::removeEntities<std::map<unsigned int,SuiteDiskGadgetConfig> >::<lambda(Entity&)> *)(&entity_type - 2));
  Group::foreachEntity(this, &p_func);
  std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
};

// Line 810: range 00000000160618E6-0000000016061978
// local variable allocation has failed, the output may be wrong!
void __cdecl Group::removeEntities<std::set<unsigned int>>(
        Group *const this,
        const std::set<unsigned int> *keep_table,
        proto::ProtEntityType entity_type)
{
  std::function<ForeachPolicy(Entity&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Entity &)>::function<void Group::removeEntities<std::set<unsigned int>>(std::set<unsigned int> const&,proto::ProtEntityType)::{lambda(Entity &)#1},void,void>(
    &p_func,
    *(Group::removeEntities<std::set<unsigned int> >::<lambda(Entity&)> *)(&entity_type - 2));
  Group::foreachEntity(this, &p_func);
  std::function<ForeachPolicy ()(Entity &)>::~function(&p_func);
};

// Line 812: range 00000000160616C2-00000000160618E5
ForeachPolicy __cdecl Group::removeEntities<std::set<unsigned int>>(std::set<unsigned int> const&,proto::ProtEntityType)::{lambda(Entity &)#1}::operator()(
        const Group::removeEntities<std::set<unsigned int> >::<lambda(Entity&)> *const this,
        Entity *entity)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  int v6; // ecx
  ForeachPolicy result; // eax
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(Entity *, VisionContext *); // r13
  VisionContext v10; // [rsp+14h] [rbp-6Ch] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 config_id:818";
  *(_QWORD *)(v2 + 16) = Group::removeEntities<std::set<unsigned int>>(std::set<unsigned int> const&,proto::ProtEntityType)::{lambda(Entity &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = (*(__int64 (__fastcall **)(Entity *))v5)(entity);
  if ( *(_BYTE *)(((unsigned __int64)&this->__entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v6 == this->__entity_type )
  {
    *(_DWORD *)(v2 + 32) = Entity::getConfigId(entity);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            this->__keep_table,
            (const unsigned int *)(v2 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(entity->_vptr_DescribalBase + 16);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(void (__fastcall **)(Entity *, VisionContext *))v8;
      VisionContext::VisionContext(&v10, VISION_REMOVE);
      v9(entity, &v10);
    }
    result = FOREACH_CONTINUE;
  }
  else
  {
    result = FOREACH_CONTINUE;
  }
  if ( v11 == (char *)v2 )
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

// Line 820: range 0000000013ED7E18-0000000013ED7F55
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Region> __cdecl Group::findEntityByConfigId<Region>(Group *const this, uint32_t config_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<Region> result; // rax
  int config_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  config_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 entity_ptr:767";
  *(_QWORD *)(v3 + 16) = Group::findEntityByConfigId<Region>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Group::findEntityByConfigId((Group *const)(v3 + 32), *(__int64 *)&config_id, config_ida);
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Region>::shared_ptr((std::shared_ptr<Region> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Region,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Region,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
