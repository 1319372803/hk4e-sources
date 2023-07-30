// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/instable_spray_activity.h

// Line 23: range 000000001461E3EA-000000001461E483
int32_t __cdecl InstableSprayDungeonAvatarInfo::toClient(
        const InstableSprayDungeonAvatarInfo *const this,
        proto::InstableSprayAvatarInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::InstableSprayAvatarInfo::set_avatar_id(info, this->avatar_id);
  if ( *(char *)(((unsigned __int64)&this->is_trial >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_trial);
  proto::InstableSprayAvatarInfo::set_is_trial(info, this->is_trial);
  return 0;
};

// Line 24: range 000000001461E484-000000001461E517
int32_t __cdecl InstableSprayDungeonAvatarInfo::fromBin(
        InstableSprayDungeonAvatarInfo *const this,
        const proto::InstableSprayAvatarInfoBin *info)
{
  uint64_t v2; // rax
  bool is_trial; // dl

  v2 = proto::InstableSprayAvatarInfoBin::avatar_id(info);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->avatar_id = v2;
  is_trial = proto::InstableSprayAvatarInfoBin::is_trial(info);
  if ( *(char *)(((unsigned __int64)&this->is_trial >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trial);
  this->is_trial = is_trial;
  return 0;
};

// Line 25: range 000000001461E518-000000001461E5B1
int32_t __cdecl InstableSprayDungeonAvatarInfo::toBin(
        const InstableSprayDungeonAvatarInfo *const this,
        proto::InstableSprayAvatarInfoBin *info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::InstableSprayAvatarInfoBin::set_avatar_id(info, this->avatar_id);
  if ( *(char *)(((unsigned __int64)&this->is_trial >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_trial);
  proto::InstableSprayAvatarInfoBin::set_is_trial(info, this->is_trial);
  return 0;
};

// Line 28: range 000000001461F3F6-000000001461F41E
InstableSprayDungeonTeamInfo *__cdecl InstableSprayDungeonTeamInfo::operator=(
        InstableSprayDungeonTeamInfo *const this,
        InstableSprayDungeonTeamInfo *a2)
{
  std::vector<InstableSprayDungeonAvatarInfo>::operator=(&this->avatar_info_vec, &a2->avatar_info_vec);
  return this;
};

// Line 31: range 000000001461E5B2-000000001461E605
int32_t __cdecl InstableSprayDungeonTeamInfo::toClient(
        const InstableSprayDungeonTeamInfo *const this,
        proto::InstableSprayTeamInfo *info)
{
  google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v2; // rsi

  v2 = proto::InstableSprayTeamInfo::mutable_avatar_info_list(info);
  common::tools::MiscUtils::vectorToRepeated<InstableSprayDungeonAvatarInfo,proto::InstableSprayAvatarInfo,int (InstableSprayDungeonAvatarInfo::*)(proto::InstableSprayAvatarInfo&)const>(
    &this->avatar_info_vec,
    v2,
    (int (*)(const InstableSprayDungeonAvatarInfo *, proto::InstableSprayAvatarInfo *))InstableSprayDungeonAvatarInfo::toClient);
  return 0;
};

// Line 32: range 000000001461E606-000000001461E659
int32_t __cdecl InstableSprayDungeonTeamInfo::fromBin(
        InstableSprayDungeonTeamInfo *const this,
        const proto::InstableSprayTeamInfoBin *info)
{
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfoBin> *v2; // rsi

  v2 = proto::InstableSprayTeamInfoBin::avatar_info_bin_list(info);
  common::tools::MiscUtils::fromRepeated<InstableSprayDungeonAvatarInfo,proto::InstableSprayAvatarInfoBin,int (InstableSprayDungeonAvatarInfo::*)(proto::InstableSprayAvatarInfoBin const&)>(
    &this->avatar_info_vec,
    v2,
    (int (*)(InstableSprayDungeonAvatarInfo *, const proto::InstableSprayAvatarInfoBin *))InstableSprayDungeonAvatarInfo::fromBin);
  return 0;
};

// Line 33: range 000000001461E65A-000000001461E6AD
int32_t __cdecl InstableSprayDungeonTeamInfo::toBin(
        const InstableSprayDungeonTeamInfo *const this,
        proto::InstableSprayTeamInfoBin *info)
{
  google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfoBin> *v2; // rsi

  v2 = proto::InstableSprayTeamInfoBin::mutable_avatar_info_bin_list(info);
  common::tools::MiscUtils::vectorToRepeated<InstableSprayDungeonAvatarInfo,proto::InstableSprayAvatarInfoBin,int (InstableSprayDungeonAvatarInfo::*)(proto::InstableSprayAvatarInfoBin&)const>(
    &this->avatar_info_vec,
    v2,
    (int (*)(const InstableSprayDungeonAvatarInfo *, proto::InstableSprayAvatarInfoBin *))InstableSprayDungeonAvatarInfo::toBin);
  return 0;
};

// Line 36: range 000000001461F086-000000001461F1AC
void __cdecl InstableSprayDungeonContext::InstableSprayDungeonContext(InstableSprayDungeonContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty);
  }
  this->difficulty = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round);
  }
  this->round = 0;
  std::vector<unsigned int>::vector(&this->score_vec);
  std::vector<InstableSprayDungeonAvatarInfo>::vector(&this->avatar_info_vec);
  if ( *(char *)(((unsigned __int64)&this->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_switch_team);
  this->is_need_switch_team = 0;
};

// Line 36: range 0000000014753F20-0000000014754143
void __cdecl InstableSprayDungeonContext::InstableSprayDungeonContext(
        InstableSprayDungeonContext *const this,
        InstableSprayDungeonContext *a2)
{
  uint32_t stage_id; // ecx
  uint32_t difficulty; // ecx
  uint32_t round; // ecx
  bool is_need_switch_team; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  difficulty = a2->difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty);
  }
  this->difficulty = difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&a2->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  round = a2->round;
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round);
  }
  this->round = round;
  std::vector<unsigned int>::vector(&this->score_vec, &a2->score_vec);
  std::vector<InstableSprayDungeonAvatarInfo>::vector(&this->avatar_info_vec, &a2->avatar_info_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_need_switch_team);
  is_need_switch_team = a2->is_need_switch_team;
  if ( *(char *)(((unsigned __int64)&this->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_switch_team);
  this->is_need_switch_team = is_need_switch_team;
};

// Line 36: range 00000000146CB1E6-00000000146CB430
void __cdecl InstableSprayDungeonContext::InstableSprayDungeonContext(
        InstableSprayDungeonContext *const this,
        const InstableSprayDungeonContext *a2)
{
  uint32_t stage_id; // ecx
  uint32_t difficulty; // ecx
  uint32_t round; // ecx
  bool is_need_switch_team; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_id = a2->stage_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  difficulty = a2->difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty);
  }
  this->difficulty = difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&a2->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  round = a2->round;
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round);
  }
  this->round = round;
  std::vector<unsigned int>::vector(&this->score_vec, &a2->score_vec);
  std::vector<InstableSprayDungeonAvatarInfo>::vector(&this->avatar_info_vec, &a2->avatar_info_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_need_switch_team);
  is_need_switch_team = a2->is_need_switch_team;
  if ( *(char *)(((unsigned __int64)&this->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_switch_team);
  this->is_need_switch_team = is_need_switch_team;
};

// Line 36: range 000000001461F1AE-000000001461F1DC
void __cdecl InstableSprayDungeonContext::~InstableSprayDungeonContext(InstableSprayDungeonContext *const this)
{
  std::vector<InstableSprayDungeonAvatarInfo>::~vector(&this->avatar_info_vec);
  std::vector<unsigned int>::~vector(&this->score_vec);
};

// Line 46: range 0000000014838A34-0000000014838A5E
void __cdecl InstableSprayActivity::~InstableSprayActivity(InstableSprayActivity *const this)
{
  InstableSprayActivity::~InstableSprayActivity(this);
  operator delete(this, 0x410uLL);
};

// Line 46: range 000000001483899E-0000000014838A33
void __cdecl InstableSprayActivity::~InstableSprayActivity(InstableSprayActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'InstableSprayActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->post_enter_scene_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_obs_wtr_);
  std::vector<unsigned long>::~vector(&this->in_dungeon_avatar_guid_vec_);
  std::map<unsigned int,InstableSprayActivity::StageData>::~map(&this->stage_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 51: range 000000001461EBF6-000000001461ECCD
void __cdecl InstableSprayActivity::StageData::StageData(InstableSprayActivity::StageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = 0;
  std::vector<InstableSprayDungeonTeamInfo>::vector(&this->team_info_vec);
};

// Line 51: range 00000000147B1216-00000000147B13AE
void __cdecl InstableSprayActivity::StageData::StageData(
        InstableSprayActivity::StageData *const this,
        InstableSprayActivity::StageData *a2)
{
  uint32_t max_score; // ecx
  bool is_open; // cl
  bool is_finished; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  max_score = a2->max_score;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_score = max_score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_open);
  }
  is_open = a2->is_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_finished);
  }
  is_finished = a2->is_finished;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = is_finished;
  std::vector<InstableSprayDungeonTeamInfo>::vector(&this->team_info_vec, &a2->team_info_vec);
};

// Line 51: range 000000001461ECCE-000000001461ECEC
void __cdecl InstableSprayActivity::StageData::~StageData(InstableSprayActivity::StageData *const this)
{
  std::vector<InstableSprayDungeonTeamInfo>::~vector(&this->team_info_vec);
};

// Line 71: range 000000001702BB6C-000000001702BCBA
void __fastcall ZN21InstableSprayActivityCI212BaseActivityER6Playerj(
        InstableSprayActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN21InstableSprayActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'InstableSprayActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,InstableSprayActivity::StageData>::map(&this->stage_data_map_);
  std::vector<unsigned long>::vector(&this->in_dungeon_avatar_guid_vec_);
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->post_enter_scene_obs_wtr_);
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

// Line 73: range 000000001384AA07-000000001384AA11
data::NewActivityType __cdecl InstableSprayActivity::getActivityStaticType()
{
  return 3001;
};

// Line 129: range 000000001461F3DA-000000001461F3F4
void __cdecl InstableSprayDungeonTeamInfo::~InstableSprayDungeonTeamInfo(InstableSprayDungeonTeamInfo *const this)
{
  std::vector<InstableSprayDungeonAvatarInfo>::~vector(&this->avatar_info_vec);
};

// Line 139: range 00000000147B0F52-00000000147B0FC7
void __cdecl InstableSprayDungeonAvatarInfo::InstableSprayDungeonAvatarInfo(InstableSprayDungeonAvatarInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->avatar_id = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_trial >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trial);
  this->is_trial = 0;
};

// Line 185: range 00000000147B10F4-00000000147B110E
void __cdecl InstableSprayDungeonTeamInfo::InstableSprayDungeonTeamInfo(InstableSprayDungeonTeamInfo *const this)
{
  std::vector<InstableSprayDungeonAvatarInfo>::vector(&this->avatar_info_vec);
};

// Line 289: range 00000000146CCE38-00000000146CCE5D
void __cdecl InstableSprayDungeonTeamInfo::InstableSprayDungeonTeamInfo(
        InstableSprayDungeonTeamInfo *const this,
        InstableSprayDungeonTeamInfo *a2)
{
  std::vector<InstableSprayDungeonAvatarInfo>::vector(&this->avatar_info_vec, &a2->avatar_info_vec);
};

// Line 569: range 000000001461EE2A-000000001461EE58
void __cdecl InstableSprayActivity::EnterDungeonParam::~EnterDungeonParam(
        InstableSprayActivity::EnterDungeonParam *const this)
{
  std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function(&this->callback);
  std::vector<InstableSprayDungeonAvatarInfo>::~vector(&this->avatar_info_vec);
};

// Line 932: range 000000001461E356-000000001461E3E9
int32_t __cdecl InstableSprayDungeonAvatarInfo::fromClient(
        InstableSprayDungeonAvatarInfo *const this,
        const proto::InstableSprayAvatarInfo *info)
{
  uint64_t v2; // rax
  bool is_trial; // dl

  v2 = proto::InstableSprayAvatarInfo::avatar_id(info);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->avatar_id = v2;
  is_trial = proto::InstableSprayAvatarInfo::is_trial(info);
  if ( *(char *)(((unsigned __int64)&this->is_trial >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trial);
  this->is_trial = is_trial;
  return 0;
};
