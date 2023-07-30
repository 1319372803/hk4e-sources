// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/player_watcher_comp.h

// Line 34: range 000000001748001C-0000000017480145
void __cdecl RecordValue::RecordValue(RecordValue *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->max_critical_damage = 0.0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->max_fly_map_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_fly_map_distance >> 3)
                                                       + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->max_fly_map_distance, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->max_fly_map_distance = 0.0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->max_fly_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_fly_time >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->max_fly_time, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->max_fly_time = 0.0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->max_dash_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_dash_time >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->max_dash_time, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->max_dash_time = 0.0;
};

// Line 44: range 0000000014404668-00000000144046B5
void __cdecl DeliverItemToSalesmanEvent::DeliverItemToSalesmanEvent(DeliverItemToSalesmanEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'DeliverItemToSalesmanEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 44: range 00000000144EFFA2-00000000144EFFCC
void __cdecl DeliverItemToSalesmanEvent::~DeliverItemToSalesmanEvent(DeliverItemToSalesmanEvent *const this)
{
  DeliverItemToSalesmanEvent::~DeliverItemToSalesmanEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 44: range 00000000144EFF54-00000000144EFFA1
void __cdecl DeliverItemToSalesmanEvent::~DeliverItemToSalesmanEvent(DeliverItemToSalesmanEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DeliverItemToSalesmanEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 45: range 00000000144EFF28-00000000144EFF52
void __cdecl RecordMaxCriticalDamageUpdateEvent::~RecordMaxCriticalDamageUpdateEvent(
        RecordMaxCriticalDamageUpdateEvent *const this)
{
  RecordMaxCriticalDamageUpdateEvent::~RecordMaxCriticalDamageUpdateEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 45: range 00000000144EFEDA-00000000144EFF27
void __cdecl RecordMaxCriticalDamageUpdateEvent::~RecordMaxCriticalDamageUpdateEvent(
        RecordMaxCriticalDamageUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RecordMaxCriticalDamageUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 46: range 00000000144EFEAE-00000000144EFED8
void __cdecl RecordMaxFlyMapDistanceUpdateEvent::~RecordMaxFlyMapDistanceUpdateEvent(
        RecordMaxFlyMapDistanceUpdateEvent *const this)
{
  RecordMaxFlyMapDistanceUpdateEvent::~RecordMaxFlyMapDistanceUpdateEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 46: range 00000000144EFE60-00000000144EFEAD
void __cdecl RecordMaxFlyMapDistanceUpdateEvent::~RecordMaxFlyMapDistanceUpdateEvent(
        RecordMaxFlyMapDistanceUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RecordMaxFlyMapDistanceUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 47: range 00000000144EFE34-00000000144EFE5E
void __cdecl RecordMaxFlyTimeUpdateEvent::~RecordMaxFlyTimeUpdateEvent(RecordMaxFlyTimeUpdateEvent *const this)
{
  RecordMaxFlyTimeUpdateEvent::~RecordMaxFlyTimeUpdateEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 47: range 00000000144EFDE6-00000000144EFE33
void __cdecl RecordMaxFlyTimeUpdateEvent::~RecordMaxFlyTimeUpdateEvent(RecordMaxFlyTimeUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RecordMaxFlyTimeUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 48: range 00000000144EFDBA-00000000144EFDE4
void __cdecl RecordMaxDashTimeUpdateEvent::~RecordMaxDashTimeUpdateEvent(RecordMaxDashTimeUpdateEvent *const this)
{
  RecordMaxDashTimeUpdateEvent::~RecordMaxDashTimeUpdateEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 48: range 00000000144EFD6C-00000000144EFDB9
void __cdecl RecordMaxDashTimeUpdateEvent::~RecordMaxDashTimeUpdateEvent(RecordMaxDashTimeUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RecordMaxDashTimeUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 49: range 00000000144046B6-0000000014404703
void __cdecl SkilledAtRecipeEvent::SkilledAtRecipeEvent(SkilledAtRecipeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SkilledAtRecipeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 49: range 00000000144EFCF2-00000000144EFD3F
void __cdecl SkilledAtRecipeEvent::~SkilledAtRecipeEvent(SkilledAtRecipeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SkilledAtRecipeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 49: range 00000000144EFD40-00000000144EFD6A
void __cdecl SkilledAtRecipeEvent::~SkilledAtRecipeEvent(SkilledAtRecipeEvent *const this)
{
  SkilledAtRecipeEvent::~SkilledAtRecipeEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 50: range 0000000014404976-00000000144049C3
void __cdecl PlaceMiracleRingEvent::PlaceMiracleRingEvent(PlaceMiracleRingEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PlaceMiracleRingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 50: range 00000000144EFCC6-00000000144EFCF0
void __cdecl PlaceMiracleRingEvent::~PlaceMiracleRingEvent(PlaceMiracleRingEvent *const this)
{
  PlaceMiracleRingEvent::~PlaceMiracleRingEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 50: range 00000000144EFC78-00000000144EFCC5
void __cdecl PlaceMiracleRingEvent::~PlaceMiracleRingEvent(PlaceMiracleRingEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlaceMiracleRingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 51: range 00000000144049C4-0000000014404A11
void __cdecl MiracleRingDeliverItemEvent::MiracleRingDeliverItemEvent(MiracleRingDeliverItemEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MiracleRingDeliverItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 51: range 00000000144EFBFE-00000000144EFC4B
void __cdecl MiracleRingDeliverItemEvent::~MiracleRingDeliverItemEvent(MiracleRingDeliverItemEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MiracleRingDeliverItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 51: range 00000000144EFC4C-00000000144EFC76
void __cdecl MiracleRingDeliverItemEvent::~MiracleRingDeliverItemEvent(MiracleRingDeliverItemEvent *const this)
{
  MiracleRingDeliverItemEvent::~MiracleRingDeliverItemEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 52: range 0000000014404A12-0000000014404A5F
void __cdecl MiracleRingTakeRewardEvent::MiracleRingTakeRewardEvent(MiracleRingTakeRewardEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MiracleRingTakeRewardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 52: range 00000000144EFB84-00000000144EFBD1
void __cdecl MiracleRingTakeRewardEvent::~MiracleRingTakeRewardEvent(MiracleRingTakeRewardEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MiracleRingTakeRewardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 52: range 00000000144EFBD2-00000000144EFBFC
void __cdecl MiracleRingTakeRewardEvent::~MiracleRingTakeRewardEvent(MiracleRingTakeRewardEvent *const this)
{
  MiracleRingTakeRewardEvent::~MiracleRingTakeRewardEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 53: range 00000000144048DA-0000000014404927
void __cdecl HomeAvatarFetterGetEvent::HomeAvatarFetterGetEvent(HomeAvatarFetterGetEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarFetterGetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 53: range 00000000144EFB58-00000000144EFB82
void __cdecl HomeAvatarFetterGetEvent::~HomeAvatarFetterGetEvent(HomeAvatarFetterGetEvent *const this)
{
  HomeAvatarFetterGetEvent::~HomeAvatarFetterGetEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 53: range 00000000144EFB0A-00000000144EFB57
void __cdecl HomeAvatarFetterGetEvent::~HomeAvatarFetterGetEvent(HomeAvatarFetterGetEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarFetterGetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 53: range 0000000013844B50-0000000013844BA6
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWatcherComp::setIsFlyInLastTimeInterval(
        PlayerWatcherComp *const this,
        bool is_fly_in_last_time_interval__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_fly_in_last_time_interval_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_fly_in_last_time_interval_,
      is_fly_in_last_time_interval__out,
      &this->is_fly_in_last_time_interval_);
  this->is_fly_in_last_time_interval_ = is_fly_in_last_time_interval__out;
};

// Line 54: range 0000000014404928-0000000014404975
void __cdecl HomeDoPlantEvent::HomeDoPlantEvent(HomeDoPlantEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeDoPlantEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 54: range 00000000144EFA90-00000000144EFADD
void __cdecl HomeDoPlantEvent::~HomeDoPlantEvent(HomeDoPlantEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeDoPlantEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 54: range 00000000144EFADE-00000000144EFB08
void __cdecl HomeDoPlantEvent::~HomeDoPlantEvent(HomeDoPlantEvent *const this)
{
  HomeDoPlantEvent::~HomeDoPlantEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 56: range 00000000144EFA06-00000000144EFA63
void __cdecl DoneDungeonWithSameElementAvatarsEvent::~DoneDungeonWithSameElementAvatarsEvent(
        DoneDungeonWithSameElementAvatarsEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoneDungeonWithSameElementAvatarsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::unordered_map<data::ElementType,unsigned int>::~unordered_map(&this->element_count_map);
  BaseEvent::~BaseEvent(this);
};

// Line 56: range 00000000144EFA64-00000000144EFA8E
void __cdecl DoneDungeonWithSameElementAvatarsEvent::~DoneDungeonWithSameElementAvatarsEvent(
        DoneDungeonWithSameElementAvatarsEvent *const this)
{
  DoneDungeonWithSameElementAvatarsEvent::~DoneDungeonWithSameElementAvatarsEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 59: range 00000000143FF87A-00000000143FF905
void __cdecl DoneDungeonWithSameElementAvatarsEvent::DoneDungeonWithSameElementAvatarsEvent(
        DoneDungeonWithSameElementAvatarsEvent *const this,
        const std::unordered_map<data::ElementType,unsigned int> *element_count_map)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'DoneDungeonWithSameElementAvatarsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, element_count_map);
  this->_vptr_BaseEvent = v2;
  std::unordered_map<data::ElementType,unsigned int>::unordered_map(&this->element_count_map, element_count_map);
};

// Line 64: range 00000000144EF98C-00000000144EF9D9
void __cdecl AbilityStatePassTimeEvent::~AbilityStatePassTimeEvent(AbilityStatePassTimeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AbilityStatePassTimeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 64: range 00000000144EF9DA-00000000144EFA04
void __cdecl AbilityStatePassTimeEvent::~AbilityStatePassTimeEvent(AbilityStatePassTimeEvent *const this)
{
  AbilityStatePassTimeEvent::~AbilityStatePassTimeEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 67: range 00000000143FF906-00000000143FF9BD
void __cdecl AbilityStatePassTimeEvent::AbilityStatePassTimeEvent(
        AbilityStatePassTimeEvent *const this,
        data::AbilityState state,
        uint64_t pass_time_ms)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'AbilityStatePassTimeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, state);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_state >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->ability_state, state);
  this->ability_state = state;
  if ( *(_BYTE *)(((unsigned __int64)&this->pass_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->pass_time_ms, state);
  this->pass_time_ms = pass_time_ms;
};

// Line 73: range 00000000144EF912-00000000144EF95F
void __cdecl SitDownEvent::~SitDownEvent(SitDownEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SitDownEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 73: range 00000000144EF960-00000000144EF98A
void __cdecl SitDownEvent::~SitDownEvent(SitDownEvent *const this)
{
  SitDownEvent::~SitDownEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 76: range 00000000143FF9BE-00000000143FFB93
// local variable allocation has failed, the output may be wrong!
void __fastcall SitDownEvent::SitDownEvent(SitDownEvent *const this, __int64 scene_id, Vector3 pos)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 6 pos:76";
  *(_QWORD *)(v3 + 16) = SitDownEvent::SitDownEvent;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  *(Vector3 *)(v3 + 32) = pos;
  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'SitDownEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, scene_id, (_BYTE)this + 24);
  }
  this->scene_id = scene_id;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  this->pos = *(Vector3 *)(v3 + 32);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 79: range 0000000016050870-0000000016050BBD
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusBattleEndEvent::MechanicusBattleEndEvent(
        MechanicusBattleEndEvent *const this,
        bool is_succ,
        uint32_t end_gear_num,
        bool is_pure_gear_damage,
        uint32_t gear_kill_num,
        uint32_t interact_num,
        uint32_t fin_challenge_num,
        const std::unordered_map<unsigned int,unsigned int> *gadget_build_num_map,
        const std::unordered_map<unsigned int,unsigned int> *pick_card_num_map,
        const std::unordered_map<unsigned int,unsigned int> *card_target_num_map,
        uint32_t difficult_level,
        uint32_t max_gear_num,
        uint32_t used_gear_id_num)
{
  int (**v13)(...); // rdx
  __int64 v14; // rsi
  bool v15; // dl
  __int64 v16; // rsi
  bool v17; // dl
  bool v18; // dl
  __int64 v19; // rsi
  bool v20; // dl

  BaseEvent::BaseEvent(this);
  v13 = (int (**)(...))(&`vtable for'MechanicusBattleEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, is_succ);
  this->_vptr_BaseEvent = v13;
  if ( *(char *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_succ, is_succ, &this->is_succ);
  this->is_succ = is_succ;
  v14 = (((_BYTE)this + 28) & 7u) + 3;
  v15 = *(_BYTE *)(((unsigned __int64)&this->end_gear_num >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_gear_num >> 3) + 0x7FFF8000);
  if ( v15 )
    __asan_report_store4(&this->end_gear_num, v14, v15);
  this->end_gear_num = end_gear_num;
  if ( *(char *)(((unsigned __int64)&this->is_pure_gear_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_pure_gear_damage, v14, &this->is_pure_gear_damage);
  this->is_pure_gear_damage = is_pure_gear_damage;
  v16 = (((_BYTE)this + 36) & 7u) + 3;
  v17 = *(_BYTE *)(((unsigned __int64)&this->gear_kill_num >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gear_kill_num >> 3) + 0x7FFF8000);
  if ( v17 )
    __asan_report_store4(&this->gear_kill_num, v16, v17);
  this->gear_kill_num = gear_kill_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->interact_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->interact_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->interact_num, v16, (_BYTE)this + 40);
  }
  this->interact_num = interact_num;
  v18 = *(_BYTE *)(((unsigned __int64)&this->fin_challenge_num >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fin_challenge_num >> 3) + 0x7FFF8000);
  if ( v18 )
    __asan_report_store4(&this->fin_challenge_num, (((_BYTE)this + 44) & 7u) + 3, v18);
  this->fin_challenge_num = fin_challenge_num;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gadget_build_num_map, gadget_build_num_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->pick_card_num_map, pick_card_num_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->card_target_num_map, card_target_num_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficult_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficult_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficult_level, card_target_num_map, (_BYTE)this - 40);
  }
  this->difficult_level = difficult_level;
  v19 = (((_BYTE)this - 36) & 7u) + 3;
  v20 = *(_BYTE *)(((unsigned __int64)&this->max_gear_num >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_gear_num >> 3) + 0x7FFF8000);
  if ( v20 )
    __asan_report_store4(&this->max_gear_num, v19, v20);
  this->max_gear_num = max_gear_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->used_gear_id_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->used_gear_id_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->used_gear_id_num, v19, (_BYTE)this - 32);
  }
  this->used_gear_id_num = used_gear_id_num;
};

// Line 82: range 00000000144EF898-00000000144EF8E5
void __cdecl ShieldSourceNumUpdateEvent::~ShieldSourceNumUpdateEvent(ShieldSourceNumUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ShieldSourceNumUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 82: range 00000000144EF8E6-00000000144EF910
void __cdecl ShieldSourceNumUpdateEvent::~ShieldSourceNumUpdateEvent(ShieldSourceNumUpdateEvent *const this)
{
  ShieldSourceNumUpdateEvent::~ShieldSourceNumUpdateEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 85: range 00000000143FFB94-00000000143FFC21
// local variable allocation has failed, the output may be wrong!
void __cdecl ShieldSourceNumUpdateEvent::ShieldSourceNumUpdateEvent(
        ShieldSourceNumUpdateEvent *const this,
        uint32_t source_num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ShieldSourceNumUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&source_num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_num, *(_QWORD *)&source_num, (_BYTE)this + 24);
  }
  this->source_num = source_num;
};

// Line 90: range 00000000144EF81E-00000000144EF86B
void __cdecl ElementTypeChangeEvent::~ElementTypeChangeEvent(ElementTypeChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElementTypeChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 90: range 00000000144EF86C-00000000144EF896
void __cdecl ElementTypeChangeEvent::~ElementTypeChangeEvent(ElementTypeChangeEvent *const this)
{
  ElementTypeChangeEvent::~ElementTypeChangeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 93: range 00000000143FFC22-00000000143FFCF7
// local variable allocation has failed, the output may be wrong!
void __cdecl ElementTypeChangeEvent::ElementTypeChangeEvent(
        ElementTypeChangeEvent *const this,
        data::ElementType old_type,
        data::ElementType new_type)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ElementTypeChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&old_type);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->old_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->old_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->old_type, *(_QWORD *)&old_type, (_BYTE)this + 24);
  }
  this->old_type = old_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->new_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->new_type >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->new_type, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->new_type = new_type;
};

// Line 99: range 00000000144EF7A4-00000000144EF7F1
void __cdecl GadgetInteractableEvent::~GadgetInteractableEvent(GadgetInteractableEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GadgetInteractableEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 99: range 00000000144EF7F2-00000000144EF81C
void __cdecl GadgetInteractableEvent::~GadgetInteractableEvent(GadgetInteractableEvent *const this)
{
  GadgetInteractableEvent::~GadgetInteractableEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 102: range 00000000143FFCF8-00000000143FFD85
// local variable allocation has failed, the output may be wrong!
void __cdecl GadgetInteractableEvent::GadgetInteractableEvent(GadgetInteractableEvent *const this, uint32_t gadget_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GadgetInteractableEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gadget_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, *(_QWORD *)&gadget_id, (_BYTE)this + 24);
  }
  this->gadget_id = gadget_id;
};

// Line 107: range 00000000144EF778-00000000144EF7A2
void __cdecl KilledByCertainMonsterEvent::~KilledByCertainMonsterEvent(KilledByCertainMonsterEvent *const this)
{
  KilledByCertainMonsterEvent::~KilledByCertainMonsterEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 107: range 00000000144EF72A-00000000144EF777
void __cdecl KilledByCertainMonsterEvent::~KilledByCertainMonsterEvent(KilledByCertainMonsterEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KilledByCertainMonsterEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 110: range 00000000143FFD86-00000000143FFE13
// local variable allocation has failed, the output may be wrong!
void __cdecl KilledByCertainMonsterEvent::KilledByCertainMonsterEvent(
        KilledByCertainMonsterEvent *const this,
        uint32_t describel_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'KilledByCertainMonsterEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&describel_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->describel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->describel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->describel_id, *(_QWORD *)&describel_id, (_BYTE)this + 24);
  }
  this->describel_id = describel_id;
};

// Line 115: range 00000000144EF6FE-00000000144EF728
void __cdecl KilledBySpecificAbilityEvent::~KilledBySpecificAbilityEvent(KilledBySpecificAbilityEvent *const this)
{
  KilledBySpecificAbilityEvent::~KilledBySpecificAbilityEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 115: range 00000000144EF6A0-00000000144EF6FD
void __cdecl KilledBySpecificAbilityEvent::~KilledBySpecificAbilityEvent(KilledBySpecificAbilityEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KilledBySpecificAbilityEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->ability_name);
  BaseEvent::~BaseEvent(this);
};

// Line 118: range 00000000143FFE14-00000000143FFE9F
void __cdecl KilledBySpecificAbilityEvent::KilledBySpecificAbilityEvent(
        KilledBySpecificAbilityEvent *const this,
        const std::string *ability_name)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'KilledBySpecificAbilityEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, ability_name);
  this->_vptr_BaseEvent = v2;
  std::string::basic_string(&this->ability_name, ability_name);
};

// Line 123: range 00000000144EF674-00000000144EF69E
void __cdecl TeleportWithCertainPortalEvent::~TeleportWithCertainPortalEvent(
        TeleportWithCertainPortalEvent *const this)
{
  TeleportWithCertainPortalEvent::~TeleportWithCertainPortalEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 123: range 00000000144EF626-00000000144EF673
void __cdecl TeleportWithCertainPortalEvent::~TeleportWithCertainPortalEvent(
        TeleportWithCertainPortalEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeleportWithCertainPortalEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 126: range 00000000143FFEA0-00000000143FFF75
// local variable allocation has failed, the output may be wrong!
void __cdecl TeleportWithCertainPortalEvent::TeleportWithCertainPortalEvent(
        TeleportWithCertainPortalEvent *const this,
        uint32_t point_id,
        uint32_t scene_id)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'TeleportWithCertainPortalEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&point_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_id, *(_QWORD *)&point_id, (_BYTE)this + 24);
  }
  this->point_id = point_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->scene_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->scene_id = scene_id;
};

// Line 132: range 00000000144EF5FA-00000000144EF624
void __cdecl CollectSetOfReadingsEvent::~CollectSetOfReadingsEvent(CollectSetOfReadingsEvent *const this)
{
  CollectSetOfReadingsEvent::~CollectSetOfReadingsEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 132: range 00000000144EF5AC-00000000144EF5F9
void __cdecl CollectSetOfReadingsEvent::~CollectSetOfReadingsEvent(CollectSetOfReadingsEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CollectSetOfReadingsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 135: range 00000000143FFF76-0000000014400003
// local variable allocation has failed, the output may be wrong!
void __cdecl CollectSetOfReadingsEvent::CollectSetOfReadingsEvent(
        CollectSetOfReadingsEvent *const this,
        uint32_t set_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'CollectSetOfReadingsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&set_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->set_id, *(_QWORD *)&set_id, (_BYTE)this + 24);
  }
  this->set_id = set_id;
};

// Line 140: range 00000000144EF580-00000000144EF5AA
void __cdecl MpDungeonSucceedEvent::~MpDungeonSucceedEvent(MpDungeonSucceedEvent *const this)
{
  MpDungeonSucceedEvent::~MpDungeonSucceedEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 140: range 00000000144EF532-00000000144EF57F
void __cdecl MpDungeonSucceedEvent::~MpDungeonSucceedEvent(MpDungeonSucceedEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpDungeonSucceedEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 143: range 0000000014400004-0000000014400091
// local variable allocation has failed, the output may be wrong!
void __cdecl MpDungeonSucceedEvent::MpDungeonSucceedEvent(MpDungeonSucceedEvent *const this, uint32_t dungeon_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MpDungeonSucceedEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, (_BYTE)this + 24);
  }
  this->dungeon_id = dungeon_id;
};

// Line 148: range 00000000144EF506-00000000144EF530
void __cdecl MpKillMonsterNumEvent::~MpKillMonsterNumEvent(MpKillMonsterNumEvent *const this)
{
  MpKillMonsterNumEvent::~MpKillMonsterNumEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 148: range 00000000144EF4B8-00000000144EF505
void __cdecl MpKillMonsterNumEvent::~MpKillMonsterNumEvent(MpKillMonsterNumEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpKillMonsterNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 151: range 0000000014400092-0000000014400167
// local variable allocation has failed, the output may be wrong!
void __cdecl MpKillMonsterNumEvent::MpKillMonsterNumEvent(
        MpKillMonsterNumEvent *const this,
        uint32_t monster_type_id,
        uint32_t monster_id)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MpKillMonsterNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&monster_type_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_type_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_type_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_type_id, *(_QWORD *)&monster_type_id, (_BYTE)this + 24);
  }
  this->monster_type_id = monster_type_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->monster_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->monster_id = monster_id;
};

// Line 157: range 00000000144EF43E-00000000144EF48B
void __cdecl MpAreaGatherTimesEvent::~MpAreaGatherTimesEvent(MpAreaGatherTimesEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpAreaGatherTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 157: range 00000000144EF48C-00000000144EF4B6
void __cdecl MpAreaGatherTimesEvent::~MpAreaGatherTimesEvent(MpAreaGatherTimesEvent *const this)
{
  MpAreaGatherTimesEvent::~MpAreaGatherTimesEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 160: range 0000000014400168-00000000144001F5
// local variable allocation has failed, the output may be wrong!
void __cdecl MpAreaGatherTimesEvent::MpAreaGatherTimesEvent(MpAreaGatherTimesEvent *const this, uint32_t area_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MpAreaGatherTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&area_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, *(_QWORD *)&area_id, (_BYTE)this + 24);
  }
  this->area_id = area_id;
};

// Line 165: range 00000000144EF412-00000000144EF43C
void __cdecl DoneTowerStarsEvent::~DoneTowerStarsEvent(DoneTowerStarsEvent *const this)
{
  DoneTowerStarsEvent::~DoneTowerStarsEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 165: range 00000000144EF3C4-00000000144EF411
void __cdecl DoneTowerStarsEvent::~DoneTowerStarsEvent(DoneTowerStarsEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoneTowerStarsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 168: range 00000000144001F6-00000000144002CB
// local variable allocation has failed, the output may be wrong!
void __cdecl DoneTowerStarsEvent::DoneTowerStarsEvent(
        DoneTowerStarsEvent *const this,
        uint32_t floor_index,
        uint32_t star_num)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'DoneTowerStarsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&floor_index);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->floor_index, *(_QWORD *)&floor_index, (_BYTE)this + 24);
  }
  this->floor_index = floor_index;
  v4 = *(_BYTE *)(((unsigned __int64)&this->star_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->star_num >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->star_num, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->star_num = star_num;
};

// Line 174: range 00000000144EF34A-00000000144EF397
void __cdecl DoneTowerUnhurtEvent::~DoneTowerUnhurtEvent(DoneTowerUnhurtEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoneTowerUnhurtEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 174: range 00000000144EF398-00000000144EF3C2
void __cdecl DoneTowerUnhurtEvent::~DoneTowerUnhurtEvent(DoneTowerUnhurtEvent *const this)
{
  DoneTowerUnhurtEvent::~DoneTowerUnhurtEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 177: range 00000000144002CC-00000000144003A1
// local variable allocation has failed, the output may be wrong!
void __cdecl DoneTowerUnhurtEvent::DoneTowerUnhurtEvent(
        DoneTowerUnhurtEvent *const this,
        uint32_t floor_index,
        uint32_t level_index)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'DoneTowerUnhurtEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&floor_index);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->floor_index, *(_QWORD *)&floor_index, (_BYTE)this + 24);
  }
  this->floor_index = floor_index;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->level_index, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->level_index = level_index;
};

// Line 183: range 00000000144EF2C0-00000000144EF31D
void __cdecl DoneTowerGadgetUnhurtEvent::~DoneTowerGadgetUnhurtEvent(DoneTowerGadgetUnhurtEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoneTowerGadgetUnhurtEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->gadget_set);
  BaseEvent::~BaseEvent(this);
};

// Line 183: range 00000000144EF31E-00000000144EF348
void __cdecl DoneTowerGadgetUnhurtEvent::~DoneTowerGadgetUnhurtEvent(DoneTowerGadgetUnhurtEvent *const this)
{
  DoneTowerGadgetUnhurtEvent::~DoneTowerGadgetUnhurtEvent(this);
  operator delete(this, 0x58uLL);
};

// Line 186: range 00000000144003A2-00000000144004B5
void __cdecl DoneTowerGadgetUnhurtEvent::DoneTowerGadgetUnhurtEvent(
        DoneTowerGadgetUnhurtEvent *const this,
        const std::unordered_set<unsigned int> *gadget_set,
        uint32_t floor_index,
        uint32_t level_index)
{
  int (**v4)(...); // rdx
  bool v5; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'DoneTowerGadgetUnhurtEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, gadget_set);
  this->_vptr_BaseEvent = v4;
  std::unordered_set<unsigned int>::unordered_set(&this->gadget_set, gadget_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->floor_index, gadget_set, (_BYTE)this + 80);
  }
  this->floor_index = floor_index;
  v5 = *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->level_index, (((_BYTE)this + 84) & 7u) + 3, v5);
  this->level_index = level_index;
};

// Line 193: range 00000000144EF246-00000000144EF293
void __cdecl TreasureMapDoneRegionEvent::~TreasureMapDoneRegionEvent(TreasureMapDoneRegionEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TreasureMapDoneRegionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 193: range 00000000144EF294-00000000144EF2BE
void __cdecl TreasureMapDoneRegionEvent::~TreasureMapDoneRegionEvent(TreasureMapDoneRegionEvent *const this)
{
  TreasureMapDoneRegionEvent::~TreasureMapDoneRegionEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 196: range 00000000144004B6-00000000144005CB
// local variable allocation has failed, the output may be wrong!
void __cdecl TreasureMapDoneRegionEvent::TreasureMapDoneRegionEvent(
        TreasureMapDoneRegionEvent *const this,
        uint32_t activity_id,
        uint32_t schedule_id,
        uint32_t region_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'TreasureMapDoneRegionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, (_BYTE)this + 24);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->schedule_id, v5, v6);
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->region_id, v5, (_BYTE)this + 32);
  }
  this->region_id = region_id;
};

// Line 203: range 00000000144EF21A-00000000144EF244
void __cdecl TreasureSeelieDoneRegionEvent::~TreasureSeelieDoneRegionEvent(TreasureSeelieDoneRegionEvent *const this)
{
  TreasureSeelieDoneRegionEvent::~TreasureSeelieDoneRegionEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 203: range 00000000144EF1CC-00000000144EF219
void __cdecl TreasureSeelieDoneRegionEvent::~TreasureSeelieDoneRegionEvent(TreasureSeelieDoneRegionEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TreasureSeelieDoneRegionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 206: range 00000000144005CC-00000000144006E1
// local variable allocation has failed, the output may be wrong!
void __cdecl TreasureSeelieDoneRegionEvent::TreasureSeelieDoneRegionEvent(
        TreasureSeelieDoneRegionEvent *const this,
        uint32_t activity_id,
        uint32_t schedule_id,
        uint32_t region_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'TreasureSeelieDoneRegionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, (_BYTE)this + 24);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->schedule_id, v5, v6);
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->region_id, v5, (_BYTE)this + 32);
  }
  this->region_id = region_id;
};

// Line 213: range 000000001618937C-00000000161893FB
void __cdecl MechanicusBattleEndEvent::~MechanicusBattleEndEvent(MechanicusBattleEndEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->card_target_num_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->pick_card_num_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gadget_build_num_map);
  BaseEvent::~BaseEvent(this);
};

// Line 213: range 00000000161893FC-0000000016189426
void __cdecl MechanicusBattleEndEvent::~MechanicusBattleEndEvent(MechanicusBattleEndEvent *const this)
{
  MechanicusBattleEndEvent::~MechanicusBattleEndEvent(this);
  operator delete(this, 0xE8uLL);
};

// Line 254: range 0000000016189302-000000001618934F
void __cdecl MechanicusBattleScoreEvent::~MechanicusBattleScoreEvent(MechanicusBattleScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 254: range 0000000016189350-000000001618937A
void __cdecl MechanicusBattleScoreEvent::~MechanicusBattleScoreEvent(MechanicusBattleScoreEvent *const this)
{
  MechanicusBattleScoreEvent::~MechanicusBattleScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 257: range 0000000016050BBE-0000000016050C93
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusBattleScoreEvent::MechanicusBattleScoreEvent(
        MechanicusBattleScoreEvent *const this,
        uint32_t settle_points,
        uint32_t dungeon_id)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MechanicusBattleScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&settle_points);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_points, *(_QWORD *)&settle_points, (_BYTE)this + 24);
  }
  this->settle_points = settle_points;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->dungeon_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->dungeon_id = dungeon_id;
};

// Line 267: range 0000000014404704-0000000014404751
void __cdecl TimeIntervalFlyEvent::TimeIntervalFlyEvent(TimeIntervalFlyEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'TimeIntervalFlyEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 267: range 00000000144EF152-00000000144EF19F
void __cdecl TimeIntervalFlyEvent::~TimeIntervalFlyEvent(TimeIntervalFlyEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TimeIntervalFlyEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 267: range 00000000144EF1A0-00000000144EF1CA
void __cdecl TimeIntervalFlyEvent::~TimeIntervalFlyEvent(TimeIntervalFlyEvent *const this)
{
  TimeIntervalFlyEvent::~TimeIntervalFlyEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 268: range 0000000014404752-000000001440479F
void __cdecl TimeIntervalDashEvent::TimeIntervalDashEvent(TimeIntervalDashEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'TimeIntervalDashEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 268: range 00000000144EF126-00000000144EF150
void __cdecl TimeIntervalDashEvent::~TimeIntervalDashEvent(TimeIntervalDashEvent *const this)
{
  TimeIntervalDashEvent::~TimeIntervalDashEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 268: range 00000000144EF0D8-00000000144EF125
void __cdecl TimeIntervalDashEvent::~TimeIntervalDashEvent(TimeIntervalDashEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TimeIntervalDashEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 269: range 00000000144047A0-00000000144047ED
void __cdecl TimeIntervalClimbEvent::TimeIntervalClimbEvent(TimeIntervalClimbEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'TimeIntervalClimbEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 269: range 00000000144EF05E-00000000144EF0AB
void __cdecl TimeIntervalClimbEvent::~TimeIntervalClimbEvent(TimeIntervalClimbEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TimeIntervalClimbEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 269: range 00000000144EF0AC-00000000144EF0D6
void __cdecl TimeIntervalClimbEvent::~TimeIntervalClimbEvent(TimeIntervalClimbEvent *const this)
{
  TimeIntervalClimbEvent::~TimeIntervalClimbEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 270: range 00000000144047EE-000000001440483B
void __cdecl TimeIntervalHurtEvent::TimeIntervalHurtEvent(TimeIntervalHurtEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'TimeIntervalHurtEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 270: range 00000000144EEFE4-00000000144EF031
void __cdecl TimeIntervalHurtEvent::~TimeIntervalHurtEvent(TimeIntervalHurtEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TimeIntervalHurtEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 270: range 00000000144EF032-00000000144EF05C
void __cdecl TimeIntervalHurtEvent::~TimeIntervalHurtEvent(TimeIntervalHurtEvent *const this)
{
  TimeIntervalHurtEvent::~TimeIntervalHurtEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 271: range 000000001440483C-0000000014404889
void __cdecl TimeIntervalHurtByAbilityEvent::TimeIntervalHurtByAbilityEvent(TimeIntervalHurtByAbilityEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'TimeIntervalHurtByAbilityEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 271: range 00000000144EEFB8-00000000144EEFE2
void __cdecl TimeIntervalHurtByAbilityEvent::~TimeIntervalHurtByAbilityEvent(
        TimeIntervalHurtByAbilityEvent *const this)
{
  TimeIntervalHurtByAbilityEvent::~TimeIntervalHurtByAbilityEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 271: range 00000000144EEF6A-00000000144EEFB7
void __cdecl TimeIntervalHurtByAbilityEvent::~TimeIntervalHurtByAbilityEvent(
        TimeIntervalHurtByAbilityEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TimeIntervalHurtByAbilityEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 272: range 00000000144EEF3E-00000000144EEF68
void __cdecl TimeIntervalAbilityStateEvent::~TimeIntervalAbilityStateEvent(TimeIntervalAbilityStateEvent *const this)
{
  TimeIntervalAbilityStateEvent::~TimeIntervalAbilityStateEvent(this);
  operator delete(this, 0x48uLL);
};

// Line 272: range 00000000144EEEE0-00000000144EEF3D
void __cdecl TimeIntervalAbilityStateEvent::~TimeIntervalAbilityStateEvent(TimeIntervalAbilityStateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TimeIntervalAbilityStateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::set<data::AbilityState>::~set(&this->ability_state_set);
  BaseEvent::~BaseEvent(this);
};

// Line 275: range 00000000144007BA-0000000014400830
void __cdecl TimeIntervalAbilityStateEvent::TimeIntervalAbilityStateEvent(
        TimeIntervalAbilityStateEvent *const this,
        std::set<data::AbilityState> *p_ability_state_set)
{
  int (**v2)(...); // rdx
  std::set<data::AbilityState> *v3; // rax

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'TimeIntervalAbilityStateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_ability_state_set);
  this->_vptr_BaseEvent = v2;
  v3 = std::move<std::set<data::AbilityState> &>(p_ability_state_set);
  std::set<data::AbilityState>::set(&this->ability_state_set, v3);
};

// Line 281: range 0000000018327AC4-0000000018327AEE
void __cdecl SeaLampMiniQuestFinishEvent::~SeaLampMiniQuestFinishEvent(SeaLampMiniQuestFinishEvent *const this)
{
  SeaLampMiniQuestFinishEvent::~SeaLampMiniQuestFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 281: range 0000000018327A76-0000000018327AC3
void __cdecl SeaLampMiniQuestFinishEvent::~SeaLampMiniQuestFinishEvent(SeaLampMiniQuestFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SeaLampMiniQuestFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 284: range 00000000180ADF04-00000000180ADF91
// local variable allocation has failed, the output may be wrong!
void __cdecl SeaLampMiniQuestFinishEvent::SeaLampMiniQuestFinishEvent(
        SeaLampMiniQuestFinishEvent *const this,
        uint32_t finish_num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SeaLampMiniQuestFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&finish_num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_num, *(_QWORD *)&finish_num, (_BYTE)this + 24);
  }
  this->finish_num = finish_num;
};

// Line 289: range 00000000144EEE56-00000000144EEEB3
void __cdecl MainCoopSavePointAndEvent::~MainCoopSavePointAndEvent(MainCoopSavePointAndEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainCoopSavePointAndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->save_point_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 289: range 00000000144EEEB4-00000000144EEEDE
void __cdecl MainCoopSavePointAndEvent::~MainCoopSavePointAndEvent(MainCoopSavePointAndEvent *const this)
{
  MainCoopSavePointAndEvent::~MainCoopSavePointAndEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 292: range 0000000014400832-00000000144008FD
// local variable allocation has failed, the output may be wrong!
void __cdecl MainCoopSavePointAndEvent::MainCoopSavePointAndEvent(
        MainCoopSavePointAndEvent *const this,
        uint32_t main_coop_id,
        const std::vector<unsigned int> *save_point_vec)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MainCoopSavePointAndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&main_coop_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_coop_id, *(_QWORD *)&main_coop_id, (_BYTE)this + 24);
  }
  this->main_coop_id = main_coop_id;
  std::vector<unsigned int>::vector(&this->save_point_vec, save_point_vec);
};

// Line 300: range 00000000144EEE2A-00000000144EEE54
void __cdecl MainCoopSavePointOrEvent::~MainCoopSavePointOrEvent(MainCoopSavePointOrEvent *const this)
{
  MainCoopSavePointOrEvent::~MainCoopSavePointOrEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 300: range 00000000144EEDCC-00000000144EEE29
void __cdecl MainCoopSavePointOrEvent::~MainCoopSavePointOrEvent(MainCoopSavePointOrEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainCoopSavePointOrEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->save_point_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 303: range 00000000144008FE-00000000144009C9
// local variable allocation has failed, the output may be wrong!
void __cdecl MainCoopSavePointOrEvent::MainCoopSavePointOrEvent(
        MainCoopSavePointOrEvent *const this,
        uint32_t main_coop_id,
        const std::vector<unsigned int> *save_point_vec)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MainCoopSavePointOrEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&main_coop_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_coop_id, *(_QWORD *)&main_coop_id, (_BYTE)this + 24);
  }
  this->main_coop_id = main_coop_id;
  std::vector<unsigned int>::vector(&this->save_point_vec, save_point_vec);
};

// Line 311: range 000000001434AB64-000000001434ABB1
void __cdecl MainCoopVarEqualEvent::~MainCoopVarEqualEvent(MainCoopVarEqualEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainCoopVarEqualEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 311: range 000000001434ABB2-000000001434ABDC
void __cdecl MainCoopVarEqualEvent::~MainCoopVarEqualEvent(MainCoopVarEqualEvent *const this)
{
  MainCoopVarEqualEvent::~MainCoopVarEqualEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 314: range 00000000141F134A-00000000141F145F
// local variable allocation has failed, the output may be wrong!
void __cdecl MainCoopVarEqualEvent::MainCoopVarEqualEvent(
        MainCoopVarEqualEvent *const this,
        uint32_t main_coop_id,
        uint32_t var_key,
        int32_t var_value)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'MainCoopVarEqualEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&main_coop_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_coop_id, *(_QWORD *)&main_coop_id, (_BYTE)this + 24);
  }
  this->main_coop_id = main_coop_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->var_key >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->var_key >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->var_key, v5, v6);
  this->var_key = var_key;
  if ( *(_BYTE *)(((unsigned __int64)&this->var_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->var_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->var_value, v5, (_BYTE)this + 32);
  }
  this->var_value = var_value;
};

// Line 323: range 00000000144EEDA0-00000000144EEDCA
void __cdecl ActivityChannellerSlabFinishAllCampEvent::~ActivityChannellerSlabFinishAllCampEvent(
        ActivityChannellerSlabFinishAllCampEvent *const this)
{
  ActivityChannellerSlabFinishAllCampEvent::~ActivityChannellerSlabFinishAllCampEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 323: range 00000000144EED52-00000000144EED9F
void __cdecl ActivityChannellerSlabFinishAllCampEvent::~ActivityChannellerSlabFinishAllCampEvent(
        ActivityChannellerSlabFinishAllCampEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityChannellerSlabFinishAllCampEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 326: range 00000000144009CA-0000000014400A9F
// local variable allocation has failed, the output may be wrong!
void __cdecl ActivityChannellerSlabFinishAllCampEvent::ActivityChannellerSlabFinishAllCampEvent(
        ActivityChannellerSlabFinishAllCampEvent *const this,
        uint32_t activity_id,
        uint32_t schedule_id)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ActivityChannellerSlabFinishAllCampEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, (_BYTE)this + 24);
  }
  this->activity_id = activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->schedule_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->schedule_id = schedule_id;
};

// Line 334: range 00000000144EED26-00000000144EED50
void __cdecl ActivityChannellerSlabFinishAllOneoffDungeonEvent::~ActivityChannellerSlabFinishAllOneoffDungeonEvent(
        ActivityChannellerSlabFinishAllOneoffDungeonEvent *const this)
{
  ActivityChannellerSlabFinishAllOneoffDungeonEvent::~ActivityChannellerSlabFinishAllOneoffDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 334: range 00000000144EECD8-00000000144EED25
void __cdecl ActivityChannellerSlabFinishAllOneoffDungeonEvent::~ActivityChannellerSlabFinishAllOneoffDungeonEvent(
        ActivityChannellerSlabFinishAllOneoffDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityChannellerSlabFinishAllOneoffDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 337: range 0000000014400AA0-0000000014400B75
// local variable allocation has failed, the output may be wrong!
void __cdecl ActivityChannellerSlabFinishAllOneoffDungeonEvent::ActivityChannellerSlabFinishAllOneoffDungeonEvent(
        ActivityChannellerSlabFinishAllOneoffDungeonEvent *const this,
        uint32_t activity_id,
        uint32_t schedule_id)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ActivityChannellerSlabFinishAllOneoffDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, (_BYTE)this + 24);
  }
  this->activity_id = activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->schedule_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->schedule_id = schedule_id;
};

// Line 345: range 00000000144EECAC-00000000144EECD6
void __cdecl ObtainWoodEvent::~ObtainWoodEvent(ObtainWoodEvent *const this)
{
  ObtainWoodEvent::~ObtainWoodEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 345: range 00000000144EEC5E-00000000144EECAB
void __cdecl ObtainWoodEvent::~ObtainWoodEvent(ObtainWoodEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainWoodEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 348: range 0000000014400B76-0000000014400C03
// local variable allocation has failed, the output may be wrong!
void __cdecl ObtainWoodEvent::ObtainWoodEvent(ObtainWoodEvent *const this, uint32_t count)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ObtainWoodEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&count);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count, *(_QWORD *)&count, (_BYTE)this + 24);
  }
  this->count = count;
};

// Line 353: range 00000000144EEC32-00000000144EEC5C
void __cdecl MistTrialStatUpdateEvent::~MistTrialStatUpdateEvent(MistTrialStatUpdateEvent *const this)
{
  MistTrialStatUpdateEvent::~MistTrialStatUpdateEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 353: range 00000000144EEBE4-00000000144EEC31
void __cdecl MistTrialStatUpdateEvent::~MistTrialStatUpdateEvent(MistTrialStatUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MistTrialStatUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 356: range 0000000014400C04-0000000014400D19
// local variable allocation has failed, the output may be wrong!
void __cdecl MistTrialStatUpdateEvent::MistTrialStatUpdateEvent(
        MistTrialStatUpdateEvent *const this,
        uint32_t dungeon_id,
        uint32_t stat_id,
        uint32_t delta_val)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'MistTrialStatUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, (_BYTE)this + 24);
  }
  this->dungeon_id = dungeon_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->stat_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stat_id >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->stat_id, v5, v6);
  this->stat_id = stat_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_val >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta_val >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta_val, v5, (_BYTE)this + 32);
  }
  this->delta_val = delta_val;
};

// Line 363: range 00000000144EEB6A-00000000144EEBB7
void __cdecl ExhibitionAccumulableValueEvent::~ExhibitionAccumulableValueEvent(
        ExhibitionAccumulableValueEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ExhibitionAccumulableValueEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 363: range 00000000144EEBB8-00000000144EEBE2
void __cdecl ExhibitionAccumulableValueEvent::~ExhibitionAccumulableValueEvent(
        ExhibitionAccumulableValueEvent *const this)
{
  ExhibitionAccumulableValueEvent::~ExhibitionAccumulableValueEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 366: range 0000000014400D1A-0000000014400DEF
// local variable allocation has failed, the output may be wrong!
void __cdecl ExhibitionAccumulableValueEvent::ExhibitionAccumulableValueEvent(
        ExhibitionAccumulableValueEvent *const this,
        uint32_t exhibition_id,
        uint32_t add_value)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ExhibitionAccumulableValueEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&exhibition_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exhibition_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exhibition_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exhibition_id, *(_QWORD *)&exhibition_id, (_BYTE)this + 24);
  }
  this->exhibition_id = exhibition_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->add_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_value >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->add_value, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->add_value = add_value;
};

// Line 372: range 00000000144EEB3E-00000000144EEB68
void __cdecl ExhibitionReplaceableValueSettleNumEvent::~ExhibitionReplaceableValueSettleNumEvent(
        ExhibitionReplaceableValueSettleNumEvent *const this)
{
  ExhibitionReplaceableValueSettleNumEvent::~ExhibitionReplaceableValueSettleNumEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 372: range 00000000144EEAF0-00000000144EEB3D
void __cdecl ExhibitionReplaceableValueSettleNumEvent::~ExhibitionReplaceableValueSettleNumEvent(
        ExhibitionReplaceableValueSettleNumEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ExhibitionReplaceableValueSettleNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 375: range 0000000014400DF0-0000000014400EE7
// local variable allocation has failed, the output may be wrong!
void __cdecl ExhibitionReplaceableValueSettleNumEvent::ExhibitionReplaceableValueSettleNumEvent(
        ExhibitionReplaceableValueSettleNumEvent *const this,
        uint32_t exhibition_id,
        uint64_t before_value,
        uint64_t cur_value)
{
  int (**v4)(...); // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'ExhibitionReplaceableValueSettleNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&exhibition_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->exhibition_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exhibition_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exhibition_id, *(_QWORD *)&exhibition_id, (_BYTE)this + 24);
  }
  this->exhibition_id = exhibition_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->before_value >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->before_value, *(_QWORD *)&exhibition_id);
  this->before_value = before_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_value >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_value, *(_QWORD *)&exhibition_id);
  this->cur_value = cur_value;
};

// Line 382: range 00000000144EEAC4-00000000144EEAEE
void __cdecl ActivityScoreExceedValueEvent::~ActivityScoreExceedValueEvent(ActivityScoreExceedValueEvent *const this)
{
  ActivityScoreExceedValueEvent::~ActivityScoreExceedValueEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 382: range 00000000144EEA76-00000000144EEAC3
void __cdecl ActivityScoreExceedValueEvent::~ActivityScoreExceedValueEvent(ActivityScoreExceedValueEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityScoreExceedValueEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 385: range 0000000014400EE8-0000000014400FBD
// local variable allocation has failed, the output may be wrong!
void __cdecl ActivityScoreExceedValueEvent::ActivityScoreExceedValueEvent(
        ActivityScoreExceedValueEvent *const this,
        uint32_t activity_id,
        uint32_t add_score)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ActivityScoreExceedValueEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, (_BYTE)this + 24);
  }
  this->activity_id = activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->add_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_score >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->add_score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->add_score = add_score;
};

// Line 391: range 00000000144EEA4A-00000000144EEA74
void __cdecl KillGadgetsBySpecificSkillEvent::~KillGadgetsBySpecificSkillEvent(
        KillGadgetsBySpecificSkillEvent *const this)
{
  KillGadgetsBySpecificSkillEvent::~KillGadgetsBySpecificSkillEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 391: range 00000000144EE9EC-00000000144EEA49
void __cdecl KillGadgetsBySpecificSkillEvent::~KillGadgetsBySpecificSkillEvent(
        KillGadgetsBySpecificSkillEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KillGadgetsBySpecificSkillEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->ability_name);
  BaseEvent::~BaseEvent(this);
};

// Line 394: range 0000000014400FBE-00000000144010D1
void __cdecl KillGadgetsBySpecificSkillEvent::KillGadgetsBySpecificSkillEvent(
        KillGadgetsBySpecificSkillEvent *const this,
        const std::string *ability_name,
        uint32_t gadget_id,
        uint32_t group_id)
{
  int (**v4)(...); // rdx
  bool v5; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'KillGadgetsBySpecificSkillEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, ability_name);
  this->_vptr_BaseEvent = v4;
  std::string::basic_string(&this->ability_name, ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, ability_name, (_BYTE)this + 56);
  }
  this->gadget_id = gadget_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 60) & 7u) + 3, v5);
  this->group_id = group_id;
};

// Line 402: range 00000000144EE9C0-00000000144EE9EA
void __cdecl UnlockForgeEvent::~UnlockForgeEvent(UnlockForgeEvent *const this)
{
  UnlockForgeEvent::~UnlockForgeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 402: range 00000000144EE972-00000000144EE9BF
void __cdecl UnlockForgeEvent::~UnlockForgeEvent(UnlockForgeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockForgeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 405: range 00000000144010D2-000000001440115F
// local variable allocation has failed, the output may be wrong!
void __cdecl UnlockForgeEvent::UnlockForgeEvent(UnlockForgeEvent *const this, uint32_t forge_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'UnlockForgeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&forge_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forge_id, *(_QWORD *)&forge_id, (_BYTE)this + 24);
  }
  this->forge_id = forge_id;
};

// Line 411: range 00000000144EE8F8-00000000144EE945
void __cdecl EnterClimateAreaEvent::~EnterClimateAreaEvent(EnterClimateAreaEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterClimateAreaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 411: range 00000000144EE946-00000000144EE970
void __cdecl EnterClimateAreaEvent::~EnterClimateAreaEvent(EnterClimateAreaEvent *const this)
{
  EnterClimateAreaEvent::~EnterClimateAreaEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 414: range 0000000014401160-00000000144011ED
// local variable allocation has failed, the output may be wrong!
void __cdecl EnterClimateAreaEvent::EnterClimateAreaEvent(
        EnterClimateAreaEvent *const this,
        uint32_t json_climate_type)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnterClimateAreaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&json_climate_type);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->json_climate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->json_climate_type, *(_QWORD *)&json_climate_type, (_BYTE)this + 24);
  }
  this->json_climate_type = json_climate_type;
};

// Line 420: range 00000000144EE8CC-00000000144EE8F6
void __cdecl HomeFieldGatherEvent::~HomeFieldGatherEvent(HomeFieldGatherEvent *const this)
{
  HomeFieldGatherEvent::~HomeFieldGatherEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 420: range 00000000144EE87E-00000000144EE8CB
void __cdecl HomeFieldGatherEvent::~HomeFieldGatherEvent(HomeFieldGatherEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeFieldGatherEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 423: range 00000000144011EE-000000001440127B
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeFieldGatherEvent::HomeFieldGatherEvent(HomeFieldGatherEvent *const this, uint32_t furniture_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeFieldGatherEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&furniture_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->furniture_id, *(_QWORD *)&furniture_id, (_BYTE)this + 24);
  }
  this->furniture_id = furniture_id;
};

// Line 431: range 00000000144EE852-00000000144EE87C
void __cdecl LunaRiteSearchEvent::~LunaRiteSearchEvent(LunaRiteSearchEvent *const this)
{
  LunaRiteSearchEvent::~LunaRiteSearchEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 431: range 00000000144EE804-00000000144EE851
void __cdecl LunaRiteSearchEvent::~LunaRiteSearchEvent(LunaRiteSearchEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LunaRiteSearchEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 434: range 000000001440127C-0000000014401309
// local variable allocation has failed, the output may be wrong!
void __cdecl LunaRiteSearchEvent::LunaRiteSearchEvent(LunaRiteSearchEvent *const this, uint32_t area_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'LunaRiteSearchEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&area_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, *(_QWORD *)&area_id, (_BYTE)this + 24);
  }
  this->area_id = area_id;
};

// Line 441: range 00000000144EE7D8-00000000144EE802
void __cdecl SumoGallerySettleEvent::~SumoGallerySettleEvent(SumoGallerySettleEvent *const this)
{
  SumoGallerySettleEvent::~SumoGallerySettleEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 441: range 00000000144EE78A-00000000144EE7D7
void __cdecl SumoGallerySettleEvent::~SumoGallerySettleEvent(SumoGallerySettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SumoGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 444: range 000000001440130A-0000000014401468
// local variable allocation has failed, the output may be wrong!
void __cdecl SumoGallerySettleEvent::SumoGallerySettleEvent(
        SumoGallerySettleEvent *const this,
        uint32_t activity_id,
        uint32_t stage_id,
        uint32_t score,
        uint32_t all_stage_max_score)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  bool v7; // dl
  bool v8; // dl

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'SumoGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, (_BYTE)this + 24);
  }
  this->activity_id = activity_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->stage_id, v6, v7);
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v6, (_BYTE)this + 32);
  }
  this->score = score;
  v8 = *(_BYTE *)(((unsigned __int64)&this->all_stage_max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->all_stage_max_score >> 3)
                                                        + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->all_stage_max_score, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->all_stage_max_score = all_stage_max_score;
};

// Line 454: range 00000000144EE710-00000000144EE75D
void __cdecl UnlockScenePointEvent::~UnlockScenePointEvent(UnlockScenePointEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockScenePointEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 454: range 00000000144EE75E-00000000144EE788
void __cdecl UnlockScenePointEvent::~UnlockScenePointEvent(UnlockScenePointEvent *const this)
{
  UnlockScenePointEvent::~UnlockScenePointEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 457: range 000000001440146A-000000001440153F
// local variable allocation has failed, the output may be wrong!
void __cdecl UnlockScenePointEvent::UnlockScenePointEvent(
        UnlockScenePointEvent *const this,
        uint32_t scene_id,
        uint32_t point_id)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'UnlockScenePointEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, (_BYTE)this + 24);
  }
  this->scene_id = scene_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->point_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->point_id = point_id;
};

// Line 465: range 00000000144EE686-00000000144EE6E3
void __cdecl RogueDungeonGadgetDieEvent::~RogueDungeonGadgetDieEvent(RogueDungeonGadgetDieEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueDungeonGadgetDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<data::RogueCreateGadgetType,unsigned int>::~map(&this->die_gadget_count_map);
  BaseEvent::~BaseEvent(this);
};

// Line 465: range 00000000144EE6E4-00000000144EE70E
void __cdecl RogueDungeonGadgetDieEvent::~RogueDungeonGadgetDieEvent(RogueDungeonGadgetDieEvent *const this)
{
  RogueDungeonGadgetDieEvent::~RogueDungeonGadgetDieEvent(this);
  operator delete(this, 0x60uLL);
};

// Line 468: range 0000000014401582-0000000014401719
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueDungeonGadgetDieEvent::RogueDungeonGadgetDieEvent(
        RogueDungeonGadgetDieEvent *const this,
        uint32_t stage_id,
        uint32_t level_id,
        uint32_t dungeon_id,
        const std::map<data::RogueCreateGadgetType,unsigned int> *die_gadget_count_map,
        bool is_triggered_by_finish)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'RogueDungeonGadgetDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, (_BYTE)this + 24);
  }
  this->stage_id = stage_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->level_id, v7, v8);
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v7, (_BYTE)this + 32);
  }
  this->dungeon_id = dungeon_id;
  std::map<data::RogueCreateGadgetType,unsigned int>::map(&this->die_gadget_count_map, die_gadget_count_map);
  if ( *(char *)(((unsigned __int64)&this->is_triggered_by_finish >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_triggered_by_finish, die_gadget_count_map, &this->is_triggered_by_finish);
  this->is_triggered_by_finish = is_triggered_by_finish;
};

// Line 479: range 00000000144EE65A-00000000144EE684
void __cdecl RogueMonsterDieDieEvent::~RogueMonsterDieDieEvent(RogueMonsterDieDieEvent *const this)
{
  RogueMonsterDieDieEvent::~RogueMonsterDieDieEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 479: range 00000000144EE60C-00000000144EE659
void __cdecl RogueMonsterDieDieEvent::~RogueMonsterDieDieEvent(RogueMonsterDieDieEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueMonsterDieDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 482: range 000000001440171A-0000000014401832
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueMonsterDieDieEvent::RogueMonsterDieDieEvent(
        RogueMonsterDieDieEvent *const this,
        uint32_t stage_id,
        uint32_t die_monster_num,
        bool is_triggered_by_finish)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'RogueMonsterDieDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, (_BYTE)this + 24);
  }
  this->stage_id = stage_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->die_monster_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_monster_num >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->die_monster_num, v5, v6);
  this->die_monster_num = die_monster_num;
  if ( *(char *)(((unsigned __int64)&this->is_triggered_by_finish >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_triggered_by_finish, v5, &this->is_triggered_by_finish);
  this->is_triggered_by_finish = is_triggered_by_finish;
};

// Line 491: range 00000000144EE5E0-00000000144EE60A
void __cdecl RogueShikigamiUpgradeEvent::~RogueShikigamiUpgradeEvent(RogueShikigamiUpgradeEvent *const this)
{
  RogueShikigamiUpgradeEvent::~RogueShikigamiUpgradeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 491: range 00000000144EE592-00000000144EE5DF
void __cdecl RogueShikigamiUpgradeEvent::~RogueShikigamiUpgradeEvent(RogueShikigamiUpgradeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueShikigamiUpgradeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 494: range 0000000014401834-0000000014401909
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueShikigamiUpgradeEvent::RogueShikigamiUpgradeEvent(
        RogueShikigamiUpgradeEvent *const this,
        uint32_t id,
        uint32_t level)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'RogueShikigamiUpgradeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->shikigami_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shikigami_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shikigami_id, *(_QWORD *)&id, (_BYTE)this + 24);
  }
  this->shikigami_id = id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->shikigami_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shikigami_level >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->shikigami_level, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->shikigami_level = level;
};

// Line 502: range 00000000144EE518-00000000144EE565
void __cdecl RogueTriggerCurseEvent::~RogueTriggerCurseEvent(RogueTriggerCurseEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueTriggerCurseEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 502: range 00000000144EE566-00000000144EE590
void __cdecl RogueTriggerCurseEvent::~RogueTriggerCurseEvent(RogueTriggerCurseEvent *const this)
{
  RogueTriggerCurseEvent::~RogueTriggerCurseEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 505: range 000000001440190A-0000000014401957
void __cdecl RogueTriggerCurseEvent::RogueTriggerCurseEvent(RogueTriggerCurseEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'RogueTriggerCurseEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 509: range 00000000144EE49E-00000000144EE4EB
void __cdecl RogueSelectCardEvent::~RogueSelectCardEvent(RogueSelectCardEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueSelectCardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 509: range 00000000144EE4EC-00000000144EE516
void __cdecl RogueSelectCardEvent::~RogueSelectCardEvent(RogueSelectCardEvent *const this)
{
  RogueSelectCardEvent::~RogueSelectCardEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 512: range 0000000014401958-0000000014401A70
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueSelectCardEvent::RogueSelectCardEvent(
        RogueSelectCardEvent *const this,
        uint32_t type,
        uint32_t count,
        bool is_settle)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'RogueSelectCardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&type);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type, *(_QWORD *)&type, (_BYTE)this + 24);
  }
  this->card_type = type;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->card_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_count >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->card_count, v5, v6);
  this->card_count = count;
  if ( *(char *)(((unsigned __int64)&this->is_settle_event >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_settle_event, v5, &this->is_settle_event);
  this->is_settle_event = is_settle;
};

// Line 521: range 00000000144EE424-00000000144EE471
void __cdecl WinterCampSnomanEditEvent::~WinterCampSnomanEditEvent(WinterCampSnomanEditEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WinterCampSnomanEditEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 521: range 00000000144EE472-00000000144EE49C
void __cdecl WinterCampSnomanEditEvent::~WinterCampSnomanEditEvent(WinterCampSnomanEditEvent *const this)
{
  WinterCampSnomanEditEvent::~WinterCampSnomanEditEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 524: range 0000000014401A72-0000000014401ABF
void __cdecl WinterCampSnomanEditEvent::WinterCampSnomanEditEvent(WinterCampSnomanEditEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'WinterCampSnomanEditEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 527: range 00000000144EE3F8-00000000144EE422
void __cdecl ProjectionFinishLevelEvent::~ProjectionFinishLevelEvent(ProjectionFinishLevelEvent *const this)
{
  ProjectionFinishLevelEvent::~ProjectionFinishLevelEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 527: range 00000000144EE3AA-00000000144EE3F7
void __cdecl ProjectionFinishLevelEvent::~ProjectionFinishLevelEvent(ProjectionFinishLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ProjectionFinishLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 530: range 0000000014401AC0-0000000014401B4D
// local variable allocation has failed, the output may be wrong!
void __cdecl ProjectionFinishLevelEvent::ProjectionFinishLevelEvent(
        ProjectionFinishLevelEvent *const this,
        uint32_t id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ProjectionFinishLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&id, (_BYTE)this + 24);
  }
  this->level_id = id;
};

// Line 537: range 00000000144EE330-00000000144EE37D
void __cdecl BartenderFinishStoryModuleEvent::~BartenderFinishStoryModuleEvent(
        BartenderFinishStoryModuleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BartenderFinishStoryModuleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 537: range 00000000144EE37E-00000000144EE3A8
void __cdecl BartenderFinishStoryModuleEvent::~BartenderFinishStoryModuleEvent(
        BartenderFinishStoryModuleEvent *const this)
{
  BartenderFinishStoryModuleEvent::~BartenderFinishStoryModuleEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 540: range 0000000014401B4E-0000000014401BDB
// local variable allocation has failed, the output may be wrong!
void __cdecl BartenderFinishStoryModuleEvent::BartenderFinishStoryModuleEvent(
        BartenderFinishStoryModuleEvent *const this,
        uint32_t id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'BartenderFinishStoryModuleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->task_id, *(_QWORD *)&id, (_BYTE)this + 24);
  }
  this->task_id = id;
};

// Line 547: range 0000000014404AAE-0000000014404AFB
void __cdecl BartenderUnlockFormulaEvent::BartenderUnlockFormulaEvent(BartenderUnlockFormulaEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'BartenderUnlockFormulaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 547: range 00000000144EE304-00000000144EE32E
void __cdecl BartenderUnlockFormulaEvent::~BartenderUnlockFormulaEvent(BartenderUnlockFormulaEvent *const this)
{
  BartenderUnlockFormulaEvent::~BartenderUnlockFormulaEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 547: range 00000000144EE2B6-00000000144EE303
void __cdecl BartenderUnlockFormulaEvent::~BartenderUnlockFormulaEvent(BartenderUnlockFormulaEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BartenderUnlockFormulaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 549: range 00000000144EE28A-00000000144EE2B4
void __cdecl BartenderChallengeModuleLevelScoreEvent::~BartenderChallengeModuleLevelScoreEvent(
        BartenderChallengeModuleLevelScoreEvent *const this)
{
  BartenderChallengeModuleLevelScoreEvent::~BartenderChallengeModuleLevelScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 549: range 00000000144EE23C-00000000144EE289
void __cdecl BartenderChallengeModuleLevelScoreEvent::~BartenderChallengeModuleLevelScoreEvent(
        BartenderChallengeModuleLevelScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BartenderChallengeModuleLevelScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 552: range 0000000014401BDC-0000000014401CB1
// local variable allocation has failed, the output may be wrong!
void __cdecl BartenderChallengeModuleLevelScoreEvent::BartenderChallengeModuleLevelScoreEvent(
        BartenderChallengeModuleLevelScoreEvent *const this,
        uint32_t id,
        uint32_t score)
{
  int (**v3)(...); // rdx
  bool v4; // dl

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'BartenderChallengeModuleLevelScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&id, (_BYTE)this + 24);
  }
  this->level_id = id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_score >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->level_score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->level_score = score;
};

// Line 560: range 00000000144EE210-00000000144EE23A
void __cdecl IrodoriChessSettleNewRecordEvent::~IrodoriChessSettleNewRecordEvent(
        IrodoriChessSettleNewRecordEvent *const this)
{
  IrodoriChessSettleNewRecordEvent::~IrodoriChessSettleNewRecordEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 560: range 00000000144EE1C2-00000000144EE20F
void __cdecl IrodoriChessSettleNewRecordEvent::~IrodoriChessSettleNewRecordEvent(
        IrodoriChessSettleNewRecordEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriChessSettleNewRecordEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 563: range 0000000014401CB2-0000000014401DC7
// local variable allocation has failed, the output may be wrong!
void __cdecl IrodoriChessSettleNewRecordEvent::IrodoriChessSettleNewRecordEvent(
        IrodoriChessSettleNewRecordEvent *const this,
        uint32_t level_id,
        bool is_hard_map,
        uint32_t settle_score)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'IrodoriChessSettleNewRecordEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_, *(_QWORD *)&level_id, (_BYTE)this + 24);
  }
  this->level_id_ = level_id;
  v5 = ((_BYTE)this + 28) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_hard_map_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_hard_map_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_hard_map_, v5, v6);
  this->is_hard_map_ = is_hard_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->settle_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->settle_score_, v5, (_BYTE)this + 32);
  }
  this->settle_score_ = settle_score;
};

// Line 572: range 00000000144EE196-00000000144EE1C0
void __cdecl IrodoriMasterLevelEvent::~IrodoriMasterLevelEvent(IrodoriMasterLevelEvent *const this)
{
  IrodoriMasterLevelEvent::~IrodoriMasterLevelEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 572: range 00000000144EE148-00000000144EE195
void __cdecl IrodoriMasterLevelEvent::~IrodoriMasterLevelEvent(IrodoriMasterLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriMasterLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 575: range 0000000014401DC8-0000000014401F29
// local variable allocation has failed, the output may be wrong!
void __cdecl IrodoriMasterLevelEvent::IrodoriMasterLevelEvent(
        IrodoriMasterLevelEvent *const this,
        uint32_t id,
        uint32_t finish_difficulty,
        bool is_finish_master,
        uint32_t finish_master_time)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  bool v7; // dl
  bool v8; // dl

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'IrodoriMasterLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&id, (_BYTE)this + 24);
  }
  this->level_id = id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->difficulty, v6, v7);
  this->difficulty = finish_difficulty;
  if ( *(char *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish, v6, &this->is_finish);
  this->is_finish = is_finish_master;
  v8 = *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->finish_time, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->finish_time = finish_master_time;
};

// Line 585: range 00000000144EE0CE-00000000144EE11B
void __cdecl FinishRogueDiaryStageEvent::~FinishRogueDiaryStageEvent(FinishRogueDiaryStageEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishRogueDiaryStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 585: range 00000000144EE11C-00000000144EE146
void __cdecl FinishRogueDiaryStageEvent::~FinishRogueDiaryStageEvent(FinishRogueDiaryStageEvent *const this)
{
  FinishRogueDiaryStageEvent::~FinishRogueDiaryStageEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 588: range 0000000014401F2A-000000001440203F
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishRogueDiaryStageEvent::FinishRogueDiaryStageEvent(
        FinishRogueDiaryStageEvent *const this,
        uint32_t id,
        uint32_t finish_difficulty,
        uint32_t finish_time)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'FinishRogueDiaryStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&id, (_BYTE)this + 24);
  }
  this->stage_id = id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->difficulty, v5, v6);
  this->difficulty = finish_difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time, v5, (_BYTE)this + 32);
  }
  this->time = finish_time;
};

// Line 597: range 00000000144EE0A2-00000000144EE0CC
void __cdecl FinishRogueDiaryStageRoundEvent::~FinishRogueDiaryStageRoundEvent(
        FinishRogueDiaryStageRoundEvent *const this)
{
  FinishRogueDiaryStageRoundEvent::~FinishRogueDiaryStageRoundEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 597: range 00000000144EE054-00000000144EE0A1
void __cdecl FinishRogueDiaryStageRoundEvent::~FinishRogueDiaryStageRoundEvent(
        FinishRogueDiaryStageRoundEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishRogueDiaryStageRoundEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 600: range 0000000014402040-0000000014402155
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishRogueDiaryStageRoundEvent::FinishRogueDiaryStageRoundEvent(
        FinishRogueDiaryStageRoundEvent *const this,
        uint32_t id,
        uint32_t finish_difficulty,
        uint32_t finish_round)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'FinishRogueDiaryStageRoundEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&id, (_BYTE)this + 24);
  }
  this->stage_id = id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->difficulty, v5, v6);
  this->difficulty = finish_difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round, v5, (_BYTE)this + 32);
  }
  this->round = finish_round;
};

// Line 609: range 00000000144EE028-00000000144EE052
void __cdecl CombatMulticondConfigCommonEvent::~CombatMulticondConfigCommonEvent(
        CombatMulticondConfigCommonEvent *const this)
{
  CombatMulticondConfigCommonEvent::~CombatMulticondConfigCommonEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 609: range 00000000144EDFDA-00000000144EE027
void __cdecl CombatMulticondConfigCommonEvent::~CombatMulticondConfigCommonEvent(
        CombatMulticondConfigCommonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CombatMulticondConfigCommonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 612: range 0000000014402156-000000001440226B
// local variable allocation has failed, the output may be wrong!
void __cdecl CombatMulticondConfigCommonEvent::CombatMulticondConfigCommonEvent(
        CombatMulticondConfigCommonEvent *const this,
        uint32_t watcher_id,
        uint32_t stage_id,
        uint32_t add_progress)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'CombatMulticondConfigCommonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&watcher_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher_id, *(_QWORD *)&watcher_id, (_BYTE)this + 24);
  }
  this->watcher_id = watcher_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->stage_id, v5, v6);
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_progress, v5, (_BYTE)this + 32);
  }
  this->add_progress = add_progress;
};

// Line 621: range 00000000144EDFAE-00000000144EDFD8
void __cdecl VintageMarketCoinAChangeEvent::~VintageMarketCoinAChangeEvent(VintageMarketCoinAChangeEvent *const this)
{
  VintageMarketCoinAChangeEvent::~VintageMarketCoinAChangeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 621: range 00000000144EDF60-00000000144EDFAD
void __cdecl VintageMarketCoinAChangeEvent::~VintageMarketCoinAChangeEvent(VintageMarketCoinAChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageMarketCoinAChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 624: range 000000001440226C-00000000144022F9
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageMarketCoinAChangeEvent::VintageMarketCoinAChangeEvent(
        VintageMarketCoinAChangeEvent *const this,
        uint32_t coin)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageMarketCoinAChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&coin);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count, *(_QWORD *)&coin, (_BYTE)this + 24);
  }
  this->count = coin;
};

// Line 631: range 0000000014404AFC-0000000014404B49
void __cdecl VintageMarketContentFinishEvent::VintageMarketContentFinishEvent(
        VintageMarketContentFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageMarketContentFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 631: range 00000000144EDEE6-00000000144EDF33
void __cdecl VintageMarketContentFinishEvent::~VintageMarketContentFinishEvent(
        VintageMarketContentFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageMarketContentFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 631: range 00000000144EDF34-00000000144EDF5E
void __cdecl VintageMarketContentFinishEvent::~VintageMarketContentFinishEvent(
        VintageMarketContentFinishEvent *const this)
{
  VintageMarketContentFinishEvent::~VintageMarketContentFinishEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 635: range 00000000144EDC30-00000000144EDD2D
void __cdecl PlayerWatcherComp::~PlayerWatcherComp(PlayerWatcherComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerWatcherComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::set<data::AbilityState>::~set(&this->cur_avatar_ability_state_in_last_time_interval_set_);
  std::unordered_set<std::string>::~unordered_set(&this->hurt_ability_name_set_);
  PlayerTimer::~PlayerTimer(&this->check_time_interval_timer_);
  SkillStatCollector::~SkillStatCollector(&this->skill_stat_collector_);
  ElementReactionStatCollector::~ElementReactionStatCollector(&this->element_reaction_stat_collector_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->trigger_watcher_map_);
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::~unordered_map(&this->watcher_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->push_tips_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->finished_global_watcher_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->global_watcher_progress_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 635: range 00000000144EDD2E-00000000144EDD58
void __cdecl PlayerWatcherComp::~PlayerWatcherComp(PlayerWatcherComp *const this)
{
  PlayerWatcherComp::~PlayerWatcherComp(this);
  operator delete(this, 0x310uLL);
};

// Line 641: range 000000001748042E-00000000174808C0
void __cdecl ZN17PlayerWatcherCompCI214PlayerCompBaseER6Player(PlayerWatcherComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerWatcherComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  PlayerWatcherComp *v11; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerWatcherComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerWatcherComp::*)(long unsigned int),PlayerWatcherComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerWatcherComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->global_watcher_progress_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->finished_global_watcher_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->push_tips_map_);
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::unordered_map(&this->watcher_map_);
  RecordValue::RecordValue(&this->record_value_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->trigger_watcher_map_);
  ElementReactionStatCollector::ElementReactionStatCollector(&this->element_reaction_stat_collector_);
  SkillStatCollector::SkillStatCollector(&this->skill_stat_collector_);
  if ( *(char *)(((unsigned __int64)&this->is_ability_group_inited >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ability_group_inited, a2, &this->is_ability_group_inited);
  this->is_ability_group_inited = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v11 = this;
  __f[0] = (void (*)(PlayerWatcherComp *, unsigned __int64))PlayerWatcherComp::triggerAndResetStatusInLastTimeInterval;
  __f[1] = 0LL;
  std::bind<void (PlayerWatcherComp::*)(unsigned long),PlayerWatcherComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v11,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerWatcherComp::*)(unsigned long) ()(PlayerWatcherComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerTimer::PlayerTimer(&this->check_time_interval_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(char *)(((unsigned __int64)&this->is_fly_in_last_time_interval_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_fly_in_last_time_interval_, &p_player_ptr, &this->is_fly_in_last_time_interval_);
  this->is_fly_in_last_time_interval_ = 0;
  v5 = ((_BYTE)this - 103) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_dash_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_dash_in_last_time_interval_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_dash_in_last_time_interval_, v5, v6);
  this->is_dash_in_last_time_interval_ = 0;
  v7 = ((_BYTE)this - 102) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_climb_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_climb_in_last_time_interval_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_climb_in_last_time_interval_, v7, v8);
  this->is_climb_in_last_time_interval_ = 0;
  v9 = ((_BYTE)this - 101) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_cur_avatar_hurt_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_cur_avatar_hurt_in_last_time_interval_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_cur_avatar_hurt_in_last_time_interval_, v9, v10);
  this->is_cur_avatar_hurt_in_last_time_interval_ = 0;
  std::unordered_set<std::string>::unordered_set(&this->hurt_ability_name_set_);
  std::set<data::AbilityState>::set(&this->cur_avatar_ability_state_in_last_time_interval_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_trigger_time_interval_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_trigger_time_interval_time_ms_, v9);
  this->last_trigger_time_interval_time_ms_ = 0LL;
};

// Line 723: range 00000000149F2CB2-00000000149F2CC5
const ElementReactionStatCollector *__cdecl PlayerWatcherComp::getElementReactionStatCollector(
        const PlayerWatcherComp *const this)
{
  return &this->element_reaction_stat_collector_;
};

// Line 727: range 00000000149F2CC6-00000000149F2CD9
const SkillStatCollector *__cdecl PlayerWatcherComp::getSkillStatCollector(const PlayerWatcherComp *const this)
{
  return &this->skill_stat_collector_;
};

// Line 735: range 00000000149F2CDA-00000000149F2CED
const RecordValue *__cdecl PlayerWatcherComp::getRecordValue(const PlayerWatcherComp *const this)
{
  return &this->record_value_;
};

// Line 737: range 0000000013EBE722-0000000013EBE782
void __cdecl PlayerWatcherComp::setMaxFlyMapDistanceByMuip(PlayerWatcherComp *const this, float val)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3)
                                                       + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->record_value_.max_fly_map_distance, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->record_value_.max_fly_map_distance = val;
};

// Line 738: range 0000000013EBE784-0000000013EBE7DC
void __cdecl PlayerWatcherComp::setMaxFlyTimeByMuip(PlayerWatcherComp *const this, float val)
{
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_value_.max_fly_time, v2, (_BYTE)this + 8);
  }
  this->record_value_.max_fly_time = val;
};

// Line 739: range 0000000013EBE7DE-0000000013EBE83E
void __cdecl PlayerWatcherComp::setMaxDashTimeByMuip(PlayerWatcherComp *const this, float val)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3)
                                                        + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->record_value_.max_dash_time, (((_BYTE)this + 12) & 7u) + 3, v2);
  this->record_value_.max_dash_time = val;
};

// Line 801: range 00000000149F2CEE-00000000149F2D01
std::unordered_set<std::string> *__cdecl PlayerWatcherComp::getHurtAbilityNameSet[abi:cxx11](
        PlayerWatcherComp *const this)
{
  return &this->hurt_ability_name_set_;
};

// Line 975: range 00000000144022FA-0000000014402347
bool __cdecl PlayerWatcherComp::getIsAbilityGroupInited(const PlayerWatcherComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_ability_group_inited >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_ability_group_inited);
  return this->is_ability_group_inited;
};

// Line 975: range 0000000014402348-000000001440239E
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWatcherComp::setIsAbilityGroupInited(
        PlayerWatcherComp *const this,
        bool is_ability_group_inited_out)
{
  if ( *(char *)(((unsigned __int64)&this->is_ability_group_inited >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ability_group_inited, is_ability_group_inited_out, &this->is_ability_group_inited);
  this->is_ability_group_inited = is_ability_group_inited_out;
};

// Line 979: range 00000000144023A0-00000000144023ED
bool __cdecl PlayerWatcherComp::getIsFlyInLastTimeInterval(const PlayerWatcherComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_fly_in_last_time_interval_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_fly_in_last_time_interval_);
  return this->is_fly_in_last_time_interval_;
};

// Line 980: range 00000000144023EE-0000000014402440
bool __cdecl PlayerWatcherComp::getIsDashInLastTimeInterval(const PlayerWatcherComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dash_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 103) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dash_in_last_time_interval_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_dash_in_last_time_interval_);
  }
  return this->is_dash_in_last_time_interval_;
};

// Line 980: range 0000000013844BA8-0000000013844C03
void __cdecl PlayerWatcherComp::setIsDashInLastTimeInterval(
        PlayerWatcherComp *const this,
        bool is_dash_in_last_time_interval__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this - 103) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_dash_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_dash_in_last_time_interval_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_dash_in_last_time_interval_, v2, v3);
  this->is_dash_in_last_time_interval_ = is_dash_in_last_time_interval__out;
};

// Line 981: range 0000000014402442-0000000014402494
bool __cdecl PlayerWatcherComp::getIsClimbInLastTimeInterval(const PlayerWatcherComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_climb_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 102) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_climb_in_last_time_interval_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_climb_in_last_time_interval_);
  }
  return this->is_climb_in_last_time_interval_;
};

// Line 981: range 0000000013844C04-0000000013844C5F
void __cdecl PlayerWatcherComp::setIsClimbInLastTimeInterval(
        PlayerWatcherComp *const this,
        bool is_climb_in_last_time_interval__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this - 102) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_climb_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_climb_in_last_time_interval_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_climb_in_last_time_interval_, v2, v3);
  this->is_climb_in_last_time_interval_ = is_climb_in_last_time_interval__out;
};

// Line 982: range 0000000014402496-00000000144024E8
bool __cdecl PlayerWatcherComp::getIsHurtInLastTimeInterval(const PlayerWatcherComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cur_avatar_hurt_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 101) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cur_avatar_hurt_in_last_time_interval_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_cur_avatar_hurt_in_last_time_interval_);
  }
  return this->is_cur_avatar_hurt_in_last_time_interval_;
};

// Line 982: range 0000000013844C60-0000000013844CBB
void __cdecl PlayerWatcherComp::setIsHurtInLastTimeInterval(
        PlayerWatcherComp *const this,
        bool is_cur_avatar_hurt_in_last_time_interval__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this - 101) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_cur_avatar_hurt_in_last_time_interval_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_cur_avatar_hurt_in_last_time_interval_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_cur_avatar_hurt_in_last_time_interval_, v2, v3);
  this->is_cur_avatar_hurt_in_last_time_interval_ = is_cur_avatar_hurt_in_last_time_interval__out;
};

// Line 3166: range 0000000013EBE6C8-0000000013EBE720
void __cdecl PlayerWatcherComp::setMaxCriticalDamageByMuip(PlayerWatcherComp *const this, float val)
{
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_value_, v2, (_BYTE)this);
  }
  this->record_value_.max_critical_damage = val;
};

// Line 13991: range 0000000017212A33-0000000017212A3D
uint32_t __cdecl PlayerWatcherComp::getType()
{
  return 25;
};
