// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/pve_logic/pve_intention_mgr.cpp

// Line 22: range 000000000D7BC3EE-000000000D7BC448
int32_t __cdecl PVEIntentionMgr::init(PVEIntentionMgr *const this, uint32_t rule_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->advanture_rule_id_);
  }
  this->advanture_rule_id_ = rule_id;
  return 0;
};

// Line 29: range 000000000D7BC44A-000000000D7BCA9E
int32_t __cdecl PVEIntentionMgr::calCurRoundInitVirtualDiceNum(
        const PVEIntentionMgr *const this,
        std::map<data::GCGVirtualDiceType,unsigned int> *dice_map)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGDuel *Duel; // rax
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rcx
  uint32_t *p_dice_incre_limit_num; // rcx
  int v12; // esi
  uint32_t *v13; // rax
  uint32_t *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned int *v20; // r8
  unsigned int val; // [rsp+10h] [rbp-F0h] BYREF
  uint32_t revise_dice_num; // [rsp+14h] [rbp-ECh]
  std::vector<data::GCGVirtualDiceCurveConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<data::GCGVirtualDiceCurveConfig>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const data::GCGAdvantureRuleExcelConfig *rule_config_ptr; // [rsp+28h] [rbp-D8h]
  const std::vector<data::GCGVirtualDiceCurveConfig> *__for_range; // [rsp+30h] [rbp-D0h]
  const data::GCGVirtualDiceCurveConfig *dice_cure_config; // [rsp+38h] [rbp-C8h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31[128]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 round_num:30 48 4 10 rule_id:31 64 4 11 dice_num:49";
  *(_QWORD *)(v2 + 16) = PVEIntentionMgr::calCurRoundInitVirtualDiceNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  *(_DWORD *)(v2 + 32) = GCGDuel::getRound(Duel);
  *(_DWORD *)(v2 + 48) = PVEIntentionMgr::getConfigRuleId(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Config = GCGGameMode::getConfig(this->game_mode_);
  GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  rule_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGAdvantureRuleExcelConfig(
                      GCGGameExcelConfigMgr,
                      *(_DWORD *)(v2 + 48));
  if ( rule_config_ptr )
  {
    __for_range = &rule_config_ptr->virtual_dice_curve_config;
    __for_begin._M_current = std::vector<data::GCGVirtualDiceCurveConfig>::begin(&rule_config_ptr->virtual_dice_curve_config)._M_current;
    __for_end._M_current = std::vector<data::GCGVirtualDiceCurveConfig>::end(&rule_config_ptr->virtual_dice_curve_config)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGVirtualDiceCurveConfig const*,std::vector<data::GCGVirtualDiceCurveConfig>>(
              &__for_begin,
              &__for_end) )
    {
      dice_cure_config = __gnu_cxx::__normal_iterator<data::GCGVirtualDiceCurveConfig const*,std::vector<data::GCGVirtualDiceCurveConfig>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dice_cure_config->dice_type);
      }
      if ( dice_cure_config->dice_type )
      {
        if ( std::map<data::GCGVirtualDiceType,unsigned int>::count(dice_map, &dice_cure_config->dice_type) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/pve_logic/pve_intention_mgr.cpp",
            "calCurRoundInitVirtualDiceNum",
            46);
          v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v29, (const char (*)[22])off_1BA1FC80);
          if ( *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&dice_cure_config->dice_type);
          }
          val = dice_cure_config->dice_type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_init_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dice_cure_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_init_num >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&dice_cure_config->dice_init_num);
          }
          *(_DWORD *)(v2 + 64) = dice_cure_config->dice_init_num;
          revise_dice_num = 0;
          if ( *(_DWORD *)(v2 + 32) > 1u )
          {
            p_dice_incre_limit_num = &dice_cure_config->dice_incre_limit_num;
            v12 = *(_DWORD *)(v2 + 32) - 1;
            if ( *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_round_incre_num >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_round_incre_num >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&dice_cure_config->dice_round_incre_num);
            }
            val = v12 * dice_cure_config->dice_round_incre_num;
            v13 = (uint32_t *)std::min<unsigned int>(&val, p_dice_incre_limit_num);
            v14 = v13;
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v13);
            }
            revise_dice_num = *v14;
          }
          *(_DWORD *)(v2 + 64) += revise_dice_num;
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/pve_logic/pve_intention_mgr.cpp",
            "calCurRoundInitVirtualDiceNum",
            57);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v30, (const char (*)[22])off_1BA1FCC0);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])", dice type:");
          if ( *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dice_cure_config->dice_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&dice_cure_config->dice_type);
          }
          val = dice_cure_config->dice_type;
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
          v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])", num:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v30);
          std::map<data::GCGVirtualDiceType,unsigned int>::emplace<data::GCGVirtualDiceType const&,unsigned int &>(
            dice_map,
            &dice_cure_config->dice_type,
            (unsigned int *)(v2 + 64),
            &dice_cure_config->dice_type,
            v20);
        }
      }
      __gnu_cxx::__normal_iterator<data::GCGVirtualDiceCurveConfig const*,std::vector<data::GCGVirtualDiceCurveConfig>>::operator++(&__for_begin);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/pve_logic/pve_intention_mgr.cpp",
      "calCurRoundInitVirtualDiceNum",
      35);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v30,
           (const char (*)[42])"GCGAdvantureRuleExcelConfig not find, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = -1;
  }
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 64: range 000000000D7BCAA0-000000000D7BCBED
__int64 __fastcall PVEIntentionMgr::calSpecifyCostRevise(
        const PVEIntentionMgr *const this,
        const std::map<data::GCGCostType,unsigned int> *cost_map,
        GCGCostType cost_type,
        int32_t one_cost_per_revise)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 result; // rax
  const std::map<data::GCGCostType,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 cost_type:63";
  *(_QWORD *)(v4 + 16) = PVEIntentionMgr::calSpecifyCostRevise;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = cost_type;
  if ( std::map<data::GCGCostType,unsigned int>::count(
         cost_map,
         (const std::map<data::GCGCostType,unsigned int>::key_type *)(v4 + 32)) )
  {
    v8 = std::map<data::GCGCostType,unsigned int>::at(
           cost_map,
           (const std::map<data::GCGCostType,unsigned int>::key_type *)(v4 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    result = (unsigned int)(one_cost_per_revise * *v9);
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000D7BCEAA-000000000D7BDAE7
int32_t __cdecl PVEIntentionMgr::calPriorityRevise(
        PVEIntentionMgr *const this,
        const GCGCard *character_card,
        const GCGSkill *skill,
        const std::map<data::GCGCostType,unsigned int> *cost_map,
        const std::map<unsigned int,PVEIntention> *result)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const GCGConfigMgr *Config; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  data::GCGCostType *v11; // rax
  data::GCGCostType *v12; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention> >::pointer v13; // rax
  int v14; // ecx
  GCGCharacterZone *CharacterZone; // r14
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  const GCGGameExcelConfigMgr *v18; // r14
  uint32_t SkillId; // eax
  unsigned int *v20; // rax
  uint32_t *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  int32_t v24; // eax
  int32_t priority_revise; // [rsp+34h] [rbp-23Ch]
  int32_t priority_revisea; // [rsp+34h] [rbp-23Ch]
  int32_t priority_reviseb; // [rsp+34h] [rbp-23Ch]
  data::GCGCostType cost_type; // [rsp+3Ch] [rbp-234h]
  std::map<unsigned int,PVEIntention>::const_iterator __for_begin_0; // [rsp+40h] [rbp-230h] BYREF
  std::map<unsigned int,PVEIntention>::const_iterator __for_end_0; // [rsp+48h] [rbp-228h] BYREF
  std::set<data::GCGCostType>::iterator __for_begin; // [rsp+50h] [rbp-220h] BYREF
  std::set<data::GCGCostType>::iterator __for_end; // [rsp+58h] [rbp-218h] BYREF
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+60h] [rbp-210h]
  const data::GCGAdvantureRuleExcelConfig *rule_config_ptr; // [rsp+68h] [rbp-208h]
  std::set<data::GCGCostType> *__for_range; // [rsp+70h] [rbp-200h]
  GCGDuel *duel; // [rsp+78h] [rbp-1F8h]
  GCGField *field; // [rsp+80h] [rbp-1F0h]
  const data::GCGSkillExcelConfig *skill_config_ptr; // [rsp+88h] [rbp-1E8h]
  const std::vector<data::GCGSkillTagType> *cur_skill_tag_vec; // [rsp+90h] [rbp-1E0h]
  const std::map<unsigned int,PVEIntention> *__for_range_0; // [rsp+98h] [rbp-1D8h]
  const std::pair<unsigned int const,PVEIntention> *v44; // [rsp+A0h] [rbp-1D0h]
  std::tuple_element<0,const std::pair<unsigned int const,PVEIntention> >::type *_; // [rsp+A8h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,PVEIntention> >::type *intention; // [rsp+B0h] [rbp-1C0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+B8h] [rbp-1B8h]
  PVEIntentionMgr::calPriorityRevise::<lambda(GCGCard&)> __f; // [rsp+C0h] [rbp-1B0h]
  common::milog::MiLogStream v49; // [rsp+E0h] [rbp-190h] BYREF
  common::milog::MiLogStream v50; // [rsp+100h] [rbp-170h] BYREF
  char v51[336]; // [rsp+120h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 48 1 15 is_find_pos:108 64 4 10 rule_id:77 80 4 23 cur_character_order:105 96 4 32 same_skill_"
                        "tag_intention_num:144 112 8 21 intention_map_iter:99 144 24 29 fetch_same_skill_tag_func:145 208"
                        " 48 19 specify_cost_set:93";
  *(_QWORD *)(v5 + 16) = PVEIntentionMgr::calPriorityRevise;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234556924;
  v7[536862723] = 61956;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862725] = -218959360;
  v7[536862726] = 62194;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 64) = PVEIntentionMgr::getConfigRuleId(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Config = GCGGameMode::getConfig(this->game_mode_);
  gcg_game_config_mgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  rule_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGAdvantureRuleExcelConfig(
                      gcg_game_config_mgr,
                      *(_DWORD *)(v5 + 64));
  if ( rule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_same_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rule_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_same_cost >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&rule_config_ptr->priority_revise_per_same_cost);
    }
    priority_revise = PVEIntentionMgr::calSpecifyCostRevise(
                        this,
                        cost_map,
                        GCG_COST_DICE_SAME,
                        rule_config_ptr->priority_revise_per_same_cost);
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_void_cost >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_void_cost >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule_config_ptr->priority_revise_per_void_cost);
    }
    priority_revisea = PVEIntentionMgr::calSpecifyCostRevise(
                         this,
                         cost_map,
                         GCG_COST_DICE_VOID,
                         rule_config_ptr->priority_revise_per_void_cost)
                     + priority_revise;
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_energy_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rule_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_energy_cost >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&rule_config_ptr->priority_revise_per_energy_cost);
    }
    priority_reviseb = PVEIntentionMgr::calSpecifyCostRevise(
                         this,
                         cost_map,
                         GCG_COST_ENERGY,
                         rule_config_ptr->priority_revise_per_energy_cost)
                     + priority_revisea;
    GCGUtils::getElementSet<data::GCGCostType>((std::set<data::GCGCostType> *)(v5 + 208));
    __for_range = (std::set<data::GCGCostType> *)(v5 + 208);
    __for_begin._M_node = std::set<data::GCGCostType>::begin((const std::set<data::GCGCostType> *const)(v5 + 208))._M_node;
    __for_end._M_node = std::set<data::GCGCostType>::end((const std::set<data::GCGCostType> *const)(v5 + 208))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = (data::GCGCostType *)std::_Rb_tree_const_iterator<data::GCGCostType>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      cost_type = *v12;
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_specify_cost >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_specify_cost >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule_config_ptr->priority_revise_per_specify_cost);
      }
      priority_reviseb += PVEIntentionMgr::calSpecifyCostRevise(
                            this,
                            cost_map,
                            cost_type,
                            rule_config_ptr->priority_revise_per_specify_cost);
      std::_Rb_tree_const_iterator<data::GCGCostType>::operator++(&__for_begin);
    }
    *(_DWORD *)(v5 + 96) = GCGCard::getGuid(character_card);
    *(std::map<unsigned int,PVEIntention>::const_iterator *)(v5 + 112) = std::map<unsigned int,PVEIntention>::find(
                                                                           result,
                                                                           (const std::map<unsigned int,PVEIntention>::key_type *)(v5 + 96));
    __for_end._M_node = std::map<unsigned int,PVEIntention>::end(result)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention> >::_Self *)(v5 + 112),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention> >::_Self *)&__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention> > *const)(v5 + 112));
      v14 = std::vector<unsigned int>::size(&v13->second.skill_vec);
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_intention >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_intention >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule_config_ptr->priority_revise_per_intention);
      }
      priority_reviseb += v14 * rule_config_ptr->priority_revise_per_intention;
    }
    *(_DWORD *)(v5 + 80) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_controller_id_);
    }
    field = GCGDuel::getField(duel, this->cur_controller_id_);
    *(_BYTE *)(v5 + 48) = 0;
    CharacterZone = GCGField::getCharacterZone(field);
    __f.__cur_character_order = (uint32_t *)(v5 + 80);
    __f.__is_find_pos = (bool *)(v5 + 48);
    __f.__cur_guid = GCGCard::getGuid(character_card);
    std::function<ForeachPolicy ()(GCGCard &)>::function<PVEIntentionMgr::calPriorityRevise(GCGCard const&,GCGSkill const&,std::map<data::GCGCostType,unsigned int> const&,std::map const&<unsigned int,PVEIntention,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::map const>>>)::{lambda(GCGCard &)#1},void,void>(
      (std::function<ForeachPolicy(GCGCard&)> *const)&v50,
      __f);
    GCGCharacterZone::foreachAliveCharacter(CharacterZone, (std::function<ForeachPolicy(GCGCard&)> *)&v50);
    std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v50);
    if ( *(_BYTE *)(v5 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)rule_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_order >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&rule_config_ptr->priority_revise_per_order);
      }
      priority_reviseb += *(_DWORD *)(v5 + 80) * rule_config_ptr->priority_revise_per_order;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/pve_logic/pve_intention_mgr.cpp",
        "calPriorityRevise",
        125);
      v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v49, (const char (*)[30])off_1BA1FEC0);
      GCGCard::getDesc[abi:cxx11]((std::string *)&v50, character_card);
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v50);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v17, (const char (*)[23])off_1BA1FF00);
      std::string::~string(&v50);
      common::milog::MiLogStream::~MiLogStream(&v49);
    }
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_skill_tag >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_skill_tag >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule_config_ptr->priority_revise_per_skill_tag);
    }
    if ( rule_config_ptr->priority_revise_per_skill_tag )
    {
      v18 = gcg_game_config_mgr;
      SkillId = GCGSkill::getSkillId(skill);
      skill_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGSkillExcelConfig(v18, SkillId);
      if ( skill_config_ptr )
      {
        cur_skill_tag_vec = &skill_config_ptr->skill_tag_list;
        if ( !std::vector<data::GCGSkillTagType>::empty(&skill_config_ptr->skill_tag_list) )
        {
          *(_DWORD *)(v5 + 96) = 0;
          *(_QWORD *)(v5 + 144) = v5 + 96;
          *(_QWORD *)(v5 + 152) = cur_skill_tag_vec;
          *(_QWORD *)(v5 + 160) = gcg_game_config_mgr;
          __for_range_0 = result;
          __for_begin_0._M_node = std::map<unsigned int,PVEIntention>::begin(result)._M_node;
          __for_end_0._M_node = std::map<unsigned int,PVEIntention>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            v44 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention>>::operator*(&__for_begin_0);
            _ = std::get<0ul,unsigned int const,PVEIntention>(v44);
            intention = (std::tuple_element<1,const std::pair<unsigned int const,PVEIntention> >::type *)std::get<1ul,unsigned int const,PVEIntention>(v44);
            __for_range_1 = &intention->skill_vec;
            __for_begin._M_node = (std::_Rb_tree_const_iterator<data::GCGCostType>::_Base_ptr)std::vector<unsigned int>::begin(&intention->skill_vec)._M_current;
            __for_end._M_node = (std::_Rb_tree_const_iterator<data::GCGCostType>::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
            {
              v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
              v21 = v20;
              if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v20);
              }
              PVEIntentionMgr::calPriorityRevise(GCGCard const&,GCGSkill const&,std::map<data::GCGCostType,unsigned int> const&,std::map const&<unsigned int,PVEIntention,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::map const>>>)::{lambda(unsigned int)#2}::operator()(
                (const PVEIntentionMgr::calPriorityRevise::<lambda(uint32_t)> *const)(v5 + 144),
                *v21);
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
            }
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention>>::operator++(&__for_begin_0);
          }
          if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_skill_tag >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->priority_revise_per_skill_tag >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&rule_config_ptr->priority_revise_per_skill_tag);
          }
          priority_reviseb += *(_DWORD *)(v5 + 96) * rule_config_ptr->priority_revise_per_skill_tag;
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/pve_logic/pve_intention_mgr.cpp",
            "calPriorityRevise",
            163);
          v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v49,
                  (const char (*)[30])"same_skill_tag_intention_num:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v5 + 96));
          GCGSkill::getName[abi:cxx11]((std::string *)&v50, skill);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v50);
          std::string::~string(&v50);
          common::milog::MiLogStream::~MiLogStream(&v49);
        }
      }
    }
    v10 = priority_reviseb;
    std::set<data::GCGCostType>::~set((std::set<data::GCGCostType> *const)(v5 + 208));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/pve_logic/pve_intention_mgr.cpp",
      "calPriorityRevise",
      82);
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v50,
           (const char (*)[42])"GCGAdvantureRuleExcelConfig not find, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 64));
    common::milog::MiLogStream::~MiLogStream(&v50);
    v10 = 0;
  }
  v24 = v10;
  if ( v51 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return v24;
};

// Line 109: range 000000000D7BCBEE-000000000D7BCD27
ForeachPolicy __cdecl PVEIntentionMgr::calPriorityRevise(GCGCard const&,GCGSkill const&,std::map<data::GCGCostType,unsigned int> const&,std::map const&<unsigned int,PVEIntention,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::map const>>>)::{lambda(GCGCard&)#1}::operator()(
        const PVEIntentionMgr::calPriorityRevise::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  bool *is_find_pos; // rdx
  uint32_t *cur_character_order; // rax

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__cur_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__cur_guid);
  }
  if ( Guid == __closure->__cur_guid )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_find_pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__is_find_pos);
    is_find_pos = __closure->__is_find_pos;
    if ( *(_BYTE *)(((unsigned __int64)is_find_pos >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_find_pos & 7) >= *(_BYTE *)(((unsigned __int64)is_find_pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_find_pos);
    }
    *is_find_pos = 1;
    return 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    cur_character_order = __closure->__cur_character_order;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__cur_character_order >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__cur_character_order & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__cur_character_order >> 3)
                                                                                 + 0x7FFF8000) )
    {
      cur_character_order = (uint32_t *)__asan_report_load4(__closure->__cur_character_order);
    }
    ++*cur_character_order;
    return 0;
  }
};

// Line 145: range 000000000D7BCD28-000000000D7BCEA8
void __cdecl PVEIntentionMgr::calPriorityRevise(GCGCard const&,GCGSkill const&,std::map<data::GCGCostType,unsigned int> const&,std::map const&<unsigned int,PVEIntention,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::map const>>>)::{lambda(unsigned int)#2}::operator()(
        const PVEIntentionMgr::calPriorityRevise::<lambda(uint32_t)> *const __closure,
        uint32_t skill_id)
{
  data::GCGSkillTagType *v2; // rax
  data::GCGSkillTagType *v3; // rdx
  uint32_t *same_skill_tag_intention_num; // rax
  data::GCGSkillTagType cur_skill_tag; // [rsp+14h] [rbp-1Ch]
  std::vector<data::GCGSkillTagType>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::vector<data::GCGSkillTagType>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::vector<data::GCGSkillTagType> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_skill_tag_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__cur_skill_tag_vec);
  __for_range = __closure->__cur_skill_tag_vec;
  __for_begin._M_current = std::vector<data::GCGSkillTagType>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<data::GCGSkillTagType>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGSkillTagType const*,std::vector<data::GCGSkillTagType>>(
            &__for_begin,
            &__for_end) )
  {
    v2 = (data::GCGSkillTagType *)__gnu_cxx::__normal_iterator<data::GCGSkillTagType const*,std::vector<data::GCGSkillTagType>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    cur_skill_tag = *v3;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__gcg_game_config_mgr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__gcg_game_config_mgr);
    if ( GCGGameExcelConfigMgr::isSkillHasTag(__closure->__gcg_game_config_mgr, skill_id, cur_skill_tag) )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      same_skill_tag_intention_num = __closure->__same_skill_tag_intention_num;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__same_skill_tag_intention_num >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__closure->__same_skill_tag_intention_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__same_skill_tag_intention_num >> 3)
                                                                                            + 0x7FFF8000) )
      {
        same_skill_tag_intention_num = (uint32_t *)__asan_report_load4(__closure->__same_skill_tag_intention_num);
      }
      ++*same_skill_tag_intention_num;
    }
    __gnu_cxx::__normal_iterator<data::GCGSkillTagType const*,std::vector<data::GCGSkillTagType>>::operator++(&__for_begin);
  }
};

// Line 171: range 000000000D7BDAE8-000000000D7BE30B
__int64 __fastcall PVEIntentionMgr::tryCostSpecifyDice(
        PVEIntentionMgr *const this,
        bool is_need_full_cost,
        std::map<data::GCGVirtualDiceType,unsigned int> *dice_map,
        data::GCGVirtualDiceType dice_type,
        std::map<data::GCGCostType,unsigned int> *cost_map,
        GCGCostType cost_type,
        std::map<data::GCGVirtualDiceType,unsigned int> *choose_map)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  std::map<data::GCGCostType,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  char v12; // al
  __int64 result; // rax
  std::map<data::GCGVirtualDiceType,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::map<data::GCGCostType,unsigned int>::mapped_type *v22; // rax
  std::map<data::GCGVirtualDiceType,unsigned int>::mapped_type *v23; // r14
  std::map<data::GCGCostType,unsigned int>::mapped_type *v24; // rax
  const unsigned int *v25; // rax
  _DWORD *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v30; // rax
  _DWORD *v31; // rdx
  std::map<data::GCGCostType,unsigned int>::mapped_type *v32; // rax
  _DWORD *v33; // rdx
  std::map<data::GCGVirtualDiceType,unsigned int>::mapped_type *v34; // rax
  _DWORD *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  unsigned int val; // [rsp+38h] [rbp-D8h] BYREF
  unsigned int v53; // [rsp+3Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v54; // [rsp+40h] [rbp-D0h] BYREF
  char v55[176]; // [rsp+60h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 4 17 rest_cost_num:172 64 4 16 min_dice_num:173 80 4 13 dice_type:170 96 4 13 cost_type:170";
  *(_QWORD *)(v7 + 16) = PVEIntentionMgr::tryCostSpecifyDice;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = -202116348;
  *(_DWORD *)(v7 + 80) = dice_type;
  *(_DWORD *)(v7 + 96) = cost_type;
  *(_DWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 64) = 0;
  if ( !std::map<data::GCGCostType,unsigned int>::count(
          cost_map,
          (const std::map<data::GCGCostType,unsigned int>::key_type *)(v7 + 96)) )
    goto LABEL_8;
  v10 = std::map<data::GCGCostType,unsigned int>::operator[](
          cost_map,
          (const std::map<data::GCGCostType,unsigned int>::key_type *)(v7 + 96));
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  if ( *v11 )
    v12 = 0;
  else
LABEL_8:
    v12 = 1;
  if ( v12 )
  {
    result = 0LL;
  }
  else
  {
    if ( !std::map<data::GCGVirtualDiceType,unsigned int>::count(
            dice_map,
            (const std::map<data::GCGVirtualDiceType,unsigned int>::key_type *)(v7 + 80)) )
      goto LABEL_16;
    v14 = std::map<data::GCGVirtualDiceType,unsigned int>::operator[](
            dice_map,
            (const std::map<data::GCGVirtualDiceType,unsigned int>::key_type *)(v7 + 80));
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    if ( *v15 )
      v16 = 0;
    else
LABEL_16:
      v16 = 1;
    if ( v16 )
    {
      if ( is_need_full_cost )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/pve_logic/pve_intention_mgr.cpp",
          "tryCostSpecifyDice",
          182);
        v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v54,
                (const char (*)[40])"tryCostSpecifyDice not meet, dice_type:");
        val = *(_DWORD *)(v7 + 80);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v18,
                (const char (*)[25])" num is zero, cost_type:");
        v53 = *(_DWORD *)(v7 + 96);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v53);
        v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v20,
                (const char (*)[17])", need cost num:");
        v22 = std::map<data::GCGCostType,unsigned int>::operator[](
                cost_map,
                (const std::map<data::GCGCostType,unsigned int>::key_type *)(v7 + 96));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v22);
        common::milog::MiLogStream::~MiLogStream(&v54);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      v23 = std::map<data::GCGVirtualDiceType,unsigned int>::operator[](
              dice_map,
              (const std::map<data::GCGVirtualDiceType,unsigned int>::key_type *)(v7 + 80));
      v24 = std::map<data::GCGCostType,unsigned int>::operator[](
              cost_map,
              (const std::map<data::GCGCostType,unsigned int>::key_type *)(v7 + 96));
      v25 = std::min<unsigned int>(v24, v23);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      *(_DWORD *)(v7 + 64) = *v26;
      v27 = (unsigned __int64)std::map<data::GCGVirtualDiceType,unsigned int>::operator[](
                                dice_map,
                                (const std::map<data::GCGVirtualDiceType,unsigned int>::key_type *)(v7 + 80));
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) != 0 && (char)((v27 & 7) + 3) >= *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load4(v27);
      *(_DWORD *)v27 -= *(_DWORD *)(v7 + 64);
      v28 = (unsigned __int64)std::map<data::GCGCostType,unsigned int>::operator[](
                                cost_map,
                                (const std::map<data::GCGCostType,unsigned int>::key_type *)(v7 + 96));
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0 && (char)((v28 & 7) + 3) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        v28 = __asan_report_load4(v28);
      *(_DWORD *)v28 -= *(_DWORD *)(v7 + 64);
      v29 = (unsigned __int64)std::map<data::GCGVirtualDiceType,unsigned int>::operator[](
                                choose_map,
                                (const std::map<data::GCGVirtualDiceType,unsigned int>::key_type *)(v7 + 80));
      if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) != 0 && (char)((v29 & 7) + 3) >= *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        v29 = __asan_report_load4(v29);
      *(_DWORD *)v29 += *(_DWORD *)(v7 + 64);
      v30 = std::map<data::GCGCostType,unsigned int>::operator[](
              cost_map,
              (const std::map<data::GCGCostType,unsigned int>::key_type *)(v7 + 96));
      v31 = v30;
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v30);
      }
      if ( *v31 )
      {
        v32 = std::map<data::GCGCostType,unsigned int>::operator[](
                cost_map,
                (const std::map<data::GCGCostType,unsigned int>::key_type *)(v7 + 96));
        v33 = v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        *(_DWORD *)(v7 + 48) = *v33;
      }
      else
      {
        std::map<data::GCGCostType,unsigned int>::erase(
          cost_map,
          (const std::map<data::GCGCostType,unsigned int>::key_type *)(v7 + 96));
        *(_DWORD *)(v7 + 48) = 0;
      }
      v34 = std::map<data::GCGVirtualDiceType,unsigned int>::operator[](
              dice_map,
              (const std::map<data::GCGVirtualDiceType,unsigned int>::key_type *)(v7 + 80));
      v35 = v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      if ( !*v35 )
        std::map<data::GCGVirtualDiceType,unsigned int>::erase(
          dice_map,
          (const std::map<data::GCGVirtualDiceType,unsigned int>::key_type *)(v7 + 80));
      if ( *(_DWORD *)(v7 + 48) && is_need_full_cost )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/pve_logic/pve_intention_mgr.cpp",
          "tryCostSpecifyDice",
          209);
        v36 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v54,
                (const char (*)[40])"tryCostSpecifyDice not meet, dice_type:");
        val = *(_DWORD *)(v7 + 80);
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
        v38 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v37, (const char (*)[12])",cost_type:");
        v53 = *(_DWORD *)(v7 + 96);
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &v53);
        v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v39, (const char (*)[11])",rest num:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v7 + 48));
        common::milog::MiLogStream::~MiLogStream(&v54);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/pve_logic/pve_intention_mgr.cpp",
          "tryCostSpecifyDice",
          212);
        v41 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v54,
                (const char (*)[36])"tryCostSpecifyDice meet, dice_type:");
        val = *(_DWORD *)(v7 + 80);
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
        v43 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v42, (const char (*)[12])",cost_type:");
        v53 = *(_DWORD *)(v7 + 96);
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &v53);
        v45 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v44, (const char (*)[13])",choose num:");
        v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v45,
                (const unsigned int *)(v7 + 64));
        v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v46,
                (const char (*)[16])",rest_cost_num:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v7 + 48));
        common::milog::MiLogStream::~MiLogStream(&v54);
        result = 0LL;
      }
    }
  }
  if ( v55 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 217: range 000000000D7BE30C-000000000D7BE614
int32_t __cdecl PVEIntentionMgr::tryCostDice(
        PVEIntentionMgr *const this,
        std::map<data::GCGVirtualDiceType,unsigned int> *p_copy_dice_map,
        std::map<data::GCGCostType,unsigned int> *p_copy_cost_map,
        std::map<data::GCGVirtualDiceType,unsigned int> *choose_map)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  __gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> >::reference v8; // rax
  data::GCGCostType *v9; // rdx
  int32_t result; // eax
  data::GCGCostType cost_type; // [rsp+24h] [rbp-ACh]
  std::vector<data::GCGCostType>::iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<data::GCGCostType>::iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::vector<data::GCGCostType> *__for_range; // [rsp+38h] [rbp-98h]
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 22 rest_cost_type_vec:229";
  *(_QWORD *)(v4 + 16) = PVEIntentionMgr::tryCostDice;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( (unsigned int)PVEIntentionMgr::tryCostSpecifyDice(
                       this,
                       0,
                       p_copy_dice_map,
                       GCG_VIRTUAL_DICE_VOID,
                       p_copy_cost_map,
                       GCG_COST_DICE_VOID,
                       choose_map) )
  {
    v7 = -1;
  }
  else if ( (unsigned int)PVEIntentionMgr::tryCostSpecifyDice(
                            this,
                            0,
                            p_copy_dice_map,
                            GCG_VIRTUAL_DICE_VOID,
                            p_copy_cost_map,
                            GCG_COST_DICE_SAME,
                            choose_map) )
  {
    v7 = -1;
  }
  else
  {
    common::tools::MiscUtils::getAllMapKeys<std::map<data::GCGCostType,unsigned int>>(
      (std::vector<data::GCGCostType> *)(v4 + 32),
      p_copy_cost_map);
    __for_range = (std::vector<data::GCGCostType> *)(v4 + 32);
    __for_begin._M_current = std::vector<data::GCGCostType>::begin((std::vector<data::GCGCostType> *const)(v4 + 32))._M_current;
    __for_end._M_current = std::vector<data::GCGCostType>::end((std::vector<data::GCGCostType> *const)(v4 + 32))._M_current;
    while ( __gnu_cxx::operator!=<data::GCGCostType *,std::vector<data::GCGCostType>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<data::GCGCostType *,std::vector<data::GCGCostType>>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      cost_type = *v9;
      if ( *v9 != GCG_COST_ENERGY
        && cost_type
        && (unsigned int)PVEIntentionMgr::tryCostSpecifyDice(
                           this,
                           1,
                           p_copy_dice_map,
                           GCG_VIRTUAL_DICE_PAIMON,
                           p_copy_cost_map,
                           cost_type,
                           choose_map) )
      {
        v7 = -1;
        goto LABEL_18;
      }
      __gnu_cxx::__normal_iterator<data::GCGCostType *,std::vector<data::GCGCostType>>::operator++(&__for_begin);
    }
    v7 = 0;
LABEL_18:
    std::vector<data::GCGCostType>::~vector((std::vector<data::GCGCostType> *const)(v4 + 32));
  }
  result = v7;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 245: range 000000000D7BE616-000000000D7BEADC
int32_t __cdecl PVEIntentionMgr::payCost(
        PVEIntentionMgr *const this,
        std::map<data::GCGVirtualDiceType,unsigned int> *dice_map,
        std::map<data::GCGVirtualDiceType,unsigned int> *choose_map)
{
  std::_Rb_tree_iterator<std::pair<const data::GCGVirtualDiceType,unsigned int> >::reference v3; // rax
  std::pair<const data::GCGVirtualDiceType,unsigned int> *v4; // rdx
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  std::map<data::GCGVirtualDiceType,unsigned int>::mapped_type *v8; // rax
  std::tuple_element<1,std::pair<const data::GCGVirtualDiceType,unsigned int> >::type *v9; // rdx
  std::tuple_element<1,std::pair<const data::GCGVirtualDiceType,unsigned int> >::type v10; // ecx
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  std::map<data::GCGVirtualDiceType,unsigned int>::mapped_type *v16; // rax
  unsigned __int64 v17; // rax
  int v18; // esi
  std::map<data::GCGVirtualDiceType,unsigned int>::mapped_type *v19; // rax
  _DWORD *v20; // rdx
  unsigned int val; // [rsp+2Ch] [rbp-64h] BYREF
  std::map<data::GCGVirtualDiceType,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-60h] BYREF
  std::map<data::GCGVirtualDiceType,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-58h] BYREF
  std::map<data::GCGVirtualDiceType,unsigned int> *__for_range; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,std::pair<const data::GCGVirtualDiceType,unsigned int> >::type *choose_dice_type; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,std::pair<const data::GCGVirtualDiceType,unsigned int> >::type *choose_dice_num; // [rsp+50h] [rbp-40h]
  std::pair<const data::GCGVirtualDiceType,unsigned int> __in; // [rsp+58h] [rbp-38h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-30h] BYREF

  __for_range = choose_map;
  __for_begin._M_node = std::map<data::GCGVirtualDiceType,unsigned int>::begin(choose_map)._M_node;
  __for_end._M_node = std::map<data::GCGVirtualDiceType,unsigned int>::end(__for_range)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
      return 0;
    v3 = std::_Rb_tree_iterator<std::pair<data::GCGVirtualDiceType const,unsigned int>>::operator*(&__for_begin);
    v4 = v3;
    if ( ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v3 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v3, 8LL);
    }
    __in = *v4;
    choose_dice_type = std::get<0ul,data::GCGVirtualDiceType const,unsigned int>(&__in);
    choose_dice_num = std::get<1ul,data::GCGVirtualDiceType const,unsigned int>(&__in);
    if ( !std::map<data::GCGVirtualDiceType,unsigned int>::count(dice_map, choose_dice_type) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/pve_logic/pve_intention_mgr.cpp",
        "payCost",
        250);
      v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v29, (const char (*)[11])"dice type:");
      if ( *(_BYTE *)(((unsigned __int64)choose_dice_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)choose_dice_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)choose_dice_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(choose_dice_type);
      }
      val = *choose_dice_type;
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" not valid");
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    v8 = std::map<data::GCGVirtualDiceType,unsigned int>::operator[](dice_map, choose_dice_type);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    if ( *(_BYTE *)(((unsigned __int64)choose_dice_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)choose_dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)choose_dice_num >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(choose_dice_num);
    }
    if ( v10 < *choose_dice_num )
      break;
    v17 = (unsigned __int64)std::map<data::GCGVirtualDiceType,unsigned int>::operator[](dice_map, choose_dice_type);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load4(v17);
    v18 = *(_DWORD *)v17;
    if ( *(_BYTE *)(((unsigned __int64)choose_dice_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)choose_dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)choose_dice_num >> 3)
                                                                        + 0x7FFF8000) )
    {
      v17 = __asan_report_load4(choose_dice_num);
    }
    *(_DWORD *)v17 = v18 - *choose_dice_num;
    v19 = std::map<data::GCGVirtualDiceType,unsigned int>::operator[](dice_map, choose_dice_type);
    v20 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    if ( !*v20 )
      std::map<data::GCGVirtualDiceType,unsigned int>::erase(dice_map, choose_dice_type);
    std::_Rb_tree_iterator<std::pair<data::GCGVirtualDiceType const,unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/pve_logic/pve_intention_mgr.cpp",
    "payCost",
    255);
  v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v29, (const char (*)[18])"choose dice type:");
  if ( *(_BYTE *)(((unsigned __int64)choose_dice_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)choose_dice_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)choose_dice_type >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(choose_dice_type);
  }
  val = *choose_dice_type;
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
  v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" choose num:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, choose_dice_num);
  v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])" large than have:");
  v16 = std::map<data::GCGVirtualDiceType,unsigned int>::operator[](dice_map, choose_dice_type);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, v16);
  common::milog::MiLogStream::~MiLogStream(&v29);
  return -1;
};

// Line 268: range 000000000D7BEADE-000000000D7BF7B7
int32_t __cdecl PVEIntentionMgr::tryGenCurSkillIntention(
        PVEIntentionMgr *const this,
        const GCGCard *character_card,
        const GCGSkill *skill,
        const std::map<data::GCGVirtualDiceType,unsigned int> *dice_map,
        uint32_t total_cost_energy,
        const std::map<unsigned int,PVEIntention> *result,
        PVEIntentionBriefInfo *intention)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // r14
  uint32_t Id; // eax
  common::milog::MiLogStream *v13; // rbx
  int32_t v14; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention> >::pointer v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rbx
  GCGControllerValue cur_controller_id; // ecx
  common::milog::MiLogStream *v22; // rbx
  common::milog::MiLogStream *v23; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v24; // rax
  uint32_t *v25; // rdx
  uint32_t v26; // eax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  bool v32; // r14
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  uint32_t Guid; // ecx
  uint32_t SkillId; // edx
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  int32_t v44; // eax
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+30h] [rbp-210h] BYREF
  unsigned int val; // [rsp+34h] [rbp-20Ch] BYREF
  uint32_t cost_energy; // [rsp+38h] [rbp-208h]
  int32_t priority; // [rsp+3Ch] [rbp-204h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention> >::_Self __y; // [rsp+40h] [rbp-200h] BYREF
  const data::GCGCharExcelConfig *character_excel_config_ptr; // [rsp+48h] [rbp-1F8h]
  common::milog::MiLogStream v55; // [rsp+50h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v56; // [rsp+70h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v57; // [rsp+90h] [rbp-1B0h] BYREF
  std::map<data::GCGVirtualDiceType,unsigned int> p_copy_dice_map; // [rsp+B0h] [rbp-190h] BYREF
  std::map<data::GCGCostType,unsigned int> p_copy_cost_map; // [rsp+E0h] [rbp-160h] BYREF
  char v60[304]; // [rsp+110h] [rbp-130h] BYREF

  v7 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(256LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 4 28 cur_card_intention_count:277 64 8 21 result_const_iter:278 96 48 12 cost_map:295 176 4"
                        "8 14 choose_map:302";
  *(_QWORD *)(v7 + 16) = PVEIntentionMgr::tryGenCurSkillIntention;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -218959360;
  v9[536862724] = -219021312;
  v9[536862725] = 62194;
  v9[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Config = GCGGameMode::getConfig(this->game_mode_);
  GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  Id = GCGCard::getId(character_card);
  character_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGCharExcelConfig(GCGGameExcelConfigMgr, Id);
  if ( character_excel_config_ptr )
  {
    *(_DWORD *)(v7 + 48) = 0;
    val = GCGCard::getGuid(character_card);
    *(std::map<unsigned int,PVEIntention>::const_iterator *)(v7 + 64) = std::map<unsigned int,PVEIntention>::find(
                                                                          result,
                                                                          &val);
    __y._M_node = std::map<unsigned int,PVEIntention>::end(result)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention> >::_Self *)(v7 + 64),
           &__y) )
    {
      v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,PVEIntention> > *const)(v7 + 64));
      *(_DWORD *)(v7 + 48) = std::vector<unsigned int>::size(&v15->second.skill_vec);
    }
    if ( *(_BYTE *)(((unsigned __int64)&character_excel_config_ptr->max_intention_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)character_excel_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&character_excel_config_ptr->max_intention_num >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&character_excel_config_ptr->max_intention_num);
    }
    if ( character_excel_config_ptr->max_intention_num
      && character_excel_config_ptr->max_intention_num <= *(_DWORD *)(v7 + 48) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/pve_logic/pve_intention_mgr.cpp",
        "tryGenCurSkillIntention",
        285);
      v16 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v56,
              (const char (*)[47])"tryGenCurSkillIntention reach limit cur count:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v7 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])", config max:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              &character_excel_config_ptr->max_intention_num);
      v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])", card:");
      GCGCard::getDesc[abi:cxx11]((std::string *)&v57, character_card);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)&v57);
      std::string::~string(&v57);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v14 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_controller_id_);
      }
      cur_controller_id = this->cur_controller_id_;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      if ( GCGUtils::checkSkillIntentionNeedBlock(this->game_mode_, cur_controller_id, skill) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/pve_logic/pve_intention_mgr.cpp",
          "tryGenCurSkillIntention",
          291);
        v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v56, (const char (*)[6])"card:");
        GCGCard::getDesc[abi:cxx11]((std::string *)&v57, character_card);
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)&v57);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v23, (const char (*)[21])" block intention gen");
        std::string::~string(&v57);
        common::milog::MiLogStream::~MiLogStream(&v56);
        v14 = -1;
      }
      else
      {
        GCGSkill::getCost((std::map<data::GCGCostType,unsigned int> *)(v7 + 96), skill);
        __x = GCG_COST_ENERGY;
        if ( std::map<data::GCGCostType,unsigned int>::count(
               (const std::map<data::GCGCostType,unsigned int> *const)(v7 + 96),
               &__x) )
        {
          val = 1;
          v24 = std::map<data::GCGCostType,unsigned int>::operator[](
                  (std::map<data::GCGCostType,unsigned int> *const)(v7 + 96),
                  (std::map<data::GCGCostType,unsigned int>::key_type *)&val);
          v25 = v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          v26 = *v25;
        }
        else
        {
          v26 = 0;
        }
        cost_energy = v26;
        if ( v26 && !GCGUtils::isEnergyCostValid(character_card, total_cost_energy + cost_energy) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/pve_logic/pve_intention_mgr.cpp",
            "tryGenCurSkillIntention",
            299);
          v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v55, (const char (*)[6])"card:");
          GCGCard::getDesc[abi:cxx11]((std::string *)&v56, character_card);
          v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)&v56);
          v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])", skill:");
          GCGSkill::getName[abi:cxx11]((std::string *)&v57, skill);
          v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, (const std::string *)&v57);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v31,
            (const char (*)[23])", energy cost not meet");
          std::string::~string(&v57);
          std::string::~string(&v56);
          common::milog::MiLogStream::~MiLogStream(&v55);
          v14 = -1;
        }
        else
        {
          std::map<data::GCGVirtualDiceType,unsigned int>::map((std::map<data::GCGVirtualDiceType,unsigned int> *const)(v7 + 176));
          std::map<data::GCGCostType,unsigned int>::map(
            &p_copy_cost_map,
            (const std::map<data::GCGCostType,unsigned int> *)(v7 + 96));
          std::map<data::GCGVirtualDiceType,unsigned int>::map(&p_copy_dice_map, dice_map);
          v32 = PVEIntentionMgr::tryCostDice(
                  this,
                  &p_copy_dice_map,
                  &p_copy_cost_map,
                  (std::map<data::GCGVirtualDiceType,unsigned int> *)(v7 + 176)) != 0;
          std::map<data::GCGVirtualDiceType,unsigned int>::~map(&p_copy_dice_map);
          std::map<data::GCGCostType,unsigned int>::~map(&p_copy_cost_map);
          if ( v32 )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/pve_logic/pve_intention_mgr.cpp",
              "tryGenCurSkillIntention",
              305);
            v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v55, (const char (*)[6])"card:");
            GCGCard::getDesc[abi:cxx11]((std::string *)&v56, character_card);
            v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, (const std::string *)&v56);
            v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])", skill:");
            GCGSkill::getName[abi:cxx11]((std::string *)&v57, skill);
            v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, (const std::string *)&v57);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v36,
              (const char (*)[21])", dice cost not meet");
            std::string::~string(&v57);
            std::string::~string(&v56);
            common::milog::MiLogStream::~MiLogStream(&v55);
            v14 = -1;
          }
          else
          {
            priority = PVEIntentionMgr::calPriorityRevise(
                         this,
                         character_card,
                         skill,
                         (const std::map<data::GCGCostType,unsigned int> *)(v7 + 96),
                         result);
            Guid = GCGCard::getGuid(character_card);
            if ( *(_BYTE *)(((unsigned __int64)&intention->card_guid >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)intention + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&intention->card_guid >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_store4(&intention->card_guid);
            }
            intention->card_guid = Guid;
            SkillId = GCGSkill::getSkillId(skill);
            if ( *(_BYTE *)(((unsigned __int64)&intention->skill_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&intention->skill_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&intention->skill_id);
            }
            intention->skill_id = SkillId;
            std::map<data::GCGVirtualDiceType,unsigned int>::operator=(
              &intention->choose_map,
              (const std::map<data::GCGVirtualDiceType,unsigned int> *)(v7 + 176));
            if ( *(_BYTE *)(((unsigned __int64)intention >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)intention >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(intention);
            }
            intention->priority = priority;
            if ( *(_BYTE *)(((unsigned __int64)&intention->cost_energy >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&intention->cost_energy >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&intention->cost_energy);
            }
            intention->cost_energy = cost_energy;
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/pve_logic/pve_intention_mgr.cpp",
              "tryGenCurSkillIntention",
              315);
            v39 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    &v56,
                    (const char (*)[22])"[INTENTION GEN] card:");
            GCGCard::getDesc[abi:cxx11]((std::string *)&v57, character_card);
            v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)&v57);
            v41 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v40, (const char (*)[9])", skill:");
            val = GCGSkill::getSkillId(skill);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
            v43 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v42,
                    (const char (*)[12])", priority:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v43, &intention->priority);
            std::string::~string(&v57);
            common::milog::MiLogStream::~MiLogStream(&v56);
            v14 = 0;
          }
          std::map<data::GCGVirtualDiceType,unsigned int>::~map((std::map<data::GCGVirtualDiceType,unsigned int> *const)(v7 + 176));
        }
        std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v7 + 96));
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/pve_logic/pve_intention_mgr.cpp",
      "tryGenCurSkillIntention",
      274);
    v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v57,
            (const char (*)[33])"GCGCharExcelConfig not find, id:");
    val = GCGCard::getId(character_card);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v14 = -1;
  }
  v44 = v14;
  if ( v60 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v44;
};

// Line 325: range 000000000D7BFD2C-000000000D7C060A
std::map<unsigned int,PVEIntention> *__cdecl PVEIntentionMgr::genIntention(
        std::map<unsigned int,PVEIntention> *retstr,
        PVEIntentionMgr *const this,
        std::map<data::GCGVirtualDiceType,unsigned int> *dice_map,
        const std::vector<std::shared_ptr<GCGCard>> *card_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGCard *v9; // rax
  PVEIntentionBriefInfo *M_current; // r14
  std::vector<PVEIntentionBriefInfo>::iterator v11; // rax
  PVEIntentionMgr::genIntention::<lambda(const PVEIntentionBriefInfo&, const PVEIntentionBriefInfo&)> v12; // dl
  int v13; // r14d
  unsigned __int64 v14; // rax
  int v15; // esi
  int32_t priority; // r14d
  std::unordered_map<unsigned int,int>::mapped_type *v17; // rax
  int32_t *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  int32_t max_loop_cnt; // [rsp+24h] [rbp-20Ch]
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+28h] [rbp-208h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_end; // [rsp+30h] [rbp-200h] BYREF
  GCGGameMode *game_mode; // [rsp+38h] [rbp-1F8h]
  const std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+40h] [rbp-1F0h]
  PVEIntentionBriefInfo *choose_intention; // [rsp+48h] [rbp-1E8h]
  PVEIntention *result_intention; // [rsp+50h] [rbp-1E0h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+58h] [rbp-1D8h]
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-1D0h] BYREF
  std::string val; // [rsp+80h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v38; // [rsp+A0h] [rbp-190h] BYREF
  char v39[368]; // [rsp+C0h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 13 sort_func:376 64 16 26 monster_controller_ptr:333 96 24 29 alternative_intention_vec:3"
                        "44 160 40 27 gen_card_intention_func:346 240 48 14 energy_map:339";
  *(_QWORD *)(v4 + 16) = PVEIntentionMgr::genIntention;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gen_intention_epoch_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gen_intention_epoch_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gen_intention_epoch_);
  }
  ++this->gen_intention_epoch_;
  std::map<unsigned int,PVEIntention>::map(retstr);
  if ( !std::map<data::GCGVirtualDiceType,unsigned int>::empty(dice_map)
    && !std::vector<std::shared_ptr<GCGCard>>::empty(card_vec) )
  {
    game_mode = PVEIntentionMgr::getGameMode(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_controller_id_);
    }
    GCGGameMode::getController<GCGMonsterController>(
      (GCGGameMode *const)(v4 + 64),
      (__int64)game_mode,
      this->cur_controller_id_);
    if ( std::operator==<GCGMonsterController>((const std::shared_ptr<GCGMonsterController> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/pve_logic/pve_intention_mgr.cpp",
        "genIntention",
        336);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v38,
        (const char (*)[34])"monster_controller_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    else
    {
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 240));
      for ( max_loop_cnt = 100; max_loop_cnt > 0; --max_loop_cnt )
      {
        std::vector<PVEIntentionBriefInfo>::vector((std::vector<PVEIntentionBriefInfo> *const)(v4 + 96));
        *(_QWORD *)(v4 + 160) = dice_map;
        *(_QWORD *)(v4 + 168) = v4 + 240;
        *(_QWORD *)(v4 + 176) = v4 + 96;
        *(_QWORD *)(v4 + 184) = retstr;
        *(_QWORD *)(v4 + 192) = this;
        __for_range = card_vec;
        __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
        __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
                  &__for_begin,
                  &__for_end) )
        {
          card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
          if ( !std::operator==<GCGCard>(card_ptr, 0LL) )
          {
            v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
            if ( GCGUtils::isCanAttack(v8) )
            {
              v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
              PVEIntentionMgr::genIntention(std::map<data::GCGVirtualDiceType,unsigned int> &,std::vector<std::shared_ptr<GCGCard>> const&)::{lambda(GCGCard&)#1}::operator()(
                (const PVEIntentionMgr::genIntention::<lambda(GCGCard&)> *const)(v4 + 160),
                v9);
            }
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
        }
        M_current = std::vector<PVEIntentionBriefInfo>::end((std::vector<PVEIntentionBriefInfo> *const)(v4 + 96))._M_current;
        v11._M_current = std::vector<PVEIntentionBriefInfo>::begin((std::vector<PVEIntentionBriefInfo> *const)(v4 + 96))._M_current;
        std::sort<__gnu_cxx::__normal_iterator<PVEIntentionBriefInfo *,std::vector<PVEIntentionBriefInfo>>,PVEIntentionMgr::genIntention(std::map<data::GCGVirtualDiceType,unsigned int> &,std::vector const&<std::shared_ptr<GCGCard>,std::allocator<std::shared_ptr>>)::{lambda(PVEIntentionBriefInfo const&,PVEIntentionBriefInfo const&)#2}>(
          v11,
          (__gnu_cxx::__normal_iterator<PVEIntentionBriefInfo*,std::vector<PVEIntentionBriefInfo> >)M_current,
          v12);
        if ( std::vector<PVEIntentionBriefInfo>::empty((const std::vector<PVEIntentionBriefInfo> *const)(v4 + 96)) )
        {
          v13 = 0;
        }
        else
        {
          choose_intention = std::vector<PVEIntentionBriefInfo>::operator[](
                               (std::vector<PVEIntentionBriefInfo> *const)(v4 + 96),
                               0LL);
          if ( PVEIntentionMgr::payCost(this, dice_map, &choose_intention->choose_map) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/pve_logic/pve_intention_mgr.cpp",
              "genIntention",
              390);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v38,
              (const char (*)[18])"payCost not valid");
            common::milog::MiLogStream::~MiLogStream(&v38);
            v13 = 0;
          }
          else
          {
            v14 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                      (std::map<unsigned int,unsigned int> *const)(v4 + 240),
                                      &choose_intention->card_guid);
            if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0
              && (char)((v14 & 7) + 3) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            {
              v14 = __asan_report_load4(v14);
            }
            v15 = *(_DWORD *)v14;
            if ( *(_BYTE *)(((unsigned __int64)&choose_intention->cost_energy >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&choose_intention->cost_energy >> 3) + 0x7FFF8000) <= 3 )
            {
              v14 = __asan_report_load4(&choose_intention->cost_energy);
            }
            *(_DWORD *)v14 = v15 + choose_intention->cost_energy;
            result_intention = std::map<unsigned int,PVEIntention>::operator[](retstr, &choose_intention->card_guid);
            std::vector<unsigned int>::push_back(&result_intention->skill_vec, &choose_intention->skill_id);
            if ( *(_BYTE *)(((unsigned __int64)choose_intention >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)choose_intention >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(choose_intention);
            }
            priority = choose_intention->priority;
            v17 = std::unordered_map<unsigned int,int>::operator[](
                    &result_intention->skill_priority_map,
                    &choose_intention->skill_id);
            v18 = v17;
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v17);
            }
            *v18 = priority;
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/pve_logic/pve_intention_mgr.cpp",
              "genIntention",
              400);
            v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v36,
                    (const char (*)[26])"[INTENTION CHOOSE] epoch:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    &this->gen_intention_epoch_);
            PVEIntentionBriefInfo::getDesc[abi:cxx11](&val, choose_intention);
            v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &val);
            v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])"rest dice:");
            PVEIntentionBriefInfo::getDiceMapDesc[abi:cxx11]((std::string *)&v38, dice_map);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)&v38);
            std::string::~string(&v38);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v36);
            v13 = 1;
          }
        }
        std::vector<PVEIntentionBriefInfo>::~vector((std::vector<PVEIntentionBriefInfo> *const)(v4 + 96));
        if ( v13 != 1 )
          break;
        if ( std::map<data::GCGVirtualDiceType,unsigned int>::empty(dice_map) )
          break;
      }
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 240));
    }
    std::shared_ptr<GCGMonsterController>::~shared_ptr((std::shared_ptr<GCGMonsterController> *const)(v4 + 64));
  }
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 346: range 000000000D7BFB32-000000000D7BFCA4
int32_t __cdecl PVEIntentionMgr::genIntention(std::map<data::GCGVirtualDiceType,unsigned int> &,std::vector<std::shared_ptr<GCGCard>> const&)::{lambda(GCGCard&)#1}::operator()(
        const PVEIntentionMgr::genIntention::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::function<ForeachPolicy(GCGSkill&)> p_func; // [rsp+10h] [rbp-60h] BYREF
  PVEIntentionMgr::genIntention::<lambda(GCGCard&)>::operator()::<lambda(GCGSkill&)> __f; // [rsp+30h] [rbp-40h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __f.__dice_map = __closure->__dice_map;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__energy_map >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__energy_map);
  __f.__energy_map = __closure->__energy_map;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__alternative_intention_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__alternative_intention_vec);
  __f.__alternative_intention_vec = __closure->__alternative_intention_vec;
  __f.__card = card;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__result);
  __f.__result = __closure->__result;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  __f.__this = __closure->__this;
  std::function<ForeachPolicy ()(GCGSkill &)>::function<PVEIntentionMgr::genIntention(std::map<data::GCGVirtualDiceType,unsigned int> &,std::vector<std::shared_ptr<GCGCard>> const&)::{lambda(GCGCard&)#1}::operator() const(GCGCard&)::{lambda(GCGSkill &)#1},void,void>(
    &p_func,
    __f);
  GCGCard::foreachSkill(card, &p_func);
  std::function<ForeachPolicy ()(GCGSkill &)>::~function(&p_func);
  return 0;
};

// Line 348: range 000000000D7BF7B8-000000000D7BFB30
ForeachPolicy __cdecl PVEIntentionMgr::genIntention(std::map<data::GCGVirtualDiceType,unsigned int> &,std::vector<std::shared_ptr<GCGCard>> const&)::{lambda(GCGCard&)#1}::operator() const(GCGCard&)::{lambda(GCGSkill &)#1}::operator()(
        const PVEIntentionMgr::genIntention::<lambda(GCGCard&)>::operator()::<lambda(GCGSkill&)> *const __closure,
        GCGSkill *skill)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PVEIntentionMgr *this; // r14
  std::map<unsigned int,unsigned int> *energy_map; // r15
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  uint32_t *v8; // rdx
  uint32_t v9; // edi
  std::map<data::GCGVirtualDiceType,unsigned int> *dice_map; // rcx
  ForeachPolicy v11; // eax
  const std::map<unsigned int,PVEIntention> *result; // [rsp+8h] [rbp-F8h]
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-D4h] BYREF
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 72 18 intention_info:354";
  *(_QWORD *)(v2 + 16) = PVEIntentionMgr::genIntention(std::map<data::GCGVirtualDiceType,unsigned int> &,std::vector<std::shared_ptr<GCGCard>> const&)::{lambda(GCGCard&)#1}::operator() const(GCGCard&)::{lambda(GCGSkill &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( GCGSkill::isActivelyUse(skill) )
  {
    PVEIntentionBriefInfo::PVEIntentionBriefInfo((PVEIntentionBriefInfo *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__result);
    result = __closure->__result;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__energy_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__energy_map);
    energy_map = __closure->__energy_map;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__card >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__card);
    __k = GCGCard::getGuid(__closure->__card);
    v7 = std::map<unsigned int,unsigned int>::operator[](energy_map, &__k);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = *v8;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      v9 = (unsigned int)__closure;
      __asan_report_load8(__closure);
    }
    dice_map = __closure->__dice_map;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__card >> 3) + 0x7FFF8000) )
    {
      v9 = (_DWORD)__closure + 24;
      __asan_report_load8(&__closure->__card);
    }
    if ( !PVEIntentionMgr::tryGenCurSkillIntention(
            this,
            __closure->__card,
            skill,
            dice_map,
            v9,
            result,
            (PVEIntentionBriefInfo *)(v2 + 48)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__alternative_intention_vec >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__alternative_intention_vec);
      std::vector<PVEIntentionBriefInfo>::push_back(
        __closure->__alternative_intention_vec,
        (const std::vector<PVEIntentionBriefInfo>::value_type *)(v2 + 48));
    }
    PVEIntentionBriefInfo::~PVEIntentionBriefInfo((PVEIntentionBriefInfo *const)(v2 + 48));
  }
  v11 = FOREACH_CONTINUE;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v11;
};

// Line 376: range 000000000D7BFCA6-000000000D7BFD2B
bool __cdecl PVEIntentionMgr::genIntention(std::map<data::GCGVirtualDiceType,unsigned int> &,std::vector<std::shared_ptr<GCGCard>> const&)::{lambda(PVEIntentionBriefInfo const&,PVEIntentionBriefInfo const&)#2}::operator()(
        const PVEIntentionMgr::genIntention::<lambda(const PVEIntentionBriefInfo&, const PVEIntentionBriefInfo&)> *const __closure,
        const PVEIntentionBriefInfo *left,
        const PVEIntentionBriefInfo *right)
{
  int32_t priority; // ecx

  if ( *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(left);
  }
  priority = left->priority;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(right);
  }
  return priority > right->priority;
};

// Line 407: range 000000000D7C060C-000000000D7C061A
void __cdecl PVEIntentionMgr::reportRestDice(
        PVEIntentionMgr *const this,
        const std::map<data::GCGVirtualDiceType,unsigned int> *dice_map)
{
  ;
};
