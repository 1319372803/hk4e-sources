// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_capture_animal.cpp

// Line 37: range 000000001620127A-00000000162012FA
int32_t __cdecl WidgetCaptureAnimal::fromDetailBin(
        WidgetCaptureAnimal *const this,
        const proto::WidgetDetailBin *detail_bin,
        const proto::WidgetBin *widget_bin)
{
  uint32_t v3; // ecx
  char v4; // dl
  bool v5; // dl
  const proto::WidgetCaptureAnimalBin *bin; // [rsp+28h] [rbp-8h]

  bin = proto::WidgetDetailBin::capture_animal(detail_bin);
  v3 = proto::WidgetCaptureAnimalBin::skill_flag(bin);
  v4 = *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000);
  LOBYTE(detail_bin) = v4 != 0;
  v5 = v4 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v4;
  if ( v5 )
    __asan_report_store4(&this->skill_flag_, detail_bin, v5);
  this->skill_flag_ = v3;
  return 0;
};

// Line 44: range 00000000162012FC-000000001620137B
int32_t __cdecl WidgetCaptureAnimal::toDetailBin(
        const WidgetCaptureAnimal *const this,
        proto::WidgetDetailBin *detail_bin,
        proto::WidgetBin *widget_bin)
{
  proto::WidgetCaptureAnimalBin *bin; // [rsp+28h] [rbp-8h]

  bin = proto::WidgetDetailBin::mutable_capture_animal(detail_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_flag_);
  }
  proto::WidgetCaptureAnimalBin::set_skill_flag(bin, this->skill_flag_);
  return 0;
};

// Line 51: range 000000001620137C-000000001620150B
int32_t __cdecl WidgetCaptureAnimal::init(
        WidgetCaptureAnimal *const this,
        data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 28 capture_animal_config_ptr:52";
  *(_QWORD *)(v2 + 16) = WidgetCaptureAnimal::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetCaptureAnimal,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetCaptureAnimal>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetCaptureAnimal> *)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_capture_animal.cpp",
      "init",
      57);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v7,
      (const char (*)[46])"convert ConfigWidgetCaptureAnimal ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetCaptureAnimal>::~shared_ptr((std::shared_ptr<data::ConfigWidgetCaptureAnimal> *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
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

// Line 64: range 000000001620150C-0000000016202069
__int64 __fastcall WidgetCaptureAnimal::checkAndGetDropResult(
        WidgetCaptureAnimal *const this,
        uint32_t monster_id,
        uint32_t entity_id,
        std::vector<std::pair<unsigned int,data::ItemLimitType>> *drop_info_vec,
        std::vector<std::pair<unsigned int,data::ItemLimitType>> *trifle_item_vec,
        ActionReason *reason)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v11; // rax
  unsigned int v12; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v18; // rax
  _DWORD *v19; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  bool v27; // r14
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType>*,std::vector<std::pair<unsigned int,data::ItemLimitType>> >::reference v28; // rax
  std::pair<unsigned int,data::ItemLimitType> *v29; // rdx
  __int64 v30; // rsi
  data::ItemLimitType v31; // ecx
  char v32; // dl
  bool v33; // dl
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  __int64 result; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-138h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_begin_0; // [rsp+40h] [rbp-130h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  std::vector<std::pair<unsigned int,data::ItemLimitType>> *__for_range_0; // [rsp+50h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int,data::ItemLimitType> >::type *drop_id; // [rsp+58h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int,data::ItemLimitType> >::type *drop_limit_type; // [rsp+60h] [rbp-110h]
  const data::CaptureTagsExcelConfig *tags_config_ptr; // [rsp+68h] [rbp-108h]
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_end; // [rsp+70h] [rbp-100h] BYREF
  std::pair<unsigned int,data::ItemLimitType> __x; // [rsp+78h] [rbp-F8h] BYREF
  std::shared_ptr<Config> v54; // [rsp+80h] [rbp-F0h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v55; // [rsp+90h] [rbp-E0h] BYREF
  common::milog::MiLogStream v56; // [rsp+A0h] [rbp-D0h] BYREF
  char v57[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 4 14 capture_tag:76 48 4 10 drop_id:88 64 4 17 trifle_item_id:89 80 4 13 monster_id:62 96 1"
                        "6 35 config_widget_capture_animal_ptr:65";
  *(_QWORD *)(v6 + 16) = WidgetCaptureAnimal::checkAndGetDropResult;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -234556924;
  v8[536862723] = -202178560;
  *(_DWORD *)(v6 + 80) = monster_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v54);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v9->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->baseclass_0[40]);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v55, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetCaptureAnimal,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v6 + 96));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v55);
  std::shared_ptr<Config>::~shared_ptr(&v54);
  if ( std::operator==<data::ConfigWidgetCaptureAnimal>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetCaptureAnimal> *)(v6 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_capture_animal.cpp",
      "checkAndGetDropResult",
      68);
    v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v56,
            (const char (*)[44])"ConfigWidgetCaptureAnimal config not found.");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v11,
      (const unsigned int *)&this->baseclass_0[40]);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v12 = 5;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v55);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
    v14 = std::unordered_map<unsigned int,data::CaptureExcelConfig>::count(
            &v13->design_config.txt_config_mgr.monster_config_mgr.capture_excel_config_map,
            (const std::unordered_map<unsigned int,data::CaptureExcelConfig>::key_type *)(v6 + 80)) == 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v55);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_capture_animal.cpp",
        "checkAndGetDropResult",
        73);
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v56, (const char (*)[9])"monster:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v6 + 80));
      v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v16,
              (const char (*)[26])" cannot be captured, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->baseclass_0[32]);
      *(_DWORD *)(v6 + 64) = Player::getUid(*(const Player *const *)&this->baseclass_0[32]);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v12 = 5;
    }
    else
    {
      __for_range = &std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96))->capture_tag_array;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_begin_0._M_current = (std::pair<unsigned int,data::ItemLimitType> *)std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                &__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0) )
      {
        v18 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        *(_DWORD *)(v6 + 32) = *v19;
        if ( *(_DWORD *)(v6 + 32) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v54);
          v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
          tags_config_ptr = data::MonsterExcelConfigMgrBase::findCaptureTagsExcelConfig(
                              &v20->design_config.txt_config_mgr.monster_config_mgr,
                              *(_DWORD *)(v6 + 32));
          std::shared_ptr<Config>::~shared_ptr(&v54);
          if ( tags_config_ptr )
          {
            *(_DWORD *)(v6 + 48) = 0;
            *(_DWORD *)(v6 + 64) = 0;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v55);
            v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
            v27 = MonsterExcelConfigMgr::getCaptureAnimalMonsterDropID(
                    &v26->design_config.txt_config_mgr.monster_config_mgr,
                    *(_DWORD *)(v6 + 80),
                    *(_DWORD *)(v6 + 32),
                    (uint32_t *)(v6 + 48),
                    (uint32_t *)(v6 + 64)) != 0;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v55);
            if ( !v27 )
            {
              if ( *(_DWORD *)(v6 + 48) )
              {
                __for_end._M_current = (std::pair<unsigned int,data::ItemLimitType> *)std::make_pair<unsigned int &,data::ItemLimitType const&>(
                                                                                        (unsigned int *)(v6 + 48),
                                                                                        &tags_config_ptr->item_limit_type);
                std::vector<std::pair<unsigned int,data::ItemLimitType>>::push_back(
                  drop_info_vec,
                  (std::vector<std::pair<unsigned int,data::ItemLimitType>>::value_type *)&__for_end);
              }
              if ( *(_DWORD *)(v6 + 64) )
              {
                __x = std::make_pair<unsigned int &,data::ItemLimitType const&>(
                        (unsigned int *)(v6 + 64),
                        &tags_config_ptr->item_limit_type);
                std::vector<std::pair<unsigned int,data::ItemLimitType>>::push_back(trifle_item_vec, &__x);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/widget/widget_capture_animal.cpp",
              "checkAndGetDropResult",
              85);
            v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v56, (const char (*)[9])"monster:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v6 + 80));
            v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v22,
                    (const char (*)[14])" capture_tag:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v6 + 32));
            v25 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    v24,
                    (const char (*)[43])" not find CaptureTagsExcelConfig res, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->baseclass_0[32]);
            *(_DWORD *)(v6 + 64) = Player::getUid(*(const Player *const *)&this->baseclass_0[32]);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v6 + 64));
            common::milog::MiLogStream::~MiLogStream(&v56);
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      __for_range_0 = drop_info_vec;
      __for_begin_0._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::begin(drop_info_vec)._M_current;
      __for_end._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::end(__for_range_0)._M_current;
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>(
                &__for_begin_0,
                &__for_end) )
        {
          v12 = 0;
          goto LABEL_48;
        }
        v28 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator*(&__for_begin_0);
        v29 = v28;
        if ( ((unsigned __int8)v28 & 7) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v28->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v28 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v28->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v28, 8LL);
        }
        __x = *v29;
        drop_id = std::get<0ul,unsigned int,data::ItemLimitType>(&__x);
        drop_limit_type = std::get<1ul,unsigned int,data::ItemLimitType>(&__x);
        if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(drop_id);
        }
        if ( *drop_id )
        {
          v30 = ((unsigned __int8)drop_limit_type & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)drop_limit_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)drop_limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_limit_type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(drop_limit_type);
          }
          v31 = *drop_limit_type;
          v32 = *(_BYTE *)(((unsigned __int64)&reason->limit_type >> 3) + 0x7FFF8000);
          LOBYTE(v30) = v32 != 0;
          v33 = v32 != 0 && (char)((((_BYTE)reason + 4) & 7) + 3) >= v32;
          if ( v33 )
            __asan_report_store4(&reason->limit_type, v30, v33);
          reason->limit_type = v31;
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->baseclass_0[32]);
          ItemComp = Player::getItemComp(*(Player *const *)&this->baseclass_0[32]);
          if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
          {
            ItemComp = (PlayerItemComp *)drop_id;
            __asan_report_load4(drop_id);
          }
          if ( PlayerItemComp::checkFrontLooseGrantDropItems(ItemComp, *drop_id, 1u, reason, 0LL) )
            break;
        }
        __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator++(&__for_begin_0);
      }
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_capture_animal.cpp",
        "checkAndGetDropResult",
        113);
      v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v56, (const char (*)[9])"monster:");
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v6 + 80));
      v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])" drop_id:");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, drop_id);
      v39 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v38, (const char (*)[17])" not valid, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->baseclass_0[32]);
      *(_DWORD *)(v6 + 64) = Player::getUid(*(const Player *const *)&this->baseclass_0[32]);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v12 = 1591;
    }
  }
LABEL_48:
  std::shared_ptr<data::ConfigWidgetCaptureAnimal>::~shared_ptr((std::shared_ptr<data::ConfigWidgetCaptureAnimal> *const)(v6 + 96));
  result = v12;
  if ( v57 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 121: range 000000001620206A-0000000016202EE7
void __fastcall WidgetCaptureAnimal::tryCreateTrifleGadget(
        WidgetCaptureAnimal *const this,
        uint32_t monster_id,
        uint32_t entity_id,
        const std::vector<std::pair<unsigned int,data::ItemLimitType>> *trifle_item_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::pair<unsigned int,data::ItemLimitType> *v10; // rax
  std::pair<unsigned int,data::ItemLimitType> *v11; // rdx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  _BOOL4 v20; // r14d
  Scene *v21; // rax
  const std::shared_ptr<Item> *v22; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  unsigned __int64 Rotation; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  unsigned __int64 v35; // rax
  void (__fastcall *v36)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::const_iterator __for_begin; // [rsp+28h] [rbp-258h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::const_iterator __for_end; // [rsp+30h] [rbp-250h] BYREF
  const std::vector<std::pair<unsigned int,data::ItemLimitType>> *__for_range; // [rsp+38h] [rbp-248h]
  std::tuple_element<0,const std::pair<unsigned int,data::ItemLimitType> >::type *item_id; // [rsp+40h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int,data::ItemLimitType> >::type *limit_type; // [rsp+48h] [rbp-238h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+50h] [rbp-230h]
  std::pair<unsigned int,data::ItemLimitType> v52; // [rsp+58h] [rbp-228h] BYREF
  std::shared_ptr<Config> v53; // [rsp+60h] [rbp-220h] BYREF
  ActionReason action_reason; // [rsp+70h] [rbp-210h] BYREF
  common::milog::MiLogStream v55; // [rsp+90h] [rbp-1F0h] BYREF
  char v56[464]; // [rsp+B0h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 14 monster_id:120 64 4 13 entity_id:120 80 16 13 scene_ptr:127 112 16 14 entity_ptr:133 1"
                        "44 16 14 item_param:152 176 16 14 trifle_ptr:174 208 24 12 item_vec:155 272 112 16 trifle_param:162";
  *(_QWORD *)(v4 + 16) = WidgetCaptureAnimal::tryCreateTrifleGadget;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 48) = monster_id;
  *(_DWORD *)(v4 + 64) = entity_id;
  if ( !std::vector<std::pair<unsigned int,data::ItemLimitType>>::empty(trifle_item_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->baseclass_0[32]);
    Player::getSceneComp(*(Player *const *)&this->baseclass_0[32]);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 80));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_capture_animal.cpp",
        "tryCreateTrifleGadget",
        130);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v55,
        (const char (*)[24])"scene_ptr is null, uid:");
      common::milog::MiLogStream::~MiLogStream(&v55);
    }
    else
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(v7);
      v8 = *(_QWORD *)v7 + 120LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(*(_QWORD *)v7 + 120LL);
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v8)(v4 + 112, v7, *(unsigned int *)(v4 + 64));
      if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v4 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_capture_animal.cpp",
          "tryCreateTrifleGadget",
          136);
        v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v55,
               (const char (*)[29])"findEntity fails, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      else
      {
        __for_range = trifle_item_vec;
        __for_begin._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::begin(trifle_item_vec)._M_current;
        __for_end._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::end(trifle_item_vec)._M_current;
        while ( __gnu_cxx::operator!=<std::pair<unsigned int,data::ItemLimitType> const*,std::vector<std::pair<unsigned int,data::ItemLimitType>>>(
                  &__for_begin,
                  &__for_end) )
        {
          v10 = (std::pair<unsigned int,data::ItemLimitType> *)__gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> const*,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator*(&__for_begin);
          v11 = v10;
          if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v10, 8LL);
          }
          v52 = *v11;
          item_id = (std::tuple_element<0,const std::pair<unsigned int,data::ItemLimitType> >::type *)std::get<0ul,unsigned int,data::ItemLimitType>(&v52);
          limit_type = (std::tuple_element<1,const std::pair<unsigned int,data::ItemLimitType> >::type *)std::get<1ul,unsigned int,data::ItemLimitType>(&v52);
          if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(item_id);
          }
          if ( *item_id )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v53);
            p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.material_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(item_id);
            }
            material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                    p_material_config_mgr,
                                    *item_id);
            std::shared_ptr<Config>::~shared_ptr(&v53);
            if ( !material_config_ptr )
              goto LABEL_28;
            if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(&material_config_ptr->material_type);
            }
            if ( material_config_ptr->material_type == MATERIAL_FAKE_ABSORBATE )
            {
LABEL_28:
              common::milog::MiLogStream::create(
                &v55,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/widget_capture_animal.cpp",
                "tryCreateTrifleGadget",
                148);
              v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v55, (const char (*)[9])"monster:");
              v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v13,
                      (const unsigned int *)(v4 + 48));
              v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v14,
                      (const char (*)[31])" drop trifle itemid not valid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, item_id);
              common::milog::MiLogStream::~MiLogStream(&v55);
              break;
            }
            *(_DWORD *)(v4 + 144) = 0;
            *(_DWORD *)(v4 + 148) = 0;
            *(_DWORD *)(v4 + 152) = 0;
            *(_DWORD *)(v4 + 156) = 0;
            if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(item_id);
            }
            *(_DWORD *)(v4 + 144) = *item_id;
            *(_DWORD *)(v4 + 148) = 1;
            if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->baseclass_0[32]);
            ItemComp = Player::getItemComp(*(Player *const *)&this->baseclass_0[32]);
            PlayerItemComp::createItem(
              (std::vector<std::shared_ptr<Item>> *)(v4 + 208),
              ItemComp,
              (const ItemParam *)(v4 + 144));
            if ( std::vector<std::shared_ptr<Item>>::size((const std::vector<std::shared_ptr<Item>> *const)(v4 + 208)) == 1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)limit_type >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limit_type >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(limit_type);
              }
              ActionReason::ActionReason(&action_reason, ACTION_REASON_CAPTURE_ANIMAL_SUCC, *limit_type);
              TrifleParam::TrifleParam((TrifleParam *const)(v4 + 272), &action_reason);
              v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
              *(_DWORD *)(v4 + 272) = Scene::genNewEntityId(v21, PROT_ENTITY_GADGET);
              v22 = std::vector<std::shared_ptr<Item>>::operator[](
                      (std::vector<std::shared_ptr<Item>> *const)(v4 + 208),
                      0LL);
              std::shared_ptr<Item>::operator=((std::shared_ptr<Item> *const)(v4 + 280), v22);
              v23 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              Position = (unsigned __int64)Entity::getPosition(v23);
              if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
                && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
              {
                Position = __asan_report_load_n(Position, 12LL);
              }
              *(_QWORD *)(v4 + 296) = *(_QWORD *)Position;
              *(_DWORD *)(v4 + 304) = *(_DWORD *)(Position + 8);
              v25 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              Rotation = (unsigned __int64)Entity::getRotation(v25);
              if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
                && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
              {
                Rotation = __asan_report_load_n(Rotation, 12LL);
              }
              *(_QWORD *)(v4 + 308) = *(_QWORD *)Rotation;
              *(_DWORD *)(v4 + 316) = *(_DWORD *)(Rotation + 8);
              std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v4 + 176), 0LL);
              std::shared_ptr<Group>::operator=(
                (std::shared_ptr<Group> *const)(v4 + 320),
                (std::shared_ptr<Group> *)(v4 + 176));
              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 176));
              v27 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              *(_DWORD *)(v4 + 336) = Entity::getEntityId(v27);
              if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->baseclass_0[32]);
              *(_DWORD *)(v4 + 340) = Player::getUid(*(const Player *const *)&this->baseclass_0[32]);
              *(_DWORD *)(v4 + 344) = EntityMgr::getBornTypeFromSourceEntity((const EntityPtr *)(v4 + 112));
              v28 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              *(_DWORD *)(v4 + 348) = Entity::getRoomId(v28);
              *(_BYTE *)(v4 + 352) = 1;
              *(_BYTE *)(v4 + 353) = 1;
              EntityMgr::createTrifle((const TrifleParam *)(v4 + 176));
              if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v4 + 176), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v55,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/widget/widget_capture_animal.cpp",
                  "tryCreateTrifleGadget",
                  177);
                v29 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        &v55,
                        (const char (*)[29])"createTrifle fails, item_id:");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v4 + 144));
                v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])" count:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  (const unsigned int *)(v4 + 148));
                common::milog::MiLogStream::~MiLogStream(&v55);
                v32 = 0;
              }
              else
              {
                v33 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                v34 = v33;
                if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v33);
                v35 = *(_QWORD *)v34->baseclass_0 + 56LL;
                if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
                  v35 = __asan_report_load8(*(_QWORD *)v34->baseclass_0 + 56LL);
                v36 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v35;
                v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
                v36(v34, v37, &VisionContext::meet_context);
                common::milog::MiLogStream::create(
                  &v55,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/widget/widget_capture_animal.cpp",
                  "tryCreateTrifleGadget",
                  181);
                v38 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        &v55,
                        (const char (*)[20])"dropTrifle item_id:");
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v38,
                        (const unsigned int *)(v4 + 144));
                v40 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v39,
                        (const char (*)[10])" entity: ");
                v41 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                v42 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v40, v41);
                v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v42,
                        (const char (*)[10])" is_fake:");
                common::milog::MiLogStream::operator<<(v43, *(_BYTE *)(v4 + 353));
                common::milog::MiLogStream::~MiLogStream(&v55);
                v32 = 1;
              }
              std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 176));
              TrifleParam::~TrifleParam((TrifleParam *const)(v4 + 272));
              v20 = v32 == 1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v55,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/widget_capture_animal.cpp",
                "tryCreateTrifleGadget",
                158);
              v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      &v55,
                      (const char (*)[27])"createItem fails, item_id:");
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      (const unsigned int *)(v4 + 144));
              v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" count:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 148));
              common::milog::MiLogStream::~MiLogStream(&v55);
              v20 = 0;
            }
            std::vector<std::shared_ptr<Item>>::~vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 208));
            if ( !v20 )
              break;
          }
          __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> const*,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator++(&__for_begin);
        }
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 112));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 80));
  }
  if ( v56 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 187: range 0000000016202EE8-0000000016203132
bool __cdecl WidgetCaptureAnimal::checkMonsterCanCapture(
        WidgetCaptureAnimal *const this,
        uint32_t monster_id,
        data::ConfigWidgetCaptureAnimalPtr *p_config_ptr)
{
  common::milog::MiLogStream *v3; // rbx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rax
  unsigned int *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // bl
  unsigned int val; // [rsp+2Ch] [rbp-64h] BYREF
  int32_t match_count; // [rsp+30h] [rbp-60h]
  unsigned int capture_tag; // [rsp+34h] [rbp-5Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-58h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-50h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  if ( std::operator==<data::ConfigWidgetCaptureAnimal>(p_config_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_capture_animal.cpp",
      "checkMonsterCanCapture",
      190);
    v3 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v17,
           (const char (*)[66])"checkMonsterCanCapture ConfigWidgetCaptureAnimalPtr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->baseclass_0[32]);
    val = Player::getUid(*(const Player *const *)&this->baseclass_0[32]);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    return 0;
  }
  else
  {
    match_count = 0;
    __for_range = &std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_config_ptr)->capture_tag_array;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      capture_tag = *v6;
      if ( capture_tag )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v16);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
        v8 = !MonsterExcelConfigMgr::isMonsterCaptureExist(
                &v7->design_config.txt_config_mgr.monster_config_mgr,
                monster_id,
                capture_tag);
        std::shared_ptr<Config>::~shared_ptr(&v16);
        if ( v8 )
          return 0;
        ++match_count;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    return match_count > 0;
  }
};

// Line 218: range 0000000016203134-000000001620513F
int32_t __cdecl WidgetCaptureAnimal::onDoCapture(
        WidgetCaptureAnimal *const this,
        const proto::WidgetCaptureAnimalReq *req,
        proto::WidgetCaptureAnimalRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v9; // rax
  const proto::Vector *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  int v21; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  int v23; // r15d
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  const Vector3 *Position; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  const Vector3 *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  const Vector3 *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  const Vector3 *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  _BOOL4 v37; // r15d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  bool v39; // r15
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  bool *p_is_consume_material; // rax
  PlayerItemComp *ItemComp; // rax
  int v47; // r15d
  std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rdx
  bool *v49; // rax
  PlayerItemComp *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rcx
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType>*,std::vector<std::pair<unsigned int,data::ItemLimitType>> >::reference v56; // rax
  std::pair<unsigned int,data::ItemLimitType> *v57; // rdx
  uint32_t v58; // esi
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r15
  ItemParam *M_current; // r15
  PlayerItemComp *v65; // rax
  PlayerEventComp *EventComp; // r15
  std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  unsigned int *v68; // r8
  bool *v69; // r9
  __int64 v70; // rsi
  uint32_t v71; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rdx
  char v73; // cl
  int32_t v74; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rdx
  char v76; // cl
  int v77; // r15d
  __int64 v78; // rax
  char v79; // dl
  bool v80; // dl
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rax
  data::MonsterType MonsterType; // r15d
  __int64 v83; // rax
  char v84; // dl
  bool v85; // dl
  Group *v86; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v87; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rdx
  __int64 v91; // rsi
  uint32_t v92; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rdx
  char v94; // cl
  int32_t v95; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // rdx
  char v97; // cl
  int v98; // r15d
  __int64 v99; // rax
  char v100; // dl
  bool v101; // dl
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v102; // rax
  data::MonsterType v103; // r15d
  __int64 v104; // rax
  char v105; // dl
  bool v106; // dl
  Group *v107; // rax
  Player *v108; // r14
  bool v109; // dl
  std::string v111; // [rsp+0h] [rbp-3B0h]
  ItemParam *__last; // [rsp+10h] [rbp-3A0h]
  int32_t ret; // [rsp+30h] [rbp-380h]
  int check_distance; // [rsp+34h] [rbp-37Ch]
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_begin; // [rsp+38h] [rbp-378h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_end; // [rsp+40h] [rbp-370h] BYREF
  __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > __i; // [rsp+48h] [rbp-368h] BYREF
  __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > __position; // [rsp+50h] [rbp-360h] BYREF
  proto::Vector *rsp_pos; // [rsp+58h] [rbp-358h]
  std::vector<std::pair<unsigned int,data::ItemLimitType>> *__for_range; // [rsp+60h] [rbp-350h]
  std::tuple_element<0,std::pair<unsigned int,data::ItemLimitType> >::type *drop_id; // [rsp+68h] [rbp-348h]
  std::tuple_element<1,std::pair<unsigned int,data::ItemLimitType> >::type *drop_limit_type; // [rsp+70h] [rbp-340h]
  std::pair<unsigned int,data::ItemLimitType> __in; // [rsp+78h] [rbp-338h] BYREF
  common::milog::MiLogStream v124; // [rsp+80h] [rbp-330h] BYREF
  char v125[784]; // [rsp+A0h] [rbp-310h] BYREF

  *(&v111._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v125;
  v111._M_string_length = (std::string::size_type)v125;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "19 32 1 10 holder:243 48 4 13 entity_id:234 64 4 14 monster_id:289 80 4 11 sub_ret:324 96 8 17 o"
                        "utput_result:343 128 12 11 context:377 160 16 36 config_widget_capture_animal_ptr:219 192 16 13 "
                        "scene_ptr:225 224 16 11 log_ptr:244 256 16 14 entity_ptr:259 288 16 18 cur_avatar_ptr:269 320 16"
                        " 15 monster_ptr:281 352 16 13 group_ptr:361 384 16 14 item_param:299 416 24 17 drop_info_vec:309"
                        " 480 24 19 trifle_item_vec:310 544 24 10 reason:311 608 24 12 item_vec:333 672 24 17 drop_item_vec:340";
  *(_QWORD *)(v4 + 16) = WidgetCaptureAnimal::onDoCapture;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219020288;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -219021312;
  v6[536862731] = -219021312;
  v6[536862732] = -219021312;
  v6[536862733] = -234881024;
  v6[536862734] = -218959118;
  v6[536862735] = -234881024;
  v6[536862736] = -218959118;
  v6[536862737] = -234881024;
  v6[536862738] = -218959118;
  v6[536862739] = -234881024;
  v6[536862740] = -218959118;
  v6[536862741] = -218103808;
  v6[536862742] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 352));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->baseclass_0[40]);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v4 + 384), WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetCaptureAnimal,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v4 + 160));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v4 + 384));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 352));
  if ( std::operator==<data::ConfigWidgetCaptureAnimal>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetCaptureAnimal> *)(v4 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v124,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_capture_animal.cpp",
      "onDoCapture",
      222);
    v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v124,
           (const char (*)[44])"ConfigWidgetCaptureAnimal config not found.");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v9,
      (const unsigned int *)&this->baseclass_0[40]);
    common::milog::MiLogStream::~MiLogStream(&v124);
    v3 = 5;
    goto LABEL_141;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->baseclass_0[32]);
  Player::getSceneComp(*(Player *const *)&this->baseclass_0[32]);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 192));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 192), 0LL) )
  {
    rsp_pos = proto::WidgetCaptureAnimalRsp::mutable_pos(*((proto::WidgetCaptureAnimalRsp *const *)&v111._anon_0._M_allocated_capacity
                                                         + 1));
    v10 = proto::WidgetCaptureAnimalReq::pos(req);
    proto::Vector::operator=(rsp_pos, v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[40]);
    }
    proto::WidgetCaptureAnimalRsp::set_material_id(
      *((proto::WidgetCaptureAnimalRsp *const *)&v111._anon_0._M_allocated_capacity + 1),
      *(_DWORD *)&this->baseclass_0[40]);
    *(_DWORD *)(v4 + 48) = proto::WidgetCaptureAnimalReq::entity_id(req);
    if ( *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->skill_flag_);
    }
    if ( !this->skill_flag_ )
    {
      common::milog::MiLogStream::create(
        &v124,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_capture_animal.cpp",
        "onDoCapture",
        239);
      v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v124,
              (const char (*)[46])"onDoCapture not find skill_flag, material_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              (const unsigned int *)&this->baseclass_0[40]);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v12,
              (const char (*)[18])" cur skill_flag_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->skill_flag_);
      common::milog::MiLogStream::~MiLogStream(&v124);
      v3 = 608;
      goto LABEL_140;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->baseclass_0[32]);
    BasicComp = Player::getBasicComp(*(Player *const *)&this->baseclass_0[32]);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v124, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xDCAu, v111);
    std::string::~string(&v124);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCaptureAnimal>();
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
    proto_log::PlayerLogBodyCaptureAnimal::set_capture_result(v15, 2u);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[40]);
    }
    proto_log::PlayerLogBodyCaptureAnimal::set_material_id(v16, *(_DWORD *)&this->baseclass_0[40]);
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
    proto_log::PlayerLogBodyCaptureAnimal::set_monster_id(v17, 0);
    proto::WidgetCaptureAnimalRsp::set_entity_id(
      *((proto::WidgetCaptureAnimalRsp *const *)&v111._anon_0._M_allocated_capacity + 1),
      0);
    ret = 0;
    if ( *(_DWORD *)(v4 + 48) )
    {
      v18 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(v18);
      v19 = *(_QWORD *)v18 + 120LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(*(_QWORD *)v18 + 120LL);
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v19)(
        v4 + 256,
        v18,
        *(unsigned int *)(v4 + 48));
      if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v4 + 256), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v124,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_capture_animal.cpp",
          "onDoCapture",
          263);
        v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v124,
                (const char (*)[29])"findEntity fails, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v124);
        ret = 1590;
        v21 = 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 384));
        v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
        check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v22->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->baseclass_0[32]);
        Player::getAvatarComp(*(Player *const *)&this->baseclass_0[32]);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v4 + 288));
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 288), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v124,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/widget_capture_animal.cpp",
            "onDoCapture",
            272);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v124,
            (const char (*)[19])"getCurAvatar fails");
          common::milog::MiLogStream::~MiLogStream(&v124);
          v3 = -1;
          v23 = 0;
        }
        else
        {
          v24 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
          Position = Entity::getPosition(v24);
          v26 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
          v27 = Entity::getPosition((const Entity *const)v26);
          if ( getDistance(v27, Position) <= (float)check_distance )
          {
            std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v4 + 320));
            if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v4 + 320)) )
            {
              common::milog::MiLogStream::create(
                &v124,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/widget/widget_capture_animal.cpp",
                "onDoCapture",
                284);
              v35 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      &v124,
                      (const char (*)[20])"onDoCapture entity:");
              v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      (const unsigned int *)(v4 + 48));
              common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v36, (const char (*)[16])off_25B9CF40);
              common::milog::MiLogStream::~MiLogStream(&v124);
              ret = 1592;
              v37 = 0;
            }
            else
            {
              v38 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 320));
              *(_DWORD *)(v4 + 64) = Monster::getMonsterId(v38);
              std::shared_ptr<data::ConfigWidgetCaptureAnimal>::shared_ptr(
                (std::shared_ptr<data::ConfigWidgetCaptureAnimal> *const)(v4 + 384),
                (const std::shared_ptr<data::ConfigWidgetCaptureAnimal> *)(v4 + 160));
              v39 = !WidgetCaptureAnimal::checkMonsterCanCapture(
                       this,
                       *(_DWORD *)(v4 + 64),
                       (data::ConfigWidgetCaptureAnimalPtr *)(v4 + 384));
              std::shared_ptr<data::ConfigWidgetCaptureAnimal>::~shared_ptr((std::shared_ptr<data::ConfigWidgetCaptureAnimal> *const)(v4 + 384));
              if ( v39 )
              {
                common::milog::MiLogStream::create(
                  &v124,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/widget/widget_capture_animal.cpp",
                  "onDoCapture",
                  292);
                v40 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        &v124,
                        (const char (*)[20])"onDoCapture entity:");
                v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v40,
                        (const unsigned int *)(v4 + 48));
                v42 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v41,
                        (const char (*)[10])" monster:");
                v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v42,
                        (const unsigned int *)(v4 + 64));
                common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v43,
                  (const char (*)[30])" cannot be captured by config");
                common::milog::MiLogStream::~MiLogStream(&v124);
                ret = 1592;
                v37 = 0;
              }
              else
              {
                v44 = std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                p_is_consume_material = &v44->is_consume_material;
                if ( *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3) + 0x7FFF8000) != 0
                  && ((unsigned __int8)p_is_consume_material & 7) >= *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load1(p_is_consume_material);
                }
                if ( !v44->is_consume_material )
                  goto LABEL_49;
                *(_DWORD *)(v4 + 384) = 0;
                *(_DWORD *)(v4 + 388) = 0;
                *(_DWORD *)(v4 + 392) = 0;
                *(_DWORD *)(v4 + 396) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->baseclass_0[40]);
                }
                *(_DWORD *)(v4 + 384) = *(_DWORD *)&this->baseclass_0[40];
                *(_DWORD *)(v4 + 388) = 1;
                if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->baseclass_0[32]);
                ItemComp = Player::getItemComp(*(Player *const *)&this->baseclass_0[32]);
                if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v4 + 384)) )
                {
                  ret = 609;
                  v37 = 0;
                }
                else
                {
LABEL_49:
                  std::vector<std::pair<unsigned int,data::ItemLimitType>>::vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v4 + 416));
                  std::vector<std::pair<unsigned int,data::ItemLimitType>>::vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v4 + 480));
                  ActionReason::ActionReason(
                    (ActionReason *const)(v4 + 544),
                    ACTION_REASON_CAPTURE_ANIMAL_SUCC,
                    ITEM_LIMIT_CAPTURE_REWARD);
                  ret = WidgetCaptureAnimal::checkAndGetDropResult(
                          this,
                          *(_DWORD *)(v4 + 64),
                          *(_DWORD *)(v4 + 48),
                          (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v4 + 416),
                          (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v4 + 480),
                          (ActionReason *)(v4 + 544));
                  if ( ret )
                  {
                    v47 = 0;
                  }
                  else
                  {
                    v48 = std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                    v49 = &v48->is_consume_material;
                    if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
                      && ((unsigned __int8)v49 & 7) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load1(v49);
                    }
                    if ( !v48->is_consume_material )
                      goto LABEL_62;
                    *(_DWORD *)(v4 + 384) = 0;
                    *(_DWORD *)(v4 + 388) = 0;
                    *(_DWORD *)(v4 + 392) = 0;
                    *(_DWORD *)(v4 + 396) = 0;
                    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->baseclass_0[40]);
                    }
                    *(_DWORD *)(v4 + 384) = *(_DWORD *)&this->baseclass_0[40];
                    *(_DWORD *)(v4 + 388) = 1;
                    SubItemReason::SubItemReason(
                      (SubItemReason *const)(v4 + 96),
                      ACTION_REASON_USE_WIDGET_CAPTURE_ANIMAL);
                    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->baseclass_0[32]);
                    v50 = Player::getItemComp(*(Player *const *)&this->baseclass_0[32]);
                    *(_DWORD *)(v4 + 80) = PlayerItemComp::subItem(
                                             v50,
                                             (const ItemParam *)(v4 + 384),
                                             (const SubItemReason *)(v4 + 96));
                    if ( *(_DWORD *)(v4 + 80) )
                    {
                      common::milog::MiLogStream::create(
                        &v124,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/player/widget/widget_capture_animal.cpp",
                        "onDoCapture",
                        327);
                      v51 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              &v124,
                              (const char (*)[26])"subItem fail, item_param:");
                      v52 = operator<<(v51, (const ItemParam *)(v4 + 384));
                      v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                              v52,
                              (const char (*)[10])" sub_ret:");
                      v54 = common::milog::MiLogStream::operator<<<int,(int *)0>(v53, (const int *)(v4 + 80));
                      v55 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                              v54,
                              (const char (*)[9])" player:");
                      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->baseclass_0[32]);
                      operator<<(v55, *(const Player **)&this->baseclass_0[32]);
                      common::milog::MiLogStream::~MiLogStream(&v124);
                      ret = 609;
                      v47 = 0;
                    }
                    else
                    {
LABEL_62:
                      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 608));
                      __for_range = (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v4 + 416);
                      __for_begin._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::begin((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v4 + 416))._M_current;
                      __for_end._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::end((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v4 + 416))._M_current;
                      while ( __gnu_cxx::operator!=<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>(
                                &__for_begin,
                                &__for_end) )
                      {
                        v56 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator*(&__for_begin);
                        v57 = v56;
                        if ( ((unsigned __int8)v56 & 7) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000)
                          && *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
                          || *(_BYTE *)((((unsigned __int64)&v56->second + 3) >> 3) + 0x7FFF8000) != 0
                          && (((unsigned __int8)v56 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v56->second + 3) >> 3)
                                                                          + 0x7FFF8000) )
                        {
                          __asan_report_load_n(v56, 8LL);
                        }
                        __in = *v57;
                        drop_id = std::get<0ul,unsigned int,data::ItemLimitType>(&__in);
                        drop_limit_type = std::get<1ul,unsigned int,data::ItemLimitType>(&__in);
                        if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3)
                                                                                    + 0x7FFF8000) )
                        {
                          __asan_report_load4(drop_id);
                        }
                        if ( *drop_id )
                        {
                          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 672));
                          if ( *(_BYTE *)(((unsigned __int64)drop_limit_type >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)drop_limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_limit_type >> 3)
                                                                                              + 0x7FFF8000) )
                          {
                            __asan_report_load4(drop_limit_type);
                          }
                          *(std::tuple_element<1,std::pair<unsigned int,data::ItemLimitType> >::type *)(v4 + 548) = *drop_limit_type;
                          if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3)
                                                                                      + 0x7FFF8000) )
                          {
                            __asan_report_load4(drop_id);
                          }
                          v58 = *drop_id;
                          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->baseclass_0[32]);
                          *(OutputResult *)(v4 + 96) = DropUtils::dropItems(
                                                         *(Player **)&this->baseclass_0[32],
                                                         v58,
                                                         1u,
                                                         (const ActionReason *)(v4 + 544),
                                                         (std::vector<ItemParam> *)(v4 + 672));
                          if ( *(_DWORD *)(v4 + 96) )
                          {
                            common::milog::MiLogStream::create(
                              &v124,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/widget/widget_capture_animal.cpp",
                              "onDoCapture",
                              346);
                            v59 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                    &v124,
                                    (const char (*)[12])"monster_id:");
                            v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v59,
                                    (const unsigned int *)(v4 + 64));
                            v61 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                                    v60,
                                    (const char (*)[10])" drop_id:");
                            v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, drop_id);
                            v63 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                                    v62,
                                    (const char (*)[20])" grant failed, uid:");
                            if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->baseclass_0[32]);
                            *(_DWORD *)(v4 + 80) = Player::getUid(*(const Player *const *)&this->baseclass_0[32]);
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v63,
                              (const unsigned int *)(v4 + 80));
                            common::milog::MiLogStream::~MiLogStream(&v124);
                          }
                          else
                          {
                            __last = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v4 + 672))._M_current;
                            M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v4 + 672))._M_current;
                            __i._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v4 + 608))._M_current;
                            __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
                              &__position,
                              &__i);
                            std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
                              (std::vector<ItemParam> *const)(v4 + 608),
                              __position,
                              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current,
                              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__last);
                          }
                          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 672));
                        }
                        __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator++(&__for_begin);
                      }
                      if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 608)) )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->baseclass_0[32]);
                        v65 = Player::getItemComp(*(Player *const *)&this->baseclass_0[32]);
                        PlayerItemComp::addItemBatch(
                          v65,
                          (const std::vector<ItemParam> *)(v4 + 608),
                          (const ActionReason *)(v4 + 544),
                          0LL);
                      }
                      WidgetCaptureAnimal::tryCreateTrifleGadget(
                        this,
                        *(_DWORD *)(v4 + 64),
                        *(_DWORD *)(v4 + 48),
                        (const std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v4 + 480));
                      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->baseclass_0[32]);
                      EventComp = Player::getEventComp(*(Player *const *)&this->baseclass_0[32]);
                      v67 = std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                      common::tools::perf::make_shared<CaptureSuccEvent,unsigned int &,unsigned int &,bool &>(
                        (unsigned int *)(v4 + 352),
                        (unsigned int *)(v4 + 64),
                        (bool *)&this->baseclass_0[40],
                        (unsigned int *)&v67->is_enter_codex,
                        v68,
                        v69);
                      std::shared_ptr<BaseEvent>::shared_ptr<CaptureSuccEvent,void>(
                        (std::shared_ptr<BaseEvent> *const)(v4 + 384),
                        (std::shared_ptr<CaptureSuccEvent> *)(v4 + 352));
                      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v4 + 384));
                      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 384));
                      std::shared_ptr<CaptureSuccEvent>::~shared_ptr((std::shared_ptr<CaptureSuccEvent> *const)(v4 + 352));
                      std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                      Entity::getGroup((const Entity *const)(v4 + 352));
                      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 352)) )
                      {
                        EventUtil::createEvent((data::EventType)(v4 + 384));
                        v70 = 0LL;
                        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v4 + 384), 0LL) )
                        {
                          v71 = *(_DWORD *)(v4 + 48);
                          v72 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                          v73 = *(_BYTE *)(((unsigned __int64)&v72->source_entity_id >> 3) + 0x7FFF8000);
                          if ( v73 != 0 && (char)((((_BYTE)v72 + 4) & 7) + 3) >= v73 )
                          {
                            LOBYTE(v70) = v73 != 0;
                            __asan_report_store4(&v72->source_entity_id, v70, (_BYTE)v72);
                          }
                          v72->source_entity_id = v71;
                          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&this->baseclass_0[40]);
                          }
                          v74 = *(_DWORD *)&this->baseclass_0[40];
                          v75 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                          v76 = *(_BYTE *)(((unsigned __int64)&v75->param1 >> 3) + 0x7FFF8000);
                          if ( v76 != 0 && (char)((((_BYTE)v75 + 44) & 7) + 3) >= v76 )
                          {
                            LOBYTE(v70) = v76 != 0;
                            __asan_report_store4(&v75->param1, v70, (_BYTE)v75);
                          }
                          v75->param1 = v74;
                          v77 = *(_DWORD *)(v4 + 64);
                          v78 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                          v79 = *(_BYTE *)(((unsigned __int64)(v78 + 48) >> 3) + 0x7FFF8000);
                          LOBYTE(v70) = v79 != 0;
                          v80 = v79 != 0 && v79 <= 3;
                          if ( v80 )
                            v78 = __asan_report_store4(v78 + 48, v70, v80);
                          *(_DWORD *)(v78 + 48) = v77;
                          v81 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 320));
                          MonsterType = Monster::getMonsterType(v81);
                          v83 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                          v84 = *(_BYTE *)(((unsigned __int64)(v83 + 56) >> 3) + 0x7FFF8000);
                          LOBYTE(v70) = v84 != 0;
                          v85 = v84 != 0 && v84 <= 3;
                          if ( v85 )
                            v83 = __asan_report_store4(v83 + 56, v70, v85);
                          *(_DWORD *)(v83 + 56) = MonsterType;
                          v86 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                          Group::handleEvent(v86, (EventPtr *)(v4 + 384));
                        }
                        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 384));
                      }
                      v87 = std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      proto_log::PlayerLogBodyCaptureAnimal::set_monster_id(v87, *(_DWORD *)(v4 + 64));
                      v88 = std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCaptureAnimal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      proto_log::PlayerLogBodyCaptureAnimal::set_capture_result(v88, 1u);
                      proto::WidgetCaptureAnimalRsp::set_entity_id(
                        *((proto::WidgetCaptureAnimalRsp *const *)&v111._anon_0._M_allocated_capacity + 1),
                        *(_DWORD *)(v4 + 48));
                      VisionContext::VisionContext((VisionContext *const)(v4 + 128), VISION_CAPTURE_DISAPPEAR);
                      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->baseclass_0[32]);
                      *(_DWORD *)(v4 + 132) = Player::getUid(*(const Player *const *)&this->baseclass_0[32]);
                      v89 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                      if ( *(_BYTE *)((v89 >> 3) + 0x7FFF8000) )
                        v89 = __asan_report_load8(v89);
                      v90 = *(_QWORD *)v89 + 128LL;
                      if ( *(_BYTE *)((v90 >> 3) + 0x7FFF8000) )
                        v89 = __asan_report_load8(*(_QWORD *)v89 + 128LL);
                      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v90)(v89, v4 + 128);
                      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 352)) )
                      {
                        EventUtil::createEvent((data::EventType)(v4 + 384));
                        v91 = 0LL;
                        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v4 + 384), 0LL) )
                        {
                          v92 = *(_DWORD *)(v4 + 48);
                          v93 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                          v94 = *(_BYTE *)(((unsigned __int64)&v93->source_entity_id >> 3) + 0x7FFF8000);
                          if ( v94 != 0 && (char)((((_BYTE)v93 + 4) & 7) + 3) >= v94 )
                          {
                            LOBYTE(v91) = v94 != 0;
                            __asan_report_store4(&v93->source_entity_id, v91, (_BYTE)v93);
                          }
                          v93->source_entity_id = v92;
                          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&this->baseclass_0[40]);
                          }
                          v95 = *(_DWORD *)&this->baseclass_0[40];
                          v96 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                          v97 = *(_BYTE *)(((unsigned __int64)&v96->param1 >> 3) + 0x7FFF8000);
                          if ( v97 != 0 && (char)((((_BYTE)v96 + 44) & 7) + 3) >= v97 )
                          {
                            LOBYTE(v91) = v97 != 0;
                            __asan_report_store4(&v96->param1, v91, (_BYTE)v96);
                          }
                          v96->param1 = v95;
                          v98 = *(_DWORD *)(v4 + 64);
                          v99 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                          v100 = *(_BYTE *)(((unsigned __int64)(v99 + 48) >> 3) + 0x7FFF8000);
                          LOBYTE(v91) = v100 != 0;
                          v101 = v100 != 0 && v100 <= 3;
                          if ( v101 )
                            v99 = __asan_report_store4(v99 + 48, v91, v101);
                          *(_DWORD *)(v99 + 48) = v98;
                          v102 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 320));
                          v103 = Monster::getMonsterType(v102);
                          v104 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                          v105 = *(_BYTE *)(((unsigned __int64)(v104 + 56) >> 3) + 0x7FFF8000);
                          LOBYTE(v91) = v105 != 0;
                          v106 = v105 != 0 && v105 <= 3;
                          if ( v106 )
                            v104 = __asan_report_store4(v104 + 56, v91, v106);
                          *(_DWORD *)(v104 + 56) = v103;
                          v107 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                          Group::handleEvent(v107, (EventPtr *)(v4 + 384));
                        }
                        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 384));
                      }
                      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 352));
                      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 608));
                      v47 = 1;
                    }
                  }
                  std::vector<std::pair<unsigned int,data::ItemLimitType>>::~vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v4 + 480));
                  std::vector<std::pair<unsigned int,data::ItemLimitType>>::~vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v4 + 416));
                  v37 = v47 == 1;
                }
              }
            }
            std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 320));
            if ( v37 )
              v23 = 2;
            else
              v23 = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v124,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/widget_capture_animal.cpp",
              "onDoCapture",
              277);
            v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v124,
                    (const char (*)[13])"avatar pos: ");
            v29 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
            v30 = Entity::getPosition((const Entity *const)v29);
            v31 = operator<<(v28, v30);
            v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" target: ");
            v33 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
            v34 = Entity::getPosition(v33);
            operator<<(v32, v34);
            common::milog::MiLogStream::~MiLogStream(&v124);
            v3 = 520;
            v23 = 0;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 288));
        if ( v23 )
        {
          if ( v23 == 2 )
            v21 = 2;
          else
            v21 = 0;
        }
        else
        {
          v21 = 1;
        }
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 256));
      if ( v21 && v21 != 2 )
        goto LABEL_139;
    }
    else
    {
      ret = 1590;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->baseclass_0[32]);
    v108 = *(Player **)&this->baseclass_0[32];
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)(v4 + 384),
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCaptureAnimal,void>(
      (std::shared_ptr<google::protobuf::Message> *const)(v4 + 352),
      (const std::shared_ptr<proto_log::PlayerLogBodyCaptureAnimal> *)(v4 + 224));
    Player::printStatLog(v108, (MessagePtr *)(v4 + 352), (MessagePtr *)(v4 + 384), 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 352));
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 384));
    v109 = *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000);
    if ( v109 )
      __asan_report_store4(&this->skill_flag_, (((_BYTE)this - 108) & 7u) + 3, v109);
    this->skill_flag_ = 0;
    v3 = ret;
LABEL_139:
    std::shared_ptr<proto_log::PlayerLogBodyCaptureAnimal>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCaptureAnimal> *const)(v4 + 224));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
    goto LABEL_140;
  }
  common::milog::MiLogStream::create(
    &v124,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_capture_animal.cpp",
    "onDoCapture",
    228);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v124, (const char (*)[24])"scene_ptr is null, uid:");
  common::milog::MiLogStream::~MiLogStream(&v124);
  v3 = 103;
LABEL_140:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 192));
LABEL_141:
  std::shared_ptr<data::ConfigWidgetCaptureAnimal>::~shared_ptr((std::shared_ptr<data::ConfigWidgetCaptureAnimal> *const)(v4 + 160));
  if ( v111._M_string_length == v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v3;
};

// Line 402: range 0000000016205140-000000001620519B
void __cdecl WidgetCaptureAnimal::setSkillFlag(WidgetCaptureAnimal *const this, uint32_t skill_flag)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_flag_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->skill_flag_, (((_BYTE)this - 108) & 7u) + 3, v2);
  this->skill_flag_ = skill_flag;
};
