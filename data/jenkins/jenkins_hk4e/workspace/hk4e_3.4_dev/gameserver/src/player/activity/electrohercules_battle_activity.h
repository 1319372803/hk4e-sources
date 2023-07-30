// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/electrohercules_battle_activity.h

// Line 30: range 000000001666EDBC-000000001666EE91
void __cdecl ElectroherculesBattleStageData::ElectroherculesBattleStageData(ElectroherculesBattleStageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_stage_open);
  }
  this->is_stage_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_open_time);
  }
  this->stage_open_time = 0;
  std::map<unsigned int,ElectroherculesBattleLevelData>::map(&this->level_data_map);
};

// Line 30: range 00000000167A0604-00000000167A0791
void __cdecl ElectroherculesBattleStageData::ElectroherculesBattleStageData(
        ElectroherculesBattleStageData *const this,
        ElectroherculesBattleStageData *a2)
{
  uint32_t stage_id; // ecx
  bool is_stage_open; // cl
  uint32_t stage_open_time; // ecx

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
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_stage_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_stage_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_stage_open);
  }
  is_stage_open = a2->is_stage_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_stage_open);
  }
  this->is_stage_open = is_stage_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_open_time = a2->stage_open_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_open_time);
  }
  this->stage_open_time = stage_open_time;
  std::map<unsigned int,ElectroherculesBattleLevelData>::map(&this->level_data_map, &a2->level_data_map);
};

// Line 30: range 000000001666EE92-000000001666EEB0
void __cdecl ElectroherculesBattleStageData::~ElectroherculesBattleStageData(
        ElectroherculesBattleStageData *const this)
{
  std::map<unsigned int,ElectroherculesBattleLevelData>::~map(&this->level_data_map);
};

// Line 42: range 0000000016832DB0-0000000016832E21
void __cdecl ElectroherculesBattleActivity::~ElectroherculesBattleActivity(ElectroherculesBattleActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ElectroherculesBattleActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->electrohercules_battle_gallery_settle_wtr_);
  std::map<unsigned int,ElectroherculesBattleStageData>::~map(&this->stage_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 42: range 0000000016832E22-0000000016832E4C
void __cdecl ElectroherculesBattleActivity::~ElectroherculesBattleActivity(ElectroherculesBattleActivity *const this)
{
  ElectroherculesBattleActivity::~ElectroherculesBattleActivity(this);
  operator delete(this, 0x3E8uLL);
};

// Line 45: range 000000001702FDFE-000000001702FF28
void __fastcall ZN29ElectroherculesBattleActivityCI212BaseActivityER6Playerj(
        ElectroherculesBattleActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN29ElectroherculesBattleActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'ElectroherculesBattleActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,ElectroherculesBattleStageData>::map(&this->stage_data_map_);
  std::weak_ptr<Observer>::weak_ptr(&this->electrohercules_battle_gallery_settle_wtr_);
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

// Line 48: range 000000001384AA5F-000000001384AA69
data::NewActivityType __cdecl ElectroherculesBattleActivity::getActivityStaticType()
{
  return 3402;
};
