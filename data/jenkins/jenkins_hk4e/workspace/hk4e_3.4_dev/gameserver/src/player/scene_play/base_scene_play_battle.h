// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/scene_play/base_scene_play_battle.h

// Line 53: range 0000000014F77E82-0000000014F78017
ScenePlayBattleParam *__cdecl ScenePlayBattleParam::operator=(
        ScenePlayBattleParam *const this,
        const ScenePlayBattleParam *a2)
{
  uint32_t duration; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t start_cd; // ecx
  char v6; // dl
  bool v7; // dl
  std::vector<unsigned int> *p_progress_stage_vec; // rsi
  uint32_t mode; // ecx
  char v10; // al
  const ScenePlayBattleParam *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  duration = a2->duration;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->duration = duration;
  v4 = (((_BYTE)v12 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->start_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->start_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->start_cd);
  }
  start_cd = v12->start_cd;
  v6 = *(_BYTE *)(((unsigned __int64)&this->start_cd >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->start_cd, v4, v7);
  this->start_cd = start_cd;
  p_progress_stage_vec = &v12->progress_stage_vec;
  std::vector<unsigned int>::operator=(&this->progress_stage_vec, &v12->progress_stage_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v12->mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->mode);
  }
  mode = v12->mode;
  v10 = *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_progress_stage_vec) = v10 != 0;
    __asan_report_store4(&this->mode, p_progress_stage_vec, (_BYTE)this + 32);
  }
  this->mode = mode;
  return this;
};

// Line 53: range 00000000149EDADC-00000000149EDBB7
void __cdecl ScenePlayBattleParam::ScenePlayBattleParam(ScenePlayBattleParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->duration = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->start_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->start_cd, v2, v3);
  this->start_cd = 0;
  std::vector<unsigned int>::vector(&this->progress_stage_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mode, v2, (_BYTE)this + 32);
  }
  this->mode = 0;
};

// Line 53: range 00000000149EDBB8-00000000149EDBD6
void __cdecl ScenePlayBattleParam::~ScenePlayBattleParam(ScenePlayBattleParam *const this)
{
  std::vector<unsigned int>::~vector(&this->progress_stage_vec);
};

// Line 80: range 0000000015000098-00000000150000C2
void __cdecl ScenePlayGroupStat::ScenePlayGroupStat(ScenePlayGroupStat *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->kill_monster_map);
  std::map<unsigned int,float>::map(&this->hurt_monster_map);
};

// Line 80: range 0000000014FEFA56-0000000014FEFA80
void __cdecl ScenePlayGroupStat::~ScenePlayGroupStat(ScenePlayGroupStat *const this)
{
  std::map<unsigned int,float>::~map(&this->hurt_monster_map);
  std::map<unsigned int,unsigned int>::~map(&this->kill_monster_map);
};

// Line 89: range 0000000016D6FE94-0000000016D7033F
void __cdecl BaseScenePlayBattle::BaseScenePlayBattle(
        BaseScenePlayBattle *const this,
        Scene *scene,
        BaseScenePlay *scene_play)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  bool v5; // dl
  __int64 v6; // rsi
  bool v7; // dl
  __int64 v8; // rsi
  bool v9; // dl
  __int64 v10; // rsi
  bool v11; // dl
  std::shared_ptr<Scene> __r; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<BaseScenePlay> v13; // [rsp+30h] [rbp-20h] BYREF

  std::enable_shared_from_this<BaseScenePlayBattle>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseScenePlayBattle>);
  v3 = (int (**)(...))(&`vtable for'BaseScenePlayBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_BaseScenePlayBattle = v3;
  toThisPtr<Scene>((Scene *)&__r);
  std::weak_ptr<Scene>::weak_ptr<Scene,void>(&this->scene_wtr_, &__r);
  std::shared_ptr<Scene>::~shared_ptr(&__r);
  toThisPtr<BaseScenePlay>((BaseScenePlay *)&v13);
  std::weak_ptr<BaseScenePlay>::weak_ptr<BaseScenePlay,void>(&this->play_wtr_, &v13);
  std::shared_ptr<BaseScenePlay>::~shared_ptr(&v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_id_, &v13, (_BYTE)this + 56);
  }
  this->play_id_ = 0;
  v4 = (((_BYTE)this + 60) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->play_type_, v4, v5);
  this->play_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entry_id_, v4, (_BYTE)this + 64);
  }
  this->entry_id_ = 0;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->type_, v6, v7);
  this->type_ = None_24;
  std::string::basic_string(&this->transaction_no_);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_, v6, (_BYTE)this + 104);
  }
  this->state_ = SCENE_PLAY_BATTLE_NONE;
  v8 = (((_BYTE)this + 108) & 7u) + 3;
  v9 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->prepare_end_time_, v8, v9);
  this->prepare_end_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time_, v8, (_BYTE)this + 112);
  }
  this->start_time_ = 0;
  v10 = (((_BYTE)this + 116) & 7u) + 3;
  v11 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
  if ( v11 )
    __asan_report_store4(&this->progress_, v10, v11);
  this->progress_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_interrupting >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_interrupting, v10, &this->is_interrupting);
  this->is_interrupting = 0;
  ScenePlayBattleParam::ScenePlayBattleParam(&this->battle_param_);
  std::map<unsigned int,std::map<std::string,long>>::map(&this->uid_value_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_team_entity_gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_team_entity_gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_team_entity_gadget_id_, v10, (_BYTE)this - 40);
  }
  this->play_team_entity_gadget_id_ = 0;
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::unordered_set(&this->combat_statistic_target_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->combat_statistic_group_set_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::unordered_map(&this->player_monster_combat_statistic_map_);
  std::map<unsigned int,std::weak_ptr<Entity>>::map(&this->play_team_entity_wtr_map_);
  std::map<unsigned int,std::weak_ptr<Player>>::map(&this->join_player_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map(&this->player_battle_stat_map_);
  std::weak_ptr<Observer>::weak_ptr(&this->player_count_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->mp_mode_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->world_avatar_die_obs_wtr_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->player_count_timer_ptr_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->ready_timer_ptr_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->start_timer_ptr_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->stop_timer_ptr_);
};

// Line 91: range 00000000170946E4-000000001709470E
void __cdecl BaseScenePlayBattle::~BaseScenePlayBattle(BaseScenePlayBattle *const this)
{
  BaseScenePlayBattle::~BaseScenePlayBattle(this);
  operator delete(this, 0x290uLL);
};

// Line 91: range 0000000017094556-00000000170946E3
void __cdecl BaseScenePlayBattle::~BaseScenePlayBattle(BaseScenePlayBattle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseScenePlayBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseScenePlayBattle = v2;
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->stop_timer_ptr_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->start_timer_ptr_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->ready_timer_ptr_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->player_count_timer_ptr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->world_avatar_die_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->mp_mode_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->player_count_obs_wtr_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map(&this->player_battle_stat_map_);
  std::map<unsigned int,std::weak_ptr<Player>>::~map(&this->join_player_map_);
  std::map<unsigned int,std::weak_ptr<Entity>>::~map(&this->play_team_entity_wtr_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,ScenePlayGroupStat>>::~unordered_map(&this->player_monster_combat_statistic_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->combat_statistic_group_set_);
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::~unordered_set(&this->combat_statistic_target_set_);
  std::map<unsigned int,std::map<std::string,long>>::~map(&this->uid_value_map_);
  ScenePlayBattleParam::~ScenePlayBattleParam(&this->battle_param_);
  std::string::~string(&this->transaction_no_);
  std::weak_ptr<BaseScenePlay>::~weak_ptr(&this->play_wtr_);
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  std::enable_shared_from_this<BaseScenePlayBattle>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseScenePlayBattle>);
};

// Line 113: range 00000000149EDBD8-00000000149EDC27
int32_t __cdecl BaseScenePlayBattle::getProgress(const BaseScenePlayBattle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->progress_);
  }
  return this->progress_;
};

// Line 145: range 0000000016D70340-0000000016D70387
proto::ScenePlayBattleState __cdecl BaseScenePlayBattle::getState(const BaseScenePlayBattle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  return this->state_;
};

// Line 146: range 00000000149EDC28-00000000149EDC77
ScenePlayBattleType __cdecl BaseScenePlayBattle::getType(const BaseScenePlayBattle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->type_);
  }
  return this->type_;
};

// Line 147: range 0000000014F76A14-0000000014F76A62
ScenePtr __cdecl BaseScenePlayBattle::getScene(const BaseScenePlayBattle *const this)
{
  __int64 v1; // rsi
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)this);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 148: range 0000000014F76A64-0000000014F76AB2
BaseScenePlayPtr __cdecl BaseScenePlayBattle::getScenePlay(const BaseScenePlayBattle *const this)
{
  __int64 v1; // rsi
  BaseScenePlayPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<BaseScenePlay>::lock((const std::weak_ptr<BaseScenePlay> *const)this);
  result._M_ptr = (std::__shared_ptr<BaseScenePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 164: range 0000000014F76AB4-0000000014F76B00
uint32_t __cdecl BaseScenePlayBattle::getPlayTeamEntityGadgetId(BaseScenePlayBattle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->play_team_entity_gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_team_entity_gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_team_entity_gadget_id_);
  }
  return this->play_team_entity_gadget_id_;
};

// Line 178: range 0000000013844E4C-0000000013844E5D
const std::string *__cdecl BaseScenePlayBattle::getTransaction[abi:cxx11](BaseScenePlayBattle *const this)
{
  return &this->transaction_no_;
};
