// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_interact_comp.cpp

// Line 32: range 0000000017539F76-000000001753A00E
void __cdecl GadgetInteractComp::GadgetInteractComp(
        GadgetInteractComp *const this,
        Gadget *gadget,
        uint32_t interact_id)
{
  int (**v3)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'GadgetInteractComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->interact_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->interact_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->interact_id_);
  }
  this->interact_id_ = interact_id;
};

// Line 37: range 000000001753A010-000000001753A079
int32_t __cdecl GadgetInteractComp::toClient(const GadgetInteractComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->interact_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->interact_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->interact_id_ )
    proto::SceneGadgetInfo::set_interact_id(gadget_info, this->interact_id_);
  return 0;
};

// Line 46: range 000000001753A07A-000000001753B278
int32_t __cdecl GadgetInteractComp::checkInteractConditions(
        const GadgetInteractComp *const this,
        Player *player,
        const data::GadgetInteractExcelConfig *config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::InteractCondType cond_type; // eax
  common::milog::MiLogStream *v7; // rcx
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  signed int WidgetComp; // eax
  WidgetBase *v12; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const std::string *v20; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  const std::string *v27; // rax
  common::milog::MiLogStream *v28; // r14
  const std::string *v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  PlayerOfferingComp *OfferingComp; // rax
  common::milog::MiLogStream *v34; // rax
  PlayerOfferingComp *v35; // rax
  const std::string *v36; // rax
  common::milog::MiLogStream *v37; // r14
  const std::string *v38; // rax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  int32_t v47; // r14d
  int32_t result; // eax
  bool is_meet; // [rsp+2Fh] [rbp-151h]
  bool is_meeta; // [rsp+2Fh] [rbp-151h]
  std::vector<data::GadgetInteractCond>::const_iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::vector<data::GadgetInteractCond>::const_iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const std::vector<data::GadgetInteractCond> *__for_range; // [rsp+40h] [rbp-140h]
  const data::GadgetInteractCond *cond; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v56; // [rsp+50h] [rbp-130h] BYREF
  char v57[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 15 offering_id:119 64 4 22 cur_offering_level:138 80 4 24 offering_level_limit:139 96 4 1"
                        "7 val_threshold:103 112 16 13 widget_ptr:70 144 40 17 cond_value_vec:47";
  *(_QWORD *)(v3 + 16) = GadgetInteractComp::checkInteractConditions;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  std::vector<bool>::vector((std::vector<bool> *const)(v3 + 144));
  __for_range = &config->cond_list;
  __for_begin._M_current = std::vector<data::GadgetInteractCond>::begin(&config->cond_list)._M_current;
  __for_end._M_current = std::vector<data::GadgetInteractCond>::end(&config->cond_list)._M_current;
  while ( __gnu_cxx::operator!=<data::GadgetInteractCond const*,std::vector<data::GadgetInteractCond>>(
            &__for_begin,
            &__for_end) )
  {
    cond = __gnu_cxx::__normal_iterator<data::GadgetInteractCond const*,std::vector<data::GadgetInteractCond>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( cond->cond_type )
    {
      is_meet = 0;
      if ( *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      cond_type = cond->cond_type;
      if ( cond_type == INTERACT_COND_OFFERING_LEVEL )
      {
        if ( std::vector<std::string>::size(&cond->param) <= 1 )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget_interact_comp.cpp",
            "checkInteractConditions",
            116);
          v7 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                 &v56,
                 (const char (*)[69])" cond param not enough, param1: offering id, param2: offering level.");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          goto LABEL_72;
        }
        *(_DWORD *)(v3 + 48) = 0;
        v27 = std::vector<std::string>::operator[](&cond->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v27, (unsigned int *)(v3 + 48), 1) )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget_interact_comp.cpp",
            "checkInteractConditions",
            122);
          v28 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v56,
                  (const char (*)[27])" parse offering_id failed:");
          v29 = std::vector<std::string>::operator[](&cond->param, 0LL);
          v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, v29);
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          goto LABEL_72;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 112));
        v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        v31 = !OfferingExcelConfigMgr::isOfferingIdValid(
                 &v30->design_config.txt_config_mgr.offering_config_mgr,
                 *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 112));
        if ( v31 )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget_interact_comp.cpp",
            "checkInteractConditions",
            128);
          v32 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v56,
                  (const char (*)[29])" offering_id does not valid:");
          v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v32,
                 (const unsigned int *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          goto LABEL_72;
        }
        OfferingComp = Player::getOfferingComp(player);
        if ( !PlayerOfferingComp::checkOfferingAvailability(OfferingComp, *(_DWORD *)(v3 + 48)) )
        {
          v35 = Player::getOfferingComp(player);
          *(_DWORD *)(v3 + 64) = PlayerOfferingComp::findOfferingLevel(v35, *(_DWORD *)(v3 + 48));
          *(_DWORD *)(v3 + 80) = 0;
          v36 = std::vector<std::string>::operator[](&cond->param, 1uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v36, (unsigned int *)(v3 + 80), 1) )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_interact_comp.cpp",
              "checkInteractConditions",
              142);
            v37 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v56,
                    (const char (*)[35])"parse offering_level_limit failed:");
            v38 = std::vector<std::string>::operator[](&cond->param, 1uLL);
            v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, v38);
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
          }
          else
          {
            if ( *(_DWORD *)(v3 + 64) >= *(_DWORD *)(v3 + 80) )
            {
LABEL_47:
              std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 144), 1);
              goto LABEL_76;
            }
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gadget/gadget_interact_comp.cpp",
              "checkInteractConditions",
              147);
            v39 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v56, (const char (*)[9])" player:");
            *(_DWORD *)(v3 + 96) = Player::getUid(player);
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v3 + 96));
            v41 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v40,
                    (const char (*)[25])" current offering level:");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    (const unsigned int *)(v3 + 64));
            v43 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v42,
                    (const char (*)[17])"less than limit:");
            v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v43,
                   (const unsigned int *)(v3 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
          }
          goto LABEL_72;
        }
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_interact_comp.cpp",
          "checkInteractConditions",
          134);
        v34 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v56,
                (const char (*)[44])"offering system not available, offering id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v56);
      }
      else
      {
        if ( cond_type > INTERACT_COND_OFFERING_LEVEL )
          goto LABEL_74;
        switch ( cond_type )
        {
          case INTERACT_COND_REGIONAL_PLAY_VAR_GREATER_THAN:
            *(_DWORD *)(v3 + 80) = 0;
            *(_DWORD *)(v3 + 96) = 0;
            if ( !common::tools::StringUtils::strVecToNum<0u,unsigned int,float &>(
                    &cond->param,
                    (unsigned int *)(v3 + 80),
                    (float *)(v3 + 96),
                    (float *)&cond->param) )
            {
              RegionalPlayComp = Player::getRegionalPlayComp(player);
              is_meeta = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, *(_DWORD *)(v3 + 80)) > *(float *)(v3 + 96);
              std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 144), is_meeta);
              goto LABEL_76;
            }
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/gadget/gadget_interact_comp.cpp",
              "checkInteractConditions",
              106);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v56,
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              v25,
              (const char (*)[52])"parse regional_play_val_type and val_threshold fail");
            common::milog::MiLogStream::~MiLogStream(&v56);
            goto LABEL_75;
          case INTERACT_COND_WIDGET_ON:
            if ( std::vector<std::string>::empty(&cond->param) )
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/gadget_interact_comp.cpp",
                "checkInteractConditions",
                61);
              v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                     &v56,
                     (const char (*)[19])" cond param empty.");
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
            }
            else
            {
              *(_DWORD *)(v3 + 80) = 0;
              v8 = std::vector<std::string>::operator[](&cond->param, 0LL);
              if ( !common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v3 + 80), 1) )
              {
                WidgetComp = (unsigned int)Player::getWidgetComp(player);
                PlayerWidgetComp::findSlotWidget((PlayerWidgetComp *const)(v3 + 112), (data::WidgetOccupyTag)WidgetComp);
                if ( std::operator==<WidgetBase>(0LL, (const std::shared_ptr<WidgetBase> *)(v3 + 112))
                  || (v12 = std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112)),
                      WidgetBase::getMaterialId(v12) != *(_DWORD *)(v3 + 80)) )
                {
                  common::milog::MiLogStream::create(
                    &v56,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/gadget/gadget_interact_comp.cpp",
                    "checkInteractConditions",
                    73);
                  v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          &v56,
                          (const char (*)[9])" player:");
                  *(_DWORD *)(v3 + 96) = Player::getUid(player);
                  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v14,
                          (const unsigned int *)(v3 + 96));
                  v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v15,
                          (const char (*)[24])" has no equiped widget:");
                  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v16,
                          (const unsigned int *)(v3 + 80));
                  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v17, this->gadget_);
                  common::milog::MiLogStream::~MiLogStream(&v56);
                }
                else
                {
                  is_meet = 1;
                }
                std::shared_ptr<WidgetBase>::~shared_ptr((std::shared_ptr<WidgetBase> *const)(v3 + 112));
                goto LABEL_75;
              }
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/gadget_interact_comp.cpp",
                "checkInteractConditions",
                67);
              v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                     &v56,
                     (const char (*)[34])" parse widget_material_id failed:");
              v10 = std::vector<std::string>::operator[](&cond->param, 0LL);
              v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
            }
            break;
          case INTERACT_COND_HAS_ITEM:
            if ( std::vector<std::string>::empty(&cond->param) )
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/gadget_interact_comp.cpp",
                "checkInteractConditions",
                83);
              v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                     &v56,
                     (const char (*)[19])" cond param empty.");
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
            }
            else
            {
              *(_DWORD *)(v3 + 80) = 0;
              v18 = std::vector<std::string>::operator[](&cond->param, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v18, (unsigned int *)(v3 + 80), 1) )
              {
                common::milog::MiLogStream::create(
                  &v56,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gadget/gadget_interact_comp.cpp",
                  "checkInteractConditions",
                  89);
                v19 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v56,
                        (const char (*)[27])" parse material_id failed:");
                v20 = std::vector<std::string>::operator[](&cond->param, 0LL);
                v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
              }
              else
              {
                ItemComp = Player::getItemComp(player);
                if ( PlayerItemComp::hasItemById(ItemComp, *(_DWORD *)(v3 + 80)) )
                  goto LABEL_47;
                common::milog::MiLogStream::create(
                  &v56,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/gadget/gadget_interact_comp.cpp",
                  "checkInteractConditions",
                  94);
                v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v56, (const char (*)[9])" player:");
                *(_DWORD *)(v3 + 96) = Player::getUid(player);
                v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v22,
                        (const unsigned int *)(v3 + 96));
                v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v23,
                        (const char (*)[14])" has no item:");
                v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v24,
                       (const unsigned int *)(v3 + 80));
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
              }
            }
            break;
          default:
LABEL_74:
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_interact_comp.cpp",
              "checkInteractConditions",
              156);
            v44 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v56, (const char (*)[7])" COND:");
            v45 = common::milog::MiLogStream::operator<<<data::InteractCondType,(data::InteractCondType*)0>(
                    v44,
                    &cond->cond_type);
            v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v45,
                    (const char (*)[16])" not supported.");
            *(_DWORD *)(v3 + 96) = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream(&v56);
            goto LABEL_75;
        }
LABEL_72:
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v56);
      }
LABEL_75:
      std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 144), is_meet);
    }
LABEL_76:
    __gnu_cxx::__normal_iterator<data::GadgetInteractCond const*,std::vector<data::GadgetInteractCond>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&config->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !CommonMiscs::evaluateLogicComb(config->cond_comb, (const std::vector<bool> *)(v3 + 144)) )
    v47 = 829;
  else
    v47 = 0;
  std::vector<bool>::~vector((std::vector<bool> *const)(v3 + 144));
  result = v47;
  if ( v57 == (char *)v3 )
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
  return result;
};

// Line 171: range 000000001753B27A-000000001753B72F
int32_t __cdecl GadgetInteractComp::interactCheck(
        GadgetInteractComp *const this,
        Player *player,
        const EntityInteractParam *a3)
{
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v10; // rcx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rcx
  int32_t ret; // [rsp+24h] [rbp-4Ch]
  const data::GadgetInteractExcelConfig *interact_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_gadget_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.gadget_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->interact_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->interact_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  interact_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetInteractExcelConfig(
                          p_gadget_config_mgr,
                          this->interact_id_);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( interact_config_ptr )
  {
    if ( !std::vector<data::IdCountConfig>::empty(&interact_config_ptr->cost_items)
      && (ItemComp = Player::getItemComp(player),
          PlayerItemComp::checkSubItemBatch(ItemComp, &interact_config_ptr->cost_items)) )
    {
      return 609;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&interact_config_ptr->is_mp_mode_interact >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)interact_config_ptr + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&interact_config_ptr->is_mp_mode_interact >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&interact_config_ptr->is_mp_mode_interact);
      }
      if ( !interact_config_ptr->is_mp_mode_interact
        && (MpComp = Player::getMpComp(player), PlayerMpComp::isInMpMode(MpComp)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gadget_interact_comp.cpp",
          "interactCheck",
          184);
        v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v18,
                (const char (*)[27])"cannot interact in mp mode");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v10, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        return 1202;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&interact_config_ptr->is_guest_interact >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&interact_config_ptr->is_guest_interact);
        if ( !interact_config_ptr->is_guest_interact
          && (SceneComp = Player::getSceneComp(player), !PlayerSceneComp::isInMyPlayerWorld(SceneComp)) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/gadget_interact_comp.cpp",
            "interactCheck",
            189);
          v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v18,
                  (const char (*)[29])"isInMyPlayerWorld is false. ");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, this->gadget_);
          common::milog::MiLogStream::~MiLogStream(&v18);
          return 512;
        }
        else
        {
          ret = GadgetInteractComp::checkInteractConditions(this, player, interact_config_ptr);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interactCheck",
              195);
            v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v18,
                    (const char (*)[34])" checkInteractConditions failed! ");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v14, this->gadget_);
            common::milog::MiLogStream::~MiLogStream(&v18);
            return ret;
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_interact_comp.cpp",
      "interactCheck",
      175);
    v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"findGadgetInteractExcelConfig fails, interact_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->interact_id_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
};

// Line 202: range 000000001753B730-000000001753D283
int32_t __cdecl GadgetInteractComp::interact(
        GadgetInteractComp *const this,
        Player *player,
        const EntityInteractParam *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v10; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  data::InteractActionType action_type; // eax
  Gadget *Gadget; // r14
  uint32_t *v17; // rdx
  GadgetExcelConfigMgr *v18; // r14
  uint32_t GadgetId; // eax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // r14
  GadgetExcelConfigMgr *v22; // rcx
  Player *v23; // rax
  PlayerSceneComp *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::vector<unsigned int>::size_type v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::vector<unsigned int>::const_reference v31; // rdx
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  PlayerSceneComp *SceneComp; // rdi
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::vector<unsigned int>::const_reference v40; // rdx
  std::vector<unsigned int>::const_reference v41; // rdx
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rcx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rcx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  PlayerSceneComp *v53; // r14
  uint32_t v54; // eax
  PlayerEventComp *EventComp; // r14
  bool v56; // al
  Scene *v57; // r14
  uint32_t area_id; // r15d
  uint32_t ConfigId; // eax
  int32_t result; // eax
  unsigned int *v61; // [rsp+0h] [rbp-210h]
  Player *playera; // [rsp+10h] [rbp-200h]
  GadgetInteractComp *thisb; // [rsp+18h] [rbp-1F8h]
  unsigned int *v66; // [rsp+20h] [rbp-1F0h]
  GroupType group_type; // [rsp+24h] [rbp-1ECh]
  std::vector<data::GadgetInteractActionConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-1E8h] BYREF
  std::vector<data::GadgetInteractActionConfig>::const_iterator __for_end; // [rsp+30h] [rbp-1E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-1D8h] BYREF
  const data::GadgetInteractExcelConfig *interact_config_ptr; // [rsp+40h] [rbp-1D0h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+48h] [rbp-1C8h]
  const std::vector<data::GadgetInteractActionConfig> *__for_range; // [rsp+50h] [rbp-1C0h]
  const data::GadgetInteractActionConfig *action_config; // [rsp+58h] [rbp-1B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-1B0h]
  const unsigned int *point_id; // [rsp+68h] [rbp-1A8h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+70h] [rbp-1A0h]
  const data::GadgetChainExcelConfig *chain_config_ptr; // [rsp+78h] [rbp-198h]
  common::milog::MiLogStream v79; // [rsp+80h] [rbp-190h] BYREF
  unsigned int v80[92]; // [rsp+A0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v80;
  v61 = v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 12 group_id:220 64 4 28 deprecated_group_city_id:221 80 4 28 deprecated_group_area_id:22"
                        "2 96 4 18 gadget_city_id:232 112 4 18 gadget_area_id:233 128 4 26 regional_play_val_type:346 144"
                        " 4 11 buff_id:301 160 8 10 reason:216 192 16 13 group_ptr:224 224 16 13 scene_ptr:237 256 16 13 "
                        "scene_ptr:273 288 16 20 owner_player_ptr:279";
  *(_QWORD *)(v3 + 16) = GadgetInteractComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 288));
  p_gadget_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288))->design_config.txt_config_mgr.gadget_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->interact_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->interact_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  interact_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetInteractExcelConfig(
                          p_gadget_config_mgr,
                          this->interact_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 288));
  if ( !interact_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v79,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_interact_comp.cpp",
      "interact",
      206);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v79,
           (const char (*)[51])"findGadgetInteractExcelConfig fails, interact_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->interact_id_);
    common::milog::MiLogStream::~MiLogStream(&v79);
    v8 = -1;
    goto LABEL_129;
  }
  if ( !std::vector<data::IdCountConfig>::empty(&interact_config_ptr->cost_items) )
  {
    ItemComp = Player::getItemComp(player);
    if ( PlayerItemComp::checkSubItemBatch(ItemComp, &interact_config_ptr->cost_items) )
    {
      v8 = 609;
      goto LABEL_129;
    }
    SubItemReason::SubItemReason((SubItemReason *const)(v3 + 160), ACTION_REASON_GADGET_INTERACT);
    v10 = Player::getItemComp(player);
    PlayerItemComp::subItemBatch(v10, &interact_config_ptr->cost_items, (const SubItemReason *)(v3 + 160));
  }
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  HIDWORD(v66) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getGroup((const Entity *const)(v3 + 192));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v3 + 192), 0LL) )
  {
    v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    *(_DWORD *)(v3 + 48) = Group::getGroupId(v11);
    v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    *(_DWORD *)(v3 + 64) = Group::getCityId(v12);
    v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    *(_DWORD *)(v3 + 80) = Group::getAreaId(v13);
    v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    HIDWORD(v66) = Group::getGroupType(v14);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 96) = Gadget::getCityId(this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 112) = Gadget::getAreaId(this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v3 + 224));
  __for_range = &interact_config_ptr->action_list;
  __for_begin._M_current = std::vector<data::GadgetInteractActionConfig>::begin(&interact_config_ptr->action_list)._M_current;
  __for_end._M_current = std::vector<data::GadgetInteractActionConfig>::end(&interact_config_ptr->action_list)._M_current;
  while ( __gnu_cxx::operator!=<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>(
            &__for_begin,
            &__for_end) )
  {
    action_config = __gnu_cxx::__normal_iterator<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&action_config->action_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&action_config->action_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    action_type = action_config->action_type;
    if ( action_type == INTERACT_ACTION_CONSUME_REGIONAL_PLAY_VAR )
    {
      if ( std::vector<unsigned int>::size(&action_config->param) <= 1 )
      {
        v8 = -1;
        goto LABEL_128;
      }
      v40 = std::vector<unsigned int>::operator[](&action_config->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 128) = *v40;
      v41 = std::vector<unsigned int>::operator[](&action_config->param, 1uLL);
      if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(float *)(v3 + 144) = (float)*(int *)v41;
      RegionalPlayComp = Player::getRegionalPlayComp(player);
      if ( PlayerRegionalPlayComp::subVarValue(RegionalPlayComp, *(_DWORD *)(v3 + 128), *(float *)(v3 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v79,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_interact_comp.cpp",
          "interact",
          350);
        v43 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v79,
                (const char (*)[42])"subVarValue fail, regional_play_val_type:");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v43,
                (const unsigned int *)(v3 + 128));
        v45 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v44, (const char (*)[12])" sub_value:");
        v46 = common::milog::MiLogStream::operator<<<float,(float *)0>(v45, (const float *)(v3 + 144));
        v47 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v46, (const char (*)[9])" gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v47, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v79);
        v8 = -1;
        goto LABEL_128;
      }
    }
    else
    {
      if ( action_type > INTERACT_ACTION_CONSUME_REGIONAL_PLAY_VAR )
        goto LABEL_105;
      switch ( action_type )
      {
        case INTERACT_ACTION_UNLOCK_SPECIAL_TRANSPORT_POINT:
          if ( !gadget_script_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v79,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interact",
              314);
            v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v79,
                    (const char (*)[46])"cannot find gadget script config, gadget_id: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_83;
          }
          if ( std::vector<unsigned int>::empty(&gadget_script_config_ptr->argument_vec) )
          {
            common::milog::MiLogStream::create(
              &v79,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interact",
              319);
            v20 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                    &v79,
                    (const char (*)[73])"special transport should have at least 1 transport point id, gadget_id: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_83;
          }
          if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 224), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v79,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interact",
              325);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v79,
              (const char (*)[21])"scene_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v79);
            v8 = -1;
            goto LABEL_128;
          }
          v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
          *(_DWORD *)(v3 + 128) = Scene::getSceneId(v34);
          __for_range_0 = &gadget_script_config_ptr->argument_vec;
          __for_begin_0._M_current = std::vector<unsigned int>::begin(&gadget_script_config_ptr->argument_vec)._M_current;
          *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    &__for_begin_0,
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
          {
            point_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
            SceneComp = Player::getSceneComp(player);
            if ( *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) )
            {
              SceneComp = (PlayerSceneComp *)point_id;
              __asan_report_load4();
            }
            if ( PlayerSceneComp::unlockPoint(SceneComp, *(_DWORD *)(v3 + 128), *point_id, 1) )
            {
              common::milog::MiLogStream::create(
                &v79,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/gadget_interact_comp.cpp",
                "interact",
                334);
              v36 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      &v79,
                      (const char (*)[42])"unlock transport point failed, scene id: ");
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v36,
                      (const unsigned int *)(v3 + 128));
              v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v37,
                      (const char (*)[13])", point id: ");
              v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, point_id);
              v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v39,
                      (const char (*)[14])", gadget id: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              goto LABEL_83;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
          }
          break;
        case INTERACT_ACTION_STATE:
          if ( !std::vector<unsigned int>::size(&action_config->param) )
          {
            common::milog::MiLogStream::create(
              &v79,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interact",
              248);
            common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v79,
              (const char (*)[53])"gagdget interact action_config param size not enough");
            common::milog::MiLogStream::~MiLogStream(&v79);
            v8 = -1;
            goto LABEL_128;
          }
          Gadget = GadgetCompBase::getGadget(this);
          v17 = (uint32_t *)std::vector<unsigned int>::operator[](&action_config->param, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          Gadget::setState(Gadget, *v17, 0, 1);
          break;
        case INTERACT_ACTION_SET_GADGET_CHAIN_BUFF:
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 288));
          v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288))->design_config.txt_config_mgr.gadget_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          GadgetId = Gadget::getGadgetId(this->gadget_);
          gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(v18, GadgetId);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 288));
          if ( !gadget_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v79,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interact",
              259);
            v20 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v79,
                    (const char (*)[36])"Gadget config not found, gadget_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
LABEL_83:
            *(_DWORD *)(v3 + 144) = Gadget::getGadgetId(this->gadget_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              (const unsigned int *)(v3 + 144));
            common::milog::MiLogStream::~MiLogStream(&v79);
            v8 = -1;
            goto LABEL_128;
          }
          if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->chain_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gadget_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->chain_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !gadget_config_ptr->chain_id )
          {
            common::milog::MiLogStream::create(
              &v79,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interact",
              264);
            v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v79,
                    (const char (*)[35])"chain_id not in config, gadget_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
LABEL_50:
            *(_DWORD *)(v3 + 144) = Gadget::getGadgetId(this->gadget_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v21,
              (const unsigned int *)(v3 + 144));
            common::milog::MiLogStream::~MiLogStream(&v79);
            break;
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 288));
          v22 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288))->design_config.txt_config_mgr.gadget_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->chain_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gadget_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->chain_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          chain_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetChainExcelConfig(
                               v22,
                               gadget_config_ptr->chain_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 288));
          if ( !chain_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v79,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interact",
              270);
            v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v79,
                    (const char (*)[40])"chain_config_ptr is nullptr, gadget_id:");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_50;
          }
          Player::getSceneComp(player);
          PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 256));
          if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 256), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v79,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_interact_comp.cpp",
              "interact",
              276);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v79,
              (const char (*)[21])"scene_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v79);
          }
          else
          {
            std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
            Scene::getOwnPlayer((const Scene *const)(v3 + 288));
            if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 288)) )
            {
              common::milog::MiLogStream::create(
                &v79,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/gadget_interact_comp.cpp",
                "interact",
                282);
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v79,
                (const char (*)[21])"scene_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v79);
            }
            else
            {
              *(_DWORD *)(v3 + 128) = 0;
              v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
              v24 = Player::getSceneComp(v23);
              if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->chain_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)gadget_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->chain_id >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( PlayerSceneComp::findGadgetChainLevel(v24, gadget_config_ptr->chain_id, (uint32_t *)(v3 + 128)) )
              {
                common::milog::MiLogStream::create(
                  &v79,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gadget/gadget_interact_comp.cpp",
                  "interact",
                  288);
                v25 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v79,
                        (const char (*)[39])"findGadgetChainLevel failed, chain_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  &gadget_config_ptr->chain_id);
                common::milog::MiLogStream::~MiLogStream(&v79);
              }
              else if ( *(_DWORD *)(v3 + 128) )
              {
                v27 = *(unsigned int *)(v3 + 128);
                if ( v27 <= std::vector<unsigned int>::size(&chain_config_ptr->buff_list) )
                {
                  v31 = std::vector<unsigned int>::operator[](
                          &chain_config_ptr->buff_list,
                          (unsigned int)(*(_DWORD *)(v3 + 128) - 1));
                  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  *(_DWORD *)(v3 + 144) = *v31;
                  AvatarComp = Player::getAvatarComp(player);
                  if ( PlayerAvatarComp::addTeamBuff(AvatarComp, *(_DWORD *)(v3 + 144), 0) )
                  {
                    common::milog::MiLogStream::create(
                      &v79,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/gadget/gadget_interact_comp.cpp",
                      "interact",
                      304);
                    v33 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                            &v79,
                            (const char (*)[29])"addTeamBuff failed, buff_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v3 + 144));
                    common::milog::MiLogStream::~MiLogStream(&v79);
                  }
                  else
                  {
                    GadgetInteractComp::writeThunderSakaraIneractLog(this, player, *(_DWORD *)(v3 + 128));
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v79,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/gadget/gadget_interact_comp.cpp",
                    "interact",
                    298);
                  v28 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          &v79,
                          (const char (*)[30])"chain_level exceed, chain_id:");
                  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v28,
                          &gadget_config_ptr->chain_id);
                  v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v29,
                          (const char (*)[14])" chain_level:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v3 + 128));
                  common::milog::MiLogStream::~MiLogStream(&v79);
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v79,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gadget/gadget_interact_comp.cpp",
                  "interact",
                  293);
                v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v79,
                        (const char (*)[39])"chain_level should not be 0, chain_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  &gadget_config_ptr->chain_id);
                common::milog::MiLogStream::~MiLogStream(&v79);
              }
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 288));
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 256));
          break;
        default:
LABEL_105:
          common::milog::MiLogStream::create(
            &v79,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget_interact_comp.cpp",
            "interact",
            356);
          v48 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v79,
                  (const char (*)[21])"invalid action_type:");
          v49 = common::milog::MiLogStream::operator<<<data::InteractActionType,(data::InteractActionType*)0>(
                  v48,
                  &action_config->action_type);
          v50 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v49, (const char (*)[9])" gadget:");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v51 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v50, this->gadget_);
          v52 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v51, (const char (*)[9])" player:");
          operator<<(v52, player);
          common::milog::MiLogStream::~MiLogStream(&v79);
          break;
      }
    }
    __gnu_cxx::__normal_iterator<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Gadget::setEnableInteract(this->gadget_, 0, 1);
  v53 = Player::getSceneComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v54 = Gadget::getGadgetId(this->gadget_);
  PlayerSceneComp::addGadgetInteractNum(v53, v54);
  EventComp = Player::getEventComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 144) = Gadget::getGadgetId(this->gadget_);
  common::tools::perf::make_shared<InteractConsumeGadgetEvent,unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
    (unsigned int *)(v3 + 256),
    (unsigned int *)(v3 + 144),
    (unsigned int *)(v3 + 48),
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 80),
    (unsigned int *)(v3 + 96),
    (unsigned int *)(v3 + 112),
    &this->interact_id_,
    v80,
    (unsigned int *)a3,
    (unsigned int *)player,
    (unsigned int *)this,
    v66,
    (unsigned int *)__for_begin._M_current);
  std::shared_ptr<BaseEvent>::shared_ptr<InteractConsumeGadgetEvent,void>(
    (std::shared_ptr<BaseEvent> *const)(v3 + 288),
    (std::shared_ptr<InteractConsumeGadgetEvent> *)(v3 + 256));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 288));
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 288));
  std::shared_ptr<InteractConsumeGadgetEvent>::~shared_ptr((std::shared_ptr<InteractConsumeGadgetEvent> *const)(v3 + 256));
  v56 = std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 224), 0LL)
     && *(_DWORD *)(v3 + 48)
     && gadget_script_config_ptr;
  if ( v56 && group_type != PATTERN )
  {
    v57 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->area_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->area_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    area_id = gadget_script_config_ptr->area_id;
    if ( *(_BYTE *)(((unsigned __int64)&thisb->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ConfigId = Entity::getConfigId((const Entity *const)thisb->gadget_);
    Scene::tryAddExplorePointOnTempleInteract(v57, playera, *(_DWORD *)(v3 + 48), ConfigId, area_id);
  }
  v8 = 0;
LABEL_128:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 224));
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 192));
LABEL_129:
  result = v8;
  if ( v61 == (unsigned int *)v3 )
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
  return result;
};

// Line 384: range 000000001753D284-000000001753D4DA
void __cdecl GadgetInteractComp::writeThunderSakaraIneractLog(
        GadgetInteractComp *const this,
        Player *player,
        uint32_t level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInteractThunderSakuraBough,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::string v8; // [rsp+0h] [rbp-E0h]
  google::protobuf::uint32 levela; // [rsp+Ch] [rbp-D4h]
  Player *const playera; // [rsp+10h] [rbp-D0h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-B0h] BYREF
  std::string v13; // [rsp+40h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+60h] [rbp-80h] BYREF

  *(&v8._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v8._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v8._M_string_length) = level;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:385 64 16 11 log_ptr:386";
  *(_QWORD *)(v3 + 16) = GadgetInteractComp::writeThunderSakaraIneractLog;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v13, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x614u, v8);
  std::string::~string(&v13);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyInteractThunderSakuraBough>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyInteractThunderSakuraBough,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInteractThunderSakuraBough,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyInteractThunderSakuraBough::set_level(v7, levela);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyInteractThunderSakuraBough,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyInteractThunderSakuraBough> *)(v3 + 64));
  Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyInteractThunderSakuraBough>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyInteractThunderSakuraBough> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v14 == (char *)v3 )
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
};
