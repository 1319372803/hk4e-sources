// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/group_link/player_group_link_comp.h

// Line 30: range 00000000167C271C-00000000167C283D
void __cdecl GroupLink::GroupLink(GroupLink *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->link_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->cur_bundle_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_bundle_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->cur_bundle_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->cur_bundle_id = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->activity_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->activity_id = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->schedule_id, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->schedule_id = 0;
};

// Line 40: range 00000000167C2BB2-00000000167C2D0D
void __cdecl GroupLinkBundle::GroupLinkBundle(GroupLinkBundle *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->bundle_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->activity_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->activity_id = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->schedule_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->schedule_id = 0;
  v4 = ((_BYTE)this + 12) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_activated >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_activated >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_activated, v4, v5);
  this->is_activated = 0;
  v6 = ((_BYTE)this + 13) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_show_mark >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_show_mark >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_show_mark, v6, v7);
  this->is_show_mark = 0;
};

// Line 52: range 000000001683220C-000000001683229D
void __cdecl PlayerGroupLinkComp::~PlayerGroupLinkComp(PlayerGroupLinkComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGroupLinkComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<Observer>::~weak_ptr(&this->activity_obs_wtr_);
  std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::~unordered_map(&this->finished_group_bundle_map_);
  std::unordered_map<unsigned int,GroupLinkBundle>::~unordered_map(&this->group_bundle_map_);
  std::unordered_map<unsigned int,GroupLink>::~unordered_map(&this->links_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 52: range 000000001683229E-00000000168322C8
void __cdecl PlayerGroupLinkComp::~PlayerGroupLinkComp(PlayerGroupLinkComp *const this)
{
  PlayerGroupLinkComp::~PlayerGroupLinkComp(this);
  operator delete(this, 0xD8uLL);
};

// Line 55: range 000000001720FD0B-000000001720FD15
uint32_t __cdecl PlayerGroupLinkComp::getType()
{
  return 60;
};

// Line 57: range 000000001748D2D4-000000001748D370
void __cdecl ZN19PlayerGroupLinkCompCI214PlayerCompBaseER6Player(PlayerGroupLinkComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerGroupLinkComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,GroupLink>::unordered_map(&this->links_map_);
  std::unordered_map<unsigned int,GroupLinkBundle>::unordered_map(&this->group_bundle_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::unordered_map(&this->finished_group_bundle_map_);
  std::weak_ptr<Observer>::weak_ptr(&this->activity_obs_wtr_);
};

// Line 65: range 000000001666BDC2-000000001666BDE0
int32_t __cdecl PlayerGroupLinkComp::init(PlayerGroupLinkComp *const this)
{
  PlayerGroupLinkComp::registerObserver(this);
  return 0;
};

// Line 80: range 000000001666BDE2-000000001666BEB1
bool __fastcall PlayerGroupLinkComp::isGroupLinkRegistered(PlayerGroupLinkComp *const this, uint32_t link_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 10 link_id:80";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::isGroupLinkRegistered;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = link_id;
  result = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupLink>,unsigned int>(
             &this->links_map_,
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

// Line 101: range 0000000013849C92-0000000013849D61
bool __fastcall PlayerGroupLinkComp::isGroupBundleRegistered(const PlayerGroupLinkComp *const this, uint32_t bundle_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 bundle_id:101";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::isGroupBundleRegistered;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = bundle_id;
  result = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupLinkBundle> const,unsigned int>(
             &this->group_bundle_map_,
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
