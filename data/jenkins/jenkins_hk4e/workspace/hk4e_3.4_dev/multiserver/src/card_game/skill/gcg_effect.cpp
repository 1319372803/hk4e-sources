// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_effect.cpp

// Line 25: range 000000000E160F10-000000000E16223D
int32_t __cdecl GCGExecEffectDamage::doEffect(
        GCGExecEffectDamage *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  data::GCGEffectCampType target_camp; // r14d
  common::milog::MiLogStream *v19; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rax
  _DWORD *v21; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t CurHp; // r14d
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // r14
  GCGSkillLogic *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rcx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  int32_t v48; // eax
  data::GCGChooseTargetCharaterType target_charater_type; // [rsp+14h] [rbp-38Ch]
  bool is_real_damage; // [rsp+3Fh] [rbp-361h]
  int v52; // [rsp+40h] [rbp-360h] BYREF
  GCGControllerValue cur_controller_id; // [rsp+44h] [rbp-35Ch]
  int32_t ret; // [rsp+48h] [rbp-358h]
  uint32_t set_damage_element_type; // [rsp+4Ch] [rbp-354h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+50h] [rbp-350h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+58h] [rbp-348h] BYREF
  GCGGameMode *game_mode; // [rsp+60h] [rbp-340h]
  std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-338h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+70h] [rbp-330h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *element_type; // [rsp+78h] [rbp-328h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *declared_value_type; // [rsp+80h] [rbp-320h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *damage_value; // [rsp+88h] [rbp-318h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+90h] [rbp-310h] BYREF
  std::pair<data::GCGDeclaredValueType,unsigned int> DeclaredValueByKey; // [rsp+98h] [rbp-308h] BYREF
  std::shared_ptr<GCGCard> p_this_card_ptr; // [rsp+A0h] [rbp-300h] BYREF
  common::milog::MiLogStream v67; // [rsp+B0h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v68; // [rsp+D0h] [rbp-2D0h] BYREF
  std::string val; // [rsp+F0h] [rbp-2B0h] BYREF
  char v70[656]; // [rsp+110h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 12 card_guid:62 64 16 27 config_effect_damage_ptr:26 96 16 12 skill_ptr:32 128 16 17 owne"
                        "d_card_ptr:39 160 16 18 target_card_ptr:64 192 24 16 card_guid_vec:51 256 72 16 damage_param:123"
                        " 368 168 18 cur_skill_param:87";
  *(_QWORD *)(v3 + 16) = GCGExecEffectDamage::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectDamage,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectDamage>(
         (const std::shared_ptr<data::ConfigGCGExecEffectDamage> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      29);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v68,
           (const char (*)[50])"GCGExecEffectDamage effect_damage_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v7 = -1;
    goto LABEL_62;
  }
  GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
  if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      35);
    v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v68,
           (const char (*)[53])"GCGExecEffectDamage failed for skill_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v7 = -1;
    goto LABEL_61;
  }
  v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  game_mode = GCGSkill::getGameMode(v9);
  v10 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v10);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      42);
    v11 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v68,
            (const char (*)[58])"GCGExecEffectDamage failed for owned_card_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v7 = -1;
    goto LABEL_60;
  }
  if ( *(char *)(((unsigned __int64)&skill_param->is_ignore_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&skill_param->is_ignore_damage);
  if ( skill_param->is_ignore_damage )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      47);
    v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v68,
            (const char (*)[34])"GCGExecEffectDamage ignore damage");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v68);
  }
  v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  cur_controller_id = GCGCard::getControllerId(v13);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
  SkillLogic = GCGGameMode::getSkillLogic(game_mode);
  v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v15->target_character >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->target_character >> 3) + 0x7FFF8000) <= 3 )
  {
    v15 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->target_character);
  }
  target_charater_type = v15->target_character;
  v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  p_target_camp = &v16->target_camp;
  if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_target_camp);
  }
  target_camp = v16->target_camp;
  std::shared_ptr<GCGCard>::shared_ptr(&p_this_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 128));
  ret = GCGSkillLogic::getTargetCardVec(
          SkillLogic,
          skill_param,
          &p_this_card_ptr,
          target_camp,
          target_charater_type,
          cur_controller_id,
          (std::vector<unsigned int> *)(v3 + 192));
  std::shared_ptr<GCGCard>::~shared_ptr(&p_this_card_ptr);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      55);
    v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v68,
            (const char (*)[44])"GCGExecEffectDamage target card is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v7 = ret;
    goto LABEL_59;
  }
  __for_range = (std::vector<unsigned int> *)(v3 + 192);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 192))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 192))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v20);
    }
    *(_DWORD *)(v3 + 48) = *v21;
    CardMgr = GCGGameMode::getCardMgr(game_mode);
    GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 160), CardMgr, *(_DWORD *)(v3 + 48));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        67);
      v23 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[60])"GCGExecEffectDamage find target_card_ptr failed, card_guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      goto LABEL_57;
    }
    v24 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    CurHp = GCGCard::getCurHp(v24);
    v26 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v26->target_need_min_hp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v26 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->target_need_min_hp >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&v26->target_need_min_hp);
    }
    if ( CurHp >= v26->target_need_min_hp )
    {
      GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 368));
      std::shared_ptr<GCGCard>::operator=(
        (std::shared_ptr<GCGCard> *const)(v3 + 392),
        (const std::shared_ptr<GCGCard> *)(v3 + 128));
      std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      std::enable_shared_from_this<GCGSkill>::shared_from_this((std::enable_shared_from_this<GCGSkill> *const)&p_this_card_ptr);
      std::shared_ptr<GCGSkill>::operator=(
        (std::shared_ptr<GCGSkill> *const)(v3 + 368),
        (std::shared_ptr<GCGSkill> *)&p_this_card_ptr);
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&p_this_card_ptr);
      std::shared_ptr<GCGCard>::operator=(
        (std::shared_ptr<GCGCard> *const)(v3 + 408),
        (const std::shared_ptr<GCGCard> *)(v3 + 160));
      *(_DWORD *)(v3 + 480) = cur_controller_id;
      if ( *(_BYTE *)(((unsigned __int64)&skill_param->from_result_seq >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&skill_param->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&skill_param->from_result_seq);
      }
      *(_DWORD *)(v3 + 504) = skill_param->from_result_seq;
      if ( *(char *)(((unsigned __int64)&skill_param->is_ignore_damage >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&skill_param->is_ignore_damage);
      *(_BYTE *)(v3 + 512) = skill_param->is_ignore_damage;
      std::weak_ptr<GCGSkill>::operator=(
        (std::weak_ptr<GCGSkill> *const)(v3 + 520),
        &skill_param->reaction_source_skill_wtr);
      v27 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v28 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      __in = GCGSkill::getDeclaredValueByKey(v27, &v28->declared_element.key);
      _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
      element_type = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
      v29 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(char *)(((unsigned __int64)&v29->is_use_set_damage_element >> 3) + 0x7FFF8000) < 0 )
        v29 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v29->is_use_set_damage_element);
      if ( v29->is_use_set_damage_element )
      {
        v30 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        set_damage_element_type = GCGCard::getToken(v30, GCG_TOKEN_SET_DAMAGE_ELEMENT);
        if ( set_damage_element_type )
        {
          if ( *(_BYTE *)(((unsigned __int64)element_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)element_type >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_store4(element_type);
          }
          *element_type = set_damage_element_type;
        }
      }
      v31 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v32 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      DeclaredValueByKey = GCGSkill::getDeclaredValueByKey(v31, &v32->declared_damage.key);
      declared_value_type = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&DeclaredValueByKey);
      damage_value = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&DeclaredValueByKey);
      if ( *(_BYTE *)(((unsigned __int64)declared_value_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)declared_value_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)declared_value_type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(declared_value_type);
      }
      if ( *declared_value_type == Damage )
      {
        is_real_damage = 0;
        goto LABEL_49;
      }
      if ( *(_BYTE *)(((unsigned __int64)declared_value_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)declared_value_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)declared_value_type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(declared_value_type);
      }
      if ( *declared_value_type == IndirectDamage )
      {
        is_real_damage = 1;
LABEL_49:
        GCGDamageParam::GCGDamageParam((GCGDamageParam *const)(v3 + 256));
        if ( *(_BYTE *)(((unsigned __int64)element_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)element_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(element_type);
        }
        *(_DWORD *)(v3 + 260) = *element_type;
        std::shared_ptr<GCGCard>::operator=(
          (std::shared_ptr<GCGCard> *const)(v3 + 296),
          (const std::shared_ptr<GCGCard> *)(v3 + 128));
        std::shared_ptr<GCGCard>::operator=(
          (std::shared_ptr<GCGCard> *const)(v3 + 312),
          (const std::shared_ptr<GCGCard> *)(v3 + 160));
        *(_BYTE *)(v3 + 264) = is_real_damage;
        if ( *(_BYTE *)(((unsigned __int64)damage_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)damage_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage_value >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(damage_value);
        }
        *(_DWORD *)(v3 + 256) = *damage_value;
        v34 = GCGGameMode::getSkillLogic(game_mode);
        GCGSkillLogic::doDamage(v34, this, (const GCGSkillUseParam *)(v3 + 368), (GCGDamageParam *)(v3 + 256), result);
        common::milog::MiLogStream::create(
          &v67,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          130);
        v35 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v67,
                (const char (*)[36])"GCGExecEffectDamage doDamage final:");
        v36 = common::milog::MiLogStream::operator<<<int,(int *)0>(v35, &result->final_damage);
        v37 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v36,
                (const char (*)[17])",is_real_damage:");
        v38 = common::milog::MiLogStream::operator<<(v37, is_real_damage);
        v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v38, (const char (*)[14])",base damage:");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, damage_value);
        v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v40, (const char (*)[15])",element_type:");
        if ( *(_BYTE *)(((unsigned __int64)element_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)element_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(element_type);
        }
        v52 = *element_type;
        v42 = common::milog::MiLogStream::operator<<<int,(int *)0>(v41, &v52);
        v43 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])",source:");
        v44 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        GCGCard::getDesc[abi:cxx11]((std::string *)&v68, v44);
        v45 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, (const std::string *)&v68);
        v46 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v45, (const char (*)[9])",target:");
        v47 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        GCGCard::getDesc[abi:cxx11](&val, v47);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, &val);
        std::string::~string(&val);
        std::string::~string(&v68);
        common::milog::MiLogStream::~MiLogStream(&v67);
        GCGDamageParam::~GCGDamageParam((GCGDamageParam *const)(v3 + 256));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          120);
        v33 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v68,
                (const char (*)[48])"GCGExecEffectDamage unknown damage type, param:");
        GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v68);
      }
      GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 368));
    }
LABEL_57:
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v7 = 0;
LABEL_59:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
LABEL_60:
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
LABEL_61:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
LABEL_62:
  std::shared_ptr<data::ConfigGCGExecEffectDamage>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectDamage> *const)(v3 + 64));
  v48 = v7;
  if ( v70 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return v48;
};

// Line 137: range 000000000E16223E-000000000E162F74
int32_t __cdecl GCGExecEffectCreateCard::doEffect(
        GCGExecEffectCreateCard *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 p_M_before_begin; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  data::GCGEffectCreatePositionType *p_position; // rax
  GCGDuel *v17; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t *p_card_id; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  uint32_t *v23; // rax
  bool v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  data::GCGEffectCreatePositionType *v32; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v33; // rax
  uint32_t *v34; // rdx
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  uint32_t *v36; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rdx
  uint32_t *p_add_show_token_num; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  int32_t v49; // eax
  uint32_t param; // [rsp+2Ch] [rbp-1C4h]
  uint32_t owner_card_guid; // [rsp+30h] [rbp-1C0h]
  GCGControllerValue opponent_controller_id; // [rsp+34h] [rbp-1BCh]
  GCGGameMode *game_mode; // [rsp+38h] [rbp-1B8h]
  GCGField *field; // [rsp+40h] [rbp-1B0h]
  GCGCardZone *hand_zone; // [rsp+48h] [rbp-1A8h]
  GCGCardZone v56; // [rsp+50h] [rbp-1A0h] BYREF

  p_M_before_begin = (unsigned __int64)&v56.normal_data_.zone_skill_category_set_._M_h._M_before_begin;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      p_M_before_begin = v4;
  }
  *(_QWORD *)p_M_before_begin = 1102416563LL;
  *(_QWORD *)(p_M_before_begin + 8) = "8 48 4 24 target_controller_id:158 64 4 21 cur_controller_id:159 80 4 7 ret:210 96"
                                      " 12 20 refresh_operator:206 128 16 33 config_effect_create_card_ptr:138 160 16 13 "
                                      "skill_ptr:144 192 16 18 owner_card_ptr:151 224 24 15 place_param:198";
  *(_QWORD *)(p_M_before_begin + 16) = GCGExecEffectCreateCard::doEffect;
  v5 = (_DWORD *)(p_M_before_begin >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectCreateCard,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(p_M_before_begin + 128));
  if ( std::operator==<data::ConfigGCGExecEffectCreateCard>(
         (const std::shared_ptr<data::ConfigGCGExecEffectCreateCard> *)(p_M_before_begin + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v56._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      141);
    v6 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           (common::milog::MiLogStream *const)&v56._M_weak_this._M_refcount,
           (const char (*)[66])"GCGExecEffectCreateCard config_effect_create_card_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11]((std::string *)&v56.normal_data_.card_vec_._M_impl._M_finish, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v6,
      (const std::string *)&v56.normal_data_.card_vec_._M_impl._M_finish);
    std::string::~string(&v56.normal_data_.card_vec_._M_impl._M_finish);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56._M_weak_this._M_refcount);
    v7 = -1;
    goto LABEL_50;
  }
  GCGEffectBase::getSkill((GCGEffectBase *const)(p_M_before_begin + 160));
  if ( !std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(p_M_before_begin + 160), 0LL) )
  {
    v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 160));
    game_mode = GCGSkill::getGameMode(v8);
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 160));
    GCGSkill::getThisCard((const GCGSkill *const)(p_M_before_begin + 192), (const GCGSkillUseParam *)v9);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(p_M_before_begin + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v56.normal_data_.card_vec_._M_impl._M_finish,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        154);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        (common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish,
        (const char (*)[56])"GCGExecEffectCreateCard doEffect owner_card_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish);
      v7 = -1;
LABEL_48:
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_before_begin + 192));
      goto LABEL_49;
    }
    v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 192));
    owner_card_guid = GCGCard::getGuid(v10);
    *(_DWORD *)(p_M_before_begin + 48) = 0;
    v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 192));
    *(_DWORD *)(p_M_before_begin + 64) = GCGCard::getControllerId(v11);
    Duel = GCGGameMode::getDuel(game_mode);
    opponent_controller_id = (unsigned int)GCGDuel::getOtherControllerId(
                                             Duel,
                                             (GCGControllerValue)*(_DWORD *)(p_M_before_begin + 64));
    v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v13->camp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->camp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v13 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->camp_type);
    }
    if ( v13->camp_type == CAMP_ENEMY )
    {
      *(_DWORD *)(p_M_before_begin + 48) = opponent_controller_id;
    }
    else
    {
      v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v14->camp_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->camp_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v14 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->camp_type);
      }
      if ( v14->camp_type != CAMP_FRIENDLY )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v56.normal_data_.card_vec_._M_impl._M_finish,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          171);
        common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          (common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish,
          (const char (*)[53])"GCGExecEffectCreateCard not support unkown camp_type");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish);
        v7 = -1;
        goto LABEL_48;
      }
      *(_DWORD *)(p_M_before_begin + 48) = *(_DWORD *)(p_M_before_begin + 64);
    }
    v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    p_position = &v15->position;
    if ( *(_BYTE *)(((unsigned __int64)p_position >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_position & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_position >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_position);
    }
    if ( v15->position == CREATE_POSITION_HAND )
    {
      v17 = GCGGameMode::getDuel(game_mode);
      field = GCGDuel::getField(v17, (GCGControllerValue)*(_DWORD *)(p_M_before_begin + 48));
      hand_zone = GCGField::getHandZone(field);
      v18 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
      p_card_id = &v18->card_id;
      if ( *(_BYTE *)(((unsigned __int64)p_card_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_card_id);
      }
      if ( GCGCardZone::checkCanAdd(hand_zone, v18->card_id) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v56.normal_data_.card_vec_._M_impl._M_finish,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          180);
        v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish,
                (const char (*)[41])"GCGExecEffectCreateCard cannot add card:");
        v21 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->card_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish);
        v7 = -1;
      }
      else
      {
        v22 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
        v23 = &v22->card_id;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        GCGCardZone::addNewCard(&v56, (uint32_t)hand_zone, (GCGReason)v22->card_id, 1u, owner_card_guid);
        v24 = std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)&v56, 0LL);
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v56);
        if ( v24 )
        {
          v7 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v56.normal_data_.card_vec_._M_impl._M_finish,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            187);
          v25 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  (common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish,
                  (const char (*)[43])"GCGExecEffectCreateCard cur_controller_id:");
          v26 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                  v25,
                  (const proto::GCGControllerValue *)(p_M_before_begin + 64));
          v27 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v26,
                  (const char (*)[23])" target_controller_id:");
          v28 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                  v27,
                  (const proto::GCGControllerValue *)(p_M_before_begin + 48));
          v29 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v28,
                  (const char (*)[25])" getHandZone() add card:");
          v30 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &v30->card_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish);
          v7 = 0;
        }
      }
    }
    else
    {
      v31 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
      v32 = &v31->position;
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v32);
      }
      if ( v31->position )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v56.normal_data_.card_vec_._M_impl._M_finish,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          217);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          (common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish,
          (const char (*)[44])"GCGExecEffectCreateCard not suppert postion");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish);
        v7 = -1;
      }
      else
      {
        param = 0;
        if ( !std::vector<unsigned int>::empty(&skill_param->param_guid_vec) )
        {
          v33 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&skill_param->param_guid_vec, 0LL);
          v34 = v33;
          if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v33);
          }
          param = *v34;
        }
        *(_DWORD *)(p_M_before_begin + 224) = 0;
        *(_DWORD *)(p_M_before_begin + 228) = 0;
        *(_DWORD *)(p_M_before_begin + 232) = 0;
        *(_DWORD *)(p_M_before_begin + 236) = 0;
        *(_DWORD *)(p_M_before_begin + 240) = 0;
        *(_DWORD *)(p_M_before_begin + 244) = 0;
        v35 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
        v36 = &v35->card_id;
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v36);
        }
        *(_DWORD *)(p_M_before_begin + 224) = v35->card_id;
        *(_DWORD *)(p_M_before_begin + 228) = *(_DWORD *)(p_M_before_begin + 48);
        *(_DWORD *)(p_M_before_begin + 232) = param;
        *(_DWORD *)(p_M_before_begin + 236) = 1;
        *(_DWORD *)(p_M_before_begin + 240) = owner_card_guid;
        *(_DWORD *)(p_M_before_begin + 244) = 0;
        *(_DWORD *)(p_M_before_begin + 96) = 0;
        *(_DWORD *)(p_M_before_begin + 100) = 0;
        *(_DWORD *)(p_M_before_begin + 104) = 0;
        v37 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v37->refresh_operator_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v37->refresh_operator_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v37 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v37->refresh_operator_type);
        }
        *(_DWORD *)(p_M_before_begin + 96) = v37->refresh_operator_type;
        v38 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
        p_add_show_token_num = &v38->add_show_token_num;
        if ( *(_BYTE *)(((unsigned __int64)p_add_show_token_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_add_show_token_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_add_show_token_num >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(p_add_show_token_num);
        }
        *(_DWORD *)(p_M_before_begin + 100) = v38->add_show_token_num;
        v40 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v40->add_show_token_num_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v40->add_show_token_num_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          v40 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v40->add_show_token_num_limit);
        }
        *(_DWORD *)(p_M_before_begin + 104) = v40->add_show_token_num_limit;
        *(_DWORD *)(p_M_before_begin + 80) = GCGUtils::placeNewCardLimitMatchingZone(
                                               game_mode,
                                               p_M_before_begin + 224,
                                               *(GCGAddCardRefreshOperator *)(p_M_before_begin + 96));
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v56.normal_data_.card_vec_._M_impl._M_finish,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          211);
        v41 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                (common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish,
                (const char (*)[43])"GCGExecEffectCreateCard cur_controller_id:");
        v42 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v41,
                (const proto::GCGControllerValue *)(p_M_before_begin + 64));
        v43 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v42,
                (const char (*)[23])",target_controller_id:");
        v44 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v43,
                (const proto::GCGControllerValue *)(p_M_before_begin + 48));
        v45 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v44,
                (const char (*)[17])",stage add card:");
        v46 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &v46->card_id);
        v48 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v47, (const char (*)[6])",ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v48, (const int *)(p_M_before_begin + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish);
        v7 = *(_DWORD *)(p_M_before_begin + 80);
      }
    }
    goto LABEL_48;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v56.normal_data_.card_vec_._M_impl._M_finish,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/skill/gcg_effect.cpp",
    "doEffect",
    147);
  common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
    (common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish,
    (const char (*)[51])"GCGExecEffectCreateCard doEffect skill_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.normal_data_.card_vec_._M_impl._M_finish);
  v7 = -1;
LABEL_49:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(p_M_before_begin + 160));
LABEL_50:
  std::shared_ptr<data::ConfigGCGExecEffectCreateCard>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectCreateCard> *const)(p_M_before_begin + 128));
  v49 = v7;
  if ( &v56.normal_data_.zone_skill_category_set_._M_h._M_before_begin == (std::_Hashtable<GCGEffectCategoryType,GCGEffectCategoryType,std::allocator<GCGEffectCategoryType>,std::__detail::_Identity,std::equal_to<GCGEffectCategoryType>,std::hash<GCGEffectCategoryType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,false> >::__node_base *)p_M_before_begin )
  {
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)p_M_before_begin = 1172321806LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8020) = -168430091;
  }
  return v49;
};

// Line 224: range 000000000E162F76-000000000E163FE0
int32_t __cdecl GCGExecEffectCreateModifyCard::doEffect(
        GCGExecEffectCreateModifyCard *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 p_M_before_begin; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t *p_card_id; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  data::GCGChooseTargetCharaterType *p_choose_charater_type; // rax
  GCGDuel *v20; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  uint32_t *p_add_show_token_num; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  data::GCGChooseTargetCharaterType *v27; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  data::GCGEffectCampType camp_type; // r14d
  common::milog::MiLogStream *v30; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v31; // rax
  _DWORD *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  GCGCard *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  bool v42; // r14
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int32_t v51; // eax
  data::GCGChooseTargetCharaterType target_charater_type; // [rsp+14h] [rbp-22Ch]
  unsigned int Id; // [rsp+34h] [rbp-20Ch] BYREF
  uint32_t owner_card_guid; // [rsp+38h] [rbp-208h]
  GCGControllerValue cur_controller_id; // [rsp+3Ch] [rbp-204h]
  GCGControllerValue opponent_controller_id; // [rsp+40h] [rbp-200h]
  data::GCGChooseTargetCharaterType choose_charater_type; // [rsp+44h] [rbp-1FCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-1F8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-1F0h] BYREF
  GCGGameMode *game_mode; // [rsp+58h] [rbp-1E8h]
  GCGField *field; // [rsp+60h] [rbp-1E0h]
  GCGCardMgr *card_mgr; // [rsp+68h] [rbp-1D8h]
  std::vector<unsigned int> *__for_range; // [rsp+70h] [rbp-1D0h]
  GCGModifyZone *modify_zone; // [rsp+78h] [rbp-1C8h]
  GCGCardZone p_this_card_ptr; // [rsp+80h] [rbp-1C0h] BYREF
  GCGAddCardRefreshOperator v66; // 0:r8.12

  p_M_before_begin = (unsigned __int64)&p_this_card_ptr.normal_data_.zone_skill_category_set_._M_h._M_before_begin;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      p_M_before_begin = v4;
  }
  *(_QWORD *)p_M_before_begin = 1102416563LL;
  *(_QWORD *)(p_M_before_begin + 8) = "9 48 4 24 target_controller_id:245 64 4 18 target_card_id:261 80 4 13 card_guid:27"
                                      "8 96 12 20 refresh_operator:266 128 16 40 config_effect_create_modify_card_ptr:225"
                                      " 160 16 13 skill_ptr:231 192 16 18 owner_card_ptr:238 224 16 21 modified_card_ptr:"
                                      "280 256 24 29 alternative_card_guid_vec:271";
  *(_QWORD *)(p_M_before_begin + 16) = GCGExecEffectCreateModifyCard::doEffect;
  v5 = (_DWORD *)(p_M_before_begin >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectCreateModifyCard,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(p_M_before_begin + 128));
  if ( std::operator==<data::ConfigGCGExecEffectCreateModifyCard>(
         (const std::shared_ptr<data::ConfigGCGExecEffectCreateModifyCard> *)(p_M_before_begin + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_this_card_ptr._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      228);
    v6 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           (common::milog::MiLogStream *const)&p_this_card_ptr._M_weak_this._M_refcount,
           (const char (*)[79])"GCGExecEffectCreateModifyCard config_effect_create_modify_card_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11]((std::string *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v6,
      (const std::string *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
    std::string::~string(&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr._M_weak_this._M_refcount);
    v7 = -1;
    goto LABEL_56;
  }
  GCGEffectBase::getSkill((GCGEffectBase *const)(p_M_before_begin + 160));
  if ( !std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(p_M_before_begin + 160), 0LL) )
  {
    v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 160));
    game_mode = GCGSkill::getGameMode(v8);
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 160));
    GCGSkill::getThisCard((const GCGSkill *const)(p_M_before_begin + 192), (const GCGSkillUseParam *)v9);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(p_M_before_begin + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_this_card_ptr._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        241);
      v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              (common::milog::MiLogStream *const)&p_this_card_ptr._M_weak_this._M_refcount,
              (const char (*)[62])"GCGExecEffectCreateModifyCard doEffect owner_card_ptr is null");
      GCGEffectBase::getDesc[abi:cxx11]((std::string *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v10,
        (const std::string *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
      std::string::~string(&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr._M_weak_this._M_refcount);
      v7 = -1;
LABEL_54:
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_before_begin + 192));
      goto LABEL_55;
    }
    v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 192));
    owner_card_guid = GCGCard::getGuid(v11);
    *(_DWORD *)(p_M_before_begin + 48) = 0;
    v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 192));
    cur_controller_id = GCGCard::getControllerId(v12);
    Duel = GCGGameMode::getDuel(game_mode);
    opponent_controller_id = (unsigned int)GCGDuel::getOtherControllerId(Duel, cur_controller_id);
    v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v14->camp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v14->camp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v14 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->camp_type);
    }
    if ( v14->camp_type == CAMP_ENEMY )
    {
      *(_DWORD *)(p_M_before_begin + 48) = opponent_controller_id;
    }
    else
    {
      v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v15->camp_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->camp_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->camp_type);
      }
      if ( v15->camp_type != CAMP_FRIENDLY )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          258);
        common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
          (common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
          (const char (*)[59])"GCGExecEffectCreateModifyCard not support unkown camp_type");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
        v7 = -1;
        goto LABEL_54;
      }
      *(_DWORD *)(p_M_before_begin + 48) = cur_controller_id;
    }
    v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    p_card_id = &v16->card_id;
    if ( *(_BYTE *)(((unsigned __int64)p_card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_card_id);
    }
    *(_DWORD *)(p_M_before_begin + 64) = v16->card_id;
    v18 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    p_choose_charater_type = &v18->choose_charater_type;
    if ( *(_BYTE *)(((unsigned __int64)p_choose_charater_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_choose_charater_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_choose_charater_type >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(p_choose_charater_type);
    }
    choose_charater_type = v18->choose_charater_type;
    v20 = GCGGameMode::getDuel(game_mode);
    field = GCGDuel::getField(v20, (GCGControllerValue)*(_DWORD *)(p_M_before_begin + 48));
    *(_DWORD *)(p_M_before_begin + 96) = 0;
    *(_DWORD *)(p_M_before_begin + 100) = 0;
    *(_DWORD *)(p_M_before_begin + 104) = 0;
    v21 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v21->refresh_operator_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v21->refresh_operator_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v21 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v21->refresh_operator_type);
    }
    *(_DWORD *)(p_M_before_begin + 96) = v21->refresh_operator_type;
    v22 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    p_add_show_token_num = &v22->add_show_token_num;
    if ( *(_BYTE *)(((unsigned __int64)p_add_show_token_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_add_show_token_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_add_show_token_num >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(p_add_show_token_num);
    }
    *(_DWORD *)(p_M_before_begin + 100) = v22->add_show_token_num;
    v24 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v24->add_show_token_num_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v24->add_show_token_num_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      v24 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v24->add_show_token_num_limit);
    }
    *(_DWORD *)(p_M_before_begin + 104) = v24->add_show_token_num_limit;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(p_M_before_begin + 256));
    SkillLogic = GCGGameMode::getSkillLogic(game_mode);
    v26 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    v27 = &v26->choose_charater_type;
    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v27);
    }
    target_charater_type = v26->choose_charater_type;
    v28 = std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v28->camp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v28->camp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v28 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCreateModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v28->camp_type);
    }
    camp_type = v28->camp_type;
    std::shared_ptr<GCGCard>::shared_ptr(
      (std::shared_ptr<GCGCard> *const)&p_this_card_ptr,
      (const std::shared_ptr<GCGCard> *)(p_M_before_begin + 192));
    LOBYTE(camp_type) = GCGSkillLogic::getTargetCardVec(
                          SkillLogic,
                          skill_param,
                          (GCGCardPtr *)&p_this_card_ptr,
                          camp_type,
                          target_charater_type,
                          cur_controller_id,
                          (std::vector<unsigned int> *)(p_M_before_begin + 256)) != 0;
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&p_this_card_ptr);
    if ( (_BYTE)camp_type )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_this_card_ptr._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        274);
      v30 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              (common::milog::MiLogStream *const)&p_this_card_ptr._M_weak_this._M_refcount,
              (const char (*)[54])"GCGExecEffectCreateModifyCard getTargetCardVec failed");
      GCGEffectBase::getDesc[abi:cxx11]((std::string *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v30,
        (const std::string *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
      std::string::~string(&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr._M_weak_this._M_refcount);
      v7 = -1;
    }
    else
    {
      card_mgr = GCGGameMode::getCardMgr(game_mode);
      __for_range = (std::vector<unsigned int> *)(p_M_before_begin + 256);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(p_M_before_begin + 256))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(p_M_before_begin + 256))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v31 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v32 = v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        *(_DWORD *)(p_M_before_begin + 80) = *v32;
        GCGCardMgr::findCard((GCGCardMgr *const)(p_M_before_begin + 224), card_mgr, *(_DWORD *)(p_M_before_begin + 80));
        if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(p_M_before_begin + 224)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            283);
          v33 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  (common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                  (const char (*)[57])"GCGExecEffectCreateModifyCard find card fail, card_guid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v33,
            (const unsigned int *)(p_M_before_begin + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
        }
        else
        {
          v34 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 224));
          if ( GCGCard::getCardType(v34) == GCG_CARD_CHARACTER )
          {
            v36 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 224));
            if ( !GCGCard::isAlive(v36) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                293);
              v37 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                      (common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                      (const char (*)[60])"GCGExecEffectCreateModifyCard card is not alive, card_guid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v37,
                (const unsigned int *)(p_M_before_begin + 80));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
            }
            else
            {
              v38 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 224));
              modify_zone = GCGCard::getModifyZone(v38);
              if ( GCGCardZone::checkCanAdd(modify_zone, *(_DWORD *)(p_M_before_begin + 64)) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  299);
                v39 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        (common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                        (const char (*)[36])"GCGExecEffectCreateModifyCard card:");
                v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v39,
                        (const unsigned int *)(p_M_before_begin + 80));
                v41 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v40,
                        (const char (*)[18])" cannot add card:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(p_M_before_begin + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
              }
              else
              {
                *(_QWORD *)&v66.refresh_operator_type = owner_card_guid;
                v66.add_show_token_num_limit = 0;
                GCGCardZone::addNewCardWithRefreshOperation(
                  &p_this_card_ptr,
                  (uint32_t)modify_zone,
                  *(GCGReason *)(p_M_before_begin + 64),
                  1u,
                  v66,
                  *(_QWORD *)(p_M_before_begin + 96));
                v42 = std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)&p_this_card_ptr);
                std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&p_this_card_ptr);
                if ( v42 )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    304);
                  v43 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                          (common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                          (const char (*)[50])"GCGExecEffectCreateModifyCard add card fail card:");
                  v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v43,
                          (const unsigned int *)(p_M_before_begin + 80));
                  v45 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v44,
                          (const char (*)[17])" target_card_id:");
                }
                else
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    307);
                  v46 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                          (common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                          (const char (*)[52])"GCGExecEffectCreateModifyCard target_controller_id:");
                  v47 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                          v46,
                          (const proto::GCGControllerValue *)(p_M_before_begin + 48));
                  v48 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          v47,
                          (const char (*)[15])",onstage card:");
                  v49 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 224));
                  Id = GCGCard::getId(v49);
                  v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &Id);
                  v45 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v50,
                          (const char (*)[24])", modify zone add card:");
                }
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v45,
                  (const unsigned int *)(p_M_before_begin + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              288);
            v35 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                    (common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
                    (const char (*)[64])"GCGExecEffectCreateModifyCard card is not character, card_guid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v35,
              (const unsigned int *)(p_M_before_begin + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_before_begin + 224));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v7 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(p_M_before_begin + 256));
    goto LABEL_54;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/skill/gcg_effect.cpp",
    "doEffect",
    234);
  common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
    (common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish,
    (const char (*)[57])"GCGExecEffectCreateModifyCard doEffect skill_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_this_card_ptr.normal_data_.card_vec_._M_impl._M_finish);
  v7 = -1;
LABEL_55:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(p_M_before_begin + 160));
LABEL_56:
  std::shared_ptr<data::ConfigGCGExecEffectCreateModifyCard>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectCreateModifyCard> *const)(p_M_before_begin + 128));
  v51 = v7;
  if ( &p_this_card_ptr.normal_data_.zone_skill_category_set_._M_h._M_before_begin == (std::_Hashtable<GCGEffectCategoryType,GCGEffectCategoryType,std::allocator<GCGEffectCategoryType>,std::__detail::_Identity,std::equal_to<GCGEffectCategoryType>,std::hash<GCGEffectCategoryType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,false> >::__node_base *)p_M_before_begin )
  {
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_before_begin = 1172321806LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v51;
};

// Line 314: range 000000000E163FE2-000000000E16475B
int32_t __cdecl GCGExecEffectGenDice::doEffect(
        GCGExecEffectGenDice *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGSkillLogic *SkillLogic; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  data::GCGEffectDiceType effect_dice_type; // r15d
  std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  int32_t v26; // eax
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type v27; // [rsp+14h] [rbp-16Ch]
  unsigned int v28; // [rsp+38h] [rbp-148h] BYREF
  GCGControllerValue cur_controller_id; // [rsp+3Ch] [rbp-144h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *dice_num; // [rsp+48h] [rbp-138h]
  GCGGameMode *game_mode; // [rsp+50h] [rbp-130h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+58h] [rbp-128h] BYREF
  std::shared_ptr<GCGCard> p_this_card_ptr; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-110h] BYREF
  std::string val; // [rsp+90h] [rbp-F0h] BYREF
  char v37[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 ret:336 64 16 30 config_effect_gen_dice_ptr:315 96 16 13 skill_ptr:321 128 16 18 owner_card_ptr:327";
  *(_QWORD *)(v3 + 16) = GCGExecEffectGenDice::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectGenDice,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectGenDice>(
         (const std::shared_ptr<data::ConfigGCGExecEffectGenDice> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      318);
    v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v35,
           (const char (*)[60])"GCGExecEffectGenDice config_effect_gen_dice_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        324);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[48])"GCGExecEffectGenDice doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v8);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          330);
        v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v35,
               (const char (*)[47])"GCGExecEffectGenDice owner_card_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v7 = -1;
      }
      else
      {
        v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        cur_controller_id = GCGCard::getControllerId(v10);
        v11 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v12 = std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        __in = GCGSkill::getDeclaredValueByKey(v11, &v12->declared_output_key.key);
        _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        dice_num = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        v13 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        game_mode = GCGSkill::getGameMode(v13);
        SkillLogic = GCGGameMode::getSkillLogic(game_mode);
        if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(dice_num);
        }
        v27 = *dice_num;
        v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v15->effect_dice_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->effect_dice_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->effect_dice_type);
        }
        effect_dice_type = v15->effect_dice_type;
        std::shared_ptr<GCGCard>::shared_ptr(&p_this_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 128));
        v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_target_camp = &v17->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_target_camp);
        }
        *(_DWORD *)(v3 + 48) = GCGSkillLogic::addDice(
                                 SkillLogic,
                                 cur_controller_id,
                                 v17->target_camp,
                                 &p_this_card_ptr,
                                 effect_dice_type,
                                 v27);
        std::shared_ptr<GCGCard>::~shared_ptr(&p_this_card_ptr);
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          337);
        v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v35,
                (const char (*)[31])"GCGExecEffectGenDice add dice:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, dice_num);
        v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" type:");
        v22 = std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v22->effect_dice_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v22->effect_dice_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v22 = (std::__shared_ptr_access<data::ConfigGCGExecEffectGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v22->effect_dice_type);
        }
        v28 = v22->effect_dice_type;
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v28);
        v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" ret:");
        v25 = common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v3 + 48));
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v7 = 0;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectGenDice>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectGenDice> *const)(v3 + 64));
  v26 = v7;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v26;
};

// Line 342: range 000000000E16475C-000000000E164F8B
int32_t __cdecl GCGExecEffectChangeCardVar::doEffect(
        GCGExecEffectChangeCardVar *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCampType *p_camp_type; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  data::GCGEffectTargetChooseType *p_choose_type; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  data::GCGTokenType *p_token_type; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  GCGSkillLogic *SkillLogic; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  int32_t v26; // eax
  GCGGameMode *game_mode; // [rsp+20h] [rbp-170h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *delta_card_value; // [rsp+30h] [rbp-160h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+38h] [rbp-158h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-150h] BYREF
  std::string val; // [rsp+60h] [rbp-130h] BYREF
  char v32[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 21 cur_controller_id:362 64 16 37 config_effect_change_card_var_ptr:343 96 16 13 skill_pt"
                        "r:349 128 16 18 owner_card_ptr:356 160 32 20 change_var_param:365";
  *(_QWORD *)(v3 + 16) = GCGExecEffectChangeCardVar::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectChangeCardVar,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectChangeCardVar>(
         (const std::shared_ptr<data::ConfigGCGExecEffectChangeCardVar> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      346);
    v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v30,
           (const char (*)[73])"GCGExecEffectChangeCardVar config_effect_change_card_var_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        352);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[54])"GCGExecEffectChangeCardVar doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          359);
        v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v30,
                (const char (*)[53])"GCGExecEffectChangeCardVar owner_card_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 48) = GCGCard::getControllerId(v11);
        v12 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        __in = GCGSkill::getDeclaredValueByKey(v12, &v13->declared_output_key.key);
        std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        delta_card_value = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        *(_QWORD *)(v3 + 160) = 0LL;
        *(_QWORD *)(v3 + 168) = 0LL;
        *(_QWORD *)(v3 + 176) = 0LL;
        *(_QWORD *)(v3 + 184) = 0LL;
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_camp_type = &v14->camp_type;
        if ( *(_BYTE *)(((unsigned __int64)p_camp_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_camp_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_camp_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(p_camp_type);
        }
        *(_DWORD *)(v3 + 160) = v14->camp_type;
        v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v16->target_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v16->target_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v16 = (std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->target_type);
        }
        *(_DWORD *)(v3 + 164) = v16->target_type;
        v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_choose_type = &v17->choose_type;
        if ( *(_BYTE *)(((unsigned __int64)p_choose_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_choose_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_choose_type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_choose_type);
        }
        *(_DWORD *)(v3 + 168) = v17->choose_type;
        v19 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v19->tag_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v19->tag_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v19 = (std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v19->tag_type);
        }
        *(_DWORD *)(v3 + 172) = v19->tag_type;
        v20 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_token_type = &v20->token_type;
        if ( *(_BYTE *)(((unsigned __int64)p_token_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_token_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(p_token_type);
        }
        *(_DWORD *)(v3 + 176) = v20->token_type;
        v22 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v22->operator_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v22->operator_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v22 = (std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v22->operator_type);
        }
        *(_DWORD *)(v3 + 184) = v22->operator_type;
        if ( *(_BYTE *)(((unsigned __int64)delta_card_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)delta_card_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_card_value >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(delta_card_value);
        }
        *(_DWORD *)(v3 + 188) = *delta_card_value;
        SkillLogic = GCGGameMode::getSkillLogic(game_mode);
        GCGSkillLogic::changeCardVarHandler(
          SkillLogic,
          *(GCGControllerValue *)(v3 + 48),
          (const EffectChangeCardVarParam *)(v3 + 160),
          skill_param);
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          374);
        v24 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v30,
                (const char (*)[63])"GCGExecEffectChangeCardVar change card var, cur_controller_id:");
        v25 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v24,
                (const proto::GCGControllerValue *)(v3 + 48));
        GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v7 = 0;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectChangeCardVar>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectChangeCardVar> *const)(v3 + 64));
  v26 = v7;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v26;
};

// Line 380: range 000000000E164F8C-000000000E1657CA
int32_t __cdecl GCGExecEffectDamageRevise::doEffect(
        GCGExecEffectDamageRevise *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  GCGEffectElementType damage_element_type; // r15d
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  data::GCGEffectDamageElementType effect_element_type; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  int32_t v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-110h] BYREF
  int32_t damage; // [rsp+24h] [rbp-10Ch] BYREF
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+28h] [rbp-108h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *damage_revise; // [rsp+30h] [rbp-100h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-F0h] BYREF
  std::string val; // [rsp+60h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 35 config_effect_damage_revise_ptr:381 64 16 13 skill_ptr:387 96 16 18 owner_card_ptr:393";
  *(_QWORD *)(v3 + 16) = GCGExecEffectDamageRevise::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectDamageRevise,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGExecEffectDamageRevise>(
         (const std::shared_ptr<data::ConfigGCGExecEffectDamageRevise> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      384);
    v6 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v31,
           (const char (*)[70])"GCGExecEffectDamageRevise config_effect_damage_revise_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 64));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        390);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[53])"GCGExecEffectDamageRevise doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 96), (const GCGSkillUseParam *)v8);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          396);
        v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v31,
               (const char (*)[52])"GCGExecEffectDamageRevise owner_card_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)skill_param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&skill_param->damage_element_type);
        }
        damage_element_type = skill_param->damage_element_type;
        v11 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v11->effect_element_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v11 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->effect_element_type);
        }
        effect_element_type = v11->effect_element_type;
        v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( !GCGUtils::isDamageElementMatch(v13, effect_element_type, damage_element_type) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            401);
          v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[39])"GCGExecEffectDamageRevise damage type:");
          if ( *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)skill_param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&skill_param->damage_element_type);
          }
          v26 = skill_param->damage_element_type;
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v26);
          v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v15,
                  (const char (*)[24])", effect limit element:");
          v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&v17->effect_element_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v17->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
          {
            v17 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v17->effect_element_type);
          }
          damage = v17->effect_element_type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)&damage);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
        else
        {
          v18 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v19 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          __in = GCGSkill::getDeclaredValueByKey(v18, &v19->declared_output_key.key);
          _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
          v20 = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
          damage_revise = v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          damage = *damage_revise;
          if ( TraitSkillResult<(GCGEffectCategoryType)1,int>::addSkillResult(result, &damage) )
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              408);
            v21 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v31,
                    (const char (*)[49])"GCGExecEffectDamageRevise failed, damage_revise:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, damage_revise);
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v31);
            v7 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              411);
            v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[31])"GCGExecEffectDamageRevise cur:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, damage_revise);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v7 = 0;
          }
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
  }
  std::shared_ptr<data::ConfigGCGExecEffectDamageRevise>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectDamageRevise> *const)(v3 + 32));
  v24 = v7;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v24;
};

// Line 417: range 000000000E1657CC-000000000E165E61
int32_t __cdecl GCGEffectFixRerollDiceToSpecialType::doEffect(
        GCGEffectFixRerollDiceToSpecialType *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGDuel *Duel; // rax
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(GCGEffectFixRerollDiceToSpecialType *const, GCGGameMode *, GCGField *, _QWORD, _QWORD, GCGSkillResult *); // r14
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t fixed_num; // r15d
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  data::GCGEffectDiceType *p_fixed_dice_type; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int32_t v25; // eax
  GCGControllerValue cur_controller_id; // [rsp+24h] [rbp-12Ch]
  unsigned __int64 v28; // [rsp+28h] [rbp-128h] BYREF
  GCGGameMode *game_mode; // [rsp+30h] [rbp-120h]
  GCGField *field; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-110h] BYREF
  std::string val; // [rsp+60h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 ret:440 64 16 40 config_effect_reroll_dice_revise_ptr:418 96 16 13 skill_ptr:424 128 16"
                        " 13 owner_ptr:431";
  *(_QWORD *)(v3 + 16) = GCGEffectFixRerollDiceToSpecialType::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectFixRerollDiceToSpecialType,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectFixRerollDiceToSpecialType>(
         (const std::shared_ptr<data::ConfigGCGEffectFixRerollDiceToSpecialType> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      421);
    v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v31,
           (const char (*)[63])"FixRerollDice config_effect_reroll_dice_revise_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        427);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[41])"FixRerollDice doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          434);
        v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v31,
                (const char (*)[35])"FixRerollDice owner_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        cur_controller_id = GCGCard::getControllerId(v11);
        Duel = GCGGameMode::getDuel(game_mode);
        field = GCGDuel::getField(Duel, cur_controller_id);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v13 = (unsigned __int64)(this->_vptr_GCGEffectBase + 5);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8(this->_vptr_GCGEffectBase + 5);
        v14 = *(__int64 (__fastcall **)(GCGEffectFixRerollDiceToSpecialType *const, GCGGameMode *, GCGField *, _QWORD, _QWORD, GCGSkillResult *))v13;
        v15 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v15->fixed_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->fixed_num >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->fixed_num);
        }
        fixed_num = v15->fixed_num;
        v17 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_fixed_dice_type = &v17->fixed_dice_type;
        if ( *(_BYTE *)(((unsigned __int64)p_fixed_dice_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_fixed_dice_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_fixed_dice_type >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(p_fixed_dice_type);
        }
        *(_DWORD *)(v3 + 48) = v14(this, game_mode, field, (unsigned int)v17->fixed_dice_type, fixed_num, result);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          441);
        v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[30])"FixRerollDice dice fixed num:");
        v20 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDiceToSpecialType,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v20->fixed_num);
        v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" size:");
        v28 = std::vector<proto::GCGDiceSideType>::size(&result->fix_dice_vec_result);
        v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, &v28);
        v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = 0;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGEffectFixRerollDiceToSpecialType>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectFixRerollDiceToSpecialType> *const)(v3 + 64));
  v25 = v7;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v25;
};

// Line 446: range 000000000E16604A-000000000E166D45
__int64 __fastcall GCGEffectFixRerollDiceToSpecialType::genFixedDiceVec(
        GCGEffectFixRerollDiceToSpecialType *const this,
        GCGGameMode *game_mode,
        GCGField *field,
        data::GCGEffectDiceType effect_dice_type,
        uint32_t effect_fixed_num,
        GCGSkillResult *result)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  int v10; // r15d
  GCGCard *v11; // rax
  common::milog::MiLogStream *v12; // rax
  proto::GCGDiceSideType *v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  GCGCharacterZone *CharacterZone; // r15
  common::milog::MiLogStream *v17; // r14
  int v18; // r15d
  std::vector<proto::GCGDiceSideType>::reference v19; // rax
  _DWORD *v20; // rdx
  common::milog::MiLogStream *v21; // r15
  common::milog::MiLogStream *v22; // r15
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  proto::GCGDiceSideType *v27; // rax
  _DWORD *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  __int64 v30; // rax
  unsigned int i; // [rsp+30h] [rbp-230h]
  uint32_t side_index; // [rsp+34h] [rbp-22Ch]
  unsigned int i_0; // [rsp+38h] [rbp-228h]
  unsigned int i_1; // [rsp+3Ch] [rbp-224h]
  unsigned int i_2; // [rsp+40h] [rbp-220h]
  data::GCGEffectElementType element_type; // [rsp+4Ch] [rbp-214h]
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-210h] BYREF
  common::milog::MiLogStream v42; // [rsp+70h] [rbp-1F0h] BYREF
  char v43[464]; // [rsp+90h] [rbp-1D0h] BYREF

  v7 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(416LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "9 32 4 18 side_dice_type:542 48 4 25 alternative_side_type:495 64 4 20 effect_fixed_num:445 80 8"
                        " 22 side_dice_type_opt:536 112 16 20 onstage_card_ptr:450 144 24 24 alternative_side_vec:492 208"
                        " 24 26 random_choose_dice_vec:507 272 24 14 result_vec:510 336 48 37 all_alive_character_dice_side_set:476";
  *(_QWORD *)(v7 + 16) = GCGEffectFixRerollDiceToSpecialType::genFixedDiceVec;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = 61956;
  v9[536862722] = -234881024;
  v9[536862723] = 62194;
  v9[536862724] = 62194;
  v9[536862725] = -218959360;
  v9[536862726] = 62194;
  v9[536862727] = -218959360;
  v9[536862728] = 62194;
  v9[536862729] = -218959360;
  v9[536862730] = 62194;
  v9[536862732] = -202116109;
  *(_DWORD *)(v7 + 64) = effect_fixed_num;
  if ( effect_dice_type == EFFECT_DICE_SAME_ONSTAGE )
  {
    GCGField::getCharacterZone(field);
    GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v7 + 112));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v7 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_effect.cpp",
        "genFixedDiceVec",
        453);
      common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
        &v42,
        (const char (*)[64])"GCGEffectFixRerollDiceToSpecialType onstage_card_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v42);
      v6 = -1;
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 112));
      element_type = GCGCard::getElementType(v11);
      *(_QWORD *)(v7 + 80) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(element_type, 0);
      if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v7 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "genFixedDiceVec",
          460);
        v12 = common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(
                &v42,
                (const char (*)[87])"GCGEffectFixRerollDiceToSpecialType elementCover fail. GCGEffectDiceType element_type:");
        *(_DWORD *)(v7 + 48) = element_type;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v7 + 48));
        common::milog::MiLogStream::~MiLogStream(&v42);
        v6 = -1;
        v10 = 0;
      }
      else
      {
        v13 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v7 + 80));
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v7 + 32) = *v14;
        if ( *(_DWORD *)(v7 + 32) )
        {
          for ( i = 0; i < *(_DWORD *)(v7 + 64); ++i )
            std::vector<proto::GCGDiceSideType>::push_back(
              &result->fix_dice_vec_result,
              (const std::vector<proto::GCGDiceSideType>::value_type *)(v7 + 32));
          v10 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "genFixedDiceVec",
            466);
          v15 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                  &v42,
                  (const char (*)[81])"GCGEffectFixRerollDiceToSpecialType side_dice_type is not valid, side_dice_type:");
          *(_DWORD *)(v7 + 48) = *(_DWORD *)(v7 + 32);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v7 + 48));
          common::milog::MiLogStream::~MiLogStream(&v42);
          v6 = -1;
          v10 = 0;
        }
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v7 + 112));
    if ( v10 == 1 )
      goto LABEL_51;
  }
  else
  {
    if ( effect_dice_type != EFFECT_DICE_DIFF_ALL_CHARACTER )
    {
      if ( effect_dice_type )
      {
        *(_QWORD *)(v7 + 80) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectDiceType>(
                                 effect_dice_type,
                                 (std::nullopt_t)game_mode);
        if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v7 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/skill/gcg_effect.cpp",
            "genFixedDiceVec",
            539);
          v26 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                  &v42,
                  (const char (*)[75])"GCGEffectFixRerollDiceToSpecialType elementCover fail. GCGEffectDiceType: ");
          *(_DWORD *)(v7 + 48) = effect_dice_type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v7 + 48));
          common::milog::MiLogStream::~MiLogStream(&v42);
          v6 = -1;
          goto LABEL_52;
        }
        v27 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v7 + 80));
        v28 = v27;
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v27);
        }
        *(_DWORD *)(v7 + 32) = *v28;
        if ( !*(_DWORD *)(v7 + 32) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "genFixedDiceVec",
            545);
          v29 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                  &v42,
                  (const char (*)[81])"GCGEffectFixRerollDiceToSpecialType side_dice_type is not valid, side_dice_type:");
          *(_DWORD *)(v7 + 48) = *(_DWORD *)(v7 + 32);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v7 + 48));
          common::milog::MiLogStream::~MiLogStream(&v42);
          v6 = -1;
          goto LABEL_52;
        }
        for ( i_2 = 0; i_2 < *(_DWORD *)(v7 + 64); ++i_2 )
          std::vector<proto::GCGDiceSideType>::push_back(
            &result->fix_dice_vec_result,
            (const std::vector<proto::GCGDiceSideType>::value_type *)(v7 + 32));
      }
      else
      {
        for ( i_1 = 0; i_1 < *(_DWORD *)(v7 + 64); ++i_1 )
        {
          *(_DWORD *)(v7 + 48) = 8;
          std::vector<proto::GCGDiceSideType>::push_back(
            &result->fix_dice_vec_result,
            (std::vector<proto::GCGDiceSideType>::value_type *)(v7 + 48));
        }
      }
      goto LABEL_51;
    }
    std::set<proto::GCGDiceSideType>::set((std::set<proto::GCGDiceSideType> *const)(v7 + 336));
    CharacterZone = GCGField::getCharacterZone(field);
    std::function<ForeachPolicy ()(GCGCard &)>::function<GCGEffectFixRerollDiceToSpecialType::genFixedDiceVec(GCGGameMode &,GCGField &,data::GCGEffectDiceType,unsigned int,GCGSkillResult &)::{lambda(GCGCard &)#1},void,void>(
      (std::function<ForeachPolicy(GCGCard&)> *const)&v42,
      (GCGEffectFixRerollDiceToSpecialType::genFixedDiceVec::<lambda(GCGCard&)>)(v7 + 336));
    GCGCharacterZone::foreachAliveCharacter(CharacterZone, (std::function<ForeachPolicy(GCGCard&)> *)&v42);
    std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v42);
    std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v7 + 144));
    for ( side_index = 0; side_index <= 7; ++side_index )
    {
      *(_DWORD *)(v7 + 48) = side_index + 1;
      if ( !std::set<proto::GCGDiceSideType>::count(
              (const std::set<proto::GCGDiceSideType> *const)(v7 + 336),
              (const std::set<proto::GCGDiceSideType>::key_type *)(v7 + 48)) )
        std::vector<proto::GCGDiceSideType>::push_back(
          (std::vector<proto::GCGDiceSideType> *const)(v7 + 144),
          (const std::vector<proto::GCGDiceSideType>::value_type *)(v7 + 48));
    }
    if ( std::vector<proto::GCGDiceSideType>::empty((const std::vector<proto::GCGDiceSideType> *const)(v7 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_effect.cpp",
        "genFixedDiceVec",
        504);
      v17 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v41,
              (const char (*)[58])"GCGEffectFixRerollDiceToSpecialType no valid dice can gen");
      GCGEffectBase::getDesc[abi:cxx11]((std::string *)&v42, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v42);
      std::string::~string(&v42);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v6 = -1;
      v18 = 0;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v7 + 208));
      for ( i_0 = 0; i_0 < *(_DWORD *)(v7 + 64); ++i_0 )
      {
        std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v7 + 272));
        GCGUtils::randomSelect<proto::GCGDiceSideType,GCGGameMode>(
          (const std::vector<proto::GCGDiceSideType> *)(v7 + 144),
          (std::vector<proto::GCGDiceSideType> *)(v7 + 272),
          1u,
          game_mode);
        if ( std::vector<proto::GCGDiceSideType>::size((const std::vector<proto::GCGDiceSideType> *const)(v7 + 272)) == 1 )
        {
          v19 = std::vector<proto::GCGDiceSideType>::operator[](
                  (std::vector<proto::GCGDiceSideType> *const)(v7 + 272),
                  0LL);
          v20 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          *(_DWORD *)(v7 + 32) = *v20;
          std::vector<proto::GCGDiceSideType>::push_back(
            &result->fix_dice_vec_result,
            (const std::vector<proto::GCGDiceSideType>::value_type *)(v7 + 32));
          *(_DWORD *)(v7 + 48) = *(_DWORD *)(v7 + 32);
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v7 + 208),
            (std::vector<unsigned int>::value_type *)(v7 + 48));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "genFixedDiceVec",
            521);
          v21 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v41,
                  (const char (*)[58])"GCGEffectFixRerollDiceToSpecialType cannot gen dice size:");
          *(_QWORD *)(v7 + 80) = std::vector<proto::GCGDiceSideType>::size((const std::vector<proto::GCGDiceSideType> *const)(v7 + 144));
          v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v21,
                  (const unsigned __int64 *)(v7 + 80));
          GCGEffectBase::getDesc[abi:cxx11]((std::string *)&v42, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)&v42);
          std::string::~string(&v42);
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
        std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v7 + 272));
      }
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_effect.cpp",
        "genFixedDiceVec",
        525);
      v23 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              &v42,
              (const char (*)[60])"GCGEffectFixRerollDiceToSpecialType random_choose_dice_vec:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int>(v23, (const std::vector<unsigned int> *)(v7 + 208));
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])",num:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v7 + 64));
      common::milog::MiLogStream::~MiLogStream(&v42);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 208));
      v18 = 1;
    }
    std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v7 + 144));
    std::set<proto::GCGDiceSideType>::~set((std::set<proto::GCGDiceSideType> *const)(v7 + 336));
    if ( v18 == 1 )
LABEL_51:
      v6 = 0;
  }
LABEL_52:
  v30 = v6;
  if ( v43 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = -168430091;
  }
  return v30;
};

// Line 477: range 000000000E165E62-000000000E166049
ForeachPolicy __cdecl GCGEffectFixRerollDiceToSpecialType::genFixedDiceVec(GCGGameMode &,GCGField &,data::GCGEffectDiceType,unsigned int,GCGSkillResult &)::{lambda(GCGCard &)#1}::operator()(
        const GCGEffectFixRerollDiceToSpecialType::genFixedDiceVec::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  ForeachPolicy result; // eax
  std::set<proto::GCGDiceSideType> *all_alive_character_dice_side_set; // r14
  proto::GCGDiceSideType *v8; // rax
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  data::GCGEffectElementType element_type; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 22 side_dice_type_opt:480";
  *(_QWORD *)(v2 + 16) = GCGEffectFixRerollDiceToSpecialType::genFixedDiceVec(GCGGameMode &,GCGField &,data::GCGEffectDiceType,unsigned int,GCGSkillResult &)::{lambda(GCGCard &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  element_type = GCGCard::getElementType(card);
  *(_QWORD *)(v2 + 32) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(
                           element_type,
                           (std::nullopt_t)card);
  if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "operator()",
      483);
    v5 = common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(
           &v11,
           (const char (*)[87])"GCGEffectFixRerollDiceToSpecialType elementCover fail. GCGEffectDiceType element_type:");
    val = element_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    all_alive_character_dice_side_set = __closure->__all_alive_character_dice_side_set;
    v8 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v2 + 32));
    std::set<proto::GCGDiceSideType>::insert(all_alive_character_dice_side_set, v8);
    result = FOREACH_CONTINUE;
  }
  if ( v12 == (char *)v2 )
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

// Line 558: range 000000000E166D46-000000000E167163
int32_t __cdecl GCGEffectSkillUseCostRevise::doEffect(
        GCGEffectSkillUseCostRevise *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  data::GCGEffectCostType *p_cost_type; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::vector<GCGSkillPreviewUseInfo> *v16; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  int32_t v18; // eax
  int cost_type; // [rsp+2Ch] [rbp-D4h] BYREF
  std::vector<GCGSkillPreviewUseInfo>::value_type v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  std::string val; // [rsp+70h] [rbp-90h] BYREF
  char v24[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 43 config_effect_skill_use_cost_revise_ptr:559";
  *(_QWORD *)(v3 + 16) = GCGEffectSkillUseCostRevise::doEffect;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectSkillUseCostRevise,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGEffectSkillUseCostRevise>(
         (const std::shared_ptr<data::ConfigGCGEffectSkillUseCostRevise> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      562);
    v6 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
           &v22,
           (const char (*)[80])"GCGEffectSkillUseCostRevise config_effect_skill_use_cost_revise_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      565);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v22,
           (const char (*)[39])"GCGEffectSkillUseCostRevise cost_type:");
    v9 = std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_cost_type = &v9->cost_type;
    if ( *(_BYTE *)(((unsigned __int64)p_cost_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cost_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_cost_type);
    }
    cost_type = v9->cost_type;
    v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &cost_type);
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" revise_num:");
    v13 = std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v14 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &v13->revise_num);
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v15 = std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v16 = std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::operator[](
            &result->dice_cost_revise_preview_skills_map,
            &v15->cost_type);
    std::weak_ptr<GCGSkill>::weak_ptr(&v21.skill_wtr, &this->skill_wtr_);
    v17 = std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v17->revise_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v17->revise_num >> 3) + 0x7FFF8000) <= 3 )
    {
      v17 = (std::__shared_ptr_access<data::ConfigGCGEffectSkillUseCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v17->revise_num);
    }
    v21.cost_num = v17->revise_num;
    v21.increase_num = 0;
    std::vector<GCGSkillPreviewUseInfo>::push_back(v16, &v21);
    GCGSkillPreviewUseInfo::~GCGSkillPreviewUseInfo(&v21);
    v7 = 0;
  }
  std::shared_ptr<data::ConfigGCGEffectSkillUseCostRevise>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectSkillUseCostRevise> *const)(v3 + 32));
  v18 = v7;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v18;
};

// Line 573: range 000000000E167164-000000000E16752D
int32_t __cdecl GCGEffectPlayCardCostRevise::doEffect(
        GCGEffectPlayCardCostRevise *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  data::GCGEffectCostType *p_cost_type; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::vector<GCGSkillPreviewUseInfo> *v15; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int32_t v17; // eax
  int cost_type; // [rsp+2Ch] [rbp-D4h] BYREF
  std::vector<GCGSkillPreviewUseInfo>::value_type v20; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  std::string val; // [rsp+70h] [rbp-90h] BYREF
  char v23[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 43 config_effect_play_card_cost_revise_ptr:574";
  *(_QWORD *)(v3 + 16) = GCGEffectPlayCardCostRevise::doEffect;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectPlayCardCostRevise,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGEffectPlayCardCostRevise>(
         (const std::shared_ptr<data::ConfigGCGEffectPlayCardCostRevise> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      577);
    v6 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
           &v21,
           (const char (*)[80])"GCGEffectPlayCardCostRevise config_effect_play_card_cost_revise_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v7 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      580);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[39])"GCGEffectPlayCardCostRevise cost_type:");
    v9 = std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_cost_type = &v9->cost_type;
    if ( *(_BYTE *)(((unsigned __int64)p_cost_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cost_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_cost_type);
    }
    cost_type = v9->cost_type;
    v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &cost_type);
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" revise_num:");
    v13 = std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &v13->revise_num);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v14 = std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v15 = std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::operator[](
            &result->dice_cost_revise_preview_skills_map,
            &v14->cost_type);
    std::weak_ptr<GCGSkill>::weak_ptr(&v20.skill_wtr, &this->skill_wtr_);
    v16 = std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v16->revise_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v16->revise_num >> 3) + 0x7FFF8000) <= 3 )
    {
      v16 = (std::__shared_ptr_access<data::ConfigGCGEffectPlayCardCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->revise_num);
    }
    v20.cost_num = v16->revise_num;
    v20.increase_num = 0;
    std::vector<GCGSkillPreviewUseInfo>::push_back(v15, &v20);
    GCGSkillPreviewUseInfo::~GCGSkillPreviewUseInfo(&v20);
    v7 = 0;
  }
  std::shared_ptr<data::ConfigGCGEffectPlayCardCostRevise>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectPlayCardCostRevise> *const)(v3 + 32));
  v17 = v7;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v17;
};

// Line 587: range 000000000E16752E-000000000E16809D
int32_t __cdecl GCGEffectPayByCardTag::doEffect(
        GCGEffectPayByCardTag *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  data::GCGTagType *p_effect_tag; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  data::GCGTagType *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  data::GCGTokenType *p_token_type; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  int32_t v30; // eax
  unsigned int effect_tag; // [rsp+20h] [rbp-170h] BYREF
  data::GCGTokenType token_type; // [rsp+24h] [rbp-16Ch]
  std::vector<GCGSkillPreviewCostPayInfo> *result_cost_pay_info_vec; // [rsp+28h] [rbp-168h]
  common::milog::MiLogStream v35; // [rsp+30h] [rbp-160h] BYREF
  std::string val; // [rsp+50h] [rbp-140h] BYREF
  GCGSkillPreviewCostPayInfo v37; // [rsp+70h] [rbp-120h] BYREF
  char v38[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 13 cost_type:594 48 4 17 cur_token_num:630 64 16 37 config_effect_pay_by_card_tag_ptr:588"
                        " 96 16 17 play_card_ptr:606 128 16 13 skill_ptr:617 160 16 18 owned_card_ptr:623";
  *(_QWORD *)(v3 + 16) = GCGEffectPayByCardTag::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectPayByCardTag,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectPayByCardTag>(
         (const std::shared_ptr<data::ConfigGCGEffectPayByCardTag> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      591);
    v6 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v35,
           (const char (*)[68])"GCGEffectPayByCardTag config_effect_pay_by_card_tag_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->cost_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->cost_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->cost_type);
    }
    *(_DWORD *)(v3 + 32) = v8->cost_type;
    if ( *(_DWORD *)(v3 + 32) == 6 )
    {
      if ( std::operator==<GCGSkillUseParam>(&skill_param->trigger_window_param_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          603);
        v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v35,
                (const char (*)[50])"GCGEffectPayByCardTag trigger windows is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v7 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&skill_param->trigger_window_param_ptr);
        std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96), &v12->source_card_ptr);
        if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            609);
          v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v35,
                  (const char (*)[44])"GCGEffectPayByCardTag play card is nullptr ");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v7 = -1;
        }
        else
        {
          v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          v15 = std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          p_effect_tag = &v15->effect_tag;
          if ( *(_BYTE *)(((unsigned __int64)p_effect_tag >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_effect_tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_effect_tag >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(p_effect_tag);
          }
          if ( !GCGCard::isHasTag(v14, v15->effect_tag) )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              614);
            v17 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v35,
                    (const char (*)[37])"GCGEffectPayByCardTag not match tag:");
            v18 = std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v19 = &v18->effect_tag;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v19);
            }
            effect_tag = v18->effect_tag;
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &effect_tag);
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v35);
            v7 = -1;
          }
          else
          {
            GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 128));
            if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                620);
              common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[43])"GCGEffectPayByCardTag skill_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v7 = -1;
            }
            else
            {
              v21 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              GCGSkill::getThisCard((const GCGSkill *const)(v3 + 160), (const GCGSkillUseParam *)v21);
              if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 160)) )
              {
                common::milog::MiLogStream::create(
                  &v35,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  626);
                v22 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                        &v35,
                        (const char (*)[60])"GCGEffectPayByCardTag failed for owned_card_ptr is nullptr ");
                GCGEffectBase::getDesc[abi:cxx11](&val, this);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &val);
                std::string::~string(&val);
                common::milog::MiLogStream::~MiLogStream(&v35);
                v7 = -1;
              }
              else
              {
                v23 = std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectPayByCardTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                p_token_type = &v23->token_type;
                if ( *(_BYTE *)(((unsigned __int64)p_token_type >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_token_type >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(p_token_type);
                }
                token_type = v23->token_type;
                v25 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                *(_DWORD *)(v3 + 48) = GCGCard::getToken(v25, token_type);
                if ( *(_DWORD *)(v3 + 48) )
                {
                  result_cost_pay_info_vec = std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewCostPayInfo>>::operator[](
                                               &result->pay_card_replace_pay_preview_map,
                                               (const std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewCostPayInfo>>::key_type *)(v3 + 32));
                  std::weak_ptr<GCGSkill>::weak_ptr(&v37.skill_wtr, &this->skill_wtr_);
                  v37.token_num = *(_DWORD *)(v3 + 48);
                  std::shared_ptr<GCGCard>::shared_ptr(&v37.cost_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 160));
                  v37.token_type = token_type;
                  std::vector<GCGSkillPreviewCostPayInfo>::push_back(result_cost_pay_info_vec, &v37);
                  GCGSkillPreviewCostPayInfo::~GCGSkillPreviewCostPayInfo(&v37);
                  common::milog::MiLogStream::create(
                    &v35,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    638);
                  v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                          &v35,
                          (const char (*)[29])"GCGEffectPayByCardTag token:");
                  effect_tag = token_type;
                  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &effect_tag);
                  v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])", num:");
                  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v28,
                          (const unsigned int *)(v3 + 48));
                  GCGEffectBase::getDesc[abi:cxx11](&val, this);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &val);
                  std::string::~string(&val);
                  common::milog::MiLogStream::~MiLogStream(&v35);
                  v7 = 0;
                }
                else
                {
                  v7 = -1;
                }
              }
              std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
            }
            std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 128));
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        598);
      v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v35,
             (const char (*)[45])"GCGEffectPayByCardTag not support cost type:");
      effect_tag = *(_DWORD *)(v3 + 32);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &effect_tag);
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v7 = -1;
    }
  }
  std::shared_ptr<data::ConfigGCGEffectPayByCardTag>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectPayByCardTag> *const)(v3 + 64));
  v30 = v7;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v30;
};

// Line 644: range 000000000E1682F8-000000000E168E66
int32_t __cdecl GCGExecEffectCharge::doEffect(
        GCGExecEffectCharge *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::vector<unsigned int>::iterator v19; // rax
  GCGExecEffectCharge::doEffect::<lambda(uint32_t)> v20; // rdx
  std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  uint32_t *p_max_effective_count; // rax
  GCGSkillLogic *SkillLogic; // r15
  uint32_t v25; // r14d
  std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  data::GCGValueOperatorType *p_operator_type; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  int32_t v32; // eax
  data::GCGEffectCampType camp_type; // [rsp+8h] [rbp-1C8h]
  data::GCGChooseTargetCharaterType target_charater_type; // [rsp+Ch] [rbp-1C4h]
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *__lasta; // [rsp+10h] [rbp-1C0h]
  GCGSkillLogic *__last; // [rsp+10h] [rbp-1C0h]
  bool __lastb; // [rsp+10h] [rbp-1C0h]
  unsigned int *__lastc; // [rsp+10h] [rbp-1C0h]
  GCGControllerValue cur_controller_id; // [rsp+30h] [rbp-1A0h]
  uint32_t max_effective_count; // [rsp+34h] [rbp-19Ch]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+38h] [rbp-198h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __first; // [rsp+40h] [rbp-190h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > v43; // [rsp+48h] [rbp-188h] BYREF
  GCGGameMode *game_mode; // [rsp+50h] [rbp-180h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+58h] [rbp-178h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *energy_num; // [rsp+60h] [rbp-170h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+68h] [rbp-168h] BYREF
  std::shared_ptr<GCGCard> p_this_card_ptr; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v49; // [rsp+80h] [rbp-150h] BYREF
  std::string val; // [rsp+A0h] [rbp-130h] BYREF
  char v51[272]; // [rsp+C0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 remove_func:680 64 16 28 config_effect_charge_ptr:645 96 16 13 skill_ptr:651 128 16 18"
                        " owned_card_ptr:658 160 24 29 alternative_card_guid_vec:666";
  *(_QWORD *)(v3 + 16) = GCGExecEffectCharge::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectCharge,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectCharge>(
         (const std::shared_ptr<data::ConfigGCGExecEffectCharge> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      648);
    v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v49,
           (const char (*)[57])"GCGExecEffectCharge config_effect_charge_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v49);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        654);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[47])"GCGExecEffectCharge doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          661);
        v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v49,
                (const char (*)[56])"GCGExecEffectCharge fail for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        cur_controller_id = GCGCard::getControllerId(v11);
        __lasta = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v12 = std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        __in = GCGSkill::getDeclaredValueByKey(__lasta, &v12->declared_output_key.key);
        _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        energy_num = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
        __last = GCGGameMode::getSkillLogic(game_mode);
        v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v13->target_character >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->target_character >> 3) + 0x7FFF8000) <= 3 )
        {
          v13 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->target_character);
        }
        target_charater_type = v13->target_character;
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_target_camp = &v14->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_target_camp);
        }
        camp_type = v14->target_camp;
        std::shared_ptr<GCGCard>::shared_ptr(&p_this_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 128));
        __lastb = GCGSkillLogic::getTargetCardVec(
                    __last,
                    skill_param,
                    &p_this_card_ptr,
                    camp_type,
                    target_charater_type,
                    cur_controller_id,
                    (std::vector<unsigned int> *)(v3 + 160)) != 0;
        std::shared_ptr<GCGCard>::~shared_ptr(&p_this_card_ptr);
        if ( __lastb )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            669);
          v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v49,
                  (const char (*)[44])"GCGExecEffectCharge getTargetCardVec failed");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v49);
          v7 = -1;
        }
        else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            674);
          v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v49,
                  (const char (*)[56])"GCGExecEffectCharge not valid alternative charater card");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v49);
          v7 = 0;
        }
        else
        {
          v18 = std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v18->limit_card_tag >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v18->limit_card_tag >> 3) + 0x7FFF8000) <= 3 )
          {
            v18 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v18->limit_card_tag);
          }
          if ( v18->limit_card_tag )
          {
            __lastc = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
            v19._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 160))._M_current;
            v20.__config_effect_charge_ptr = (data::ConfigGCGExecEffectChargePtr *)(v3 + 64);
            v20.__game_mode = game_mode;
            *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 32) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,GCGExecEffectCharge::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(unsigned int)#1}>(
                                                                                                     v19,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__lastc,
                                                                                                     v20);
            __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
              &v43,
              &__i);
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
              &__first,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 32));
            std::vector<unsigned int>::erase((std::vector<unsigned int> *const)(v3 + 160), __first, v43);
          }
          v21 = std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          p_max_effective_count = &v21->max_effective_count;
          if ( *(_BYTE *)(((unsigned __int64)p_max_effective_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_max_effective_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_effective_count >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(p_max_effective_count);
          }
          max_effective_count = v21->max_effective_count;
          if ( max_effective_count
            && max_effective_count < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 160)) )
          {
            std::vector<unsigned int>::resize((std::vector<unsigned int> *const)(v3 + 160), max_effective_count);
          }
          SkillLogic = GCGGameMode::getSkillLogic(game_mode);
          if ( *(_BYTE *)(((unsigned __int64)energy_num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)energy_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)energy_num >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(energy_num);
          }
          v25 = *energy_num;
          v26 = std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          p_operator_type = &v26->operator_type;
          if ( *(_BYTE *)(((unsigned __int64)p_operator_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_operator_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_operator_type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(p_operator_type);
          }
          GCGSkillLogic::changeEnergy(
            SkillLogic,
            (const std::vector<unsigned int> *)(v3 + 160),
            v26->operator_type,
            v25);
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            706);
          v28 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v49,
                  (const char (*)[47])"GCGExecEffectCharge alternative_card_guid_vec:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int>(v28, (const std::vector<unsigned int> *)(v3 + 160));
          v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v29,
                  (const char (*)[14])", add energy:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, energy_num);
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v49);
          v7 = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectCharge>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectCharge> *const)(v3 + 64));
  v32 = v7;
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v32;
};

// Line 680: range 000000000E16809E-000000000E1682F7
bool __cdecl GCGExecEffectCharge::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(unsigned int)#1}::operator()(
        const GCGExecEffectCharge::doEffect::<lambda(uint32_t)> *const __closure,
        uint32_t card_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  GCGCardMgr *CardMgr; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v10; // al
  bool result; // al
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 cur_card_ptr:686";
  *(_QWORD *)(v2 + 16) = GCGExecEffectCharge::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(unsigned int)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::operator==<data::ConfigGCGExecEffectCharge>(0LL, __closure->__config_effect_charge_ptr) )
  {
    v5 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__game_mode >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__game_mode);
    CardMgr = GCGGameMode::getCardMgr(__closure->__game_mode);
    GCGCardMgr::findCard((GCGCardMgr *const)(v2 + 32), CardMgr, card_guid);
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v2 + 32)) )
    {
      v5 = 1;
    }
    else
    {
      v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( !GCGCard::isAlive(v7) )
        goto LABEL_18;
      v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v9 = std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__config_effect_charge_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v9->limit_card_tag >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->limit_card_tag >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = (std::__shared_ptr_access<data::ConfigGCGExecEffectCharge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->limit_card_tag);
      }
      if ( !GCGCard::isHasTag(v8, v9->limit_card_tag) )
LABEL_18:
        v10 = 1;
      else
        v10 = 0;
      v5 = v10 != 0;
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  }
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 712: range 000000000E168E68-000000000E169883
int32_t __cdecl GCGExecEffectChangeOnstageCharater::doEffect(
        GCGExecEffectChangeOnstageCharater *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGSkillLogic *SkillLogic; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  data::GCGEffectCampType *v18; // rax
  data::GCGEffectCampType *v19; // rax
  __gnu_cxx::__normal_iterator<proto::GCGControllerValue*,std::vector<proto::GCGControllerValue> >::reference v20; // rax
  _DWORD *v21; // rdx
  GCGSkillLogic *v22; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  int32_t v27; // eax
  GCGControllerValue cur_controller_id; // [rsp+2Ch] [rbp-174h]
  std::vector<proto::GCGControllerValue>::iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::vector<proto::GCGControllerValue>::iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  GCGGameMode *game_mode; // [rsp+40h] [rbp-160h]
  std::vector<proto::GCGControllerValue> *__for_range; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-150h] BYREF
  std::string val; // [rsp+70h] [rbp-130h] BYREF
  char v35[272]; // [rsp+90h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 7 ret:745 48 4 17 controller_id:746 64 16 38 config_effect_change_character_ptr:713 96 16"
                        " 13 skill_ptr:721 128 16 18 owned_card_ptr:728 160 24 30 alternative_controller_vec:720";
  *(_QWORD *)(v3 + 16) = GCGExecEffectChangeOnstageCharater::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectChangeOnstageCharater,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectChangeOnstageCharater>(
         (const std::shared_ptr<data::ConfigGCGExecEffectChangeOnstageCharater> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      716);
    v6 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
           &v33,
           (const char (*)[82])"GCGExecEffectChangeOnstageCharater config_effect_change_character_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v7 = -1;
    goto LABEL_32;
  }
  std::vector<proto::GCGControllerValue>::vector((std::vector<proto::GCGControllerValue> *const)(v3 + 160));
  GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
  if ( !std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
  {
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    game_mode = GCGSkill::getGameMode(v9);
    v10 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v10);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        731);
      v11 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              &v33,
              (const char (*)[73])"GCGExecEffectChangeOnstageCharater failed for owned_card_ptr is nullptr ");
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v7 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      cur_controller_id = GCGCard::getControllerId(v12);
      SkillLogic = GCGGameMode::getSkillLogic(game_mode);
      v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      p_target_camp = &v14->target_camp;
      if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_target_camp);
      }
      if ( GCGSkillLogic::getControllerVecByCampType(
             SkillLogic,
             cur_controller_id,
             v14->target_camp,
             (std::vector<proto::GCGControllerValue> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          737);
        v16 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[81])"GCGExecEffectChangeOnstageCharater get controller by camptype fail, target_camp:");
        v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v18 = &v17->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
      }
      else
      {
        if ( !std::vector<proto::GCGControllerValue>::empty((const std::vector<proto::GCGControllerValue> *const)(v3 + 160)) )
        {
          *(_DWORD *)(v3 + 32) = 0;
          __for_range = (std::vector<proto::GCGControllerValue> *)(v3 + 160);
          __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((std::vector<proto::GCGControllerValue> *const)(v3 + 160))._M_current;
          __for_end._M_current = std::vector<proto::GCGControllerValue>::end((std::vector<proto::GCGControllerValue> *const)(v3 + 160))._M_current;
          while ( __gnu_cxx::operator!=<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>(
                    &__for_begin,
                    &__for_end) )
          {
            v20 = __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
            v21 = v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v20);
            }
            *(_DWORD *)(v3 + 48) = *v21;
            v22 = GCGGameMode::getSkillLogic(game_mode);
            v23 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v23->select_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v23->select_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v23 = (std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v23->select_type);
            }
            if ( GCGSkillLogic::changeOnStageCharater(
                   v22,
                   this,
                   *(GCGControllerValue *)(v3 + 48),
                   v23->select_type,
                   skill_param) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                750);
              v24 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[80])"GCGExecEffectChangeOnstageCharater changeOnStageCharater failed, controller_id:");
              common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v24,
                (const proto::GCGControllerValue *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              *(_DWORD *)(v3 + 32) = -1;
            }
            __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
          }
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            754);
          v25 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v33,
                  (const char (*)[50])"GCGExecEffectChangeOnstageCharater doEffect, ret:");
          v26 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v3 + 32));
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v7 = 0;
          goto LABEL_30;
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          742);
        v16 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[85])"GCGExecEffectChangeOnstageCharater alternative_controller_vec is empty, target_camp:");
        v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeOnstageCharater,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v19 = &v17->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
      }
      *(_DWORD *)(v3 + 48) = v17->target_camp;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
LABEL_30:
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    goto LABEL_31;
  }
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/skill/gcg_effect.cpp",
    "doEffect",
    724);
  v8 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
         &v33,
         (const char (*)[68])"GCGExecEffectChangeOnstageCharater failed for skill_ptr is nullptr ");
  GCGEffectBase::getDesc[abi:cxx11](&val, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v33);
  v7 = -1;
LABEL_31:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v3 + 160));
LABEL_32:
  std::shared_ptr<data::ConfigGCGExecEffectChangeOnstageCharater>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectChangeOnstageCharater> *const)(v3 + 64));
  v27 = v7;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v27;
};

// Line 760: range 000000000E169884-000000000E16A222
int32_t __cdecl GCGExecEffectDraw::doEffect(
        GCGExecEffectDraw *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGSkillLogic *SkillLogic; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  data::GCGEffectCampType *v19; // rax
  data::GCGEffectCampType *v20; // rax
  __gnu_cxx::__normal_iterator<proto::GCGControllerValue*,std::vector<proto::GCGControllerValue> >::reference v21; // rax
  proto::GCGControllerValue *v22; // rdx
  GCGDuel *Duel; // rax
  uint32_t v24; // r14d
  GCGCardZone *HandZone; // r15
  GCGCardZone *DeckZone; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  int32_t v29; // eax
  unsigned int target_camp; // [rsp+24h] [rbp-17Ch] BYREF
  GCGControllerValue cur_controller_id; // [rsp+28h] [rbp-178h]
  proto::GCGControllerValue controller_id; // [rsp+2Ch] [rbp-174h]
  std::vector<proto::GCGControllerValue>::iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::vector<proto::GCGControllerValue>::iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  GCGGameMode *game_mode; // [rsp+40h] [rbp-160h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+48h] [rbp-158h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *draw_num; // [rsp+50h] [rbp-150h]
  std::vector<proto::GCGControllerValue> *__for_range; // [rsp+58h] [rbp-148h]
  GCGField *field; // [rsp+60h] [rbp-140h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+68h] [rbp-138h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-130h] BYREF
  std::string val; // [rsp+90h] [rbp-110h] BYREF
  char v43[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 26 config_effect_draw_ptr:761 64 16 13 skill_ptr:767 96 16 18 owned_card_ptr:774 128 24 "
                        "30 alternative_controller_vec:783";
  *(_QWORD *)(v3 + 16) = GCGExecEffectDraw::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectDraw,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGExecEffectDraw>(
         (const std::shared_ptr<data::ConfigGCGExecEffectDraw> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      764);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v41,
           (const char (*)[53])"GCGExecEffectDraw config_effect_draw_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v7 = -1;
    goto LABEL_31;
  }
  GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 64));
  if ( !std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 64), 0LL) )
  {
    v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    game_mode = GCGSkill::getGameMode(v8);
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    GCGSkill::getThisCard((const GCGSkill *const)(v3 + 96), (const GCGSkillUseParam *)v9);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        777);
      v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v41,
              (const char (*)[62])"ConfigGCGExecEffectDraw failed for owned_card_ptr is nullptr ");
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v7 = -1;
LABEL_29:
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
      goto LABEL_30;
    }
    v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    cur_controller_id = GCGCard::getControllerId(v11);
    v12 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    __in = GCGSkill::getDeclaredValueByKey(v12, &v13->declared_output_key.key);
    _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
    draw_num = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
    std::vector<proto::GCGControllerValue>::vector((std::vector<proto::GCGControllerValue> *const)(v3 + 128));
    SkillLogic = GCGGameMode::getSkillLogic(game_mode);
    v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_target_camp = &v15->target_camp;
    if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_target_camp);
    }
    if ( GCGSkillLogic::getControllerVecByCampType(
           SkillLogic,
           cur_controller_id,
           v15->target_camp,
           (std::vector<proto::GCGControllerValue> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        786);
      v17 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[64])"GCGExecEffectDraw get controller by camptype fail, target_camp:");
      v18 = std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v19 = &v18->target_camp;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
    }
    else
    {
      if ( !std::vector<proto::GCGControllerValue>::empty((const std::vector<proto::GCGControllerValue> *const)(v3 + 128)) )
      {
        __for_range = (std::vector<proto::GCGControllerValue> *)(v3 + 128);
        __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((std::vector<proto::GCGControllerValue> *const)(v3 + 128))._M_current;
        __for_end._M_current = std::vector<proto::GCGControllerValue>::end((std::vector<proto::GCGControllerValue> *const)(v3 + 128))._M_current;
        while ( __gnu_cxx::operator!=<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>(
                  &__for_begin,
                  &__for_end) )
        {
          v21 = __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
          v22 = v21;
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v21);
          }
          controller_id = *v22;
          Duel = GCGGameMode::getDuel(game_mode);
          field = GCGDuel::getField(Duel, controller_id);
          if ( *(_BYTE *)(((unsigned __int64)draw_num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)draw_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)draw_num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(draw_num);
          }
          v24 = *draw_num;
          HandZone = GCGField::getHandZone(field);
          DeckZone = GCGField::getDeckZone(field);
          GCGUtils::moveCard(DeckZone, HandZone, v24, GCG_REASON_EFFECT);
          __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          799);
        v27 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v41,
                (const char (*)[42])"GCGExecEffectDraw doEffect succ draw_num:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, draw_num);
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        v7 = 0;
        goto LABEL_28;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        791);
      v17 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[68])"GCGExecEffectDraw alternative_controller_vec is empty, target_camp:");
      v18 = std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v20 = &v18->target_camp;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
    }
    target_camp = v18->target_camp;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &target_camp);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v7 = -1;
LABEL_28:
    std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v3 + 128));
    goto LABEL_29;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/skill/gcg_effect.cpp",
    "doEffect",
    770);
  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
    (common::milog::MiLogStream *const)&val,
    (const char (*)[45])"GCGExecEffectDraw doEffect skill_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  v7 = -1;
LABEL_30:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
LABEL_31:
  std::shared_ptr<data::ConfigGCGExecEffectDraw>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectDraw> *const)(v3 + 32));
  v29 = v7;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v29;
};

// Line 805: range 000000000E16A224-000000000E16A5EA
int32_t __cdecl GCGEffectAttachPhysicDamageToElement::doEffect(
        GCGEffectAttachPhysicDamageToElement *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  data::GCGEffectElementType *p_attached_element_type; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  data::GCGEffectElementType *v13; // rax
  int32_t v14; // eax
  int attached_element_type; // [rsp+24h] [rbp-BCh] BYREF
  std::optional<data::GCGEffectElementType> v17; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 36 config_effect_attach_element_ptr:806";
  *(_QWORD *)(v3 + 16) = GCGEffectAttachPhysicDamageToElement::doEffect;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectAttachPhysicDamageToElement,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGEffectAttachPhysicDamageToElement>(
         (const std::shared_ptr<data::ConfigGCGEffectAttachPhysicDamageToElement> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      809);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v18,
           (const char (*)[45])"config_effect_attach_element_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_attached_element_type = &v8->attached_element_type;
    if ( *(_BYTE *)(((unsigned __int64)p_attached_element_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_attached_element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_attached_element_type >> 3)
                                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(p_attached_element_type);
    }
    if ( v8->attached_element_type )
    {
      v10 = std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::optional<data::GCGEffectElementType>::optional<data::GCGEffectElementType&,true>(
        &v17,
        &v10->attached_element_type);
      if ( *(_BYTE *)(((unsigned __int64)&result->attach_element_result_opt >> 3) + 0x7FFF8000) )
        __asan_report_store8(&result->attach_element_result_opt);
      result->attach_element_result_opt = v17;
      if ( *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)result + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store1(&result->is_ignore_after_effect);
      }
      result->is_ignore_after_effect = 1;
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      818);
    v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[49])"GCGEffectAttachPhysicDamageToElement cur revise:");
    v12 = std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAttachPhysicDamageToElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v13 = &v12->attached_element_type;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    attached_element_type = v12->attached_element_type;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v11, &attached_element_type);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v7 = 0;
  }
  std::shared_ptr<data::ConfigGCGEffectAttachPhysicDamageToElement>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectAttachPhysicDamageToElement> *const)(v3 + 32));
  v14 = v7;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 824: range 000000000E16A5EC-000000000E16BADF
int32_t __cdecl GCGEffectAddShield::doEffect(
        GCGEffectAddShield *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_min_damage_limit; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  data::GCGEffectDamageElementType effect_element_type; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t Guid; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rdx
  data::GCGTokenType *p_token_type; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rdx
  data::GCGTokenType *v42; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rdx
  uint32_t *p_deduction_per_shield; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  const unsigned int *v47; // rax
  _DWORD *v48; // rdx
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rdx
  uint32_t *v50; // rax
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rdx
  uint32_t *v56; // rax
  unsigned int v57; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rdx
  uint32_t *v59; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rdx
  uint32_t *v61; // rax
  unsigned int v62; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rdx
  uint32_t *v64; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  GCGCard *v66; // r15
  uint32_t v67; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rdx
  data::GCGTokenType *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // r14
  int32_t v76; // eax
  GCGEffectElementType effect_damage_type; // [rsp+14h] [rbp-18Ch]
  common::milog::MiLogStream v79; // [rsp+30h] [rbp-170h] BYREF
  std::string val; // [rsp+50h] [rbp-150h] BYREF
  char v81[304]; // [rsp+70h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 4 17 source_damage:837 48 4 14 cur_shield:883 64 4 31 cur_shield_damage_deduction:899 80 4 "
                        "15 shield_cost:906 96 16 32 config_effect_add_shield_ptr:825 128 16 13 skill_ptr:831 160 16 17 t"
                        "his_card_ptr:849 192 16 19 target_card_ptr:860 224 16 18 owner_card_ptr:876";
  *(_QWORD *)(v4 + 16) = GCGEffectAddShield::doEffect;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectAddShield,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v4 + 96));
  if ( std::operator==<data::ConfigGCGEffectAddShield>(
         (const std::shared_ptr<data::ConfigGCGEffectAddShield> *)(v4 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v79,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      828);
    v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v79,
           (const char (*)[60])"GCGEffectAddShield config_effect_add_shield_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v79);
    v3 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v4 + 128));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v4 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        834);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[46])"GCGEffectAddShield doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v3 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&result->shield_deduction_damage_result >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&result->shield_deduction_damage_result >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&result->shield_deduction_damage_result);
      }
      *(_DWORD *)(v4 + 32) = result->shield_deduction_damage_result;
      if ( *(_DWORD *)(v4 + 32) )
      {
        v9 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        p_min_damage_limit = &v9->min_damage_limit;
        if ( *(_BYTE *)(((unsigned __int64)p_min_damage_limit >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_min_damage_limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_min_damage_limit >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(p_min_damage_limit);
        }
        if ( v9->min_damage_limit <= *(_DWORD *)(v4 + 32) )
        {
          v16 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          GCGSkill::getThisCard((const GCGSkill *const)(v4 + 160), (const GCGSkillUseParam *)v16);
          if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 160), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              852);
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[41])"GCGEffectAddShield this_card_ptr is null");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v3 = -1;
          }
          else if ( std::operator==<GCGSkillUseParam>(0LL, &skill_param->trigger_window_param_ptr) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              857);
            common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[52])"GCGEffectAddShield trigger_window_param_ptr is null");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v3 = -1;
          }
          else
          {
            v17 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&skill_param->trigger_window_param_ptr);
            std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 192), &v17->target_card_ptr);
            if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v4 + 192)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                863);
              common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[43])"GCGEffectAddShield target_card_ptr is null");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v3 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)skill_param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&skill_param->damage_element_type);
              }
              effect_damage_type = skill_param->damage_element_type;
              v18 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&v18->effect_element_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v18->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
              {
                v18 = (std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v18->effect_element_type);
              }
              effect_element_type = v18->effect_element_type;
              v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              if ( !GCGUtils::isDamageElementMatch(v20, effect_element_type, effect_damage_type) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&val,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  869);
                v21 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[32])"GCGEffectAddShield damage type:");
                if ( *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)skill_param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(&skill_param->damage_element_type);
                }
                *(_DWORD *)(v4 + 64) = skill_param->damage_element_type;
                v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v21,
                        (const unsigned int *)(v4 + 64));
                v23 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v22,
                        (const char (*)[24])", effect limit element:");
                v24 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                if ( *(_BYTE *)(((unsigned __int64)&v24->effect_element_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v24->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  v24 = (std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v24->effect_element_type);
                }
                *(_DWORD *)(v4 + 80) = v24->effect_element_type;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v4 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                v3 = -1;
              }
              else
              {
                v25 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                if ( GCGCard::isOnStage(v25) )
                  goto LABEL_41;
                std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                GCGCard::getOwnerCard((GCGCard *const)(v4 + 224));
                if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v4 + 224))
                  || (v26 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224)),
                      Guid = GCGCard::getGuid(v26),
                      v28 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192)),
                      Guid != GCGCard::getGuid(v28)) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&val,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    879);
                  v30 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          (common::milog::MiLogStream *const)&val,
                          (const char (*)[32])"GCGEffectAddShield target card:");
                  v31 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                  *(_DWORD *)(v4 + 64) = GCGCard::getGuid(v31);
                  v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v30,
                          (const unsigned int *)(v4 + 64));
                  v33 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          v32,
                          (const char (*)[32])off_1BC83200);
                  v34 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                  *(_DWORD *)(v4 + 80) = GCGCard::getGuid(v34);
                  v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v33,
                          (const unsigned int *)(v4 + 80));
                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v35, (const char (*)[15])off_1BC83240);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                  v3 = -1;
                  v36 = 0;
                }
                else
                {
                  v36 = 1;
                }
                std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 224));
                if ( v36 == 1 )
                {
LABEL_41:
                  v37 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                  v38 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  p_token_type = &v38->token_type;
                  if ( *(_BYTE *)(((unsigned __int64)p_token_type >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_token_type >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4(p_token_type);
                  }
                  *(_DWORD *)(v4 + 48) = GCGCard::getToken(v37, v38->token_type);
                  if ( *(_DWORD *)(v4 + 48) )
                  {
                    v43 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                    p_deduction_per_shield = &v43->deduction_per_shield;
                    if ( *(_BYTE *)(((unsigned __int64)p_deduction_per_shield >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_deduction_per_shield & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_deduction_per_shield >> 3)
                                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4(p_deduction_per_shield);
                    }
                    if ( v43->deduction_per_shield )
                    {
                      v45 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                      if ( *(_BYTE *)(((unsigned __int64)&v45->limit_one_times >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&v45->limit_one_times >> 3) + 0x7FFF8000) <= 3 )
                      {
                        v45 = (std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v45->limit_one_times);
                      }
                      if ( v45->limit_one_times )
                      {
                        v46 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                        v47 = std::min<unsigned int>((const unsigned int *)(v4 + 48), &v46->limit_one_times);
                        v48 = v47;
                        if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(v47);
                        }
                        *(_DWORD *)(v4 + 48) = *v48;
                      }
                      v49 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                      v50 = &v49->deduction_per_shield;
                      if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v50);
                      }
                      *(_DWORD *)(v4 + 64) = v49->deduction_per_shield * *(_DWORD *)(v4 + 48);
                      if ( *(_DWORD *)(v4 + 64) )
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&val,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/card_game/skill/gcg_effect.cpp",
                          "doEffect",
                          905);
                        v52 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                (common::milog::MiLogStream *const)&val,
                                (const char (*)[31])"GCGEffectAddShield cur_shield:");
                        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v52,
                                (const unsigned int *)(v4 + 48));
                        v54 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                v53,
                                (const char (*)[30])" cur_shield_damage_deduction:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v54,
                          (const unsigned int *)(v4 + 64));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                        *(_DWORD *)(v4 + 80) = 0;
                        if ( *(_DWORD *)(v4 + 32) <= *(_DWORD *)(v4 + 64) )
                        {
                          v60 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                          v61 = &v60->deduction_per_shield;
                          if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(v61);
                          }
                          v62 = v60->deduction_per_shield + *(_DWORD *)(v4 + 32) - 1;
                          v63 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                          v64 = &v63->deduction_per_shield;
                          if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(v64);
                          }
                          *(_DWORD *)(v4 + 80) = v62 / v63->deduction_per_shield;
                          if ( *(_BYTE *)(((unsigned __int64)&result->shield_deduction_damage_result >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&result->shield_deduction_damage_result >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_store4(&result->shield_deduction_damage_result);
                          }
                          result->shield_deduction_damage_result = 0;
                        }
                        else
                        {
                          v55 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                          v56 = &v55->deduction_per_shield;
                          if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(v56);
                          }
                          v57 = v55->deduction_per_shield + *(_DWORD *)(v4 + 64) - 1;
                          v58 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                          v59 = &v58->deduction_per_shield;
                          if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(v59);
                          }
                          *(_DWORD *)(v4 + 80) = v57 / v58->deduction_per_shield;
                          if ( *(_BYTE *)(((unsigned __int64)&result->shield_deduction_damage_result >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&result->shield_deduction_damage_result >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&result->shield_deduction_damage_result);
                          }
                          result->shield_deduction_damage_result -= *(_DWORD *)(v4 + 64);
                        }
                        v65 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                        if ( *(char *)(((unsigned __int64)&v65->is_ignore_shield_cost >> 3) + 0x7FFF8000) < 0 )
                          v65 = (std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v65->is_ignore_shield_cost);
                        if ( !v65->is_ignore_shield_cost )
                        {
                          v66 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                          v67 = *(_DWORD *)(v4 + 80);
                          v68 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                          v69 = &v68->token_type;
                          if ( *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)v69 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v69 >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(v69);
                          }
                          GCGCard::subToken(v66, v68->token_type, v67, GCG_REASON_EFFECT);
                        }
                        else
                        {
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)&val,
                            &common::milog::MiLogDefault::default_log_obj_,
                            1u,
                            "./src/card_game/skill/gcg_effect.cpp",
                            "doEffect",
                            924);
                          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            (common::milog::MiLogStream *const)&val,
                            (const char (*)[38])"GCGEffectAddShield ignore shield cost");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                        }
                        common::milog::MiLogStream::create(
                          &v79,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/card_game/skill/gcg_effect.cpp",
                          "doEffect",
                          926);
                        v70 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                &v79,
                                (const char (*)[59])"GCGEffectAddShield useShieldDeductionDamage source_damage:");
                        v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v70,
                                (const unsigned int *)(v4 + 32));
                        v72 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v71,
                                (const char (*)[15])" final damage:");
                        v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v72,
                                &result->shield_deduction_damage_result);
                        v74 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v73,
                                (const char (*)[14])" shield_cost:");
                        v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v74,
                                (const unsigned int *)(v4 + 80));
                        GCGEffectBase::getDesc[abi:cxx11](&val, this);
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v75, &val);
                        std::string::~string(&val);
                        common::milog::MiLogStream::~MiLogStream(&v79);
                        v3 = 0;
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v79,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/card_game/skill/gcg_effect.cpp",
                          "doEffect",
                          902);
                        v51 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                                &v79,
                                (const char (*)[66])"GCGEffectAddShield cur_shield deduction damage is zero and ignore");
                        GCGEffectBase::getDesc[abi:cxx11](&val, this);
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, &val);
                        std::string::~string(&val);
                        common::milog::MiLogStream::~MiLogStream(&v79);
                        v3 = -1;
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&val,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/card_game/skill/gcg_effect.cpp",
                        "doEffect",
                        891);
                      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[46])"GCGEffectAddShield deduction_per_shield is 0.");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                      v3 = -1;
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&val,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/card_game/skill/gcg_effect.cpp",
                      "doEffect",
                      886);
                    v40 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                            (common::milog::MiLogStream *const)&val,
                            (const char (*)[51])"GCGEffectAddShield cur_shield is zero, token_type:");
                    v41 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                    v42 = &v41->token_type;
                    if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v42);
                    }
                    *(_DWORD *)(v4 + 80) = v41->token_type;
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v40,
                      (const unsigned int *)(v4 + 80));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                    v3 = -1;
                  }
                }
              }
            }
            std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 192));
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 160));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v79,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            846);
          v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v79,
                  (const char (*)[34])"GCGEffectAddShield source_damage:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v4 + 32));
          v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v12, (const char (*)[32])off_1BC83020);
          v14 = std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectAddShield,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->min_damage_limit);
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v79);
          v3 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v79,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          840);
        v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v79,
               (const char (*)[60])"GCGEffectAddShield source_damage is zero not need reduction");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v79);
        v3 = -1;
      }
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v4 + 128));
  }
  std::shared_ptr<data::ConfigGCGEffectAddShield>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectAddShield> *const)(v4 + 96));
  v76 = v3;
  if ( v81 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v76;
};

// Line 932: range 000000000E16BAE0-000000000E16C058
int32_t __cdecl GCGExecEffectDamageMultiple::doEffect(
        GCGExecEffectDamageMultiple *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDamageMultiple,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  int32_t v15; // eax
  int __u; // [rsp+28h] [rbp-F8h] BYREF
  unsigned int __t; // [rsp+2Ch] [rbp-F4h] BYREF
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *damage_multiple_times; // [rsp+38h] [rbp-E8h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+40h] [rbp-E0h] BYREF
  std::optional<unsigned int> v22; // [rsp+48h] [rbp-D8h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  std::string val; // [rsp+70h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 37 config_effect_damage_multiple_ptr:933 64 16 13 skill_ptr:939";
  *(_QWORD *)(v3 + 16) = GCGExecEffectDamageMultiple::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectDamageMultiple,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGExecEffectDamageMultiple>(
         (const std::shared_ptr<data::ConfigGCGExecEffectDamageMultiple> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      936);
    v6 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v23,
           (const char (*)[74])"GCGExecEffectDamageMultiple config_effect_damage_multiple_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 64));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        942);
      common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[55])"GCGExecEffectDamageMultiple doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v9 = std::__shared_ptr_access<data::ConfigGCGExecEffectDamageMultiple,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDamageMultiple,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      __in = GCGSkill::getDeclaredValueByKey(v8, &v9->declared_output_key.key);
      _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
      damage_multiple_times = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
      __u = 0;
      v10 = std::optional<unsigned int>::value_or<int>(&result->damage_multiple_revise_opt, &__u);
      if ( *(_BYTE *)(((unsigned __int64)damage_multiple_times >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)damage_multiple_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage_multiple_times >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(damage_multiple_times);
      }
      __t = v10 + *damage_multiple_times;
      std::optional<unsigned int>::optional<unsigned int,true>(&v22, &__t);
      if ( (((unsigned __int8)result + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&result->damage_multiple_revise_opt >> 3)
                                                            + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&result->damage_multiple_revise_opt >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(&result->damage_multiple_revise_opt._M_payload._M_engaged + 3) >> 3)
                    + 0x7FFF8000) != 0
        && (((unsigned __int8)result + 91) & 7) >= *(_BYTE *)(((unsigned __int64)(&result->damage_multiple_revise_opt._M_payload._M_engaged
                                                                                + 3) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(&result->damage_multiple_revise_opt, 8LL);
      }
      result->damage_multiple_revise_opt = v22;
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        947);
      v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v23,
              (const char (*)[40])"GCGExecEffectDamageMultiple cur revise:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, damage_multiple_times);
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" final:");
      __u = 0;
      __t = std::optional<unsigned int>::value_or<int>(&result->damage_multiple_revise_opt, &__u);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__t);
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v7 = 0;
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
  }
  std::shared_ptr<data::ConfigGCGExecEffectDamageMultiple>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectDamageMultiple> *const)(v3 + 32));
  v15 = v7;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v15;
};

// Line 953: range 000000000E16C05A-000000000E16C838
int32_t __cdecl GCGEffectBeingHitDamageReduceToHalf::doEffect(
        GCGEffectBeingHitDamageReduceToHalf *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  GCGEffectElementType damage_element_type; // r15d
  std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageReduceToHalf,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  data::GCGEffectDamageElementType *p_effect_element_type; // rax
  data::GCGEffectDamageElementType effect_element_type; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageReduceToHalf,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  data::GCGEffectDamageElementType *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // r14
  int32_t v22; // eax
  unsigned int v24; // [rsp+28h] [rbp-F8h] BYREF
  int32_t damage; // [rsp+2Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 43 config_effect_damage_reduce_to_half_ptr:954 64 16 13 skill_ptr:960 96 16 18 owner_card_ptr:966";
  *(_QWORD *)(v3 + 16) = GCGEffectBeingHitDamageReduceToHalf::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectBeingHitDamageReduceToHalf,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGEffectBeingHitDamageReduceToHalf>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGEffectBeingHitDamageReduceToHalf> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      957);
    v6 = common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
           &v26,
           (const char (*)[88])"GCGEffectBeingHitDamageReduceToHalf config_effect_damage_reduce_to_half_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 64));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        963);
      common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[63])"GCGEffectBeingHitDamageReduceToHalf doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 96), (const GCGSkillUseParam *)v8);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          969);
        v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
               &v26,
               (const char (*)[62])"GCGEffectBeingHitDamageReduceToHalf owner_card_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)skill_param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&skill_param->damage_element_type);
        }
        damage_element_type = skill_param->damage_element_type;
        v11 = std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageReduceToHalf,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageReduceToHalf,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        p_effect_element_type = &v11->effect_element_type;
        if ( *(_BYTE *)(((unsigned __int64)p_effect_element_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_effect_element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_effect_element_type >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(p_effect_element_type);
        }
        effect_element_type = v11->effect_element_type;
        v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( !GCGUtils::isDamageElementMatch(v14, effect_element_type, damage_element_type) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            974);
          v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[49])"GCGEffectBeingHitDamageReduceToHalf damage type:");
          if ( *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)skill_param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&skill_param->damage_element_type);
          }
          v24 = skill_param->damage_element_type;
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v24);
          v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v16,
                  (const char (*)[24])", effect limit element:");
          v18 = std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageReduceToHalf,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageReduceToHalf,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          v19 = &v18->effect_element_type;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          damage = v18->effect_element_type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)&damage);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
        else
        {
          damage = 1;
          if ( TraitSkillResult<(GCGEffectCategoryType)12,int>::addSkillResult(result, &damage) )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              980);
            v20 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v26,
                    (const char (*)[43])"GCGEffectBeingHitDamageReduceToHalf failed");
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v26);
            v7 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              983);
            v21 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v26,
                    (const char (*)[41])"GCGEffectBeingHitDamageReduceToHalf succ");
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v26);
            v7 = 0;
          }
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
  }
  std::shared_ptr<data::ConfigGCGEffectBeingHitDamageReduceToHalf>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectBeingHitDamageReduceToHalf> *const)(v3 + 32));
  v22 = v7;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v22;
};

// Line 989: range 000000000E16C83A-000000000E16CA36
int32_t __cdecl GCGEffectChangeCharacterSetQuick::doEffect(
        GCGEffectChangeCharacterSetQuick *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v5; // rbx
  bool __u; // [rsp+2Ch] [rbp-54h] BYREF
  std::optional<bool> v9; // [rsp+2Eh] [rbp-52h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-50h] BYREF
  std::string val; // [rsp+50h] [rbp-30h] BYREF

  __u = 0;
  if ( std::optional<bool>::value_or<bool>(&result->select_on_stage_is_quick_revise_result_opt, &__u) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      994);
    v3 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v10,
           (const char (*)[52])"GCGEffectChangeCharacterSetQuick fail, alread quick");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    __u = 1;
    std::optional<bool>::optional<bool,true>(&v9, &__u);
    if ( *(_BYTE *)(((unsigned __int64)&result->select_on_stage_is_quick_revise_result_opt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&result->select_on_stage_is_quick_revise_result_opt >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&result->select_on_stage_is_quick_revise_result_opt);
    }
    result->select_on_stage_is_quick_revise_result_opt = v9;
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      998);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v10,
           (const char (*)[38])"GCGEffectChangeCharacterSetQuick succ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 0;
  }
};

// Line 1004: range 000000000E16CA38-000000000E16D76C
int32_t __cdecl GCGExecEffectHeal::doEffect(
        GCGExecEffectHeal *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  data::GCGEffectCampType target_camp; // r15d
  common::milog::MiLogStream *v16; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v17; // rax
  _DWORD *v18; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  int v22; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r15
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r15
  std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  GCGSkillLogic *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r15
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r15
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  int32_t v36; // eax
  data::GCGChooseTargetCharaterType target_charater_type; // [rsp+Ch] [rbp-234h]
  GCGSkillLogic *SkillLogic; // [rsp+10h] [rbp-230h]
  GCGControllerValue cur_controller_id; // [rsp+30h] [rbp-210h]
  int32_t ret; // [rsp+34h] [rbp-20Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-208h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-200h] BYREF
  GCGGameMode *game_mode; // [rsp+48h] [rbp-1F8h]
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-1F0h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *heal_amount; // [rsp+60h] [rbp-1E0h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+68h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v48; // [rsp+70h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v49; // [rsp+90h] [rbp-1B0h] BYREF
  std::string val; // [rsp+B0h] [rbp-190h] BYREF
  char v51[368]; // [rsp+D0h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 14 card_guid:1034 48 16 27 config_effect_heal_ptr:1005 80 16 14 skill_ptr:1011 112 16 19 "
                        "owned_card_ptr:1018 144 16 13 card_ptr:1036 176 24 18 card_guid_vec:1026 240 40 18 heal_hp_param:1048";
  *(_QWORD *)(v4 + 16) = GCGExecEffectHeal::doEffect;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectHeal,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v4 + 48));
  if ( std::operator==<data::ConfigGCGExecEffectHeal>(
         (const std::shared_ptr<data::ConfigGCGExecEffectHeal> *)(v4 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1008);
    v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v49,
           (const char (*)[53])"GCGExecEffectHeal config_effect_heal_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v49);
    v3 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v4 + 80));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v4 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1014);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[45])"GCGExecEffectHeal doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v3 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      GCGSkill::getThisCard((const GCGSkill *const)(v4 + 112), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1021);
        v10 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                &v49,
                (const char (*)[54])"GCGExecEffectHeal fail for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v3 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        cur_controller_id = GCGCard::getControllerId(v11);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 176));
        SkillLogic = GCGGameMode::getSkillLogic(game_mode);
        v12 = std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&v12->target_character >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->target_character >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->target_character);
        }
        target_charater_type = v12->target_character;
        v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        p_target_camp = &v13->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_target_camp);
        }
        target_camp = v13->target_camp;
        std::shared_ptr<GCGCard>::shared_ptr(
          (std::shared_ptr<GCGCard> *const)(v4 + 144),
          (const std::shared_ptr<GCGCard> *)(v4 + 112));
        ret = GCGSkillLogic::getTargetCardVec(
                SkillLogic,
                skill_param,
                (GCGCardPtr *)(v4 + 144),
                target_camp,
                target_charater_type,
                cur_controller_id,
                (std::vector<unsigned int> *)(v4 + 176));
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 144));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1030);
          v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v49,
                  (const char (*)[44])"GCGExecEffectHeal getTargetCardVec failed, ");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v49);
          v3 = ret;
        }
        else
        {
          __for_range = (std::vector<unsigned int> *)(v4 + 176);
          __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 176))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 176))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v17 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            v18 = v17;
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v17);
            }
            *(_DWORD *)(v4 + 32) = *v18;
            CardMgr = GCGGameMode::getCardMgr(game_mode);
            GCGCardMgr::findCard((GCGCardMgr *const)(v4 + 144), CardMgr, *(_DWORD *)(v4 + 32));
            if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 144), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                1039);
              v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v49,
                      (const char (*)[46])"GCGExecEffectHeal findCard failed, card_guid:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v4 + 32));
              GCGEffectBase::getDesc[abi:cxx11](&val, this);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &val);
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v49);
              v3 = -1;
              v22 = 0;
            }
            else
            {
              v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              if ( !GCGCard::isAlive(v23) )
              {
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  1044);
                v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v49,
                        (const char (*)[45])"GCGExecEffectHeal card not alive, card_guid:");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        (const unsigned int *)(v4 + 32));
                GCGEffectBase::getDesc[abi:cxx11](&val, this);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &val);
                std::string::~string(&val);
                common::milog::MiLogStream::~MiLogStream(&v49);
                v22 = 1;
              }
              else
              {
                v26 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
                v27 = std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
                __in = GCGSkill::getDeclaredValueByKey(v26, &v27->declared_heal_amount_key.key);
                _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
                heal_amount = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
                EffectHealHpParam::EffectHealHpParam((EffectHealHpParam *const)(v4 + 240));
                if ( *(_BYTE *)(((unsigned __int64)heal_amount >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)heal_amount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)heal_amount >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(heal_amount);
                }
                *(_DWORD *)(v4 + 240) = *heal_amount;
                std::shared_ptr<GCGCard>::operator=(
                  (std::shared_ptr<GCGCard> *const)(v4 + 248),
                  (const std::shared_ptr<GCGCard> *)(v4 + 112));
                std::shared_ptr<GCGCard>::operator=(
                  (std::shared_ptr<GCGCard> *const)(v4 + 264),
                  (const std::shared_ptr<GCGCard> *)(v4 + 144));
                if ( *(_BYTE *)(((unsigned __int64)heal_amount >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)heal_amount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)heal_amount >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(heal_amount);
                }
                if ( *heal_amount )
                {
                  v28 = GCGGameMode::getSkillLogic(game_mode);
                  GCGSkillLogic::doHealHp(v28, skill_param, (EffectHealHpParam *)(v4 + 240));
                }
                common::milog::MiLogStream::create(
                  &v48,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  1056);
                v29 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v48,
                        (const char (*)[31])"GCGExecEffectHeal heal amount:");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, heal_amount);
                v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])",target:");
                v32 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
                GCGCard::getDesc[abi:cxx11]((std::string *)&v49, v32);
                v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v31,
                        (const std::string *)&v49);
                v34 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v33, (const char (*)[9])",source:");
                v35 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
                GCGCard::getDesc[abi:cxx11](&val, v35);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, &val);
                std::string::~string(&val);
                std::string::~string(&v49);
                common::milog::MiLogStream::~MiLogStream(&v48);
                EffectHealHpParam::~EffectHealHpParam((EffectHealHpParam *const)(v4 + 240));
                v22 = 2;
              }
            }
            std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 144));
            if ( !v22 )
              goto LABEL_34;
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          v3 = 0;
        }
LABEL_34:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 176));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 112));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v4 + 80));
  }
  std::shared_ptr<data::ConfigGCGExecEffectHeal>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectHeal> *const)(v4 + 48));
  v36 = v3;
  if ( v51 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
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
  return v36;
};

// Line 1063: range 000000000E16D76E-000000000E16DB89
int32_t __cdecl GCGEffectRerollReviseCost::doEffect(
        GCGEffectRerollReviseCost *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectRerollReviseCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  int32_t *p_cost_revise; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  int32_t v14; // eax
  int __u; // [rsp+20h] [rbp-E0h] BYREF
  int __t; // [rsp+24h] [rbp-DCh] BYREF
  std::optional<int> v18; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 21 cur_revise_value:1070 64 16 36 config_effect_reroll_revise_ptr:1064";
  *(_QWORD *)(v3 + 16) = GCGEffectRerollReviseCost::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectRerollReviseCost,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectRerollReviseCost>(
         (const std::shared_ptr<data::ConfigGCGEffectRerollReviseCost> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1067);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v19,
           (const char (*)[44])"config_effect_reroll_revise_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigGCGEffectRerollReviseCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectRerollReviseCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    p_cost_revise = &v8->cost_revise;
    if ( *(_BYTE *)(((unsigned __int64)p_cost_revise >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cost_revise & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cost_revise >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_cost_revise);
    }
    *(_DWORD *)(v3 + 48) = v8->cost_revise;
    __u = 0;
    __t = *(_DWORD *)(v3 + 48) + std::optional<int>::value_or<int>(&result->reroll_times_revise_opt, &__u);
    std::optional<int>::optional<int,true>(&v18, &__t);
    if ( *(_BYTE *)(((unsigned __int64)&result->reroll_times_revise_opt >> 3) + 0x7FFF8000) )
      __asan_report_store8(&result->reroll_times_revise_opt);
    result->reroll_times_revise_opt = v18;
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1072);
    v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v19,
            (const char (*)[32])"GCGEffectRerollReviseCost  cur:");
    v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" final:");
    __u = 0;
    __t = std::optional<int>::value_or<int>(&result->reroll_times_revise_opt, &__u);
    v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &__t);
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = 0;
  }
  std::shared_ptr<data::ConfigGCGEffectRerollReviseCost>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectRerollReviseCost> *const)(v3 + 64));
  v14 = v7;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v14;
};

// Line 1080: range 000000000E16DC74-000000000E16F598
int32_t __cdecl GCGExecEffectRandomCreateCard::doEffect(
        GCGExecEffectRandomCreateCard *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  data::GCGEffectCampType *p_camp_type; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  data::GCGEffectCampType *v17; // rax
  common::milog::MiLogStream *v18; // r14
  data::GCGEffectCampType *v19; // rax
  __gnu_cxx::__normal_iterator<proto::GCGControllerValue*,std::vector<proto::GCGControllerValue> >::reference v20; // rax
  _DWORD *v21; // rdx
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::vector<std::pair<unsigned int,unsigned int>>::size_type v24; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v25; // rax
  _DWORD *v26; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::reference v27; // rdx
  unsigned int *p_second; // rax
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *v29; // rax
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *v30; // rax
  const std::vector<unsigned int>::value_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::vector<unsigned int>::reference v33; // rax
  _DWORD *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  GCGCardZone *HandZone; // rax
  common::milog::MiLogStream *v41; // rax
  uint32_t v43; // eax
  common::milog::MiLogStream *v44; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  GCGCharacterZone *CharacterZone; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  int32_t v51; // eax
  GCGSkillLogic *SkillLogic; // [rsp+10h] [rbp-390h]
  common::milog::MiLogStream *v53; // [rsp+10h] [rbp-390h]
  common::milog::MiLogStream *v54; // [rsp+10h] [rbp-390h]
  common::milog::MiLogStream *v55; // [rsp+10h] [rbp-390h]
  common::milog::MiLogStream *v56; // [rsp+10h] [rbp-390h]
  common::milog::MiLogStream *v57; // [rsp+10h] [rbp-390h]
  common::milog::MiLogStream *v58; // [rsp+10h] [rbp-390h]
  bool is_succ; // [rsp+3Fh] [rbp-361h]
  uint32_t cur_min_exist_count; // [rsp+40h] [rbp-360h]
  uint32_t owner_card_guid; // [rsp+44h] [rbp-35Ch]
  GCGControllerValue cur_controller_id; // [rsp+48h] [rbp-358h]
  uint32_t preview_card_id; // [rsp+4Ch] [rbp-354h]
  int32_t ret; // [rsp+54h] [rbp-34Ch]
  std::vector<proto::GCGControllerValue>::iterator __for_begin; // [rsp+58h] [rbp-348h] BYREF
  std::vector<proto::GCGControllerValue>::iterator __for_end; // [rsp+60h] [rbp-340h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+68h] [rbp-338h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin_1; // [rsp+70h] [rbp-330h] BYREF
  GCGGameMode *game_mode; // [rsp+78h] [rbp-328h]
  const GCGCardMgr *card_mgr; // [rsp+80h] [rbp-320h]
  std::vector<proto::GCGControllerValue> *__for_range; // [rsp+88h] [rbp-318h]
  GCGField *field; // [rsp+90h] [rbp-310h]
  std::vector<unsigned int> *__for_range_0; // [rsp+98h] [rbp-308h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_1; // [rsp+A0h] [rbp-300h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_2; // [rsp+A8h] [rbp-2F8h]
  GCGSkillPreviewContext *preview_context; // [rsp+B0h] [rbp-2F0h]
  const std::pair<unsigned int,unsigned int> *v77; // [rsp+B8h] [rbp-2E8h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *card_id_0; // [rsp+C0h] [rbp-2E0h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *card_exist_count_0; // [rsp+C8h] [rbp-2D8h]
  const std::pair<unsigned int,unsigned int> *v80; // [rsp+D0h] [rbp-2D0h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *card_id; // [rsp+D8h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *card_exist_count; // [rsp+E0h] [rbp-2C0h]
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end_0; // [rsp+E8h] [rbp-2B8h] BYREF
  common::milog::MiLogStream v84; // [rsp+F0h] [rbp-2B0h] BYREF
  std::string val; // [rsp+110h] [rbp-290h] BYREF
  char v86[624]; // [rsp+130h] [rbp-270h] BYREF
  GCGExecEffectRandomCreateCard::doEffect::<lambda(const GCGCard&)> v87; // 0:esi.4,8:rdx.8

  v4 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 48 4 18 controller_id:1115 64 4 25 final_choose_card_id:1175 80 4 15 card_count:1124 96 12 21"
                        " refresh_operator:1211 128 16 41 config_effect_random_create_card_ptr:1081 160 16 14 skill_ptr:1"
                        "088 192 16 19 owned_card_ptr:1095 224 16 21 add_new_card_ptr:1192 256 24 31 alternative_controll"
                        "er_vec:1087 320 24 31 alternative_card_count_vec:1120 384 24 28 alternative_card_id_vec:1151 448"
                        " 24 30 choose_card_id_result_vec:1160 512 24 16 place_param:1203";
  *(_QWORD *)(v4 + 16) = GCGExecEffectRandomCreateCard::doEffect;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219020288;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862734] = -234881024;
  v6[536862735] = -218959118;
  v6[536862736] = -218103808;
  v6[536862737] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectRandomCreateCard,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v4 + 128));
  if ( std::operator==<data::ConfigGCGExecEffectRandomCreateCard>(
         (const std::shared_ptr<data::ConfigGCGExecEffectRandomCreateCard> *)(v4 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v84,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1084);
    v7 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           &v84,
           (const char (*)[79])"GCGExecEffectRandomCreateCard config_effect_random_create_card_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v84);
    v8 = -1;
    goto LABEL_87;
  }
  std::vector<proto::GCGControllerValue>::vector((std::vector<proto::GCGControllerValue> *const)(v4 + 256));
  GCGEffectBase::getSkill((GCGEffectBase *const)(v4 + 160));
  if ( !std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v4 + 160), 0LL) )
  {
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    game_mode = GCGSkill::getGameMode(v9);
    v10 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    GCGSkill::getThisCard((const GCGSkill *const)(v4 + 192), (const GCGSkillUseParam *)v10);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1098);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[56])"GCGExecEffectRandomCreateCard owned_card_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v8 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      owner_card_guid = GCGCard::getGuid(v11);
      v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      cur_controller_id = GCGCard::getControllerId(v12);
      SkillLogic = GCGGameMode::getSkillLogic(game_mode);
      v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      p_camp_type = &v13->camp_type;
      if ( *(_BYTE *)(((unsigned __int64)p_camp_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_camp_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_camp_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_camp_type);
      }
      if ( GCGSkillLogic::getControllerVecByCampType(
             SkillLogic,
             cur_controller_id,
             v13->camp_type,
             (std::vector<proto::GCGControllerValue> *)(v4 + 256)) )
      {
        common::milog::MiLogStream::create(
          &v84,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1105);
        v15 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v84,
                (const char (*)[62])"GCGExecEffectRandomCreateCard get controller fail, camp_type:");
        v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        v17 = &v16->camp_type;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
      }
      else
      {
        if ( !std::vector<proto::GCGControllerValue>::empty((const std::vector<proto::GCGControllerValue> *const)(v4 + 256)) )
        {
          is_succ = 0;
          card_mgr = GCGGameMode::getCardMgr(game_mode);
          __for_range = (std::vector<proto::GCGControllerValue> *)(v4 + 256);
          __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((std::vector<proto::GCGControllerValue> *const)(v4 + 256))._M_current;
          __for_end._M_current = std::vector<proto::GCGControllerValue>::end((std::vector<proto::GCGControllerValue> *const)(v4 + 256))._M_current;
          while ( __gnu_cxx::operator!=<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>(
                    &__for_begin,
                    &__for_end) )
          {
            v20 = __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
            v21 = v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v20);
            }
            *(_DWORD *)(v4 + 48) = *v21;
            Duel = GCGGameMode::getDuel(game_mode);
            field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v4 + 48));
            std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 320));
            v23 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
            v24 = std::vector<unsigned int>::size(&v23->card_id_list);
            std::vector<std::pair<unsigned int,unsigned int>>::reserve(
              (std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 320),
              v24);
            __for_range_0 = &std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128))->card_id_list;
            __for_begin_0._M_current = std::vector<unsigned int>::begin(__for_range_0)._M_current;
            __for_begin_1._M_current = (std::pair<unsigned int,unsigned int> *)std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      &__for_begin_0,
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_1) )
            {
              v25 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              v26 = v25;
              if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v25);
              }
              *(_DWORD *)(v4 + 64) = *v26;
              *(_DWORD *)(v4 + 80) = 0;
              v3 = *(unsigned int *)(v4 + 64) | v3 & 0xFFFFFFFF00000000LL;
              v87.__card_count = (uint32_t *)(v4 + 80);
              v87.__card_id = v3;
              std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGExecEffectRandomCreateCard::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(GCGCard const&)#1},void,void>(
                (std::function<ForeachPolicy(const GCGCard&)> *const)&val,
                v87);
              GCGCardMgr::foreachFieldStageCard(
                card_mgr,
                *(GCGControllerValue *)(v4 + 48),
                (std::function<ForeachPolicy(const GCGCard&)> *)&val);
              std::function<ForeachPolicy ()(GCGCard const&)>::~function((std::function<ForeachPolicy(const GCGCard&)> *const)&val);
              __for_end_0._M_current = (std::pair<unsigned int,unsigned int> *)std::make_pair<unsigned int &,unsigned int &>(
                                                                                 (unsigned int *)(v4 + 64),
                                                                                 (unsigned int *)(v4 + 80));
              std::vector<std::pair<unsigned int,unsigned int>>::push_back(
                (std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 320),
                (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)&__for_end_0);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            if ( std::vector<std::pair<unsigned int,unsigned int>>::empty((const std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 320)) )
            {
              common::milog::MiLogStream::create(
                &v84,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                1137);
              v53 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      &v84,
                      (const char (*)[57])"GCGExecEffectRandomCreateCard not valid alternative card");
              GCGEffectBase::getDesc[abi:cxx11](&val, this);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, &val);
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v84);
            }
            else
            {
              v27 = std::vector<std::pair<unsigned int,unsigned int>>::operator[](
                      (std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 320),
                      0LL);
              p_second = &v27->second;
              if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(p_second);
              }
              cur_min_exist_count = v27->second;
              __for_range_1 = (std::vector<std::pair<unsigned int,unsigned int>> *)(v4 + 320);
              __for_begin_1._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 320))._M_current;
              __for_end_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_1)._M_current;
              while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
                        &__for_begin_1,
                        &__for_end_0) )
              {
                v80 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin_1);
                card_id = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v80);
                v29 = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v80);
                card_exist_count = v29;
                if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v29);
                }
                if ( cur_min_exist_count > *card_exist_count )
                  cur_min_exist_count = *card_exist_count;
                __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin_1);
              }
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 384));
              __for_range_2 = (std::vector<std::pair<unsigned int,unsigned int>> *)(v4 + 320);
              __for_begin_1._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 320))._M_current;
              __for_end_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_2)._M_current;
              while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
                        &__for_begin_1,
                        &__for_end_0) )
              {
                v77 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin_1);
                card_id_0 = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v77);
                v30 = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v77);
                card_exist_count_0 = v30;
                if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v30);
                }
                if ( cur_min_exist_count == *card_exist_count_0 )
                  std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v4 + 384), card_id_0);
                __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin_1);
              }
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 448));
              if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 384)) == 1 )
              {
                v31 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 384), 0LL);
                std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v4 + 448), v31);
              }
              else
              {
                GCGUtils::randomSelect<unsigned int,GCGGameMode>(
                  (const std::vector<unsigned int> *)(v4 + 384),
                  (std::vector<unsigned int> *)(v4 + 448),
                  1u,
                  game_mode);
              }
              if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 448)) == 1 )
              {
                v33 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 448), 0LL);
                v34 = v33;
                if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v33);
                }
                *(_DWORD *)(v4 + 64) = *v34;
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&val,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  1176);
                v35 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[40])"GCGExecEffectRandomCreateCard add card:");
                v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v35,
                        (const unsigned int *)(v4 + 64));
                v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v36,
                        (const char (*)[16])",controller_id:");
                common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                  v37,
                  (const proto::GCGControllerValue *)(v4 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                v38 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v38->preview_card_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v38->preview_card_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  v38 = (std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v38->preview_card_id);
                }
                preview_card_id = v38->preview_card_id;
                v39 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v39->position >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v39->position >> 3) + 0x7FFF8000) <= 3 )
                {
                  v39 = (std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v39->position);
                }
                if ( v39->position == CREATE_POSITION_HAND )
                {
                  HandZone = GCGField::getHandZone(field);
                  ret = GCGCardZone::checkCanAdd(HandZone, *(_DWORD *)(v4 + 64));
                  if ( ret )
                  {
                    common::milog::MiLogStream::create(
                      &v84,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/card_game/skill/gcg_effect.cpp",
                      "doEffect",
                      1183);
                    v41 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                            &v84,
                            (const char (*)[47])"GCGExecEffectRandomCreateCard cannot add card:");
                    v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v41,
                            (const unsigned int *)(v4 + 64));
                    GCGEffectBase::getDesc[abi:cxx11](&val, this);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, &val);
                    std::string::~string(&val);
                    common::milog::MiLogStream::~MiLogStream(&v84);
                    if ( ret == 1 && GCGGameMode::isDuringSnapshot(game_mode) )
                    {
                      preview_context = GCGGameMode::getSkillPreviewContext(game_mode);
                      GCGSkillPreviewContext::recordPreviewAddCardForFull(
                        preview_context,
                        *(_DWORD *)(v4 + 48),
                        GCG_ZONE_HAND,
                        *(_DWORD *)(v4 + 64),
                        0,
                        0,
                        preview_card_id);
                    }
                  }
                  else
                  {
                    v43 = (unsigned int)GCGField::getHandZone(field);
                    GCGCardZone::addNewCard(
                      (GCGCardZone *const)(v4 + 224),
                      v43,
                      *(GCGReason *)(v4 + 64),
                      1u,
                      owner_card_guid);
                    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 224), 0LL) )
                    {
                      common::milog::MiLogStream::create(
                        &v84,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/card_game/skill/gcg_effect.cpp",
                        "doEffect",
                        1195);
                      v44 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                              &v84,
                              (const char (*)[56])"GCGExecEffectRandomCreateCard add card failed, card_id:");
                      v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v44,
                              (const unsigned int *)(v4 + 64));
                      GCGEffectBase::getDesc[abi:cxx11](&val, this);
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, &val);
                      std::string::~string(&val);
                      common::milog::MiLogStream::~MiLogStream(&v84);
                    }
                    else
                    {
                      is_succ = 1;
                    }
                    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 224));
                  }
                }
                else
                {
                  v45 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                  if ( *(_BYTE *)(((unsigned __int64)&v45->position >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v45->position >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v45 = (std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v45->position);
                  }
                  if ( v45->position )
                  {
                    common::milog::MiLogStream::create(
                      &v84,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/card_game/skill/gcg_effect.cpp",
                      "doEffect",
                      1223);
                    v57 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                            &v84,
                            (const char (*)[48])"GCGExecEffectRandomCreateCard unknown position:");
                    v50 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    if ( *(_BYTE *)(((unsigned __int64)&v50->position >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&v50->position >> 3) + 0x7FFF8000) <= 3 )
                    {
                      v50 = (std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v50->position);
                    }
                    *(_DWORD *)(v4 + 80) = v50->position;
                    v58 = common::milog::MiLogStream::operator<<<int,(int *)0>(v57, (const int *)(v4 + 80));
                    GCGEffectBase::getDesc[abi:cxx11](&val, this);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v58, &val);
                    std::string::~string(&val);
                    common::milog::MiLogStream::~MiLogStream(&v84);
                  }
                  else
                  {
                    CharacterZone = GCGField::getCharacterZone(field);
                    *(_DWORD *)(v4 + 80) = GCGCharacterZone::getOnStageCardGuid(CharacterZone);
                    *(_DWORD *)(v4 + 512) = 0;
                    *(_DWORD *)(v4 + 516) = 0;
                    *(_DWORD *)(v4 + 520) = 0;
                    *(_DWORD *)(v4 + 524) = 0;
                    *(_DWORD *)(v4 + 528) = 0;
                    *(_DWORD *)(v4 + 532) = 0;
                    *(_DWORD *)(v4 + 512) = *(_DWORD *)(v4 + 64);
                    *(_DWORD *)(v4 + 516) = *(_DWORD *)(v4 + 48);
                    *(_DWORD *)(v4 + 520) = *(_DWORD *)(v4 + 80);
                    *(_DWORD *)(v4 + 524) = 1;
                    *(_DWORD *)(v4 + 528) = owner_card_guid;
                    *(_DWORD *)(v4 + 532) = preview_card_id;
                    *(_DWORD *)(v4 + 96) = 0;
                    *(_DWORD *)(v4 + 100) = 0;
                    *(_DWORD *)(v4 + 104) = 0;
                    *(_DWORD *)(v4 + 96) = 0;
                    if ( (unsigned int)GCGUtils::placeNewCardLimitMatchingZone(
                                         game_mode,
                                         v4 + 512,
                                         *(GCGAddCardRefreshOperator *)(v4 + 96)) )
                    {
                      common::milog::MiLogStream::create(
                        &v84,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/card_game/skill/gcg_effect.cpp",
                        "doEffect",
                        1216);
                      v47 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                              &v84,
                              (const char (*)[56])"GCGExecEffectRandomCreateCard add card failed, card_id:");
                      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v47,
                              (const unsigned int *)(v4 + 64));
                      v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v48,
                              (const char (*)[14])" skill_param:");
                      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v49,
                              (const unsigned int *)(v4 + 80));
                      GCGEffectBase::getDesc[abi:cxx11](&val, this);
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, &val);
                      std::string::~string(&val);
                      common::milog::MiLogStream::~MiLogStream(&v84);
                    }
                    else
                    {
                      is_succ = 1;
                    }
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&val,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  1172);
                v32 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[75])"GCGExecEffectRandomCreateCard result not valid, choose_card_id_result_vec:");
                common::milog::MiLogStream::operator<<<unsigned int>(v32, (const std::vector<unsigned int> *)(v4 + 448));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 448));
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 384));
            }
            std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 320));
            __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
          }
          if ( is_succ )
            v8 = 0;
          else
            v8 = -1;
          goto LABEL_85;
        }
        common::milog::MiLogStream::create(
          &v84,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1110);
        v15 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                &v84,
                (const char (*)[78])"GCGExecEffectRandomCreateCard alternative_controller_vec is empty, camp_type:");
        v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomCreateCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        v19 = &v16->camp_type;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
      }
      *(_DWORD *)(v4 + 80) = v16->camp_type;
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 80));
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v84);
      v8 = -1;
    }
LABEL_85:
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 192));
    goto LABEL_86;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/skill/gcg_effect.cpp",
    "doEffect",
    1091);
  common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
    (common::milog::MiLogStream *const)&val,
    (const char (*)[57])"GCGExecEffectRandomCreateCard doEffect skill_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  v8 = -1;
LABEL_86:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v4 + 160));
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v4 + 256));
LABEL_87:
  std::shared_ptr<data::ConfigGCGExecEffectRandomCreateCard>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectRandomCreateCard> *const)(v4 + 128));
  v51 = v8;
  if ( v86 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v51;
};

// Line 1125: range 000000000E16DB8A-000000000E16DC73
ForeachPolicy __cdecl GCGExecEffectRandomCreateCard::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(GCGCard const&)#1}::operator()(
        const GCGExecEffectRandomCreateCard::doEffect::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  uint32_t Id; // ecx
  unsigned __int64 card_count; // rax

  Id = GCGCard::getId(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Id == __closure->__card_id && GCGCard::isActivated(card) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__card_count >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__card_count);
    card_count = (unsigned __int64)__closure->__card_count;
    if ( *(_BYTE *)((card_count >> 3) + 0x7FFF8000) != 0
      && (char)((card_count & 7) + 3) >= *(_BYTE *)((card_count >> 3) + 0x7FFF8000) )
    {
      card_count = __asan_report_load4(__closure->__card_count);
    }
    ++*(_DWORD *)card_count;
  }
  return 0;
};

// Line 1235: range 000000000E16F59A-000000000E16F99A
int32_t __cdecl GCGEffectChangeCharacterReviseCost::doEffect(
        GCGEffectChangeCharacterReviseCost *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectChangeCharacterReviseCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  int32_t *p_cost_revise; // rax
  std::vector<GCGSkillPreviewUseInfo>::value_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int32_t v13; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-110h] BYREF
  std::string val; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 cost_revise:1242 64 16 51 config_effect_change_character_revise_cost_ptr:1236 96 24 27"
                        " skill_preview_use_info:1245";
  *(_QWORD *)(v3 + 16) = GCGEffectChangeCharacterReviseCost::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGEffectChangeCharacterReviseCost,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectChangeCharacterReviseCost>(
         (const std::shared_ptr<data::ConfigGCGEffectChangeCharacterReviseCost> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1239);
    v6 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v15,
           (const char (*)[61])"GCGEffectChangeCharacterReviseCost config is nullptr, param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigGCGEffectChangeCharacterReviseCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectChangeCharacterReviseCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    p_cost_revise = &v8->cost_revise;
    if ( *(_BYTE *)(((unsigned __int64)p_cost_revise >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cost_revise & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cost_revise >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_cost_revise);
    }
    *(_DWORD *)(v3 + 48) = v8->cost_revise;
    if ( *(int *)(v3 + 48) > 0 )
    {
      *(_QWORD *)(v3 + 96) = 0LL;
      *(_QWORD *)(v3 + 104) = 0LL;
      *(_DWORD *)(v3 + 112) = 0;
      *(_DWORD *)(v3 + 116) = 0;
      std::weak_ptr<GCGSkill>::operator=((std::weak_ptr<GCGSkill> *const)(v3 + 96), &this->skill_wtr_);
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 48);
      v10 = std::move<GCGSkillPreviewUseInfo &>((GCGSkillPreviewUseInfo *)(v3 + 96));
      std::vector<GCGSkillPreviewUseInfo>::push_back(
        &result->select_onstage_result.select_onstage_cost_preview_skill_vec,
        v10);
      GCGSkillPreviewUseInfo::~GCGSkillPreviewUseInfo((GCGSkillPreviewUseInfo *const)(v3 + 96));
    }
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1250);
    v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v15,
            (const char (*)[47])"GCGEffectChangeCharacterReviseCost cur revise:");
    v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = 0;
  }
  std::shared_ptr<data::ConfigGCGEffectChangeCharacterReviseCost>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectChangeCharacterReviseCost> *const)(v3 + 64));
  v13 = v7;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v13;
};

// Line 1256: range 000000000E16F99C-000000000E16FD9C
int32_t __cdecl GCGEffectChangeCharacterIncreCost::doEffect(
        GCGEffectChangeCharacterIncreCost *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectChangeCharacterIncreCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_cost_revise; // rax
  std::vector<GCGSkillPreviewUseInfo>::value_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int32_t v13; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-110h] BYREF
  std::string val; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 cost_revise:1263 64 16 15 config_ptr:1257 96 24 27 skill_preview_use_info:1266";
  *(_QWORD *)(v3 + 16) = GCGEffectChangeCharacterIncreCost::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGEffectChangeCharacterIncreCost,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectChangeCharacterIncreCost>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGEffectChangeCharacterIncreCost> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1260);
    v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v15,
           (const char (*)[60])"GCGEffectChangeCharacterIncreCost config is nullptr, param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigGCGEffectChangeCharacterIncreCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectChangeCharacterIncreCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    p_cost_revise = &v8->cost_revise;
    if ( *(_BYTE *)(((unsigned __int64)p_cost_revise >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cost_revise & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cost_revise >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_cost_revise);
    }
    *(_DWORD *)(v3 + 48) = v8->cost_revise;
    if ( *(int *)(v3 + 48) > 0 )
    {
      *(_QWORD *)(v3 + 96) = 0LL;
      *(_QWORD *)(v3 + 104) = 0LL;
      *(_DWORD *)(v3 + 112) = 0;
      *(_DWORD *)(v3 + 116) = 0;
      std::weak_ptr<GCGSkill>::operator=((std::weak_ptr<GCGSkill> *const)(v3 + 96), &this->skill_wtr_);
      *(_DWORD *)(v3 + 116) = *(_DWORD *)(v3 + 48);
      v10 = std::move<GCGSkillPreviewUseInfo &>((GCGSkillPreviewUseInfo *)(v3 + 96));
      std::vector<GCGSkillPreviewUseInfo>::push_back(
        &result->select_onstage_result.select_onstage_cost_preview_skill_vec,
        v10);
      GCGSkillPreviewUseInfo::~GCGSkillPreviewUseInfo((GCGSkillPreviewUseInfo *const)(v3 + 96));
    }
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1271);
    v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v15,
            (const char (*)[46])"GCGEffectChangeCharacterIncreCost cur revise:");
    v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = 0;
  }
  std::shared_ptr<data::ConfigGCGEffectChangeCharacterIncreCost>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectChangeCharacterIncreCost> *const)(v3 + 64));
  v13 = v7;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v13;
};

// Line 1277: range 000000000E16FD9E-000000000E17019E
int32_t __cdecl GCGEffectOpponentChangeCharacterIncreCost::doEffect(
        GCGEffectOpponentChangeCharacterIncreCost *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<data::ConfigGCGEffectOpponentChangeCharacterIncreCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_cost_revise; // rax
  std::vector<GCGSkillPreviewUseInfo>::value_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int32_t v13; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-110h] BYREF
  std::string val; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 cost_revise:1284 64 16 15 config_ptr:1278 96 24 27 skill_preview_use_info:1287";
  *(_QWORD *)(v3 + 16) = GCGEffectOpponentChangeCharacterIncreCost::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGEffectOpponentChangeCharacterIncreCost,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectOpponentChangeCharacterIncreCost>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGEffectOpponentChangeCharacterIncreCost> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1281);
    v6 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v15,
           (const char (*)[68])"GCGEffectOpponentChangeCharacterIncreCost config is nullptr, param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigGCGEffectOpponentChangeCharacterIncreCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectOpponentChangeCharacterIncreCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    p_cost_revise = &v8->cost_revise;
    if ( *(_BYTE *)(((unsigned __int64)p_cost_revise >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cost_revise & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cost_revise >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_cost_revise);
    }
    *(_DWORD *)(v3 + 48) = v8->cost_revise;
    if ( *(int *)(v3 + 48) > 0 )
    {
      *(_QWORD *)(v3 + 96) = 0LL;
      *(_QWORD *)(v3 + 104) = 0LL;
      *(_DWORD *)(v3 + 112) = 0;
      *(_DWORD *)(v3 + 116) = 0;
      std::weak_ptr<GCGSkill>::operator=((std::weak_ptr<GCGSkill> *const)(v3 + 96), &this->skill_wtr_);
      *(_DWORD *)(v3 + 116) = *(_DWORD *)(v3 + 48);
      v10 = std::move<GCGSkillPreviewUseInfo &>((GCGSkillPreviewUseInfo *)(v3 + 96));
      std::vector<GCGSkillPreviewUseInfo>::push_back(
        &result->select_onstage_result.select_onstage_cost_preview_skill_vec,
        v10);
      GCGSkillPreviewUseInfo::~GCGSkillPreviewUseInfo((GCGSkillPreviewUseInfo *const)(v3 + 96));
    }
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1292);
    v11 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v15,
            (const char (*)[54])"GCGEffectOpponentChangeCharacterIncreCost cur revise:");
    v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = 0;
  }
  std::shared_ptr<data::ConfigGCGEffectOpponentChangeCharacterIncreCost>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectOpponentChangeCharacterIncreCost> *const)(v3 + 64));
  v13 = v7;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v13;
};

// Line 1298: range 000000000E1701A0-000000000E170943
int32_t __cdecl GCGExecEffectChangeCardShowTokenVar::doEffect(
        GCGExecEffectChangeCardShowTokenVar *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCampType *p_camp_type; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  data::GCGEffectTargetChooseType *p_choose_type; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  GCGSkillLogic *SkillLogic; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  int32_t v23; // eax
  GCGGameMode *game_mode; // [rsp+20h] [rbp-170h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *delta_card_value; // [rsp+30h] [rbp-160h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+38h] [rbp-158h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-150h] BYREF
  std::string val; // [rsp+60h] [rbp-130h] BYREF
  char v29[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 22 cur_controller_id:1318 64 16 49 config_effect_change_card_show_token_var_ptr:1299 96 1"
                        "6 14 skill_ptr:1305 128 16 19 owner_card_ptr:1312 160 32 21 change_var_param:1321";
  *(_QWORD *)(v3 + 16) = GCGExecEffectChangeCardShowTokenVar::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectChangeCardShowTokenVar,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectChangeCardShowTokenVar>(
         (const std::shared_ptr<data::ConfigGCGExecEffectChangeCardShowTokenVar> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1302);
    v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v27,
           (const char (*)[62])"GCGExecEffectChangeCardShowTokenVar config is nullptr, param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1308);
      common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[63])"GCGExecEffectChangeCardShowTokenVar doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1315);
        v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v27,
                (const char (*)[62])"GCGExecEffectChangeCardShowTokenVar owner_card_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 48) = GCGCard::getControllerId(v11);
        v12 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        __in = GCGSkill::getDeclaredValueByKey(v12, &v13->declared_output_key.key);
        std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        delta_card_value = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        *(_QWORD *)(v3 + 160) = 0LL;
        *(_QWORD *)(v3 + 168) = 0LL;
        *(_QWORD *)(v3 + 176) = 0LL;
        *(_QWORD *)(v3 + 184) = 0LL;
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_camp_type = &v14->camp_type;
        if ( *(_BYTE *)(((unsigned __int64)p_camp_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_camp_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_camp_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(p_camp_type);
        }
        *(_DWORD *)(v3 + 160) = v14->camp_type;
        v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v16->target_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v16->target_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v16 = (std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->target_type);
        }
        *(_DWORD *)(v3 + 164) = v16->target_type;
        v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_choose_type = &v17->choose_type;
        if ( *(_BYTE *)(((unsigned __int64)p_choose_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_choose_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_choose_type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_choose_type);
        }
        *(_DWORD *)(v3 + 168) = v17->choose_type;
        *(_DWORD *)(v3 + 176) = 0;
        *(_BYTE *)(v3 + 180) = 1;
        v19 = std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v19->operator_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v19->operator_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v19 = (std::__shared_ptr_access<data::ConfigGCGExecEffectChangeCardShowTokenVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v19->operator_type);
        }
        *(_DWORD *)(v3 + 184) = v19->operator_type;
        if ( *(_BYTE *)(((unsigned __int64)delta_card_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)delta_card_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_card_value >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(delta_card_value);
        }
        *(_DWORD *)(v3 + 188) = *delta_card_value;
        SkillLogic = GCGGameMode::getSkillLogic(game_mode);
        GCGSkillLogic::changeCardVarHandler(
          SkillLogic,
          *(GCGControllerValue *)(v3 + 48),
          (const EffectChangeCardVarParam *)(v3 + 160),
          skill_param);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1331);
        v21 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                &v27,
                (const char (*)[72])"GCGExecEffectChangeCardShowTokenVar change card var, cur_controller_id:");
        v22 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v21,
                (const proto::GCGControllerValue *)(v3 + 48));
        GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v7 = 0;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectChangeCardShowTokenVar>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectChangeCardShowTokenVar> *const)(v3 + 64));
  v23 = v7;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v23;
};

// Line 1336: range 000000000E170944-000000000E1717E7
int32_t __cdecl GCGExecEffectOnStageCharacterUseSkill::doEffect(
        GCGExecEffectOnStageCharacterUseSkill *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectOnStageCharacterUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  uint32_t *p_skill_id; // rax
  uint32_t v21; // eax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  signed int ActionMgr; // eax
  uint32_t v29; // r14d
  std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // r14
  unsigned __int64 v33; // rax
  void (__fastcall *v34)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *); // r15
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  GCGControllerValue v38; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  GCGSkillLogic *SkillLogic; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  int32_t v45; // eax
  GCGGameMode *game_mode; // [rsp+20h] [rbp-1E0h]
  GCGField *field; // [rsp+28h] [rbp-1D8h]
  std::shared_ptr<GCGPhaseBase> p_phase_ptr; // [rsp+30h] [rbp-1D0h] BYREF
  std::shared_ptr<GCGActionBase> v49; // [rsp+40h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v50; // [rsp+50h] [rbp-1B0h] BYREF
  std::string val; // [rsp+70h] [rbp-190h] BYREF
  char v52[368]; // [rsp+90h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 22 cur_controller_id:1356 48 4 17 use_skill_id:1371 64 16 50 config_effect_onstage_chara"
                        "cter_use_skill_ptr:1337 96 16 19 this_skill_ptr:1343 128 16 19 owner_card_ptr:1350 160 16 21 ons"
                        "tage_card_ptr:1359 192 16 18 use_skill_ptr:1372 224 16 18 cur_phase_ptr:1379 256 16 15 action_pt"
                        "r:1385 288 16 30 trigger_windows_param_ptr:1395";
  *(_QWORD *)(v3 + 16) = GCGExecEffectOnStageCharacterUseSkill::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectOnStageCharacterUseSkill,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectOnStageCharacterUseSkill>(
         (const std::shared_ptr<data::ConfigGCGExecEffectOnStageCharacterUseSkill> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1340);
    v6 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v50,
           (const char (*)[64])"GCGExecEffectOnStageCharacterUseSkill config is nullptr, param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1346);
      common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[70])"GCGExecEffectOnStageCharacterUseSkill doEffect this_skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1353);
        v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v50,
                (const char (*)[64])"GCGExecEffectOnStageCharacterUseSkill owner_card_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v50);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 32) = GCGCard::getControllerId(v11);
        Duel = GCGGameMode::getDuel(game_mode);
        field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v3 + 32));
        GCGField::getCharacterZone(field);
        GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 160));
        if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 160), 0LL)
          || (v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160)),
              !GCGCard::isAlive(v13)) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1362);
          v15 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                  &v50,
                  (const char (*)[68])"GCGExecEffectOnStageCharacterUseSkill onstage_card_ptr is not valid");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v50);
          v7 = -1;
        }
        else
        {
          v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( !GCGUtils::isCanAttack(v16) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1367);
            v17 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                    &v50,
                    (const char (*)[59])"GCGExecEffectOnStageCharacterUseSkill is can attack fail. ");
            v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            GCGCard::getDesc[abi:cxx11](&val, v18);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v50);
            v7 = -1;
          }
          else
          {
            v19 = std::__shared_ptr_access<data::ConfigGCGExecEffectOnStageCharacterUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectOnStageCharacterUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            p_skill_id = &v19->skill_id;
            if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(p_skill_id);
            }
            *(_DWORD *)(v3 + 48) = v19->skill_id;
            v21 = (unsigned int)std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            GCGCard::getSkill((GCGCard *const)(v3 + 192), v21);
            if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 192), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                1375);
              v22 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      &v50,
                      (const char (*)[44])"GCGExecEffectOnStageCharacterUseSkill card:");
              v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              GCGCard::getDesc[abi:cxx11](&val, v23);
              v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &val);
              v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v24,
                      (const char (*)[17])" not find skill:");
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" and escapte");
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v50);
              v7 = 0;
            }
            else
            {
              GCGGameMode::getPhaseMgr(game_mode);
              GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v3 + 224));
              if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v3 + 224), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  1382);
                v27 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                        &v50,
                        (const char (*)[63])"GCGExecEffectOnStageCharacterUseSkill cur_phase_ptr is nullptr");
                GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &val);
                std::string::~string(&val);
                common::milog::MiLogStream::~MiLogStream(&v50);
                v7 = -1;
              }
              else
              {
                ActionMgr = (unsigned int)GCGGameMode::getActionMgr(game_mode);
                GCGActionMgr::createAction<GCGActionUseSkill>(
                  (GCGActionMgr *const)(v3 + 256),
                  (GCGControllerValue)ActionMgr);
                if ( std::operator==<GCGActionUseSkill>((const std::shared_ptr<GCGActionUseSkill> *)(v3 + 256), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&val,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    1388);
                  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[19])"createAction fail.");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                  v7 = -1;
                }
                else
                {
                  v29 = *(_DWORD *)(v3 + 48);
                  v30 = std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  if ( *(_BYTE *)(((unsigned __int64)&v30->skill_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v30->skill_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v30 = (std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v30->skill_id);
                  }
                  v30->skill_id = v29;
                  v31 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                  v32 = v31;
                  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v31);
                  v33 = (unsigned __int64)(v32->_vptr_GCGPhaseBase + 5);
                  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v32->_vptr_GCGPhaseBase + 5);
                  v34 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *))v33;
                  std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionUseSkill,void>(
                    &v49,
                    (const std::shared_ptr<GCGActionUseSkill> *)(v3 + 256));
                  v34(v32, &v49);
                  std::shared_ptr<GCGActionBase>::~shared_ptr(&v49);
                  common::tools::perf::make_shared<GCGSkillUseParam>();
                  v35 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                  if ( *(_BYTE *)(((unsigned __int64)&v35->trigger_type >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v35->trigger_type >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v35 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v35->trigger_type);
                  }
                  v35->trigger_type = GCG_TRIGGER_ACTION_POST;
                  v36 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                  std::shared_ptr<GCGCard>::operator=(
                    &v36->source_card_ptr,
                    (const std::shared_ptr<GCGCard> *)(v3 + 160));
                  v37 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                  std::shared_ptr<GCGSkill>::operator=(&v37->skill_ptr, (const std::shared_ptr<GCGSkill> *)(v3 + 192));
                  v38 = *(_DWORD *)(v3 + 32);
                  v39 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
                  if ( *(_BYTE *)(((unsigned __int64)&v39->controller_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v39->controller_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v39 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v39->controller_id);
                  }
                  v39->controller_id = v38;
                  SkillLogic = GCGGameMode::getSkillLogic(game_mode);
                  std::shared_ptr<GCGSkillUseParam>::shared_ptr(
                    (std::shared_ptr<GCGSkillUseParam> *const)&v49,
                    (const std::shared_ptr<GCGSkillUseParam> *)(v3 + 288));
                  std::shared_ptr<GCGPhaseBase>::shared_ptr(
                    &p_phase_ptr,
                    (const std::shared_ptr<GCGPhaseBase> *)(v3 + 224));
                  GCGSkillLogic::trigger(SkillLogic, &p_phase_ptr, GCG_TRIGGER_ACTION_POST, (GCGSkillUseParamPtr *)&v49);
                  std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_phase_ptr);
                  std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)&v49);
                  common::milog::MiLogStream::create(
                    &v50,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    1401);
                  v41 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v50,
                          (const char (*)[49])"GCGExecEffectOnStageCharacterUseSkill use skill:");
                  v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v41,
                          (const unsigned int *)(v3 + 48));
                  v43 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          v42,
                          (const char (*)[21])", cur_controller_id:");
                  v44 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                          v43,
                          (const proto::GCGControllerValue *)(v3 + 32));
                  GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, &val);
                  std::string::~string(&val);
                  common::milog::MiLogStream::~MiLogStream(&v50);
                  v7 = 0;
                  std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 288));
                }
                std::shared_ptr<GCGActionUseSkill>::~shared_ptr((std::shared_ptr<GCGActionUseSkill> *const)(v3 + 256));
              }
              std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v3 + 224));
            }
            std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 192));
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectOnStageCharacterUseSkill>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectOnStageCharacterUseSkill> *const)(v3 + 64));
  v45 = v7;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v45;
};

// Line 1406: range 000000000E1717E8-000000000E17207A
int32_t __cdecl GCGEffectBeingHitDamageRevise::doEffect(
        GCGEffectBeingHitDamageRevise *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  GCGEffectElementType damage_element_type; // r15d
  std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  data::GCGEffectDamageElementType effect_element_type; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  int32_t v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-110h] BYREF
  int32_t damage; // [rsp+24h] [rbp-10Ch] BYREF
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+28h] [rbp-108h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *damage_revise; // [rsp+30h] [rbp-100h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-F0h] BYREF
  std::string val; // [rsp+60h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 46 config_effect_being_hit_damage_revise_ptr:1407 64 16 14 skill_ptr:1413 96 16 19 owner_card_ptr:1419";
  *(_QWORD *)(v3 + 16) = GCGEffectBeingHitDamageRevise::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectBeingHitDamageRevise,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGEffectBeingHitDamageRevise>(
         (const std::shared_ptr<data::ConfigGCGEffectBeingHitDamageRevise> *)(v3 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1410);
    v6 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v32,
           (const char (*)[74])"GCGEffectBeingHitDamageRevise config_effect_damage_revise_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 64));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1416);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[57])"GCGEffectBeingHitDamageRevise doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 96), (const GCGSkillUseParam *)v8);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1422);
        v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v32,
               (const char (*)[56])"GCGEffectBeingHitDamageRevise owner_card_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v32);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)skill_param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&skill_param->damage_element_type);
        }
        damage_element_type = skill_param->damage_element_type;
        v11 = std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v11->effect_element_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v11 = (std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->effect_element_type);
        }
        effect_element_type = v11->effect_element_type;
        v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( !GCGUtils::isDamageElementMatch(v13, effect_element_type, damage_element_type) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1427);
          v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[43])"GCGEffectBeingHitDamageRevise damage type:");
          if ( *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)skill_param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_param->damage_element_type >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&skill_param->damage_element_type);
          }
          v27 = skill_param->damage_element_type;
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v27);
          v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v15,
                  (const char (*)[24])", effect limit element:");
          v17 = std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&v17->effect_element_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v17->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
          {
            v17 = (std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v17->effect_element_type);
          }
          damage = v17->effect_element_type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)&damage);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
        else
        {
          v18 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v19 = std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectBeingHitDamageRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          __in = GCGSkill::getDeclaredValueByKey(v18, &v19->declared_output_key.key);
          _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
          v20 = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
          damage_revise = v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          damage = *damage_revise;
          if ( TraitSkillResult<(GCGEffectCategoryType)11,int>::addSkillResult(result, &damage) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1434);
            v21 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    &v32,
                    (const char (*)[53])"GCGEffectBeingHitDamageRevise failed, damage_revise:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, damage_revise);
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v32);
            v7 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1437);
            v23 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v32,
                    (const char (*)[35])"GCGEffectBeingHitDamageRevise cur:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, damage_revise);
            GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v32);
            v7 = 0;
          }
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
  }
  std::shared_ptr<data::ConfigGCGEffectBeingHitDamageRevise>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectBeingHitDamageRevise> *const)(v3 + 32));
  v25 = v7;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v25;
};

// Line 1443: range 000000000E17207C-000000000E172AC0
int32_t __cdecl GCGExecEffectDestroyCard::doEffect(
        GCGExecEffectDestroyCard *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCreatePositionType *p_position; // rax
  GCGDuel *v16; // rax
  GCGCardZone *HandZone; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t *p_card_id; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  data::GCGEffectCreatePositionType *v27; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v28; // rax
  uint32_t *v29; // rdx
  GCGControllerValue v30; // r14d
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  uint32_t *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rdx
  data::GCGEffectCreatePositionType *v43; // rax
  int32_t v44; // eax
  uint32_t param; // [rsp+2Ch] [rbp-144h]
  GCGGameMode *game_mode; // [rsp+30h] [rbp-140h]
  GCGField *field; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v48; // [rsp+40h] [rbp-130h] BYREF
  std::string val; // [rsp+60h] [rbp-110h] BYREF
  char v50[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 25 target_controller_id:1463 64 4 22 cur_controller_id:1464 80 4 8 ret:1493 96 16 35 conf"
                        "ig_effect_destroy_card_ptr:1444 128 16 14 skill_ptr:1450 160 16 19 owner_card_ptr:1457";
  *(_QWORD *)(v3 + 16) = GCGExecEffectDestroyCard::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectDestroyCard,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 96));
  if ( std::operator==<data::ConfigGCGExecEffectDestroyCard>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectDestroyCard> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1447);
    v6 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v48,
           (const char (*)[68])"GCGExecEffectDestroyCard config_effect_destroy_card_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v7 = -1;
    goto LABEL_40;
  }
  GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 128));
  if ( !std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 128)) )
  {
    v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    game_mode = GCGSkill::getGameMode(v8);
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    GCGSkill::getThisCard((const GCGSkill *const)(v3 + 160), (const GCGSkillUseParam *)v9);
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1460);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[57])"GCGExecEffectDestroyCard doEffect owner_card_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
LABEL_38:
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
      goto LABEL_39;
    }
    *(_DWORD *)(v3 + 48) = 0;
    v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    *(_DWORD *)(v3 + 64) = GCGCard::getControllerId(v10);
    v11 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v11->camp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->camp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v11 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->camp_type);
    }
    if ( v11->camp_type == CAMP_ENEMY )
    {
      Duel = GCGGameMode::getDuel(game_mode);
      *(_DWORD *)(v3 + 48) = GCGDuel::getOtherControllerId(Duel, (GCGControllerValue)*(_DWORD *)(v3 + 64));
    }
    else
    {
      v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v13->camp_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->camp_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v13 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->camp_type);
      }
      if ( v13->camp_type != CAMP_FRIENDLY )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1475);
        common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[54])"GCGExecEffectDestroyCard not support unkown camp_type");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = -1;
        goto LABEL_38;
      }
      *(_DWORD *)(v3 + 48) = *(_DWORD *)(v3 + 64);
    }
    v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    p_position = &v14->position;
    if ( *(_BYTE *)(((unsigned __int64)p_position >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_position & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_position >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_position);
    }
    if ( v14->position == CREATE_POSITION_HAND )
    {
      v16 = GCGGameMode::getDuel(game_mode);
      field = GCGDuel::getField(v16, (GCGControllerValue)*(_DWORD *)(v3 + 48));
      HandZone = GCGField::getHandZone(field);
      v18 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      p_card_id = &v18->card_id;
      if ( *(_BYTE *)(((unsigned __int64)p_card_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_card_id);
      }
      GCGCardZone::delCardById(HandZone, v18->card_id, GCG_REASON_EFFECT, 1);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1482);
      v20 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[44])"GCGExecEffectDestroyCard cur_controller_id:");
      v21 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v20,
              (const proto::GCGControllerValue *)(v3 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v21,
              (const char (*)[23])" target_controller_id:");
      v23 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v22,
              (const proto::GCGControllerValue *)(v3 + 48));
      v24 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v23,
              (const char (*)[29])" getHandZone() destroy card:");
      v25 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &v25->card_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = 0;
    }
    else
    {
      v26 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v27 = &v26->position;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v27);
      }
      if ( v26->position )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1500);
        v41 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[46])"GCGExecEffectDestroyCard not suppert postion:");
        v42 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v43 = &v42->position;
        if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v43);
        }
        *(_DWORD *)(v3 + 80) = v42->position;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = -1;
      }
      else
      {
        param = 0;
        if ( !std::vector<unsigned int>::empty(&skill_param->param_guid_vec) )
        {
          v28 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&skill_param->param_guid_vec, 0LL);
          v29 = v28;
          if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v28);
          }
          param = *v29;
        }
        v30 = *(_DWORD *)(v3 + 48);
        v31 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v32 = &v31->card_id;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        *(_DWORD *)(v3 + 80) = GCGUtils::destroyCardLimitMatchingZone(
                                 game_mode,
                                 v31->card_id,
                                 v30,
                                 param,
                                 GCG_REASON_EFFECT);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1494);
        v33 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[44])"GCGExecEffectDestroyCard cur_controller_id:");
        v34 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v33,
                (const proto::GCGControllerValue *)(v3 + 64));
        v35 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v34,
                (const char (*)[23])",target_controller_id:");
        v36 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v35,
                (const proto::GCGControllerValue *)(v3 + 48));
        v37 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v36,
                (const char (*)[21])",stage destroy card:");
        v38 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &v38->card_id);
        v40 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v39, (const char (*)[6])",ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v40, (const int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = *(_DWORD *)(v3 + 80);
      }
    }
    goto LABEL_38;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/skill/gcg_effect.cpp",
    "doEffect",
    1453);
  common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
    (common::milog::MiLogStream *const)&val,
    (const char (*)[52])"GCGExecEffectDestroyCard doEffect skill_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  v7 = -1;
LABEL_39:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 128));
LABEL_40:
  std::shared_ptr<data::ConfigGCGExecEffectDestroyCard>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectDestroyCard> *const)(v3 + 96));
  v44 = v7;
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v44;
};

// Line 1508: range 000000000E172AC2-000000000E173782
int32_t __cdecl GCGExecEffectDestroyModifyCard::doEffect(
        GCGExecEffectDestroyModifyCard *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  uint32_t *p_card_id; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  data::GCGChooseTargetCharaterType *p_choose_charater_type; // rax
  GCGDuel *v19; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  data::GCGChooseTargetCharaterType *v22; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  data::GCGEffectCampType camp_type; // r14d
  common::milog::MiLogStream *v25; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v26; // rax
  _DWORD *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v32; // rax
  GCGCard *v33; // rax
  GCGModifyZone *ModifyZone; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int32_t v41; // eax
  data::GCGChooseTargetCharaterType target_charater_type; // [rsp+14h] [rbp-1ECh]
  unsigned int Id; // [rsp+34h] [rbp-1CCh] BYREF
  GCGControllerValue cur_controller_id; // [rsp+38h] [rbp-1C8h]
  data::GCGChooseTargetCharaterType choose_charater_type; // [rsp+3Ch] [rbp-1C4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-1C0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-1B8h] BYREF
  GCGGameMode *game_mode; // [rsp+50h] [rbp-1B0h]
  GCGField *field; // [rsp+58h] [rbp-1A8h]
  GCGCardMgr *card_mgr; // [rsp+60h] [rbp-1A0h]
  std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-198h]
  common::milog::MiLogStream v52; // [rsp+70h] [rbp-190h] BYREF
  std::string val; // [rsp+90h] [rbp-170h] BYREF
  char v54[336]; // [rsp+B0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 25 target_controller_id:1528 64 4 19 target_card_id:1543 80 4 14 card_guid:1555 96 16 42 "
                        "config_effect_destroy_modify_card_ptr:1509 128 16 14 skill_ptr:1515 160 16 19 owner_card_ptr:152"
                        "2 192 16 22 modified_card_ptr:1557 224 24 30 alternative_card_guid_vec:1548";
  *(_QWORD *)(v3 + 16) = GCGExecEffectDestroyModifyCard::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectDestroyModifyCard,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 96));
  if ( std::operator==<data::ConfigGCGExecEffectDestroyModifyCard>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectDestroyModifyCard> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1512);
    v6 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
           &v52,
           (const char (*)[81])"GCGExecEffectDestroyModifyCard config_effect_destroy_modify_card_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = -1;
    goto LABEL_48;
  }
  GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 128));
  if ( !std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 128)) )
  {
    v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    game_mode = GCGSkill::getGameMode(v8);
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    GCGSkill::getThisCard((const GCGSkill *const)(v3 + 160), (const GCGSkillUseParam *)v9);
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1525);
      v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v52,
              (const char (*)[63])"GCGExecEffectDestroyModifyCard doEffect owner_card_ptr is null");
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v7 = -1;
LABEL_46:
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
      goto LABEL_47;
    }
    *(_DWORD *)(v3 + 48) = 0;
    v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    cur_controller_id = GCGCard::getControllerId(v11);
    v12 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v12->camp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->camp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v12 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->camp_type);
    }
    if ( v12->camp_type == CAMP_ENEMY )
    {
      Duel = GCGGameMode::getDuel(game_mode);
      *(_DWORD *)(v3 + 48) = GCGDuel::getOtherControllerId(Duel, cur_controller_id);
    }
    else
    {
      v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v14->camp_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->camp_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v14 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->camp_type);
      }
      if ( v14->camp_type != CAMP_FRIENDLY )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1540);
        common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[60])"GCGExecEffectDestroyModifyCard not support unkown camp_type");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = -1;
        goto LABEL_46;
      }
      *(_DWORD *)(v3 + 48) = cur_controller_id;
    }
    v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    p_card_id = &v15->card_id;
    if ( *(_BYTE *)(((unsigned __int64)p_card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_card_id);
    }
    *(_DWORD *)(v3 + 64) = v15->card_id;
    v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    p_choose_charater_type = &v17->choose_charater_type;
    if ( *(_BYTE *)(((unsigned __int64)p_choose_charater_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_choose_charater_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_choose_charater_type >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(p_choose_charater_type);
    }
    choose_charater_type = v17->choose_charater_type;
    v19 = GCGGameMode::getDuel(game_mode);
    field = GCGDuel::getField(v19, (GCGControllerValue)*(_DWORD *)(v3 + 48));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 224));
    SkillLogic = GCGGameMode::getSkillLogic(game_mode);
    v21 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    v22 = &v21->choose_charater_type;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v22);
    }
    target_charater_type = v21->choose_charater_type;
    v23 = std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v23->camp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v23->camp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v23 = (std::__shared_ptr_access<data::ConfigGCGExecEffectDestroyModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v23->camp_type);
    }
    camp_type = v23->camp_type;
    std::shared_ptr<GCGCard>::shared_ptr(
      (std::shared_ptr<GCGCard> *const)(v3 + 192),
      (const std::shared_ptr<GCGCard> *)(v3 + 160));
    LOBYTE(camp_type) = GCGSkillLogic::getTargetCardVec(
                          SkillLogic,
                          skill_param,
                          (GCGCardPtr *)(v3 + 192),
                          camp_type,
                          target_charater_type,
                          cur_controller_id,
                          (std::vector<unsigned int> *)(v3 + 224)) != 0;
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
    if ( (_BYTE)camp_type )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1551);
      v25 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v52,
              (const char (*)[55])"GCGExecEffectDestroyModifyCard getTargetCardVec failed");
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v7 = -1;
    }
    else
    {
      card_mgr = GCGGameMode::getCardMgr(game_mode);
      __for_range = (std::vector<unsigned int> *)(v3 + 224);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 224))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 224))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v26 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        *(_DWORD *)(v3 + 80) = *v27;
        GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 192), card_mgr, *(_DWORD *)(v3 + 80));
        if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 192)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1560);
          v28 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[58])"GCGExecEffectDestroyModifyCard find card fail, card_guid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
        else
        {
          v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          if ( !GCGCard::isAlive(v29)
            || (v30 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192)),
                GCGCard::getCardType(v30) != GCG_CARD_CHARACTER) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1565);
            v32 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[78])"GCGExecEffectDestroyModifyCard card is not character or not alive, card_guid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 80));
          }
          else
          {
            v33 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            ModifyZone = GCGCard::getModifyZone(v33);
            GCGCardZone::delCardById(ModifyZone, *(_DWORD *)(v3 + 64), GCG_REASON_EFFECT, 1);
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1569);
            v35 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[53])"GCGExecEffectDestroyModifyCard target_controller_id:");
            v36 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                    v35,
                    (const proto::GCGControllerValue *)(v3 + 48));
            v37 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v36,
                    (const char (*)[15])" onstage card:");
            v38 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            Id = GCGCard::getId(v38);
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &Id);
            v40 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v39,
                    (const char (*)[27])" modify zone destroy card:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v3 + 64));
          }
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v7 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
    goto LABEL_46;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/skill/gcg_effect.cpp",
    "doEffect",
    1518);
  common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
    (common::milog::MiLogStream *const)&val,
    (const char (*)[58])"GCGExecEffectDestroyModifyCard doEffect skill_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  v7 = -1;
LABEL_47:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 128));
LABEL_48:
  std::shared_ptr<data::ConfigGCGExecEffectDestroyModifyCard>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectDestroyModifyCard> *const)(v3 + 96));
  v41 = v7;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return v41;
};

// Line 1577: range 000000000E173990-000000000E174677
int32_t __cdecl GCGExecEffectTransferEnergy::doEffect(
        GCGExecEffectTransferEnergy *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCampType *p_source_camp; // rax
  data::GCGEffectCampType source_camp; // r14d
  common::milog::MiLogStream *v17; // r14
  GCGSkillLogic *v18; // r15
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  data::GCGEffectCampType target_camp; // r14d
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v28; // rax
  unsigned int *v29; // r14
  std::vector<unsigned int>::iterator v30; // rax
  GCGSkillLogic *v31; // rdi
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  int32_t v36; // eax
  data::GCGChooseTargetCharaterType target_charater_type; // [rsp+14h] [rbp-22Ch]
  data::GCGChooseTargetCharaterType target_charater_typea; // [rsp+14h] [rbp-22Ch]
  GCGControllerValue cur_controller_id; // [rsp+30h] [rbp-210h]
  int32_t ret; // [rsp+34h] [rbp-20Ch]
  int32_t reta; // [rsp+34h] [rbp-20Ch]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+38h] [rbp-208h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __first; // [rsp+40h] [rbp-200h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __last; // [rsp+48h] [rbp-1F8h] BYREF
  GCGGameMode *game_mode; // [rsp+50h] [rbp-1F0h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *charge_amount; // [rsp+60h] [rbp-1E0h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+68h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-1D0h] BYREF
  std::string val; // [rsp+90h] [rbp-1B0h] BYREF
  char v52[400]; // [rsp+B0h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 23 source_remove_func:1634 64 8 23 target_remove_func:1636 96 16 38 config_effect_transfe"
                        "r_energy_ptr:1578 128 16 14 skill_ptr:1584 160 16 19 owned_card_ptr:1591 192 16 16 remove_func:1"
                        "617 224 24 25 source_card_guid_vec:1599 288 24 25 target_card_guid_vec:1606";
  *(_QWORD *)(v3 + 16) = GCGExecEffectTransferEnergy::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectTransferEnergy,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 96));
  if ( std::operator==<data::ConfigGCGExecEffectTransferEnergy>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectTransferEnergy> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1581);
    v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v50,
           (const char (*)[63])"GCGExecEffectTransferEnergy config_effect_heal_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 128));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1587);
      common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[55])"GCGExecEffectTransferEnergy doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 160), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1594);
        v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v50,
                (const char (*)[64])"GCGExecEffectTransferEnergy fail for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v50);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        cur_controller_id = GCGCard::getControllerId(v11);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 224));
        SkillLogic = GCGGameMode::getSkillLogic(game_mode);
        v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v13->source_character >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->source_character >> 3) + 0x7FFF8000) <= 3 )
        {
          v13 = (std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->source_character);
        }
        target_charater_type = v13->source_character;
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        p_source_camp = &v14->source_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_source_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_source_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_source_camp);
        }
        source_camp = v14->source_camp;
        std::shared_ptr<GCGCard>::shared_ptr(
          (std::shared_ptr<GCGCard> *const)(v3 + 192),
          (const std::shared_ptr<GCGCard> *)(v3 + 160));
        ret = GCGSkillLogic::getTargetCardVec(
                SkillLogic,
                skill_param,
                (GCGCardPtr *)(v3 + 192),
                source_camp,
                target_charater_type,
                cur_controller_id,
                (std::vector<unsigned int> *)(v3 + 224));
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1603);
          v17 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v50,
                  (const char (*)[61])"GCGExecEffectTransferEnergy source getTargetCardVec failed, ");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v50);
          v7 = ret;
        }
        else
        {
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 288));
          v18 = GCGGameMode::getSkillLogic(game_mode);
          v19 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v19->target_character >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v19->target_character >> 3) + 0x7FFF8000) <= 3 )
          {
            v19 = (std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v19->target_character);
          }
          target_charater_typea = v19->target_character;
          v20 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          p_target_camp = &v20->target_camp;
          if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(p_target_camp);
          }
          target_camp = v20->target_camp;
          std::shared_ptr<GCGCard>::shared_ptr(
            (std::shared_ptr<GCGCard> *const)(v3 + 192),
            (const std::shared_ptr<GCGCard> *)(v3 + 160));
          reta = GCGSkillLogic::getTargetCardVec(
                   v18,
                   skill_param,
                   (GCGCardPtr *)(v3 + 192),
                   target_camp,
                   target_charater_typea,
                   cur_controller_id,
                   (std::vector<unsigned int> *)(v3 + 288));
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
          if ( reta )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1610);
            v23 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v50,
                    (const char (*)[61])"GCGExecEffectTransferEnergy target getTargetCardVec failed, ");
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v50);
            v7 = reta;
          }
          else
          {
            v24 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v25 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            __in = GCGSkill::getDeclaredValueByKey(v24, &v25->declared_output_key.key);
            _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
            charge_amount = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
            v26 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v26->limit_element_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v26->limit_element_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v26 = (std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v26->limit_element_type);
            }
            if ( v26->limit_element_type != GCG_ELEMENT_ANY )
            {
              *(_QWORD *)(v3 + 192) = v3 + 96;
              *(_QWORD *)(v3 + 200) = game_mode;
              M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 224))._M_current;
              v28._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 224))._M_current;
              *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 32) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,GCGExecEffectTransferEnergy::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(unsigned int)#1}>(v28, (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current, *(GCGExecEffectTransferEnergy::doEffect::<lambda(uint32_t)> *)(v3 + 192));
              __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 224))._M_current;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                &__last,
                &__i);
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                &__first,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 32));
              std::vector<unsigned int>::erase((std::vector<unsigned int> *const)(v3 + 224), __first, __last);
              v29 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 288))._M_current;
              v30._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 288))._M_current;
              *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,GCGExecEffectTransferEnergy::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(unsigned int)#1}>(v30, (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v29, *(GCGExecEffectTransferEnergy::doEffect::<lambda(uint32_t)> *)(v3 + 192));
              __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 288))._M_current;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                &__last,
                &__i);
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                &__first,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64));
              std::vector<unsigned int>::erase((std::vector<unsigned int> *const)(v3 + 288), __first, __last);
            }
            v31 = GCGGameMode::getSkillLogic(game_mode);
            if ( *(_BYTE *)(((unsigned __int64)charge_amount >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)charge_amount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)charge_amount >> 3)
                                                                              + 0x7FFF8000) )
            {
              v31 = (GCGSkillLogic *)charge_amount;
              __asan_report_load4(charge_amount);
            }
            GCGSkillLogic::transferEnergy(
              v31,
              (const std::vector<unsigned int> *)(v3 + 224),
              (const std::vector<unsigned int> *)(v3 + 288),
              *charge_amount);
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1640);
            v32 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v50,
                    (const char (*)[49])"GCGExecEffectTransferEnergy doEffect succ, from:");
            v33 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v32,
                    (const std::vector<unsigned int> *)(v3 + 224));
            v34 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v33, (const char (*)[5])" to:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v34,
                    (const std::vector<unsigned int> *)(v3 + 288));
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v50);
            v7 = 0;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 128));
  }
  std::shared_ptr<data::ConfigGCGExecEffectTransferEnergy>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectTransferEnergy> *const)(v3 + 96));
  v36 = v7;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return v36;
};

// Line 1617: range 000000000E173784-000000000E17398F
bool __cdecl GCGExecEffectTransferEnergy::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(unsigned int)#1}::operator()(
        const GCGExecEffectTransferEnergy::doEffect::<lambda(uint32_t)> *const __closure,
        uint32_t card_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  GCGCardMgr *CardMgr; // rax
  GCGCard *v7; // rax
  GCGEffectElementType ElementType; // r14d
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool result; // al
  char v11[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 cur_card_ptr:1623";
  *(_QWORD *)(v2 + 16) = GCGExecEffectTransferEnergy::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(unsigned int)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::operator==<data::ConfigGCGExecEffectTransferEnergy>(0LL, __closure->__config_effect_transfer_energy_ptr) )
  {
    v5 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__game_mode >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__game_mode);
    CardMgr = GCGGameMode::getCardMgr(__closure->__game_mode);
    GCGCardMgr::findCard((GCGCardMgr *const)(v2 + 32), CardMgr, card_guid);
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v2 + 32)) )
    {
      v5 = 1;
    }
    else
    {
      v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ElementType = GCGCard::getElementType(v7);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v9 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__config_effect_transfer_energy_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v9->limit_element_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->limit_element_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = (std::__shared_ptr_access<data::ConfigGCGExecEffectTransferEnergy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->limit_element_type);
      }
      v5 = ElementType != v9->limit_element_type;
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  }
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 1646: range 000000000E174678-000000000E175332
int32_t __cdecl GCGExecEffectRandomGenDice::doEffect(
        GCGExecEffectRandomGenDice *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v18; // r15
  data::GCGEffectDiceType *M_current; // r14
  std::vector<data::GCGEffectDiceType>::iterator v20; // rax
  std::vector<data::GCGEffectDiceType>::size_type v21; // r14
  std::vector<data::GCGEffectDiceType>::reference v22; // rax
  data::GCGEffectDiceType *v23; // rdx
  GCGSkillLogic *SkillLogic; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v27; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v28; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v30; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // r14
  int32_t v34; // eax
  data::GCGEffectDiceType __args_0; // [rsp+24h] [rbp-1BCh] BYREF
  uint32_t idx; // [rsp+28h] [rbp-1B8h]
  GCGControllerValue cur_controller_id; // [rsp+2Ch] [rbp-1B4h]
  uint32_t effect_dice_type_num; // [rsp+30h] [rbp-1B0h]
  data::GCGEffectDiceType effect_dice_type; // [rsp+34h] [rbp-1ACh]
  uint32_t type_dice_num; // [rsp+38h] [rbp-1A8h]
  int32_t ret; // [rsp+3Ch] [rbp-1A4h]
  GCGGameMode *game_mode; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+48h] [rbp-198h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *dice_num; // [rsp+50h] [rbp-190h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+58h] [rbp-188h] BYREF
  std::shared_ptr<GCGCard> p_this_card_ptr; // [rsp+60h] [rbp-180h] BYREF
  common::milog::MiLogStream v47; // [rsp+70h] [rbp-170h] BYREF
  common::milog::MiLogStream v48; // [rsp+90h] [rbp-150h] BYREF
  std::string val; // [rsp+B0h] [rbp-130h] BYREF
  char v50[272]; // [rsp+D0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 31 config_effect_gen_dice_ptr:1647 64 16 14 skill_ptr:1653 96 16 19 owner_card_ptr:1660 "
                        "128 16 17 union_log_ss:1701 160 24 25 effect_dice_type_vec:1668";
  *(_QWORD *)(v3 + 16) = GCGExecEffectRandomGenDice::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectRandomGenDice,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGExecEffectRandomGenDice>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectRandomGenDice> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1650);
    v6 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v48,
           (const char (*)[66])"GCGExecEffectRandomGenDice config_effect_gen_dice_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 64));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1656);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[54])"GCGExecEffectRandomGenDice doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 96), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1663);
        v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v48,
                (const char (*)[53])"GCGExecEffectRandomGenDice owner_card_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v48);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        cur_controller_id = GCGCard::getControllerId(v11);
        v12 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        __in = GCGSkill::getDeclaredValueByKey(v12, &v13->declared_output_key.key);
        _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        dice_num = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        std::vector<data::GCGEffectDiceType>::vector((std::vector<data::GCGEffectDiceType> *const)(v3 + 160));
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v14->gen_dice_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v14->gen_dice_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v14 = (std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->gen_dice_type);
        }
        if ( v14->gen_dice_type )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1684);
          v15 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[54])"GCGExecEffectRandomGenDice unsupported gen_dice_type:");
          v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&v16->gen_dice_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v16->gen_dice_type >> 3) + 0x7FFF8000) <= 3 )
          {
            v16 = (std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->gen_dice_type);
          }
          __args_0 = v16->gen_dice_type;
          common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)&__args_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
        else
        {
          __args_0 = EFFECT_DICE_CRYO;
          std::vector<data::GCGEffectDiceType>::emplace_back<data::GCGEffectDiceType>(
            (std::vector<data::GCGEffectDiceType> *const)(v3 + 160),
            &__args_0,
            &__args_0);
          __args_0 = EFFECT_DICE_HYDRO;
          std::vector<data::GCGEffectDiceType>::emplace_back<data::GCGEffectDiceType>(
            (std::vector<data::GCGEffectDiceType> *const)(v3 + 160),
            &__args_0,
            &__args_0);
          __args_0 = EFFECT_DICE_PYRO;
          std::vector<data::GCGEffectDiceType>::emplace_back<data::GCGEffectDiceType>(
            (std::vector<data::GCGEffectDiceType> *const)(v3 + 160),
            &__args_0,
            &__args_0);
          __args_0 = EFFECT_DICE_ELECTRO;
          std::vector<data::GCGEffectDiceType>::emplace_back<data::GCGEffectDiceType>(
            (std::vector<data::GCGEffectDiceType> *const)(v3 + 160),
            &__args_0,
            &__args_0);
          __args_0 = EFFECT_DICE_GEO;
          std::vector<data::GCGEffectDiceType>::emplace_back<data::GCGEffectDiceType>(
            (std::vector<data::GCGEffectDiceType> *const)(v3 + 160),
            &__args_0,
            &__args_0);
          __args_0 = EFFECT_DICE_DENDRO;
          std::vector<data::GCGEffectDiceType>::emplace_back<data::GCGEffectDiceType>(
            (std::vector<data::GCGEffectDiceType> *const)(v3 + 160),
            &__args_0,
            &__args_0);
          __args_0 = EFFECT_DICE_ANEMO;
          std::vector<data::GCGEffectDiceType>::emplace_back<data::GCGEffectDiceType>(
            (std::vector<data::GCGEffectDiceType> *const)(v3 + 160),
            &__args_0,
            &__args_0);
          if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(dice_num);
          }
          if ( *dice_num )
          {
            v18 = GCGGameMode::gen(game_mode);
            M_current = std::vector<data::GCGEffectDiceType>::end((std::vector<data::GCGEffectDiceType> *const)(v3 + 160))._M_current;
            v20._M_current = std::vector<data::GCGEffectDiceType>::begin((std::vector<data::GCGEffectDiceType> *const)(v3 + 160))._M_current;
            std::shuffle<__gnu_cxx::__normal_iterator<data::GCGEffectDiceType *,std::vector<data::GCGEffectDiceType>>,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &>(
              v20,
              (__gnu_cxx::__normal_iterator<data::GCGEffectDiceType*,std::vector<data::GCGEffectDiceType> >)M_current,
              v18);
            effect_dice_type_num = std::vector<data::GCGEffectDiceType>::size((const std::vector<data::GCGEffectDiceType> *const)(v3 + 160));
            if ( effect_dice_type_num )
            {
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 128));
              for ( idx = 0; idx < effect_dice_type_num; ++idx )
              {
                v21 = idx;
                if ( v21 < std::vector<data::GCGEffectDiceType>::size((const std::vector<data::GCGEffectDiceType> *const)(v3 + 160)) )
                {
                  v22 = std::vector<data::GCGEffectDiceType>::operator[](
                          (std::vector<data::GCGEffectDiceType> *const)(v3 + 160),
                          idx);
                  v23 = v22;
                  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v22);
                  }
                  effect_dice_type = *v23;
                  if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_load4(dice_num);
                  }
                  type_dice_num = (*dice_num - idx + effect_dice_type_num - 1) / effect_dice_type_num;
                  if ( type_dice_num )
                  {
                    SkillLogic = GCGGameMode::getSkillLogic(game_mode);
                    std::shared_ptr<GCGCard>::shared_ptr(&p_this_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 96));
                    v25 = std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectRandomGenDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
                    p_target_camp = &v25->target_camp;
                    if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4(p_target_camp);
                    }
                    ret = GCGSkillLogic::addDice(
                            SkillLogic,
                            cur_controller_id,
                            v25->target_camp,
                            &p_this_card_ptr,
                            effect_dice_type,
                            type_dice_num);
                    std::shared_ptr<GCGCard>::~shared_ptr(&p_this_card_ptr);
                    v27 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 128),
                            " add dice:");
                    v28 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v27, type_dice_num);
                    v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v28, " dice_type:");
                    v30 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                            v29,
                            effect_dice_type);
                    v31 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v30, " ret:");
                    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, ret);
                  }
                }
              }
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                1716);
              v32 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v47,
                      (const char (*)[41])"GCGExecEffectRandomGenDice doEffect succ");
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
                (std::string *)&v48,
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 128));
              v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)&v48);
              GCGEffectBase::getDesc[abi:cxx11](&val, this);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &val);
              std::string::~string(&val);
              std::string::~string(&v48);
              common::milog::MiLogStream::~MiLogStream(&v47);
              v7 = 0;
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 128));
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                1697);
              common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[53])"GCGExecEffectRandomGenDice effect_dice_type_num is 0");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v7 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1690);
            v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v48,
                    (const char (*)[42])"GCGExecEffectRandomGenDice dice_num is 0 ");
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v48);
            v7 = 0;
          }
        }
        std::vector<data::GCGEffectDiceType>::~vector((std::vector<data::GCGEffectDiceType> *const)(v3 + 160));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
  }
  std::shared_ptr<data::ConfigGCGExecEffectRandomGenDice>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectRandomGenDice> *const)(v3 + 32));
  v34 = v7;
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v34;
};

// Line 1722: range 000000000E175334-000000000E175A0E
int32_t __cdecl GCGExecEffectSearchCard::doEffect(
        GCGExecEffectSearchCard *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectSearchCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectSearchCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  GCGTagType take_effect_tag; // r15d
  uint32_t v17; // r14d
  GCGCardZone *DeckZone; // rax
  GCGCardZone *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  int32_t v24; // eax
  GCGCardZone *target_zone; // [rsp+10h] [rbp-160h]
  GCGControllerValue cur_controller_id; // [rsp+34h] [rbp-13Ch]
  GCGGameMode *game_mode; // [rsp+38h] [rbp-138h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *draw_num; // [rsp+48h] [rbp-128h]
  GCGField *field; // [rsp+50h] [rbp-120h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+58h] [rbp-118h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-110h] BYREF
  std::string val; // [rsp+80h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 move_num:1745 64 16 34 config_effect_search_card_ptr:1723 96 16 14 skill_ptr:1729 128 "
                        "16 19 owned_card_ptr:1736";
  *(_QWORD *)(v3 + 16) = GCGExecEffectSearchCard::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectSearchCard,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectSearchCard>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectSearchCard> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1726);
    v6 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v31,
           (const char (*)[66])"GCGExecEffectSearchCard config_effect_search_card_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1732);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[51])"GCGExecEffectSearchCard doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1739);
        v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v31,
                (const char (*)[62])"GCGExecEffectSearchCard failed for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        cur_controller_id = GCGCard::getControllerId(v11);
        v12 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectSearchCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectSearchCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        __in = GCGSkill::getDeclaredValueByKey(v12, &v13->declared_output_key.key);
        std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        draw_num = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        Duel = GCGGameMode::getDuel(game_mode);
        field = GCGDuel::getField(Duel, cur_controller_id);
        v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectSearchCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectSearchCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v15->take_effect_tag >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->take_effect_tag >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (std::__shared_ptr_access<data::ConfigGCGExecEffectSearchCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->take_effect_tag);
        }
        take_effect_tag = v15->take_effect_tag;
        if ( *(_BYTE *)(((unsigned __int64)draw_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)draw_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)draw_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(draw_num);
        }
        v17 = *draw_num;
        target_zone = GCGField::getHandZone(field);
        DeckZone = GCGField::getDeckZone(field);
        *(_DWORD *)(v3 + 48) = GCGUtils::moveCardByTag(DeckZone, target_zone, v17, take_effect_tag, GCG_REASON_EFFECT);
        if ( *(_DWORD *)(v3 + 48) )
        {
          v19 = GCGField::getDeckZone(field);
          GCGCardZone::shuffle(v19);
        }
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1751);
        v20 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v31,
                (const char (*)[48])"GCGExecEffectSearchCard doEffect succ draw_num:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, draw_num);
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" move_num:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 48));
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v7 = 0;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectSearchCard>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectSearchCard> *const)(v3 + 64));
  v24 = v7;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v24;
};

// Line 1757: range 000000000E175A10-000000000E17685D
int32_t __cdecl GCGExecEffectAttachElement::doEffect(
        GCGExecEffectAttachElement *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  data::GCGEffectCampType target_camp; // r14d
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v21; // rax
  _DWORD *v22; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v24; // rax
  GCGSkillLogic *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // r14
  int32_t v34; // eax
  data::GCGChooseTargetCharaterType target_charater_type; // [rsp+14h] [rbp-2DCh]
  int v37; // [rsp+30h] [rbp-2C0h] BYREF
  GCGControllerValue cur_controller_id; // [rsp+34h] [rbp-2BCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-2B8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-2B0h] BYREF
  GCGGameMode *game_mode; // [rsp+48h] [rbp-2A8h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+50h] [rbp-2A0h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *element_type; // [rsp+58h] [rbp-298h]
  std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-290h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+68h] [rbp-288h] BYREF
  std::shared_ptr<GCGCard> p_this_card_ptr; // [rsp+70h] [rbp-280h] BYREF
  common::milog::MiLogStream v47; // [rsp+80h] [rbp-270h] BYREF
  common::milog::MiLogStream v48; // [rsp+A0h] [rbp-250h] BYREF
  std::string val; // [rsp+C0h] [rbp-230h] BYREF
  char v50[528]; // [rsp+E0h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 14 card_guid:1790 48 16 37 config_effect_attach_element_ptr:1758 80 16 14 skill_ptr:1764 "
                        "112 16 19 owned_card_ptr:1771 144 16 20 target_card_ptr:1792 176 24 18 card_guid_vec:1779 240 16"
                        "8 20 cur_skill_param:1798";
  *(_QWORD *)(v3 + 16) = GCGExecEffectAttachElement::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectAttachElement,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 48));
  if ( std::operator==<data::ConfigGCGExecEffectAttachElement>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectAttachElement> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1761);
    v6 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
           &v48,
           (const char (*)[72])"GCGExecEffectAttachElement config_effect_attach_element_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 80));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1767);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[54])"GCGExecEffectAttachElement doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 112), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1774);
        v10 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                &v48,
                (const char (*)[65])"GCGExecEffectAttachElement failed for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v48);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        cur_controller_id = GCGCard::getControllerId(v11);
        v12 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        __in = GCGSkill::getDeclaredValueByKey(v12, &v13->declared_element.key);
        _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        element_type = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 176));
        SkillLogic = GCGGameMode::getSkillLogic(game_mode);
        v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&v15->target_character >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->target_character >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->target_character);
        }
        target_charater_type = v15->target_character;
        v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAttachElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        p_target_camp = &v16->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_target_camp);
        }
        target_camp = v16->target_camp;
        std::shared_ptr<GCGCard>::shared_ptr(&p_this_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 112));
        LOBYTE(target_camp) = GCGSkillLogic::getTargetCardVec(
                                SkillLogic,
                                skill_param,
                                &p_this_card_ptr,
                                target_camp,
                                target_charater_type,
                                cur_controller_id,
                                (std::vector<unsigned int> *)(v3 + 176)) != 0;
        std::shared_ptr<GCGCard>::~shared_ptr(&p_this_card_ptr);
        if ( (_BYTE)target_camp )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1782);
          v19 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v48,
                  (const char (*)[51])"GCGExecEffectAttachElement getTargetCardVec failed");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v48);
          v7 = -1;
        }
        else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 176)) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1787);
          v20 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  &v48,
                  (const char (*)[63])"GCGExecEffectAttachElement not valid alternative charater card");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v48);
          v7 = 0;
        }
        else
        {
          __for_range = (std::vector<unsigned int> *)(v3 + 176);
          __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 176))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 176))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            v22 = v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            *(_DWORD *)(v3 + 32) = *v22;
            CardMgr = GCGGameMode::getCardMgr(game_mode);
            GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 144), CardMgr, *(_DWORD *)(v3 + 32));
            if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 144)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                1795);
              v24 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[67])"GCGExecEffectAttachElement find target_card_ptr failed, card_guid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            }
            else
            {
              GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 240));
              if ( *(_BYTE *)(((unsigned __int64)element_type >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)element_type >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(element_type);
              }
              *(_DWORD *)(v3 + 380) = *element_type;
              std::shared_ptr<GCGCard>::operator=(
                (std::shared_ptr<GCGCard> *const)(v3 + 264),
                (const std::shared_ptr<GCGCard> *)(v3 + 112));
              std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
              std::enable_shared_from_this<GCGSkill>::shared_from_this((std::enable_shared_from_this<GCGSkill> *const)&p_this_card_ptr);
              std::shared_ptr<GCGSkill>::operator=(
                (std::shared_ptr<GCGSkill> *const)(v3 + 240),
                (std::shared_ptr<GCGSkill> *)&p_this_card_ptr);
              std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&p_this_card_ptr);
              std::shared_ptr<GCGCard>::operator=(
                (std::shared_ptr<GCGCard> *const)(v3 + 280),
                (const std::shared_ptr<GCGCard> *)(v3 + 144));
              *(_DWORD *)(v3 + 352) = cur_controller_id;
              if ( *(_BYTE *)(((unsigned __int64)&skill_param->from_result_seq >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&skill_param->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&skill_param->from_result_seq);
              }
              *(_DWORD *)(v3 + 376) = skill_param->from_result_seq;
              v25 = GCGGameMode::getSkillLogic(game_mode);
              GCGSkillLogic::doAttachElementAndAllEffect(v25, this, (const GCGSkillUseParam *)(v3 + 240), result);
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                1806);
              v26 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      &v47,
                      (const char (*)[56])"GCGExecEffectAttachElement attach element,element_type:");
              if ( *(_BYTE *)(((unsigned __int64)element_type >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)element_type >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(element_type);
              }
              v37 = *element_type;
              v27 = common::milog::MiLogStream::operator<<<int,(int *)0>(v26, &v37);
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])",source:");
              v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
              GCGCard::getDesc[abi:cxx11]((std::string *)&v48, v29);
              v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)&v48);
              v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])",target:");
              v32 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              GCGCard::getDesc[abi:cxx11](&val, v32);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &val);
              std::string::~string(&val);
              std::string::~string(&v48);
              common::milog::MiLogStream::~MiLogStream(&v47);
              GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 240));
            }
            std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 144));
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1808);
          v33 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v48,
                  (const char (*)[41])"GCGExecEffectAttachElement doEffect succ");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v48);
          v7 = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 176));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 112));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 80));
  }
  std::shared_ptr<data::ConfigGCGExecEffectAttachElement>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectAttachElement> *const)(v3 + 48));
  v34 = v7;
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return v34;
};

// Line 1814: range 000000000E17685E-000000000E17718E
int32_t __cdecl GCGEffectReplaceReactionElementByCardVar::doEffect(
        GCGEffectReplaceReactionElementByCardVar *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  data::GCGEffectElementType *p_effect_element_type; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  data::GCGEffectElementType *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  GCGCard *v20; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  data::GCGEffectElementType *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int32_t v31; // eax
  unsigned int effect_element_type; // [rsp+2Ch] [rbp-124h] BYREF
  data::GCGEffectElementType __u; // [rsp+30h] [rbp-120h] BYREF
  GCGEffectElementType result_element_type; // [rsp+34h] [rbp-11Ch]
  std::optional<data::GCGEffectElementType> v36; // [rsp+38h] [rbp-118h] BYREF
  common::milog::MiLogStream v37; // [rsp+40h] [rbp-110h] BYREF
  std::string val; // [rsp+60h] [rbp-F0h] BYREF
  char v39[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 cur_token:1840 64 16 22 config_effect_ptr:1815 96 16 14 skill_ptr:1821 128 16 18 this_card_ptr:1827";
  *(_QWORD *)(v3 + 16) = GCGEffectReplaceReactionElementByCardVar::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectReplaceReactionElementByCardVar,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectReplaceReactionElementByCardVar>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGEffectReplaceReactionElementByCardVar> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1818);
    v6 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v37,
           (const char (*)[71])"GCGEffectReplaceReactionElementByCardVar config_effect_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v37);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1824);
      common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[68])"GCGEffectReplaceReactionElementByCardVar doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v8);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1830);
        common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[63])"GCGEffectReplaceReactionElementByCardVar this_card_ptr is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = -1;
      }
      else
      {
        __u = GCG_ELEMENT_PHYSIC;
        result_element_type = std::optional<data::GCGEffectElementType>::value_or<data::GCGEffectElementType>(
                                &result->cost_element_type_opt,
                                &__u);
        v9 = std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_effect_element_type = &v9->effect_element_type;
        if ( *(_BYTE *)(((unsigned __int64)p_effect_element_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_effect_element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_effect_element_type >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(p_effect_element_type);
        }
        if ( result_element_type == v9->effect_element_type )
        {
          v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v17 = std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v17->token_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v17->token_type >> 3) + 0x7FFF8000) <= 3 )
          {
            v17 = (std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v17->token_type);
          }
          *(_DWORD *)(v3 + 48) = GCGCard::getToken(v16, v17->token_type);
          if ( *(_DWORD *)(v3 + 48) )
          {
            v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v21 = std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v21->token_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v21->token_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v21 = (std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v21->token_type);
            }
            *(_DWORD *)(v3 + 48) = GCGCard::subToken(v20, v21->token_type, 1u, GCG_REASON_EFFECT);
            if ( *(_DWORD *)(v3 + 48) )
            {
              __u = GCG_ELEMENT_PHYSIC;
              std::optional<data::GCGEffectElementType>::optional<data::GCGEffectElementType,true>(&v36, &__u);
              if ( *(_BYTE *)(((unsigned __int64)&result->cost_element_type_opt >> 3) + 0x7FFF8000) )
                __asan_report_store8(&result->cost_element_type_opt);
              result->cost_element_type_opt = v36;
            }
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1853);
            v22 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v37,
                    (const char (*)[61])"GCGEffectReplaceReactionElementByCardVar succ, element_type:");
            v23 = std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v24 = &v23->effect_element_type;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v24);
            }
            effect_element_type = v23->effect_element_type;
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &effect_element_type);
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v25,
                    (const char (*)[13])" token_type:");
            v27 = std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v27->token_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v27->token_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v27 = (std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v27->token_type);
            }
            __u = v27->token_type;
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)&__u);
            v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v28,
                    (const char (*)[12])" cur_token:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v3 + 48));
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v37);
            v7 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1844);
            v18 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[72])"GCGEffectReplaceReactionElementByCardVar cur_token is zero, token_type:");
            v19 = std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v19->token_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v19->token_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v19 = (std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v19->token_type);
            }
            __u = v19->token_type;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)&__u);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v7 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1837);
          v11 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[79])"GCGEffectReplaceReactionElementByCardVar element type not match, element_type:");
          v12 = std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectReplaceReactionElementByCardVar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v13 = &v12->effect_element_type;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          effect_element_type = v12->effect_element_type;
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &effect_element_type);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v14,
                  (const char (*)[22])" result_element_type:");
          __u = result_element_type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)&__u);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGEffectReplaceReactionElementByCardVar>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectReplaceReactionElementByCardVar> *const)(v3 + 64));
  v31 = v7;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v31;
};

// Line 1859: range 000000000E177190-000000000E178368
int32_t __cdecl GCGExecEffectTransferModifyCard::doEffect(
        GCGExecEffectTransferModifyCard *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_target_choose_idx; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  char v12; // al
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::vector<unsigned int>::const_reference v24; // rax
  _DWORD *v25; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  uint32_t *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::vector<unsigned int>::const_reference v35; // rax
  _DWORD *v36; // rdx
  GCGCardMgr *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  GCGCard *v40; // rax
  signed int ModifyZone; // r14d
  data::GCGTagType *p_effect_tag; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  data::GCGTagType *v45; // rax
  common::milog::MiLogStream *v46; // r14
  GCGCard *v47; // rax
  GCGModifyZone *v48; // r14
  common::milog::MiLogStream *v49; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // r14
  GCGCard *v52; // rax
  GCGModifyZone *v53; // r14
  common::milog::MiLogStream *v54; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  common::milog::MiLogStream *v56; // r14
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // r14
  int32_t v60; // eax
  unsigned int effect_tag; // [rsp+2Ch] [rbp-1C4h] BYREF
  unsigned __int64 v62; // [rsp+30h] [rbp-1C0h] BYREF
  GCGGameMode *game_mode; // [rsp+38h] [rbp-1B8h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret; // [rsp+40h] [rbp-1B0h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr; // [rsp+48h] [rbp-1A8h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+50h] [rbp-1A0h] BYREF
  std::tuple<int,std::shared_ptr<GCGCard> > __t; // [rsp+60h] [rbp-190h] BYREF
  common::milog::MiLogStream v68; // [rsp+80h] [rbp-170h] BYREF
  std::string val; // [rsp+A0h] [rbp-150h] BYREF
  char v70[304]; // [rsp+C0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 22 source_choose_idx:1879 48 4 21 source_card_guid:1886 64 4 22 target_choose_idx:1893 80"
                        " 4 21 target_card_guid:1900 96 16 43 config_effect_transfer_modify_card_ptr:1860 128 16 14 skill"
                        "_ptr:1866 160 16 20 source_card_ptr:1887 192 16 20 target_card_ptr:1901 224 16 20 modify_card_ptr:1908";
  *(_QWORD *)(v3 + 16) = GCGExecEffectTransferModifyCard::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectTransferModifyCard,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 96));
  if ( std::operator==<data::ConfigGCGExecEffectTransferModifyCard>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectTransferModifyCard> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1863);
    v6 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
           &v68,
           (const char (*)[83])"GCGExecEffectTransferModifyCard config_effect_transfer_modify_card_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 128));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1869);
      common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[59])"GCGExecEffectTransferModifyCard doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      p_target_choose_idx = &v9->target_choose_idx;
      if ( *(_BYTE *)(((unsigned __int64)p_target_choose_idx >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_target_choose_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_choose_idx >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(p_target_choose_idx);
      }
      if ( !v9->target_choose_idx )
        goto LABEL_14;
      v11 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v11->source_choose_idx >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->source_choose_idx >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = (std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->source_choose_idx);
      }
      if ( v11->source_choose_idx )
        v12 = 0;
      else
LABEL_14:
        v12 = 1;
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1875);
        v13 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v68,
                (const char (*)[64])"GCGExecEffectTransferModifyCard invalid idx, target_choose_idx:");
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->target_choose_idx);
        v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v15,
                (const char (*)[20])" source_choose_idx:");
        v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->source_choose_idx);
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v7 = -1;
      }
      else
      {
        v19 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v19->source_choose_idx >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v19->source_choose_idx >> 3) + 0x7FFF8000) <= 3 )
        {
          v19 = (std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v19->source_choose_idx);
        }
        *(_DWORD *)(v3 + 32) = v19->source_choose_idx - 1;
        if ( std::vector<unsigned int>::size(&skill_param->param_guid_vec) > *(unsigned int *)(v3 + 32) )
        {
          v24 = std::vector<unsigned int>::operator[](&skill_param->param_guid_vec, *(unsigned int *)(v3 + 32));
          v25 = v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          *(_DWORD *)(v3 + 48) = *v25;
          CardMgr = GCGGameMode::getCardMgr(game_mode);
          GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 160), CardMgr, *(_DWORD *)(v3 + 48));
          if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              1890);
            v27 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v68,
                    (const char (*)[61])"GCGExecEffectTransferModifyCard source_card not found, guid:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v3 + 48));
            GCGEffectBase::getDesc[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v68);
            v7 = -1;
          }
          else
          {
            v29 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            v30 = &v29->target_choose_idx;
            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v30);
            }
            *(_DWORD *)(v3 + 64) = v29->target_choose_idx - 1;
            if ( std::vector<unsigned int>::size(&skill_param->param_guid_vec) > *(unsigned int *)(v3 + 64) )
            {
              v35 = std::vector<unsigned int>::operator[](&skill_param->param_guid_vec, *(unsigned int *)(v3 + 64));
              v36 = v35;
              if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v35);
              }
              *(_DWORD *)(v3 + 80) = *v36;
              v37 = GCGGameMode::getCardMgr(game_mode);
              GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 192), v37, *(_DWORD *)(v3 + 80));
              if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 192)) )
              {
                common::milog::MiLogStream::create(
                  &v68,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  1904);
                v38 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                        &v68,
                        (const char (*)[61])"GCGExecEffectTransferModifyCard target_card not found, guid:");
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v38,
                        (const unsigned int *)(v3 + 80));
                GCGEffectBase::getDesc[abi:cxx11](&val, this);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, &val);
                std::string::~string(&val);
                common::milog::MiLogStream::~MiLogStream(&v68);
                v7 = -1;
              }
              else
              {
                v40 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                ModifyZone = (unsigned int)GCGCard::getModifyZone(v40);
                p_effect_tag = &std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->effect_tag;
                if ( *(_BYTE *)(((unsigned __int64)p_effect_tag >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_effect_tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_effect_tag >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(p_effect_tag);
                }
                GCGCardZone::findCardByTag((GCGCardZone *const)(v3 + 224), (GCGTagType)ModifyZone);
                if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 224)) )
                {
                  common::milog::MiLogStream::create(
                    &v68,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    1911);
                  v43 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                          &v68,
                          (const char (*)[60])"GCGExecEffectTransferModifyCard modify_card not found, tag:");
                  v44 = std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectTransferModifyCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v45 = &v44->effect_tag;
                  if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v45);
                  }
                  effect_tag = v44->effect_tag;
                  v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &effect_tag);
                  GCGEffectBase::getDesc[abi:cxx11](&val, this);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, &val);
                  std::string::~string(&val);
                  common::milog::MiLogStream::~MiLogStream(&v68);
                  v7 = -1;
                }
                else
                {
                  v47 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  v48 = GCGCard::getModifyZone(v47);
                  std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 224));
                  LOBYTE(v48) = GCGCardZone::delCard(v48, &p_card_ptr, GCG_REASON_EFFECT, 1) != 0;
                  std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
                  if ( (_BYTE)v48 )
                  {
                    common::milog::MiLogStream::create(
                      &v68,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/card_game/skill/gcg_effect.cpp",
                      "doEffect",
                      1917);
                    v49 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                            &v68,
                            (const char (*)[62])"GCGExecEffectTransferModifyCard delCard fail, modify_card_id:");
                    v50 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    effect_tag = GCGCard::getId(v50);
                    v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &effect_tag);
                    GCGEffectBase::getDesc[abi:cxx11](&val, this);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, &val);
                    std::string::~string(&val);
                    common::milog::MiLogStream::~MiLogStream(&v68);
                    v7 = -1;
                  }
                  else
                  {
                    v52 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    v53 = GCGCard::getModifyZone(v52);
                    std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 224));
                    GCGCardZone::addCard(&__t, v53, &p_card_ptr, GCG_REASON_EFFECT, 1, 0);
                    std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
                    ret = std::get<0ul,int,std::shared_ptr<GCGCard>>(&__t);
                    ret_card_ptr = std::get<1ul,int,std::shared_ptr<GCGCard>>(&__t);
                    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(ret);
                    }
                    if ( *ret )
                    {
                      common::milog::MiLogStream::create(
                        &v68,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/card_game/skill/gcg_effect.cpp",
                        "doEffect",
                        1923);
                      v54 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                              &v68,
                              (const char (*)[62])"GCGExecEffectTransferModifyCard addCard fail, modify_card_id:");
                      v55 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                      effect_tag = GCGCard::getId(v55);
                      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &effect_tag);
                      GCGEffectBase::getDesc[abi:cxx11](&val, this);
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, &val);
                      std::string::~string(&val);
                      common::milog::MiLogStream::~MiLogStream(&v68);
                      v7 = -1;
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v68,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/card_game/skill/gcg_effect.cpp",
                        "doEffect",
                        1926);
                      v57 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                              &v68,
                              (const char (*)[54])"GCGExecEffectTransferModifyCard succ, modify_card_id:");
                      v58 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                      effect_tag = GCGCard::getId(v58);
                      v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &effect_tag);
                      GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v59, &val);
                      std::string::~string(&val);
                      common::milog::MiLogStream::~MiLogStream(&v68);
                      v7 = 0;
                    }
                    std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__t);
                  }
                }
                std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 224));
              }
              std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v68,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                1896);
              v31 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      &v68,
                      (const char (*)[61])"GCGExecEffectTransferModifyCard invalid param_guid_vec size:");
              v62 = std::vector<unsigned int>::size(&skill_param->param_guid_vec);
              v32 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v31, &v62);
              v33 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v32,
                      (const char (*)[20])" target_choose_idx:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v3 + 64));
              GCGEffectBase::getDesc[abi:cxx11](&val, this);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, &val);
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v68);
              v7 = -1;
            }
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v68,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1882);
          v20 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v68,
                  (const char (*)[61])"GCGExecEffectTransferModifyCard invalid param_guid_vec size:");
          v62 = std::vector<unsigned int>::size(&skill_param->param_guid_vec);
          v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, &v62);
          v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v21,
                  (const char (*)[20])" source_choose_idx:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 32));
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v68);
          v7 = -1;
        }
      }
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 128));
  }
  std::shared_ptr<data::ConfigGCGExecEffectTransferModifyCard>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectTransferModifyCard> *const)(v3 + 96));
  v60 = v7;
  if ( v70 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v60;
};

// Line 1932: range 000000000E17836A-000000000E179048
int32_t __cdecl GCGExecEffectReroll::doEffect(
        GCGExecEffectReroll *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  data::GCGEffectCampType *v17; // rax
  char v18; // al
  GCGDuel *Duel; // rax
  GCGDiceZone *DiceZone; // rax
  std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::map<proto::GCGControllerValue,unsigned int>::mapped_type *v22; // rax
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *v23; // rdx
  std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  data::GCGEffectCampType *v25; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  data::GCGEffectCampType *v27; // rax
  char v28; // al
  GCGDuel *v29; // rax
  GCGDuel *v30; // rax
  GCGDiceZone *v31; // rax
  std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::map<proto::GCGControllerValue,unsigned int>::mapped_type *v33; // rax
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *v34; // rdx
  GCGPhaseMgr *PhaseMgr; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  int32_t v38; // eax
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-1D0h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type __l; // [rsp+10h] [rbp-1D0h]
  GCGSkill *v41; // [rsp+20h] [rbp-1C0h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type v42; // [rsp+20h] [rbp-1C0h]
  std::allocator<unsigned int> __a; // [rsp+46h] [rbp-19Ah] BYREF
  bool is_enter_reroll_phase; // [rsp+47h] [rbp-199h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+48h] [rbp-198h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *reroll_count; // [rsp+50h] [rbp-190h]
  GCGGameMode *game_mode; // [rsp+58h] [rbp-188h]
  GCGField *field; // [rsp+60h] [rbp-180h]
  GCGField *field_0; // [rsp+68h] [rbp-178h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+70h] [rbp-170h] BYREF
  std::initializer_list<unsigned int> v51; // [rsp+78h] [rbp-168h] BYREF
  std::vector<unsigned int> param_vec; // [rsp+90h] [rbp-150h] BYREF
  common::milog::MiLogStream v53; // [rsp+B0h] [rbp-130h] BYREF
  std::string val; // [rsp+D0h] [rbp-110h] BYREF
  char v55[240]; // [rsp+F0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 22 cur_controller_id:1951 48 4 24 other_controller_id:1975 64 16 29 config_effect_reroll_"
                        "ptr:1933 96 16 14 skill_ptr:1939 128 16 19 owned_card_ptr:1945 160 16 28 special_phase_prarm_ptr:1954";
  *(_QWORD *)(v3 + 16) = GCGExecEffectReroll::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectReroll,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectReroll>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectReroll> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1936);
    v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v53,
           (const char (*)[57])"GCGExecEffectReroll config_effect_reroll_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        1942);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[47])"GCGExecEffectReroll doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v8);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          1948);
        v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               &v53,
               (const char (*)[58])"GCGExecEffectReroll failed for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v53);
        v7 = -1;
      }
      else
      {
        v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 32) = GCGCard::getControllerId(v10);
        v41 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v11 = std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        __in = GCGSkill::getDeclaredValueByKey(v41, &v11->declared_output_key.key);
        _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        reroll_count = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
        common::tools::perf::make_shared<GCGPhaseParam>();
        if ( std::operator==<GCGPhaseParam>(0LL, (const std::shared_ptr<GCGPhaseParam> *)(v3 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1957);
          v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v53,
                  (const char (*)[56])"GCGExecEffectReroll special_phase_prarm_ptr is nullptr ");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v53);
          v7 = -1;
        }
        else
        {
          v13 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          game_mode = GCGSkill::getGameMode(v13);
          is_enter_reroll_phase = 0;
          v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          p_target_camp = &v14->target_camp;
          if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(p_target_camp);
          }
          if ( v14->target_camp == CAMP_FRIENDLY )
            goto LABEL_18;
          v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v17 = &v16->target_camp;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          if ( v16->target_camp )
            v18 = 0;
          else
LABEL_18:
            v18 = 1;
          if ( v18 )
          {
            Duel = GCGGameMode::getDuel(game_mode);
            field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v3 + 32));
            DiceZone = GCGField::getDiceZone(field);
            if ( GCGDiceZone::getValidDiceSize(DiceZone) )
            {
              is_enter_reroll_phase = 1;
              if ( *(_BYTE *)(((unsigned __int64)reroll_count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)reroll_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reroll_count >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(reroll_count);
              }
              v42 = *reroll_count;
              v21 = std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              v22 = std::map<proto::GCGControllerValue,unsigned int>::operator[](
                      &v21->controller_id_2_action_count_map_,
                      (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v3 + 32));
              v23 = v22;
              if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v22);
              }
              *v23 = v42;
              LODWORD(v51._M_array) = *(_DWORD *)(v3 + 32);
              if ( *(_BYTE *)(((unsigned __int64)reroll_count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)reroll_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reroll_count >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(reroll_count);
              }
              HIDWORD(v51._M_array) = *reroll_count;
              __la._M_array = (std::initializer_list<unsigned int>::iterator)&v51;
              __la._M_len = 2LL;
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(&param_vec, __la, &__a);
              GCGGameMode::sendClientPerform(game_mode, GCG_PERFORM_REROLL, &param_vec);
              std::vector<unsigned int>::~vector(&param_vec);
              std::allocator<unsigned int>::~allocator(&__a);
            }
          }
          v24 = std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v25 = &v24->target_camp;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          if ( v24->target_camp == CAMP_ENEMY )
            goto LABEL_35;
          v26 = std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v27 = &v26->target_camp;
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v27);
          }
          if ( v26->target_camp )
            v28 = 0;
          else
LABEL_35:
            v28 = 1;
          if ( v28 )
          {
            v29 = GCGGameMode::getDuel(game_mode);
            *(_DWORD *)(v3 + 48) = GCGDuel::getOtherControllerId(v29, (GCGControllerValue)*(_DWORD *)(v3 + 32));
            v30 = GCGGameMode::getDuel(game_mode);
            field_0 = GCGDuel::getField(v30, (GCGControllerValue)*(_DWORD *)(v3 + 48));
            v31 = GCGField::getDiceZone(field_0);
            if ( GCGDiceZone::getValidDiceSize(v31) )
            {
              is_enter_reroll_phase = 1;
              if ( *(_BYTE *)(((unsigned __int64)reroll_count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)reroll_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reroll_count >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(reroll_count);
              }
              __l = *reroll_count;
              v32 = std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              v33 = std::map<proto::GCGControllerValue,unsigned int>::operator[](
                      &v32->controller_id_2_action_count_map_,
                      (const std::map<proto::GCGControllerValue,unsigned int>::key_type *)(v3 + 48));
              v34 = v33;
              if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v33);
              }
              *v34 = __l;
              LODWORD(v51._M_array) = *(_DWORD *)(v3 + 48);
              if ( *(_BYTE *)(((unsigned __int64)reroll_count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)reroll_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reroll_count >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(reroll_count);
              }
              HIDWORD(v51._M_array) = *reroll_count;
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(
                &param_vec,
                (std::initializer_list<unsigned int>)__PAIR128__(2LL, &v51),
                &__a);
              GCGGameMode::sendClientPerform(game_mode, GCG_PERFORM_REROLL, &param_vec);
              std::vector<unsigned int>::~vector(&param_vec);
              std::allocator<unsigned int>::~allocator(&__a);
            }
          }
          if ( is_enter_reroll_phase )
          {
            PhaseMgr = GCGGameMode::getPhaseMgr(game_mode);
            std::shared_ptr<GCGPhaseParam>::shared_ptr(
              (std::shared_ptr<GCGPhaseParam> *const)&v51._M_len,
              (const std::shared_ptr<GCGPhaseParam> *)(v3 + 160));
            GCGPhaseMgr::toSpecialPhase(PhaseMgr, GCG_PHASE_REROLL, (GCGPhaseParamPtr *)&v51._M_len);
            std::shared_ptr<GCGPhaseParam>::~shared_ptr((std::shared_ptr<GCGPhaseParam> *const)&v51._M_len);
          }
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            1988);
          v36 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v53,
                  (const char (*)[58])"GCGExecEffectReroll doEffect succ, is_enter_reroll_phase:");
          v37 = common::milog::MiLogStream::operator<<(v36, is_enter_reroll_phase);
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v53);
          v7 = 0;
        }
        std::shared_ptr<GCGPhaseParam>::~shared_ptr((std::shared_ptr<GCGPhaseParam> *const)(v3 + 160));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectReroll>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectReroll> *const)(v3 + 64));
  v38 = v7;
  if ( v55 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v38;
};

// Line 1994: range 000000000E17904A-000000000E17974A
int32_t __cdecl GCGExecEffectSetDamageElement::doEffect(
        GCGExecEffectSetDamageElement *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  data::GCGEffectTargetChooseType *p_choose_type; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GCGSkillLogic *SkillLogic; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int32_t v21; // eax
  GCGGameMode *game_mode; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-150h] BYREF
  std::string val; // [rsp+50h] [rbp-130h] BYREF
  char v25[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 22 cur_controller_id:2014 64 16 41 config_effect_set_damage_element_ptr:1995 96 16 14 ski"
                        "ll_ptr:2001 128 16 19 owned_card_ptr:2008 160 32 21 change_var_param:2016";
  *(_QWORD *)(v3 + 16) = GCGExecEffectSetDamageElement::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectSetDamageElement,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectSetDamageElement>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectSetDamageElement> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      1998);
    v6 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           &v23,
           (const char (*)[79])"GCGExecEffectSetDamageElement config_effect_set_damage_element_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2004);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[57])"GCGExecEffectSetDamageElement doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2011);
        v10 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                &v23,
                (const char (*)[68])"GCGExecEffectSetDamageElement failed for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 48) = GCGCard::getControllerId(v11);
        *(_QWORD *)(v3 + 160) = 0LL;
        *(_QWORD *)(v3 + 168) = 0LL;
        *(_QWORD *)(v3 + 176) = 0LL;
        *(_QWORD *)(v3 + 184) = 0LL;
        v12 = std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_target_camp = &v12->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_target_camp);
        }
        *(_DWORD *)(v3 + 160) = v12->target_camp;
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v14->target_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v14->target_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v14 = (std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->target_type);
        }
        *(_DWORD *)(v3 + 164) = v14->target_type;
        v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_choose_type = &v15->choose_type;
        if ( *(_BYTE *)(((unsigned __int64)p_choose_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_choose_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_choose_type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_choose_type);
        }
        *(_DWORD *)(v3 + 168) = v15->choose_type;
        *(_DWORD *)(v3 + 176) = 17;
        *(_DWORD *)(v3 + 184) = 1;
        v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v17->element_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->element_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v17 = (std::__shared_ptr_access<data::ConfigGCGExecEffectSetDamageElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v17->element_type);
        }
        *(_DWORD *)(v3 + 188) = v17->element_type;
        SkillLogic = GCGGameMode::getSkillLogic(game_mode);
        GCGSkillLogic::changeCardVarHandler(
          SkillLogic,
          *(GCGControllerValue *)(v3 + 48),
          (const EffectChangeCardVarParam *)(v3 + 160),
          skill_param);
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2024);
        v19 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v23,
                (const char (*)[59])"GCGExecEffectSetDamageElement doEffect, cur_controller_id:");
        v20 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v19,
                (const proto::GCGControllerValue *)(v3 + 48));
        GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v7 = 0;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectSetDamageElement>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectSetDamageElement> *const)(v3 + 64));
  v21 = v7;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v21;
};

// Line 2030: range 000000000E17A7B8-000000000E17B048
int32_t __cdecl GCGExecEffectAbsorbUnusedDice::doEffect(
        GCGExecEffectAbsorbUnusedDice *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCampType *v15; // rax
  char v16; // al
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  data::GCGEffectCampType *v18; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  data::GCGEffectCampType *v20; // rax
  char v21; // al
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // r14
  int32_t v27; // eax
  GCGControllerValue other_controller_id; // [rsp+24h] [rbp-1FCh]
  GCGGameMode *game_mode; // [rsp+28h] [rbp-1F8h]
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-1D0h] BYREF
  std::string val; // [rsp+70h] [rbp-1B0h] BYREF
  char v33[400]; // [rsp+90h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 22 cur_controller_id:2050 64 16 41 config_effect_absorb_unused_dice_ptr:2031 96 16 14 ski"
                        "ll_ptr:2037 128 16 19 owned_card_ptr:2043 160 16 17 union_log_ss:2049 192 40 21 absorb_dice_func"
                        ":2055 272 48 36 cur_effect_absorb_dice_type_num:2053";
  *(_QWORD *)(v3 + 16) = GCGExecEffectAbsorbUnusedDice::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862730] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectAbsorbUnusedDice,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectAbsorbUnusedDice>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectAbsorbUnusedDice> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      2034);
    v6 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           &v31,
           (const char (*)[79])"GCGExecEffectAbsorbUnusedDice config_effect_absorb_unused_dice_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2040);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[57])"GCGExecEffectAbsorbUnusedDice doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v8);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2046);
        v9 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
               &v31,
               (const char (*)[68])"GCGExecEffectAbsorbUnusedDice failed for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v7 = -1;
      }
      else
      {
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 160));
        v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 48) = GCGCard::getControllerId(v10);
        v11 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        game_mode = GCGSkill::getGameMode(v11);
        std::map<proto::GCGDiceSideType,unsigned int>::map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 272));
        *(_QWORD *)(v3 + 192) = v3 + 160;
        *(_QWORD *)(v3 + 200) = v3 + 64;
        *(_QWORD *)(v3 + 208) = v3 + 272;
        *(_QWORD *)(v3 + 216) = v3 + 128;
        *(_QWORD *)(v3 + 224) = game_mode;
        v12 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_target_camp = &v12->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_target_camp);
        }
        if ( v12->target_camp == CAMP_FRIENDLY )
          goto LABEL_16;
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v15 = &v14->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        if ( v14->target_camp )
          v16 = 0;
        else
LABEL_16:
          v16 = 1;
        if ( v16 )
          GCGExecEffectAbsorbUnusedDice::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(proto::GCGControllerValue)#1}::operator()(
            (const GCGExecEffectAbsorbUnusedDice::doEffect::<lambda(GCGControllerValue)> *const)(v3 + 192),
            *(GCGControllerValue *)(v3 + 48));
        v17 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v18 = &v17->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        if ( v17->target_camp == CAMP_ENEMY )
          goto LABEL_26;
        v19 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v20 = &v19->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        if ( v19->target_camp )
          v21 = 0;
        else
LABEL_26:
          v21 = 1;
        if ( v21 )
        {
          Duel = GCGGameMode::getDuel(game_mode);
          other_controller_id = (unsigned int)GCGDuel::getOtherControllerId(
                                                Duel,
                                                (GCGControllerValue)*(_DWORD *)(v3 + 48));
          GCGExecEffectAbsorbUnusedDice::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(proto::GCGControllerValue)#1}::operator()(
            (const GCGExecEffectAbsorbUnusedDice::doEffect::<lambda(GCGControllerValue)> *const)(v3 + 192),
            other_controller_id);
        }
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2144);
        v23 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v30,
                (const char (*)[59])"GCGExecEffectAbsorbUnusedDice doEffect, cur_controller_id:");
        v24 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v23,
                (const proto::GCGControllerValue *)(v3 + 48));
        v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" absord:");
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
          (std::string *)&v31,
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 160));
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)&v31);
        GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, &val);
        std::string::~string(&val);
        std::string::~string(&v31);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v7 = 0;
        std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 272));
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 160));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectAbsorbUnusedDice>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectAbsorbUnusedDice> *const)(v3 + 64));
  v27 = v7;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return v27;
};

// Line 2055: range 000000000E1798BE-000000000E17A7B6
void __cdecl GCGExecEffectAbsorbUnusedDice::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(proto::GCGControllerValue)#1}::operator()(
        const GCGExecEffectAbsorbUnusedDice::doEffect::<lambda(GCGControllerValue)> *const __closure,
        GCGControllerValue controller_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGDuel *Duel; // rax
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rax
  std::vector<proto::GCGDiceSideType>::reference v8; // rax
  _DWORD *v9; // rdx
  unsigned __int64 v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v11; // rax
  _QWORD *v12; // rdx
  unsigned int *v13; // r8
  std::pair<unsigned int,unsigned int> *M_current; // r14
  std::vector<std::pair<unsigned int,unsigned int>>::iterator v15; // rax
  GCGExecEffectAbsorbUnusedDice::doEffect::<lambda(GCGControllerValue)>::operator()::<lambda(std::pair<unsigned int, unsigned int>, std::pair<unsigned int, unsigned int>)> v16; // dl
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >::reference v17; // rax
  _QWORD *v18; // rdx
  std::vector<proto::GCGDiceSideType>::size_type v19; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t AbsorbUnusedDiceNum; // r14d
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::vector<proto::GCGDiceSideType>::reference v23; // rax
  _DWORD *v24; // rdx
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  GCGCard *v26; // rax
  uint32_t AbsorbUnusedDiceNumByType; // r14d
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  char v29; // al
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  uint32_t *p_max_absorb_num_per_dice_type_one_time; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v32; // rax
  uint32_t *v33; // rdx
  uint32_t v34; // r14d
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  uint32_t *v36; // rax
  char v37; // al
  GCGCard *v38; // rax
  unsigned __int64 v39; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v40; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v41; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v42; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v43; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v44; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v45; // rax
  std::vector<proto::GCGDiceSideType>::size_type v46; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  uint32_t v48; // r14d
  std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::vector<proto::GCGDiceSideType>::reference v50; // rax
  _DWORD *v51; // rdx
  GCGCard *v52; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v53; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v54; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v55; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v56; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v57; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v58; // rax
  GCGDiceZone *v59; // rax
  uint32_t idx; // [rsp+1Ch] [rbp-1F4h]
  proto::GCGDiceSideType target_dice_side_type; // [rsp+24h] [rbp-1ECh]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-1E8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1E0h] BYREF
  GCGField *target_field; // [rsp+38h] [rbp-1D8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-1D0h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *dice_type; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *dice_count; // [rsp+58h] [rbp-1B8h]
  char v69[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 8 idx:2081 48 4 8 idx:2114 64 8 25 dice_type_count_pair:2078 96 24 13 dice_vec:2058 160 2"
                        "4 29 dice_type_count_pair_vec:2062 224 48 20 absorb_dice_set:2059 304 48 24 dice_type_count_map:2064";
  *(_QWORD *)(v2 + 16) = GCGExecEffectAbsorbUnusedDice::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(proto::GCGControllerValue)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__game_mode);
  Duel = GCGGameMode::getDuel(__closure->__game_mode);
  target_field = GCGDuel::getField(Duel, controller_id);
  DiceZone = GCGField::getDiceZone(target_field);
  DiceVec = GCGDiceZone::getDiceVec(DiceZone);
  std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v2 + 96), DiceVec);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 224));
  std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 304));
  for ( idx = 0;
        idx < std::vector<proto::GCGDiceSideType>::size((const std::vector<proto::GCGDiceSideType> *const)(v2 + 96));
        ++idx )
  {
    v8 = std::vector<proto::GCGDiceSideType>::operator[]((std::vector<proto::GCGDiceSideType> *const)(v2 + 96), idx);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v2 + 48) = *v9;
    v10 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                              (std::map<unsigned int,unsigned int> *const)(v2 + 304),
                              (std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load4(v10);
    ++*(_DWORD *)v10;
  }
  __for_range = (std::map<unsigned int,unsigned int> *)(v2 + 304);
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v2 + 304))._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v2 + 304))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v12 = v11;
    if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v11, 8LL);
    }
    *(_QWORD *)(v2 + 64) = *v12;
    dice_type = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 64));
    dice_count = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 64));
    std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int const&,unsigned int &>(
      (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160),
      dice_type,
      dice_count,
      dice_type,
      v13);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  M_current = std::vector<std::pair<unsigned int,unsigned int>>::end((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160))._M_current;
  v15._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160))._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>,GCGExecEffectAbsorbUnusedDice::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(proto::GCGControllerValue)#1}::operator() const(proto::GCGControllerValue)::{lambda(std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>)#1}>(
    v15,
    (__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)M_current,
    v16);
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 304));
  __for_range_0 = (std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 160);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_end) )
  {
    v17 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
    v18 = v17;
    if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v17 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v17, 8LL);
    }
    *(_QWORD *)(v2 + 64) = *v18;
    target_dice_side_type = *(_DWORD *)(v2 + 64);
    for ( *(_DWORD *)(v2 + 32) = 0; ; ++*(_DWORD *)(v2 + 32) )
    {
      v19 = *(unsigned int *)(v2 + 32);
      if ( v19 >= std::vector<proto::GCGDiceSideType>::size((const std::vector<proto::GCGDiceSideType> *const)(v2 + 96)) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__owned_card_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__owned_card_ptr);
      v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__owned_card_ptr);
      AbsorbUnusedDiceNum = GCGCard::getAbsorbUnusedDiceNum(v20);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_effect_absorb_unused_dice_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__config_effect_absorb_unused_dice_ptr);
      v22 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__config_effect_absorb_unused_dice_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v22->max_absorb_num_total >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v22->max_absorb_num_total >> 3) + 0x7FFF8000) <= 3 )
      {
        v22 = (std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v22->max_absorb_num_total);
      }
      if ( AbsorbUnusedDiceNum >= v22->max_absorb_num_total )
        break;
      v23 = std::vector<proto::GCGDiceSideType>::operator[](
              (std::vector<proto::GCGDiceSideType> *const)(v2 + 96),
              *(unsigned int *)(v2 + 32));
      v24 = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      *(_DWORD *)(v2 + 48) = *v24;
      if ( target_dice_side_type == *(_DWORD *)(v2 + 48) && *(_DWORD *)(v2 + 48) && *(_DWORD *)(v2 + 48) != 8 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_effect_absorb_unused_dice_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__config_effect_absorb_unused_dice_ptr);
        v25 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__config_effect_absorb_unused_dice_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v25->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v25->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v25 = (std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v25->max_absorb_num_per_dice_type);
        }
        if ( !v25->max_absorb_num_per_dice_type )
          goto LABEL_49;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__owned_card_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__owned_card_ptr);
        v26 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__owned_card_ptr);
        AbsorbUnusedDiceNumByType = GCGCard::getAbsorbUnusedDiceNumByType(v26, (GCGDiceSideType)*(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_effect_absorb_unused_dice_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__config_effect_absorb_unused_dice_ptr);
        v28 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__config_effect_absorb_unused_dice_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v28->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v28->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v28 = (std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v28->max_absorb_num_per_dice_type);
        }
        if ( AbsorbUnusedDiceNumByType >= v28->max_absorb_num_per_dice_type )
          v29 = 1;
        else
LABEL_49:
          v29 = 0;
        if ( v29 )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_effect_absorb_unused_dice_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__config_effect_absorb_unused_dice_ptr);
        v30 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__config_effect_absorb_unused_dice_ptr);
        p_max_absorb_num_per_dice_type_one_time = &v30->max_absorb_num_per_dice_type_one_time;
        if ( *(_BYTE *)(((unsigned __int64)p_max_absorb_num_per_dice_type_one_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_max_absorb_num_per_dice_type_one_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_absorb_num_per_dice_type_one_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_max_absorb_num_per_dice_type_one_time);
        }
        if ( !v30->max_absorb_num_per_dice_type_one_time )
          goto LABEL_66;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_effect_absorb_dice_type_num >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__cur_effect_absorb_dice_type_num);
        v32 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                __closure->__cur_effect_absorb_dice_type_num,
                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 48));
        v33 = v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        v34 = *v33;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_effect_absorb_unused_dice_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__config_effect_absorb_unused_dice_ptr);
        v35 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__config_effect_absorb_unused_dice_ptr);
        v36 = &v35->max_absorb_num_per_dice_type_one_time;
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v36);
        }
        if ( v34 >= v35->max_absorb_num_per_dice_type_one_time )
          v37 = 1;
        else
LABEL_66:
          v37 = 0;
        if ( v37 )
          break;
        std::set<unsigned int>::emplace<unsigned int &>(
          (std::set<unsigned int> *const)(v2 + 224),
          (unsigned int *)(v2 + 32),
          (unsigned int *)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__owned_card_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__owned_card_ptr);
        v38 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__owned_card_ptr);
        GCGCard::absordUbusedDice(v38, *(GCGDiceSideType *)(v2 + 48), 1u);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_effect_absorb_dice_type_num >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__cur_effect_absorb_dice_type_num);
        v39 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                  __closure->__cur_effect_absorb_dice_type_num,
                                  (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 48));
        if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) != 0 && (char)((v39 & 7) + 3) >= *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
          v39 = __asan_report_load4(v39);
        ++*(_DWORD *)v39;
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        v40 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                __closure->__union_log_ss,
                "[c:");
        v41 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v40, controller_id);
        v42 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v41, ",d:");
        v43 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v42, *(_DWORD *)(v2 + 48));
        v44 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v43, ",idx:");
        v45 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v44, *(_DWORD *)(v2 + 32));
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v45, "]");
      }
    }
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
  }
  for ( *(_DWORD *)(v2 + 48) = 0; ; ++*(_DWORD *)(v2 + 48) )
  {
    v46 = *(unsigned int *)(v2 + 48);
    if ( v46 >= std::vector<proto::GCGDiceSideType>::size((const std::vector<proto::GCGDiceSideType> *const)(v2 + 96)) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__owned_card_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__owned_card_ptr);
    v47 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__owned_card_ptr);
    v48 = GCGCard::getAbsorbUnusedDiceNum(v47);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_effect_absorb_unused_dice_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__config_effect_absorb_unused_dice_ptr);
    v49 = std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__config_effect_absorb_unused_dice_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v49->max_absorb_num_total >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v49->max_absorb_num_total >> 3) + 0x7FFF8000) <= 3 )
    {
      v49 = (std::__shared_ptr_access<data::ConfigGCGExecEffectAbsorbUnusedDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v49->max_absorb_num_total);
    }
    if ( v48 >= v49->max_absorb_num_total )
      break;
    v50 = std::vector<proto::GCGDiceSideType>::operator[](
            (std::vector<proto::GCGDiceSideType> *const)(v2 + 96),
            *(unsigned int *)(v2 + 48));
    v51 = v50;
    if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v50);
    }
    if ( *v51 == 8 )
    {
      std::set<unsigned int>::emplace<unsigned int &>(
        (std::set<unsigned int> *const)(v2 + 224),
        (unsigned int *)(v2 + 48),
        (unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__owned_card_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__owned_card_ptr);
      v52 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__owned_card_ptr);
      GCGCard::absordUbusedDice(v52, GCG_DICE_SIDE_PAIMON, 1u);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v53 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(__closure->__union_log_ss, "[c:");
      v54 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v53, controller_id);
      v55 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v54, ",d:");
      v56 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v55, 8u);
      v57 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v56, ",idx:");
      v58 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v57, *(_DWORD *)(v2 + 48));
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v58, "]");
    }
  }
  v59 = GCGField::getDiceZone(target_field);
  GCGDiceZone::costDice(v59, (const std::set<unsigned int> *)(v2 + 224), GCG_REASON_EFFECT);
  std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 224));
  std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v2 + 96));
  if ( v69 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2073: range 000000000E17974C-000000000E1798BD
__int64 __fastcall GCGExecEffectAbsorbUnusedDice::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(proto::GCGControllerValue)#1}::operator() const(proto::GCGControllerValue)::{lambda(std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>)#1}::operator()(
        const GCGExecEffectAbsorbUnusedDice::doEffect::<lambda(GCGControllerValue)>::operator()::<lambda(std::pair<unsigned int, unsigned int>, std::pair<unsigned int, unsigned int>)> *const __closure,
        std::pair<unsigned int,unsigned int> a,
        std::pair<unsigned int,unsigned int> b)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rdx
  _DWORD *v6; // rax
  __int64 v7; // rdi
  char v8; // si
  unsigned int v9; // edx
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 96);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 6 a:2073 64 8 6 b:2073";
  *(_QWORD *)(v3 + 16) = GCGExecEffectAbsorbUnusedDice::doEffect(GCGSkillUseParam const&,GCGSkillResult &)::{lambda(proto::GCGControllerValue)#1}::operator() const(proto::GCGControllerValue)::{lambda(std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>)#1}::operator();
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(std::pair<unsigned int,unsigned int> *)(v3 + 32) = a;
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = b;
  if ( *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) )
  {
    v6 = (_DWORD *)__asan_report_load4(v3 + 36);
  }
  LODWORD(v7) = *((_DWORD *)v5 - 15);
  v8 = *(_BYTE *)(((unsigned __int64)(v5 - 28) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)v5 - 32 + 4) & 7) + 3) >= v8 )
  {
    v7 = (__int64)(v5 - 28);
    v6 = (_DWORD *)__asan_report_load4(v7);
  }
  v9 = *((_DWORD *)v5 - 7);
  LOBYTE(v9) = (unsigned int)v7 > v9;
  if ( v12 == (char *)v3 )
  {
    *((_QWORD *)v6 + 268431360) = 0LL;
    v6[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *((_QWORD *)v6 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v6[536862722] = -168430091;
  }
  return v9;
};

// Line 2150: range 000000000E17B04A-000000000E17BB8E
int32_t __cdecl GCGEffectModifiedCharacterAssignUseSkill::doEffect(
        GCGEffectModifiedCharacterAssignUseSkill *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // r14d
  uint32_t *p_skill_id; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // r14
  int32_t v29; // eax
  int __u; // [rsp+2Ch] [rbp-184h] BYREF
  GCGGameMode *game_mode; // [rsp+30h] [rbp-180h]
  std::optional<unsigned int> v33; // [rsp+38h] [rbp-178h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-170h] BYREF
  std::string val; // [rsp+60h] [rbp-150h] BYREF
  char v36[304]; // [rsp+80h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 24 assign_use_skill_id:2194 64 16 22 config_effect_ptr:2151 96 16 14 skill_ptr:2157 128 1"
                        "6 18 cur_phase_ptr:2164 160 16 18 this_card_ptr:2170 192 16 19 owner_card_ptr:2176 224 16 18 use_skill_ptr:2188";
  *(_QWORD *)(v3 + 16) = GCGEffectModifiedCharacterAssignUseSkill::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectModifiedCharacterAssignUseSkill>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGEffectModifiedCharacterAssignUseSkill> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      2154);
    v6 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v34,
           (const char (*)[71])"GCGEffectModifiedCharacterAssignUseSkill config_effect_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2160);
      common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[68])"GCGEffectModifiedCharacterAssignUseSkill doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      GCGGameMode::getPhaseMgr(game_mode);
      GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v3 + 128));
      if ( std::operator==<GCGPhaseBase>(0LL, (const std::shared_ptr<GCGPhaseBase> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2167);
        v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
               &v34,
               (const char (*)[66])"GCGEffectModifiedCharacterAssignUseSkill cur_phase_ptr is nullptr");
        GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v7 = -1;
      }
      else
      {
        v10 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        GCGSkill::getThisCard((const GCGSkill *const)(v3 + 160), (const GCGSkillUseParam *)v10);
        if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 160)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            2173);
          common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[63])"GCGEffectModifiedCharacterAssignUseSkill this_card_ptr is null");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
        else
        {
          std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          GCGCard::getOwnerCard((GCGCard *const)(v3 + 192));
          if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 192)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_effect.cpp",
              "doEffect",
              2179);
            common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[64])"GCGEffectModifiedCharacterAssignUseSkill owner_card_ptr is null");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v7 = -1;
          }
          else
          {
            v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            if ( !GCGUtils::isCanAttack(v11) )
            {
              common::milog::MiLogStream::create(
                &v34,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                2185);
              v12 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      &v34,
                      (const char (*)[61])"GCGEffectModifiedCharacterAssignUseSkillis can attack fail. ");
              v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              GCGCard::getDesc[abi:cxx11](&val, v13);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v34);
              v7 = -1;
            }
            else
            {
              v14 = (unsigned int)std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              p_skill_id = &std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->skill_id;
              if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(p_skill_id);
              }
              GCGCard::getSkill((GCGCard *const)(v3 + 224), v14);
              if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 224)) )
              {
                common::milog::MiLogStream::create(
                  &v34,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  2191);
                v16 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                        &v34,
                        (const char (*)[72])"GCGEffectModifiedCharacterAssignUseSkill card getSkill fail, skill_id: ");
                v17 = std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->skill_id);
                v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                GCGCard::getDesc[abi:cxx11](&val, v19);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &val);
                std::string::~string(&val);
                common::milog::MiLogStream::~MiLogStream(&v34);
                v7 = -1;
              }
              else
              {
                __u = 0;
                *(_DWORD *)(v3 + 48) = std::optional<unsigned int>::value_or<int>(
                                         &result->assign_use_skill_id_opt,
                                         &__u);
                if ( *(_DWORD *)(v3 + 48) )
                {
                  common::milog::MiLogStream::create(
                    &v34,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    2197);
                  v20 = common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(
                          &v34,
                          (const char (*)[87])"GCGEffectModifiedCharacterAssignUseSkill alreay assign use skill, assign_use_skill_id:");
                  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v20,
                          (const unsigned int *)(v3 + 48));
                  v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v21,
                          (const char (*)[13])", skill_id: ");
                  v23 = std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &v23->skill_id);
                  GCGEffectBase::getDesc[abi:cxx11](&val, this);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &val);
                  std::string::~string(&val);
                  common::milog::MiLogStream::~MiLogStream(&v34);
                  v7 = -1;
                }
                else
                {
                  v25 = std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                  std::optional<unsigned int>::optional<unsigned int &,true>(&v33, &v25->skill_id);
                  if ( *(_BYTE *)(((unsigned __int64)&result->assign_use_skill_id_opt >> 3) + 0x7FFF8000) )
                    __asan_report_store8(&result->assign_use_skill_id_opt);
                  result->assign_use_skill_id_opt = v33;
                  common::milog::MiLogStream::create(
                    &v34,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/skill/gcg_effect.cpp",
                    "doEffect",
                    2202);
                  v26 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                          &v34,
                          (const char (*)[58])"GCGEffectModifiedCharacterAssignUseSkill succ, skill_id: ");
                  v27 = std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectModifiedCharacterAssignUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                  v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v27->skill_id);
                  GCGEffectBase::getDesc[abi:cxx11](&val, this);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &val);
                  std::string::~string(&val);
                  common::milog::MiLogStream::~MiLogStream(&v34);
                  v7 = 0;
                }
              }
              std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 224));
            }
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
      }
      std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGEffectModifiedCharacterAssignUseSkill>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectModifiedCharacterAssignUseSkill> *const)(v3 + 64));
  v29 = v7;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v29;
};

// Line 2208: range 000000000E17BB90-000000000E17C393
int32_t __cdecl GCGEffectFixRerollDice::doEffect(
        GCGEffectFixRerollDice *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  uint32_t *p_limit_reroll_time; // rax
  GCGDiceZone *DiceZone; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  unsigned __int64 v22; // rax
  void (__fastcall *v23)(GCGEffectFixRerollDice *const, GCGGameMode *, GCGField *, _QWORD, _QWORD, GCGSkillResult *); // r15
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  data::GCGEffectDiceType *p_fixed_dice_type; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int32_t v31; // eax
  uint32_t fixed_num; // [rsp+14h] [rbp-14Ch]
  GCGControllerValue cur_controller_id; // [rsp+30h] [rbp-130h]
  unsigned __int64 v35; // [rsp+38h] [rbp-128h] BYREF
  GCGGameMode *game_mode; // [rsp+40h] [rbp-120h]
  GCGField *field; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v38; // [rsp+50h] [rbp-110h] BYREF
  std::string val; // [rsp+70h] [rbp-F0h] BYREF
  char v40[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 19 cur_reroll_idx:2233 64 16 38 config_effect_fix_reroll_dice_ptr:2209 96 16 14 skill_ptr"
                        ":2215 128 16 14 owner_ptr:2222";
  *(_QWORD *)(v3 + 16) = GCGEffectFixRerollDice::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGEffectFixRerollDice,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGEffectFixRerollDice>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGEffectFixRerollDice> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      2212);
    v6 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           &v38,
           (const char (*)[69])"GCGEffectFixRerollDice config_effect_fix_reroll_dice_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v38);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2218);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[50])"GCGEffectFixRerollDice doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v8);
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v9);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2225);
        v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v38,
                (const char (*)[44])"GCGEffectFixRerollDice owner_ptr is nullptr");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v38);
        v7 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        cur_controller_id = GCGCard::getControllerId(v11);
        Duel = GCGGameMode::getDuel(game_mode);
        field = GCGDuel::getField(Duel, cur_controller_id);
        v13 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_limit_reroll_time = &v13->limit_reroll_time;
        if ( *(_BYTE *)(((unsigned __int64)p_limit_reroll_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_limit_reroll_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_limit_reroll_time >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(p_limit_reroll_time);
        }
        if ( !v13->limit_reroll_time )
          goto LABEL_33;
        DiceZone = GCGField::getDiceZone(field);
        *(_DWORD *)(v3 + 48) = GCGDiceZone::getRerollIdx(DiceZone);
        v16 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v17 = &v16->limit_reroll_time;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        if ( v16->limit_reroll_time == *(_DWORD *)(v3 + 48) )
        {
LABEL_33:
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v22 = (unsigned __int64)(this->_vptr_GCGEffectBase + 5);
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            __asan_report_load8(this->_vptr_GCGEffectBase + 5);
          v23 = *(void (__fastcall **)(GCGEffectFixRerollDice *const, GCGGameMode *, GCGField *, _QWORD, _QWORD, GCGSkillResult *))v22;
          v24 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v24->fixed_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v24->fixed_num >> 3) + 0x7FFF8000) <= 3 )
          {
            v24 = (std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v24->fixed_num);
          }
          fixed_num = v24->fixed_num;
          v25 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          p_fixed_dice_type = &v25->fixed_dice_type;
          if ( *(_BYTE *)(((unsigned __int64)p_fixed_dice_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_fixed_dice_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_fixed_dice_type >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(p_fixed_dice_type);
          }
          v23(this, game_mode, field, (unsigned int)v25->fixed_dice_type, fixed_num, result);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            2242);
          v27 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[34])"GCGEffectFixRerollDice fixed num:");
          v28 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &v28->fixed_num);
          v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])" size:");
          v35 = std::vector<proto::GCGDiceSideType>::size(&result->fix_dice_vec_result);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v30, &v35);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            2236);
          v18 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[61])"GCGEffectFixRerollDice reroll idx not match, cur_reroll_idx:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 48));
          v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v19,
                  (const char (*)[20])" target_reroll_idx:");
          v21 = std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffectFixRerollDice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->limit_reroll_time);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGEffectFixRerollDice>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffectFixRerollDice> *const)(v3 + 64));
  v31 = v7;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v31;
};

// Line 2248: range 000000000E17C394-000000000E17CF26
int32_t __cdecl GCGExecEffectReviveCharacter::doEffect(
        GCGExecEffectReviveCharacter *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  data::GCGEffectCampType target_camp; // r14d
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v21; // rax
  _DWORD *v22; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  GCGCard *v27; // r14
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int32_t v33; // eax
  data::GCGChooseTargetCharaterType target_charater_type; // [rsp+14h] [rbp-1DCh]
  GCGControllerValue cur_controller_id; // [rsp+30h] [rbp-1C0h]
  int32_t ret; // [rsp+34h] [rbp-1BCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-1B8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1B0h] BYREF
  GCGGameMode *game_mode; // [rsp+48h] [rbp-1A8h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+50h] [rbp-1A0h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *config_revive_heal_amount; // [rsp+58h] [rbp-198h]
  std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-190h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+68h] [rbp-188h] BYREF
  std::shared_ptr<GCGCard> p_this_card_ptr; // [rsp+70h] [rbp-180h] BYREF
  common::milog::MiLogStream v45; // [rsp+80h] [rbp-170h] BYREF
  std::string val; // [rsp+A0h] [rbp-150h] BYREF
  char v47[304]; // [rsp+C0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 14 card_guid:2279 48 4 29 final_revive_heal_amount:2287 64 16 22 config_revive_ptr:2249 9"
                        "6 16 14 skill_ptr:2255 128 16 19 owned_card_ptr:2262 160 16 20 target_card_ptr:2281 192 24 18 ca"
                        "rd_guid_vec:2270";
  *(_QWORD *)(v3 + 16) = GCGExecEffectReviveCharacter::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectReviveCharacter,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 64));
  if ( std::operator==<data::ConfigGCGExecEffectReviveCharacter>(
         (const std::shared_ptr<data::ConfigGCGExecEffectReviveCharacter> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      2252);
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v45,
           (const char (*)[59])"GCGExecEffectReviveCharacter effect_damage_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 96));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2258);
      v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v45,
             (const char (*)[62])"GCGExecEffectReviveCharacter failed for skill_ptr is nullptr ");
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v7 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      game_mode = GCGSkill::getGameMode(v9);
      v10 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 128), (const GCGSkillUseParam *)v10);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2265);
        v11 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                &v45,
                (const char (*)[67])"GCGExecEffectReviveCharacter failed for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v45);
        v7 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        cur_controller_id = GCGCard::getControllerId(v12);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
        SkillLogic = GCGGameMode::getSkillLogic(game_mode);
        v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v14->target_character >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v14->target_character >> 3) + 0x7FFF8000) <= 3 )
        {
          v14 = (std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->target_character);
        }
        target_charater_type = v14->target_character;
        v15 = std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_target_camp = &v15->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_target_camp);
        }
        target_camp = v15->target_camp;
        std::shared_ptr<GCGCard>::shared_ptr(&p_this_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 128));
        ret = GCGSkillLogic::getTargetCardVec(
                SkillLogic,
                skill_param,
                &p_this_card_ptr,
                target_camp,
                target_charater_type,
                cur_controller_id,
                (std::vector<unsigned int> *)(v3 + 192));
        std::shared_ptr<GCGCard>::~shared_ptr(&p_this_card_ptr);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_effect.cpp",
            "doEffect",
            2274);
          v18 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v45,
                  (const char (*)[53])"GCGExecEffectReviveCharacter target card is nullptr ");
          GCGEffectBase::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v7 = ret;
        }
        else
        {
          v19 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          v20 = std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectReviveCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          __in = GCGSkill::getDeclaredValueByKey(v19, &v20->declared_heal_amount_key.key);
          _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
          config_revive_heal_amount = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
          __for_range = (std::vector<unsigned int> *)(v3 + 192);
          __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 192))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 192))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            v22 = v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            *(_DWORD *)(v3 + 32) = *v22;
            CardMgr = GCGGameMode::getCardMgr(game_mode);
            GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 160), CardMgr, *(_DWORD *)(v3 + 32));
            if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_effect.cpp",
                "doEffect",
                2284);
              v24 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                      &v45,
                      (const char (*)[69])"GCGExecEffectReviveCharacter find target_card_ptr failed, card_guid:");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v3 + 32));
              GCGEffectBase::getDesc[abi:cxx11](&val, this);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &val);
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v45);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)config_revive_heal_amount >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)config_revive_heal_amount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_revive_heal_amount >> 3)
                                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(config_revive_heal_amount);
              }
              *(_DWORD *)(v3 + 48) = *config_revive_heal_amount;
              if ( !*config_revive_heal_amount )
              {
                v26 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                *(_DWORD *)(v3 + 48) = GCGCard::getMaxHp(v26);
              }
              v27 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              std::shared_ptr<GCGCard>::shared_ptr(&p_this_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 128));
              LOBYTE(v27) = GCGCard::reviveCharacter(
                              v27,
                              *(_DWORD *)(v3 + 48),
                              &p_this_card_ptr,
                              GCG_REASON_EFFECT_REVIVE) != 0;
              std::shared_ptr<GCGCard>::~shared_ptr(&p_this_card_ptr);
              if ( (_BYTE)v27 )
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_game/skill/gcg_effect.cpp",
                  "doEffect",
                  2296);
                v28 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v45,
                        (const char (*)[44])"GCGExecEffectReviveCharacter revive target:");
                v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                GCGCard::getDesc[abi:cxx11](&val, v29);
                v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &val);
                v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v30,
                        (const char (*)[14])" heal amount:");
                v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v31,
                        (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])" failed");
                std::string::~string(&val);
                common::milog::MiLogStream::~MiLogStream(&v45);
              }
            }
            std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          v7 = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 96));
  }
  std::shared_ptr<data::ConfigGCGExecEffectReviveCharacter>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectReviveCharacter> *const)(v3 + 64));
  v33 = v7;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v33;
};

// Line 2305: range 000000000E17CF28-000000000E17D91D
int32_t __cdecl GCGExecEffectAdvanceProcessWaitingCharacter::doEffect(
        GCGExecEffectAdvanceProcessWaitingCharacter *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGSkillLogic *SkillLogic; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  data::GCGEffectCampType *v17; // rax
  data::GCGEffectCampType *v18; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  uint32_t *p_character_num_limit; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  __gnu_cxx::__normal_iterator<proto::GCGControllerValue*,std::vector<proto::GCGControllerValue> >::reference v23; // rax
  proto::GCGControllerValue *v24; // rdx
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v26; // r14
  int32_t v27; // eax
  unsigned int target_camp; // [rsp+2Ch] [rbp-184h] BYREF
  GCGControllerValue cur_controller_id; // [rsp+30h] [rbp-180h]
  proto::GCGControllerValue controller_id; // [rsp+34h] [rbp-17Ch]
  std::vector<proto::GCGControllerValue>::iterator __for_begin; // [rsp+38h] [rbp-178h] BYREF
  std::vector<proto::GCGControllerValue>::iterator __for_end; // [rsp+40h] [rbp-170h] BYREF
  GCGGameMode *game_mode; // [rsp+48h] [rbp-168h]
  std::vector<proto::GCGControllerValue> *__for_range; // [rsp+50h] [rbp-160h]
  GCGField *field; // [rsp+58h] [rbp-158h]
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-150h] BYREF
  std::string val; // [rsp+80h] [rbp-130h] BYREF
  char v38[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 22 config_effect_ptr:2306 64 16 14 skill_ptr:2312 96 16 19 owned_card_ptr:2318 128 16 10"
                        " param:2338 160 24 31 alternative_controller_vec:2325";
  *(_QWORD *)(v3 + 16) = GCGExecEffectAdvanceProcessWaitingCharacter::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      2309);
    v6 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v36,
           (const char (*)[74])"GCGExecEffectAdvanceProcessWaitingCharacter config_effect_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v7 = -1;
    goto LABEL_35;
  }
  GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 64));
  if ( !std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 64)) )
  {
    v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    GCGSkill::getThisCard((const GCGSkill *const)(v3 + 96), (const GCGSkillUseParam *)v8);
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2321);
      v9 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
             &v36,
             (const char (*)[82])"GCGExecEffectAdvanceProcessWaitingCharacter failed for owned_card_ptr is nullptr ");
      GCGEffectBase::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v36);
      v7 = -1;
LABEL_33:
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
      goto LABEL_34;
    }
    v10 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    game_mode = GCGSkill::getGameMode(v10);
    std::vector<proto::GCGControllerValue>::vector((std::vector<proto::GCGControllerValue> *const)(v3 + 160));
    v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    cur_controller_id = GCGCard::getControllerId(v11);
    SkillLogic = GCGGameMode::getSkillLogic(game_mode);
    v13 = std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_target_camp = &v13->target_camp;
    if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_target_camp);
    }
    if ( GCGSkillLogic::getControllerVecByCampType(
           SkillLogic,
           cur_controller_id,
           v13->target_camp,
           (std::vector<proto::GCGControllerValue> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2329);
      v15 = common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[90])"GCGExecEffectAdvanceProcessWaitingCharacter get controller by camptype fail, target_camp:");
      v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v17 = &v16->target_camp;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
    }
    else
    {
      if ( !std::vector<proto::GCGControllerValue>::empty((const std::vector<proto::GCGControllerValue> *const)(v3 + 160)) )
      {
        *(_DWORD *)(v3 + 128) = 0;
        *(_DWORD *)(v3 + 132) = 0;
        *(_BYTE *)(v3 + 136) = 0;
        *(_DWORD *)(v3 + 140) = 0;
        v19 = std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v19->process_num_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v19->process_num_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          v19 = (std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v19->process_num_limit);
        }
        *(_DWORD *)(v3 + 128) = v19->process_num_limit;
        *(_BYTE *)(v3 + 136) = 1;
        v20 = std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        p_character_num_limit = &v20->character_num_limit;
        if ( *(_BYTE *)(((unsigned __int64)p_character_num_limit >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_character_num_limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_character_num_limit >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(p_character_num_limit);
        }
        *(_DWORD *)(v3 + 140) = v20->character_num_limit;
        v22 = std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v22->max_index_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v22->max_index_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          v22 = (std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v22->max_index_limit);
        }
        *(_DWORD *)(v3 + 132) = v22->max_index_limit;
        __for_range = (std::vector<proto::GCGControllerValue> *)(v3 + 160);
        __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((std::vector<proto::GCGControllerValue> *const)(v3 + 160))._M_current;
        __for_end._M_current = std::vector<proto::GCGControllerValue>::end((std::vector<proto::GCGControllerValue> *const)(v3 + 160))._M_current;
        while ( __gnu_cxx::operator!=<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>(
                  &__for_begin,
                  &__for_end) )
        {
          v23 = __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
          v24 = v23;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v23);
          }
          controller_id = *v24;
          Duel = GCGGameMode::getDuel(game_mode);
          field = GCGDuel::getField(Duel, controller_id);
          GCGField::processWaitingCharacter(field, (const ProcessWaitingCharacterParam *)(v3 + 128), GCG_REASON_EFFECT);
          __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2348);
        v26 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v36,
                (const char (*)[58])"GCGExecEffectAdvanceProcessWaitingCharacter doEffect succ");
        GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v7 = 0;
        goto LABEL_32;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2334);
      v15 = common::milog::MiLogStream::operator<<<char [94],(char *[94])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[94])"GCGExecEffectAdvanceProcessWaitingCharacter alternative_controller_vec is empty, target_camp:");
      v16 = std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v18 = &v16->target_camp;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
    }
    target_camp = v16->target_camp;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &target_camp);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v7 = -1;
LABEL_32:
    std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v3 + 160));
    goto LABEL_33;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/skill/gcg_effect.cpp",
    "doEffect",
    2315);
  common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
    (common::milog::MiLogStream *const)&val,
    (const char (*)[71])"GCGExecEffectAdvanceProcessWaitingCharacter doEffect skill_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  v7 = -1;
LABEL_34:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
LABEL_35:
  std::shared_ptr<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter> *const)(v3 + 32));
  v27 = v7;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v27;
};

// Line 2354: range 000000000E17D91E-000000000E17DF28
int32_t __cdecl GCGExecEffectFinishDuel::doEffect(
        GCGExecEffectFinishDuel *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectFinishDuel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  data::GCGEffectCampType *p_target_camp; // rax
  std::__shared_ptr_access<data::ConfigGCGExecEffectFinishDuel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  data::GCGEffectCampType *v15; // rax
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v17; // r14
  int32_t v18; // eax
  GCGControllerValue win_controller; // [rsp+20h] [rbp-100h]
  GCGControllerValue cur_controller_id; // [rsp+24h] [rbp-FCh]
  GCGGameMode *game_mode; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 22 config_effect_ptr:2355 64 16 14 skill_ptr:2361 96 16 19 owned_card_ptr:2367";
  *(_QWORD *)(v3 + 16) = GCGExecEffectFinishDuel::doEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  std::dynamic_pointer_cast<data::ConfigGCGExecEffectFinishDuel,data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v3 + 32));
  if ( std::operator==<data::ConfigGCGExecEffectFinishDuel>(
         0LL,
         (const std::shared_ptr<data::ConfigGCGExecEffectFinishDuel> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_effect.cpp",
      "doEffect",
      2358);
    v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v22,
           (const char (*)[54])"GCGExecEffectFinishDuel config_effect_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = -1;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v3 + 64));
    if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_effect.cpp",
        "doEffect",
        2364);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[51])"GCGExecEffectFinishDuel doEffect skill_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGSkill::getThisCard((const GCGSkill *const)(v3 + 96), (const GCGSkillUseParam *)v8);
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2370);
        v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
               &v22,
               (const char (*)[62])"GCGExecEffectFinishDuel failed for owned_card_ptr is nullptr ");
        GCGEffectBase::getDesc[abi:cxx11](&val, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v7 = -1;
      }
      else
      {
        v10 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        game_mode = GCGSkill::getGameMode(v10);
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        cur_controller_id = GCGCard::getControllerId(v11);
        win_controller = GCG_CONTROLLER_NONE;
        v12 = std::__shared_ptr_access<data::ConfigGCGExecEffectFinishDuel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectFinishDuel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        p_target_camp = &v12->target_camp;
        if ( *(_BYTE *)(((unsigned __int64)p_target_camp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_target_camp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_target_camp);
        }
        if ( v12->target_camp == CAMP_FRIENDLY )
        {
          win_controller = cur_controller_id;
        }
        else
        {
          v14 = std::__shared_ptr_access<data::ConfigGCGExecEffectFinishDuel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGExecEffectFinishDuel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          v15 = &v14->target_camp;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          if ( v14->target_camp == CAMP_ENEMY )
          {
            Duel = GCGGameMode::getDuel(game_mode);
            win_controller = (unsigned int)GCGDuel::getOtherControllerId(Duel, cur_controller_id);
          }
        }
        GCGGameMode::toFinPhase(game_mode, win_controller, GCG_END_REASON_EFFECT);
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_effect.cpp",
          "doEffect",
          2385);
        v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v22,
                (const char (*)[38])"GCGExecEffectFinishDuel doEffect succ");
        GCGSkillUseParam::getDesc[abi:cxx11](&val, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v7 = 0;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
  }
  std::shared_ptr<data::ConfigGCGExecEffectFinishDuel>::~shared_ptr((std::shared_ptr<data::ConfigGCGExecEffectFinishDuel> *const)(v3 + 32));
  v18 = v7;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v18;
};
