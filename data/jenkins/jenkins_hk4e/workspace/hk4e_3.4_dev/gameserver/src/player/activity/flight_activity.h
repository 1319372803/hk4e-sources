// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/flight_activity.h

// Line 36: range 000000001518BF6E-000000001518C1A1
void __cdecl FlightDailyRecordData::clear(FlightDailyRecordData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_touched = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_time);
  }
  this->start_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_time_seconds >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_time_seconds >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->left_time_seconds);
  }
  this->left_time_seconds = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gather_points);
  }
  this->gather_points = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gather_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gather_limit);
  }
  this->gather_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->new_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->new_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->new_score);
  }
  this->new_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_id);
  }
  this->day_id = 0;
};

// Line 49: range 00000000154CC648-00000000154CC6CB
void __cdecl FlightActivity::~FlightActivity(FlightActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FlightActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::string::~string(&this->transaction_no_);
  std::unordered_map<unsigned int,FlightDailyRecordData *>::~unordered_map(&this->group_id_to_daily_data_map_);
  std::vector<FlightDailyRecordData>::~vector(&this->flight_daily_record_vec_);
  BaseActivity::~BaseActivity(this);
};

// Line 49: range 00000000154CC6CC-00000000154CC6F6
void __cdecl FlightActivity::~FlightActivity(FlightActivity *const this)
{
  FlightActivity::~FlightActivity(this);
  operator delete(this, 0x418uLL);
};

// Line 52: range 000000001701B692-000000001701B7CE
void __fastcall ZN14FlightActivityCI212BaseActivityER6Playerj(FlightActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN14FlightActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'FlightActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::vector<FlightDailyRecordData>::vector(&this->flight_daily_record_vec_);
  std::unordered_map<unsigned int,FlightDailyRecordData *>::unordered_map(&this->group_id_to_daily_data_map_);
  std::string::basic_string(&this->transaction_no_);
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
