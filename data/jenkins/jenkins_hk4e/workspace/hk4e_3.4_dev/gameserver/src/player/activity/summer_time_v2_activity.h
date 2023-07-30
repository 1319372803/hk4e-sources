// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/summer_time_v2_activity.h

// Line 54: range 0000000018327622-0000000018327711
void __cdecl SummerTimeV2Activity::~SummerTimeV2Activity(SummerTimeV2Activity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SummerTimeV2Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->cur_cycle_dungeon_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->skill_wtr);
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_wtr);
  std::weak_ptr<Observer>::~weak_ptr(&this->post_enter_scene_wtr);
  std::weak_ptr<Observer>::~weak_ptr(&this->boat_gallery_settle_wtr);
  std::weak_ptr<Observer>::~weak_ptr(&this->dungeon_create_wtr_);
  std::map<proto::VirtualItem,unsigned int>::~map(&this->activity_coin_map_);
  std::map<unsigned int,SummerTimeV2BoatStageData>::~map(&this->boat_stage_open_map_);
  std::map<unsigned int,SummerTimeV2DungeonStageData>::~map(&this->dungeon_stage_open_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 54: range 0000000018327712-000000001832773C
void __cdecl SummerTimeV2Activity::~SummerTimeV2Activity(SummerTimeV2Activity *const this)
{
  SummerTimeV2Activity::~SummerTimeV2Activity(this);
  operator delete(this, 0x4A8uLL);
};

// Line 57: range 000000001702AB0A-000000001702AD35
void __fastcall ZN20SummerTimeV2ActivityCI212BaseActivityER6Playerj(
        SummerTimeV2Activity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN20SummerTimeV2ActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'SummerTimeV2Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,SummerTimeV2DungeonStageData>::map(&this->dungeon_stage_open_map_);
  std::map<unsigned int,SummerTimeV2BoatStageData>::map(&this->boat_stage_open_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, a2, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::map<proto::VirtualItem,unsigned int>::map(&this->activity_coin_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->taken_reward_count_, a2, &this->taken_reward_count_);
  }
  this->taken_reward_count_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->dungeon_create_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->boat_gallery_settle_wtr);
  std::weak_ptr<Observer>::weak_ptr(&this->post_enter_scene_wtr);
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_wtr);
  std::weak_ptr<Observer>::weak_ptr(&this->skill_wtr);
  std::weak_ptr<DungeonScene>::weak_ptr(&this->cur_cycle_dungeon_wtr_);
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

// Line 58: range 000000001384A9F1-000000001384A9FB
data::NewActivityType __cdecl SummerTimeV2Activity::getActivityStaticType()
{
  return 2801;
};

// Line 69: range 00000000180AEE42-00000000180AEE8F
bool __cdecl SummerTimeV2Activity::isContentClosed(const SummerTimeV2Activity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};

// Line 230: range 00000000180AF48C-00000000180AF561
void __cdecl SummerTimeV2BoatStageData::SummerTimeV2BoatStageData(SummerTimeV2BoatStageData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

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
  v4 = (*(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->best_score, (((_BYTE)this + 8) & 7u) + 3, v4);
  this->best_score = 0;
};

// Line 230: range 00000000180AF388-00000000180AF457
void __cdecl SummerTimeV2DungeonStageData::SummerTimeV2DungeonStageData(SummerTimeV2DungeonStageData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

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
  v4 = ((_BYTE)this + 5) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_prev_dungeon_succeed, v4, v5);
  this->is_prev_dungeon_succeed = 0;
};
