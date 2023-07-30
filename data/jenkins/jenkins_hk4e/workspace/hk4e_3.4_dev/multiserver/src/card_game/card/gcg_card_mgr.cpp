// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/card/gcg_card_mgr.cpp

// Line 23: range 000000000E11935C-000000000E119F18
GCGCardMgr *__fastcall GCGCardMgr::createCard(
        GCGCardMgr *const this,
        GCGCardMgr *card_id,
        GCGControllerValue controller_id,
        GCGControllerValue parent_card_guid)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  const GCGConfigMgr *Config; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  uint32_t *p_guid; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  data::GCGCardType card_type; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  GCGCardType *p_card_type; // rax
  GCGCard *v16; // rax
  uint32_t *p_value; // rax
  uint32_t value; // r14d
  std::map<data::GCGTokenType,unsigned int>::mapped_type *v19; // rax
  uint32_t *v20; // rdx
  GCGCard *v21; // rcx
  bool is_need_preview; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  bool *p_is_need_preview; // rax
  const data::GCGTagType *M_current; // r14
  std::vector<data::GCGTagType>::const_iterator v26; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  GCGCard *v28; // r14
  GCGCard *v29; // r14
  bool v30; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  bool *p_is_remove_after_die; // rax
  GCGCard *v33; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v34; // rax
  _DWORD *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  GCGCard *v37; // r14
  GCGCard *v38; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  GCGCard *v40; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  GCGCardType CardType; // eax
  GCGCardFaceType CardFace; // eax
  GCGCard *v44; // rax
  GCGCard *v45; // rax
  std::vector<data::GCGTokenConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::vector<data::GCGTokenConfig>::const_iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  const GCGGameExcelConfigMgr *gcg_excel_config; // [rsp+38h] [rbp-168h]
  const data::GCGCardConfig *config_ptr; // [rsp+40h] [rbp-160h]
  std::map<data::GCGTokenType,unsigned int> *runtime_token_map; // [rsp+48h] [rbp-158h]
  const std::vector<data::GCGTokenConfig> *__for_range; // [rsp+50h] [rbp-150h]
  const data::GCGCardExcelConfig *excel_config_ptr; // [rsp+58h] [rbp-148h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-140h]
  const data::GCGTokenConfig *token_config; // [rsp+68h] [rbp-138h]
  std::shared_ptr<GCGSkill> p_skill_ptr; // [rsp+70h] [rbp-130h] BYREF
  std::vector<data::GCGCost> cost_vec; // [rsp+80h] [rbp-120h] BYREF
  common::milog::MiLogStream v60; // [rsp+A0h] [rbp-100h] BYREF
  std::set<data::GCGTagType> v61; // [rsp+C0h] [rbp-E0h] BYREF
  char v62[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 11 skill_id:57 48 4 10 card_id:22 64 16 11 card_ptr:32 96 16 18 parent_card_ptr:69";
  *(_QWORD *)(v4 + 16) = GCGCardMgr::createCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&card_id->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&card_id->game_mode_);
  Config = GCGGameMode::getConfig(card_id->game_mode_);
  gcg_excel_config = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  config_ptr = GCGGameExcelConfigMgr::findCardConfig(gcg_excel_config, *(_DWORD *)(v4 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&card_id->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&card_id->game_mode_);
    common::tools::perf::make_shared<GCGCard,GCGGameMode &,unsigned int &>(
      (GCGGameMode *)(v4 + 64),
      (unsigned int *)card_id->game_mode_,
      (GCGGameMode *)(v4 + 48),
      (unsigned int *)card_id->game_mode_);
    v9 = GCGCardMgr::genGUID(card_id);
    v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    p_guid = &v10->guid_;
    if ( *(_BYTE *)(((unsigned __int64)p_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_guid);
    }
    v10->guid_ = v9;
    v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v12->controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v12 = (std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v12->controller_id_);
    }
    v12->controller_id_ = parent_card_guid;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->card_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->card_type);
    }
    card_type = config_ptr->card_type;
    v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    p_card_type = &v14->card_type_;
    if ( *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_card_type);
    }
    v14->card_type_ = card_type;
    v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    runtime_token_map = GCGCard::getTokenMap(v16);
    __for_range = &config_ptr->token_list;
    __for_begin._M_current = std::vector<data::GCGTokenConfig>::begin(&config_ptr->token_list)._M_current;
    __for_end._M_current = std::vector<data::GCGTokenConfig>::end(&config_ptr->token_list)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGTokenConfig const*,std::vector<data::GCGTokenConfig>>(
              &__for_begin,
              &__for_end) )
    {
      token_config = __gnu_cxx::__normal_iterator<data::GCGTokenConfig const*,std::vector<data::GCGTokenConfig>>::operator*(&__for_begin);
      p_value = &token_config->value;
      if ( *(_BYTE *)(((unsigned __int64)p_value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_value);
      }
      value = token_config->value;
      v19 = std::map<data::GCGTokenType,unsigned int>::operator[](runtime_token_map, &token_config->token_type);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v19);
      }
      *v20 = value;
      __gnu_cxx::__normal_iterator<data::GCGTokenConfig const*,std::vector<data::GCGTokenConfig>>::operator++(&__for_begin);
    }
    excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGCardExcelConfig(gcg_excel_config, *(_DWORD *)(v4 + 48));
    if ( excel_config_ptr )
    {
      v21 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&excel_config_ptr->token_to_show >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config_ptr->token_to_show >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config_ptr->token_to_show);
      }
      GCGCard::setShowTokenType(v21, excel_config_ptr->token_to_show);
      if ( *(_BYTE *)(((unsigned __int64)&excel_config_ptr->is_need_preview >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)excel_config_ptr - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&excel_config_ptr->is_need_preview >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load1(&excel_config_ptr->is_need_preview);
      }
      is_need_preview = excel_config_ptr->is_need_preview;
      v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      p_is_need_preview = &v23->is_need_preview_;
      if ( *(_BYTE *)(((unsigned __int64)p_is_need_preview >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_need_preview & 7) >= *(_BYTE *)(((unsigned __int64)p_is_need_preview >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_is_need_preview);
      }
      v23->is_need_preview_ = is_need_preview;
    }
    M_current = std::vector<data::GCGTagType>::begin(&config_ptr->tag_list)._M_current;
    v26._M_current = std::vector<data::GCGTagType>::end(&config_ptr->tag_list)._M_current;
    std::set<data::GCGTagType>::set<__gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>>(
      &v61,
      (__gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> >)M_current,
      v26);
    v27 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    std::set<data::GCGTagType>::operator=(&v27->tag_set_, &v61);
    std::set<data::GCGTagType>::~set(&v61);
    v28 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    GCGGameExcelConfigMgr::getCardCostVec(&cost_vec, gcg_excel_config, *(_DWORD *)(v4 + 48));
    GCGCard::setCost(v28, &cost_vec);
    std::vector<data::GCGCost>::~vector(&cost_vec);
    v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    GCGGameExcelConfigMgr::getCardChooseVec(
      (std::vector<data::GCGChooseExcelConfig> *)&cost_vec,
      gcg_excel_config,
      *(_DWORD *)(v4 + 48));
    GCGCard::setChooseConfig(v29, (std::vector<data::GCGChooseExcelConfig> *)&cost_vec);
    std::vector<data::GCGChooseExcelConfig>::~vector((std::vector<data::GCGChooseExcelConfig> *const)&cost_vec);
    v30 = GCGGameExcelConfigMgr::isCharacterRemoveAfterDie(gcg_excel_config, *(_DWORD *)(v4 + 48));
    v31 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    p_is_remove_after_die = &v31->is_remove_after_die_;
    if ( *(_BYTE *)(((unsigned __int64)p_is_remove_after_die >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_remove_after_die & 7) >= *(_BYTE *)(((unsigned __int64)p_is_remove_after_die >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_remove_after_die);
    }
    v31->is_remove_after_die_ = v30;
    v33 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    GCGCard::assignElementTypeByTagset(v33);
    __for_range_0 = &config_ptr->skill_list;
    __for_begin._M_current = (const data::GCGTokenConfig *)std::vector<unsigned int>::begin(&config_ptr->skill_list)._M_current;
    __for_end._M_current = (const data::GCGTokenConfig *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v34 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      v35 = v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      *(_DWORD *)(v4 + 32) = *v35;
      if ( *(_BYTE *)(((unsigned __int64)&card_id->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&card_id->game_mode_);
      GCGUtils::createSkill((GCGGameMode *)(v4 + 96), (uint32_t)card_id->game_mode_);
      if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/card/gcg_card_mgr.cpp",
          "createCard",
          63);
        v36 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v60,
                (const char (*)[37])"skill_id create GCGSkill ptr failed:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v60);
      }
      else
      {
        v37 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        std::shared_ptr<GCGSkill>::shared_ptr(&p_skill_ptr, (const std::shared_ptr<GCGSkill> *)(v4 + 96));
        GCGCard::addSkill(v37, &p_skill_ptr);
        std::shared_ptr<GCGSkill>::~shared_ptr(&p_skill_ptr);
      }
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v4 + 96));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
    GCGCardMgr::findCard((GCGCardMgr *const)(v4 + 96), (uint32_t)card_id);
    if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 96), 0LL) )
    {
      v38 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v39 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v39->face_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v39->face_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        v39 = (std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v39->face_type_);
      }
      GCGCard::setFaceType(v38, v39->face_type_);
    }
    else
    {
      v40 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v41 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      CardType = GCGCard::getCardType(v41);
      CardFace = GCGCardMgr::getCardFace(card_id, parent_card_guid, *(_DWORD *)(v4 + 48), CardType);
      GCGCard::setFaceType(v40, CardFace);
    }
    v44 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    GCGCard::setShowState(v44, SHOW_STATE_HIDDEN);
    v45 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    GCGCard::init(v45);
    std::shared_ptr<GCGCard>::shared_ptr(
      (std::shared_ptr<GCGCard> *const)&p_skill_ptr,
      (const std::shared_ptr<GCGCard> *)(v4 + 64));
    GCGCardMgr::recordAddCard(card_id, (GCGCardPtr *)&p_skill_ptr);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&p_skill_ptr);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, (std::shared_ptr<GCGCard> *)(v4 + 64));
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96));
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card_mgr.cpp",
      "createCard",
      29);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v60,
           (const char (*)[34])"find card config error. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v60);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  if ( v62 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 89: range 000000000E119F1A-000000000E11A140
void __cdecl GCGCardMgr::foreachCard(
        const GCGCardMgr *const this,
        std::function<ForeachPolicy(const GCGCard&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  std::map<unsigned int,std::weak_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,std::weak_ptr<GCGCard>>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const std::map<unsigned int,std::weak_ptr<GCGCard>> *copy_card_map; // [rsp+28h] [rbp-98h]
  const std::map<unsigned int,std::weak_ptr<GCGCard>> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,std::weak_ptr<GCGCard> > *v11; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *guid; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *card_wtr; // [rsp+48h] [rbp-78h]
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 card_ptr:93";
  *(_QWORD *)(v2 + 16) = GCGCardMgr::foreachCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  copy_card_map = GCGCardMgr::getCardMap(this);
  __for_range = copy_card_map;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::begin(copy_card_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::end(copy_card_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,std::weak_ptr<GCGCard>>(v11);
    card_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<GCGCard>>(v11);
    std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v2 + 32));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v5 = std::function<ForeachPolicy ()(GCGCard const&)>::operator()(p_func, v6) == FOREACH_BREAK ? 1 : 2;
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
    if ( v5 )
    {
      if ( v5 != 2 )
        break;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 109: range 000000000E11A142-000000000E11A3F3
void __cdecl GCGCardMgr::foreachCard(GCGCardMgr *const this, std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::map<unsigned int,std::weak_ptr<GCGCard>> *CardMap; // rax
  std::map<unsigned int,std::weak_ptr<GCGCard>> *v6; // rax
  GCGCard *v7; // rdx
  int v8; // r14d
  std::map<unsigned int,std::weak_ptr<GCGCard>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::weak_ptr<GCGCard>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::weak_ptr<GCGCard>> *__for_range; // [rsp+20h] [rbp-F0h]
  std::pair<unsigned int const,std::weak_ptr<GCGCard> > *__in; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *guid; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *card_wtr; // [rsp+38h] [rbp-D8h]
  char v15[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 12 card_ptr:113 80 48 17 copy_card_map:110";
  *(_QWORD *)(v2 + 16) = GCGCardMgr::foreachCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  CardMap = GCGCardMgr::getCardMap(this);
  std::map<unsigned int,std::weak_ptr<GCGCard>>::map(
    (std::map<unsigned int,std::weak_ptr<GCGCard>> *const)(v2 + 80),
    CardMap);
  __for_range = (std::map<unsigned int,std::weak_ptr<GCGCard>> *)(v2 + 80);
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::begin((std::map<unsigned int,std::weak_ptr<GCGCard>> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::end((std::map<unsigned int,std::weak_ptr<GCGCard>> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,std::weak_ptr<GCGCard>>(__in);
    card_wtr = std::get<1ul,unsigned int const,std::weak_ptr<GCGCard>>(__in);
    std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v2 + 48));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 48), 0LL) )
    {
      v6 = GCGCardMgr::getCardMap(this);
      std::map<unsigned int,std::weak_ptr<GCGCard>>::erase(v6, guid);
    }
    else
    {
      v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( std::function<ForeachPolicy ()(GCGCard &)>::operator()(p_func, v7) == FOREACH_BREAK )
      {
        v8 = 0;
        goto LABEL_11;
      }
    }
    v8 = 1;
LABEL_11:
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 48));
    if ( v8 != 1 )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::weak_ptr<GCGCard>>::~map((std::map<unsigned int,std::weak_ptr<GCGCard>> *const)(v2 + 80));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 130: range 000000000E11A486-000000000E11A529
void __cdecl GCGCardMgr::foreachStageCard(GCGCardMgr *const this, std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  GCGDuel *duel; // [rsp+18h] [rbp-38h]
  std::function<ForeachPolicy(GCGField&)> v3; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  std::function<ForeachPolicy ()(GCGField &)>::function<GCGCardMgr::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGField &)#1},void,void>(
    &v3,
    (GCGCardMgr::foreachStageCard::<lambda(GCGField&)>)p_func);
  GCGDuel::foreachField(duel, &v3);
  std::function<ForeachPolicy ()(GCGField &)>::~function(&v3);
};

// Line 132: range 000000000E11A3F4-000000000E11A484
ForeachPolicy __cdecl GCGCardMgr::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGField &)#1}::operator()(
        const GCGCardMgr::foreachStageCard::<lambda(GCGField&)> *const __closure,
        GCGField *field)
{
  std::function<ForeachPolicy(GCGCard&)> v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::function<ForeachPolicy ()(GCGCard &)>::function(&v3, __closure->__func);
  GCGField::foreachStageCard(field, &v3);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&v3);
  return 0;
};

// Line 141: range 000000000E11A5BC-000000000E11A65F
void __cdecl GCGCardMgr::foreachStageCard(
        const GCGCardMgr *const this,
        std::function<ForeachPolicy(const GCGCard&)> *p_func)
{
  GCGDuel *duel; // [rsp+18h] [rbp-38h]
  std::function<ForeachPolicy(const GCGField&)> v3; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  std::function<ForeachPolicy ()(GCGField const&)>::function<GCGCardMgr::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)::{lambda(GCGField const&)#1},void,void>(
    &v3,
    (GCGCardMgr::foreachStageCard::<lambda(const GCGField&)>)p_func);
  GCGDuel::foreachField(duel, &v3);
  std::function<ForeachPolicy ()(GCGField const&)>::~function(&v3);
};

// Line 143: range 000000000E11A52A-000000000E11A5BA
ForeachPolicy __cdecl GCGCardMgr::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)const::{lambda(GCGField const&)#1}::operator()(
        const GCGCardMgr::foreachStageCard::<lambda(const GCGField&)> *const __closure,
        const GCGField *field)
{
  std::function<ForeachPolicy(const GCGCard&)> v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::function<ForeachPolicy ()(GCGCard const&)>::function(&v3, __closure->__func);
  GCGField::foreachStageCard(field, &v3);
  std::function<ForeachPolicy ()(GCGCard const&)>::~function(&v3);
  return 0;
};

// Line 152: range 000000000E11A660-000000000E11A7FD
void __cdecl GCGCardMgr::foreachFieldStageCard(
        GCGCardMgr *const this,
        GCGControllerValue controller_id,
        std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  GCGDuel *v5; // rax
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  GCGDuel *duel; // [rsp+30h] [rbp-40h]
  GCGField *cur_field; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( !GCGDuel::isControllerIdValid(duel, controller_id) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card_mgr.cpp",
      "foreachFieldStageCard",
      156);
    v3 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"controller_id:");
    val = controller_id;
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v4, (const char (*)[11])" not valid");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v5 = GCGGameMode::getDuel(this->game_mode_);
    cur_field = GCGDuel::getField(v5, controller_id);
    std::function<ForeachPolicy ()(GCGCard &)>::function((std::function<ForeachPolicy(GCGCard&)> *const)&v10, p_func);
    GCGField::foreachStageCard(cur_field, (std::function<ForeachPolicy(GCGCard&)> *)&v10);
    std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v10);
  }
};

// Line 165: range 000000000E11A7FE-000000000E11A99B
void __cdecl GCGCardMgr::foreachFieldStageCard(
        const GCGCardMgr *const this,
        GCGControllerValue controller_id,
        std::function<ForeachPolicy(const GCGCard&)> *p_func)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  GCGDuel *v5; // rax
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  const GCGDuel *duel; // [rsp+30h] [rbp-40h]
  const GCGField *cur_field; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( !GCGDuel::isControllerIdValid(duel, controller_id) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card_mgr.cpp",
      "foreachFieldStageCard",
      169);
    v3 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"controller_id:");
    val = controller_id;
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v4, (const char (*)[11])" not valid");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v5 = GCGGameMode::getDuel(this->game_mode_);
    cur_field = GCGDuel::getField(v5, controller_id);
    std::function<ForeachPolicy ()(GCGCard const&)>::function(
      (std::function<ForeachPolicy(const GCGCard&)> *const)&v10,
      p_func);
    GCGField::foreachStageCard(cur_field, (std::function<ForeachPolicy(const GCGCard&)> *)&v10);
    std::function<ForeachPolicy ()(GCGCard const&)>::~function((std::function<ForeachPolicy(const GCGCard&)> *const)&v10);
  }
};

// Line 177: range 000000000E11A99C-000000000E11ABBD
std::set<unsigned int> *__cdecl GCGCardMgr::getAllCardIdSet(
        std::set<unsigned int> *retstr,
        const GCGCardMgr *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::set<unsigned int>::value_type __x; // [rsp+14h] [rbp-9Ch] BYREF
  std::map<unsigned int,std::weak_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,std::weak_ptr<GCGCard>>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::map<unsigned int,std::weak_ptr<GCGCard>> *card_map; // [rsp+28h] [rbp-88h]
  const std::map<unsigned int,std::weak_ptr<GCGCard>> *__for_range; // [rsp+30h] [rbp-80h]
  const std::pair<unsigned int const,std::weak_ptr<GCGCard> > *v12; // [rsp+38h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *_; // [rsp+40h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *card_wtr; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 card_ptr:182";
  *(_QWORD *)(v2 + 16) = GCGCardMgr::getAllCardIdSet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::set<unsigned int>::set(retstr);
  card_map = GCGCardMgr::getCardMap(this);
  __for_range = card_map;
  __for_begin._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::begin(card_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::end(card_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::weak_ptr<GCGCard>>(v12);
    card_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<GCGCard>>(v12);
    std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v2 + 32));
    if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __x = GCGCard::getId(v5);
      std::set<unsigned int>::insert(retstr, &__x);
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 192: range 000000000E11ABBE-000000000E11ADD6
GCGCardMgr *__fastcall GCGCardMgr::findCard(GCGCardMgr *const this, GCGCardMgr *card_guid, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,std::weak_ptr<GCGCard>> *card_map; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 card_guid:191 64 8 8 iter:194 96 16 12 card_ptr:199";
  *(_QWORD *)(v3 + 16) = GCGCardMgr::findCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  card_map = GCGCardMgr::getCardMap(card_guid);
  *(std::map<unsigned int,std::weak_ptr<GCGCard>>::iterator *)(v3 + 64) = std::map<unsigned int,std::weak_ptr<GCGCard>>::find(
                                                                            card_map,
                                                                            (const std::map<unsigned int,std::weak_ptr<GCGCard>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::weak_ptr<GCGCard>>::end(card_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<GCGCard> > > *const)(v3 + 64));
    std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v3 + 96));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 96), 0LL) )
      std::map<unsigned int,std::weak_ptr<GCGCard>>::erase[abi:cxx11](
        card_map,
        *(std::map<unsigned int,std::weak_ptr<GCGCard>>::iterator *)(v3 + 64));
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, (std::shared_ptr<GCGCard> *)(v3 + 96));
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 208: range 000000000E11ADD8-000000000E11AEB9
void __fastcall GCGCardMgr::removeRecordCard(GCGCardMgr *const this, uint32_t card_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,std::weak_ptr<GCGCard>> *card_map; // [rsp+18h] [rbp-68h]
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 card_guid:207";
  *(_QWORD *)(v2 + 16) = GCGCardMgr::removeRecordCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_guid;
  card_map = GCGCardMgr::getCardMap(this);
  std::map<unsigned int,std::weak_ptr<GCGCard>>::erase(
    card_map,
    (const std::map<unsigned int,std::weak_ptr<GCGCard>>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 214: range 000000000E11AEBA-000000000E11AF9D
void __cdecl GCGCardMgr::recordAddCard(GCGCardMgr *const this, GCGCardPtr *p_card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::weak_ptr<GCGCard> *v3; // rdx
  std::map<unsigned int,std::weak_ptr<GCGCard>>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  std::map<unsigned int,std::weak_ptr<GCGCard>> *card_map; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<GCGCard>(p_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card_mgr.cpp",
      "recordAddCard",
      217);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v6, (const char (*)[20])"card_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    card_map = GCGCardMgr::getCardMap(this);
    v2 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
    __k = GCGCard::getGuid(v2);
    v3 = std::map<unsigned int,std::weak_ptr<GCGCard>>::operator[](card_map, &__k);
    std::weak_ptr<GCGCard>::operator=<GCGCard>(v3, p_card_ptr);
  }
};

// Line 225: range 000000000E11AF9E-000000000E11B1E4
void __cdecl GCGCardMgr::notifyNewCard(GCGCardMgr *const this, GCGCardPtr *p_card_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GCGCardDetailInfo *p_card_info; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 msg_ptr:231";
  *(_QWORD *)(v2 + 16) = GCGCardMgr::notifyNewCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<GCGCard>(p_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card_mgr.cpp",
      "notifyNewCard",
      228);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v9, (const char (*)[20])"card_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    common::tools::perf::make_shared<GCGMsgNewCard>();
    p_card_info = &std::__shared_ptr_access<GCGMsgNewCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgNewCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->card_info;
    v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
    if ( !GCGCardDetailInfo::fromCard(p_card_info, v6, 0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      game_mode = this->game_mode_;
      std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgNewCard,void>(
        &p_msg,
        (const std::shared_ptr<GCGMsgNewCard> *)(v2 + 32));
      GCGGameMode::sendMessage(game_mode, &p_msg);
      std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
    }
    std::shared_ptr<GCGMsgNewCard>::~shared_ptr((std::shared_ptr<GCGMsgNewCard> *const)(v2 + 32));
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 239: range 000000000E11B1E6-000000000E11B2CE
void __fastcall GCGCardMgr::setCardFaceMap(
        GCGCardMgr *const this,
        GCGControllerValue controller_id,
        const std::map<unsigned int,data::GCGCardFaceType> *card_face_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<unsigned int,data::GCGCardFaceType> *v6; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:238";
  *(_QWORD *)(v3 + 16) = GCGCardMgr::setCardFaceMap;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  v6 = std::map<proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType>>::operator[](
         &this->card_face_map_,
         (const std::map<proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType>>::key_type *)(v3 + 32));
  std::map<unsigned int,data::GCGCardFaceType>::operator=(v6, card_face_map);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 244: range 000000000E11B2D0-000000000E11B3EA
void __fastcall GCGCardMgr::setGlobalCardCardFace(
        GCGCardMgr *const this,
        GCGControllerValue controller_id,
        GCGCardFaceType card_face)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<proto::GCGControllerValue,data::GCGCardFaceType>::mapped_type *v6; // rax
  _DWORD *v7; // rdx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:243";
  *(_QWORD *)(v3 + 16) = GCGCardMgr::setGlobalCardCardFace;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  v6 = std::map<proto::GCGControllerValue,data::GCGCardFaceType>::operator[](
         &this->global_card_face_map_,
         (const std::map<proto::GCGControllerValue,data::GCGCardFaceType>::key_type *)(v3 + 32));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = card_face;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 250: range 000000000E11B3EC-000000000E11B506
void __fastcall GCGCardMgr::setGlobalCharCardFace(
        GCGCardMgr *const this,
        GCGControllerValue controller_id,
        GCGCardFaceType card_face)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<proto::GCGControllerValue,data::GCGCardFaceType>::mapped_type *v6; // rax
  _DWORD *v7; // rdx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:249";
  *(_QWORD *)(v3 + 16) = GCGCardMgr::setGlobalCharCardFace;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  v6 = std::map<proto::GCGControllerValue,data::GCGCardFaceType>::operator[](
         &this->global_char_face_map_,
         (const std::map<proto::GCGControllerValue,data::GCGCardFaceType>::key_type *)(v3 + 32));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = card_face;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 256: range 000000000E11B508-000000000E11B8B5
__int64 __fastcall GCGCardMgr::getCardFace(
        GCGCardMgr *const this,
        GCGControllerValue controller_id,
        uint32_t card_id,
        GCGCardType card_type)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,data::GCGCardFaceType> >::pointer v7; // rdx
  data::GCGCardFaceType *p_second; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,data::GCGCardFaceType> >::pointer v9; // rdx
  data::GCGCardFaceType *v10; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::GCGCardFaceType> >::pointer v12; // rdx
  data::GCGCardFaceType *v13; // rax
  GCGCardFaceType face_type; // [rsp+2Ch] [rbp-B4h]
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,data::GCGCardFaceType> >::_Self __y; // [rsp+30h] [rbp-B0h] BYREF
  std::map<unsigned int,data::GCGCardFaceType> *face_map; // [rsp+38h] [rbp-A8h]
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 17 controller_id:255 48 4 11 card_id:255 64 8 8 iter:278 96 8 13 card_iter:282";
  *(_QWORD *)(v4 + 16) = GCGCardMgr::getCardFace;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 32) = controller_id;
  *(_DWORD *)(v4 + 48) = card_id;
  face_type = GCG_CARD_FACE_NORMAL;
  if ( card_type == GCG_CARD_CHARACTER )
  {
    *(std::map<proto::GCGControllerValue,data::GCGCardFaceType>::iterator *)(v4 + 96) = std::map<proto::GCGControllerValue,data::GCGCardFaceType>::find(
                                                                                          &this->global_char_face_map_,
                                                                                          (const std::map<proto::GCGControllerValue,data::GCGCardFaceType>::key_type *)(v4 + 32));
    __y._M_node = std::map<proto::GCGControllerValue,data::GCGCardFaceType>::end(&this->global_char_face_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,data::GCGCardFaceType> >::_Self *)(v4 + 96),
           &__y) )
    {
      v7 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,data::GCGCardFaceType>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,data::GCGCardFaceType> > *const)(v4 + 96));
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      face_type = v7->second;
    }
  }
  else
  {
    *(std::map<proto::GCGControllerValue,data::GCGCardFaceType>::iterator *)(v4 + 96) = std::map<proto::GCGControllerValue,data::GCGCardFaceType>::find(
                                                                                          &this->global_card_face_map_,
                                                                                          (const std::map<proto::GCGControllerValue,data::GCGCardFaceType>::key_type *)(v4 + 32));
    __y._M_node = std::map<proto::GCGControllerValue,data::GCGCardFaceType>::end(&this->global_card_face_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,data::GCGCardFaceType> >::_Self *)(v4 + 96),
           &__y) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,data::GCGCardFaceType>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,data::GCGCardFaceType> > *const)(v4 + 96));
      v10 = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      face_type = v9->second;
    }
  }
  if ( face_type )
  {
    result = (unsigned int)face_type;
  }
  else
  {
    *(std::map<proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType>>::iterator *)(v4 + 64) = std::map<proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType>>::find(&this->card_face_map_, (const std::map<proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType>>::key_type *)(v4 + 32));
    __y._M_node = std::map<proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType>>::end(&this->card_face_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType> > >::_Self *)(v4 + 64),
           (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType> > >::_Self *)&__y) )
    {
      face_map = &std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::map<unsigned int,data::GCGCardFaceType>>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType> > > *const)(v4 + 64))->second;
      *(std::map<unsigned int,data::GCGCardFaceType>::iterator *)(v4 + 96) = std::map<unsigned int,data::GCGCardFaceType>::find(
                                                                               face_map,
                                                                               (const std::map<unsigned int,data::GCGCardFaceType>::key_type *)(v4 + 48));
      __y._M_node = std::map<unsigned int,data::GCGCardFaceType>::end(face_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GCGCardFaceType> >::_Self *)(v4 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GCGCardFaceType> >::_Self *)&__y) )
      {
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::GCGCardFaceType>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GCGCardFaceType> > *const)(v4 + 96));
        v13 = &v12->second;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        face_type = v12->second;
      }
    }
    result = (unsigned int)face_type;
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 292: range 000000000E11B8B6-000000000E11B8D3
const std::map<unsigned int,std::weak_ptr<GCGCard>> *__cdecl GCGCardMgr::getCardMap(const GCGCardMgr *const this)
{
  return &GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::getRuntimeData(this)->card_map_;
};

// Line 297: range 000000000E11B8D4-000000000E11B927
uint32_t __cdecl GCGCardMgr::genGUID(GCGCardMgr *const this)
{
  unsigned __int64 RuntimeData; // rax

  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::getRuntimeData(this);
  if ( *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) <= 3 )
    RuntimeData = __asan_report_load4(RuntimeData);
  return ++*(_DWORD *)RuntimeData;
};

// Line 302: range 000000000E11B928-000000000E11B945
std::map<unsigned int,std::weak_ptr<GCGCard>> *__cdecl GCGCardMgr::getCardMap(GCGCardMgr *const this)
{
  return &GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::getRuntimeData(this)->card_map_;
};
