// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMusicGameConfig.cpp

// Line 18: range 0000000012C94EE6-0000000012C950C9
int32_t __cdecl ActivityMusicGameConfigMgr::rewriteConfig(
        ActivityMusicGameConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMusicGameConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityMusicGameConfigMgr::rewriteMusicInfoExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
      "rewriteConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v5,
      (const char (*)[35])"rewriteMusicInfoExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
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

// Line 28: range 0000000012C950CA-0000000012C95FF0
int32_t __cdecl ActivityMusicGameConfigMgr::checkConfig(
        ActivityMusicGameConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  _BOOL4 v9; // eax
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  uint32_t music_id; // ecx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t music_level; // ecx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int v37; // edx
  common::milog::MiLogStream *v38; // rax
  int32_t result; // eax
  data::MusicInfoConfigMap *__for_range; // [rsp+10h] [rbp-2A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::reference v42; // [rsp+18h] [rbp-298h]
  std::tuple_element<0,std::pair<unsigned int const,data::MusicInfoConfig> >::type *id; // [rsp+20h] [rbp-290h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MusicInfoConfig> >::type *info_config; // [rsp+28h] [rbp-288h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-280h]
  data::MusicGameBasicConfig *basic_config_ptr; // [rsp+38h] [rbp-278h]
  char v47[624]; // [rsp+40h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 8 level:36 48 4 11 basic_id:37 64 8 14 __for_begin:29 96 8 12 __for_end:29 128 8 14 __fo"
                        "r_begin:37 160 8 12 __for_end:37 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32"
                        " 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMusicGameConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -202116109;
  __for_range = &this->music_info_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MusicInfoConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MusicInfoConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MusicInfoConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MusicInfoConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MusicInfoConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MusicInfoConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MusicInfoConfig>,false> *)(v3 + 96)) )
      break;
    v42 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::MusicInfoConfig>(v42);
    info_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MusicInfoConfig> >::type *)std::get<1ul,unsigned int const,data::MusicInfoConfig>(v42);
    if ( std::vector<unsigned int>::size(&info_config->level_id) == 3 )
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, v6);
      *(_DWORD *)(v3 + 32) = 0;
      __for_range_0 = &info_config->level_id;
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
        v10 = (char *)(v3 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        {
          v17 = 1;
          goto LABEL_54;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
        v12 = (int *)v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        v13 = *v12;
        v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v10) = v14 != 0;
          __asan_report_store4(v3 + 48, v10);
        }
        *(_DWORD *)(v3 + 48) = v13;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        ++*(_DWORD *)(v3 + 32);
        basic_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameBasicConfig(
                             this,
                             *(unsigned int *)(v3 + 48));
        if ( !basic_config_ptr )
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
            "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
            "checkConfig",
            43);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v15, (const char (*)[35])byte_1AA6F460);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
          goto LABEL_54;
        }
        if ( *(_BYTE *)(((unsigned __int64)&basic_config_ptr->music_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)basic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&basic_config_ptr->music_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&basic_config_ptr->music_id);
        }
        music_id = basic_config_ptr->music_id;
        if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(id);
        }
        if ( music_id != *id )
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
            "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
            "checkConfig",
            48);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v19, (const char (*)[35])byte_1AA6F4C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
          goto LABEL_54;
        }
        if ( *(_BYTE *)(((unsigned __int64)&basic_config_ptr->music_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&basic_config_ptr->music_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&basic_config_ptr->music_level);
        }
        music_level = basic_config_ptr->music_level;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        if ( music_level != *(_DWORD *)(v3 + 32) )
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
            "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
            "checkConfig",
            53);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])"music_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
          v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])" level_id:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v3 + 48));
          v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])" level:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  &basic_config_ptr->music_level);
          v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" is not:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
          goto LABEL_54;
        }
        if ( std::vector<unsigned int>::empty(&basic_config_ptr->score_level_list) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      }
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
        "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
        "checkConfig",
        58);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])"music_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
      v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" level_id:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 48));
      v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])" level:");
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &basic_config_ptr->music_level);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v36,
        (const char (*)[28])" score_level_list is empty!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
LABEL_54:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      v9 = v17 == 1;
    }
    else
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
        "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
        "checkConfig",
        33);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v7, (const char (*)[28])byte_1AA6F420);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !v9 )
    {
      v37 = 0;
      goto LABEL_59;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false> *const)(v3 + 64));
  }
  v37 = 1;
LABEL_59:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v37 == 1 )
  {
    if ( ActivityMusicGameConfigMgr::checkMusicRiddleConfig(this, txt_config_mgr) )
    {
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
        "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
        "checkConfig",
        67);
      v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        v38,
        (const char (*)[30])"checkMusicRiddleConfig failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      v2 = -1;
    }
    else
    {
      v2 = 0;
    }
  }
  result = v2;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 75: range 0000000012C95FF2-0000000012C96883
int32_t __cdecl ActivityMusicGameConfigMgr::checkMusicRiddleConfig(
        ActivityMusicGameConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  unsigned __int64 v6; // rax
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  unsigned __int64 v23; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1F4h]
  data::MusicRiddleConfigMap *__for_range; // [rsp+20h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicRiddleConfig>,false,false>::reference v28; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MusicRiddleConfig> >::type *music_riddle_id; // [rsp+30h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MusicRiddleConfig> >::type *music_riddle_config; // [rsp+38h] [rbp-1D8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1D0h]
  const data::MusicRiddlePlayConfig *music_riddle_play_config_ptr; // [rsp+48h] [rbp-1C8h]
  char v33[448]; // [rsp+50h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 10 play_id:80 64 8 14 __for_begin:77 96 8 12 __for_end:77 128 8 14 __for_begin:80 160 8 1"
                        "2 __for_end:80 192 32 9 <unknown> 256 32 9 <unknown> 320 56 16 widget_id_set:79";
  *(_QWORD *)(v2 + 16) = ActivityMusicGameConfigMgr::checkMusicRiddleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218103808;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->music_riddle_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MusicRiddleConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MusicRiddleConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MusicRiddleConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MusicRiddleConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MusicRiddleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MusicRiddleConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MusicRiddleConfig>,false> *)(v2 + 96)) )
      break;
    v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicRiddleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicRiddleConfig>,false,false> *const)(v2 + 64));
    music_riddle_id = std::get<0ul,unsigned int const,data::MusicRiddleConfig>(v28);
    music_riddle_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MusicRiddleConfig> >::type *)std::get<1ul,unsigned int const,data::MusicRiddleConfig>(v28);
    v6 = ((v2 + 320) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    *(_BYTE *)(v6 + 6) = 0;
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 320));
    __for_range_0 = &music_riddle_config->play_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = v10;
      music_riddle_play_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicRiddlePlayConfig(
                                       &txt_config_mgr->activity_music_game_config_mgr,
                                       *(unsigned int *)(v2 + 48));
      if ( music_riddle_play_config_ptr )
      {
        v16 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(
                (std::unordered_set<unsigned int> *const)(v2 + 320),
                &music_riddle_play_config_ptr->material_id,
                &music_riddle_play_config_ptr->material_id);
        if ( !v16.second )
        {
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
            "checkMusicRiddleConfig",
            91);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v17,
                  (const char (*)[24])"dumplicate material_id:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  &music_riddle_play_config_ptr->material_id);
          v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])", play_id:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v21,
                  (const char (*)[19])", music_riddle_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, music_riddle_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
          "checkMusicRiddleConfig",
          85);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v12,
                (const char (*)[41])"MusicRiddlePlayConfig not find, play_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v14,
                (const char (*)[19])", music_riddle_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, music_riddle_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 320));
    v23 = ((v2 + 320) >> 3) + 2147450880;
    *(_DWORD *)v23 = -117901064;
    *(_WORD *)(v23 + 4) = -1800;
    *(_BYTE *)(v23 + 6) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicRiddleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicRiddleConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 100: range 0000000012C96884-0000000012C96A7F
__int64 __fastcall ActivityMusicGameConfigMgr::findMusicBasicIdByMusicId(
        const ActivityMusicGameConfigMgr *const this,
        __int64 music_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_music_id_2_music_basic_id_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 music_id:99 64 8 8 iter:101 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMusicGameConfigMgr::findMusicBasicIdByMusicId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = music_id;
  p_music_id_2_music_basic_id_map = &this->music_id_2_music_basic_id_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, music_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_music_id_2_music_basic_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->music_id_2_music_basic_id_map;
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

// Line 110: range 0000000012C96A80-0000000012C96C7B
__int64 __fastcall ActivityMusicGameConfigMgr::findPreWatcherIdByWatcherId(
        const ActivityMusicGameConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_watcher_id_2_prev_watcher_id_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 watcher_id:109 64 8 8 iter:111 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMusicGameConfigMgr::findPreWatcherIdByWatcherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  p_watcher_id_2_prev_watcher_id_map = &this->watcher_id_2_prev_watcher_id_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_watcher_id_2_prev_watcher_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->watcher_id_2_prev_watcher_id_map;
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

// Line 120: range 0000000012C96C7C-0000000012C96C8F
const std::unordered_set<unsigned int> *__cdecl ActivityMusicGameConfigMgr::getCondWatcherIdSet(
        const ActivityMusicGameConfigMgr *const this)
{
  return &this->cond_watcher_id_set;
};

// Line 125: range 0000000012C96C90-0000000012C97B36
int32_t __cdecl ActivityMusicGameConfigMgr::rewriteMusicInfoExcelConfig(
        ActivityMusicGameConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t music_id; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // edx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  int *v13; // rdx
  int v14; // r15d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  char v17; // cl
  int v18; // edx
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  std::vector<unsigned int>::reference v21; // rax
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // eax
  std::vector<unsigned int>::size_type v31; // rsi
  std::vector<unsigned int>::reference v32; // rax
  int *v33; // rdx
  int v34; // ecx
  char v35; // al
  std::unordered_map<unsigned int,unsigned int> *p_watcher_id_2_prev_watcher_id_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v37; // rdx
  bool v38; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  int v45; // r15d
  char *v46; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v47; // rax
  _DWORD *v48; // rdx
  char v49; // cl
  int v50; // r15d
  unsigned __int64 v51; // rax
  int v52; // eax
  int32_t result; // eax
  int idx; // [rsp+2Ch] [rbp-294h]
  data::MusicInfoConfigMap *__for_range; // [rsp+30h] [rbp-290h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::reference v56; // [rsp+38h] [rbp-288h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MusicInfoConfig> >::type *music_info_config; // [rsp+48h] [rbp-278h]
  data::MusicInfoConfigMap *__for_range_0; // [rsp+50h] [rbp-270h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::reference v59; // [rsp+58h] [rbp-268h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MusicInfoConfig> >::type *music_info_config_0; // [rsp+68h] [rbp-258h]
  char v61[592]; // [rsp+70h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 12 music_id:129 64 4 14 watcher_id:143 80 4 19 prev_watcher_id:152 96 8 15 __for_begin:1"
                        "27 128 8 13 __for_end:127 160 8 15 __for_begin:138 192 8 13 __for_end:138 224 8 8 iter:153 256 8"
                        " 9 <unknown> 288 24 16 watcher_list:140 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMusicGameConfigMgr::rewriteMusicInfoExcelConfig;
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
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  __for_range = &this->music_info_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MusicInfoConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MusicInfoConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MusicInfoConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::MusicInfoConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MusicInfoConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MusicInfoConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MusicInfoConfig>,false> *)(v3 + 128)) )
      break;
    v56 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::MusicInfoConfig>(v56);
    music_info_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MusicInfoConfig> >::type *)std::get<1ul,unsigned int const,data::MusicInfoConfig>(v56);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&music_info_config->music_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&music_info_config->music_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&music_info_config->music_id);
    }
    music_id = music_info_config->music_id;
    v8 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 48, v6);
    }
    *(_DWORD *)(v3 + 48) = music_id;
    if ( std::vector<unsigned int>::empty(&music_info_config->level_id) )
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
        4u,
        "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
        "rewriteMusicInfoExcelConfig",
        132);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1AA6FA60);
      v6 = (char *)(v3 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &music_info_config->level_id,
                                                                                                  0LL);
      v13 = (int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v6 = (char *)(v3 + 48);
      v15 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->music_id_2_music_basic_id_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v16 = v15;
      v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v17 != 0;
      if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
        __asan_report_store4(v15, v6);
      *v16 = v14;
      v11 = 1;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v18 = 0;
      goto LABEL_27;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false> *const)(v3 + 96));
  }
  v18 = 1;
LABEL_27:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v18 == 1 )
  {
    __for_range_0 = &this->music_info_config_map;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::unordered_map<unsigned int,data::MusicInfoConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::MusicInfoConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::unordered_map<unsigned int,data::MusicInfoConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::MusicInfoConfig>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::MusicInfoConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MusicInfoConfig>,false> *)(v3 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MusicInfoConfig>,false> *)(v3 + 192)) )
    {
      v59 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false> *const)(v3 + 160));
      std::get<0ul,unsigned int const,data::MusicInfoConfig>(v59);
      music_info_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::MusicInfoConfig> >::type *)std::get<1ul,unsigned int const,data::MusicInfoConfig>(v59);
      v19 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v19 = 0;
      *(_BYTE *)(v19 + 2) = 0;
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 288),
        &music_info_config_0->watcher_list);
      for ( idx = 0; idx < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 288)); ++idx )
      {
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v20 = idx;
        v21 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 288), idx);
        v22 = (int *)v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        v23 = *v22;
        v24 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v24 != 0 && v24 <= 3 )
        {
          LOBYTE(v20) = v24 != 0;
          __asan_report_store4(v3 + 64, v20);
        }
        *(_DWORD *)(v3 + 64) = v23;
        if ( idx )
        {
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          v31 = idx - 1;
          v32 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 288), v31);
          v33 = (int *)v32;
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v32);
          }
          v34 = *v33;
          v35 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          LOBYTE(v31) = v35 != 0;
          if ( v35 != 0 && v35 <= 3 )
            __asan_report_store4(v3 + 80, v31);
          *(_DWORD *)(v3 + 80) = v34;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          p_watcher_id_2_prev_watcher_id_map = &this->watcher_id_2_prev_watcher_id_map;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v31);
          *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                     p_watcher_id_2_prev_watcher_id_map,
                                                                                     (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          v37 = &this->watcher_id_2_prev_watcher_id_map;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, v3 + 64);
          *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,unsigned int>::end(v37);
          v38 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 224),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 256));
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( v38 )
          {
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 480, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
              "rewriteMusicInfoExcelConfig",
              156);
            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v40 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v39,
                    (const char (*)[21])byte_1AA6FAA0);
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)(v3 + 64));
            v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v41,
                    (const char (*)[19])" prev_watcher_id: ");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v42,
                    (const unsigned int *)(v3 + 80));
            v44 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v43,
                    (const char (*)[12])" music_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &music_info_config_0->music_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v30 = 1;
          }
          else
          {
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            v45 = *(_DWORD *)(v3 + 80);
            v46 = (char *)(v3 + 64);
            v47 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    &this->watcher_id_2_prev_watcher_id_map,
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
            v48 = v47;
            v49 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
            if ( v49 != 0 && (char)(((unsigned __int8)v47 & 7) + 3) >= v49 )
            {
              LOBYTE(v46) = v49 != 0;
              __asan_report_store4(v47, v46);
            }
            *v48 = v45;
            v30 = 2;
          }
        }
        else
        {
          v25 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
                  &this->cond_watcher_id_set,
                  (unsigned int *)(v3 + 64),
                  (unsigned int *)&this->cond_watcher_id_set);
          if ( !v25.second )
          {
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 416),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityMusicGameConfig.cpp",
              "rewriteMusicInfoExcelConfig",
              148);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 416),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v26,
                    (const char (*)[21])byte_1AA6FAA0);
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v3 + 64));
            v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v28,
                    (const char (*)[12])" music_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &music_info_config_0->music_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          }
          v30 = 0;
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v30 && v30 != 2 )
        {
          v50 = 0;
          goto LABEL_68;
        }
      }
      v50 = 1;
LABEL_68:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
      v51 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v51 = -1800;
      *(_BYTE *)(v51 + 2) = -8;
      if ( v50 != 1 )
      {
        v52 = 0;
        goto LABEL_72;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MusicInfoConfig>,false,false> *const)(v3 + 160));
    }
    v52 = 1;
LABEL_72:
    if ( v52 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v61 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};
