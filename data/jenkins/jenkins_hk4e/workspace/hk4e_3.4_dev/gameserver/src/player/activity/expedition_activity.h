// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/expedition_activity.h

// Line 19: range 0000000015335656-0000000015335684
void __cdecl ExpeditionPath::~ExpeditionPath(ExpeditionPath *const this)
{
  std::string::~string(&this->transaction);
  std::set<unsigned int>::~set(&this->avatar_id_set);
};

// Line 39: range 00000000153365DA-000000001533678A
ExpeditionAssistRecordInfo *__cdecl ExpeditionAssistRecordInfo::operator=(
        ExpeditionAssistRecordInfo *const this,
        ExpeditionAssistRecordInfo *a2)
{
  uint32_t avatar_id; // ecx
  uint32_t assist_time; // ecx
  uint32_t target_uid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  avatar_id = a2->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  assist_time = a2->assist_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->assist_time);
  }
  this->assist_time = assist_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  target_uid = a2->target_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_uid);
  }
  this->target_uid = target_uid;
  std::string::operator=(&this->target_nick_name, &a2->target_nick_name);
  std::string::operator=(&this->online_id, &a2->online_id);
  return this;
};

// Line 39: range 000000001518AA94-000000001518AB7F
void __cdecl ExpeditionAssistRecordInfo::ExpeditionAssistRecordInfo(ExpeditionAssistRecordInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->assist_time);
  }
  this->assist_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_uid);
  }
  this->target_uid = 0;
  std::string::basic_string(&this->target_nick_name);
  std::string::basic_string(&this->online_id);
};

// Line 39: range 0000000015462A62-0000000015462C0F
void __cdecl ExpeditionAssistRecordInfo::ExpeditionAssistRecordInfo(
        ExpeditionAssistRecordInfo *const this,
        ExpeditionAssistRecordInfo *a2)
{
  double v2; // xmm0_8
  uint32_t avatar_id; // ecx
  uint32_t assist_time; // ecx
  uint32_t target_uid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  avatar_id = a2->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->assist_time >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  assist_time = a2->assist_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->assist_time);
  }
  this->assist_time = assist_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  target_uid = a2->target_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_uid);
  }
  this->target_uid = target_uid;
  std::string::basic_string(&this->target_nick_name, &a2->target_nick_name, v2);
  std::string::basic_string(&this->online_id, &a2->online_id, v2);
};

// Line 39: range 0000000015236AD0-0000000015236CA4
void __cdecl ExpeditionAssistRecordInfo::ExpeditionAssistRecordInfo(
        ExpeditionAssistRecordInfo *const this,
        const ExpeditionAssistRecordInfo *a2)
{
  uint32_t avatar_id; // ecx
  uint32_t assist_time; // ecx
  uint32_t target_uid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  avatar_id = a2->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  assist_time = a2->assist_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->assist_time);
  }
  this->assist_time = assist_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  target_uid = a2->target_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_uid);
  }
  this->target_uid = target_uid;
  std::string::basic_string(&this->target_nick_name, &a2->target_nick_name);
  std::string::basic_string(&this->online_id, &a2->online_id);
};

// Line 39: range 000000001518AB80-000000001518ABAE
void __cdecl ExpeditionAssistRecordInfo::~ExpeditionAssistRecordInfo(ExpeditionAssistRecordInfo *const this)
{
  std::string::~string(&this->online_id);
  std::string::~string(&this->target_nick_name);
};

// Line 48: range 0000000015406FC0-0000000015407277
void __cdecl ExpeditionPath::ExpeditionPath(ExpeditionPath *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->path_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mark_id);
  }
  this->mark_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_time);
  }
  this->refresh_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->state);
  }
  this->state = EXPEDITION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time);
  }
  this->start_time = 0;
  std::set<unsigned int>::set(&this->avatar_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->assist_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->assist_uid);
  }
  this->assist_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->assist_avatar_id);
  }
  this->assist_avatar_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_costume_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->assist_costume_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->assist_costume_id);
  }
  this->assist_costume_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_probability >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bonus_probability);
  }
  this->bonus_probability = 0.0;
  std::string::basic_string(&this->transaction);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = 0;
};

// Line 52: range 00000000154073A6-0000000015407475
void __cdecl ExpeditionChallenge::ExpeditionChallenge(ExpeditionChallenge *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_group_load >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_group_load >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_group_load);
  }
  this->is_group_load = 0;
};

// Line 63: range 00000000154CCA58-00000000154CCB11
void __cdecl ExpeditionActivity::~ExpeditionActivity(ExpeditionActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ExpeditionActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->history_path_id_set_);
  std::map<unsigned int,ExpeditionChallenge>::~map(&this->expedition_challenge_map_);
  std::vector<ExpeditionAssistRecordInfo>::~vector(&this->assist_record_vec_);
  std::map<unsigned int,ExpeditionPath>::~map(&this->expedition_path_map_);
  std::vector<unsigned int>::~vector(&this->candidate_path_id_vec_);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr(&this->expedtion_timer_ptr_);
  BaseActivity::~BaseActivity(this);
};

// Line 63: range 00000000154CCB12-00000000154CCB3C
void __cdecl ExpeditionActivity::~ExpeditionActivity(ExpeditionActivity *const this)
{
  ExpeditionActivity::~ExpeditionActivity(this);
  operator delete(this, 0x4A0uLL);
};

// Line 66: range 000000001701DBC2-000000001701DECB
void __fastcall ZN18ExpeditionActivityCI212BaseActivityER6Playerj(ExpeditionActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN18ExpeditionActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'ExpeditionActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::shared_ptr<PlayerUnixTimer>::shared_ptr(&this->expedtion_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  std::vector<unsigned int>::vector(&this->candidate_path_id_vec_);
  std::map<unsigned int,ExpeditionPath>::map(&this->expedition_path_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expedition_count_);
  }
  this->expedition_count_ = 0;
  std::vector<ExpeditionAssistRecordInfo>::vector(&this->assist_record_vec_);
  std::map<unsigned int,ExpeditionChallenge>::map(&this->expedition_challenge_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expedition_finish_count_);
  }
  this->expedition_finish_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_challenge_id_);
  }
  this->cur_challenge_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::set<unsigned int>::set(&this->history_path_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_challenge_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_challenge_group_id_);
  }
  this->cur_challenge_group_id_ = 0;
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

// Line 68: range 00000000131DA010-00000000131DA01A
data::NewActivityType __cdecl ExpeditionActivity::getActivityStaticType()
{
  return 1301;
};

// Line 81: range 000000001518A598-000000001518A5E5
bool __cdecl ExpeditionActivity::isContentClosed(const ExpeditionActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};

// Line 131: range 00000000149EDE36-00000000149EDE82
uint32_t __cdecl ExpeditionActivity::getExpeditionFinishCount(const ExpeditionActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->expedition_finish_count_;
};
