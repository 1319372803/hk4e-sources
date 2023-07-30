// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/gcg_rule.h

// Line 18: range 000000000D82B25E-000000000D82BAB2
void __cdecl GCGRule::GCGRule(GCGRule *const this)
{
  std::less<data::GCGEffectElementType> __comp; // [rsp+1Eh] [rbp-22h] BYREF
  std::allocator<data::GCGEffectElementType> __a; // [rsp+1Fh] [rbp-21h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->init_dice_num = 8;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_dice_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_dice_num);
  }
  this->max_dice_num = 16;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_hand_card_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_hand_card_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_hand_card_num);
  }
  this->first_hand_card_num = 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->second_hand_card_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->second_hand_card_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->second_hand_card_num);
  }
  this->second_hand_card_num = 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->draw_card_num_per_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draw_card_num_per_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->draw_card_num_per_round);
  }
  this->draw_card_num_per_round = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_group_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_group_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_group_max_size);
  }
  this->card_group_max_size = 100;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_group_min_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_group_min_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_group_min_size);
  }
  this->card_group_min_size = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->character_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->character_zone_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->character_zone_max_size);
  }
  this->character_zone_max_size = 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->character_zone_min_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->character_zone_min_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->character_zone_min_size);
  }
  this->character_zone_min_size = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->assit_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assit_zone_max_size >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->assit_zone_max_size);
  }
  this->assit_zone_max_size = 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->summon_zone_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->summon_zone_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->summon_zone_max_size);
  }
  this->summon_zone_max_size = 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->hand_zone_max_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hand_zone_max_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hand_zone_max_size);
  }
  this->hand_zone_max_size = 99;
  if ( *(_BYTE *)(((unsigned __int64)&this->reboot_cost_card_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reboot_cost_card_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reboot_cost_card_num);
  }
  this->reboot_cost_card_num = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->reboot_dice_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reboot_dice_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reboot_dice_num);
  }
  this->reboot_dice_num = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->on_stage_change_cost_dice >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->on_stage_change_cost_dice >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->on_stage_change_cost_dice);
  }
  this->on_stage_change_cost_dice = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_hand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_hand >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_hand);
  }
  this->init_hand = RANDOM;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_type);
  }
  this->game_type = PVP;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_redraw_same >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_redraw_same >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_redraw_same);
  }
  this->is_redraw_same = 0;
  std::allocator<data::GCGEffectElementType>::allocator(&__a);
  std::set<data::GCGEffectElementType>::set(
    &this->non_attach_effect_set,
    (std::initializer_list<data::GCGEffectElementType>)__PAIR128__(2LL, &C_0_6908395),
    &__comp,
    &__a);
  std::allocator<data::GCGEffectElementType>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_bonus_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_bonus_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_bonus_time);
  }
  this->start_bonus_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->roll_bonus_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->roll_bonus_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->roll_bonus_time);
  }
  this->roll_bonus_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_bonus_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_bonus_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round_bonus_time);
  }
  this->round_bonus_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->turn_time);
  }
  this->turn_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->disconnect_time_out >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disconnect_time_out >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disconnect_time_out);
  }
  this->disconnect_time_out = 120;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_time_out >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_time_out >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_time_out);
  }
  this->init_time_out = 45;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round_limit);
  }
  this->round_limit = 15;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_think_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->monster_think_time_ms);
  this->monster_think_time_ms = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_ignore_deck_shuffle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_deck_shuffle);
  this->is_ignore_deck_shuffle = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_redraw >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_redraw >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ignore_redraw);
  }
  this->is_ignore_redraw = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_onstage_character_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_onstage_character_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_onstage_character_index);
  }
  this->init_onstage_character_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enemy_init_onstage_character_index);
  }
  this->enemy_init_onstage_character_index = 0;
};

// Line 18: range 000000000D82BAB4-000000000D82BAD2
void __cdecl GCGRule::~GCGRule(GCGRule *const this)
{
  std::set<data::GCGEffectElementType>::~set(&this->non_attach_effect_set);
};
