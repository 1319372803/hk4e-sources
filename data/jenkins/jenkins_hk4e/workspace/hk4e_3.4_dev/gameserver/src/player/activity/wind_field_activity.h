// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/wind_field_activity.h

// Line 22: range 000000001635B142-000000001635B1FB
void __cdecl WindFieldActivity::~WindFieldActivity(WindFieldActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WindFieldActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->cur_dungeon_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_wtr);
  std::weak_ptr<Observer>::~weak_ptr(&this->post_enter_scene_wtr);
  std::weak_ptr<Observer>::~weak_ptr(&this->dungeon_create_wtr_);
  std::set<unsigned int>::~set(&this->finished_watcher_snapshot_set_);
  std::map<unsigned int,bool>::~map(&this->stage_open_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 22: range 000000001635B1FC-000000001635B226
void __cdecl WindFieldActivity::~WindFieldActivity(WindFieldActivity *const this)
{
  WindFieldActivity::~WindFieldActivity(this);
  operator delete(this, 0x450uLL);
};

// Line 25: range 000000001702D838-000000001702D9ED
void __fastcall ZN17WindFieldActivityCI212BaseActivityER6Playerj(WindFieldActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN17WindFieldActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'WindFieldActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,bool>::map(&this->stage_open_map_);
  std::set<unsigned int>::set(&this->finished_watcher_snapshot_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_stop_reason_, a2, &this->gallery_stop_reason_);
  }
  this->gallery_stop_reason_ = GALLERY_STOP_NONE;
  std::weak_ptr<Observer>::weak_ptr(&this->dungeon_create_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->post_enter_scene_wtr);
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_wtr);
  std::weak_ptr<DungeonScene>::weak_ptr(&this->cur_dungeon_wtr_);
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

// Line 26: range 000000001384AA1D-000000001384AA27
data::NewActivityType __cdecl WindFieldActivity::getActivityStaticType()
{
  return 3101;
};
