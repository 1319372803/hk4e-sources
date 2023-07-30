// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/world.h

// Line 24: range 000000001350F944-000000001350F9E1
void __cdecl WorldPlayerSlotInfo::WorldPlayerSlotInfo(WorldPlayerSlotInfo *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->uid = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->pre_enter_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_enter_time >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->pre_enter_time, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->pre_enter_time = 0;
  std::string::basic_string(&this->nickname);
};

// Line 24: range 0000000013484FCE-0000000013484FEC
void __cdecl WorldPlayerSlotInfo::~WorldPlayerSlotInfo(WorldPlayerSlotInfo *const this)
{
  std::string::~string(&this->nickname);
};

// Line 31: range 00000000131E9B80-00000000131E9B9A
void __cdecl WorldPlayerInfo::~WorldPlayerInfo(WorldPlayerInfo *const this)
{
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr);
};

// Line 46: range 00000000131E9138-00000000131E9162
void __cdecl World::~World(World *const this)
{
  World::~World(this);
  operator delete(this, 0x178uLL);
};

// Line 46: range 00000000131E906E-00000000131E9137
void __cdecl World::~World(World *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'World + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_World = v2;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->chat_channel_uid_map_);
  std::deque<proto::ChatInfo>::~deque(&this->chat_info_que_);
  std::shared_ptr<SceneTeam>::~shared_ptr(&this->scene_team_ptr_);
  std::unordered_map<unsigned int,WorldPlayerInfo>::~unordered_map(&this->player_info_map_);
  std::unordered_map<unsigned int,WorldPlayerSlotInfo>::~unordered_map(&this->slot_info_map_);
  std::map<unsigned int,std::shared_ptr<Scene>>::~map(&this->scene_map_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->timer_ptr_);
  std::enable_shared_from_this<World>::~enable_shared_from_this(&this->std::enable_shared_from_this<World>);
};

// Line 48: range 00000000180AB8DA-00000000180AB8E8
data::WorldType __cdecl World::getWorldType(const World *const this)
{
  return 0;
};

// Line 50: range 00000000180AB8EA-00000000180AB8F8
int32_t __cdecl World::init(World *const this)
{
  return 0;
};

// Line 51: range 00000000180AB8FA-00000000180AB908
int32_t __cdecl World::start(World *const this)
{
  return 0;
};

// Line 52: range 0000000015D33D9A-0000000015D33DA8
int32_t __cdecl World::stop(World *const this)
{
  return 0;
};

// Line 53: range 00000000180AB90A-00000000180AB918
void __cdecl World::onTimer(World *const this, uint64_t now_ms)
{
  ;
};

// Line 58: range 00000000131D6D30-00000000131D6D47
void __cdecl World::onAvatarDie(World *const this, Player *player, uint64_t die_avatar_guid, bool is_cur_use_avatar)
{
  ;
};

// Line 59: range 00000000131D6D48-00000000131D6D5A
void __cdecl World::onDelAvatar(World *const this, Player *player, uint64_t del_avatar_guid)
{
  ;
};

// Line 61: range 0000000015D33DAA-0000000015D33DF1
uint32_t __cdecl World::getWorldId(const World *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->world_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->world_id_;
};

// Line 66: range 00000000131D6D5C-00000000131D6D85
ScenePtr __cdecl World::createScene(World *const this, uint32_t scene_id)
{
  ScenePtr result; // rax

  std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 69: range 00000000131D6D86-00000000131D6DD5
uint32_t __cdecl World::getOwnerUid(const World *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->owner_uid_;
};

// Line 69: range 00000000131D6DD6-00000000131D6E2B
void __cdecl World::setOwnerUid(World *const this, uint32_t owner_uid)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->owner_uid_, (((_BYTE)this + 28) & 7u) + 3, v2);
  this->owner_uid_ = owner_uid;
};

// Line 72: range 00000000131D6E4C-00000000131D6F1D
bool __fastcall World::isPlayerIn(const World *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:82";
  *(_QWORD *)(v2 + 16) = World::isPlayerIn;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerInfo> const,unsigned int>(
             &this->player_info_map_,
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

// Line 72: range 00000000131D6E2C-00000000131D6E4B
uint32_t __cdecl World::getPlayerCount(const World *const this)
{
  return std::unordered_map<unsigned int,WorldPlayerInfo>::size(&this->player_info_map_);
};

// Line 74: range 00000000180AB91A-00000000180AB928
uint32_t __cdecl World::getMaxPlayerCount(const World *const this)
{
  return 4;
};

// Line 76: range 00000000180AB92A-00000000180AB93B
int32_t __cdecl World::checkKickPlayer(World *const this, uint32_t target_uid)
{
  return 0;
};

// Line 77: range 00000000180AB93C-00000000180AB94C
void __cdecl World::kickPlayer(World *const this, uint32_t uid, int reason)
{
  ;
};

// Line 79: range 00000000180AB94E-00000000180AB960
void __cdecl World::kickAllPlayer(World *const this, int reason, bool can_kick_owner)
{
  ;
};

// Line 94: range 000000001350FD08-000000001350FE5F
void __cdecl WorldPlayerInfo::WorldPlayerInfo(WorldPlayerInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  bool v4; // dl

  std::weak_ptr<Player>::weak_ptr(&this->player_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_scene_id, v1, (_BYTE)this + 16);
  }
  this->cur_scene_id = 0;
  v2 = (((_BYTE)this + 20) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->enter_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_time >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->enter_time, v2, v3);
  this->enter_time = 0;
  Vector3::Vector3(&this->last_main_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->last_main_rot, 0.0, 0.0, 0.0);
  if ( *(char *)(((unsigned __int64)&this->is_pos_valid >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_pos_valid, v2, &this->is_pos_valid);
  this->is_pos_valid = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->last_leave_room_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_leave_room_scene_id >> 3)
                                                        + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->last_leave_room_scene_id, (((_BYTE)this + 52) & 7u) + 3, v4);
  this->last_leave_room_scene_id = 0;
};

// Line 103: range 000000001518A42C-000000001518A45B
SceneTeamPtr __cdecl World::getSceneTeam(World *const this)
{
  const std::shared_ptr<SceneTeam> *v1; // rsi
  SceneTeamPtr result; // rax

  std::shared_ptr<SceneTeam>::shared_ptr((std::shared_ptr<SceneTeam> *const)this, v1 + 14);
  result._M_ptr = (std::__shared_ptr<SceneTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 115: range 00000000180AB962-00000000180AB974
int32_t __cdecl World::notifyWorldData(World *const this, Player *player)
{
  return 0;
};

// Line 117: range 00000000180AB976-00000000180AB988
int32_t __cdecl World::notifyAllWorldPropData(World *const this, Player *player)
{
  return 0;
};

// Line 122: range 00000000180AB98A-00000000180AB998
bool __cdecl World::isInMpMode(World *const this)
{
  return 0;
};

// Line 551: range 00000000131E978A-00000000131E9B7E
void __cdecl WorldPlayerInfo::WorldPlayerInfo(WorldPlayerInfo *const this, const WorldPlayerInfo *a2)
{
  uint32_t cur_scene_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t enter_time; // ecx
  char v6; // dl
  bool v7; // dl
  char v8; // dl
  __int64 v9; // rsi
  bool is_pos_valid; // cl
  char v11; // al
  __int64 v12; // rsi
  uint32_t last_leave_room_scene_id; // ecx
  char v14; // dl
  bool v15; // dl
  const WorldPlayerInfo *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr, &a2->player_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&v16->cur_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->cur_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_scene_id = a2->cur_scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cur_scene_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->cur_scene_id, a2, (_BYTE)this + 16);
  }
  this->cur_scene_id = cur_scene_id;
  v4 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->enter_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->enter_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  enter_time = v16->enter_time;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enter_time >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->enter_time, v4, v7);
  this->enter_time = enter_time;
  if ( *(char *)(((unsigned __int64)&this->last_main_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->last_main_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_main_pos.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->last_main_pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v16->last_main_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v16->last_main_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v16 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&v16->last_main_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v16->last_main_pos, 12LL);
  }
  this->last_main_pos = v16->last_main_pos;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->last_main_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->last_main_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->last_main_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_main_rot.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->last_main_rot, 12LL);
  }
  v8 = *(_BYTE *)((((unsigned __int64)&v16->last_main_rot.z + 3) >> 3) + 0x7FFF8000);
  v9 = v8 != 0;
  if ( ((((unsigned __int8)v16 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&v16->last_main_rot >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&v16->last_main_rot >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v9 & ((((unsigned __int8)v16 + 47) & 7) >= v8) )
  {
    v9 = 12LL;
    __asan_report_load_n(&v16->last_main_rot, 12LL);
  }
  this->last_main_rot = v16->last_main_rot;
  if ( *(char *)(((unsigned __int64)&v16->is_pos_valid >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_pos_valid);
  is_pos_valid = v16->is_pos_valid;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_pos_valid >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->is_pos_valid, v9, &this->is_pos_valid);
  }
  this->is_pos_valid = is_pos_valid;
  v12 = (((_BYTE)v16 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->last_leave_room_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->last_leave_room_scene_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  last_leave_room_scene_id = v16->last_leave_room_scene_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->last_leave_room_scene_id >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v14 != 0;
  v15 = v14 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v14;
  if ( v15 )
    __asan_report_store4(&this->last_leave_room_scene_id, v12, v15);
  this->last_leave_room_scene_id = last_leave_room_scene_id;
};
