// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/summer_time_activity.h

// Line 18: range 00000000180AEBEA-00000000180AEC79
void __cdecl StageData::StageData(StageData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->stage_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
};

// Line 27: range 0000000018327776-000000001832782F
void __cdecl SummerTimeActivity::~SummerTimeActivity(SummerTimeActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SummerTimeActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::string::~string(&this->boat_sprint_transaction_no_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::set<unsigned int>::~set(&this->disabled_float_signal_set_);
  std::set<unsigned int>::~set(&this->unlcoked_mist_zone_set_);
  std::map<unsigned int,SummerTimeActivity::SprintBoatData>::~map(&this->sprint_boat_data_map_);
  std::map<unsigned int,StageData>::~map(&this->stage_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 27: range 0000000018327830-000000001832785A
void __cdecl SummerTimeActivity::~SummerTimeActivity(SummerTimeActivity *const this)
{
  SummerTimeActivity::~SummerTimeActivity(this);
  operator delete(this, 0x4D8uLL);
};

// Line 30: range 0000000018292096-000000001829223D
void __cdecl SummerTimeActivity::SprintBoatData::SprintBoatData(SummerTimeActivity::SprintBoatData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->best_score = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_touched >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_touched >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_touched, v2, v3);
  this->is_touched = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->gather_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_points >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->gather_points, (((_BYTE)this + 8) & 7u) + 3, v4);
  this->gather_points = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->gather_limit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_limit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->gather_limit, (((_BYTE)this + 12) & 7u) + 3, v5);
  this->gather_limit = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->left_time_seconds >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_time_seconds >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->left_time_seconds, (((_BYTE)this + 16) & 7u) + 3, v6);
  this->left_time_seconds = 0;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->new_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->new_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->new_score, (((_BYTE)this + 20) & 7u) + 3, v7);
  this->new_score = 0;
};

// Line 41: range 00000000180AE9C8-00000000180AEAA8
void __cdecl SummerTimeActivity::SprintBoatData::resetScoreData(SummerTimeActivity::SprintBoatData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->gather_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_points >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->gather_points, (((_BYTE)this + 8) & 7u) + 3, v1);
  this->gather_points = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->left_time_seconds >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_time_seconds >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->left_time_seconds, (((_BYTE)this + 16) & 7u) + 3, v2);
  this->left_time_seconds = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->new_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->new_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->new_score, (((_BYTE)this + 20) & 7u) + 3, v3);
  this->new_score = 0;
};

// Line 53: range 0000000017021890-0000000017021BE6
void __fastcall ZN18SummerTimeActivityCI212BaseActivityER6Playerj(SummerTimeActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  char v14[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN18SummerTimeActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'SummerTimeActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,StageData>::map(&this->stage_map_);
  std::map<unsigned int,SummerTimeActivity::SprintBoatData>::map(&this->sprint_boat_data_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, a2, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  v7 = (((_BYTE)this + 12) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->draft_wood_, v7, v8);
  this->draft_wood_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mini_harpastum_, v7, &this->mini_harpastum_);
  }
  this->mini_harpastum_ = 0;
  std::set<unsigned int>::set(&this->unlcoked_mist_zone_set_);
  std::set<unsigned int>::set(&this->disabled_float_signal_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_float_signal_id_, v7, &this->next_float_signal_id_);
  }
  this->next_float_signal_id_ = 0;
  v9 = (((_BYTE)this + 124) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->last_float_signal_id_, v9, v10);
  this->last_float_signal_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_transfer_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_transfer_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_transfer_time_, v9, &this->last_transfer_time_);
  }
  this->last_transfer_time_ = 0;
  v11 = ((_BYTE)this - 124) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_sea_mist_closed_, v11, v12);
  this->is_sea_mist_closed_ = 1;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::string::basic_string(&this->boat_sprint_transaction_no_);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 54: range 000000001384A486-000000001384A490
data::NewActivityType __cdecl SummerTimeActivity::getActivityStaticType()
{
  return 1600;
};

// Line 75: range 0000000017D713B4-0000000017D71408
uint32_t __cdecl SummerTimeActivity::getDraftWood(const SummerTimeActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->draft_wood_);
  }
  return this->draft_wood_;
};

// Line 82: range 0000000017D7140A-0000000017D71456
uint32_t __cdecl SummerTimeActivity::getMiniHarpastum(const SummerTimeActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mini_harpastum_);
  }
  return this->mini_harpastum_;
};

// Line 114: range 00000000180AEAAA-00000000180AEAF7
bool __cdecl SummerTimeActivity::isContentClosed(const SummerTimeActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};

// Line 134: range 00000000180AEAF8-00000000180AEB4C
uint32_t __cdecl SummerTimeActivity::getLastFloatSignalId(const SummerTimeActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_float_signal_id_);
  }
  return this->last_float_signal_id_;
};
