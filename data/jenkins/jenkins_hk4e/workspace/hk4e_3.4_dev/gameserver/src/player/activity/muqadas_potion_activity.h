// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/muqadas_potion_activity.h

// Line 26: range 0000000014620FF2-00000000146210C7
void __cdecl MuqadasPotionLevelData::MuqadasPotionLevelData(MuqadasPotionLevelData *const this)
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
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = 0;
};

// Line 43: range 000000001483834C-00000000148383CF
void __cdecl MuqadasPotionActivity::~MuqadasPotionActivity(MuqadasPotionActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MuqadasPotionActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::vector<unsigned long>::~vector(&this->in_dungeon_avatar_guid_vec_);
  std::map<unsigned int,MuqadasPotionLevelData>::~map(&this->level_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 43: range 00000000148383D0-00000000148383FA
void __cdecl MuqadasPotionActivity::~MuqadasPotionActivity(MuqadasPotionActivity *const this)
{
  MuqadasPotionActivity::~MuqadasPotionActivity(this);
  operator delete(this, 0x420uLL);
};

// Line 46: range 000000001702BFA8-000000001702C0E4
void __fastcall ZN21MuqadasPotionActivityCI212BaseActivityER6Playerj(
        MuqadasPotionActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN21MuqadasPotionActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'MuqadasPotionActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,MuqadasPotionLevelData>::map(&this->level_data_map_);
  std::vector<unsigned long>::vector(&this->in_dungeon_avatar_guid_vec_);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
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

// Line 48: range 000000001384AA12-000000001384AA1C
data::NewActivityType __cdecl MuqadasPotionActivity::getActivityStaticType()
{
  return 3002;
};
