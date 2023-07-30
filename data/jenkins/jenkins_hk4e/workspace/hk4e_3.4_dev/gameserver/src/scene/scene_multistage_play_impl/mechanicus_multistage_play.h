// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/mechanicus_multistage_play.h

// Line 30: range 0000000016188DA0-0000000016188F67
void __cdecl MechanicusMultistagePlay::~MechanicusMultistagePlay(MechanicusMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::~map(&this->foundation_wtr_map_);
  std::map<unsigned int,unsigned int>::~map(&this->round_to_excaped_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->uid_to_tokens_map_);
  std::set<unsigned int>::~set(&this->exit_set_);
  std::set<unsigned int>::~set(&this->entrance_set_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::~map(&this->sgv_aura_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::~map(&this->sgv_effect_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::~map(&this->kill_points_modifier_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::~map(&this->gear_num_modifier_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::~map(&this->refund_modifier_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::~map(&this->cost_modifier_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::~unordered_map(&this->uid_to_card_info_map_);
  std::set<unsigned int>::~set(&this->stage_cards_set_);
  std::set<unsigned int>::~set(&this->choosed_cards_set_);
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::~unordered_map(&this->uid_to_player_info_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->uid_interact_count_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->effect_target_num_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->pick_card_num_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gadget_build_num_map_);
  std::vector<unsigned int>::~vector(&this->monster_pool_vec_);
  std::set<unsigned int>::~set(&this->used_gear_id_set_);
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 30: range 0000000016188F68-0000000016188F92
void __cdecl MechanicusMultistagePlay::~MechanicusMultistagePlay(MechanicusMultistagePlay *const this)
{
  MechanicusMultistagePlay::~MechanicusMultistagePlay(this);
  operator delete(this, 0x5C0uLL);
};

// Line 32: range 000000001614B5DE-000000001614B785
void __cdecl MechanicusMultistagePlay::PlayerInfo::PlayerInfo(MechanicusMultistagePlay::PlayerInfo *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool v7; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->building_points_ = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->cost_building_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_building_points_ >> 3)
                                                       + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->cost_building_points_, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->cost_building_points_ = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->settle_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->settle_points_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->settle_points_, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->settle_points_ = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->pick_card_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pick_card_id_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->pick_card_id_, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->pick_card_id_ = 0;
  v5 = ((_BYTE)this + 16) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_card_confirmed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_card_confirmed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_card_confirmed_, v5, v6);
  this->is_card_confirmed_ = 0;
  v7 = *(_BYTE *)(((unsigned __int64)&this->curse_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curse_id_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->curse_id_, (((_BYTE)this + 20) & 7u) + 3, v7);
  this->curse_id_ = 0;
};

// Line 43: range 00000000161678DC-0000000016167A81
void __cdecl MechanicusMultistagePlay::ModifierEffectInfo::ModifierEffectInfo(
        MechanicusMultistagePlay::ModifierEffectInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl
  bool v6; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->card_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->effect_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->effect_id, v2, v3);
  this->effect_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_round, v2, (_BYTE)this + 8);
  }
  this->begin_round = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->end_round, v4, v5);
  this->end_round = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor, v4, (_BYTE)this + 16);
  }
  this->factor = 0;
  v6 = *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->delta, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->delta = 0;
  std::set<unsigned int>::set(&this->target_gadget_set);
};

// Line 43: range 000000001612FC96-000000001612FCB4
void __cdecl MechanicusMultistagePlay::ModifierEffectInfo::~ModifierEffectInfo(
        MechanicusMultistagePlay::ModifierEffectInfo *const this)
{
  std::set<unsigned int>::~set(&this->target_gadget_set);
};

// Line 56: range 0000000016167578-0000000016167729
void __cdecl MechanicusMultistagePlay::ServerGlobalValueEffectInfo::ServerGlobalValueEffectInfo(
        MechanicusMultistagePlay::ServerGlobalValueEffectInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->card_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->effect_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->effect_id, v2, v3);
  this->effect_id = 0;
  std::string::basic_string(&this->key);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v2, (_BYTE)this + 40);
  }
  this->value = 0.0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->begin_round, v4, v5);
  this->begin_round = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->end_round, v4, (_BYTE)this + 48);
  }
  this->end_round = 0;
  std::set<unsigned int>::set(&this->target_gadget_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->aura_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aura_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aura_radius, v4, (_BYTE)this + 104);
  }
  this->aura_radius = 0.0;
};

// Line 56: range 000000001612FD18-000000001612FD46
void __cdecl MechanicusMultistagePlay::ServerGlobalValueEffectInfo::~ServerGlobalValueEffectInfo(
        MechanicusMultistagePlay::ServerGlobalValueEffectInfo *const this)
{
  std::set<unsigned int>::~set(&this->target_gadget_set);
  std::string::~string(&this->key);
};

// Line 70: range 000000001614C3D6-000000001614C5C9
void __cdecl MechanicusMultistagePlay::CardInfo::CardInfo(MechanicusMultistagePlay::CardInfo *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl
  bool v5; // dl
  bool v6; // dl
  bool v7; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->card_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->curse_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curse_id >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->curse_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->curse_id = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->curse_effect_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curse_effect_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->curse_effect_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->curse_effect_id = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->begin_round, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->begin_round = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->end_round, (((_BYTE)this + 16) & 7u) + 3, v5);
  this->end_round = 0;
  v6 = *(_BYTE *)(((unsigned __int64)&this->challenge_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_state >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->challenge_state, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->challenge_state = IN_BATTLE_MECHANICUS_CARD_CHALLENGE_NONE;
  v7 = *(_BYTE *)(((unsigned __int64)&this->effect_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_id >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->effect_id, (((_BYTE)this + 24) & 7u) + 3, v7);
  this->effect_id = 0;
};

// Line 82: range 0000000015D41A72-0000000015D4212C
void __cdecl MechanicusMultistagePlay::MechanicusMultistagePlay(
        MechanicusMultistagePlay *const this,
        Scene *scene,
        Group *group,
        uint32_t play_index)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  __int64 v13; // rsi
  bool v14; // dl
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  bool v18; // dl
  bool v19; // dl

  SceneMultistagePlay::SceneMultistagePlay(this, scene, group, play_index);
  v4 = (int (**)(...))(&`vtable for'MechanicusMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id_, scene, (_BYTE)this + 96);
  }
  this->dungeon_id_ = 0;
  v5 = (((_BYTE)this + 100) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_round_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->current_round_, v5, v6);
  this->current_round_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rounds_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rounds_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rounds_, v5, (_BYTE)this + 104);
  }
  this->rounds_ = 0;
  v7 = (((_BYTE)this + 108) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->left_monsters_, v7, v8);
  this->left_monsters_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->excaped_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->excaped_monsters_, v7, (_BYTE)this + 112);
  }
  this->excaped_monsters_ = 0;
  v9 = (((_BYTE)this + 116) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3)
                                                          + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->max_escapable_monsters_, v9, v10);
  this->max_escapable_monsters_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_building_poitns_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_building_poitns_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_building_poitns_, v9, (_BYTE)this + 120);
  }
  this->init_building_poitns_ = 0;
  v11 = (((_BYTE)this + 124) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->kill_monsters_, v11, v12);
  this->kill_monsters_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_can_use_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_can_use_skill_, v11, &this->is_can_use_skill_);
  this->is_can_use_skill_ = 1;
  v13 = (((_BYTE)this - 124) & 7u) + 3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->max_gear_num_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_gear_num_ >> 3) + 0x7FFF8000);
  if ( v14 )
    __asan_report_store4(&this->max_gear_num_, v13, v14);
  this->max_gear_num_ = 0;
  std::set<unsigned int>::set(&this->used_gear_id_set_);
  std::vector<unsigned int>::vector(&this->monster_pool_vec_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gadget_build_num_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->pick_card_num_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->effect_target_num_map_);
  if ( *(char *)(((unsigned __int64)&this->has_player_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_player_damage, v13, &this->has_player_damage);
  this->has_player_damage = 0;
  v15 = ((_BYTE)this + 121) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->has_gear_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->has_gear_damage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->has_gear_damage, v15, v16);
  this->has_gear_damage = 0;
  v17 = (((_BYTE)this + 124) & 7u) + 3;
  v18 = *(_BYTE *)(((unsigned __int64)&this->fin_challenge_num_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fin_challenge_num_ >> 3)
                                                          + 0x7FFF8000);
  if ( v18 )
    __asan_report_store4(&this->fin_challenge_num_, v17, v18);
  this->fin_challenge_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_kill_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gear_kill_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gear_kill_num_, v17, (_BYTE)this + 0x80);
  }
  this->gear_kill_num_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->uid_interact_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->building_stage_seconds_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->building_stage_seconds_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->building_stage_seconds_, v17, (_BYTE)this - 64);
  }
  this->building_stage_seconds_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->card_flip_wait_start_time_ms_, v17);
  this->card_flip_wait_start_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_flip_wait_seconds_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_flip_wait_seconds_, v17, (_BYTE)this - 48);
  }
  this->card_flip_wait_seconds_ = 0;
  v19 = *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3)
                                                         + 0x7FFF8000);
  if ( v19 )
    __asan_report_store4(&this->stage_bonus_building_points_, (((_BYTE)this - 44) & 7u) + 3, v19);
  this->stage_bonus_building_points_ = 0;
  std::unordered_map<unsigned int,MechanicusMultistagePlay::PlayerInfo>::unordered_map(&this->uid_to_player_info_map_);
  std::set<unsigned int>::set(&this->choosed_cards_set_);
  std::set<unsigned int>::set(&this->stage_cards_set_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MechanicusMultistagePlay::CardInfo>>::unordered_map(&this->uid_to_card_info_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::map(&this->cost_modifier_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::map(&this->refund_modifier_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::map(&this->gear_num_modifier_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ModifierEffectInfo>::map(&this->kill_points_modifier_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::map(&this->sgv_effect_map_);
  std::map<std::pair<unsigned int,unsigned int>,MechanicusMultistagePlay::ServerGlobalValueEffectInfo>::map(&this->sgv_aura_map_);
  std::set<unsigned int>::set(&this->entrance_set_);
  std::set<unsigned int>::set(&this->exit_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->uid_to_tokens_map_);
  std::map<unsigned int,unsigned int>::map(&this->round_to_excaped_map_);
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::map(&this->foundation_wtr_map_);
};

// Line 84: range 0000000016056D58-0000000016056D66
proto::MultistagePlayType __cdecl MechanicusMultistagePlay::getPlayType(const MechanicusMultistagePlay *const this)
{
  return 1;
};

// Line 265: range 00000000149EDE84-00000000149EDEAF
void __cdecl MechanicusMultistagePlay::setMonsterPoolVec(
        MechanicusMultistagePlay *const this,
        const std::vector<unsigned int> *pool_vec)
{
  std::vector<unsigned int>::operator=(&this->monster_pool_vec_, pool_vec);
};

// Line 267: range 00000000149EDEB0-00000000149EDEDB
void __cdecl MechanicusMultistagePlay::getMonsterPoolVec(
        MechanicusMultistagePlay *const this,
        std::vector<unsigned int> *pool_vec)
{
  std::vector<unsigned int>::operator=(pool_vec, &this->monster_pool_vec_);
};
