// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/gear_activity.h

// Line 20: range 000000001518D102-000000001518D25D
void __cdecl GearLevelData::GearLevelData(GearLevelData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shortest_time);
  }
  this->shortest_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_duration);
  }
  this->last_duration = 0;
};

// Line 34: range 000000001702B2CA-000000001702B3DF
void __cdecl JigsawPictureData::JigsawPictureData(JigsawPictureData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shortest_time);
  }
  this->shortest_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_duration);
  }
  this->last_duration = 0;
};

// Line 48: range 00000000154CC330-00000000154CC38F
void __cdecl GearActivity::~GearActivity(GearActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GearActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,GearLevelData>::~map(&this->level_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 48: range 00000000154CC390-00000000154CC3BA
void __cdecl GearActivity::~GearActivity(GearActivity *const this)
{
  GearActivity::~GearActivity(this);
  operator delete(this, 0x3F0uLL);
};

// Line 54: range 000000001702B3E0-000000001702B5DB
void __fastcall ZN12GearActivityCI212BaseActivityER6Playerj(GearActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN12GearActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'GearActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,GearLevelData>::map(&this->level_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_finish_gear_level_);
  }
  this->player_finish_gear_level_ = 0;
  JigsawPictureData::JigsawPictureData(&this->picture_content_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_start_time_);
  }
  this->play_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_finish_time_);
  }
  this->last_finish_time_ = 0;
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

// Line 56: range 000000001384A9E6-000000001384A9F0
data::NewActivityType __cdecl GearActivity::getActivityStaticType()
{
  return 2802;
};
