// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/island_party_activity.h

// Line 19: range 000000001461FC8A-000000001461FD5F
void __cdecl IslandPartyStageData::IslandPartyStageData(IslandPartyStageData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = 0;
};

// Line 30: range 0000000014838810-0000000014838893
void __cdecl IslandPartyActivity::~IslandPartyActivity(IslandPartyActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IslandPartyActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->settle_transfer_time_ptr_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::map<unsigned int,IslandPartyStageData>::~map(&this->stage_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 30: range 0000000014838894-00000000148388BE
void __cdecl IslandPartyActivity::~IslandPartyActivity(IslandPartyActivity *const this)
{
  IslandPartyActivity::~IslandPartyActivity(this);
  operator delete(this, 0x418uLL);
};

// Line 34: range 0000000016D67744-0000000016D677D8
void __cdecl IslandPartyActivity::IslandPartyActivity(
        IslandPartyActivity *const this,
        Player *player,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'IslandPartyActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  std::map<unsigned int,IslandPartyStageData>::map(&this->stage_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->settle_transfer_time_ptr_);
};

// Line 50: range 0000000017D71792-0000000017D718A0
void __fastcall IslandPartyActivity::openStageByGm(IslandPartyActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,IslandPartyStageData>::mapped_type *v5; // rdx
  bool *p_is_open; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 stage_id:50";
  *(_QWORD *)(v2 + 16) = IslandPartyActivity::openStageByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  v5 = std::map<unsigned int,IslandPartyStageData>::operator[](
         &this->stage_map_,
         (const std::map<unsigned int,IslandPartyStageData>::key_type *)(v2 + 32));
  p_is_open = &v5->is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(p_is_open);
  }
  v5->is_open = 1;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 51: range 0000000017D718A2-0000000017D718C1
void __cdecl IslandPartyActivity::clearByGm(IslandPartyActivity *const this)
{
  std::map<unsigned int,IslandPartyStageData>::clear(&this->stage_map_);
};

// Line 95: range 00000000176B32E8-00000000176B32F2
data::NewActivityType __cdecl IslandPartyActivity::getActivityStaticType()
{
  return 2803;
};
