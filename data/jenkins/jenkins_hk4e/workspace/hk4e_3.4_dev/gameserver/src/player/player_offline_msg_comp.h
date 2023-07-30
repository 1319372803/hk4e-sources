// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_offline_msg_comp.h

// Line 22: range 0000000013F3EFCA-0000000013F3F064
void __cdecl OfflineMsgExeInfo::OfflineMsgExeInfo(OfflineMsgExeInfo *const this, OfflineMsgExeInfo *a2)
{
  uint32_t exe_times; // ecx
  char v3; // al

  proto::OfflineMsgBin::OfflineMsgBin(&this->msg, &a2->msg);
  if ( *(_BYTE *)(((unsigned __int64)&a2->exe_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->exe_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->exe_times);
  }
  exe_times = a2->exe_times;
  v3 = *(_BYTE *)(((unsigned __int64)&this->exe_times >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->exe_times, a2, &this->exe_times);
  }
  this->exe_times = exe_times;
};

// Line 22: range 0000000013EBEE9E-0000000013EBEEB8
void __cdecl OfflineMsgExeInfo::~OfflineMsgExeInfo(OfflineMsgExeInfo *const this)
{
  proto::OfflineMsgBin::~OfflineMsgBin(&this->msg);
};

// Line 33: range 00000000140FC5AC-00000000140FC629
void __cdecl PlayerOfflineMsgComp::~PlayerOfflineMsgComp(PlayerOfflineMsgComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerOfflineMsgComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<Observer>::~weak_ptr(&this->observer_);
  std::map<unsigned int,unsigned int>::~map(&this->remain_del_item_map_);
  std::vector<OfflineMsgExeInfo>::~vector(&this->next_offline_msg_vec_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 33: range 00000000140FC62A-00000000140FC654
void __cdecl PlayerOfflineMsgComp::~PlayerOfflineMsgComp(PlayerOfflineMsgComp *const this)
{
  PlayerOfflineMsgComp::~PlayerOfflineMsgComp(this);
  operator delete(this, 0x90uLL);
};

// Line 36: range 0000000017213F40-0000000017213F4A
uint32_t __cdecl PlayerOfflineMsgComp::getType()
{
  return 17;
};

// Line 43: range 000000001747DBD8-000000001747DCF8
void __cdecl ZN20PlayerOfflineMsgCompCI214PlayerCompBaseER6Player(PlayerOfflineMsgComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerOfflineMsgComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index_, a2, &this->index_);
  }
  this->index_ = 0;
  std::vector<OfflineMsgExeInfo>::vector(&this->next_offline_msg_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->born_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->born_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->born_scene_id_, a2, &this->born_scene_id_);
  }
  this->born_scene_id_ = 0;
  Vector3::Vector3(&this->born_pos_, 0.0, 0.0, 0.0);
  std::map<unsigned int,unsigned int>::map(&this->remain_del_item_map_);
  std::weak_ptr<Observer>::weak_ptr(&this->observer_);
};

// Line 60: range 0000000017213F4C-0000000017213F98
bool __cdecl PlayerOfflineMsgComp::isSetBornScenePos(const PlayerOfflineMsgComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->born_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->born_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->born_scene_id_);
  }
  return this->born_scene_id_ != 0;
};
