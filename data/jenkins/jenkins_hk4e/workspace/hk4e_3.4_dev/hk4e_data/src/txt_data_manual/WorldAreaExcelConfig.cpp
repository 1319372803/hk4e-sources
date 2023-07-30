// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WorldAreaExcelConfig.cpp

// Line 24: range 000000000CB652C0-000000000CB661FF
int32_t __cdecl WorldAreaExcelConfigMgr::checkConfig(
        WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char *v8; // rsi
  char *v9; // rsi
  __int64 v10; // rsi
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v11; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v12; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v13; // ecx
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::size_type v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // ecx
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>> *__for_range; // [rsp+18h] [rbp-308h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > >::reference v29; // [rsp+20h] [rbp-300h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > >::type *area_id; // [rsp+28h] [rbp-2F8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > >::type *explorable_gadgets_map; // [rsp+30h] [rbp-2F0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::reference v32; // [rsp+40h] [rbp-2E0h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::type *explore_type; // [rsp+48h] [rbp-2D8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::type *group_gadgets_map; // [rsp+50h] [rbp-2D0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::reference v35; // [rsp+60h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *gadget_exp_map; // [rsp+70h] [rbp-2B0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *explore_exp; // [rsp+88h] [rbp-298h]
  char v38[656]; // [rsp+90h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 4 19 area_explore_exp:37 64 4 15 gadget_count:40 80 4 17 type_total_exp:41 96 8 14 __for_b"
                        "egin:35 128 8 12 __for_end:35 160 8 14 __for_begin:38 192 8 12 __for_end:38 224 8 14 __for_begin"
                        ":42 256 8 12 __for_end:42 288 8 9 <unknown> 320 8 14 __for_begin:45 352 8 12 __for_end:45 384 8 "
                        "9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WorldAreaExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  if ( WorldAreaExcelConfigMgr::checkWorldAreaConfig(this, txt_config_mgr)
    || WorldAreaExcelConfigMgr::checkMapAreaConfig(this, txt_config_mgr)
    || WorldAreaExcelConfigMgr::checkTransPointRewardConfig(this, txt_config_mgr)
    || WorldAreaExcelConfigMgr::checkCityConfig(this, txt_config_mgr)
    || WorldAreaExcelConfigMgr::checkCityLevelupConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkConfig",
      31);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])"checkConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    result = -1;
  }
  else
  {
    __for_range = &this->area_to_explorable_gadgets_map;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, txt_config_mgr);
    *(std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, txt_config_mgr);
    *(std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::iterator *)(v2 + 128) = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::end(__for_range);
    while ( 1 )
    {
      v8 = (char *)(v2 + 128);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > >::_Self *)(v2 + 96),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > >::_Self *)(v2 + 128)) )
        break;
      v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > > *const)(v2 + 96));
      area_id = std::get<0ul,unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>(v29);
      explorable_gadgets_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>(v29);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48, v8);
      *(_DWORD *)(v2 + 48) = 0;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v8);
      *(std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::const_iterator *)(v2 + 160) = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::begin(explorable_gadgets_map);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v8);
      *(std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::const_iterator *)(v2 + 192) = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::end(explorable_gadgets_map);
      while ( 1 )
      {
        v9 = (char *)(v2 + 192);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::_Self *)(v2 + 160),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::_Self *)(v2 + 192)) )
          break;
        v32 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > > *const)(v2 + 160));
        explore_type = std::get<0ul,unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>>>(v32);
        group_gadgets_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>>>(v32);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 64, v9);
        *(_DWORD *)(v2 + 64) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80, v9);
        *(_DWORD *)(v2 + 80) = 0;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v9);
        *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 224) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(group_gadgets_map);
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, v9);
        *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 256) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(group_gadgets_map);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 224),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 256)) )
        {
          v35 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 224));
          std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v35);
          gadget_exp_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v35);
          v10 = (unsigned int)std::map<unsigned int,unsigned int>::size(gadget_exp_map);
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 64);
          *(_DWORD *)(v2 + 64) += v10;
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 320, v10);
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 320) = std::map<unsigned int,unsigned int>::begin(gadget_exp_map);
          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 352, v10);
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 352) = std::map<unsigned int,unsigned int>::end(gadget_exp_map);
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 320),
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 352)) )
          {
            *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
            v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 320));
            if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 288, v2 + 352);
            if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(v11, 8LL);
            }
            *(std::pair<unsigned int const,unsigned int> *)(v2 + 288) = *v11;
            std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 288));
            v12 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 288));
            explore_exp = v12;
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v12);
            }
            v13 = *explore_exp;
            if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 80);
            *(_DWORD *)(v2 + 80) += v13;
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 320));
          }
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 224));
        }
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "checkConfig",
          50);
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[9])"area_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, area_id);
        v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" explore_type:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, explore_type);
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" group_count:");
        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        v19 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::size(group_gadgets_map);
        if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
          v19 = __asan_report_store8(v2 + 384, " group_count:");
        *(_QWORD *)(v2 + 384) = v19;
        v20 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v18,
                (const unsigned __int64 *)(v2 + 384));
        v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" gadget_count:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 64));
        v23 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v22,
                (const char (*)[41])" total explore_exp in this explore_type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 80));
        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        v24 = *(_DWORD *)(v2 + 48);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
        *(_DWORD *)(v2 + 48) = v24 + *(_DWORD *)(v2 + 80);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,unsigned int>> > > *const)(v2 + 160));
      }
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkConfig",
        54);
      v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
              (common::milog::MiLogStream *const)(v2 + 544),
              (const char (*)[9])"area_id:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, area_id);
      v27 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v26,
              (const char (*)[20])" total_explore_exp:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> > > *const)(v2 + 96));
    }
    result = 0;
  }
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 61: range 000000000CB66200-000000000CB66445
int32_t __cdecl WorldAreaExcelConfigMgr::rewriteConfig(
        WorldAreaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WorldAreaExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( WorldAreaExcelConfigMgr::rewriteWorldAreaConfig(this, txt_config_mgr)
    || WorldAreaExcelConfigMgr::rewriteCityLevelupConfig(this, txt_config_mgr)
    || WorldAreaExcelConfigMgr::rewriteTransPointRewardConfig(this, txt_config_mgr)
    || WorldAreaExcelConfigMgr::rewriteCityConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "rewriteConfig",
      67);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v6, (const char (*)[20])"rewriteConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 74: range 000000000CB66446-000000000CB66F12
int32_t __cdecl WorldAreaExcelConfigMgr::rewriteWorldAreaConfig(
        WorldAreaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  data::WorldAreaConfig **v7; // r8
  std::unordered_map<unsigned int,data::WorldAreaConfig*> *p_first_level_area_config_map; // rcx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  std::unordered_set<unsigned int> *v17; // rax
  std::unordered_map<unsigned int,data::WorldAreaConfig*> *p_second_level_area_config_map; // rcx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int32_t result; // eax
  data::WorldAreaConfigMap *__for_range; // [rsp+10h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldAreaConfig>,false,false>::reference __in; // [rsp+18h] [rbp-1E8h]
  std::tuple_element<1,std::pair<unsigned int const,data::WorldAreaConfig> >::type *world_area_config; // [rsp+28h] [rbp-1D8h]
  char v35[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 14 __for_begin:75 64 8 12 __for_end:75 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::rewriteWorldAreaConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->world_area_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::WorldAreaConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WorldAreaConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WorldAreaConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig>,false> *)(v3 + 64)) )
    {
      v14 = 1;
      goto LABEL_41;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldAreaConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldAreaConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::WorldAreaConfig>(__in);
    world_area_config = std::get<1ul,unsigned int const,data::WorldAreaConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&world_area_config->area_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&world_area_config->area_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&world_area_config->area_type);
    }
    if ( world_area_config->area_type == LEVEL_1 )
    {
      p_first_level_area_config_map = &this->first_level_area_config_map;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v6);
      *(_QWORD *)(v3 + 96) = world_area_config;
      v9 = std::unordered_map<unsigned int,data::WorldAreaConfig *>::emplace<unsigned int &,data::WorldAreaConfig *>(
             p_first_level_area_config_map,
             &world_area_config->area_id_1,
             (data::WorldAreaConfig **)(v3 + 96),
             (unsigned int *)p_first_level_area_config_map,
             v7);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( !v9.second )
      {
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "rewriteWorldAreaConfig",
          81);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v10, (const char (*)[35])byte_1A1380E0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &world_area_config->scene_id);
        v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])byte_1A138140);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &world_area_config->area_id_1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_41;
      }
      v15 = ((_BYTE)world_area_config + 28) & 7;
      v16 = (*(_BYTE *)(((unsigned __int64)&world_area_config->area_default_lock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&world_area_config->area_default_lock >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_load1(&world_area_config->area_default_lock, v15, v16);
      if ( world_area_config->area_default_lock )
      {
        v17 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                &this->default_unlock_area_map,
                &world_area_config->scene_id);
        std::unordered_set<unsigned int>::insert(v17, &world_area_config->area_id_1);
      }
      std::set<unsigned int>::insert(&this->area_related_scene_id_set, &world_area_config->scene_id);
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((unsigned __int64)&world_area_config->area_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&world_area_config->area_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&world_area_config->area_type);
    }
    if ( world_area_config->area_type == LEVEL_2 )
    {
      p_second_level_area_config_map = &this->second_level_area_config_map;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v6);
      *(_QWORD *)(v3 + 128) = world_area_config;
      v19 = std::unordered_map<unsigned int,data::WorldAreaConfig *>::emplace<unsigned int &,data::WorldAreaConfig *>(
              p_second_level_area_config_map,
              &world_area_config->area_id_2,
              (data::WorldAreaConfig **)(v3 + 128),
              (unsigned int *)p_second_level_area_config_map,
              v7);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v19.second )
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "rewriteWorldAreaConfig",
          94);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v20, (const char (*)[35])byte_1A138180);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &world_area_config->scene_id);
        v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])byte_1A1381E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &world_area_config->area_id_2);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_41;
      }
      v24 = ((_BYTE)world_area_config + 28) & 7;
      v25 = (*(_BYTE *)(((unsigned __int64)&world_area_config->area_default_lock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&world_area_config->area_default_lock >> 3) + 0x7FFF8000));
      if ( (_BYTE)v25 )
        __asan_report_load1(&world_area_config->area_default_lock, v24, v25);
      if ( world_area_config->area_default_lock )
        break;
    }
LABEL_39:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldAreaConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldAreaConfig>,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 288, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
    "rewriteWorldAreaConfig",
    99);
  v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 288),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v27 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v26, (const char (*)[49])byte_1A138220);
  v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &world_area_config->scene_id);
  v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v28, (const char (*)[17])byte_1A1381E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &world_area_config->area_id_2);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v14 = 0;
LABEL_41:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v14 == 1 )
  {
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "rewriteWorldAreaConfig",
      104);
    v30 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[27])"area_related_scene_id_set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v30, &this->area_related_scene_id_set);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    v2 = 0;
  }
  result = v2;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 110: range 000000000CB66FA4-000000000CB67337
int32_t __cdecl WorldAreaExcelConfigMgr::rewriteCityLevelupConfig(
        WorldAreaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::vector<data::CityLevelupConfig> *v6; // rdx
  data::CityLevelupConfig *M_current; // r14
  std::vector<data::CityLevelupConfig>::iterator v8; // rax
  WorldAreaExcelConfigMgr::rewriteCityLevelupConfig::<lambda(const data::CityLevelupConfig&, const data::CityLevelupConfig&)> v9; // dl
  int32_t result; // eax
  data::CityLevelupConfigVec *__for_range; // [rsp+10h] [rbp-120h]
  std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>> *__for_range_0; // [rsp+18h] [rbp-118h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false,false>::reference __in; // [rsp+20h] [rbp-110h]
  std::vector<data::CityLevelupConfig> *levelup_config_vec; // [rsp+30h] [rbp-100h]
  const data::CityLevelupConfig *levelup_config; // [rsp+38h] [rbp-F8h]
  char v16[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 11 functor:116 64 8 15 __for_begin:111 96 8 13 __for_end:111 128 8 15 __for_begin:120 160"
                        " 8 13 __for_end:120";
  *(_QWORD *)(v2 + 16) = WorldAreaExcelConfigMgr::rewriteCityLevelupConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  __for_range = &this->city_levelup_config_vec;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::CityLevelupConfig>::iterator *)(v2 + 64) = std::vector<data::CityLevelupConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::vector<data::CityLevelupConfig>::iterator *)(v2 + 96) = std::vector<data::CityLevelupConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !__gnu_cxx::operator!=<data::CityLevelupConfig *,std::vector<data::CityLevelupConfig>>(
            (const __gnu_cxx::__normal_iterator<data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *)(v2 + 96)) )
      break;
    levelup_config = __gnu_cxx::__normal_iterator<data::CityLevelupConfig *,std::vector<data::CityLevelupConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *const)(v2 + 64));
    v6 = std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::operator[](
           &this->city_levelup_config_map,
           &levelup_config->city_id);
    std::vector<data::CityLevelupConfig>::emplace_back<data::CityLevelupConfig const&>(
      v6,
      levelup_config,
      (const data::CityLevelupConfig *)v6);
    __gnu_cxx::__normal_iterator<data::CityLevelupConfig *,std::vector<data::CityLevelupConfig>>::operator++((__gnu_cxx::__normal_iterator<data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  __for_range_0 = &this->city_levelup_config_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::CityLevelupConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false> *)(v2 + 160)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false,false> *const)(v2 + 128));
    std::get<0ul,unsigned int const,std::vector<data::CityLevelupConfig>>(__in);
    levelup_config_vec = std::get<1ul,unsigned int const,std::vector<data::CityLevelupConfig>>(__in);
    M_current = std::vector<data::CityLevelupConfig>::end(levelup_config_vec)._M_current;
    v8._M_current = std::vector<data::CityLevelupConfig>::begin(levelup_config_vec)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<data::CityLevelupConfig *,std::vector<data::CityLevelupConfig>>,WorldAreaExcelConfigMgr::rewriteCityLevelupConfig(TxtConfigMgr &)::{lambda(data::CityLevelupConfig const&,data::CityLevelupConfig const&)#1}>(
      v8,
      (__gnu_cxx::__normal_iterator<data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> >)M_current,
      v9);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false,false> *const)(v2 + 128));
  }
  result = 0;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 116: range 000000000CB66F14-000000000CB66FA3
bool __cdecl WorldAreaExcelConfigMgr::rewriteCityLevelupConfig(TxtConfigMgr &)::{lambda(data::CityLevelupConfig const&,data::CityLevelupConfig const&)#1}::operator()(
        const WorldAreaExcelConfigMgr::rewriteCityLevelupConfig::<lambda(const data::CityLevelupConfig&, const data::CityLevelupConfig&)> *const __closure,
        const data::CityLevelupConfig *lhs,
        const data::CityLevelupConfig *rhs)
{
  uint32_t level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->level);
  }
  level = lhs->level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->level);
  }
  return level < rhs->level;
};

// Line 129: range 000000000CB67338-000000000CB676BA
int32_t __cdecl WorldAreaExcelConfigMgr::rewriteTransPointRewardConfig(
        WorldAreaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::TransPointRewardConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  int32_t result; // eax
  data::TransPointRewardConfigVec *__for_range; // [rsp+18h] [rbp-E8h]
  const data::TransPointRewardConfig *reward_config; // [rsp+20h] [rbp-E0h]
  std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::mapped_type *trans_point_map; // [rsp+28h] [rbp-D8h]
  char v18[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:130 64 8 13 __for_end:130 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::rewriteTransPointRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->trans_point_reward_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::TransPointRewardConfig>::iterator *)(v3 + 32) = std::vector<data::TransPointRewardConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::TransPointRewardConfig>::iterator *)(v3 + 64) = std::vector<data::TransPointRewardConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::TransPointRewardConfig *,std::vector<data::TransPointRewardConfig>>(
            (const __gnu_cxx::__normal_iterator<data::TransPointRewardConfig*,std::vector<data::TransPointRewardConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::TransPointRewardConfig*,std::vector<data::TransPointRewardConfig> > *)(v3 + 64)) )
    {
      v13 = 1;
      goto LABEL_16;
    }
    reward_config = __gnu_cxx::__normal_iterator<data::TransPointRewardConfig *,std::vector<data::TransPointRewardConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::TransPointRewardConfig*,std::vector<data::TransPointRewardConfig> > *const)(v3 + 32));
    trans_point_map = std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::operator[](
                        &this->trans_point_reward_map,
                        &reward_config->scene_id);
    v7 = std::map<unsigned int,data::TransPointRewardConfig>::emplace<unsigned int const&,data::TransPointRewardConfig const&>(
           trans_point_map,
           &reward_config->point_id,
           reward_config,
           &reward_config->point_id,
           v6);
    if ( !v7.second )
      break;
    __gnu_cxx::__normal_iterator<data::TransPointRewardConfig *,std::vector<data::TransPointRewardConfig>>::operator++((__gnu_cxx::__normal_iterator<data::TransPointRewardConfig*,std::vector<data::TransPointRewardConfig> > *const)(v3 + 32));
  }
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 96, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 96),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
    "rewriteTransPointRewardConfig",
    135);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])"scene_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &reward_config->scene_id);
  v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" point_id: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &reward_config->point_id);
  common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])byte_1A138400);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v13 = 0;
LABEL_16:
  if ( v13 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 143: range 000000000CB676BC-000000000CB6A285
int32_t __cdecl WorldAreaExcelConfigMgr::rewriteCityConfig(
        WorldAreaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  uint32_t *p_city_id; // rsi
  const data::CityConfig *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::CityConfig>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  unsigned int *v14; // rax
  const unsigned int *v15; // r8
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  __int64 v25; // rsi
  uint32_t SceneIdByLevel1AreaId; // edx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // edx
  unsigned __int64 v33; // rax
  char *v34; // rsi
  unsigned int *v35; // rax
  int *v36; // rdx
  int v37; // ecx
  char v38; // al
  JsonConfigMgr *p_json_config_mgr; // rcx
  __int64 v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  int v43; // eax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  _BOOL4 v48; // eax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  char *v50; // rsi
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v51; // r15
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  int area_id; // ecx
  char v54; // al
  std::vector<unsigned int> *v55; // rdx
  char v56; // r15
  char *v57; // rsi
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  unsigned __int64 v59; // rdx
  const char *v60; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  int v62; // ecx
  char v63; // al
  std::set<unsigned int> *v64; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // r14
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  int v73; // r15d
  int v74; // edx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_area_to_scene_trans_points_map; // rsi
  char *v78; // rsi
  unsigned __int64 v79; // rax
  char *v80; // rsi
  unsigned int *v81; // rax
  int *v82; // rdx
  int v83; // ecx
  char v84; // al
  __int64 v85; // rsi
  uint32_t v86; // edx
  char v87; // al
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  int v92; // eax
  std::set<unsigned int> *v93; // rax
  bool v94; // al
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  bool v98; // al
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  std::set<unsigned int> *v104; // r15
  std::vector<unsigned int>::const_iterator v105; // rax
  int v106; // edx
  int v107; // r15d
  std::unordered_map<unsigned int,std::set<unsigned int>> *v108; // rax
  const unsigned int *v109; // rcx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v110; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false,false>,bool> v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  unsigned __int64 v116; // rax
  int v117; // edx
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  char v121; // [rsp+17h] [rbp-7F9h]
  char __last; // [rsp+18h] [rbp-7F8h]
  const unsigned int *__lasta; // [rsp+18h] [rbp-7F8h]
  data::CityConfigVec *__for_range; // [rsp+30h] [rbp-7E0h]
  const data::CityConfig *city_config; // [rsp+38h] [rbp-7D8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-7D0h]
  const std::set<unsigned int> *__for_range_1; // [rsp+48h] [rbp-7C8h]
  const SceneJsonConfig *scene_config_ptr; // [rsp+50h] [rbp-7C0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> >,false,false>::reference v130; // [rsp+60h] [rbp-7B0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> > >::type *point_id; // [rsp+68h] [rbp-7A8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> > >::type *scene_point_ptr; // [rsp+70h] [rbp-7A0h]
  data::CityConfigVec *__for_range_3; // [rsp+78h] [rbp-798h]
  const data::CityConfig *city_config_0; // [rsp+80h] [rbp-790h]
  const std::vector<unsigned int> *__for_range_4; // [rsp+88h] [rbp-788h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *area_to_level1_point_ids_map; // [rsp+90h] [rbp-780h]
  std::vector<unsigned int> *point_id_vec; // [rsp+98h] [rbp-778h]
  char v138[1904]; // [rsp+A0h] [rbp-770h] BYREF

  v3 = (unsigned __int64)v138;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1856LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "41 48 4 11 area_id:152 64 4 12 scene_id:160 80 4 12 scene_id:175 96 4 9 <unknown> 112 4 9 <unkno"
                        "wn> 128 4 11 area_id:211 144 4 12 scene_id:213 160 8 15 __for_begin:144 192 8 13 __for_end:144 2"
                        "24 8 15 __for_begin:152 256 8 13 __for_end:152 288 8 15 __for_begin:175 320 8 13 __for_end:175 3"
                        "52 8 15 __for_begin:183 384 8 13 __for_end:183 416 8 15 __for_begin:208 448 8 13 __for_end:208 4"
                        "80 8 15 __for_begin:211 512 8 13 __for_end:211 544 8 6 it:220 576 8 9 <unknown> 608 8 6 jt:227 6"
                        "40 8 9 <unknown> 672 16 25 scene_trans_point_ptr:194 704 32 9 <unknown> 768 32 9 <unknown> 832 3"
                        "2 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152"
                        " 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> "
                        "1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 56 38 scene_area_to_level1_poin"
                        "t_ids_map:174 1760 56 23 scene_point_ids_map:210";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::rewriteCityConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -218959360;
  v5[536862738] = -218959360;
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
  v5[536862741] = -219021312;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -218959118;
  v5[536862763] = -218959118;
  v5[536862765] = -218959118;
  v5[536862767] = -218959118;
  v5[536862769] = -218959118;
  v5[536862771] = -218959118;
  v5[536862773] = -234881024;
  v5[536862774] = -218959118;
  v5[536862776] = -218103808;
  v5[536862777] = -202116109;
  __for_range = &this->city_config_vec;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::vector<data::CityConfig>::iterator *)(v3 + 160) = std::vector<data::CityConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::vector<data::CityConfig>::iterator *)(v3 + 192) = std::vector<data::CityConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 192);
    if ( !__gnu_cxx::operator!=<data::CityConfig *,std::vector<data::CityConfig>>(
            (const __gnu_cxx::__normal_iterator<data::CityConfig*,std::vector<data::CityConfig> > *)(v3 + 160),
            (const __gnu_cxx::__normal_iterator<data::CityConfig*,std::vector<data::CityConfig> > *)(v3 + 192)) )
    {
      v13 = 1;
      goto LABEL_45;
    }
    city_config = __gnu_cxx::__normal_iterator<data::CityConfig *,std::vector<data::CityConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::CityConfig*,std::vector<data::CityConfig> > *const)(v3 + 160));
    p_city_id = &city_config->city_id;
    v9 = std::unordered_map<unsigned int,data::CityConfig>::emplace<unsigned int const&,data::CityConfig const&>(
           &this->city_config_map,
           &city_config->city_id,
           city_config,
           (const unsigned int *)&this->city_config_map,
           v8);
    if ( !v9.second )
      break;
    __for_range_0 = &city_config->area_id_vec;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, p_city_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_city_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v16 = (int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v17 = *v16;
      v18 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v6) = v18 != 0;
        __asan_report_store4(v3 + 48, v6);
      }
      *(_DWORD *)(v3 + 48) = v17;
      v19 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->area_to_city_map,
              (unsigned int *)(v3 + 48),
              &city_config->city_id,
              (unsigned int *)&this->area_to_city_map,
              v15);
      if ( !v19.second )
      {
        *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "rewriteCityConfig",
          156);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v20,
                (const char (*)[19])"duplicate area_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" city_id:");
        v6 = (const char *)&city_config->city_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &city_config->city_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
        *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
      }
      else
      {
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v25 = *(unsigned int *)(v3 + 48);
        SceneIdByLevel1AreaId = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(this, v25);
        v27 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v27 != 0 && v27 <= 3 )
        {
          LOBYTE(v25) = v27 != 0;
          __asan_report_store4(v3 + 64, v25);
        }
        *(_DWORD *)(v3 + 64) = SceneIdByLevel1AreaId;
        if ( *(_DWORD *)(v3 + 64) )
        {
          v6 = (const char *)(v3 + 64);
          std::set<unsigned int>::insert(
            &this->city_related_scene_id_set,
            (const std::set<unsigned int>::value_type *)(v3 + 64));
          v24 = 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 832, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 832),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
            "rewriteCityConfig",
            163);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  v28,
                  (const char (*)[41])"findSceneIdByLevel1AreaId fail, area_id:");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v3 + 48));
          v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v30, (const char (*)[13])" in city_id:");
          v6 = (const char *)&city_config->city_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &city_config->city_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
          *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v24 = 0;
        }
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v24 != 1 )
      {
        v32 = 0;
        goto LABEL_41;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
    }
    v32 = 1;
LABEL_41:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v32 != 1 )
    {
      v13 = 0;
      goto LABEL_45;
    }
    __gnu_cxx::__normal_iterator<data::CityConfig *,std::vector<data::CityConfig>>::operator++((__gnu_cxx::__normal_iterator<data::CityConfig*,std::vector<data::CityConfig> > *const)(v3 + 160));
  }
  *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 704, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 704),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
    "rewriteCityConfig",
    148);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 704),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])"city_id: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &city_config->city_id);
  v6 = byte_1A138400;
  common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])byte_1A138400);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
  *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v13 = 0;
LABEL_45:
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v13 == 1 )
  {
    v33 = ((v3 + 1664) >> 3) + 2147450880;
    *(_DWORD *)v33 = 0;
    *(_WORD *)(v33 + 4) = 0;
    *(_BYTE *)(v33 + 6) = 0;
    std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::unordered_map((std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 1664));
    __for_range_1 = &this->city_related_scene_id_set;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v6);
    *(std::set<unsigned int>::iterator *)(v3 + 288) = std::set<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v6);
    *(std::set<unsigned int>::iterator *)(v3 + 320) = std::set<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v34 = (char *)(v3 + 320);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 288),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 320)) )
      {
        v43 = 1;
        goto LABEL_115;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v35 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 288));
      v36 = (int *)v35;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v35);
      }
      v37 = *v36;
      v38 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v38 != 0 && v38 <= 3 )
      {
        LOBYTE(v34) = v38 != 0;
        __asan_report_store4(v3 + 80, v34);
      }
      *(_DWORD *)(v3 + 80) = v37;
      p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 80);
      v40 = *(unsigned int *)(v3 + 80);
      scene_config_ptr = JsonConfigMgr::findSceneJsonConfig(p_json_config_mgr, v40);
      if ( !scene_config_ptr )
        break;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v40);
      *(std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::const_iterator *)(v3 + 352) = std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::begin(&scene_config_ptr->point_map);
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v40);
      *(std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::const_iterator *)(v3 + 384) = std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::end(&scene_config_ptr->point_map);
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> >,false> *)(v3 + 352),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> >,false> *)(v3 + 384)) )
      {
        v130 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> >,false,false> *const)(v3 + 352));
        point_id = std::get<0ul,unsigned int const,std::shared_ptr<data::ConfigScenePoint>>(v130);
        scene_point_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<data::ConfigScenePoint>>(v130);
        if ( std::operator==<data::ConfigScenePoint>(0LL, scene_point_ptr) )
        {
          *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 960),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
            "rewriteCityConfig",
            187);
          v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v45 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  v44,
                  (const char (*)[35])"scene_point_ptr is null, scene_id:");
          v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v45,
                  (const unsigned int *)(v3 + 80));
          v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v46, (const char (*)[11])" point_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, point_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
          *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v48 = 0;
        }
        else
        {
          v49 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_point_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&v49->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v49->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v49->type);
          }
          if ( v49->type == TOWER )
          {
            v50 = (char *)(v3 + 80);
            v51 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::operator[](
                    (std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 1664),
                    (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::key_type *)(v3 + 80));
            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
            v52 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_point_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&v52->area_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v52->area_id >> 3) + 0x7FFF8000) <= 1 )
            {
              v52 = (std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load2(&v52->area_id);
            }
            area_id = v52->area_id;
            v54 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
            if ( v54 != 0 && v54 <= 3 )
            {
              LOBYTE(v50) = v54 != 0;
              __asan_report_store4(v3 + 96, v50);
            }
            *(_DWORD *)(v3 + 96) = area_id;
            v55 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                    v51,
                    (std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 96));
            std::vector<unsigned int>::push_back(v55, point_id);
            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
          }
          *(_WORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(_WORD *)(((v3 + 672) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          std::dynamic_pointer_cast<data::SceneTransPoint,data::ConfigScenePoint>((const std::shared_ptr<data::ConfigScenePoint> *)(v3 + 672));
          v56 = 0;
          __last = 0;
          v57 = 0LL;
          if ( !std::operator!=<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v3 + 672), 0LL) )
            goto LABEL_91;
          *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1024, 32LL);
          }
          std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v3 + 1024), "SceneTransPoint", 0xFuLL);
          v56 = 1;
          __last = 1;
          v58 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 672));
          if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v58);
          v59 = (unsigned __int64)(v58->_vptr_ConfigScenePoint + 4);
          if ( *(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v58->_vptr_ConfigScenePoint + 4);
          v60 = (const char *)(*(__int64 (__fastcall **)(std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v59)(v58);
          v57 = (char *)(v3 + 1024);
          if ( std::operator==<char>(v60, (const std::string *)(v3 + 1024)) )
            v121 = 1;
          else
LABEL_91:
            v121 = 0;
          if ( __last )
            std::string::~string((void *)(v3 + 1024));
          if ( v56 )
            *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          if ( !v121 )
            goto LABEL_105;
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
          v61 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_point_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&v61->area_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v61->area_id >> 3) + 0x7FFF8000) <= 1 )
          {
            v61 = (std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load2(&v61->area_id);
          }
          v62 = v61->area_id;
          v63 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
          if ( v63 != 0 && v63 <= 3 )
          {
            LOBYTE(v57) = v63 != 0;
            __asan_report_store4(v3 + 112, v57);
          }
          *(_DWORD *)(v3 + 112) = v62;
          v64 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->area_to_scene_trans_points_map,
                  (std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 112));
          v65 = std::set<unsigned int>::insert(v64, point_id);
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( !v65.second )
          {
            *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1088, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1088),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
              "rewriteCityConfig",
              199);
            v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1088),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v67 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v66,
                    (const char (*)[20])"duplicate point_id:");
            v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, point_id);
            v69 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v68,
                    (const char (*)[14])" in scene_id:");
            v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v69,
                    (const unsigned int *)(v3 + 80));
            v71 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v70, (const char (*)[10])" area_id:");
            v72 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_point_ptr);
            common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v71, &v72->area_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
            *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v73 = 0;
          }
          else
          {
LABEL_105:
            v73 = 1;
          }
          std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 672));
          v48 = v73 == 1;
        }
        *(_WORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -1800;
        if ( !v48 )
        {
          v74 = 0;
          goto LABEL_111;
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> >,false,false> *const)(v3 + 352));
      }
      v74 = 1;
LABEL_111:
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      if ( v74 != 1 )
      {
        v43 = 0;
        goto LABEL_115;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 288));
    }
    *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 896, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 896),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "rewriteCityConfig",
      180);
    v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 896),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v42 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            v41,
            (const char (*)[36])"findSceneJsonConfig fail, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
    *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v43 = 0;
LABEL_115:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v43 == 1 )
    {
      *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1152, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1152),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "rewriteCityConfig",
        205);
      v75 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v3 + 1152),
              (const char (*)[36])"scene_area_to_level1_point_ids_map:");
      common::milog::MiLogStream::operator<<<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>(
        v75,
        (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *)(v3 + 1664));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
      *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
      *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1216, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1216),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "rewriteCityConfig",
        206);
      v76 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v3 + 1216),
              (const char (*)[32])"area_to_scene_trans_points_map:");
      p_area_to_scene_trans_points_map = &this->area_to_scene_trans_points_map;
      common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(
        v76,
        &this->area_to_scene_trans_points_map);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
      *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
      __for_range_3 = &this->city_config_vec;
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 416, p_area_to_scene_trans_points_map);
      *(std::vector<data::CityConfig>::iterator *)(v3 + 416) = std::vector<data::CityConfig>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 448, p_area_to_scene_trans_points_map);
      *(std::vector<data::CityConfig>::iterator *)(v3 + 448) = std::vector<data::CityConfig>::end(__for_range_3);
      while ( 1 )
      {
        v78 = (char *)(v3 + 448);
        if ( !__gnu_cxx::operator!=<data::CityConfig *,std::vector<data::CityConfig>>(
                (const __gnu_cxx::__normal_iterator<data::CityConfig*,std::vector<data::CityConfig> > *)(v3 + 416),
                (const __gnu_cxx::__normal_iterator<data::CityConfig*,std::vector<data::CityConfig> > *)(v3 + 448)) )
          break;
        city_config_0 = __gnu_cxx::__normal_iterator<data::CityConfig *,std::vector<data::CityConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::CityConfig*,std::vector<data::CityConfig> > *const)(v3 + 416));
        v79 = ((v3 + 1760) >> 3) + 2147450880;
        *(_DWORD *)v79 = 0;
        *(_WORD *)(v79 + 4) = 0;
        *(_BYTE *)(v79 + 6) = 0;
        std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1760));
        __for_range_4 = &city_config_0->area_id_vec;
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 480, v78);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 480) = std::vector<unsigned int>::begin(__for_range_4);
        *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 512, v78);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 512) = std::vector<unsigned int>::end(__for_range_4);
        while ( 1 )
        {
          v80 = (char *)(v3 + 512);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 480),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 512)) )
            break;
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
          v81 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 480));
          v82 = (int *)v81;
          if ( *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v81 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v81);
          }
          v83 = *v82;
          v84 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
          if ( v84 != 0 && v84 <= 3 )
          {
            LOBYTE(v80) = v84 != 0;
            __asan_report_store4(v3 + 128, v80);
          }
          *(_DWORD *)(v3 + 128) = v83;
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
          v85 = *(unsigned int *)(v3 + 128);
          v86 = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(this, v85);
          v87 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
          if ( v87 != 0 && v87 <= 3 )
          {
            LOBYTE(v85) = v87 != 0;
            __asan_report_store4(v3 + 144, v85);
          }
          *(_DWORD *)(v3 + 144) = v86;
          if ( *(_DWORD *)(v3 + 144) )
          {
            v93 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                    &this->city_to_scene_ids_map,
                    &city_config_0->city_id);
            std::set<unsigned int>::insert(v93, (const std::set<unsigned int>::value_type *)(v3 + 144));
            *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 544, v3 + 144);
            *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::iterator *)(v3 + 544) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::find((std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 1664), (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::key_type *)(v3 + 144));
            *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 576, v3 + 144);
            *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::iterator *)(v3 + 576) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::end((std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 1664));
            v94 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false> *)(v3 + 544),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false> *)(v3 + 576));
            *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
            if ( v94 )
            {
              *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1344, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1344),
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                "rewriteCityConfig",
                223);
              v95 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      (common::milog::MiLogStream *const)(v3 + 1344),
                      (const char (*)[28])"no level1 point in city_id:");
              v96 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v95, &city_config_0->city_id);
              v97 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v96,
                      (const char (*)[11])" scene_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v97,
                (const unsigned int *)(v3 + 144));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
              *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              v92 = 1;
            }
            else
            {
              area_to_level1_point_ids_map = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false,false> *const)(v3 + 544))->second;
              *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 608, v3 + 576);
              *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 608) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(area_to_level1_point_ids_map, (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 128));
              *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 640, v3 + 128);
              *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 640) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(area_to_level1_point_ids_map);
              v98 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 608),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 640));
              *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
              if ( v98 )
              {
                *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1408) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1408, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1408),
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                  "rewriteCityConfig",
                  230);
                v99 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        (common::milog::MiLogStream *const)(v3 + 1408),
                        (const char (*)[29])"no level1 point for area_id:");
                v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v99,
                         (const unsigned int *)(v3 + 128));
                v101 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                         v100,
                         (const char (*)[11])" scene_id:");
                v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v101,
                         &city_config_0->scene_id);
                v103 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                         v102,
                         (const char (*)[10])" city_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, &city_config_0->city_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1408));
                *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                v92 = 1;
              }
              else
              {
                point_id_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 608))->second;
                v104 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                         (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1760),
                         (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 144));
                __lasta = std::vector<unsigned int>::end(point_id_vec)._M_current;
                v105._M_current = std::vector<unsigned int>::begin(point_id_vec)._M_current;
                std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
                  v104,
                  v105,
                  (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lasta);
                v92 = 2;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1280, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1280),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
              "rewriteCityConfig",
              216);
            v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1280),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v89 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    v88,
                    (const char (*)[41])"findSceneIdByLevel1AreaId fail, area_id:");
            v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v89,
                    (const unsigned int *)(v3 + 128));
            v91 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v90,
                    (const char (*)[13])" in city_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, &city_config_0->city_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
            *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v92 = 0;
          }
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
          if ( !v92 )
          {
            v106 = 0;
            goto LABEL_163;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 480));
        }
        v106 = 1;
LABEL_163:
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
        if ( v106 == 1 )
        {
          v108 = std::move<std::unordered_map<unsigned int,std::set<unsigned int>> &>((std::unordered_map<unsigned int,std::set<unsigned int>> *)(v3 + 1760));
          v111 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::emplace<unsigned int const&,std::unordered_map<unsigned int,std::set<unsigned int>>>(
                   &this->city_level1_trans_points_map,
                   &city_config_0->city_id,
                   v108,
                   v109,
                   v110);
          if ( !v111.second )
          {
            *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1472, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1472),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
              "rewriteCityConfig",
              238);
            v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1472),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v113 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                     v112,
                     (const char (*)[19])"duplicate city_id:");
            v114 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v113, &city_config_0->city_id);
            v115 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v114,
                     (const char (*)[11])" scene_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v115, &city_config_0->scene_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
            *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v107 = 0;
          }
          else
          {
            v107 = 1;
          }
        }
        else
        {
          v107 = 0;
        }
        std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1760));
        v116 = ((v3 + 1760) >> 3) + 2147450880;
        *(_DWORD *)v116 = -117901064;
        *(_WORD *)(v116 + 4) = -1800;
        *(_BYTE *)(v116 + 6) = -8;
        if ( v107 != 1 )
        {
          v117 = 0;
          goto LABEL_174;
        }
        __gnu_cxx::__normal_iterator<data::CityConfig *,std::vector<data::CityConfig>>::operator++((__gnu_cxx::__normal_iterator<data::CityConfig*,std::vector<data::CityConfig> > *const)(v3 + 416));
      }
      v117 = 1;
LABEL_174:
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
      if ( v117 == 1 )
      {
        *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1536) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1536, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1536),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "rewriteCityConfig",
          242);
        v118 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 (common::milog::MiLogStream *const)(v3 + 1536),
                 (const char (*)[30])"city_level1_trans_points_map:");
        common::milog::MiLogStream::operator<<<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>(
          v118,
          &this->city_level1_trans_points_map);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1536));
        *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = -117901064;
        *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1600) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1600, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1600),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "rewriteCityConfig",
          243);
        v119 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 (common::milog::MiLogStream *const)(v3 + 1600),
                 (const char (*)[23])"city_to_scene_ids_map:");
        common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(v119, &this->city_to_scene_ids_map);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1600));
        *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
      }
    }
    std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::~unordered_map((std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 1664));
  }
  if ( v138 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 208) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D4) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80DC) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80E4) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1856LL, v138);
  }
  return v2;
};

// Line 249: range 000000000CB6A286-000000000CB6AEBA
int32_t __cdecl WorldAreaExcelConfigMgr::checkWorldAreaConfig(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,data::WorldAreaConfig*> >::type *v6; // rax
  std::tuple_element<1,const std::pair<unsigned int const,data::WorldAreaConfig*> >::type v7; // rax
  char v8; // dl
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  std::tuple_element<1,const std::pair<unsigned int const,data::WorldAreaConfig*> >::type v13; // rax
  char v14; // dl
  const JsonConfigMgr *p_json_config_mgr; // rdi
  std::tuple_element<1,const std::pair<unsigned int const,data::WorldAreaConfig*> >::type v16; // rax
  char v17; // dl
  int tower_point_id; // esi
  std::tuple_element<1,const std::pair<unsigned int const,data::WorldAreaConfig*> >::type v19; // rdx
  char v20; // cl
  uint32_t scene_id; // edx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  int v27; // r15d
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  int v35; // ecx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rcx
  common::milog::MiLogStream *v40; // rax
  int v41; // eax
  int32_t result; // eax
  const HK4EDesignConfig *design_config; // [rsp+28h] [rbp-1D8h]
  std::unordered_map<unsigned int,data::WorldAreaConfig*> *__for_range; // [rsp+30h] [rbp-1D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false>::reference v45; // [rsp+38h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::WorldAreaConfig*> >::type *area_id; // [rsp+40h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WorldAreaConfig*> >::type *area_config_ptr; // [rsp+48h] [rbp-1B8h]
  char v48[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:251 64 8 13 __for_end:251 96 16 19 scene_point_ptr:265 128 32 9 <unknown> "
                        "192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::checkWorldAreaConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  design_config = TxtConfigMgr::getConfig(txt_config_mgr);
  __for_range = &this->first_level_area_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig*>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::WorldAreaConfig *>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig*>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WorldAreaConfig *>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WorldAreaConfig *>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig*>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig*>,false> *)(v3 + 64)) )
  {
    v45 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig *>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false> *const)(v3 + 32));
    area_id = std::get<0ul,unsigned int const,data::WorldAreaConfig *>(v45);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,data::WorldAreaConfig*> >::type *)std::get<1ul,unsigned int const,data::WorldAreaConfig *>(v45);
    area_config_ptr = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = *area_config_ptr;
    v8 = *(_BYTE *)(((unsigned __int64)&(*area_config_ptr)->area_type >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
      __asan_report_load4(&(*area_config_ptr)->area_type);
    if ( v7->area_type == LEVEL_1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)area_config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(area_config_ptr);
      v13 = *area_config_ptr;
      v14 = *(_BYTE *)(((unsigned __int64)&(*area_config_ptr)->tower_point_id >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
        __asan_report_load4(&(*area_config_ptr)->tower_point_id);
      if ( v13->tower_point_id )
      {
        *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        p_json_config_mgr = &design_config->json_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)area_config_ptr >> 3) + 0x7FFF8000) )
        {
          p_json_config_mgr = (const JsonConfigMgr *)area_config_ptr;
          __asan_report_load8(area_config_ptr);
        }
        v16 = *area_config_ptr;
        v17 = *(_BYTE *)(((unsigned __int64)&(*area_config_ptr)->tower_point_id >> 3) + 0x7FFF8000);
        if ( v17 != 0 && v17 <= 3 )
        {
          p_json_config_mgr = (const JsonConfigMgr *)&(*area_config_ptr)->tower_point_id;
          __asan_report_load4(p_json_config_mgr);
        }
        tower_point_id = v16->tower_point_id;
        v19 = *area_config_ptr;
        v20 = *(_BYTE *)(((unsigned __int64)&(*area_config_ptr)->scene_id >> 3) + 0x7FFF8000);
        if ( v20 != 0 && (char)(((*(_BYTE *)area_config_ptr + 12) & 7) + 3) >= v20 )
        {
          p_json_config_mgr = (const JsonConfigMgr *)&(*area_config_ptr)->scene_id;
          __asan_report_load4(p_json_config_mgr);
        }
        scene_id = v19->scene_id;
        if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        {
          p_json_config_mgr = (const JsonConfigMgr *)(v3 + 96);
          __asan_report_store16();
        }
        JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
          (const JsonConfigMgr *const)(v3 + 96),
          p_json_config_mgr,
          scene_id,
          tower_point_id);
        if ( std::operator==<data::SceneTransPoint>(0LL, (const std::shared_ptr<data::SceneTransPoint> *)(v3 + 96)) )
        {
          *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
            "checkWorldAreaConfig",
            268);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])"area_id ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, area_id);
          v25 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v24, (const char (*)[18])byte_1A138F00);
          if ( *(_BYTE *)(((unsigned __int64)area_config_ptr >> 3) + 0x7FFF8000) )
            __asan_report_load8(area_config_ptr);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  &(*area_config_ptr)->tower_point_id);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v26, (const char (*)[21])byte_1A138F40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
          *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v27 = 0;
        }
        else
        {
          v28 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v28->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v28->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v28->type);
          }
          if ( v28->type == TOWER )
          {
            v34 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v34->area_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v34->area_id >> 3) + 0x7FFF8000) <= 1 )
            {
              v34 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load2(&v34->area_id);
            }
            v35 = v34->area_id;
            if ( *(_BYTE *)(((unsigned __int64)area_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)area_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)area_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(area_id);
            }
            if ( v35 == *area_id )
            {
              v27 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 320, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 320),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                "checkWorldAreaConfig",
                278);
              v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 320),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v37 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, (const char (*)[9])"area_id ");
              v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, area_id);
              v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v38,
                      (const char (*)[18])byte_1A138F00);
              if ( *(_BYTE *)(((unsigned __int64)area_config_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(area_config_ptr);
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v39,
                      &(*area_config_ptr)->tower_point_id);
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v40, (const char (*)[30])byte_1A138FC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
              *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v27 = 0;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 256, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 256),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
              "checkWorldAreaConfig",
              273);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 256),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])"area_id ");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, area_id);
            v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v31,
                    (const char (*)[18])byte_1A138F00);
            if ( *(_BYTE *)(((unsigned __int64)area_config_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(area_config_ptr);
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    &(*area_config_ptr)->tower_point_id);
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v33, (const char (*)[17])byte_1A138F80);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
            *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v27 = 0;
          }
        }
        std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 96));
        if ( v27 == 1 )
          v12 = 2;
        else
          v12 = 0;
      }
      else
      {
        v12 = 1;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkWorldAreaConfig",
        256);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"area_id ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, area_id);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1A138EC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( !v12 )
    {
      v41 = 0;
      goto LABEL_64;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig *>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false> *const)(v3 + 32));
  }
  v41 = 1;
LABEL_64:
  if ( v41 == 1 )
    v2 = 0;
  result = v2;
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 286: range 000000000CB6AEBC-000000000CB6B2E8
int32_t __cdecl WorldAreaExcelConfigMgr::checkMapAreaConfig(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MapAreaState *p_map_area_state; // rax
  common::milog::MiLogStream *v7; // rax
  const char *v8; // rsi
  common::milog::MiLogStream *v9; // rcx
  data::MapAreaState map_area_state; // edi
  char v11; // al
  int v12; // eax
  int32_t result; // eax
  data::MapAreaConfigMap *__for_range; // [rsp+10h] [rbp-110h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MapAreaConfig>,false,false>::reference v15; // [rsp+18h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MapAreaConfig> >::type *map_area_config; // [rsp+28h] [rbp-F8h]
  char v17[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 9 <unknown> 64 8 15 __for_begin:287 96 8 13 __for_end:287 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::checkMapAreaConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->map_area_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MapAreaConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MapAreaConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MapAreaConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MapAreaConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MapAreaConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MapAreaConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MapAreaConfig>,false> *)(v3 + 96)) )
    {
      v12 = 1;
      goto LABEL_22;
    }
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MapAreaConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MapAreaConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::MapAreaConfig>(v15);
    map_area_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MapAreaConfig> >::type *)std::get<1ul,unsigned int const,data::MapAreaConfig>(v15);
    p_map_area_state = &map_area_config->map_area_state;
    if ( *(_BYTE *)(((unsigned __int64)p_map_area_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_map_area_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_map_area_state >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_map_area_state);
    }
    if ( map_area_config->map_area_state > (unsigned int)MistOpen )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MapAreaConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MapAreaConfig>,false,false> *const)(v3 + 64));
  }
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 128),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
    "checkMapAreaConfig",
    295);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = "invalid map_area_state:";
  v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         v7,
         (const char (*)[24])"invalid map_area_state:");
  if ( *(_BYTE *)(((unsigned __int64)&map_area_config->map_area_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)map_area_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_area_config->map_area_state >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&map_area_config->map_area_state);
  }
  map_area_state = map_area_config->map_area_state;
  v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    map_area_state = v3 + 48;
    LOBYTE(v8) = v11 != 0;
    __asan_report_store4(v3 + 48, v8);
  }
  *(_DWORD *)(v3 + 48) = map_area_state;
  common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 48));
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  v2 = -1;
  v12 = 0;
LABEL_22:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 303: range 000000000CB6B2EA-000000000CB6BBB4
int32_t __cdecl WorldAreaExcelConfigMgr::checkCityConfig(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  const unsigned int *v12; // r8
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v26; // rax
  int v27; // edx
  int32_t result; // eax
  std::unordered_map<unsigned int,data::CityConfig> *__for_range; // [rsp+18h] [rbp-1F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false>::reference v30; // [rsp+20h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::CityConfig> >::type *city_id; // [rsp+28h] [rbp-1E8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1D8h]
  char v33[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 11 area_id:307 64 8 15 __for_begin:305 96 8 13 __for_end:305 128 8 15 __for_begin:307 160"
                        " 8 13 __for_end:307 192 32 9 <unknown> 256 32 9 <unknown> 320 56 17 area_city_map:304";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::checkCityConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 320));
  __for_range = &this->city_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CityConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CityConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CityConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::CityConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CityConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CityConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CityConfig>,false> *)(v3 + 96)) )
      break;
    v30 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false> *const)(v3 + 64));
    city_id = std::get<0ul,unsigned int const,data::CityConfig>(v30);
    __for_range_0 = &std::get<1ul,unsigned int const,data::CityConfig>(v30)->area_id_vec;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v18 = 1;
        goto LABEL_30;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v10;
      if ( !WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(this, *(_DWORD *)(v3 + 48)) )
      {
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "checkCityConfig",
          311);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])"city_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, city_id);
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" area_id: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v17, (const char (*)[30])byte_1A139260);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
        goto LABEL_30;
      }
      v19 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 320),
              (unsigned int *)(v3 + 48),
              city_id,
              (unsigned int *)(v3 + 48),
              v12);
      if ( !v19.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkCityConfig",
      316);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v20, (const char (*)[19])"duplicate area_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
    v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" city_id:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, city_id);
    v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v24, (const char (*)[19])" previous city_id:");
    v26 = std::unordered_map<unsigned int,unsigned int>::operator[](
            (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 320),
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, v26);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v18 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v18 != 1 )
    {
      v27 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false> *const)(v3 + 64));
  }
  v27 = 1;
LABEL_34:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v27 == 1 )
    v2 = 0;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 320));
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 325: range 000000000CB6BBB6-000000000CB6CF0F
int32_t __cdecl WorldAreaExcelConfigMgr::checkCityLevelupConfig(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t item_id; // ecx
  char v25; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  int v44; // edx
  int32_t result; // eax
  uint32_t last_level; // [rsp+14h] [rbp-32Ch]
  uint32_t last_item_id; // [rsp+18h] [rbp-328h]
  uint32_t item_num; // [rsp+1Ch] [rbp-324h]
  std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>> *__for_range; // [rsp+20h] [rbp-320h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false,false>::reference v51; // [rsp+28h] [rbp-318h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::CityLevelupConfig> > >::type *city_id; // [rsp+30h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::CityLevelupConfig> > >::type *levelup_config_vec; // [rsp+38h] [rbp-308h]
  const data::CityLevelupConfig *levelup_config; // [rsp+48h] [rbp-2F8h]
  char v55[752]; // [rsp+50h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 11 item_id:358 64 8 15 __for_begin:326 96 8 13 __for_end:326 128 8 15 __for_begin:336 16"
                        "0 8 13 __for_end:336 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>"
                        " 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::checkCityLevelupConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -202116109;
  __for_range = &this->city_levelup_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::CityLevelupConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_92;
    }
    v51 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false,false> *const)(v3 + 64));
    city_id = std::get<0ul,unsigned int const,std::vector<data::CityLevelupConfig>>(v51);
    levelup_config_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::CityLevelupConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::CityLevelupConfig>>(v51);
    if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(city_id);
    }
    v6 = *city_id;
    if ( !WorldAreaExcelConfigMgr::findCityConfig(this, v6) )
      break;
    last_level = 0;
    last_item_id = 0;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::CityLevelupConfig>::const_iterator *)(v3 + 128) = std::vector<data::CityLevelupConfig>::begin(levelup_config_vec);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<data::CityLevelupConfig>::const_iterator *)(v3 + 160) = std::vector<data::CityLevelupConfig>::end(levelup_config_vec);
    while ( __gnu_cxx::operator!=<data::CityLevelupConfig const*,std::vector<data::CityLevelupConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *)(v3 + 160)) )
    {
      levelup_config = __gnu_cxx::__normal_iterator<data::CityLevelupConfig const*,std::vector<data::CityLevelupConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *const)(v3 + 128));
      v10 = last_level + 1;
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config->level);
      }
      if ( v10 == levelup_config->level )
      {
        ++last_level;
        v15 = (((_BYTE)levelup_config + 36) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&levelup_config->consume_item.item_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)levelup_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config->consume_item.item_num >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&levelup_config->consume_item.item_num);
        }
        item_num = levelup_config->consume_item.item_num;
        if ( *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&levelup_config->level);
        }
        if ( levelup_config->level == 1 && item_num )
        {
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
            "checkCityLevelupConfig",
            348);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])"city_id: ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, city_id);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v18, (const char (*)[37])byte_1A1394C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&levelup_config->level);
          }
          if ( levelup_config->level <= 1 || item_num )
          {
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((unsigned __int64)&levelup_config->consume_item.item_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&levelup_config->consume_item.item_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&levelup_config->consume_item.item_id);
            }
            item_id = levelup_config->consume_item.item_id;
            v25 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v25 != 0 && v25 <= 3 )
            {
              LOBYTE(v15) = v25 != 0;
              __asan_report_store4(v3 + 48, v15);
            }
            *(_DWORD *)(v3 + 48) = item_id;
            if ( *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&levelup_config->level);
            }
            if ( levelup_config->level > 1
              && !ItemExcelConfigMgr::findItemConfig(&txt_config_mgr->item_config_mgr, *(unsigned int *)(v3 + 48)) )
            {
              *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 448),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                "checkCityLevelupConfig",
                361);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v27,
                      (const char (*)[10])"item_id: ");
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v28,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])byte_1A11EF60);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
              *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v14 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&levelup_config->level);
              }
              if ( levelup_config->level <= 2 )
                goto LABEL_67;
              if ( *(_BYTE *)(((unsigned __int64)&levelup_config->consume_item.item_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&levelup_config->consume_item.item_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&levelup_config->consume_item.item_id);
              }
              if ( last_item_id == levelup_config->consume_item.item_id )
              {
LABEL_67:
                if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 48);
                last_item_id = *(_DWORD *)(v3 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&levelup_config->reward_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&levelup_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&levelup_config->reward_id);
                }
                if ( levelup_config->reward_id
                  && (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                        txt_config_mgr,
                                        levelup_config->reward_id,
                                        ITEM_LIMIT_CITY_UPGRADE) != 1 )
                {
                  *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 576, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 576),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                    "checkCityLevelupConfig",
                    374);
                  v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 576),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v34,
                          (const char (*)[10])"city_id: ");
                  v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, city_id);
                  v37 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v36,
                          (const char (*)[9])" level: ");
                  v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v37,
                          &levelup_config->level);
                  v39 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          v38,
                          (const char (*)[21])byte_1A139640);
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          &levelup_config->reward_id);
                  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])byte_1A1356A0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
                  *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v14 = 0;
                }
                else if ( WorldAreaExcelConfigMgr::checkCityAction(this, txt_config_mgr, levelup_config) )
                {
                  *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 640, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 640),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                    "checkCityLevelupConfig",
                    381);
                  v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 640),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v42 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v41,
                          (const char (*)[10])"city_id: ");
                  v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, city_id);
                  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v43,
                    (const char (*)[24])" checkAreaAction failed");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                  *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v14 = 0;
                }
                else
                {
                  v14 = 1;
                }
              }
              else
              {
                *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 512, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 512),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                  "checkCityLevelupConfig",
                  366);
                v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 512),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v30,
                        (const char (*)[10])"city_id: ");
                v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, city_id);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v32, (const char (*)[35])byte_1A1395E0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
                *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v14 = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
              "checkCityLevelupConfig",
              353);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])"city_id: ");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, city_id);
            v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" level: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &levelup_config->level);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v23, (const char (*)[21])byte_1A139560);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "checkCityLevelupConfig",
          340);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])"city_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, city_id);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v13, (const char (*)[26])byte_1A139480);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v14 != 1 )
      {
        v44 = 0;
        goto LABEL_88;
      }
      __gnu_cxx::__normal_iterator<data::CityLevelupConfig const*,std::vector<data::CityLevelupConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *const)(v3 + 128));
    }
    v44 = 1;
LABEL_88:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v44 != 1 )
    {
      v9 = 0;
      goto LABEL_92;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false,false> *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
    "checkCityLevelupConfig",
    330);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         v7,
         (const char (*)[31])"findCityConfig fail! city_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, city_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v9 = 0;
LABEL_92:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v55 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 391: range 000000000CB6CF10-000000000CB6DBE4
int32_t __cdecl WorldAreaExcelConfigMgr::checkCityAction(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::CityLevelupConfig *levelup_config)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::vector<unsigned int>::const_reference v7; // rax
  _DWORD *v8; // rdx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-228h]
  std::vector<data::WorldAreaLevelupAction> *__for_range; // [rsp+30h] [rbp-220h]
  const data::WorldAreaLevelupAction *action; // [rsp+38h] [rbp-218h]
  char v32[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 8 15 __for_begin:395 64 8 13 __for_end:395 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = WorldAreaExcelConfigMgr::checkCityAction;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &levelup_config->action_vec;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, txt_config_mgr);
  *(std::vector<data::WorldAreaLevelupAction>::const_iterator *)(v4 + 32) = std::vector<data::WorldAreaLevelupAction>::begin(__for_range);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, txt_config_mgr);
  *(std::vector<data::WorldAreaLevelupAction>::const_iterator *)(v4 + 64) = std::vector<data::WorldAreaLevelupAction>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::WorldAreaLevelupAction const*,std::vector<data::WorldAreaLevelupAction>>(
            (const __gnu_cxx::__normal_iterator<const data::WorldAreaLevelupAction*,std::vector<data::WorldAreaLevelupAction> > *)(v4 + 32),
            (const __gnu_cxx::__normal_iterator<const data::WorldAreaLevelupAction*,std::vector<data::WorldAreaLevelupAction> > *)(v4 + 64)) )
    {
      v11 = 1;
      goto LABEL_58;
    }
    action = __gnu_cxx::__normal_iterator<data::WorldAreaLevelupAction const*,std::vector<data::WorldAreaLevelupAction>>::operator*((const __gnu_cxx::__normal_iterator<const data::WorldAreaLevelupAction*,std::vector<data::WorldAreaLevelupAction> > *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&action->type);
    }
    if ( action->type )
      break;
LABEL_56:
    __gnu_cxx::__normal_iterator<data::WorldAreaLevelupAction const*,std::vector<data::WorldAreaLevelupAction>>::operator++((__gnu_cxx::__normal_iterator<const data::WorldAreaLevelupAction*,std::vector<data::WorldAreaLevelupAction> > *const)(v4 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action->type);
  }
  switch ( action->type )
  {
    case WORLD_AREA_ACTION_IMPROVE_STAMINA:
      if ( std::vector<unsigned int>::size(&action->param1_vec) != 1 )
        goto LABEL_20;
      v7 = std::vector<unsigned int>::operator[](&action->param1_vec, 0LL);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      if ( *v8 )
        v9 = 0;
      else
LABEL_20:
        v9 = 1;
      if ( !v9 )
        goto LABEL_56;
      if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkCityAction",
        407);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 96),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v10, (const char (*)[54])byte_1A1397C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
      v3 = -1;
      v11 = 0;
      break;
    case WORLD_AREA_ACTION_UNLOCK_FORCE:
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config->scene_id);
      }
      if ( !WorldAreaExcelConfigMgr::checkAreaActionUnlockForce(this, txt_config_mgr, levelup_config->scene_id, action) )
        goto LABEL_56;
      if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkCityAction",
        414);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])"city_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &levelup_config->city_id);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v14, (const char (*)[35])byte_1A139820);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
      v3 = -1;
      v11 = 0;
      break;
    case WORLD_AREA_ACTION_UNLOCK_DUNGEON_ENTRANCE:
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config->scene_id);
      }
      if ( !WorldAreaExcelConfigMgr::checkAreaActionUnlockDungeonEntry(
              this,
              txt_config_mgr,
              levelup_config->scene_id,
              action) )
        goto LABEL_56;
      if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkCityAction",
        421);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])"city_id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &levelup_config->city_id);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v17, (const char (*)[44])byte_1A139880);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
      v3 = -1;
      v11 = 0;
      break;
    case WORLD_AREA_ACTION_ACTIVATE_ITEM:
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config->scene_id);
      }
      if ( !WorldAreaExcelConfigMgr::checkAreaActionActiveItem(this, txt_config_mgr, levelup_config->scene_id, action) )
        goto LABEL_56;
      if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 95) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkCityAction",
        428);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])"city_id: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &levelup_config->city_id);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v20, (const char (*)[29])byte_1A1398E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
      v3 = -1;
      v11 = 0;
      break;
    case WORLD_AREA_ACTION_UNLOCK_AIR_PORTAL:
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config->scene_id);
      }
      if ( !WorldAreaExcelConfigMgr::checkAreaActionUnlockAirPortal(
              this,
              txt_config_mgr,
              levelup_config->scene_id,
              action) )
        goto LABEL_56;
      if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkCityAction",
        438);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])"city_id: ");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &levelup_config->city_id);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v23, (const char (*)[44])byte_1A139920);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
      v3 = -1;
      v11 = 0;
      break;
    case WORLD_AREA_ACTION_NOTIFY_GROUP:
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config->scene_id);
      }
      if ( !WorldAreaExcelConfigMgr::checkAreaActionNotifyGroup(this, lua_config_mgr, levelup_config->scene_id, action) )
        goto LABEL_56;
      if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkCityAction",
        445);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])"city_id: ");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &levelup_config->city_id);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v26, (const char (*)[34])byte_1A139980);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
      v3 = -1;
      v11 = 0;
      break;
    default:
      goto LABEL_56;
  }
LABEL_58:
  if ( v11 == 1 )
    v3 = 0;
  result = v3;
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 459: range 000000000CB6DBE6-000000000CB6E208
__int64 __fastcall WorldAreaExcelConfigMgr::checkAreaActionUnlockForce(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t scene_id,
        const data::WorldAreaLevelupAction *action)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  JsonConfigMgr *p_json_config_mgr; // rsi
  int v15; // ecx
  uint32_t v16; // edx
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // eax
  __int64 result; // rax
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-158h]
  char v29[336]; // [rsp+40h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 32 4 12 force_id:465 48 4 12 scene_id:458 64 8 15 __for_begin:465 96 8 13 __for_end:465 128 16"
                        " 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = WorldAreaExcelConfigMgr::checkAreaActionUnlockForce;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -219021312;
  v7[536862726] = -218959118;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 48) = scene_id;
  if ( std::vector<unsigned int>::empty(&action->param1_vec) )
  {
    if ( *(char *)(((v5 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkAreaActionUnlockForce",
      462);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v8, (const char (*)[37])byte_1A139AE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
    v4 = -1;
  }
  else
  {
    __for_range = &action->param1_vec;
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 64) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 96) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v9 = (char *)(v5 + 96);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 96)) )
      {
        v23 = 1;
        goto LABEL_28;
      }
      *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      v13 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(v5 + 32, v9);
      }
      *(_DWORD *)(v5 + 32) = v12;
      *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
      if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 32);
      v15 = *(_DWORD *)(v5 + 32);
      v16 = *(_DWORD *)(v5 + 48);
      if ( *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findSceneForce((const JsonConfigMgr *const)(v5 + 128), p_json_config_mgr, v16, v15);
      v17 = std::operator==<data::ConfigForceField>(0LL, (const std::shared_ptr<data::ConfigForceField> *)(v5 + 128));
      std::shared_ptr<data::ConfigForceField>::~shared_ptr((std::shared_ptr<data::ConfigForceField> *const)(v5 + 128));
      *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = -1800;
      if ( v17 )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
    }
    *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 32 + 31) & 7) >= *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkAreaActionUnlockForce",
      469);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])"scene_id: ");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 48));
    v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" force_id: ");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])byte_1A139B80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
    v4 = -1;
    v23 = 0;
LABEL_28:
    if ( v23 == 1 )
      v4 = 0;
  }
  result = v4;
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
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
  return result;
};

// Line 477: range 000000000CB6E20A-000000000CB6EA8D
__int64 __fastcall WorldAreaExcelConfigMgr::checkAreaActionUnlockDungeonEntry(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t scene_id,
        const data::WorldAreaLevelupAction *action)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  JsonConfigMgr *p_json_config_mgr; // rsi
  int v15; // ecx
  uint32_t v16; // edx
  char *v17; // rsi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  char v25; // cl
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // eax
  __int64 result; // rax
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-198h]
  char v37[400]; // [rsp+40h] [rbp-190h] BYREF

  v5 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(352LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 12 point_id:483 48 4 12 scene_id:476 64 8 15 __for_begin:483 96 8 13 __for_end:483 128 16"
                        " 13 entry_ptr:485 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = WorldAreaExcelConfigMgr::checkAreaActionUnlockDungeonEntry;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -219021312;
  v7[536862726] = -218959118;
  v7[536862728] = -218959118;
  v7[536862730] = -202116109;
  *(_DWORD *)(v5 + 48) = scene_id;
  if ( std::vector<unsigned int>::empty(&action->param1_vec) )
  {
    if ( *(char *)(((v5 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkAreaActionUnlockDungeonEntry",
      480);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v8, (const char (*)[38])byte_1A139CE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
    v4 = -1;
  }
  else
  {
    __for_range = &action->param1_vec;
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 64) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 96) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v9 = (char *)(v5 + 96);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 96)) )
        break;
      *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      v13 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(v5 + 32, v9);
      }
      *(_DWORD *)(v5 + 32) = v12;
      *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
      if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 32);
      v15 = *(_DWORD *)(v5 + 32);
      v16 = *(_DWORD *)(v5 + 48);
      if ( *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findScenePoint<data::DungeonEntry>(
        (const JsonConfigMgr *const)(v5 + 128),
        p_json_config_mgr,
        v16,
        v15);
      v17 = (char *)(v5 + 128);
      if ( std::operator==<data::DungeonEntry>(0LL, (const std::shared_ptr<data::DungeonEntry> *)(v5 + 128)) )
      {
        *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 1) & 7) >= *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "checkAreaActionUnlockDungeonEntry",
          488);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])"scene_id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v5 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" point_id: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])byte_1A139D40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
        *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
        v23 = 0;
      }
      else
      {
        v24 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        v25 = *(_BYTE *)(((unsigned __int64)&v24->unlocked >> 3) + 0x7FFF8000);
        if ( v25 != 0 && (((unsigned __int8)v24 + 100) & 7) >= v25 )
        {
          LOBYTE(v17) = v25 != 0;
          __asan_report_load1(&v24->unlocked, v17, v24);
        }
        if ( v24->unlocked )
        {
          *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 63) & 7) >= *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
            "checkAreaActionUnlockDungeonEntry",
            493);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])"scene_id: ");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v5 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v28, (const char (*)[12])" point_id: ");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v30, (const char (*)[23])byte_1A139D80);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 288));
          *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v23 = 0;
        }
        else
        {
          v23 = 1;
        }
      }
      std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v5 + 128));
      *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = -1800;
      if ( v23 != 1 )
      {
        v31 = 0;
        goto LABEL_37;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
    }
    v31 = 1;
LABEL_37:
    if ( v31 == 1 )
      v4 = 0;
  }
  result = v4;
  if ( v37 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 501: range 000000000CB6EA8E-000000000CB6F4FB
__int64 __fastcall WorldAreaExcelConfigMgr::checkAreaActionUnlockAirPortal(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t scene_id,
        const data::WorldAreaLevelupAction *action)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  JsonConfigMgr *p_json_config_mgr; // rsi
  int v15; // ecx
  uint32_t v16; // edx
  char *v17; // rsi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  char v25; // cl
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int v37; // eax
  __int64 result; // rax
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-1D8h]
  char v43[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v5 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(416LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 32 4 12 point_id:507 48 4 12 scene_id:500 64 8 15 __for_begin:507 96 8 13 __for_end:507 128 16"
                        " 13 point_ptr:509 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = WorldAreaExcelConfigMgr::checkAreaActionUnlockAirPortal;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -219021312;
  v7[536862726] = -218959118;
  v7[536862728] = -218959118;
  v7[536862730] = -218959118;
  v7[536862732] = -202116109;
  *(_DWORD *)(v5 + 48) = scene_id;
  if ( std::vector<unsigned int>::empty(&action->param1_vec) )
  {
    if ( *(char *)(((v5 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 31) & 7) >= *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkAreaActionUnlockAirPortal",
      504);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v8, (const char (*)[38])byte_1A139CE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
    v4 = -1;
  }
  else
  {
    __for_range = &action->param1_vec;
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 64) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 96) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v9 = (char *)(v5 + 96);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 96)) )
        break;
      *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      v13 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(v5 + 32, v9);
      }
      *(_DWORD *)(v5 + 32) = v12;
      *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
      if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 32);
      v15 = *(_DWORD *)(v5 + 32);
      v16 = *(_DWORD *)(v5 + 48);
      if ( *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
        (const JsonConfigMgr *const)(v5 + 128),
        p_json_config_mgr,
        v16,
        v15);
      v17 = (char *)(v5 + 128);
      if ( std::operator==<data::SceneTransPoint>(0LL, (const std::shared_ptr<data::SceneTransPoint> *)(v5 + 128)) )
      {
        *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 96 + 95) & 7) >= *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "checkAreaActionUnlockAirPortal",
          512);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])"scene_id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v5 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" point_id: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])byte_1A139D40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
        *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
        v23 = 0;
      }
      else
      {
        v24 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        v25 = *(_BYTE *)(((unsigned __int64)&v24->unlocked >> 3) + 0x7FFF8000);
        if ( v25 != 0 && (((unsigned __int8)v24 + 100) & 7) >= v25 )
        {
          LOBYTE(v17) = v25 != 0;
          __asan_report_load1(&v24->unlocked, v17, v24);
        }
        if ( v24->unlocked )
        {
          *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 63) & 7) >= *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
            "checkAreaActionUnlockAirPortal",
            517);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])"scene_id: ");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v5 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v28, (const char (*)[12])" point_id: ");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v30, (const char (*)[23])byte_1A139D80);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 288));
          *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v23 = 0;
        }
        else
        {
          v31 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&v31->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v31->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v31->type);
          }
          if ( v31->type == PORTAL )
          {
            v23 = 1;
          }
          else
          {
            *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 352) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 352, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 352),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
              "checkAreaActionUnlockAirPortal",
              522);
            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])"scene_id: ");
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v5 + 48));
            v35 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v34,
                    (const char (*)[12])" point_id: ");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v5 + 32));
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v36, (const char (*)[23])byte_1A139EC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
            *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v4 = -1;
            v23 = 0;
          }
        }
      }
      std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v5 + 128));
      *(_WORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = -1800;
      if ( v23 != 1 )
      {
        v37 = 0;
        goto LABEL_43;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
    }
    v37 = 1;
LABEL_43:
    if ( v37 == 1 )
      v4 = 0;
  }
  result = v4;
  if ( v43 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 530: range 000000000CB6F4FC-000000000CB6FBBC
int32_t __cdecl WorldAreaExcelConfigMgr::checkAreaActionActiveItem(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t scene_id,
        const data::WorldAreaLevelupAction *action)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  __int64 v10; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v15; // rax
  uint32_t *v16; // rdx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t new_gadget_id; // [rsp+2Ch] [rbp-134h]
  const data::GadgetExcelConfig *old_gadget_config_ptr; // [rsp+30h] [rbp-130h]
  const data::GadgetExcelConfig *new_gadget_config_ptr; // [rsp+38h] [rbp-128h]
  char v29[288]; // [rsp+40h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 17 old_gadget_id:536 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = WorldAreaExcelConfigMgr::checkAreaActionActiveItem;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  if ( std::vector<unsigned int>::size(&action->param1_vec) != 1
    && std::vector<unsigned int>::size(&action->param2_vec) != 1 )
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkAreaActionActiveItem",
      533);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v8, (const char (*)[47])byte_1A139FA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = -1;
  }
  else
  {
    v10 = 0LL;
    v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &action->param1_vec,
                                                                                                0LL);
    v12 = (int *)v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v13 = *v12;
    v14 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
    if ( v14 != 0 && v14 <= 3 )
    {
      LOBYTE(v10) = v14 != 0;
      __asan_report_store4(v4 + 48, v10);
    }
    *(_DWORD *)(v4 + 48) = v13;
    v15 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &action->param2_vec,
                                                                                                0LL);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    new_gadget_id = *v16;
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 48);
    old_gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                              p_gadget_config_mgr,
                              *(unsigned int *)(v4 + 48));
    if ( !old_gadget_config_ptr )
      goto LABEL_40;
    if ( *(_BYTE *)(((unsigned __int64)&old_gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)old_gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&old_gadget_config_ptr->type >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&old_gadget_config_ptr->type);
    }
    if ( old_gadget_config_ptr->type == AmberWind )
    {
      new_gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                                &txt_config_mgr->gadget_config_mgr,
                                new_gadget_id);
      if ( !new_gadget_config_ptr )
        goto LABEL_41;
      if ( *(_BYTE *)(((unsigned __int64)&new_gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)new_gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&new_gadget_config_ptr->type >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&new_gadget_config_ptr->type);
      }
      if ( new_gadget_config_ptr->type == AmberWind )
      {
        result = 0;
      }
      else
      {
LABEL_41:
        if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "checkAreaActionActiveItem",
          547);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v21, (const char (*)[19])byte_1A13A000);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v23, (const char (*)[25])byte_1A13A040);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        result = -1;
      }
    }
    else
    {
LABEL_40:
      if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
        "checkAreaActionActiveItem",
        541);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])byte_1A13A000);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v20, (const char (*)[25])byte_1A13A040);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      result = -1;
    }
  }
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 554: range 000000000CB6FBBE-000000000CB7009A
int32_t __cdecl WorldAreaExcelConfigMgr::checkAreaActionNotifyGroup(
        const WorldAreaExcelConfigMgr *const this,
        const LuaConfigMgr *lua_config_mgr,
        uint32_t scene_id,
        const data::WorldAreaLevelupAction *action)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  int32_t result; // eax
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  char v22[304]; // [rsp+30h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 12 group_id:561 64 8 15 __for_begin:561 96 8 13 __for_end:561 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = WorldAreaExcelConfigMgr::checkAreaActionNotifyGroup;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862725] = -218959118;
  v7[536862727] = -202116109;
  if ( std::vector<unsigned int>::empty(&action->param1_vec) )
  {
    if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkAreaActionNotifyGroup",
      558);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v8, (const char (*)[29])byte_1A13A140);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 128));
    v4 = -1;
  }
  else
  {
    __for_range = &action->param1_vec;
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, lua_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 64) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, lua_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 96) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v9 = (char *)(v5 + 96);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 96)) )
      {
        v17 = 1;
        goto LABEL_24;
      }
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      v13 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(v5 + 48, v9);
      }
      *(_DWORD *)(v5 + 48) = v12;
      if ( !LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *(_DWORD *)(v5 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
    }
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
      "checkAreaActionNotifyGroup",
      565);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v14, (const char (*)[20])byte_1A13A180);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1A117C40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    v4 = -1;
    v17 = 0;
LABEL_24:
    if ( v17 == 1 )
      v4 = 0;
  }
  result = v4;
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 573: range 000000000CB7009C-000000000CB7180D
int32_t __cdecl WorldAreaExcelConfigMgr::checkTransPointRewardConfig(
        const WorldAreaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  int v7; // ecx
  uint32_t v8; // edx
  char *reward_id; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  _BOOL4 v15; // r15d
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const char *v24; // rsi
  unsigned int *v25; // rax
  int *v26; // rdx
  int v27; // ecx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // edx
  char *v37; // rsi
  unsigned int *v38; // rax
  int *v39; // rdx
  int v40; // ecx
  char v41; // al
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  int v49; // eax
  __int64 v50; // rsi
  uint32_t SceneIdByLevel1AreaId; // edx
  char v52; // al
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  int v71; // edx
  int v72; // edx
  int v73; // edx
  JsonConfigMgr *json_config_mgr; // [rsp+20h] [rbp-3F0h]
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-3E8h]
  std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>> *__for_range; // [rsp+30h] [rbp-3E0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > >::reference v79; // [rsp+38h] [rbp-3D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > >::type *scene_id; // [rsp+40h] [rbp-3D0h]
  const std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > >::type *__for_range_0; // [rsp+50h] [rbp-3C0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> >::reference v82; // [rsp+58h] [rbp-3B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::TransPointRewardConfig> >::type *point_id; // [rsp+60h] [rbp-3B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TransPointRewardConfig> >::type *reward_config; // [rsp+68h] [rbp-3A8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-3A0h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+78h] [rbp-398h]
  char v87[912]; // [rsp+80h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 48 4 12 group_id:596 64 4 11 area_id:606 80 4 19 expect_scene_id:614 96 8 15 __for_begin:578 "
                        "128 8 13 __for_end:578 160 8 15 __for_begin:580 192 8 13 __for_end:580 224 8 15 __for_begin:596 "
                        "256 8 13 __for_end:596 288 8 15 __for_begin:606 320 8 13 __for_end:606 352 16 13 point_ptr:582 3"
                        "84 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 70"
                        "4 32 9 <unknown> 768 56 22 unlock_area_id_set:577";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::checkTransPointRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -219021312;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 768));
  __for_range = &this->trans_point_reward_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > >::_Self *)(v3 + 96),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > >::_Self *)(v3 + 128)) )
      break;
    v79 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > > *const)(v3 + 96));
    scene_id = std::get<0ul,unsigned int const,std::map<unsigned int,data::TransPointRewardConfig>>(v79);
    __for_range_0 = std::get<1ul,unsigned int const,std::map<unsigned int,data::TransPointRewardConfig>>(v79);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::map<unsigned int,data::TransPointRewardConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::TransPointRewardConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::map<unsigned int,data::TransPointRewardConfig>::const_iterator *)(v3 + 192) = std::map<unsigned int,data::TransPointRewardConfig>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> >::_Self *)(v3 + 160),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> >::_Self *)(v3 + 192)) )
    {
      v82 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> > *const)(v3 + 160));
      point_id = std::get<0ul,unsigned int const,data::TransPointRewardConfig>(v82);
      reward_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TransPointRewardConfig> >::type *)std::get<1ul,unsigned int const,data::TransPointRewardConfig>(v82);
      *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(point_id);
      }
      v7 = *point_id;
      if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(scene_id);
      }
      v8 = *scene_id;
      if ( *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
        (const JsonConfigMgr *const)(v3 + 352),
        json_config_mgr,
        v8,
        v7);
      reward_id = (char *)(v3 + 352);
      if ( std::operator==<data::SceneTransPoint>(0LL, (const std::shared_ptr<data::SceneTransPoint> *)(v3 + 352)) )
      {
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
          "checkTransPointRewardConfig",
          585);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])"Scene_id: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, scene_id);
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" point_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, point_id);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])byte_1A11E460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&reward_config->reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&reward_config->reward_id);
        }
        if ( reward_config->reward_id
          && (reward_id = (char *)reward_config->reward_id,
              (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                 txt_config_mgr,
                                 (uint32_t)reward_id,
                                 ITEM_LIMIT_UNLOCK_TRANS_POINT) ^ 1) )
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
            "checkTransPointRewardConfig",
            591);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])"scene_id: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, scene_id);
          v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" point_id: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, point_id);
          v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v21, (const char (*)[21])byte_1A139640);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &reward_config->reward_id);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])byte_1A1356A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        else
        {
          __for_range_1 = &reward_config->group_id_vec;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, reward_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, reward_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
          while ( 1 )
          {
            v24 = (const char *)(v3 + 256);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
            {
              v36 = 1;
              goto LABEL_52;
            }
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            v25 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
            v26 = (int *)v25;
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v25);
            }
            v27 = *v26;
            v28 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v28 != 0 && v28 <= 3 )
            {
              LOBYTE(v24) = v28 != 0;
              __asan_report_store4(v3 + 48, v24);
            }
            *(_DWORD *)(v3 + 48) = v27;
            if ( !LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *(_DWORD *)(v3 + 48)) )
              break;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
          }
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
            "checkTransPointRewardConfig",
            600);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])"scene_id: ");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, scene_id);
          v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" point_id: ");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, point_id);
          v34 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v33, (const char (*)[20])byte_1A13A180);
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v3 + 48));
          v24 = byte_1A117C40;
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])byte_1A117C40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v36 = 0;
LABEL_52:
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( v36 == 1 )
          {
            __for_range_2 = &reward_config->unlock_area_id_vec;
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 288, v24);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 320, v24);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
            while ( 1 )
            {
              v37 = (char *)(v3 + 320);
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
                break;
              *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
              v38 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
              v39 = (int *)v38;
              if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v38);
              }
              v40 = *v39;
              v41 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
              if ( v41 != 0 && v41 <= 3 )
              {
                LOBYTE(v37) = v41 != 0;
                __asan_report_store4(v3 + 64, v37);
              }
              *(_DWORD *)(v3 + 64) = v40;
              if ( WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(this, *(_DWORD *)(v3 + 64)) )
              {
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 64);
                v50 = *(unsigned int *)(v3 + 64);
                SceneIdByLevel1AreaId = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(this, v50);
                v52 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
                if ( v52 != 0 && v52 <= 3 )
                {
                  LOBYTE(v50) = v52 != 0;
                  __asan_report_store4(v3 + 80, v50);
                }
                *(_DWORD *)(v3 + 80) = SceneIdByLevel1AreaId;
                if ( !*(_DWORD *)(v3 + 80) )
                  goto LABEL_76;
                if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(scene_id);
                }
                if ( *scene_id == *(_DWORD *)(v3 + 80) )
                {
                  v63 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
                          (std::unordered_set<unsigned int> *const)(v3 + 768),
                          (unsigned int *)(v3 + 64),
                          (unsigned int *)(v3 + 64));
                  if ( !v63.second )
                  {
                    *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 704, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 704),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                      "checkTransPointRewardConfig",
                      623);
                    v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 704),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v65 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v64,
                            (const char (*)[11])"scene_id: ");
                    v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, scene_id);
                    v67 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v66,
                            (const char (*)[12])" point_id: ");
                    v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, point_id);
                    v69 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                            v68,
                            (const char (*)[25])byte_1A13A400);
                    v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v69,
                            (const unsigned int *)(v3 + 64));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v70, (const char (*)[7])byte_1A11D660);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
                    *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v49 = 0;
                  }
                  else
                  {
                    v49 = 1;
                  }
                }
                else
                {
LABEL_76:
                  *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 640, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 640),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                    "checkTransPointRewardConfig",
                    617);
                  v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 640),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          v53,
                          (const char (*)[11])"scene_id: ");
                  v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, scene_id);
                  v56 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v55,
                          (const char (*)[12])" point_id: ");
                  v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, point_id);
                  v58 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                          v57,
                          (const char (*)[25])byte_1A13A400);
                  v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v58,
                          (const unsigned int *)(v3 + 64));
                  v60 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v59,
                          (const char (*)[17])byte_1A13A440);
                  v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v60,
                          (const unsigned int *)(v3 + 80));
                  v62 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v61,
                          (const char (*)[17])byte_1A13A480);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, scene_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                  *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v49 = 0;
                }
              }
              else
              {
                *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 576, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 576),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/WorldAreaExcelConfig.cpp",
                  "checkTransPointRewardConfig",
                  610);
                v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 576),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v42,
                        (const char (*)[11])"scene_id: ");
                v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, scene_id);
                v45 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v44,
                        (const char (*)[12])" point_id: ");
                v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, point_id);
                v47 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        v46,
                        (const char (*)[25])byte_1A13A400);
                v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v48, (const char (*)[7])byte_1A117C40);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
                *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v49 = 0;
              }
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
              if ( v49 != 1 )
              {
                v71 = 0;
                goto LABEL_88;
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
            }
            v71 = 1;
LABEL_88:
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
            v15 = v71 == 1;
          }
          else
          {
            v15 = 0;
          }
        }
      }
      std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 352));
      *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -1800;
      if ( !v15 )
      {
        v72 = 0;
        goto LABEL_93;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> > *const)(v3 + 160));
    }
    v72 = 1;
LABEL_93:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v72 != 1 )
    {
      v73 = 0;
      goto LABEL_97;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > > *const)(v3 + 96));
  }
  v73 = 1;
LABEL_97:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v73 == 1 )
    v2 = 0;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 768));
  if ( v87 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v2;
};

// Line 633: range 000000000CB7180E-000000000CB719F0
const data::WorldAreaConfig *__fastcall WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(
        const WorldAreaExcelConfigMgr *const this,
        __int64 level1_area_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::WorldAreaConfig*> *p_first_level_area_config_map; // rdx
  std::unordered_map<unsigned int,data::WorldAreaConfig*> *v6; // rdx
  bool v7; // al
  const data::WorldAreaConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 level1_area_id:632 64 8 8 iter:634 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level1_area_id;
  p_first_level_area_config_map = &this->first_level_area_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level1_area_id);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WorldAreaConfig *>::find(
                                                                                            p_first_level_area_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::WorldAreaConfig*>::key_type *)(v2 + 48));
  v6 = &this->first_level_area_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WorldAreaConfig *>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::WorldAreaConfig *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 643: range 000000000CB719F2-000000000CB71BD4
const data::WorldAreaConfig *__fastcall WorldAreaExcelConfigMgr::findSecondLevelWorldAreaConfig(
        const WorldAreaExcelConfigMgr *const this,
        __int64 level2_area_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::WorldAreaConfig*> *p_second_level_area_config_map; // rdx
  std::unordered_map<unsigned int,data::WorldAreaConfig*> *v6; // rdx
  bool v7; // al
  const data::WorldAreaConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 level2_area_id:642 64 8 8 iter:644 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WorldAreaExcelConfigMgr::findSecondLevelWorldAreaConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level2_area_id;
  p_second_level_area_config_map = &this->second_level_area_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level2_area_id);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WorldAreaConfig *>::find(
                                                                                            p_second_level_area_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::WorldAreaConfig*>::key_type *)(v2 + 48));
  v6 = &this->second_level_area_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WorldAreaConfig *>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::WorldAreaConfig *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WorldAreaConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 654: range 000000000CB71C66-000000000CB71F74
__gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> >::reference __fastcall WorldAreaExcelConfigMgr::findCityLevelupConfig(
        const WorldAreaExcelConfigMgr *const this,
        __int64 city_id,
        WorldAreaExcelConfigMgr::findCityLevelupConfig::<lambda(const data::CityLevelupConfig&)> level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>> *p_city_levelup_config_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>> *v7; // rdx
  bool v8; // al
  __gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> >::reference result; // rax
  const data::CityLevelupConfig *M_current; // r15
  const data::CityLevelupConfig *v11; // rcx
  bool v12; // al
  std::vector<data::CityLevelupConfig> *config_vec; // [rsp+28h] [rbp-F8h]
  char v15[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 city_id:653 64 8 13 city_iter:655 96 8 9 <unknown> 128 8 8 iter:663 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::findCityLevelupConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = city_id;
  p_city_levelup_config_map = &this->city_levelup_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, city_id);
  *(std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::find(p_city_levelup_config_map, (const std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::key_type *)(v3 + 48));
  v7 = &this->city_levelup_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<data::CityLevelupConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<data::CityLevelupConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    config_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::CityLevelupConfig> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    M_current = std::vector<data::CityLevelupConfig>::end(config_vec)._M_current;
    v11 = std::vector<data::CityLevelupConfig>::begin(config_vec)._M_current;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(__gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *)(v3 + 128) = std::find_if<__gnu_cxx::__normal_iterator<data::CityLevelupConfig const*,std::vector<data::CityLevelupConfig>>,WorldAreaExcelConfigMgr::findCityLevelupConfig(unsigned int,unsigned int)::{lambda(data::CityLevelupConfig const&)#1}>((__gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> >)v11, (__gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> >)M_current, level);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, M_current);
    *(std::vector<data::CityLevelupConfig>::const_iterator *)(v3 + 160) = std::vector<data::CityLevelupConfig>::end(config_vec);
    v12 = __gnu_cxx::operator!=<data::CityLevelupConfig const*,std::vector<data::CityLevelupConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *)(v3 + 128),
            (const __gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
      result = __gnu_cxx::__normal_iterator<data::CityLevelupConfig const*,std::vector<data::CityLevelupConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::CityLevelupConfig*,std::vector<data::CityLevelupConfig> > *const)(v3 + 128));
    else
      result = 0LL;
  }
  if ( v15 == (char *)v3 )
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
  return result;
};

// Line 663: range 000000000CB71BD6-000000000CB71C64
bool __cdecl WorldAreaExcelConfigMgr::findCityLevelupConfig(unsigned int,unsigned int)const::{lambda(data::CityLevelupConfig const&)#1}::operator()(
        const WorldAreaExcelConfigMgr::findCityLevelupConfig::<lambda(const data::CityLevelupConfig&)> *const __closure,
        const data::CityLevelupConfig *config)
{
  uint32_t level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->level);
  }
  level = config->level;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return level == __closure->__level;
};

// Line 672: range 000000000CB71F76-000000000CB72263
const data::TransPointRewardConfig *__fastcall WorldAreaExcelConfigMgr::findTransPointRewardConfig(
        const WorldAreaExcelConfigMgr *const this,
        __int64 scene_id,
        uint32_t point_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>> *p_trans_point_reward_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>> *v7; // rdx
  bool v8; // al
  const data::TransPointRewardConfig *result; // rax
  std::map<unsigned int,data::TransPointRewardConfig> *p_second; // rdx
  std::map<unsigned int,data::TransPointRewardConfig> *v11; // rdx
  bool v12; // al
  char v14[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 scene_id:671 48 4 12 point_id:671 64 8 14 scene_iter:673 96 8 9 <unknown> 128 8 14 poi"
                        "nt_iter:678 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WorldAreaExcelConfigMgr::findTransPointRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = scene_id;
  *(_DWORD *)(v3 + 48) = point_id;
  p_trans_point_reward_map = &this->trans_point_reward_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, scene_id);
  *(std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::find(p_trans_point_reward_map, (const std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::key_type *)(v3 + 32));
  v7 = &this->trans_point_reward_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::TransPointRewardConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::TransPointRewardConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::TransPointRewardConfig>::find(
                                                                                           p_second,
                                                                                           (const std::map<unsigned int,data::TransPointRewardConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::TransPointRewardConfig> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::TransPointRewardConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::TransPointRewardConfig>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TransPointRewardConfig> > *const)(v3 + 128))->second;
  }
  if ( v14 == (char *)v3 )
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
  return result;
};

// Line 687: range 000000000CB72264-000000000CB72425
const data::CityConfig *__fastcall WorldAreaExcelConfigMgr::findCityConfig(
        const WorldAreaExcelConfigMgr *const this,
        __int64 city_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::CityConfig> *p_city_config_map; // rdx
  std::unordered_map<unsigned int,data::CityConfig> *v6; // rdx
  bool v7; // al
  const data::CityConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 city_id:686 64 8 8 iter:688 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WorldAreaExcelConfigMgr::findCityConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = city_id;
  p_city_config_map = &this->city_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, city_id);
  *(std::unordered_map<unsigned int,data::CityConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CityConfig>::find(
                                                                                      p_city_config_map,
                                                                                      (const std::unordered_map<unsigned int,data::CityConfig>::key_type *)(v2 + 48));
  v6 = &this->city_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CityConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CityConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CityConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CityConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CityConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 698: range 000000000CB72426-000000000CB72621
__int64 __fastcall WorldAreaExcelConfigMgr::findAreaCityId(const WorldAreaExcelConfigMgr *const this, __int64 area_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_area_to_city_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 area_id:697 64 8 8 iter:699 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WorldAreaExcelConfigMgr::findAreaCityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = area_id;
  p_area_to_city_map = &this->area_to_city_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, area_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_area_to_city_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->area_to_city_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 710: range 000000000CB72622-000000000CB72697
uint32_t __cdecl WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(
        const WorldAreaExcelConfigMgr *const this,
        uint32_t level1_area_id)
{
  const data::WorldAreaConfig *area_config_ptr; // [rsp+18h] [rbp-8h]

  area_config_ptr = WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(this, level1_area_id);
  if ( !area_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&area_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)area_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&area_config_ptr->scene_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&area_config_ptr->scene_id);
  }
  return area_config_ptr->scene_id;
};

// Line 720: range 000000000CB72698-000000000CB7270D
uint32_t __cdecl WorldAreaExcelConfigMgr::findSceneIdByLevel2AreaId(
        const WorldAreaExcelConfigMgr *const this,
        uint32_t level2_area_id)
{
  const data::WorldAreaConfig *area_config_ptr; // [rsp+18h] [rbp-8h]

  area_config_ptr = WorldAreaExcelConfigMgr::findSecondLevelWorldAreaConfig(this, level2_area_id);
  if ( !area_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&area_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)area_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&area_config_ptr->scene_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&area_config_ptr->scene_id);
  }
  return area_config_ptr->scene_id;
};
