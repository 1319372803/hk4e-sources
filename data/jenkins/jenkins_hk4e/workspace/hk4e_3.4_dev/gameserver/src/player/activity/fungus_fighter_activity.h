// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/fungus_fighter_activity.h

// Line 43: range 000000001518C85E-000000001518C927
void __cdecl FungusFighterDungeonContext::FungusFighterDungeonContext(FungusFighterDungeonContext *const this)
{
  std::vector<unsigned int>::vector(&this->fungus_id_vec);
  std::vector<unsigned int>::vector(&this->fungus_config_id_vec);
  std::set<unsigned int>::set(&this->candidate_fungus_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rand_index);
  }
  this->rand_index = 0;
  std::vector<unsigned int>::vector(&this->monster_pool_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round);
  }
  this->cur_round = 0;
};

// Line 43: range 0000000014B3067C-0000000014B307E2
void __cdecl FungusFighterDungeonContext::FungusFighterDungeonContext(
        FungusFighterDungeonContext *const this,
        FungusFighterDungeonContext *a2)
{
  uint32_t rand_index; // ecx
  uint32_t cur_round; // ecx

  std::vector<unsigned int>::vector(&this->fungus_id_vec, &a2->fungus_id_vec);
  std::vector<unsigned int>::vector(&this->fungus_config_id_vec, &a2->fungus_config_id_vec);
  std::set<unsigned int>::set(&this->candidate_fungus_id_set, &a2->candidate_fungus_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->rand_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rand_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  rand_index = a2->rand_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rand_index);
  }
  this->rand_index = rand_index;
  std::vector<unsigned int>::vector(&this->monster_pool_vec, &a2->monster_pool_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_round = a2->cur_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round);
  }
  this->cur_round = cur_round;
};

// Line 43: range 0000000014A98194-0000000014A98347
void __cdecl FungusFighterDungeonContext::FungusFighterDungeonContext(
        FungusFighterDungeonContext *const this,
        const FungusFighterDungeonContext *a2)
{
  uint32_t rand_index; // ecx
  uint32_t cur_round; // ecx

  std::vector<unsigned int>::vector(&this->fungus_id_vec, &a2->fungus_id_vec);
  std::vector<unsigned int>::vector(&this->fungus_config_id_vec, &a2->fungus_config_id_vec);
  std::set<unsigned int>::set(&this->candidate_fungus_id_set, &a2->candidate_fungus_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->rand_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rand_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  rand_index = a2->rand_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rand_index);
  }
  this->rand_index = rand_index;
  std::vector<unsigned int>::vector(&this->monster_pool_vec, &a2->monster_pool_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_round = a2->cur_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round);
  }
  this->cur_round = cur_round;
};

// Line 43: range 0000000014A4761A-0000000014A47664
void __cdecl FungusFighterDungeonContext::~FungusFighterDungeonContext(FungusFighterDungeonContext *const this)
{
  std::vector<unsigned int>::~vector(&this->monster_pool_vec);
  std::set<unsigned int>::~set(&this->candidate_fungus_id_set);
  std::vector<unsigned int>::~vector(&this->fungus_config_id_vec);
  std::vector<unsigned int>::~vector(&this->fungus_id_vec);
};

// Line 53: range 000000001518C54C-000000001518C6AD
void __cdecl FungusData::FungusData(FungusData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->fungus_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->name_id);
  }
  this->name_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cultivate >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cultivate >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_cultivate);
  }
  this->is_cultivate = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->capture_order);
  }
  this->capture_order = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_cultivate_step >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_cultivate_step >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_cultivate_step);
  }
  this->min_cultivate_step = 0;
};

// Line 79: range 00000000154CC4FE-00000000154CC5FF
void __cdecl FungusFighterActivity::~FungusFighterActivity(FungusFighterActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FungusFighterActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->post_enter_scene_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->training_gallery_settle_wtr_);
  std::map<unsigned int,FungusTrainingDungeonData>::~map(&this->fungus_training_dungeon_map_);
  std::map<unsigned int,bool>::~map(&this->fungus_plot_stage_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_cultivate_id_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->finish_camp_id_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_camp_id_set_);
  std::unordered_map<unsigned int,FungusData>::~unordered_map(&this->fungus_id_data_map_);
  FungusFighterRuntimeMgr::~FungusFighterRuntimeMgr(&this->runtime_mgr_);
  BaseActivity::~BaseActivity(this);
};

// Line 79: range 00000000154CC600-00000000154CC62A
void __cdecl FungusFighterActivity::~FungusFighterActivity(FungusFighterActivity *const this)
{
  FungusFighterActivity::~FungusFighterActivity(this);
  operator delete(this, 0x680uLL);
};

// Line 82: range 000000001702DE2E-000000001702E060
void __fastcall ZN21FungusFighterActivityCI212BaseActivityER6Playerj(
        FungusFighterActivity *const this,
        Player *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  FungusFighterRuntimeMgr *p_runtime_mgr; // rcx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN21FungusFighterActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'FungusFighterActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  p_runtime_mgr = &this->runtime_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FungusFighterRuntimeMgr::FungusFighterRuntimeMgr(p_runtime_mgr, this->player_, this);
  std::unordered_map<unsigned int,FungusData>::unordered_map(&this->fungus_id_data_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_camp_id_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->finish_camp_id_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_cultivate_id_set_);
  std::map<unsigned int,bool>::map(&this->fungus_plot_stage_map_);
  std::map<unsigned int,FungusTrainingDungeonData>::map(&this->fungus_training_dungeon_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_order_);
  }
  this->capture_order_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->training_gallery_settle_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->post_enter_scene_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_wtr_);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 105: range 00000000149EE872-00000000149EE885
FungusFighterRuntimeMgr *__cdecl FungusFighterActivity::getRuntimeMgr(FungusFighterActivity *const this)
{
  return &this->runtime_mgr_;
};

// Line 122: range 000000001384AA33-000000001384AA3D
data::NewActivityType __cdecl FungusFighterActivity::getActivityStaticType()
{
  return 3201;
};
