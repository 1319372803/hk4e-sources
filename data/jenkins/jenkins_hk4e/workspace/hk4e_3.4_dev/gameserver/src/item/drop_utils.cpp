// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/item/drop_utils.cpp

// Line 23: range 00000000165E56EE-00000000165E5E11
std::pair<unsigned int const,unsigned int> __fastcall DropUtils::dropItems(
        Player *player,
        uint32_t drop_id,
        uint32_t drop_count,
        const ActionReason *reason,
        std::vector<ItemParam> *drop_result_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isDropIdNeedBeReplaced; // r14
  std::pair<unsigned int const,unsigned int> v10; // r14
  std::map<unsigned int,unsigned int>::size_type v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v12; // rax
  std::pair<unsigned int const,unsigned int> *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerItemComp *ItemComp; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  PlayerItemComp *v28; // rax
  int32_t ret; // [rsp+24h] [rbp-17Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+38h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+40h] [rbp-160h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-158h] BYREF
  std::vector<ItemParam> __x; // [rsp+50h] [rbp-150h] BYREF
  common::milog::MiLogStream v39; // [rsp+70h] [rbp-130h] BYREF
  char v40[272]; // [rsp+90h] [rbp-110h] BYREF
  std::pair<unsigned int const,unsigned int> result; // 0:rax.6

  v5 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 18 replace_drop_id:25 48 4 10 drop_id:22 64 4 13 drop_count:22 80 8 16 output_result:54 1"
                        "12 16 13 item_param:43 144 48 18 drop_result_map:31";
  *(_QWORD *)(v5 + 16) = DropUtils::dropItems;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 48) = drop_id;
  *(_DWORD *)(v5 + 64) = drop_count;
  *(_DWORD *)(v5 + 32) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 112));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
  isDropIdNeedBeReplaced = FeatureSwitchMgr::isDropIdNeedBeReplaced(
                             &v8->feature_switch_mgr,
                             *(_DWORD *)(v5 + 48),
                             (uint32_t *)(v5 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 112));
  if ( isDropIdNeedBeReplaced )
    *(_DWORD *)(v5 + 48) = *(_DWORD *)(v5 + 32);
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 144));
  ret = DropUtils::processDropNode(
          player,
          *(_DWORD *)(v5 + 48),
          *(_DWORD *)(v5 + 64),
          (std::map<unsigned int,unsigned int> *)(v5 + 144));
  if ( ret )
  {
    OutputResult::OutputResult((OutputResult *const)&__in, ret);
    v10 = __in;
  }
  else
  {
    std::vector<ItemParam>::clear(drop_result_vec);
    v11 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v5 + 144));
    std::vector<ItemParam>::reserve(drop_result_vec, v11);
    __for_range = (std::map<unsigned int,unsigned int> *)(v5 + 144);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v5 + 144))._M_node;
    *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 80) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v5 + 144));
    while ( std::operator!=(
              &__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 80)) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v13 = v12;
      if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v12, 8LL);
      }
      __in = *v13;
      item_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      count = std::get<1ul,unsigned int const,unsigned int>(&__in);
      *(_DWORD *)(v5 + 112) = 0;
      *(_DWORD *)(v5 + 116) = 0;
      *(_DWORD *)(v5 + 120) = 0;
      *(_DWORD *)(v5 + 124) = 0;
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 112) = *item_id;
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 116) = *count;
      std::vector<ItemParam>::push_back(drop_result_vec, (const std::vector<ItemParam>::value_type *)(v5 + 112));
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/item/drop_utils.cpp",
      "dropItems",
      50);
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v39, (const char (*)[9])"drop_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])" drop_result_map:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v16,
            (const std::map<unsigned int,unsigned int> *)(v5 + 144));
    v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v17, (const char (*)[18])" drop_result_vec:");
    common::milog::MiLogStream::operator<<<ItemParam>(v18, drop_result_vec);
    common::milog::MiLogStream::~MiLogStream(&v39);
    ItemComp = Player::getItemComp(player);
    *(OutputResult *)(v5 + 80) = PlayerItemComp::checkAndRecordBeforeDrop(
                                   ItemComp,
                                   *(_DWORD *)(v5 + 48),
                                   *(_DWORD *)(v5 + 64),
                                   reason);
    if ( *(_DWORD *)(v5 + 80) )
    {
      LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v5 + 80));
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        LogLevel,
        "./src/item/drop_utils.cpp",
        "dropItems",
        57);
      v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v39,
              (const char (*)[40])"checkAndRecordBeforeDrop fail, drop_id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v5 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" drop_count:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v5 + 64));
      v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" reason:");
      v26 = operator<<(v25, reason);
      v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
      operator<<(v27, player);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v10 = *(std::pair<unsigned int const,unsigned int> *)(v5 + 80);
    }
    else
    {
      v28 = Player::getItemComp(player);
      PlayerItemComp::checkOutputLimitAndModifyItemParamsOnDrop(&__x, v28, drop_result_vec, reason);
      std::vector<ItemParam>::operator=(drop_result_vec, &__x);
      std::vector<ItemParam>::~vector(&__x);
      OutputResult::OutputResult((OutputResult *const)&__in);
      v10 = __in;
    }
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 144));
  result = v10;
  if ( v40 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 67: range 00000000165E5E12-00000000165E6510
ItemParam *__fastcall DropUtils::dropAndSplitItems(
        Player *player,
        uint32_t drop_id,
        uint32_t drop_count,
        const ActionReason *reason,
        std::vector<ItemParam> *drop_result_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  ItemParam *M_current; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t idx; // [rsp+20h] [rbp-180h]
  uint32_t split_drop_count; // [rsp+24h] [rbp-17Ch]
  std::vector<ItemParam>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::vector<ItemParam> *__for_range; // [rsp+30h] [rbp-170h]
  const ItemParam *drop_item; // [rsp+38h] [rbp-168h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+40h] [rbp-160h]
  std::vector<ItemParam>::iterator __for_end; // [rsp+48h] [rbp-158h] BYREF
  std::shared_ptr<Config> v32; // [rsp+50h] [rbp-150h] BYREF
  ItemParam __args_0; // [rsp+60h] [rbp-140h] BYREF
  ItemParam v34; // [rsp+70h] [rbp-130h] BYREF
  ItemParam v35; // [rsp+80h] [rbp-120h] BYREF
  common::milog::MiLogStream v36; // [rsp+90h] [rbp-110h] BYREF
  char v37[240]; // [rsp+B0h] [rbp-F0h] BYREF
  ItemParam *result; // 0:rax.6

  v5 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 10 item_id:86 48 4 13 item_count:87 64 4 10 drop_id:66 80 4 13 drop_count:66 96 8 16 outp"
                        "ut_result:72 128 24 16 drop_item_vec:71";
  *(_QWORD *)(v5 + 16) = DropUtils::dropAndSplitItems;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 64) = drop_id;
  *(_DWORD *)(v5 + 80) = drop_count;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v5 + 128));
  *(std::pair<unsigned int const,unsigned int> *)(v5 + 96) = DropUtils::dropItems(
                                                               player,
                                                               *(_DWORD *)(v5 + 64),
                                                               *(_DWORD *)(v5 + 80),
                                                               reason,
                                                               (std::vector<ItemParam> *)(v5 + 128));
  if ( *(_DWORD *)(v5 + 96) )
  {
    LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v5 + 96));
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      LogLevel,
      "./src/item/drop_utils.cpp",
      "dropAndSplitItems",
      75);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v36,
           (const char (*)[27])"dropItems failed, drop_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" drop_count:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 80));
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    operator<<(v13, player);
    common::milog::MiLogStream::~MiLogStream(&v36);
    M_current = *(ItemParam **)(v5 + 96);
  }
  else if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v5 + 128)) )
  {
    OutputResult::OutputResult((OutputResult *const)&__for_end);
    M_current = __for_end._M_current;
  }
  else
  {
    __for_range = (std::vector<ItemParam> *)(v5 + 128);
    __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v5 + 128))._M_current;
    __for_end._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v5 + 128))._M_current;
    while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
    {
      drop_item = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)drop_item >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)drop_item & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_item >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 32) = drop_item->item_id;
      if ( *(_BYTE *)(((unsigned __int64)&drop_item->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)drop_item + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_item->count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 48) = drop_item->count;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v32);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
      material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                              &v15->design_config.txt_config_mgr.material_config_mgr,
                              *(_DWORD *)(v5 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v32);
      if ( !material_config_ptr )
        goto LABEL_25;
      if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->is_split_drop >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)material_config_ptr - 123) & 7) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->is_split_drop >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&material_config_ptr->is_split_drop);
      }
      if ( material_config_ptr->is_split_drop )
      {
        v16 = (uint32_t *)std::min<unsigned int>(
                            DropUtils::dropAndSplitItems(Player &,unsigned int,unsigned int,ActionReason const&,std::vector<ItemParam> &)::MAX_SPLIT_COUNT,
                            (const unsigned int *)(v5 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        split_drop_count = *v16;
        for ( idx = 0; idx < split_drop_count; ++idx )
        {
          __args_0.item_id = *(_DWORD *)(v5 + 32);
          __args_0.count = 1;
          __args_0.level = 0;
          __args_0.promote_level = 0;
          std::vector<ItemParam>::emplace_back<ItemParam>(drop_result_vec, &__args_0, &__args_0);
        }
        if ( split_drop_count < *(_DWORD *)(v5 + 48) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/drop_utils.cpp",
            "dropAndSplitItems",
            100);
          v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v36, (const char (*)[9])"drop_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v5 + 64));
          v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" item_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v5 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" item_count:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v36);
          v34.item_id = *(_DWORD *)(v5 + 32);
          v34.count = *(_DWORD *)(v5 + 48) - split_drop_count;
          v34.level = 0;
          v34.promote_level = 0;
          std::vector<ItemParam>::emplace_back<ItemParam>(drop_result_vec, &v34, &v34);
        }
      }
      else
      {
LABEL_25:
        v35.item_id = *(_DWORD *)(v5 + 32);
        v35.count = *(_DWORD *)(v5 + 48);
        v35.level = 0;
        v35.promote_level = 0;
        std::vector<ItemParam>::emplace_back<ItemParam>(drop_result_vec, &v35, &v35);
      }
      __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
    }
    OutputResult::OutputResult((OutputResult *const)&__for_end);
    M_current = __for_end._M_current;
  }
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v5 + 128));
  result = M_current;
  if ( v37 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 114: range 00000000165E6512-00000000165E686C
_BOOL8 __fastcall DropUtils::checkChildDropNode(uint32_t drop_id, uint32_t player_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  _BOOL8 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t min_level; // [rsp+10h] [rbp-B0h]
  uint32_t max_level; // [rsp+14h] [rbp-ACh]
  const data::DropExcelConfig *drop_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 drop_id:113";
  *(_QWORD *)(v2 + 16) = DropUtils::checkChildDropNode;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = drop_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v6 = ItemExcelConfigMgr::findItemConfig(&v5->design_config.txt_config_mgr.item_config_mgr, *(_DWORD *)(v2 + 32)) != 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( v6 )
  {
    result = 1LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(
                        &v8->design_config.txt_config_mgr.drop_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( drop_config_ptr )
    {
      if ( std::vector<data::DropNode>::empty(&drop_config_ptr->nodes) )
      {
        result = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->min_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)drop_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_config_ptr->min_level >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        min_level = drop_config_ptr->min_level;
        if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&drop_config_ptr->max_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        max_level = drop_config_ptr->max_level;
        result = (!min_level || player_level >= min_level) && (!max_level || player_level <= max_level);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/drop_utils.cpp",
        "checkChildDropNode",
        123);
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"drop config not found, drop_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0LL;
    }
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
  return result;
};

// Line 139: range 00000000165E686E-00000000165E6B73
int32_t __cdecl DropUtils::processRandomByWeight(
        uint32_t player_level,
        const std::vector<data::DropNode> *child_node_vec,
        uint32_t *select_index)
{
  unsigned int total_weight; // [rsp+2Ch] [rbp-64h]
  unsigned int rand_weight; // [rsp+30h] [rbp-60h]
  uint32_t index; // [rsp+34h] [rbp-5Ch]
  std::vector<data::DropNode>::const_iterator __for_begin; // [rsp+38h] [rbp-58h] BYREF
  std::vector<data::DropNode>::const_iterator __for_end; // [rsp+40h] [rbp-50h] BYREF
  const std::vector<data::DropNode> *__for_range; // [rsp+48h] [rbp-48h]
  const data::DropNode *child_node_0; // [rsp+50h] [rbp-40h]
  const data::DropNode *child_node; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  total_weight = 0;
  __for_range = child_node_vec;
  __for_begin._M_current = std::vector<data::DropNode>::begin(child_node_vec)._M_current;
  __for_end._M_current = std::vector<data::DropNode>::end(child_node_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(&__for_begin, &__for_end) )
  {
    child_node = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( DropUtils::checkChildDropNode(child_node->id, player_level) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      total_weight += child_node->weight;
    }
    __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++(&__for_begin);
  }
  if ( !total_weight )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/item/drop_utils.cpp",
      "processRandomByWeight",
      151);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"total_weight is 0");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0;
  }
  rand_weight = common::tools::RandomUtils::rand<unsigned int>(1u, total_weight);
  for ( index = 0; ; ++index )
  {
    if ( index >= std::vector<data::DropNode>::size(child_node_vec) )
      return -1;
    child_node_0 = std::vector<data::DropNode>::operator[](child_node_vec, index);
    if ( *(_BYTE *)(((unsigned __int64)&child_node_0->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&child_node_0->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( DropUtils::checkChildDropNode(child_node_0->id, player_level) )
      break;
LABEL_26:
    ;
  }
  if ( *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( rand_weight > child_node_0->weight )
  {
    if ( *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    rand_weight -= child_node_0->weight;
    goto LABEL_26;
  }
  if ( *(_BYTE *)(((unsigned __int64)select_index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)select_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)select_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(select_index);
  }
  *select_index = index;
  return 0;
};

// Line 178: range 00000000165E6B74-00000000165E701D
uint32_t __fastcall DropUtils::randChildNodeDropCount(uint32_t drop_id, const data::DropNode *child_node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t weight_min; // ecx
  uint32_t result; // eax
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int max_count; // ecx
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 rand_weight:181 64 4 11 drop_id:177";
  *(_QWORD *)(v2 + 16) = DropUtils::randChildNodeDropCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&child_node->is_floating_number >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)child_node + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&child_node->is_floating_number >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load1(&child_node->is_floating_number);
  }
  if ( child_node->is_floating_number )
  {
    if ( *(_BYTE *)(((unsigned __int64)&child_node->weight_min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&child_node->weight_min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    weight_min = child_node->weight_min;
    if ( *(_BYTE *)(((unsigned __int64)&child_node->weight_max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)child_node + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_node->weight_max >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = common::tools::RandomUtils::rand<unsigned int>(1u, weight_min + child_node->weight_max);
    if ( *(_BYTE *)(((unsigned __int64)&child_node->weight_min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&child_node->weight_min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( child_node->weight_min >= *(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&child_node->min_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)child_node + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_node->min_count >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      result = child_node->min_count;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(((unsigned __int64)&child_node->weight_min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&child_node->weight_min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v7 = child_node->weight_min;
    if ( *(_BYTE *)(((unsigned __int64)&child_node->weight_max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)child_node + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_node->weight_max >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v7 + child_node->weight_max >= *(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      result = child_node->max_count;
      goto LABEL_31;
    }
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/item/drop_utils.cpp",
      "randChildNodeDropCount",
      190);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v14, (const char (*)[9])"drop_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" child_drop_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &child_node->id);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" rand_weight:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  if ( *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  max_count = child_node->max_count;
  if ( *(_BYTE *)(((unsigned __int64)&child_node->min_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)child_node + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_node->min_count >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  result = common::tools::RandomUtils::rand<unsigned int>(child_node->min_count, max_count);
LABEL_31:
  if ( v15 == (char *)v2 )
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

// Line 197: range 00000000165E701E-00000000165E825D
__int64 __fastcall DropUtils::processDropNode(
        Player *player,
        uint32_t root_drop_id,
        uint32_t root_drop_count,
        std::map<unsigned int,unsigned int> *drop_result_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int v12; // r14d
  unsigned int *v13; // r8
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::queue<std::pair<unsigned int,unsigned int>>::reference v22; // rax
  std::pair<unsigned int,unsigned int> *v23; // rdx
  char v24; // r14
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  char v26; // r15
  unsigned int v27; // r14d
  unsigned int *v28; // rdx
  SelectType v29; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v30; // rax
  SelectType *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  DropExcelConfigMgr *p_drop_config_mgr; // rcx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  PlayerBasicComp *BasicComp; // rax
  unsigned int *v44; // r8
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  data::DropRandomType random_type; // eax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  std::vector<data::DropNode>::size_type v55; // r14
  unsigned int *v56; // r8
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  unsigned int *v64; // r8
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  __int64 result; // rax
  uint32_t min_level; // [rsp+24h] [rbp-1BCh]
  uint32_t max_level; // [rsp+28h] [rbp-1B8h]
  unsigned int rand_weight; // [rsp+2Ch] [rbp-1B4h]
  std::vector<data::DropNode>::const_iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  std::vector<data::DropNode>::const_iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *drop_id; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *drop_count; // [rsp+48h] [rbp-198h]
  const data::DropExcelConfig *drop_config_ptr; // [rsp+50h] [rbp-190h]
  const std::vector<data::DropNode> *child_node_vec; // [rsp+58h] [rbp-188h]
  const std::vector<data::DropNode> *__for_range; // [rsp+60h] [rbp-180h]
  const data::DropNode *child_node_0; // [rsp+68h] [rbp-178h]
  const data::DropNode *child_node; // [rsp+70h] [rbp-170h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+78h] [rbp-168h] BYREF
  std::shared_ptr<Config> v91; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v92; // [rsp+90h] [rbp-150h] BYREF
  char v93[304]; // [rsp+B0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v93;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 12 node_num:208 64 4 16 player_level:245 80 4 16 select_index:266 96 4 9 count:298 112 4 "
                        "16 root_drop_id:196 128 4 19 root_drop_count:196 144 80 14 drop_queue:205";
  *(_QWORD *)(v4 + 16) = DropUtils::processDropNode;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = 61956;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 112) = root_drop_id;
  *(_DWORD *)(v4 + 128) = root_drop_count;
  if ( *(_DWORD *)(v4 + 128) && *(_DWORD *)(v4 + 128) <= 0x64u )
  {
    std::queue<std::pair<unsigned int,unsigned int>>::queue<std::deque<std::pair<unsigned int,unsigned int>>,void>((std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144));
    std::queue<std::pair<unsigned int,unsigned int>>::emplace<unsigned int &,unsigned int &>(
      (std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144),
      (unsigned int *)(v4 + 112),
      (unsigned int *)(v4 + 128),
      (unsigned int *)(v4 + 112),
      v13);
    *(_DWORD *)(v4 + 48) = 0;
    while ( !std::queue<std::pair<unsigned int,unsigned int>>::empty((const std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144)) )
    {
      if ( ++*(_DWORD *)(v4 + 48) > 0x3E7u
        || std::queue<std::pair<unsigned int,unsigned int>>::size((const std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144)) > 0x3E7 )
      {
        common::milog::MiLogStream::create(
          &v92,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/item/drop_utils.cpp",
          "processDropNode",
          214);
        v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v92, (const char (*)[29])off_25D2C6C0);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v4 + 112));
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" drop_count:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 128));
        v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" node_num:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" queue size:");
        __in = (std::pair<unsigned int,unsigned int>)std::queue<std::pair<unsigned int,unsigned int>>::size((const std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v21, (const unsigned __int64 *)&__in);
        common::milog::MiLogStream::~MiLogStream(&v92);
        break;
      }
      v22 = std::queue<std::pair<unsigned int,unsigned int>>::front((std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144));
      v23 = v22;
      if ( ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v22->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v22 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v22->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v22, 8LL);
      }
      __in = *v23;
      drop_id = std::get<0ul,unsigned int,unsigned int>(&__in);
      drop_count = std::get<1ul,unsigned int,unsigned int>(&__in);
      std::queue<std::pair<unsigned int,unsigned int>>::pop((std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144));
      v24 = 0;
      if ( *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)drop_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !*drop_count )
        goto LABEL_24;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v91);
      v24 = 1;
      p_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->design_config.txt_config_mgr.item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *drop_id) )
        v26 = 1;
      else
LABEL_24:
        v26 = 0;
      if ( v24 )
        std::shared_ptr<Config>::~shared_ptr(&v91);
      if ( v26 )
      {
        if ( *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v27 = *drop_count;
        v28 = std::map<unsigned int,unsigned int>::operator[](drop_result_map, drop_id);
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v29 = SAFE_ADD<unsigned int,unsigned int>(*v28, v27);
        v30 = std::map<unsigned int,unsigned int>::operator[](drop_result_map, drop_id);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v30);
        }
        *v31 = v29;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !*drop_count || *drop_count > 0x63 )
        {
          common::milog::MiLogStream::create(
            &v92,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/drop_utils.cpp",
            "processDropNode",
            232);
          v32 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v92,
                  (const char (*)[29])"drop count invalid, drop_id:");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, drop_id);
          v34 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v33, (const char (*)[13])" drop_count:");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, drop_count);
          v36 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v35, (const char (*)[9])" player:");
          operator<<(v36, player);
          common::milog::MiLogStream::~MiLogStream(&v92);
          v12 = -1;
          goto LABEL_82;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v91);
        p_drop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->design_config.txt_config_mgr.drop_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(p_drop_config_mgr, *drop_id);
        std::shared_ptr<Config>::~shared_ptr(&v91);
        if ( !drop_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v92,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/drop_utils.cpp",
            "processDropNode",
            240);
          v38 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v92,
                  (const char (*)[32])"drop config not found, drop_id:");
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, drop_id);
          v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v39, (const char (*)[13])" drop_count:");
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, drop_count);
          v42 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v41, (const char (*)[9])" player:");
          operator<<(v42, player);
          common::milog::MiLogStream::~MiLogStream(&v92);
          v12 = -1;
          goto LABEL_82;
        }
        BasicComp = Player::getBasicComp(player);
        *(_DWORD *)(v4 + 64) = PlayerBasicComp::getLevel(BasicComp);
        if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->min_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)drop_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_config_ptr->min_level >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        min_level = drop_config_ptr->min_level;
        if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&drop_config_ptr->max_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        max_level = drop_config_ptr->max_level;
        if ( min_level && min_level > *(_DWORD *)(v4 + 64) || max_level && max_level < *(_DWORD *)(v4 + 64) )
        {
          common::milog::MiLogStream::create(
            &v92,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/drop_utils.cpp",
            "processDropNode",
            250);
          v45 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v92,
                  (const char (*)[34])"player level check fail, drop_id:");
          v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, drop_id);
          v47 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v46, (const char (*)[13])" drop_count:");
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, drop_count);
          v49 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v48,
                  (const char (*)[15])" player_level:");
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  (const unsigned int *)(v4 + 64));
          v51 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v50, (const char (*)[9])" player:");
          operator<<(v51, player);
          common::milog::MiLogStream::~MiLogStream(&v92);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)drop_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_count >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *drop_count > 1 )
          {
            *(_DWORD *)(v4 + 96) = *drop_count - 1;
            std::queue<std::pair<unsigned int,unsigned int>>::emplace<unsigned int &,unsigned int>(
              (std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144),
              drop_id,
              (unsigned int *)(v4 + 96),
              drop_id,
              v44);
          }
          child_node_vec = &drop_config_ptr->nodes;
          if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->random_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)drop_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_config_ptr->random_type >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          random_type = drop_config_ptr->random_type;
          if ( random_type )
          {
            if ( random_type != DROP_RANDOM_INDEPENDENT )
            {
              common::milog::MiLogStream::create(
                &v92,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/item/drop_utils.cpp",
                "processDropNode",
                313);
              v72 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v92,
                      (const char (*)[21])"invalid random_type:");
              v73 = common::milog::MiLogStream::operator<<<data::DropRandomType,(data::DropRandomType*)0>(
                      v72,
                      &drop_config_ptr->random_type);
              v74 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v73, (const char (*)[9])" player:");
              operator<<(v74, player);
              common::milog::MiLogStream::~MiLogStream(&v92);
              v12 = -1;
              goto LABEL_82;
            }
            __for_range = child_node_vec;
            __for_begin._M_current = std::vector<data::DropNode>::begin(child_node_vec)._M_current;
            __for_end._M_current = std::vector<data::DropNode>::end(__for_range)._M_current;
            while ( __gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(&__for_begin, &__for_end) )
            {
              child_node_0 = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*(&__for_begin);
              rand_weight = common::tools::RandomUtils::rand<unsigned int>(1u, 0x2710u);
              if ( *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( rand_weight <= child_node_0->weight )
              {
                if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3)
                                                                            + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v4 + 96) = DropUtils::randChildNodeDropCount(*drop_id, child_node_0);
                if ( *(_DWORD *)(v4 + 96) )
                {
                  std::queue<std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,unsigned int &>(
                    (std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144),
                    &child_node_0->id,
                    (unsigned int *)(v4 + 96),
                    &child_node_0->id,
                    v64);
                  common::milog::MiLogStream::create(
                    &v92,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/item/drop_utils.cpp",
                    "processDropNode",
                    303);
                  v65 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          &v92,
                          (const char (*)[34])"drop_utils independent, drop_id: ");
                  v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, drop_id);
                  v67 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v66,
                          (const char (*)[14])" drop_count:#");
                  v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, drop_count);
                  v69 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                          v68,
                          (const char (*)[8])off_25D2C940);
                  v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, &child_node_0->id);
                  v71 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v70, (const char (*)[8])" count:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v71,
                    (const unsigned int *)(v4 + 96));
                  common::milog::MiLogStream::~MiLogStream(&v92);
                }
              }
              __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++(&__for_begin);
            }
          }
          else
          {
            *(_DWORD *)(v4 + 80) = std::vector<data::DropNode>::size(child_node_vec);
            if ( DropUtils::processRandomByWeight(*(_DWORD *)(v4 + 64), child_node_vec, (uint32_t *)(v4 + 80)) )
            {
              common::milog::MiLogStream::create(
                &v92,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/item/drop_utils.cpp",
                "processDropNode",
                269);
              v53 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v92,
                      (const char (*)[37])"processRandomByWeight fail, drop_id:");
              v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, drop_id);
              operator<<(v54, player);
              common::milog::MiLogStream::~MiLogStream(&v92);
              v12 = -1;
              goto LABEL_82;
            }
            v55 = *(unsigned int *)(v4 + 80);
            if ( v55 < std::vector<data::DropNode>::size(child_node_vec) )
            {
              child_node = std::vector<data::DropNode>::operator[](child_node_vec, *(unsigned int *)(v4 + 80));
              if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v4 + 96) = DropUtils::randChildNodeDropCount(*drop_id, child_node);
              if ( *(_DWORD *)(v4 + 96) )
              {
                std::queue<std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,unsigned int &>(
                  (std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144),
                  &child_node->id,
                  (unsigned int *)(v4 + 96),
                  &child_node->id,
                  v56);
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/item/drop_utils.cpp",
                  "processDropNode",
                  280);
                v57 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        &v92,
                        (const char (*)[32])"drop_utils by weight, drop_id: ");
                v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, drop_id);
                v59 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v58,
                        (const char (*)[14])" drop_count:#");
                v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, drop_count);
                v61 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                        v60,
                        (const char (*)[8])off_25D2C940);
                v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &child_node->id);
                v63 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v62, (const char (*)[8])" count:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v63,
                  (const unsigned int *)(v4 + 96));
                common::milog::MiLogStream::~MiLogStream(&v92);
              }
            }
          }
        }
      }
    }
    v12 = 0;
LABEL_82:
    std::queue<std::pair<unsigned int,unsigned int>>::~queue((std::queue<std::pair<unsigned int,unsigned int>> *const)(v4 + 144));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v92,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/drop_utils.cpp",
      "processDropNode",
      201);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v92,
           (const char (*)[34])"drop count invalid, root_drop_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 112));
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" root_drop_count:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 128));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    operator<<(v11, player);
    common::milog::MiLogStream::~MiLogStream(&v92);
    v12 = -1;
  }
  result = v12;
  if ( v93 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 325: range 00000000165E825E-00000000165E92C6
__int64 __fastcall DropUtils::randomExtraItemsForLifeEffectTalent(
        Player *player,
        const std::map<unsigned int,unsigned int> *cost_item_map,
        uint32_t batch_count,
        float return_ratio,
        std::vector<ItemParam> *return_item_vec,
        bool is_rand_frac)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int v12; // r14d
  common::milog::MiLogStream *v13; // rax
  std::tuple<unsigned int,unsigned int,unsigned int> **v14; // rax
  std::tuple<unsigned int,unsigned int,unsigned int> **v15; // rdx
  common::milog::MiLogStream *v16; // rax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::tuple<unsigned int,unsigned int,unsigned int> **v32; // rax
  std::tuple<unsigned int,unsigned int,unsigned int> **v33; // rdx
  const unsigned int *v34; // r8
  unsigned int *v35; // r9
  std::tuple<unsigned int,unsigned int,unsigned int> *v36; // rax
  unsigned int *v37; // rdx
  std::tuple<unsigned int,unsigned int,unsigned int> *v38; // rax
  unsigned int *v39; // rdx
  unsigned int v40; // eax
  std::tuple<unsigned int,unsigned int,unsigned int> *n; // rax
  __int64 result; // rax
  unsigned int *v43; // [rsp+0h] [rbp-300h]
  unsigned int total_item_count; // [rsp+38h] [rbp-2C8h]
  unsigned int total_return_count; // [rsp+3Ch] [rbp-2C4h]
  unsigned int total_weight; // [rsp+40h] [rbp-2C0h]
  unsigned int total_return; // [rsp+44h] [rbp-2BCh]
  uint32_t idx; // [rsp+48h] [rbp-2B8h]
  uint32_t cur_weight; // [rsp+4Ch] [rbp-2B4h]
  float original_return_count; // [rsp+50h] [rbp-2B0h]
  uint32_t rand_weight; // [rsp+58h] [rbp-2A8h]
  uint32_t multiplied_count; // [rsp+5Ch] [rbp-2A4h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+60h] [rbp-2A0h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_begin_0; // [rsp+68h] [rbp-298h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+70h] [rbp-290h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+78h] [rbp-288h]
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range_1; // [rsp+80h] [rbp-280h]
  std::tuple<unsigned int,unsigned int,unsigned int> *__t; // [rsp+88h] [rbp-278h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *__0; // [rsp+90h] [rbp-270h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *weight; // [rsp+98h] [rbp-268h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *returned; // [rsp+A0h] [rbp-260h]
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range_2; // [rsp+A8h] [rbp-258h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *item_id_0; // [rsp+B0h] [rbp-250h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *__1; // [rsp+B8h] [rbp-248h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *returned_0; // [rsp+C0h] [rbp-240h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+C8h] [rbp-238h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_0; // [rsp+D0h] [rbp-230h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+D8h] [rbp-228h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+E0h] [rbp-220h]
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_end; // [rsp+E8h] [rbp-218h] BYREF
  std::tuple<unsigned int,unsigned int,unsigned int> v74; // [rsp+F4h] [rbp-20Ch] BYREF
  ItemParam __args_0; // [rsp+100h] [rbp-200h] BYREF
  common::milog::MiLogStream v76; // [rsp+110h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v77; // [rsp+130h] [rbp-1D0h] BYREF
  char v78[432]; // [rsp+150h] [rbp-1B0h] BYREF

  v6 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(384LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 48 4 20 single_frac_part:362 64 4 19 total_frac_part:366 80 4 15 batch_count:324 96 4 16 retur"
                        "n_ratio:324 112 24 17 candidate_vec:382 176 144 16 distribution:365";
  *(_QWORD *)(v6 + 16) = DropUtils::randomExtraItemsForLifeEffectTalent;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = 61956;
  v8[536862724] = -218959360;
  v8[536862725] = 62194;
  v8[536862730] = -202116109;
  v8[536862731] = -202116109;
  *(_DWORD *)(v6 + 80) = batch_count;
  *(float *)(v6 + 96) = return_ratio;
  if ( *(float *)(v6 + 96) >= 0.0 && *(float *)(v6 + 96) <= 1.0 )
  {
    if ( *(_DWORD *)(v6 + 80) )
    {
      total_item_count = 0;
      __for_range = cost_item_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(cost_item_map)._M_node;
      __for_begin_0._M_current = (std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::end(cost_item_map)._M_node;
      while ( std::operator!=(
                &__for_begin,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
      {
        v14 = (std::tuple<unsigned int,unsigned int,unsigned int> **)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        v15 = v14;
        if ( ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)v14 + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v14 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v14 + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v14, 8LL);
        }
        __for_end._M_current = *v15;
        _ = std::get<0ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)&__for_end);
        item_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)&__for_end);
        if ( *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        total_item_count = SAFE_ADD<unsigned int,unsigned int>(total_item_count, *item_count);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      if ( total_item_count )
      {
        original_return_count = (float)(*(float *)(v6 + 96) * (float)(int)total_item_count) + 0.00000011920929;
        if ( original_return_count >= 1.0 )
        {
          total_return_count = SAFE_MULTIPLY<unsigned int,unsigned int>(
                                 (int)original_return_count,
                                 *(_DWORD *)(v6 + 80));
          if ( is_rand_frac )
          {
            *(float *)(v6 + 48) = original_return_count - (float)(int)original_return_count;
            if ( *(float *)(v6 + 48) > 0.000099999997 && *(float *)(v6 + 48) < 1.0 )
            {
              std::binomial_distribution<unsigned int>::binomial_distribution(
                (std::binomial_distribution<unsigned int> *const)(v6 + 176),
                *(_DWORD *)(v6 + 80),
                *(float *)(v6 + 48));
              RandGenerator = common::tools::RandomUtils::getRandGenerator();
              *(_DWORD *)(v6 + 64) = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
                                       (std::binomial_distribution<unsigned int> *const)(v6 + 176),
                                       RandGenerator);
              if ( *(_DWORD *)(v6 + 64) > *(_DWORD *)(v6 + 80) )
              {
                common::milog::MiLogStream::create(
                  &v76,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/item/drop_utils.cpp",
                  "randomExtraItemsForLifeEffectTalent",
                  369);
                v18 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v76,
                        (const char (*)[44])"more output than random count! batch_count:");
                v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v18,
                        (const unsigned int *)(v6 + 80));
                v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v19,
                        (const char (*)[19])" single_frac_part:");
                v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v6 + 48));
                v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v21,
                        (const char (*)[18])" total_frac_part:");
                v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v22,
                        (const unsigned int *)(v6 + 64));
                v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
                operator<<(v24, player);
                common::milog::MiLogStream::~MiLogStream(&v76);
                *(_DWORD *)(v6 + 64) = 0;
              }
              if ( *(_DWORD *)(v6 + 64) )
              {
                common::milog::MiLogStream::create(
                  &v77,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/item/drop_utils.cpp",
                  "randomExtraItemsForLifeEffectTalent",
                  374);
                v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        &v77,
                        (const char (*)[13])"batch_count:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v6 + 80));
                v27 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v26,
                        (const char (*)[19])" single_frac_part:");
                v28 = common::milog::MiLogStream::operator<<<float,(float *)0>(v27, (const float *)(v6 + 48));
                v29 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v28,
                        (const char (*)[18])" total_frac_part:");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v6 + 64));
                v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
                operator<<(v31, player);
                common::milog::MiLogStream::~MiLogStream(&v77);
                total_return_count = SAFE_ADD<unsigned int,unsigned int>(total_return_count, *(_DWORD *)(v6 + 64));
              }
            }
          }
        }
        else
        {
          total_return_count = *(_DWORD *)(v6 + 80);
        }
        std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::vector((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 112));
        total_weight = 0;
        total_return = 0;
        __for_range_0 = cost_item_map;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(cost_item_map)._M_node;
        __for_begin_0._M_current = (std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(
                  &__for_begin,
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
        {
          v32 = (std::tuple<unsigned int,unsigned int,unsigned int> **)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          v33 = v32;
          if ( ((unsigned __int8)v32 & 7) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)v32 + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v32 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v32 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v32, 8LL);
          }
          __for_end._M_current = *v33;
          item_id = std::get<0ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)&__for_end);
          item_count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)&__for_end);
          if ( *(_BYTE *)(((unsigned __int64)item_count_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count_0 >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          multiplied_count = SAFE_MULTIPLY<unsigned int,unsigned int>(total_return_count, *item_count_0);
          *(_DWORD *)(v6 + 64) = multiplied_count / total_item_count;
          *(_DWORD *)(v6 + 48) = multiplied_count % total_item_count;
          std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::emplace_back<unsigned int const&,unsigned int,unsigned int>(
            (std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 112),
            item_id,
            (unsigned int *)(v6 + 48),
            (unsigned int *)(v6 + 64),
            v34,
            v35,
            v43);
          v36 = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::back((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 112));
          v37 = std::get<1ul,unsigned int,unsigned int,unsigned int>(v36);
          if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          total_weight = SAFE_ADD<unsigned int,unsigned int>(total_weight, *v37);
          v38 = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::back((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 112));
          v39 = std::get<2ul,unsigned int,unsigned int,unsigned int>(v38);
          if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          total_return = SAFE_ADD<unsigned int,unsigned int>(total_return, *v39);
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        for ( idx = 0;
              idx < std::map<unsigned int,unsigned int>::size(cost_item_map)
           && total_return < total_return_count
           && total_weight;
              ++idx )
        {
          rand_weight = common::tools::RandomUtils::rand<unsigned int>(1u, total_weight);
          cur_weight = 0;
          __for_range_1 = (std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *)(v6 + 112);
          __for_begin_0._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 112))._M_current;
          __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
                    &__for_begin_0,
                    &__for_end) )
          {
            __t = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin_0);
            __0 = std::get<0ul,unsigned int,unsigned int,unsigned int>(__t);
            weight = std::get<1ul,unsigned int,unsigned int,unsigned int>(__t);
            returned = std::get<2ul,unsigned int,unsigned int,unsigned int>(__t);
            if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            cur_weight += *weight;
            if ( cur_weight >= rand_weight )
            {
              if ( total_weight <= *weight )
                v40 = 0;
              else
                v40 = total_weight - *weight;
              total_weight = v40;
              ++total_return;
              if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(weight);
              }
              *weight = 0;
              if ( *(_BYTE *)(((unsigned __int64)returned >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)returned & 7) + 3) >= *(_BYTE *)(((unsigned __int64)returned >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              ++*returned;
              break;
            }
            __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin_0);
          }
        }
        std::vector<ItemParam>::clear(return_item_vec);
        __for_range_2 = (std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *)(v6 + 112);
        __for_begin_0._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 112))._M_current;
        __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(__for_range_2)._M_current;
        while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
                  &__for_begin_0,
                  &__for_end) )
        {
          n = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin_0);
          if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&n->std::_Tuple_impl<0,unsigned int,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl
                          + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->std::_Tuple_impl<0,unsigned int,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl
                                                             + 3) >> 3)
                                                           + 0x7FFF8000) )
          {
            n = (std::tuple<unsigned int,unsigned int,unsigned int> *)__asan_report_load_n(n, 12LL);
          }
          v74 = *n;
          item_id_0 = std::get<0ul,unsigned int,unsigned int,unsigned int>(&v74);
          __1 = std::get<1ul,unsigned int,unsigned int,unsigned int>(&v74);
          returned_0 = std::get<2ul,unsigned int,unsigned int,unsigned int>(&v74);
          if ( *(_BYTE *)(((unsigned __int64)returned_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)returned_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)returned_0 >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *returned_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            __args_0.item_id = *item_id_0;
            __args_0.count = *returned_0;
            __args_0.level = 0;
            __args_0.promote_level = 0;
            std::vector<ItemParam>::emplace_back<ItemParam>(return_item_vec, &__args_0, &__args_0);
          }
          __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin_0);
        }
        v12 = 0;
        std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::~vector((std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *const)(v6 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/drop_utils.cpp",
          "randomExtraItemsForLifeEffectTalent",
          344);
        v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v77,
                (const char (*)[31])"total_item_count is 0, player:");
        operator<<(v16, player);
        common::milog::MiLogStream::~MiLogStream(&v77);
        v12 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v77,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/drop_utils.cpp",
        "randomExtraItemsForLifeEffectTalent",
        333);
      v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v77,
              (const char (*)[26])"batch_count is 0, player:");
      operator<<(v13, player);
      common::milog::MiLogStream::~MiLogStream(&v77);
      v12 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/drop_utils.cpp",
      "randomExtraItemsForLifeEffectTalent",
      328);
    v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v77,
           (const char (*)[22])"invalid return ratio:");
    v10 = common::milog::MiLogStream::operator<<<float,(float *)0>(v9, (const float *)(v6 + 96));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    operator<<(v11, player);
    common::milog::MiLogStream::~MiLogStream(&v77);
    v12 = -1;
  }
  result = v12;
  if ( v78 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
