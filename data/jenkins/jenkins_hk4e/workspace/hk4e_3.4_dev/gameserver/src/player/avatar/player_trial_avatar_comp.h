// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/player_trial_avatar_comp.h

// Line 35: range 0000000017484580-00000000174845D8
void __cdecl TrialAvatarActivityContext::TrialAvatarActivityContext(TrialAvatarActivityContext *const this)
{
  __int64 v1; // rsi
  uint32_t *p_trial_avatar_activity_index; // rdx

  std::weak_ptr<DungeonScene>::weak_ptr(&this->trial_avatar_dungeon_wtr);
  p_trial_avatar_activity_index = &this->trial_avatar_activity_index;
  if ( *(_BYTE *)(((unsigned __int64)p_trial_avatar_activity_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_trial_avatar_activity_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_activity_index, v1, p_trial_avatar_activity_index);
  }
  this->trial_avatar_activity_index = 0;
};

// Line 35: range 000000001635AE08-000000001635AE22
void __cdecl TrialAvatarActivityContext::~TrialAvatarActivityContext(TrialAvatarActivityContext *const this)
{
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->trial_avatar_dungeon_wtr);
};

// Line 39: range 000000001623C2A8-000000001623C300
void __cdecl TrialAvatarActivityContext::reset(TrialAvatarActivityContext *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_activity_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_activity_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trial_avatar_activity_index, v1, &this->trial_avatar_activity_index);
  }
  this->trial_avatar_activity_index = 0;
  std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::reset(&this->trial_avatar_dungeon_wtr);
};

// Line 45: range 000000001623C302-000000001623C34E
bool __cdecl TrialAvatarActivityContext::isValid(TrialAvatarActivityContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_activity_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_activity_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trial_avatar_activity_index);
  }
  return this->trial_avatar_activity_index != 0;
};

// Line 49: range 000000001635AE24-000000001635AE91
void __cdecl PlayerTrialAvatarComp::~PlayerTrialAvatarComp(PlayerTrialAvatarComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerTrialAvatarComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  TrialAvatarActivityContext::~TrialAvatarActivityContext(&this->trial_avatar_activity_context_);
  std::map<unsigned int,unsigned long>::~map(&this->trial_avatar_guid_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 49: range 000000001635AE92-000000001635AEBC
void __cdecl PlayerTrialAvatarComp::~PlayerTrialAvatarComp(PlayerTrialAvatarComp *const this)
{
  PlayerTrialAvatarComp::~PlayerTrialAvatarComp(this);
  operator delete(this, 0x78uLL);
};

// Line 53: range 00000000174845DA-00000000174846C1
void __cdecl ZN21PlayerTrialAvatarCompCI214PlayerCompBaseER6Player(PlayerTrialAvatarComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerTrialAvatarComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_trial_avatar_index_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_trial_avatar_index_id_, a2, &this->cur_trial_avatar_index_id_);
  }
  this->cur_trial_avatar_index_id_ = 0;
  std::map<unsigned int,unsigned long>::map(&this->trial_avatar_guid_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->appear_avatar_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->appear_avatar_id_, a2);
  this->appear_avatar_id_ = 0LL;
  TrialAvatarActivityContext::TrialAvatarActivityContext(&this->trial_avatar_activity_context_);
};

// Line 86: range 0000000017214058-0000000017214127
bool __fastcall PlayerTrialAvatarComp::isActiveTrialAvatarId(PlayerTrialAvatarComp *const this, uint32_t avatar_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 avatar_id:86";
  *(_QWORD *)(v2 + 16) = PlayerTrialAvatarComp::isActiveTrialAvatarId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = avatar_id;
  result = common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned long>,unsigned int>(
             &this->trial_avatar_guid_map_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 109: range 0000000017214128-0000000017214132
uint32_t __cdecl PlayerTrialAvatarComp::getType()
{
  return 34;
};
