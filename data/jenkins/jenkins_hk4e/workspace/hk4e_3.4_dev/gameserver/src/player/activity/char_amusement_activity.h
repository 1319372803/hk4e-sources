// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/char_amusement_activity.h

// Line 19: range 0000000017A04E96-0000000017A04F34
CharAmusementTrialAvatarInfo *__cdecl CharAmusementTrialAvatarInfo::operator=(
        CharAmusementTrialAvatarInfo *const this,
        CharAmusementTrialAvatarInfo *a2)
{
  bool is_created; // cl

  std::vector<unsigned int>::operator=(&this->trial_avatar_id_vec, &a2->trial_avatar_id_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_created >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_created);
  is_created = a2->is_created;
  if ( *(char *)(((unsigned __int64)&this->is_created >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_created);
  this->is_created = is_created;
  return this;
};

// Line 19: range 0000000017B46082-0000000017B460D7
void __cdecl CharAmusementTrialAvatarInfo::CharAmusementTrialAvatarInfo(CharAmusementTrialAvatarInfo *const this)
{
  std::vector<unsigned int>::vector(&this->trial_avatar_id_vec);
  if ( *(char *)(((unsigned __int64)&this->is_created >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_created);
  this->is_created = 0;
};

// Line 19: range 00000000140F819E-00000000140F8239
void __cdecl CharAmusementTrialAvatarInfo::CharAmusementTrialAvatarInfo(
        CharAmusementTrialAvatarInfo *const this,
        const CharAmusementTrialAvatarInfo *a2)
{
  bool is_created; // cl

  std::vector<unsigned int>::vector(&this->trial_avatar_id_vec, &a2->trial_avatar_id_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_created >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_created);
  is_created = a2->is_created;
  if ( *(char *)(((unsigned __int64)&this->is_created >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_created);
  this->is_created = is_created;
};

// Line 19: range 00000000140882B6-00000000140882D0
void __cdecl CharAmusementTrialAvatarInfo::~CharAmusementTrialAvatarInfo(CharAmusementTrialAvatarInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->trial_avatar_id_vec);
};

// Line 25: range 00000000176B33D8-00000000176B34FF
void __cdecl CharAmusementDungeonContext::CharAmusementDungeonContext(CharAmusementDungeonContext *const this)
{
  std::vector<unsigned int>::vector(&this->level_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_level_idx);
  }
  this->cur_level_idx = 0;
  std::map<unsigned int,CharAmusementTrialAvatarInfo>::map(&this->uid_avatar_info_map);
  if ( *(char *)(((unsigned __int64)&this->is_cur_level_already_assign_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cur_level_already_assign_avatar);
  this->is_cur_level_already_assign_avatar = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_id);
  }
  this->match_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id);
  }
  this->stage_id = 0;
};

// Line 25: range 0000000014001386-00000000140015AB
void __cdecl CharAmusementDungeonContext::CharAmusementDungeonContext(
        CharAmusementDungeonContext *const this,
        CharAmusementDungeonContext *a2)
{
  uint32_t cur_level_idx; // ecx
  bool is_cur_level_already_assign_avatar; // cl
  uint32_t match_id; // ecx
  uint32_t stage_id; // ecx

  std::vector<unsigned int>::vector(&this->level_id_vec, &a2->level_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cur_level_idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_level_idx = a2->cur_level_idx;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_level_idx);
  }
  this->cur_level_idx = cur_level_idx;
  std::map<unsigned int,CharAmusementTrialAvatarInfo>::map(&this->uid_avatar_info_map, &a2->uid_avatar_info_map);
  if ( *(char *)(((unsigned __int64)&a2->is_cur_level_already_assign_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_cur_level_already_assign_avatar);
  is_cur_level_already_assign_avatar = a2->is_cur_level_already_assign_avatar;
  if ( *(char *)(((unsigned __int64)&this->is_cur_level_already_assign_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cur_level_already_assign_avatar);
  this->is_cur_level_already_assign_avatar = is_cur_level_already_assign_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&a2->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  match_id = a2->match_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_id);
  }
  this->match_id = match_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id);
  }
  this->stage_id = stage_id;
};

// Line 25: range 0000000013F803B4-0000000013F805FC
void __cdecl CharAmusementDungeonContext::CharAmusementDungeonContext(
        CharAmusementDungeonContext *const this,
        const CharAmusementDungeonContext *a2)
{
  uint32_t cur_level_idx; // ecx
  bool is_cur_level_already_assign_avatar; // cl
  uint32_t match_id; // ecx
  uint32_t stage_id; // ecx

  std::vector<unsigned int>::vector(&this->level_id_vec, &a2->level_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cur_level_idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_level_idx = a2->cur_level_idx;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_level_idx);
  }
  this->cur_level_idx = cur_level_idx;
  std::map<unsigned int,CharAmusementTrialAvatarInfo>::map(&this->uid_avatar_info_map, &a2->uid_avatar_info_map);
  if ( *(char *)(((unsigned __int64)&a2->is_cur_level_already_assign_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_cur_level_already_assign_avatar);
  is_cur_level_already_assign_avatar = a2->is_cur_level_already_assign_avatar;
  if ( *(char *)(((unsigned __int64)&this->is_cur_level_already_assign_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cur_level_already_assign_avatar);
  this->is_cur_level_already_assign_avatar = is_cur_level_already_assign_avatar;
  if ( *(_BYTE *)(((unsigned __int64)&a2->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  match_id = a2->match_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_id);
  }
  this->match_id = match_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id);
  }
  this->stage_id = stage_id;
};

// Line 25: range 0000000013F32716-0000000013F32740
void __cdecl CharAmusementDungeonContext::~CharAmusementDungeonContext(CharAmusementDungeonContext *const this)
{
  std::map<unsigned int,CharAmusementTrialAvatarInfo>::~map(&this->uid_avatar_info_map);
  std::vector<unsigned int>::~vector(&this->level_id_vec);
};

// Line 41: range 0000000017A04C3C-0000000017A04D11
void __cdecl CharAmusementStageData::CharAmusementStageData(CharAmusementStageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_time);
  }
  this->finish_time = 0;
};

// Line 52: range 0000000017B8DF78-0000000017B8E00D
void __cdecl CharAmusementActivity::~CharAmusementActivity(CharAmusementActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CharAmusementActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::vector<unsigned int>::~vector(&this->gm_level_id_vec_);
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_wtr_);
  std::vector<unsigned long>::~vector(&this->in_dungeon_avatar_guid_vec_);
  std::map<unsigned int,CharAmusementStageData>::~map(&this->stage_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 52: range 0000000017B8E00E-0000000017B8E038
void __cdecl CharAmusementActivity::~CharAmusementActivity(CharAmusementActivity *const this)
{
  CharAmusementActivity::~CharAmusementActivity(this);
  operator delete(this, 0x418uLL);
};

// Line 55: range 000000001702E348-000000001702E496
void __fastcall ZN21CharAmusementActivityCI212BaseActivityER6Playerj(
        CharAmusementActivity *const this,
        Player *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN21CharAmusementActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'CharAmusementActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,CharAmusementStageData>::map(&this->stage_data_map_);
  std::vector<unsigned long>::vector(&this->in_dungeon_avatar_guid_vec_);
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_wtr_);
  std::vector<unsigned int>::vector(&this->gm_level_id_vec_);
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

// Line 56: range 00000000172155B0-00000000172155BA
data::NewActivityType __cdecl CharAmusementActivity::getActivityStaticType()
{
  return 3202;
};

// Line 102: range 0000000017D71910-0000000017D71945
void __cdecl CharAmusementActivity::setGmLevelIdVec(
        CharAmusementActivity *const this,
        std::vector<unsigned int> *p_gm_level_id_vec)
{
  std::vector<unsigned int> *v2; // rax

  v2 = std::move<std::vector<unsigned int> &>(p_gm_level_id_vec);
  std::vector<unsigned int>::operator=(&this->gm_level_id_vec_, v2);
};

// Line 103: range 00000000176B32F4-00000000176B3307
const std::vector<unsigned int> *__cdecl CharAmusementActivity::getGmLevelIdVec(
        const CharAmusementActivity *const this)
{
  return &this->gm_level_id_vec_;
};

// Line 104: range 00000000176B3308-00000000176B3327
void __cdecl CharAmusementActivity::clearGmLevelIdVec(CharAmusementActivity *const this)
{
  std::vector<unsigned int>::clear(&this->gm_level_id_vec_);
};
