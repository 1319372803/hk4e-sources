// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/security_utils.cpp

// Line 60: range 000000000CE35A92-000000000CE35AEA
uint32_t __cdecl SecurityUtilsHelper::getPlatformMatchinType(uint32_t platform_type)
{
  uint32_t v1; // eax

  v1 = SecurityUtils::reducePlatformType(platform_type);
  if ( v1 == 8 )
    return 6;
  if ( v1 <= 8 )
  {
    if ( v1 == 4 )
      return 5;
    if ( v1 <= 4 )
    {
      if ( v1 == 1 )
        return 3;
      if ( v1 == 2 )
        return 2;
    }
  }
  return 1;
};

// Line 79: range 000000000CE35E9D-000000000CE37D5F
int32_t __cdecl SecurityUtilsHelper::loadSegmentCrcPlatformConfig(
        const common::tools::PTree *pt,
        std::unordered_map<unsigned int,SegmentCrcPlatformConfig> *segment_crc_config_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  _DWORD *v7; // rax
  int v8; // esi
  unsigned __int64 v9; // rax
  __int64 p_second; // rsi
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // edi
  unsigned __int64 v18; // rax
  SegmentCrcModuleConfig *M_current; // r15
  SegmentCrcModuleConfig *v20; // rcx
  unsigned __int64 v21; // rax
  bool v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::vector<SegmentCrcModuleConfig>::value_type *v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  SegmentCrcPlatformConfig *v36; // rdx
  SegmentCrcPlatformConfig *v37; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false>,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  _DWORD *v40; // rax
  int32_t ret; // [rsp+1Ch] [rbp-734h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+20h] [rbp-730h]
  const std::pair<std::string,common::tools::PTree> *child_pt; // [rsp+28h] [rbp-728h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range_0; // [rsp+30h] [rbp-720h]
  const std::pair<std::string,common::tools::PTree> *module_child_pt; // [rsp+38h] [rbp-718h]
  char v48[1808]; // [rsp+40h] [rbp-710h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1760LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "34 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 4 1"
                        "6 platform_type:91 144 4 21 proto_module_type:112 160 8 14 __for_begin:82 192 8 12 __for_end:82 "
                        "224 8 15 __for_begin:102 256 8 13 __for_end:102 288 8 8 iter:124 320 8 9 <unknown> 352 24 9 <unk"
                        "nown> 416 24 9 <unknown> 480 32 9 <unknown> 544 32 20 platform_type_str:90 608 32 9 <unknown> 67"
                        "2 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 23 crc_module_t"
                        "ype_str:111 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 "
                        "32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 40 17 module_con"
                        "fig:120 1584 40 9 <unknown> 1664 64 18 platform_config:99";
  *(_QWORD *)(v2 + 16) = SecurityUtilsHelper::loadSegmentCrcPlatformConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234556924;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862733] = -234881024;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959360;
  v4[536862769] = 62194;
  v4[536862770] = -234881024;
  v4[536862771] = -218959118;
  v4[536862774] = -202116109;
  ret = 0;
  if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 375) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 119) & 7) >= *(_BYTE *)(((v2 + 375) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 352, 24LL);
  }
  common::tools::PTree::getAllChild[abi:cxx11]((std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 352), pt);
  __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 352);
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v2 + 160) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v2 + 192) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range);
  while ( std::operator!=(
            (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v2 + 160),
            (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v2 + 192)) )
  {
    child_pt = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v2 + 160));
    if ( std::operator!=<char>(&child_pt->first, "SegmentCrcPlatformConfig") )
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/security_utils.cpp",
        "loadSegmentCrcPlatformConfig",
        86);
      v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
             (common::milog::MiLogStream *const)(v2 + 480),
             (const char (*)[14])"unknown node:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &child_pt->first);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        "<xmlattr>.platform_type",
        (const std::allocator<char> *)(v2 + 48));
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      common::tools::PTree::get<std::string>(
        (std::string *)(v2 + 544),
        &child_pt->second,
        (const std::string *)(v2 + 608));
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128);
      *(_DWORD *)(v2 + 128) = 0;
      if ( !proto::PlatformType_Parse((const std::string *)(v2 + 544), (proto::PlatformType *)(v2 + 128)) )
      {
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/security_utils.cpp",
          "loadSegmentCrcPlatformConfig",
          94);
        v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               (common::milog::MiLogStream *const)(v2 + 672),
               (const char (*)[23])"unknown platform type:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 544));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v7 = (_DWORD *)(((v2 + 1664) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        SegmentCrcPlatformConfig::SegmentCrcPlatformConfig((SegmentCrcPlatformConfig *const)(v2 + 1664));
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 128);
        v8 = *(_DWORD *)(v2 + 128);
        if ( *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 1664);
        *(_DWORD *)(v2 + 1664) = v8;
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          "<xmlattr>.platform_directory",
          (const std::allocator<char> *)(v2 + 64));
        if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 800, 32LL);
        }
        common::tools::PTree::get<std::string>(
          (std::string *)(v2 + 800),
          &child_pt->second,
          (const std::string *)(v2 + 736));
        std::string::operator=(v2 + 1672, v2 + 800);
        std::string::~string((void *)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        v9 = ((v2 + 416) >> 3) + 2147450880;
        *(_WORD *)v9 = 0;
        *(_BYTE *)(v9 + 2) = 0;
        p_second = (__int64)&child_pt->second;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 439) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 23) & 7) >= *(_BYTE *)(((v2 + 439) >> 3) + 0x7FFF8000) )
        {
          p_second = 24LL;
          __asan_report_store_n(v2 + 416, 24LL);
        }
        common::tools::PTree::getAllChild[abi:cxx11](
          (std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 416),
          (const common::tools::PTree *const)p_second);
        __for_range_0 = (std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 416);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v2 + 224) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v2 + 256) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range_0);
        while ( std::operator!=(
                  (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v2 + 224),
                  (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v2 + 256)) )
        {
          module_child_pt = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v2 + 224));
          if ( std::operator!=<char>(&module_child_pt->first, "SegmentCrcModuleConfig") )
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 864, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 864),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/security_utils.cpp",
              "loadSegmentCrcPlatformConfig",
              106);
            v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    (common::milog::MiLogStream *const)(v2 + 864),
                    (const char (*)[14])"unknown node:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &module_child_pt->first);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 80);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 992),
              "<xmlattr>.crc_module_type",
              (const std::allocator<char> *)(v2 + 80));
            if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 928, 32LL);
            }
            common::tools::PTree::get<std::string>(
              (std::string *)(v2 + 928),
              &module_child_pt->second,
              (const std::string *)(v2 + 992));
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 80);
            *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 144);
            *(_DWORD *)(v2 + 144) = 0;
            if ( !proto::SegmentCRCModuleType_Parse(
                    (const std::string *)(v2 + 928),
                    (proto::SegmentCRCModuleType *)(v2 + 144)) )
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1056, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1056),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "src/security_utils.cpp",
                "loadSegmentCrcPlatformConfig",
                115);
              v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      (common::milog::MiLogStream *const)(v2 + 1056),
                      (const char (*)[30])"unknown platform module type:");
              v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v12,
                      (const std::string *)(v2 + 928));
              v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v13,
                      (const char (*)[16])" platform_type:");
              common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
                v14,
                (const proto::PlatformType *)(v2 + 128));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              v15 = ((v2 + 1504) >> 3) + 2147450880;
              *(_DWORD *)v15 = 0;
              *(_BYTE *)(v15 + 4) = 0;
              SegmentCrcModuleConfig::SegmentCrcModuleConfig((SegmentCrcModuleConfig *const)(v2 + 1504));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 96);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1120),
                "<xmlattr>.crc_module_index",
                (const std::allocator<char> *)(v2 + 96));
              v16 = common::tools::PTree::get<unsigned int>(&module_child_pt->second, (const std::string *)(v2 + 1120));
              if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 1504);
              *(_DWORD *)(v2 + 1504) = v16;
              std::string::~string((void *)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 96);
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
              if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 144);
              v17 = *(_DWORD *)(v2 + 144);
              if ( *(_BYTE *)(((v2 + 1508) >> 3) + 0x7FFF8000) != 0
                && (char)(((v2 - 32 + 4) & 7) + 3) >= *(_BYTE *)(((v2 + 1508) >> 3) + 0x7FFF8000) )
              {
                v17 = v2 + 1508;
                __asan_report_store4(v2 + 1508);
              }
              *(_DWORD *)(v2 + 1508) = v17;
              *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 112);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1184),
                "<xmlattr>.crc_module_file",
                (const std::allocator<char> *)(v2 + 112));
              if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1248, 32LL);
              }
              common::tools::PTree::get<std::string>(
                (std::string *)(v2 + 1248),
                &module_child_pt->second,
                (const std::string *)(v2 + 1184));
              std::string::operator=(v2 + 1512, v2 + 1248);
              std::string::~string((void *)(v2 + 1248));
              *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
              std::string::~string((void *)(v2 + 1184));
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 112);
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
              v18 = ((v2 + 1584) >> 3) + 2147450880;
              *(_DWORD *)v18 = 0;
              *(_BYTE *)(v18 + 4) = 0;
              SegmentCrcModuleConfig::SegmentCrcModuleConfig(
                (SegmentCrcModuleConfig *const)(v2 + 1584),
                (const SegmentCrcModuleConfig *)(v2 + 1504));
              M_current = std::vector<SegmentCrcModuleConfig>::end((std::vector<SegmentCrcModuleConfig> *const)(v2 + 1704))._M_current;
              v20 = std::vector<SegmentCrcModuleConfig>::begin((std::vector<SegmentCrcModuleConfig> *const)(v2 + 1704))._M_current;
              if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *(__gnu_cxx::__normal_iterator<SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *)(v2 + 288) = std::find_if<__gnu_cxx::__normal_iterator<SegmentCrcModuleConfig *,std::vector<SegmentCrcModuleConfig>>,SecurityUtilsHelper::loadSegmentCrcPlatformConfig(common::tools::PTree const&,std::unordered_map<unsigned int,SegmentCrcPlatformConfig> &)::{lambda(SegmentCrcModuleConfig const&)#1}>((__gnu_cxx::__normal_iterator<SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> >)v20, (__gnu_cxx::__normal_iterator<SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> >)M_current, (SecurityUtilsHelper::loadSegmentCrcPlatformConfig::<lambda(const SegmentCrcModuleConfig&)> *)(v2 + 1584));
              SecurityUtilsHelper::loadSegmentCrcPlatformConfig(common::tools::PTree const&,std::unordered_map<unsigned int,SegmentCrcPlatformConfig> &)::{lambda(SegmentCrcModuleConfig const&)#1}::~SegmentCrcModuleConfig((SecurityUtilsHelper::loadSegmentCrcPlatformConfig::<lambda(const SegmentCrcModuleConfig&)> *const)(v2 + 1584));
              v21 = ((v2 + 1584) >> 3) + 2147450880;
              *(_DWORD *)v21 = -117901064;
              *(_BYTE *)(v21 + 4) = -8;
              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *(std::vector<SegmentCrcModuleConfig>::iterator *)(v2 + 320) = std::vector<SegmentCrcModuleConfig>::end((std::vector<SegmentCrcModuleConfig> *const)(v2 + 1704));
              v22 = __gnu_cxx::operator!=<SegmentCrcModuleConfig *,std::vector<SegmentCrcModuleConfig>>(
                      (const __gnu_cxx::__normal_iterator<SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *)(v2 + 288),
                      (const __gnu_cxx::__normal_iterator<SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *)(v2 + 320));
              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
              if ( v22 )
              {
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1312, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1312),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "src/security_utils.cpp",
                  "loadSegmentCrcPlatformConfig",
                  132);
                v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        (common::milog::MiLogStream *const)(v2 + 1312),
                        (const char (*)[55])"module config contains duplicate field, platform_type:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v23,
                  (const std::string *)(v2 + 544));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1376, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1376),
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "src/security_utils.cpp",
                  "loadSegmentCrcPlatformConfig",
                  136);
                v24 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        (common::milog::MiLogStream *const)(v2 + 1376),
                        (const char (*)[29])"target crc config: platform:");
                v25 = common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
                        v24,
                        (const proto::PlatformType *)(v2 + 128));
                v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v25,
                        (const char (*)[15])" platform_dir:");
                v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v26,
                        (const std::string *)(v2 + 1672));
                v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v27,
                        (const char (*)[15])" module_index:");
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v28,
                        (const unsigned int *)(v2 + 1504));
                v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v29,
                        (const char (*)[14])" module_type:");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v2 + 1508));
                v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v31,
                        (const char (*)[14])" module_file:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v32,
                  (const std::string *)(v2 + 1512));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                v33 = std::move<SegmentCrcModuleConfig &>((SegmentCrcModuleConfig *)(v2 + 1504));
                std::vector<SegmentCrcModuleConfig>::push_back(
                  (std::vector<SegmentCrcModuleConfig> *const)(v2 + 1704),
                  v33);
              }
              SegmentCrcModuleConfig::~SegmentCrcModuleConfig((SegmentCrcModuleConfig *const)(v2 + 1504));
            }
            std::string::~string((void *)(v2 + 928));
          }
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          v34 = ((v2 + 1504) >> 3) + 2147450880;
          *(_DWORD *)v34 = -117901064;
          *(_BYTE *)(v34 + 4) = -8;
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
          std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v2 + 224));
        }
        std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 416));
        v35 = ((v2 + 416) >> 3) + 2147450880;
        *(_WORD *)v35 = -1800;
        *(_BYTE *)(v35 + 2) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        v36 = std::move<SegmentCrcPlatformConfig &>((SegmentCrcPlatformConfig *)(v2 + 1664));
        v38 = std::unordered_map<unsigned int,SegmentCrcPlatformConfig>::emplace<proto::PlatformType &,SegmentCrcPlatformConfig>(
                segment_crc_config_map,
                (proto::PlatformType *)(v2 + 128),
                v36,
                (proto::PlatformType *)(v2 + 128),
                v37);
        if ( !v38.second )
        {
          *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1440, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1440),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/security_utils.cpp",
            "loadSegmentCrcPlatformConfig",
            142);
          v39 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  (common::milog::MiLogStream *const)(v2 + 1440),
                  (const char (*)[20])"duplicate platform:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v2 + 544));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
          *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        SegmentCrcPlatformConfig::~SegmentCrcPlatformConfig((SegmentCrcPlatformConfig *const)(v2 + 1664));
      }
      std::string::~string((void *)(v2 + 544));
    }
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    v40 = (_DWORD *)(((v2 + 1664) >> 3) + 2147450880);
    *v40 = -117901064;
    v40[1] = -117901064;
    std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v2 + 160));
  }
  std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 352));
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 220) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1760LL, v48);
  }
  return ret;
};

// Line 124: range 000000000CE35C2A-000000000CE35D62
bool __cdecl SecurityUtilsHelper::loadSegmentCrcPlatformConfig(common::tools::PTree const&,std::unordered_map<unsigned int,SegmentCrcPlatformConfig> &)::{lambda(SegmentCrcModuleConfig const&)#1}::operator()(
        const SecurityUtilsHelper::loadSegmentCrcPlatformConfig::<lambda(const SegmentCrcModuleConfig&)> *const __closure,
        const SegmentCrcModuleConfig *haven_module_config)
{
  uint32_t crc_module_index; // ecx
  uint32_t crc_module_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  crc_module_index = __closure->__module_config.crc_module_index;
  if ( *(_BYTE *)(((unsigned __int64)haven_module_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)haven_module_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(haven_module_config);
  }
  if ( crc_module_index == haven_module_config->crc_module_index )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__module_config.crc_module_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__module_config.crc_module_type >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__module_config.crc_module_type);
  }
  crc_module_type = __closure->__module_config.crc_module_type;
  if ( *(_BYTE *)(((unsigned __int64)&haven_module_config->crc_module_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)haven_module_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&haven_module_config->crc_module_type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&haven_module_config->crc_module_type);
  }
  return crc_module_type == haven_module_config->crc_module_type
      || std::operator==<char>(
           &__closure->__module_config.crc_module_file_str,
           &haven_module_config->crc_module_file_str);
};

// Line 124: range 000000000CE460C4-000000000CE460E9
void __cdecl SecurityUtilsHelper::loadSegmentCrcPlatformConfig(common::tools::PTree const&,std::unordered_map<unsigned int,SegmentCrcPlatformConfig> &)::{lambda(SegmentCrcModuleConfig const&)#1}::SegmentCrcModuleConfig(
        SecurityUtilsHelper::loadSegmentCrcPlatformConfig::<lambda(const SegmentCrcModuleConfig&)> *const this,
        SecurityUtilsHelper::loadSegmentCrcPlatformConfig::<lambda(const SegmentCrcModuleConfig&)> *a2)
{
  SegmentCrcModuleConfig::SegmentCrcModuleConfig(&this->__module_config, &a2->__module_config);
};

// Line 124: range 000000000CE4012C-000000000CE40151
void __cdecl SecurityUtilsHelper::loadSegmentCrcPlatformConfig(common::tools::PTree const&,std::unordered_map<unsigned int,SegmentCrcPlatformConfig> &)::{lambda(SegmentCrcModuleConfig const&)#1}::SegmentCrcModuleConfig(
        SecurityUtilsHelper::loadSegmentCrcPlatformConfig::<lambda(const SegmentCrcModuleConfig&)> *const this,
        const SecurityUtilsHelper::loadSegmentCrcPlatformConfig::<lambda(const SegmentCrcModuleConfig&)> *a2)
{
  SegmentCrcModuleConfig::SegmentCrcModuleConfig(&this->__module_config, &a2->__module_config);
};

// Line 124: range 000000000CE35E82-000000000CE35E9C
void __cdecl SecurityUtilsHelper::loadSegmentCrcPlatformConfig(common::tools::PTree const&,std::unordered_map<unsigned int,SegmentCrcPlatformConfig> &)::{lambda(SegmentCrcModuleConfig const&)#1}::~SegmentCrcModuleConfig(
        SecurityUtilsHelper::loadSegmentCrcPlatformConfig::<lambda(const SegmentCrcModuleConfig&)> *const this)
{
  SegmentCrcModuleConfig::~SegmentCrcModuleConfig(&this->__module_config);
};

// Line 151: range 000000000CE37EF1-000000000CE3ACB4
int32_t __cdecl SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig *security_config)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  bool v7; // r14
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  int32_t AllFilesInDirectory; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false>::__node_type *M_cur; // rcx
  std::unordered_map<unsigned int,SegmentCrcPlatformConfig> *p_segment_crc_config_map; // rdx
  bool v18; // al
  common::milog::MiLogStream *v19; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false>::pointer v20; // rax
  uint32_t platform_type; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int32_t v24; // edx
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  int32_t AllFilesWithExtension; // edx
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned __int64 v34; // rax
  const std::string *v35; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  unsigned __int64 v40; // rax
  std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>::size_type v41; // rax
  const std::unordered_map<std::string,std::string>::key_type *p_crc_module_file_str; // rdx
  bool v43; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  const unsigned int *v47; // r8
  const unsigned int *v48; // r9
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  int v63; // edx
  common::milog::MiLogStream *v64; // rax
  std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> *v65; // rax
  std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> *v66; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,false,true>,bool> v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> *v74; // rax
  const unsigned int *v75; // rcx
  std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> *v76; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> >,false,false>,bool> v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  std::shared_ptr<SegmentCRCTree> *__last; // [rsp+0h] [rbp-930h]
  bool is_this_file_needed; // [rsp+1Fh] [rbp-911h]
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-910h]
  const std::string *platform_path_str; // [rsp+28h] [rbp-908h]
  std::vector<SegmentCrcModuleConfig> *target_platform_module_config_vec; // [rsp+30h] [rbp-900h]
  std::vector<std::string> *__for_range_0; // [rsp+38h] [rbp-8F8h]
  const std::string *client_version_dir_path_str; // [rsp+40h] [rbp-8F0h]
  std::vector<std::string> *__for_range_1; // [rsp+48h] [rbp-8E8h]
  const SegmentCrcModuleConfig *module_config_0; // [rsp+58h] [rbp-8D8h]
  std::string *module_file_path_str; // [rsp+60h] [rbp-8D0h]
  const std::string *json_file_path_str; // [rsp+68h] [rbp-8C8h]
  const SegmentCrcModuleConfig *module_config; // [rsp+78h] [rbp-8B8h]
  char v97[2224]; // [rsp+80h] [rbp-8B0h] BYREF

  v1 = (unsigned __int64)v97;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(2176LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "44 32 1 9 <unknown> 48 1 9 <unknown> 64 4 7 ret:168 80 4 24 target_platform_type:191 96 4 9 <unk"
                        "nown> 112 8 15 __for_begin:177 144 8 13 __for_end:177 176 8 24 target_platform_iter:180 208 8 9 "
                        "<unknown> 240 8 15 __for_begin:206 272 8 13 __for_end:206 304 8 15 __for_begin:218 336 8 13 __fo"
                        "r_end:218 368 8 15 __for_begin:222 400 8 13 __for_end:222 432 8 15 __for_begin:245 464 8 13 __fo"
                        "r_end:245 496 8 25 module_file_path_iter:247 528 8 9 <unknown> 560 16 9 timer:255 592 16 12 tree"
                        "_ptr:256 624 24 11 dir_vec:161 688 24 12 file_vec:167 752 24 26 client_version_dir_vec:194 816 2"
                        "4 27 client_version_file_vec:195 880 24 21 crc_file_path_vec:209 944 24 19 module_tree_vec:243 1"
                        "008 32 9 <unknown> 1072 32 9 <unknown> 1136 32 9 <unknown> 1200 32 9 <unknown> 1264 32 9 <unknow"
                        "n> 1328 32 9 <unknown> 1392 32 22 json_file_name_str:220 1456 32 9 <unknown> 1520 32 22 client_v"
                        "ersion_str:242 1584 32 9 <unknown> 1648 32 9 <unknown> 1712 32 9 <unknown> 1776 32 9 <unknown> 1"
                        "840 32 9 <unknown> 1904 40 9 <unknown> 1984 56 29 client_version_config_map:205 2080 56 21 crc_f"
                        "ile_path_map:217";
  *(_QWORD *)(v1 + 16) = SecurityUtilsHelper::loadSegmentCRCConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = 61956;
  v3[536862723] = -234881024;
  v3[536862724] = 62194;
  v3[536862724] = -234881024;
  v3[536862725] = 62194;
  v3[536862725] = -234881024;
  v3[536862726] = 62194;
  v3[536862726] = -234881024;
  v3[536862727] = 62194;
  v3[536862727] = -234881024;
  v3[536862728] = 62194;
  v3[536862728] = -234881024;
  v3[536862729] = 62194;
  v3[536862729] = -234881024;
  v3[536862730] = 62194;
  v3[536862730] = -234881024;
  v3[536862731] = 62194;
  v3[536862731] = -234881024;
  v3[536862732] = 62194;
  v3[536862732] = -234881024;
  v3[536862733] = 62194;
  v3[536862733] = -234881024;
  v3[536862734] = 62194;
  v3[536862734] = -234881024;
  v3[536862735] = 62194;
  v3[536862735] = -234881024;
  v3[536862736] = 62194;
  v3[536862736] = -234881024;
  v3[536862737] = 62194;
  v3[536862738] = 62194;
  v3[536862739] = 62194;
  v3[536862740] = -218959360;
  v3[536862741] = 62194;
  v3[536862742] = -218959360;
  v3[536862743] = 62194;
  v3[536862744] = -218959360;
  v3[536862745] = 62194;
  v3[536862746] = -218959360;
  v3[536862747] = 62194;
  v3[536862748] = -218959360;
  v3[536862749] = 62194;
  v3[536862750] = -218959360;
  v3[536862751] = 62194;
  v3[536862752] = -219021312;
  v3[536862753] = 62194;
  v3[536862754] = -219021312;
  v3[536862755] = 62194;
  v3[536862756] = -219021312;
  v3[536862757] = 62194;
  v3[536862758] = -219021312;
  v3[536862759] = 62194;
  v3[536862760] = -219021312;
  v3[536862761] = 62194;
  v3[536862762] = -219021312;
  v3[536862763] = 62194;
  v3[536862764] = -219021312;
  v3[536862765] = 62194;
  v3[536862766] = -219021312;
  v3[536862767] = 62194;
  v3[536862768] = -219021312;
  v3[536862769] = 62194;
  v3[536862770] = -219021312;
  v3[536862771] = 62194;
  v3[536862772] = -219021312;
  v3[536862773] = 62194;
  v3[536862774] = -219021312;
  v3[536862775] = 62194;
  v3[536862776] = -219021312;
  v3[536862777] = 62194;
  v3[536862778] = -219021312;
  v3[536862779] = 62194;
  v3[536862780] = -234881024;
  v3[536862781] = -218959118;
  v3[536862783] = -234881024;
  v3[536862784] = -218959118;
  v3[536862786] = -218103808;
  v3[536862787] = -202116109;
  if ( !(_BYTE)`guard variable for'SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11]
    && __cxa_guard_acquire(&`guard variable for'SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11]) )
  {
    std::allocator<char>::allocator(v1 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11],
      "../crc",
      (const std::allocator<char> *)(v1 + 32));
    __cxa_guard_release(&`guard variable for'SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11]);
    __cxa_atexit(
      (void (__fastcall *)(void *))&std::string::~string,
      (void *)&SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11],
      &_dso_handle);
    std::allocator<char>::~allocator(v1 + 32);
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_has_segment_crc_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_has_segment_crc_config >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_has_segment_crc_config);
  }
  if ( !security_config->is_has_segment_crc_config )
  {
    v4 = 0;
  }
  else
  {
    v5 = ((v1 + 624) >> 3) + 2147450880;
    *(_WORD *)v5 = 0;
    *(_BYTE *)(v5 + 2) = 0;
    std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 624));
    v6 = ((v1 + 1904) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_BYTE *)(v6 + 4) = 0;
    std::filesystem::__cxx11::path::path<std::string,std::filesystem::__cxx11::path>(
      (std::filesystem::__cxx11::path *const)(v1 + 1904),
      &SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11],
      auto_format);
    v7 = !std::filesystem::is_directory((const std::filesystem::__cxx11::path *)(v1 + 1904));
    std::filesystem::__cxx11::path::~path((std::filesystem::__cxx11::path *const)(v1 + 1904));
    v8 = ((v1 + 1904) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_BYTE *)(v8 + 4) = -8;
    if ( v7 )
    {
      *(_DWORD *)(((v1 + 1008) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 1008) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1039) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 15) & 7) >= *(_BYTE *)(((v1 + 1039) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 1008, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 1008),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "loadSegmentCRCConfig",
        164);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             (common::milog::MiLogStream *const)(v1 + 1008),
             (const char (*)[34])"crc_dir not a directory, crc_dir:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v9,
              &SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11]);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])". ignore crc check.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1008));
      *(_DWORD *)(((v1 + 1008) >> 3) + 0x7FFF8000) = -117901064;
      v4 = 0;
    }
    else
    {
      v11 = ((v1 + 688) >> 3) + 2147450880;
      *(_WORD *)v11 = 0;
      *(_BYTE *)(v11 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 688));
      *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 64);
      *(_DWORD *)(v1 + 64) = 0;
      AllFilesInDirectory = common::tools::FileUtils::getAllFilesInDirectory(
                              &SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11],
                              (std::vector<std::string> *)(v1 + 624),
                              (std::vector<std::string> *)(v1 + 688));
      if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 64);
      *(_DWORD *)(v1 + 64) = AllFilesInDirectory;
      if ( *(_DWORD *)(v1 + 64) )
      {
        *(_DWORD *)(((v1 + 1072) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 1072) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1103) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 79) & 7) >= *(_BYTE *)(((v1 + 1103) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 1072, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 1072),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/security_utils.cpp",
          "loadSegmentCRCConfig",
          172);
        v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)(v1 + 1072),
                (const char (*)[39])"getAllFilesInDirectory fails, crc_dir:");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v13,
                &SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::crc_dir[abi:cxx11]);
        v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v14,
                (const char (*)[26])". ignore crc check. ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v1 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1072));
        *(_DWORD *)(((v1 + 1072) >> 3) + 0x7FFF8000) = -117901064;
        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v1 + 64);
        v4 = *(_DWORD *)(v1 + 64);
      }
      else
      {
        __for_range = (std::vector<std::string> *)(v1 + 624);
        *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v1 + 112) = std::vector<std::string>::begin(__for_range);
        *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v1 + 144) = std::vector<std::string>::end(__for_range);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 112),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 144)) )
        {
          platform_path_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 112));
          *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = 0;
          __last = (std::shared_ptr<SegmentCRCTree> *)std::unordered_map<unsigned int,SegmentCrcPlatformConfig>::end(&security_config->segment_crc_config_map)._M_cur;
          M_cur = std::unordered_map<unsigned int,SegmentCrcPlatformConfig>::begin(&security_config->segment_crc_config_map)._M_cur;
          if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false> *)(v1 + 176) = std::find_if<std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false>,SecurityUtilsHelper::loadSegmentCRCConfig(SecurityConfig &)::{lambda(std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false> const&)#1}>((std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false>)M_cur, (std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false>)__last, (SecurityUtilsHelper::loadSegmentCRCConfig::<lambda(const auto:23&)>)platform_path_str);
          *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = 0;
          p_segment_crc_config_map = &security_config->segment_crc_config_map;
          if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::unordered_map<unsigned int,SegmentCrcPlatformConfig>::iterator *)(v1 + 208) = std::unordered_map<unsigned int,SegmentCrcPlatformConfig>::end(p_segment_crc_config_map);
          v18 = std::__detail::operator==<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false> *)(v1 + 176),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false> *)(v1 + 208));
          *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( v18 )
          {
            *(_DWORD *)(((v1 + 1136) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v1 + 1136) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v1 + 1167) >> 3) + 0x7FFF8000) != 0
              && (char)((v1 - 113) & 7) >= *(_BYTE *)(((v1 + 1167) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v1 + 1136, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 1136),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/security_utils.cpp",
              "loadSegmentCRCConfig",
              186);
            v19 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    (common::milog::MiLogStream *const)(v1 + 1136),
                    (const char (*)[33])"unknown platform directory name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, platform_path_str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1136));
            *(_DWORD *)(((v1 + 1136) >> 3) + 0x7FFF8000) = -117901064;
            if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v1 + 64);
            *(_DWORD *)(v1 + 64) = -1;
          }
          else
          {
            *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
            v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false> *const)(v1 + 176));
            if ( *(_BYTE *)(((unsigned __int64)&v20->second >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v20->second >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v20->second);
            }
            platform_type = v20->second.platform_type;
            if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v1 + 80);
            *(_DWORD *)(v1 + 80) = platform_type;
            target_platform_module_config_vec = &std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SegmentCrcPlatformConfig>,false,false> *const)(v1 + 176))->second.crc_module_config_vec;
            v22 = ((v1 + 752) >> 3) + 2147450880;
            *(_WORD *)v22 = 0;
            *(_BYTE *)(v22 + 2) = 0;
            std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 752));
            v23 = ((v1 + 816) >> 3) + 2147450880;
            *(_WORD *)v23 = 0;
            *(_BYTE *)(v23 + 2) = 0;
            std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 816));
            v24 = common::tools::FileUtils::getAllFilesInDirectory(
                    platform_path_str,
                    (std::vector<std::string> *)(v1 + 752),
                    (std::vector<std::string> *)(v1 + 816));
            if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v1 + 64);
            *(_DWORD *)(v1 + 64) = v24;
            if ( *(_DWORD *)(v1 + 64) )
            {
              *(_DWORD *)(((v1 + 1200) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v1 + 1200) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v1 + 1231) >> 3) + 0x7FFF8000) != 0
                && (char)((v1 - 49) & 7) >= *(_BYTE *)(((v1 + 1231) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v1 + 1200, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v1 + 1200),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "src/security_utils.cpp",
                "loadSegmentCRCConfig",
                199);
              v25 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      (common::milog::MiLogStream *const)(v1 + 1200),
                      (const char (*)[49])"getAllFilesInDirectory fails, platform_path_str:");
              v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, platform_path_str);
              v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" ret: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v27, (const int *)(v1 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1200));
              *(_DWORD *)(((v1 + 1200) >> 3) + 0x7FFF8000) = -117901064;
              if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v1 + 64);
              *(_DWORD *)(v1 + 64) = -1;
            }
            else
            {
              v28 = ((v1 + 1984) >> 3) + 2147450880;
              *(_DWORD *)v28 = 0;
              *(_WORD *)(v28 + 4) = 0;
              *(_BYTE *)(v28 + 6) = 0;
              std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>::unordered_map((std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> *const)(v1 + 1984));
              __for_range_0 = (std::vector<std::string> *)(v1 + 752);
              *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *(std::vector<std::string>::iterator *)(v1 + 240) = std::vector<std::string>::begin(__for_range_0);
              *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *(std::vector<std::string>::iterator *)(v1 + 272) = std::vector<std::string>::end(__for_range_0);
              while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                        (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 240),
                        (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 272)) )
              {
                client_version_dir_path_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 240));
                v29 = ((v1 + 880) >> 3) + 2147450880;
                *(_WORD *)v29 = 0;
                *(_BYTE *)(v29 + 2) = 0;
                std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 880));
                *(_DWORD *)(((v1 + 1264) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v1 + 48);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v1 + 1264),
                  ".json",
                  (const std::allocator<char> *)(v1 + 48));
                AllFilesWithExtension = common::tools::FileUtils::getAllFilesWithExtension(
                                          client_version_dir_path_str,
                                          (const std::string *)(v1 + 1264),
                                          (std::vector<std::string> *)(v1 + 880));
                if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v1 + 64);
                *(_DWORD *)(v1 + 64) = AllFilesWithExtension;
                std::string::~string((void *)(v1 + 1264));
                *(_DWORD *)(((v1 + 1264) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v1 + 48);
                *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
                if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v1 + 64);
                if ( *(_DWORD *)(v1 + 64) )
                {
                  *(_DWORD *)(((v1 + 1328) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v1 + 1328) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v1 + 1359) >> 3) + 0x7FFF8000) != 0
                    && (char)((v1 + 79) & 7) >= *(_BYTE *)(((v1 + 1359) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v1 + 1328, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v1 + 1328),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "src/security_utils.cpp",
                    "loadSegmentCRCConfig",
                    213);
                  v31 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                          (common::milog::MiLogStream *const)(v1 + 1328),
                          (const char (*)[61])"getAllFilesWithExtension fails, client_version_dir_path_str:");
                  v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v31,
                          client_version_dir_path_str);
                  v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])" ret: ");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v33, (const int *)(v1 + 64));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1328));
                  *(_DWORD *)(((v1 + 1328) >> 3) + 0x7FFF8000) = -117901064;
                  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_store4(v1 + 64);
                  *(_DWORD *)(v1 + 64) = -1;
                }
                else
                {
                  v34 = ((v1 + 2080) >> 3) + 2147450880;
                  *(_DWORD *)v34 = 0;
                  *(_WORD *)(v34 + 4) = 0;
                  *(_BYTE *)(v34 + 6) = 0;
                  std::unordered_map<std::string,std::string>::unordered_map((std::unordered_map<std::string,std::string> *const)(v1 + 2080));
                  __for_range_1 = (std::vector<std::string> *)(v1 + 880);
                  *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(std::vector<std::string>::iterator *)(v1 + 304) = std::vector<std::string>::begin(__for_range_1);
                  *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(std::vector<std::string>::iterator *)(v1 + 336) = std::vector<std::string>::end(__for_range_1);
                  while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 304),
                            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 336)) )
                  {
                    json_file_path_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 304));
                    *(_DWORD *)(((v1 + 1392) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v1 + 1392) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v1 + 1423) >> 3) + 0x7FFF8000) != 0
                      && (char)((v1 - 113) & 7) >= *(_BYTE *)(((v1 + 1423) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v1 + 1392, 32LL);
                    }
                    common::tools::FileUtils::getFileNameByPath((std::string *)(v1 + 1392), json_file_path_str);
                    is_this_file_needed = 0;
                    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    *(std::vector<SegmentCrcModuleConfig>::const_iterator *)(v1 + 368) = std::vector<SegmentCrcModuleConfig>::begin(target_platform_module_config_vec);
                    *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    *(std::vector<SegmentCrcModuleConfig>::const_iterator *)(v1 + 400) = std::vector<SegmentCrcModuleConfig>::end(target_platform_module_config_vec);
                    while ( __gnu_cxx::operator!=<SegmentCrcModuleConfig const*,std::vector<SegmentCrcModuleConfig>>(
                              (const __gnu_cxx::__normal_iterator<const SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *)(v1 + 368),
                              (const __gnu_cxx::__normal_iterator<const SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *)(v1 + 400)) )
                    {
                      module_config = __gnu_cxx::__normal_iterator<SegmentCrcModuleConfig const*,std::vector<SegmentCrcModuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *const)(v1 + 368));
                      if ( std::operator==<char>((const std::string *)(v1 + 1392), &module_config->crc_module_file_str) )
                      {
                        is_this_file_needed = 1;
                        break;
                      }
                      __gnu_cxx::__normal_iterator<SegmentCrcModuleConfig const*,std::vector<SegmentCrcModuleConfig>>::operator++((__gnu_cxx::__normal_iterator<const SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *const)(v1 + 368));
                    }
                    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) = -8;
                    if ( is_this_file_needed )
                    {
                      v36 = std::unordered_map<std::string,std::string>::emplace<std::string&,std::string const&>(
                              (std::unordered_map<std::string,std::string> *const)(v1 + 2080),
                              (std::string *)(v1 + 1392),
                              json_file_path_str,
                              (std::string *)(v1 + 1392),
                              v35);
                      if ( !v36.second )
                      {
                        *(_DWORD *)(((v1 + 1456) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v1 + 1456) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v1 + 1487) >> 3) + 0x7FFF8000) != 0
                          && (char)((v1 - 49) & 7) >= *(_BYTE *)(((v1 + 1487) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v1 + 1456, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v1 + 1456),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "src/security_utils.cpp",
                          "loadSegmentCRCConfig",
                          236);
                        v37 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                (common::milog::MiLogStream *const)(v1 + 1456),
                                (const char (*)[21])"duplicate json file:");
                        v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                                v37,
                                (const std::string *)(v1 + 1392));
                        v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                                v38,
                                (const char (*)[18])" under directory:");
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v39,
                          client_version_dir_path_str);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1456));
                        *(_DWORD *)(((v1 + 1456) >> 3) + 0x7FFF8000) = -117901064;
                        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(v1 + 64);
                        }
                        *(_DWORD *)(v1 + 64) = -1;
                      }
                    }
                    std::string::~string((void *)(v1 + 1392));
                    *(_DWORD *)(((v1 + 1392) >> 3) + 0x7FFF8000) = -117901064;
                    __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 304));
                  }
                  *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
                  *(_DWORD *)(((v1 + 1520) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v1 + 1520) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v1 + 1551) >> 3) + 0x7FFF8000) != 0
                    && (char)((v1 + 15) & 7) >= *(_BYTE *)(((v1 + 1551) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v1 + 1520, 32LL);
                  }
                  common::tools::FileUtils::getFileNameByPath((std::string *)(v1 + 1520), client_version_dir_path_str);
                  v40 = ((v1 + 944) >> 3) + 2147450880;
                  *(_WORD *)v40 = 0;
                  *(_BYTE *)(v40 + 2) = 0;
                  std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>::vector((std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> *const)(v1 + 944));
                  v41 = std::vector<SegmentCrcModuleConfig>::size(target_platform_module_config_vec);
                  std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>::reserve(
                    (std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> *const)(v1 + 944),
                    v41);
                  *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(std::vector<SegmentCrcModuleConfig>::const_iterator *)(v1 + 432) = std::vector<SegmentCrcModuleConfig>::begin(target_platform_module_config_vec);
                  *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(std::vector<SegmentCrcModuleConfig>::const_iterator *)(v1 + 464) = std::vector<SegmentCrcModuleConfig>::end(target_platform_module_config_vec);
                  while ( __gnu_cxx::operator!=<SegmentCrcModuleConfig const*,std::vector<SegmentCrcModuleConfig>>(
                            (const __gnu_cxx::__normal_iterator<const SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *)(v1 + 432),
                            (const __gnu_cxx::__normal_iterator<const SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *)(v1 + 464)) )
                  {
                    module_config_0 = __gnu_cxx::__normal_iterator<SegmentCrcModuleConfig const*,std::vector<SegmentCrcModuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *const)(v1 + 432));
                    *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) = 0;
                    p_crc_module_file_str = &module_config_0->crc_module_file_str;
                    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    *(std::unordered_map<std::string,std::string>::iterator *)(v1 + 496) = std::unordered_map<std::string,std::string>::find(
                                                                                             (std::unordered_map<std::string,std::string> *const)(v1 + 2080),
                                                                                             p_crc_module_file_str);
                    *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    *(std::unordered_map<std::string,std::string>::iterator *)(v1 + 528) = std::unordered_map<std::string,std::string>::end((std::unordered_map<std::string,std::string> *const)(v1 + 2080));
                    v43 = std::__detail::operator==<std::pair<std::string const,std::string>,true>(
                            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true> *)(v1 + 496),
                            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true> *)(v1 + 528));
                    *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) = -8;
                    if ( v43 )
                    {
                      *(_DWORD *)(((v1 + 1584) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v1 + 1584) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v1 + 1615) >> 3) + 0x7FFF8000) != 0
                        && (char)((v1 + 79) & 7) >= *(_BYTE *)(((v1 + 1615) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v1 + 1584, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v1 + 1584),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "src/security_utils.cpp",
                        "loadSegmentCRCConfig",
                        250);
                      v44 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              (common::milog::MiLogStream *const)(v1 + 1584),
                              (const char (*)[11])"json_file:");
                      v45 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                              v44,
                              &module_config_0->crc_module_file_str);
                      v46 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                              v45,
                              (const char (*)[28])" not found under directory:");
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v46,
                        client_version_dir_path_str);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1584));
                      *(_DWORD *)(((v1 + 1584) >> 3) + 0x7FFF8000) = -117901064;
                      if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(v1 + 64);
                      }
                      *(_DWORD *)(v1 + 64) = -1;
                    }
                    else
                    {
                      module_file_path_str = &std::__detail::_Node_iterator<std::pair<std::string const,std::string>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true> *const)(v1 + 496))->second;
                      *(_WORD *)(((v1 + 560) >> 3) + 0x7FFF8000) = 0;
                      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 560));
                      *(_WORD *)(((v1 + 592) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_WORD *)(((v1 + 592) >> 3) + 0x7FFF8000) )
                        __asan_report_store16(v1 + 592, v1 + 528);
                      SegmentCRCMgr::generateSegmentCRCTree((const std::string *)(v1 + 592));
                      if ( std::operator==<SegmentCRCTree>((const std::shared_ptr<SegmentCRCTree> *)(v1 + 592), 0LL) )
                      {
                        *(_DWORD *)(((v1 + 1648) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v1 + 1648) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v1 + 1679) >> 3) + 0x7FFF8000) != 0
                          && (char)((v1 - 113) & 7) >= *(_BYTE *)(((v1 + 1679) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v1 + 1648, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v1 + 1648),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "src/security_utils.cpp",
                          "loadSegmentCRCConfig",
                          259);
                        v49 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                (common::milog::MiLogStream *const)(v1 + 1648),
                                (const char (*)[40])"generateSegmentCRCTree fail, json_file:");
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, module_file_path_str);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1648));
                        *(_DWORD *)(((v1 + 1648) >> 3) + 0x7FFF8000) = -117901064;
                        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(v1 + 64);
                        }
                        *(_DWORD *)(v1 + 64) = -1;
                      }
                      else
                      {
                        std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>::emplace_back<unsigned int const&,unsigned int const&,std::shared_ptr<SegmentCRCTree>&>(
                          (std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> *const)(v1 + 944),
                          &module_config_0->crc_module_index,
                          &module_config_0->crc_module_type,
                          (std::shared_ptr<SegmentCRCTree> *)(v1 + 592),
                          v47,
                          v48,
                          __last);
                        *(_DWORD *)(((v1 + 1712) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v1 + 1712) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v1 + 1743) >> 3) + 0x7FFF8000) != 0
                          && (char)((v1 - 49) & 7) >= *(_BYTE *)(((v1 + 1743) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v1 + 1712, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v1 + 1712),
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "src/security_utils.cpp",
                          "loadSegmentCRCConfig",
                          264);
                        v50 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                (common::milog::MiLogStream *const)(v1 + 1712),
                                (const char (*)[27])"crc file loaded. platform:");
                        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v50,
                                (const unsigned int *)(v1 + 80));
                        v52 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                                v51,
                                (const char (*)[17])" client_version:");
                        v53 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                                v52,
                                (const std::string *)(v1 + 1520));
                        v54 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v53,
                                (const char (*)[15])" module_index:");
                        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v54,
                                &module_config_0->crc_module_index);
                        v56 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v55,
                                (const char (*)[14])" module_type:");
                        v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v56,
                                &module_config_0->crc_module_type);
                        v58 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                v57,
                                (const char (*)[12])" file_name:");
                        v59 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                                v58,
                                &module_config_0->crc_module_file_str);
                        v60 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v59,
                                (const char (*)[7])" path:");
                        v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                                v60,
                                module_file_path_str);
                        v62 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v61,
                                (const char (*)[7])" cost:");
                        *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 4;
                        v63 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 560));
                        if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(v1 + 96);
                        }
                        *(_DWORD *)(v1 + 96) = v63;
                        v64 = common::milog::MiLogStream::operator<<<int,(int *)0>(v62, (const int *)(v1 + 96));
                        common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v64, (const char (*)[3])"us");
                        *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1712));
                        *(_DWORD *)(((v1 + 1712) >> 3) + 0x7FFF8000) = -117901064;
                      }
                      std::shared_ptr<SegmentCRCTree>::~shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v1 + 592));
                      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 560));
                    }
                    *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) = -8;
                    *(_WORD *)(((v1 + 560) >> 3) + 0x7FFF8000) = -1800;
                    *(_WORD *)(((v1 + 592) >> 3) + 0x7FFF8000) = -1800;
                    __gnu_cxx::__normal_iterator<SegmentCrcModuleConfig const*,std::vector<SegmentCrcModuleConfig>>::operator++((__gnu_cxx::__normal_iterator<const SegmentCrcModuleConfig*,std::vector<SegmentCrcModuleConfig> > *const)(v1 + 432));
                  }
                  *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) = -8;
                  v65 = std::move<std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>> &>((std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> *)(v1 + 944));
                  v67 = std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>::emplace<std::string&,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>(
                          (std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> *const)(v1 + 1984),
                          (std::string *)(v1 + 1520),
                          v65,
                          (std::string *)(v1 + 1520),
                          v66);
                  if ( !v67.second )
                  {
                    *(_DWORD *)(((v1 + 1776) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v1 + 1776) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v1 + 1807) >> 3) + 0x7FFF8000) != 0
                      && (char)((v1 + 15) & 7) >= *(_BYTE *)(((v1 + 1807) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v1 + 1776, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v1 + 1776),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "src/security_utils.cpp",
                      "loadSegmentCRCConfig",
                      270);
                    v68 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            (common::milog::MiLogStream *const)(v1 + 1776),
                            (const char (*)[30])"duplicate client_version_str:");
                    v69 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                            v68,
                            (const std::string *)(v1 + 1520));
                    v70 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            v69,
                            (const char (*)[33])" in client_version_dir_path_str:");
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v70,
                      client_version_dir_path_str);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1776));
                    *(_DWORD *)(((v1 + 1776) >> 3) + 0x7FFF8000) = -117901064;
                    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v1 + 64);
                    }
                    *(_DWORD *)(v1 + 64) = -1;
                  }
                  std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>::~vector((std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> *const)(v1 + 944));
                  std::string::~string((void *)(v1 + 1520));
                  std::unordered_map<std::string,std::string>::~unordered_map((std::unordered_map<std::string,std::string> *const)(v1 + 2080));
                }
                std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 880));
                v71 = ((v1 + 880) >> 3) + 2147450880;
                *(_WORD *)v71 = -1800;
                *(_BYTE *)(v71 + 2) = -8;
                v72 = ((v1 + 2080) >> 3) + 2147450880;
                *(_DWORD *)v72 = -117901064;
                *(_WORD *)(v72 + 4) = -1800;
                *(_BYTE *)(v72 + 6) = -8;
                *(_DWORD *)(((v1 + 1520) >> 3) + 0x7FFF8000) = -117901064;
                v73 = ((v1 + 944) >> 3) + 2147450880;
                *(_WORD *)v73 = -1800;
                *(_BYTE *)(v73 + 2) = -8;
                __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 240));
              }
              *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
              v74 = std::move<std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>> &>((std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> *)(v1 + 1984));
              v77 = std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>::emplace<unsigned int const&,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>(
                      &security_config->platform_segment_crc_map,
                      (const unsigned int *)(v1 + 80),
                      v74,
                      v75,
                      v76);
              if ( !v77.second )
              {
                *(_DWORD *)(((v1 + 1840) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v1 + 1840) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v1 + 1871) >> 3) + 0x7FFF8000) != 0
                  && (char)((v1 + 79) & 7) >= *(_BYTE *)(((v1 + 1871) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v1 + 1840, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v1 + 1840),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "src/security_utils.cpp",
                  "loadSegmentCRCConfig",
                  278);
                v78 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        (common::milog::MiLogStream *const)(v1 + 1840),
                        (const char (*)[25])"duplicate platform_type:");
                v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v78,
                        (const unsigned int *)(v1 + 80));
                v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v79,
                        (const char (*)[16])" platform_path:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v80, platform_path_str);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1840));
                *(_DWORD *)(((v1 + 1840) >> 3) + 0x7FFF8000) = -117901064;
                if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v1 + 64);
                *(_DWORD *)(v1 + 64) = -1;
              }
              std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>::~unordered_map((std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> *const)(v1 + 1984));
            }
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 816));
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 752));
          }
          *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
          v81 = ((v1 + 752) >> 3) + 2147450880;
          *(_WORD *)v81 = -1800;
          *(_BYTE *)(v81 + 2) = -8;
          v82 = ((v1 + 816) >> 3) + 2147450880;
          *(_WORD *)v82 = -1800;
          *(_BYTE *)(v82 + 2) = -8;
          v83 = ((v1 + 1984) >> 3) + 2147450880;
          *(_DWORD *)v83 = -117901064;
          *(_WORD *)(v83 + 4) = -1800;
          *(_BYTE *)(v83 + 6) = -8;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 112));
        }
        *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v1 + 64);
        v4 = *(_DWORD *)(v1 + 64);
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 688));
    }
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 624));
  }
  if ( v97 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8108) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 272) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 2176LL, v97);
  }
  return v4;
};

// Line 171: range 000000000CE356C5-000000000CE35A91
int32_t __cdecl SecurityUtilsHelper::internalGenSecurityCheckInfo(
        SecurityUtilsHelper::GenRandomCmdFunc gen_random_cmd_func,
        uint32_t security_level,
        uint32_t device_type,
        std::string *cmd_buffer_str,
        std::string *check_info_str)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  uint32_t v8; // ecx
  uint32_t v9; // ecx
  int v10; // esi
  int v11; // esi
  __int64 v12; // r14
  __int64 v13; // rsi
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-94h]
  char v19[144]; // [rsp+30h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 17 cmd_buffer_len:43 48 4 21 cmd_check_info_len:46 64 12 12 user_info:37";
  *(_QWORD *)(v5 + 16) = SecurityUtilsHelper::internalGenSecurityCheckInfo;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202177536;
  v8 = security_level;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v5 + 64);
  *(_DWORD *)(v5 + 64) = v8;
  v9 = device_type;
  if ( *(_BYTE *)(((v5 + 68) >> 3) + 0x7FFF8000) != 0
    && (char)(((v5 + 68) & 7) + 3) >= *(_BYTE *)(((v5 + 68) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5 + 68);
  }
  *(_DWORD *)(v5 + 68) = v9;
  if ( *(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v5 + 72);
  *(_DWORD *)(v5 + 72) = 65534;
  std::string::resize(cmd_buffer_str, 1024LL);
  v10 = std::string::size(cmd_buffer_str);
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v5 + 32);
  *(_DWORD *)(v5 + 32) = v10;
  std::string::resize(check_info_str, 1024LL);
  v11 = std::string::size(check_info_str);
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v5 + 48);
  *(_DWORD *)(v5 + 48) = v11;
  v12 = std::string::data(check_info_str);
  v13 = std::string::data(cmd_buffer_str);
  if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 75) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 75) & 7) >= *(_BYTE *)(((v5 + 75) >> 3) + 0x7FFF8000) )
  {
    v13 = 12LL;
    __asan_report_load_n(v5 + 64, 12LL);
  }
  ret = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, unsigned __int64, __int64, unsigned __int64))gen_random_cmd_func)(
          0LL,
          *(_QWORD *)(v5 + 64),
          *(unsigned int *)(v5 + 72),
          v13,
          v5 + 32,
          v12,
          v5 + 48);
  if ( ret )
  {
    result = ret;
  }
  else
  {
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v5 + 32);
    std::string::resize(cmd_buffer_str, *(unsigned int *)(v5 + 32));
    if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v5 + 48);
    std::string::resize(check_info_str, *(unsigned int *)(v5 + 48));
    result = 0;
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 180: range 000000000CE58D60-000000000CE58F09
bool __cdecl ZZN19SecurityUtilsHelper20loadSegmentCRCConfigER14SecurityConfigENKUlRKT_E_clISt4pairIKj24SegmentCrcPlatformConfigEEEDaS4_(
        const SecurityUtilsHelper::loadSegmentCRCConfig::<lambda(const auto:23&)> *const __closure,
        const std::pair<unsigned int const,SegmentCrcPlatformConfig> *platform_config_pair)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::string *platform_path_str; // rsi
  bool v6; // r14
  bool result; // al
  char v9[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZZN19SecurityUtilsHelper20loadSegmentCRCConfigER14SecurityConfigENKUlRKT_E_clISt4pairIKj24SegmentCrcPlatformConfigEEEDaS4_;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  platform_path_str = __closure->__platform_path_str;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
  {
    platform_path_str = (const std::string *)32;
    __asan_report_store_n(v2 + 32, 32LL);
  }
  common::tools::FileUtils::getFileNameByPath((std::string *)(v2 + 32), platform_path_str);
  v6 = std::operator==<char>(&platform_config_pair->second.platform_dir_str, (const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  result = v6;
  if ( v9 == (char *)v2 )
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

// Line 230: range 000000000CE3ACE9-000000000CE3E1BE
int32_t __cdecl SecurityUtilsHelper::loadSafeServerConfig(
        const common::tools::PTree *pt,
        SafeServerConfig *safe_server_config)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // dl
  bool v7; // dl
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  std::string *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::string > >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
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
  common::milog::MiLogStream *v31; // rcx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  unsigned __int64 v40; // rax
  proto_security::Platform *v41; // r8
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v47; // rax
  common::milog::MiLogStream *v48; // rax
  unsigned __int64 v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  int v52; // edx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v56; // [rsp+Ch] [rbp-BB4h]
  int v57; // [rsp+Ch] [rbp-BB4h]
  int v58; // [rsp+Ch] [rbp-BB4h]
  int v59; // [rsp+Ch] [rbp-BB4h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+30h] [rbp-B90h]
  std::_List_iterator<std::pair<std::string,common::tools::PTree> >::reference v61; // [rsp+38h] [rbp-B88h]
  std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *head_name; // [rsp+40h] [rbp-B80h]
  std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *head_pt; // [rsp+48h] [rbp-B78h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range_0; // [rsp+50h] [rbp-B70h]
  std::_List_iterator<std::pair<std::string,common::tools::PTree> >::reference v65; // [rsp+58h] [rbp-B68h]
  std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *entry_pt; // [rsp+68h] [rbp-B58h]
  char v67[2896]; // [rsp+70h] [rbp-B50h] BYREF

  v3 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2848LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "61 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 4 17 platform_type:337 320 4 26 security_platform_type:338 336 4 17 platform_type:351 352 8 2"
                        "0 notify_config_pt:289 384 8 15 __for_begin:301 416 8 13 __for_end:301 448 8 9 <unknown> 480 8 1"
                        "5 __for_begin:333 512 8 13 __for_end:333 544 24 9 <unknown> 608 24 9 <unknown> 672 32 9 <unknown"
                        "> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown>"
                        " 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unkn"
                        "own> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <"
                        "unknown> 1696 32 9 <unknown> 1760 32 8 name:307 1824 32 9 <unknown> 1888 32 9 value:308 1952 32 "
                        "9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272"
                        " 32 21 platform_type_str:335 2336 32 9 <unknown> 2400 32 30 security_platform_type_str:336 2464 "
                        "32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2"
                        "784 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtilsHelper::loadSafeServerConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234753535;
  v5[536862724] = -234753535;
  v5[536862725] = -234753535;
  v5[536862726] = -234753535;
  v5[536862727] = -234753535;
  v5[536862728] = -234753535;
  v5[536862729] = -234556927;
  v5[536862730] = -234556924;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -218959118;
  v5[536862756] = -218959118;
  v5[536862758] = -218959118;
  v5[536862760] = -218959118;
  v5[536862762] = -218959118;
  v5[536862764] = -218959118;
  v5[536862766] = -218959118;
  v5[536862768] = -218959118;
  v5[536862770] = -218959118;
  v5[536862772] = -218959118;
  v5[536862774] = -218959118;
  v5[536862776] = -218959118;
  v5[536862778] = -218959118;
  v5[536862780] = -218959118;
  v5[536862782] = -218959118;
  v5[536862784] = -218959118;
  v5[536862786] = -218959118;
  v5[536862788] = -218959118;
  v5[536862790] = -218959118;
  v5[536862792] = -218959118;
  v5[536862794] = -218959118;
  v5[536862796] = -218959118;
  v5[536862798] = -218959118;
  v5[536862800] = -218959118;
  v5[536862802] = -218959118;
  v5[536862804] = -218959118;
  v5[536862806] = -218959118;
  v5[536862808] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 672),
    "ConnectionStatusNotifyConfig",
    (const std::allocator<char> *)(v3 + 48));
  if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  common::tools::PTree::getChild(pt, (const std::string *)(v3 + 672));
  std::string::~string((void *)(v3 + 672));
  *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 736),
    "<xmlattr>.enable",
    (const std::allocator<char> *)(v3 + 64));
  v6 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 352), (const std::string *)(v3 + 736));
  if ( *(char *)(((unsigned __int64)safe_server_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(safe_server_config);
  safe_server_config->connection_status_notify_config.is_enable = v6;
  std::string::~string((void *)(v3 + 736));
  *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 800),
    "<xmlattr>.host",
    (const std::allocator<char> *)(v3 + 80));
  if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 864, 32LL);
  }
  common::tools::PTree::get<std::string>(
    (std::string *)(v3 + 864),
    (const common::tools::PTree *const)(v3 + 352),
    (const std::string *)(v3 + 800));
  std::string::operator=(&safe_server_config->connection_status_notify_config.host, v3 + 864);
  std::string::~string((void *)(v3 + 864));
  *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 800));
  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 80);
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 96);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 928),
    "<xmlattr>.port",
    (const std::allocator<char> *)(v3 + 96));
  if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 992, 32LL);
  }
  common::tools::PTree::get<std::string>(
    (std::string *)(v3 + 992),
    (const common::tools::PTree *const)(v3 + 352),
    (const std::string *)(v3 + 928));
  std::string::operator=(&safe_server_config->connection_status_notify_config.port, v3 + 992);
  std::string::~string((void *)(v3 + 992));
  *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 928));
  *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 96);
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 1056),
    "<xmlattr>.login_uri",
    (const std::allocator<char> *)(v3 + 112));
  if ( *(char *)(((v3 + 1120) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1120, 32LL);
  }
  common::tools::PTree::get<std::string>(
    (std::string *)(v3 + 1120),
    (const common::tools::PTree *const)(v3 + 352),
    (const std::string *)(v3 + 1056));
  std::string::operator=(&safe_server_config->connection_status_notify_config.login_uri, v3 + 1120);
  std::string::~string((void *)(v3 + 1120));
  *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 1056));
  *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 112);
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 128);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 1184),
    "<xmlattr>.logout_uri",
    (const std::allocator<char> *)(v3 + 128));
  if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1248, 32LL);
  }
  common::tools::PTree::get<std::string>(
    (std::string *)(v3 + 1248),
    (const common::tools::PTree *const)(v3 + 352),
    (const std::string *)(v3 + 1184));
  std::string::operator=(&safe_server_config->connection_status_notify_config.logout_uri, v3 + 1248);
  std::string::~string((void *)(v3 + 1248));
  *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 1184));
  *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 128);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 144);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 1312),
    "<xmlattr>.heartbeat_uri",
    (const std::allocator<char> *)(v3 + 144));
  if ( *(char *)(((v3 + 1376) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1376, 32LL);
  }
  common::tools::PTree::get<std::string>(
    (std::string *)(v3 + 1376),
    (const common::tools::PTree *const)(v3 + 352),
    (const std::string *)(v3 + 1312));
  std::string::operator=(&safe_server_config->connection_status_notify_config.heartbeat_uri, v3 + 1376);
  std::string::~string((void *)(v3 + 1376));
  *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 1312));
  *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 144);
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 160);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 1440),
    "<xmlattr>.is_ssl",
    (const std::allocator<char> *)(v3 + 160));
  v7 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 352), (const std::string *)(v3 + 1440));
  if ( *(char *)(((unsigned __int64)&safe_server_config->connection_status_notify_config.is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&safe_server_config->connection_status_notify_config.is_ssl);
  safe_server_config->connection_status_notify_config.is_ssl = v7;
  std::string::~string((void *)(v3 + 1440));
  *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 160);
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 176);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 1504),
    "<xmlattr>.method",
    (const std::allocator<char> *)(v3 + 176));
  if ( *(char *)(((v3 + 1568) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1568, 32LL);
  }
  common::tools::PTree::get<std::string>(
    (std::string *)(v3 + 1568),
    (const common::tools::PTree *const)(v3 + 352),
    (const std::string *)(v3 + 1504));
  std::string::operator=(&safe_server_config->connection_status_notify_config.method, v3 + 1568);
  std::string::~string((void *)(v3 + 1568));
  *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 1504));
  *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 176);
  *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 192);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 1632),
    "<xmlattr>.timeout",
    (const std::allocator<char> *)(v3 + 192));
  v8 = common::tools::PTree::get<unsigned int>(
         (const common::tools::PTree *const)(v3 + 352),
         (const std::string *)(v3 + 1632));
  if ( *(_BYTE *)(((unsigned __int64)&safe_server_config->connection_status_notify_config.timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&safe_server_config->connection_status_notify_config.timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&safe_server_config->connection_status_notify_config.timeout);
  }
  safe_server_config->connection_status_notify_config.timeout = v8;
  std::string::~string((void *)(v3 + 1632));
  *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 192);
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 208);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 1696),
    "<xmlattr>.heartbeat_interval",
    (const std::allocator<char> *)(v3 + 208));
  v9 = common::tools::PTree::get<unsigned int>(
         (const common::tools::PTree *const)(v3 + 352),
         (const std::string *)(v3 + 1696));
  if ( *(_BYTE *)(((unsigned __int64)&safe_server_config->connection_status_notify_config.heartbeat_interval >> 3)
                + 0x7FFF8000) != 0
    && (char)((((_BYTE)safe_server_config - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&safe_server_config->connection_status_notify_config.heartbeat_interval >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(&safe_server_config->connection_status_notify_config.heartbeat_interval);
  }
  safe_server_config->connection_status_notify_config.heartbeat_interval = v9;
  std::string::~string((void *)(v3 + 1696));
  *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 208);
  *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
  v10 = ((v3 + 544) >> 3) + 2147450880;
  *(_WORD *)v10 = 0;
  *(_BYTE *)(v10 + 2) = 0;
  if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 567) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 567) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 544, 24LL);
  }
  common::tools::PTree::getAllChild[abi:cxx11](
    (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 544),
    (const common::tools::PTree *const)(v3 + 352));
  __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 544);
  *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v3 + 384) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range);
  *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v3 + 416) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range);
  while ( std::operator!=(
            (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v3 + 384),
            (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v3 + 416)) )
  {
    v61 = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v3 + 384));
    head_name = (std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *)std::get<0ul,std::string,common::tools::PTree>(v61);
    head_pt = (std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *)std::get<1ul,std::string,common::tools::PTree>(v61);
    if ( std::operator!=<char>(head_name, "Head") )
    {
      v11 = 0;
    }
    else
    {
      *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 224);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 1824),
        "<xmlattr>.name",
        (const std::allocator<char> *)(v3 + 224));
      if ( *(char *)(((v3 + 1760) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1760, 32LL);
      }
      common::tools::PTree::get<std::string>((std::string *)(v3 + 1760), head_pt, (const std::string *)(v3 + 1824));
      std::string::~string((void *)(v3 + 1824));
      *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 224);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 240);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 1952),
        "<xmlattr>.value",
        (const std::allocator<char> *)(v3 + 240));
      if ( *(char *)(((v3 + 1888) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1888, 32LL);
      }
      common::tools::PTree::get<std::string>((std::string *)(v3 + 1888), head_pt, (const std::string *)(v3 + 1952));
      std::string::~string((void *)(v3 + 1952));
      *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 240);
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      v13 = std::map<std::string,std::string>::emplace<std::string&,std::string&>(
              &safe_server_config->connection_status_notify_config.head_map,
              (std::string *)(v3 + 1760),
              (std::string *)(v3 + 1888),
              (std::string *)&safe_server_config->connection_status_notify_config.head_map,
              v12);
      if ( !v13.second )
      {
        *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2016) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2047) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2047) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2016, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2016),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/security_utils.cpp",
          "loadSafeServerConfig",
          311);
        v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                (common::milog::MiLogStream *const)(v3 + 2016),
                (const char (*)[21])"duplicate head name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 1760));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2016));
        *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v56 = 0;
      }
      else
      {
        v56 = 1;
      }
      std::string::~string((void *)(v3 + 1888));
      std::string::~string((void *)(v3 + 1760));
      if ( v56 == 1 )
        v11 = 2;
      else
        v11 = 1;
    }
    *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = -117901064;
    *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = -117901064;
    if ( v11 && v11 != 2 )
    {
      v57 = 0;
      goto LABEL_53;
    }
    std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v3 + 384));
  }
  v57 = 1;
LABEL_53:
  std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 544));
  v15 = ((v3 + 544) >> 3) + 2147450880;
  *(_WORD *)v15 = -1800;
  *(_BYTE *)(v15 + 2) = -8;
  *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
  if ( v57 == 1 )
  {
    if ( std::operator!=<char>(&safe_server_config->connection_status_notify_config.method, off_1A28A0A0)
      && std::operator!=<char>(&safe_server_config->connection_status_notify_config.method, "POST") )
    {
      *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2080) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2111) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2111) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2080, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2080),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/security_utils.cpp",
        "loadSafeServerConfig",
        317);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 2080),
              (const char (*)[16])"unknown method:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v17,
        &safe_server_config->connection_status_notify_config.method);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2080));
      *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2144) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2175) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2144, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2144),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "loadSafeServerConfig",
        320);
      v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v3 + 2144),
              (const char (*)[33])"connection_status_notify_config:");
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" is_enable:");
      if ( *(char *)(((unsigned __int64)safe_server_config >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(safe_server_config);
      v20 = common::milog::MiLogStream::operator<<(v19, safe_server_config->connection_status_notify_config.is_enable);
      v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" host:");
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v21,
              &safe_server_config->connection_status_notify_config.host);
      v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" port:");
      v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v23,
              &safe_server_config->connection_status_notify_config.port);
      v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" login_uri:");
      v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v25,
              &safe_server_config->connection_status_notify_config.login_uri);
      v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" logout_uri:");
      v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v27,
              &safe_server_config->connection_status_notify_config.logout_uri);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v28, (const char (*)[16])" heartbeat_uri:");
      v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v29,
              &safe_server_config->connection_status_notify_config.heartbeat_uri);
      v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" is_ssl:");
      if ( *(char *)(((unsigned __int64)&safe_server_config->connection_status_notify_config.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&safe_server_config->connection_status_notify_config.is_ssl);
      v32 = common::milog::MiLogStream::operator<<(v31, safe_server_config->connection_status_notify_config.is_ssl);
      v33 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v32, (const char (*)[9])" method:");
      v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v33,
              &safe_server_config->connection_status_notify_config.method);
      v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])" timeout:");
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v35,
              &safe_server_config->connection_status_notify_config.timeout);
      v37 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v36,
              (const char (*)[21])" heartbeat_interval:");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v37,
              &safe_server_config->connection_status_notify_config.heartbeat_interval);
      v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])" head_map:");
      common::milog::MiLogStream::operator<<<std::string,std::string>(
        v39,
        &safe_server_config->connection_status_notify_config.head_map);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2144));
      *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = -117901064;
      v40 = ((v3 + 608) >> 3) + 2147450880;
      *(_WORD *)v40 = 0;
      *(_BYTE *)(v40 + 2) = 0;
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 256);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 2208),
        "SecurityPlatformMap",
        (const std::allocator<char> *)(v3 + 256));
      if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      common::tools::PTree::getChild(pt, (const std::string *)(v3 + 2208));
      if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 631) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 631) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 608, 24LL);
      }
      common::tools::PTree::getAllChild[abi:cxx11](
        (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 608),
        (const common::tools::PTree *const)(v3 + 448));
      __for_range_0 = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 608);
      common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 448));
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
      std::string::~string((void *)(v3 + 2208));
      *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 256);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v3 + 480) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v3 + 512) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range_0);
      while ( std::operator!=(
                (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v3 + 480),
                (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v3 + 512)) )
      {
        v65 = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v3 + 480));
        std::get<0ul,std::string,common::tools::PTree>(v65);
        entry_pt = (std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *)std::get<1ul,std::string,common::tools::PTree>(v65);
        *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 272);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 2336),
          "<xmlattr>.platform_type",
          (const std::allocator<char> *)(v3 + 272));
        if ( *(char *)(((v3 + 2272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2272, 32LL);
        }
        common::tools::PTree::get<std::string>((std::string *)(v3 + 2272), entry_pt, (const std::string *)(v3 + 2336));
        std::string::~string((void *)(v3 + 2336));
        *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 272);
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 288);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 2464),
          "<xmlattr>.security_platform_type",
          (const std::allocator<char> *)(v3 + 288));
        if ( *(char *)(((v3 + 2400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2431) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2400, 32LL);
        }
        common::tools::PTree::get<std::string>((std::string *)(v3 + 2400), entry_pt, (const std::string *)(v3 + 2464));
        std::string::~string((void *)(v3 + 2464));
        *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 288);
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 304);
        *(_DWORD *)(v3 + 304) = 0;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 320);
        *(_DWORD *)(v3 + 320) = 0;
        if ( !proto::PlatformType_Parse((const std::string *)(v3 + 2272), (proto::PlatformType *)(v3 + 304))
          || !proto_security::Platform_Parse((const std::string *)(v3 + 2400), (proto_security::Platform *)(v3 + 320)) )
        {
          *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2528) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2528, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2528),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/security_utils.cpp",
            "loadSafeServerConfig",
            342);
          v43 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  (common::milog::MiLogStream *const)(v3 + 2528),
                  (const char (*)[21])"parse platform_type:");
          v44 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v43,
                  (const std::string *)(v3 + 2272));
          v45 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v44,
                  (const char (*)[28])" or security_platform_type:");
          v46 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v45,
                  (const std::string *)(v3 + 2400));
          common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v46, (const char (*)[6])" fail");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2528));
          *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v58 = 0;
        }
        else
        {
          v47 = std::unordered_map<unsigned int,unsigned int>::emplace<proto::PlatformType &,proto_security::Platform &>(
                  &safe_server_config->security_platform_map,
                  (proto::PlatformType *)(v3 + 304),
                  (proto_security::Platform *)(v3 + 320),
                  (proto::PlatformType *)&safe_server_config->security_platform_map,
                  v41);
          if ( !v47.second )
          {
            *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2592) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2623) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2623) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2592, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2592),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/security_utils.cpp",
              "loadSafeServerConfig",
              347);
            v48 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    (common::milog::MiLogStream *const)(v3 + 2592),
                    (const char (*)[25])"duplicate platform_type:");
            common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
              v48,
              (const proto::PlatformType *)(v3 + 304));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2592));
            *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v58 = 0;
          }
          else
          {
            v58 = 1;
          }
        }
        std::string::~string((void *)(v3 + 2400));
        std::string::~string((void *)(v3 + 2272));
        *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = -117901064;
        *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( v58 != 1 )
        {
          v59 = 0;
          goto LABEL_103;
        }
        std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v3 + 480));
      }
      v59 = 1;
LABEL_103:
      std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 608));
      v49 = ((v3 + 608) >> 3) + 2147450880;
      *(_WORD *)v49 = -1800;
      *(_BYTE *)(v49 + 2) = -8;
      *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
      if ( v59 == 1 )
      {
        *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 336);
        for ( *(_DWORD *)(v3 + 336) = 0; ; ++*(_DWORD *)(v3 + 336) )
        {
          if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 336);
          if ( *(int *)(v3 + 336) > 14 )
          {
            v52 = 1;
            goto LABEL_119;
          }
          if ( proto::PlatformType_IsValid(*(_DWORD *)(v3 + 336))
            && !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,int>(
                  &safe_server_config->security_platform_map,
                  (const int *)(v3 + 336)) )
          {
            break;
          }
          if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 336);
        }
        *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2656) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2687) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2687) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2656, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2656),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/security_utils.cpp",
          "loadSafeServerConfig",
          359);
        v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 2656),
                (const char (*)[16])"platform_type: ");
        v51 = common::milog::MiLogStream::operator<<<int,(int *)0>(v50, (const int *)(v3 + 336));
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          v51,
          (const char (*)[46])" has no corresponding security_platform_type!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2656));
        *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v52 = 0;
LABEL_119:
        *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
        if ( v52 == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&safe_server_config->connection_status_notify_config.heartbeat_interval >> 3)
                        + 0x7FFF8000) != 0
            && (char)((((_BYTE)safe_server_config - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&safe_server_config->connection_status_notify_config.heartbeat_interval >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&safe_server_config->connection_status_notify_config.heartbeat_interval);
          }
          if ( safe_server_config->connection_status_notify_config.heartbeat_interval > 0x63 )
          {
            *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2784) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2815) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2815) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2784, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2784),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "src/security_utils.cpp",
              "loadSafeServerConfig",
              368);
            v54 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    (common::milog::MiLogStream *const)(v3 + 2784),
                    (const char (*)[23])"security_platform_map:");
            common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v54,
              &safe_server_config->security_platform_map);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2784));
            *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = -117901064;
            v2 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2720) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2720, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2720),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/security_utils.cpp",
              "loadSafeServerConfig",
              365);
            v53 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)(v3 + 2720),
                    (const char (*)[37])"notify heartbeat_interval too short:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v53,
              &safe_server_config->connection_status_notify_config.heartbeat_interval);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2720));
            *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
          }
        }
      }
    }
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 352));
  if ( v67 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF815C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 356) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2848LL, v67);
  }
  return v2;
};

// Line 373: range 000000000CE3E1BF-000000000CE3E882
int32_t __cdecl SecurityUtilsHelper::loadBaseAntiCheatLogConfig(
        const common::tools::PTree *ptree,
        BaseAntiCheatLogConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // dl
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int32_t result; // eax
  char v9[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SecurityUtilsHelper::loadBaseAntiCheatLogConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "<xmlattr>.is_enable",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v2 + 96));
  if ( *(char *)(((unsigned __int64)&config->is_enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&config->is_enable);
  config->is_enable = v5;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "<xmlattr>.log_interval",
    (const std::allocator<char> *)(v2 + 64));
  v6 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v2 + 160));
  if ( *(_BYTE *)(((unsigned __int64)&config->log_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->log_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&config->log_interval);
  }
  config->log_interval = v6;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "<xmlattr>.log_limit",
    (const std::allocator<char> *)(v2 + 80));
  v7 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v2 + 224));
  if ( *(_BYTE *)(((unsigned __int64)&config->log_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->log_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&config->log_limit);
  }
  config->log_limit = v7;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&config->log_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->log_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->log_interval);
  }
  if ( !config->log_interval )
    goto LABEL_16;
  if ( *(_BYTE *)(((unsigned __int64)&config->log_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->log_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->log_limit);
  }
  if ( config->log_limit )
  {
    result = 0;
  }
  else
  {
LABEL_16:
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "loadBaseAntiCheatLogConfig",
      380);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[32])"log_interval or log_limit is 0!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    result = -1;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 388: range 000000000CE0A03C-000000000CE0A36A
std::string *__cdecl BaseAntiCheatLogConfig::getDesc[abi:cxx11](
        std::string *retstr,
        const BaseAntiCheatLogConfig *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  char v11[512]; // [rsp+10h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 7 oss:389";
  *(_QWORD *)(v2 + 16) = BaseAntiCheatLogConfig::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "is_enable:");
  if ( *(char *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable);
  v6 = std::ostream::operator<<(v5, this->is_enable);
  v7 = std::operator<<<std::char_traits<char>>(v6, " log_interval:");
  if ( *(_BYTE *)(((unsigned __int64)&this->log_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->log_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->log_interval);
  }
  v8 = std::ostream::operator<<(v7, this->log_interval);
  v9 = std::operator<<<std::char_traits<char>>(v8, " log_limit:");
  if ( *(_BYTE *)(((unsigned __int64)&this->log_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->log_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->log_limit);
  }
  std::ostream::operator<<(v9, this->log_limit);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 396: range 000000000CE0A36C-000000000CE0A3A9
uint32_t __cdecl SecurityUtils::reducePlatformType(uint32_t platform_type)
{
  if ( platform_type <= 8 && ((1LL << platform_type) & 0x116) != 0 )
    return platform_type;
  else
    return 3;
};

// Line 412: range 000000000CE1826C-000000000CE1BFFA
int32_t __cdecl SecurityUtils::loadSecurityConfig(
        const common::tools::PTree *pt,
        SecurityConfig *input_security_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *i; // r14
  unsigned __int64 v6; // rax
  const std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>>::key_type *v7; // rax
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> >,false,true>::pointer v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 v14; // rax
  int32_t ret; // [rsp+24h] [rbp-18ACh]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+28h] [rbp-18A8h]
  const std::pair<std::string,common::tools::PTree> *child_pt; // [rsp+30h] [rbp-18A0h]
  char v19[6288]; // [rsp+40h] [rbp-1890h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(6240LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "91 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unkn"
                        "own> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> 5"
                        "60 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9 <unknown> 640 1 9"
                        " <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 8 15 __for_begin:975 736 8 "
                        "13 __for_end:975 768 8 8 iter:977 800 8 9 <unknown> 832 8 9 <unknown> 864 24 9 <unknown> 928 32 "
                        "9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 "
                        "32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1"
                        "568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknow"
                        "n> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <un"
                        "known> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9"
                        " <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 "
                        "32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3"
                        "104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknow"
                        "n> 3424 32 9 <unknown> 3488 32 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 2432 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SecurityUtils::loadSecurityConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234753535;
  v4[536862730] = -234753535;
  v4[536862731] = -234753535;
  v4[536862732] = -234753535;
  v4[536862733] = -234753535;
  v4[536862734] = -234753535;
  v4[536862735] = -234753535;
  v4[536862736] = -234753535;
  v4[536862737] = -234753535;
  v4[536862738] = -234753535;
  v4[536862739] = -234753535;
  v4[536862740] = -234753535;
  v4[536862741] = -234753535;
  v4[536862742] = -218959360;
  v4[536862743] = -218959360;
  v4[536862744] = -218959360;
  v4[536862745] = -218959360;
  v4[536862746] = -218959360;
  v4[536862747] = -234881024;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862772] = -218959118;
  v4[536862774] = -218959118;
  v4[536862776] = -218959118;
  v4[536862778] = -218959118;
  v4[536862780] = -218959118;
  v4[536862782] = -218959118;
  v4[536862784] = -218959118;
  v4[536862786] = -218959118;
  v4[536862788] = -218959118;
  v4[536862790] = -218959118;
  v4[536862792] = -218959118;
  v4[536862794] = -218959118;
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862800] = -218959118;
  v4[536862802] = -218959118;
  v4[536862804] = -218959118;
  v4[536862806] = -218959118;
  v4[536862808] = -218959118;
  v4[536862810] = -218959118;
  v4[536862812] = -218959118;
  v4[536862814] = -218959118;
  v4[536862816] = -218959118;
  v4[536862818] = -218959118;
  v4[536862820] = -218959118;
  v4[536862822] = -218959118;
  v4[536862824] = -218959118;
  v4[536862826] = -218959118;
  v4[536862828] = -218959118;
  v4[536862830] = -218959118;
  v4[536862832] = -218959118;
  v4[536862834] = -218959118;
  v4[536862911] = -202116109;
  v4[536862912] = -202116109;
  v4[536862913] = -202116109;
  v4[536862914] = -202116109;
  if ( !(_BYTE)`guard variable for'SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::ptree_reader_map
    && __cxa_guard_acquire(&`guard variable for'SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::ptree_reader_map) )
  {
    if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 928, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 928), "PlatformConfig", 0xEuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#1},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 3680),
      (std::string *)(v2 + 928),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 48));
    if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 992, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 992), "LevelConfig", 0xBuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#2},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 3744),
      (std::string *)(v2 + 992),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 64));
    if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1056, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1056),
      "is_other_platform_need_check_anti_offline",
      0x29uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#3},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 3808),
      (std::string *)(v2 + 1056),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 80));
    if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1120, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 1120), "IsSecChannelOpen", 0x10uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#4},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 3872),
      (std::string *)(v2 + 1120),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 96));
    if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1184, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1184),
      "IsChecksumVersionNotFoundForbidLogin",
      0x24uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#5},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 3936),
      (std::string *)(v2 + 1184),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 112));
    if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1248, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1248),
      "IsCheckClientVerionHashFailForbidLogin",
      0x26uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#6},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4000),
      (std::string *)(v2 + 1248),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 128));
    if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1312, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 1312), "IsMoveSpeedCheckOpen", 0x14uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#7},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4064),
      (std::string *)(v2 + 1312),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 144));
    if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1376, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1376),
      "IsMoveSpeedCheckKickPlayer",
      0x1AuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#8},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4128),
      (std::string *)(v2 + 1376),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 160));
    if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1440, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1440),
      "IsMoveSpeedCheckDragPlayer",
      0x1AuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#9},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4192),
      (std::string *)(v2 + 1440),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 176));
    if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1504, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1504),
      "IsSceneTimeMoveSpeedCheckOpen",
      0x1DuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#10},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4256),
      (std::string *)(v2 + 1504),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 192));
    if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1568, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1568),
      "IsSceneTimeMoveSpeedCheckKickPlayer",
      0x23uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#11},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4320),
      (std::string *)(v2 + 1568),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 208));
    if ( *(char *)(((v2 + 1632) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1632, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1632),
      "IsSceneTimeMoveSpeedCheckDragPlayer",
      0x23uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#12},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4384),
      (std::string *)(v2 + 1632),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 224));
    if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1696, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1696),
      "ClientReportMoveSpeedOverLimitMaxCount",
      0x26uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#13},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4448),
      (std::string *)(v2 + 1696),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 240));
    if ( *(char *)(((v2 + 1760) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1760, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 1760), "IsSegmentCrcOpen", 0x10uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#14},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4512),
      (std::string *)(v2 + 1760),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 256));
    if ( *(char *)(((v2 + 1824) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1824, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1824),
      "IsChecksumVersionNotFoundSegmentCrcDefaultOpen",
      0x2EuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#15},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4576),
      (std::string *)(v2 + 1824),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 272));
    if ( *(char *)(((v2 + 1888) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1919) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1919) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1888, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 1888),
      "SegmentCrcMaxInteractCount",
      0x1AuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#16},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4640),
      (std::string *)(v2 + 1888),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 288));
    if ( *(char *)(((v2 + 1952) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1952, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 1952), "SegmentCrcConfig", 0x10uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#17},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4704),
      (std::string *)(v2 + 1952),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 304));
    if ( *(char *)(((v2 + 2016) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2016, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2016),
      "AbilityConfigHashWhitelist",
      0x1AuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#18},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4768),
      (std::string *)(v2 + 2016),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 320));
    if ( *(char *)(((v2 + 2080) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2080, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2080),
      "IsEnableClientHashDebug",
      0x17uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#19},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4832),
      (std::string *)(v2 + 2080),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 336));
    if ( *(char *)(((v2 + 2144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2144, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2144),
      "UnityEngineTimescaleLimit",
      0x19uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#20},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4896),
      (std::string *)(v2 + 2144),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 352));
    if ( *(char *)(((v2 + 2208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2208, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2208),
      "is_forbid_monster_disallowed_death",
      0x22uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#21},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 4960),
      (std::string *)(v2 + 2208),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 368));
    if ( *(char *)(((v2 + 2272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2272, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2272),
      "is_move_back_monster_on_forbid_death",
      0x24uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#22},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5024),
      (std::string *)(v2 + 2272),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 384));
    if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2336, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2336),
      "is_revive_monster_on_forbid_death",
      0x21uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#23},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5088),
      (std::string *)(v2 + 2336),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 400));
    if ( *(char *)(((v2 + 2400) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2431) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2431) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2400, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2400),
      "is_use_server_override_map",
      0x1AuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#24},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5152),
      (std::string *)(v2 + 2400),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 416));
    if ( *(char *)(((v2 + 2464) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2464, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2464),
      "is_use_server_dynamic_value",
      0x1BuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#25},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5216),
      (std::string *)(v2 + 2464),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 432));
    if ( *(char *)(((v2 + 2528) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2528, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2528),
      "is_mouse_macro_check_open",
      0x19uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#26},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5280),
      (std::string *)(v2 + 2528),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 448));
    if ( *(char *)(((v2 + 2592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2592, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2592),
      "EnvironmentErrorConfig",
      0x16uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#27},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5344),
      (std::string *)(v2 + 2592),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 464));
    if ( *(char *)(((v2 + 2656) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2687) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2687) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2656, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 2656), "SafeServerConfig", 0x10uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#28},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5408),
      (std::string *)(v2 + 2656),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 480));
    if ( *(char *)(((v2 + 2720) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2720, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2720),
      "CheckQiandaoguaConfig",
      0x15uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#29},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5472),
      (std::string *)(v2 + 2720),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 496));
    if ( *(char *)(((v2 + 2784) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2784, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2784),
      "ClientTotalTickTimeConfig",
      0x19uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#30},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5536),
      (std::string *)(v2 + 2784),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 512));
    if ( *(char *)(((v2 + 2848) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2848, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2848),
      "ClientServerGlobalValueConfig",
      0x1DuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#31},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5600),
      (std::string *)(v2 + 2848),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 528));
    if ( *(char *)(((v2 + 2912) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2943) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2943) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2912, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 2912), "StaminaCheckConfig", 0x12uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#32},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5664),
      (std::string *)(v2 + 2912),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 544));
    if ( *(char *)(((v2 + 2976) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2976, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 2976),
      "PacketCostTimeExceedLimitConfig",
      0x1FuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#33},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5728),
      (std::string *)(v2 + 2976),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 560));
    if ( *(char *)(((v2 + 3040) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3040, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 3040),
      "RecvPacketFreqExceedLimitConfig",
      0x1FuLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#34},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5792),
      (std::string *)(v2 + 3040),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 576));
    if ( *(char *)(((v2 + 3104) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3104, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 3104),
      "SinglePacketFreqExceedLimitConfig",
      0x21uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#35},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5856),
      (std::string *)(v2 + 3104),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 592));
    if ( *(char *)(((v2 + 3168) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3199) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 3199) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3168, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 3168),
      "GadgetInteractBeyondCheckDistanceConfig",
      0x27uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#36},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5920),
      (std::string *)(v2 + 3168),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 608));
    if ( *(char *)(((v2 + 3232) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3232, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 3232),
      "LuaShellSecurityConfig",
      0x16uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#37},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 5984),
      (std::string *)(v2 + 3232),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 624));
    if ( *(char *)(((v2 + 3296) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3296, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11](
      (std::string *)(v2 + 3296),
      "AttackDamageReportConfig",
      0x18uLL);
    std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::pair<std::string,SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#38},true>(
      (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *const)(v2 + 6048),
      (std::string *)(v2 + 3296),
      (SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *)(v2 + 640));
    std::allocator<std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>>::allocator((std::allocator<std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > > *const)(v2 + 688));
    std::unordered_map<std::string,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::unordered_map(
      (std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>> *const)&SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::ptree_reader_map,
      (std::initializer_list<std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > >)__PAIR128__(38LL, v2 + 3680),
      0LL,
      (const std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>>::hasher *)(v2 + 656),
      (const std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>>::key_equal *)(v2 + 672),
      (const std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>>::allocator_type *)(v2 + 688));
    __cxa_guard_release(&`guard variable for'SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::ptree_reader_map);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::~unordered_map,
      (void *)&SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::ptree_reader_map,
      &_dso_handle);
    std::allocator<std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>>::~allocator((std::allocator<std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > > *const)(v2 + 688));
    *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *)(v2 + 6112);
          i != (std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> > *)(v2 + 3680);
          std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v2 + 3680, 2432LL);
    *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 3296));
    *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 3232));
    *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 3168));
    *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 3104));
    *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 3040));
    *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2976));
    *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2912));
    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2848));
    *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2784));
    *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2720));
    *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2656));
    *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2592));
    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2528));
    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2464));
    *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2400));
    *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2336));
    *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2272));
    *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2208));
    *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2144));
    *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2080));
    *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 2016));
    *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1952));
    *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1888));
    *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1824));
    *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1760));
    *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1696));
    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1632));
    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1568));
    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1504));
    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1440));
    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1376));
    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1312));
    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1248));
    *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1184));
    *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1120));
    *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 1056));
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 992));
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 928));
    *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
  }
  ret = 0;
  v6 = ((v2 + 864) >> 3) + 2147450880;
  *(_WORD *)v6 = 0;
  *(_BYTE *)(v6 + 2) = 0;
  if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 887) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 119) & 7) >= *(_BYTE *)(((v2 + 887) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 864, 24LL);
  }
  common::tools::PTree::getAllChild[abi:cxx11]((std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 864), pt);
  __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 864);
  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v2 + 704) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range);
  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v2 + 736) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range);
  while ( std::operator!=(
            (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v2 + 704),
            (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v2 + 736)) )
  {
    v7 = (const std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>>::key_type *)std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v2 + 704));
    child_pt = (const std::pair<std::string,common::tools::PTree> *)v7;
    *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) )
      v7 = (const std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>>::key_type *)__asan_report_store8();
    *(std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>>::const_iterator *)(v2 + 768) = std::unordered_map<std::string,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::find(&SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::ptree_reader_map, v7);
    *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)>>::const_iterator *)(v2 + 800) = std::unordered_map<std::string,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>::end(&SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::ptree_reader_map);
    v8 = std::__detail::operator!=<std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> >,true> *)(v2 + 768),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> >,true> *)(v2 + 800));
    *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::function<int ()(common::tools::PTree const&,SecurityConfig &)>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::function<int(const common::tools::PTree&,SecurityConfig&)> >,false,true> *const)(v2 + 768));
      if ( std::function<int ()(common::tools::PTree const&,SecurityConfig &)>::operator()(
             &v9->second,
             &child_pt->second,
             input_security_config) )
      {
        *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 3360) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 3360, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 3360),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/security_utils.cpp",
          "loadSecurityConfig",
          982);
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                (common::milog::MiLogStream *const)(v2 + 3360),
                (const char (*)[6])"load ");
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &child_pt->first);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v11,
          (const char (*)[26])" from SecurityConfig fail");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3360));
        *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 3424) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 3455) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 3455) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 3424, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 3424),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/security_utils.cpp",
        "loadSecurityConfig",
        988);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
              (common::milog::MiLogStream *const)(v2 + 3424),
              (const char (*)[14])"unknown node:");
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &child_pt->first);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" SecurityConfig");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3424));
      *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
    std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v2 + 704));
  }
  std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 864));
  v14 = ((v2 + 864) >> 3) + 2147450880;
  *(_WORD *)v14 = -1800;
  *(_BYTE *)(v14 + 2) = -8;
  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
  if ( std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::size(&input_security_config->platform_switch_map) != 5 )
  {
    *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3488) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3488, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3488),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "loadSecurityConfig",
      994);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 3488),
      (const char (*)[46])"platform config not found, xml is out of date");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3488));
    *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( SecurityUtilsHelper::loadSegmentCRCConfig(input_security_config) )
  {
    *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3552) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3583) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 3583) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3552, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3552),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "loadSecurityConfig",
      1000);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 3552),
      (const char (*)[26])"loadSegmentCRCConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3552));
    ret = -1;
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8304) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 780) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 6240LL, v19);
  }
  return ret;
};

// Line 417: range 000000000CE0A3AA-000000000CE0BB70
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#1}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  uint32_t v8; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  _DWORD *v11; // rax
  bool v12; // dl
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // esi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  SecurityAntiOfflineSwitchConfig *v29; // rax
  proto::PlatformType *v30; // rcx
  SecurityAntiOfflineSwitchConfig *v31; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,SecurityAntiOfflineSwitchConfig> >,bool> v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int v36; // [rsp+0h] [rbp-520h]
  int v37; // [rsp+0h] [rbp-520h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+20h] [rbp-500h]
  const std::pair<std::string,common::tools::PTree> *forbid_login_result_pt; // [rsp+28h] [rbp-4F8h]
  char v41[1264]; // [rsp+30h] [rbp-4F0h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1216LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "24 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 17 platform_type:42"
                        "0 128 4 15 result_type:444 144 4 9 <unknown> 160 8 15 __for_begin:439 192 8 13 __for_end:439 224"
                        " 24 9 <unknown> 288 32 21 platform_type_str:419 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 19 result_type_str:443 "
                        "800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> "
                        "1120 64 19 platform_config:436";
  *(_QWORD *)(v4 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234753535;
  v6[536862723] = -234556927;
  v6[536862724] = -234556924;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218959118;
  v6[536862744] = -218959118;
  v6[536862746] = -218959118;
  v6[536862748] = -218959118;
  v6[536862750] = -218959118;
  v6[536862752] = -218959118;
  v6[536862754] = -218959118;
  v6[536862757] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 352),
    "<xmlattr>.platform_type",
    (const std::allocator<char> *)(v4 + 48));
  if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 64 + 127) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 288, 32LL);
  }
  common::tools::PTree::get<std::string>((std::string *)(v4 + 288), ptree, (const std::string *)(v4 + 352));
  std::string::~string((void *)(v4 + 352));
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 112);
  *(_DWORD *)(v4 + 112) = 0;
  if ( !proto::PlatformType_Parse((const std::string *)(v4 + 288), (proto::PlatformType *)(v4 + 112)) )
  {
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
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
      "src/security_utils.cpp",
      "operator()",
      423);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           (common::milog::MiLogStream *const)(v4 + 416),
           (const char (*)[23])"unknown platform type:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v4 + 288));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 112);
    v8 = SecurityUtils::reducePlatformType(*(_DWORD *)(v4 + 112));
    if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 112);
    if ( v8 == *(_DWORD *)(v4 + 112) )
    {
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,SecurityAntiOfflineSwitchConfig>,proto::PlatformType>(
             &security_config->platform_switch_map,
             (const proto::PlatformType *)(v4 + 112)) )
      {
        *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 127) & 7) >= *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/security_utils.cpp",
          "operator()",
          433);
        v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)(v4 + 544),
                (const char (*)[25])"duplicate platform_type:");
        common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
          v10,
          (const proto::PlatformType *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
        *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
      }
      else
      {
        v11 = (_DWORD *)(((v4 + 1120) >> 3) + 2147450880);
        *v11 = 0;
        v11[1] = 0;
        SecurityAntiOfflineSwitchConfig::SecurityAntiOfflineSwitchConfig((SecurityAntiOfflineSwitchConfig *const)(v4 + 1120));
        *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v4 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v4 + 608),
          "<xmlattr>.is_anti_offline_open",
          (const std::allocator<char> *)(v4 + 64));
        v12 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v4 + 608));
        if ( *(char *)(((v4 + 1120) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v4 + 1120);
        *(_BYTE *)(v4 + 1120) = v12;
        std::string::~string((void *)(v4 + 608));
        *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v4 + 64);
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v4 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v4 + 672),
          "<xmlattr>.forbid_login_level",
          (const std::allocator<char> *)(v4 + 80));
        v13 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v4 + 672));
        if ( *(_BYTE *)(((v4 + 1124) >> 3) + 0x7FFF8000) != 0
          && (char)(((v4 + 100) & 7) + 3) >= *(_BYTE *)(((v4 + 1124) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v4 + 1124);
        }
        *(_DWORD *)(v4 + 1124) = v13;
        std::string::~string((void *)(v4 + 672));
        *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v4 + 80);
        *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
        v14 = ((v4 + 224) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 247) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 55) & 7) >= *(_BYTE *)(((v4 + 247) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 224, 24LL);
        }
        common::tools::PTree::getAllChild[abi:cxx11](
          (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 224),
          ptree);
        __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 224);
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v4 + 160) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range);
        *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v4 + 192) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range);
        while ( std::operator!=(
                  (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v4 + 160),
                  (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v4 + 192)) )
        {
          forbid_login_result_pt = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v4 + 160));
          if ( std::operator==<char>(&forbid_login_result_pt->first, "ForbidLoginResultType") )
          {
            *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = 0;
            *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v4 + 96);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v4 + 800),
              "<xmlattr>.value",
              (const std::allocator<char> *)(v4 + 96));
            if ( *(char *)(((v4 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 64 + 63) & 7) >= *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 736, 32LL);
            }
            common::tools::PTree::get<std::string>(
              (std::string *)(v4 + 736),
              &forbid_login_result_pt->second,
              (const std::string *)(v4 + 800));
            std::string::~string((void *)(v4 + 800));
            *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v4 + 96);
            *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v4 + 128);
            *(_DWORD *)(v4 + 128) = 0;
            if ( !proto_log::AntiOfflineResultType_Parse(
                    (const std::string *)(v4 + 736),
                    (proto_log::AntiOfflineResultType *)(v4 + 128)) )
            {
              *(_DWORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v4 + 864) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 864, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v4 + 864),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "src/security_utils.cpp",
                "operator()",
                447);
              v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      (common::milog::MiLogStream *const)(v4 + 864),
                      (const char (*)[31])"unknown AntiOfflineResultType:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v4 + 736));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 864));
              *(_DWORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = -117901064;
              v3 = -1;
              v36 = 0;
            }
            else
            {
              *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v4 + 128);
              v16 = *(_DWORD *)(v4 + 128);
              if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v4 + 144);
              *(_DWORD *)(v4 + 144) = v16;
              v17 = std::set<unsigned int>::insert(
                      (std::set<unsigned int> *const)(v4 + 1136),
                      (std::set<unsigned int>::value_type *)(v4 + 144));
              *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( !v17.second )
              {
                *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v4 + 928) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) != 0
                  && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v4 + 928, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v4 + 928),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "src/security_utils.cpp",
                  "operator()",
                  452);
                v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        (common::milog::MiLogStream *const)(v4 + 928),
                        (const char (*)[33])"duplicate ForbidLoginResultType:");
                v19 = common::milog::MiLogStream::operator<<<proto_log::AntiOfflineResultType,(proto_log::AntiOfflineResultType*)0>(
                        v18,
                        (const proto_log::AntiOfflineResultType *)(v4 + 128));
                v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" name:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v20,
                  (const std::string *)(v4 + 736));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 928));
                *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = -117901064;
                v3 = -1;
                v36 = 0;
              }
              else
              {
                v36 = 1;
              }
            }
            std::string::~string((void *)(v4 + 736));
            *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v36 != 1 )
            {
              v37 = 0;
              goto LABEL_58;
            }
          }
          std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v4 + 160));
        }
        v37 = 1;
LABEL_58:
        std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v4 + 224));
        v21 = ((v4 + 224) >> 3) + 2147450880;
        *(_WORD *)v21 = -1800;
        *(_BYTE *)(v21 + 2) = -8;
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v37 == 1 )
        {
          *(_DWORD *)(((v4 + 992) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 992) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 63) & 7) >= *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 992, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 992),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "src/security_utils.cpp",
            "operator()",
            457);
          v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  (common::milog::MiLogStream *const)(v4 + 992),
                  (const char (*)[15])"platform_type:");
          v23 = common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
                  v22,
                  (const proto::PlatformType *)(v4 + 112));
          v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v23,
                  (const char (*)[23])" is_anti_offline_open:");
          if ( *(char *)(((v4 + 1120) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(v4 + 1120);
          v25 = common::milog::MiLogStream::operator<<(v24, *(_BYTE *)(v4 + 1120));
          v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v25,
                  (const char (*)[21])" forbid_login_level:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v4 + 1124));
          v28 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v27,
                  (const char (*)[31])" forbid_login_result_type_set:");
          common::milog::MiLogStream::operator<<<unsigned int>(v28, (const std::set<unsigned int> *)(v4 + 1136));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 992));
          *(_DWORD *)(((v4 + 992) >> 3) + 0x7FFF8000) = -117901064;
          v29 = std::move<SecurityAntiOfflineSwitchConfig &>((SecurityAntiOfflineSwitchConfig *)(v4 + 1120));
          v32 = std::map<unsigned int,SecurityAntiOfflineSwitchConfig>::emplace<proto::PlatformType &,SecurityAntiOfflineSwitchConfig>(
                  &security_config->platform_switch_map,
                  (proto::PlatformType *)(v4 + 112),
                  v29,
                  v30,
                  v31);
          if ( !v32.second )
          {
            *(_DWORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 1056) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 1087) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 64 + 127) & 7) >= *(_BYTE *)(((v4 + 1087) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 1056, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 1056),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/security_utils.cpp",
              "operator()",
              462);
            v33 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    (common::milog::MiLogStream *const)(v4 + 1056),
                    (const char (*)[25])"duplicate platform_type:");
            v34 = common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
                    v33,
                    (const proto::PlatformType *)(v4 + 112));
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v34,
              (const char (*)[24])" in anti offline config");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1056));
            *(_DWORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            v3 = -1;
          }
          else
          {
            v3 = 0;
          }
        }
        SecurityAntiOfflineSwitchConfig::~SecurityAntiOfflineSwitchConfig((SecurityAntiOfflineSwitchConfig *const)(v4 + 1120));
      }
    }
    else
    {
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 63) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/security_utils.cpp",
        "operator()",
        428);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             (common::milog::MiLogStream *const)(v4 + 480),
             (const char (*)[23])"invalid platform type:");
      common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
        v9,
        (const proto::PlatformType *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
    }
  }
  std::string::~string((void *)(v4 + 288));
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450920 - (((_DWORD)v6 + 2147450928) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v4 >> 3) + 0x7FFF8094) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1216LL, v41);
  }
  return v3;
};

// Line 470: range 000000000CE0BB72-000000000CE0C510
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#2}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // edx
  common::milog::MiLogStream *v8; // rax
  int result; // eax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  SecurityAntiOfflineLevelConfig *level_config; // [rsp+28h] [rbp-208h]
  char v20[512]; // [rsp+30h] [rbp-200h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 14 check_type:472 96 32 9 <unknown> 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#2}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556927;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "<xmlattr>.check_type",
    (const std::allocator<char> *)(v3 + 32));
  v6 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 96));
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 80);
  *(_DWORD *)(v3 + 80) = v6;
  std::string::~string((void *)(v3 + 96));
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 80);
  if ( !*(_DWORD *)(v3 + 80) || !proto::SecurityCheckType_IsValid(*(_DWORD *)(v3 + 80)) )
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
      "src/security_utils.cpp",
      "operator()",
      475);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[29])"unknown security check type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    result = -1;
  }
  else if ( common::tools::MiscUtils::isContains<std::map<unsigned int,SecurityAntiOfflineLevelConfig>,unsigned int>(
              &security_config->level_config_map,
              (const unsigned int *)(v3 + 80)) )
  {
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      480);
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[22])"duplicate check_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    result = -1;
  }
  else
  {
    level_config = std::map<unsigned int,SecurityAntiOfflineLevelConfig>::operator[](
                     &security_config->level_config_map,
                     (const std::map<unsigned int,SecurityAntiOfflineLevelConfig>::key_type *)(v3 + 80));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 288),
      "<xmlattr>.down_grade_num",
      (const std::allocator<char> *)(v3 + 48));
    v11 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 288));
    if ( *(_BYTE *)(((unsigned __int64)level_config >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_config >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(level_config);
    }
    level_config->down_grade_num = v11;
    std::string::~string((void *)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 352),
      "<xmlattr>.up_grade_num",
      (const std::allocator<char> *)(v3 + 64));
    v12 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 352));
    if ( *(_BYTE *)(((unsigned __int64)&level_config->up_grade_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->up_grade_num >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_store4(&level_config->up_grade_num);
    }
    level_config->up_grade_num = v12;
    std::string::~string((void *)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 64);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "operator()",
      486);
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[12])"check_type:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
    v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" down_grade_num:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v15,
            (const unsigned int *)level_config);
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" up_grade_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &level_config->up_grade_num);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    result = 0;
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
  return result;
};

// Line 492: range 000000000CE0C512-000000000CE0C882
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#3}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // dl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#3}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(char *)(((unsigned __int64)&security_config->is_other_platform_need_check_anti_offline >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&security_config->is_other_platform_need_check_anti_offline);
  security_config->is_other_platform_need_check_anti_offline = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    495);
  v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[43])"is_other_platform_need_check_anti_offline:");
  if ( *(char *)(((unsigned __int64)&security_config->is_other_platform_need_check_anti_offline >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&security_config->is_other_platform_need_check_anti_offline);
  common::milog::MiLogStream::operator<<(v7, security_config->is_other_platform_need_check_anti_offline);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 501: range 000000000CE0C884-000000000CE0CC0C
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#4}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-E4h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#4}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  value = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = value != 0;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_sec_channel_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_sec_channel_open >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_sec_channel_open);
  }
  security_config->is_sec_channel_open = v6;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    505);
  v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[21])"is_sec_channel_open:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_sec_channel_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_sec_channel_open >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_sec_channel_open);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_sec_channel_open);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 511: range 000000000CE0CC0E-000000000CE0CF96
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#5}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-E4h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#5}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  value = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = value != 0;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_checksum_version_not_found_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 98) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_checksum_version_not_found_forbid_login >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_checksum_version_not_found_forbid_login);
  }
  security_config->is_checksum_version_not_found_forbid_login = v6;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    515);
  v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[44])"is_checksum_version_not_found_forbid_login:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_checksum_version_not_found_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 98) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_checksum_version_not_found_forbid_login >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_checksum_version_not_found_forbid_login);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_checksum_version_not_found_forbid_login);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 521: range 000000000CE0CF98-000000000CE0D320
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#6}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-E4h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#6}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  value = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = value != 0;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_check_client_verion_hash_fail_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 99) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_check_client_verion_hash_fail_forbid_login >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_check_client_verion_hash_fail_forbid_login);
  }
  security_config->is_check_client_verion_hash_fail_forbid_login = v6;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    525);
  v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[47])"is_check_client_verion_hash_fail_forbid_login:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_check_client_verion_hash_fail_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 99) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_check_client_verion_hash_fail_forbid_login >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_check_client_verion_hash_fail_forbid_login);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_check_client_verion_hash_fail_forbid_login);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 532: range 000000000CE0D322-000000000CE0D69C
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#7}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // dl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#7}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(char *)(((unsigned __int64)&security_config->is_move_speed_check_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&security_config->is_move_speed_check_open);
  security_config->is_move_speed_check_open = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    535);
  v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[26])"is_move_speed_check_open:");
  if ( *(char *)(((unsigned __int64)&security_config->is_move_speed_check_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&security_config->is_move_speed_check_open);
  common::milog::MiLogStream::operator<<(v7, security_config->is_move_speed_check_open);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 541: range 000000000CE0D69E-000000000CE0DA30
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#8}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-E4h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#8}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  value = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = value != 0;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_move_speed_check_kick_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_move_speed_check_kick_player >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_move_speed_check_kick_player);
  }
  security_config->is_move_speed_check_kick_player = v6;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    545);
  v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[33])"is_move_speed_check_kick_player:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_move_speed_check_kick_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_move_speed_check_kick_player >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_move_speed_check_kick_player);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_move_speed_check_kick_player);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 551: range 000000000CE0DA32-000000000CE0DDB6
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#9}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#9}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_move_speed_check_drag_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 30) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_move_speed_check_drag_player >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_move_speed_check_drag_player);
  }
  security_config->is_move_speed_check_drag_player = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    554);
  v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[33])"is_move_speed_check_drag_player:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_move_speed_check_drag_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 30) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_move_speed_check_drag_player >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_move_speed_check_drag_player);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_move_speed_check_drag_player);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 561: range 000000000CE0DDB8-000000000CE0E13C
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#10}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#10}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 29) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_open >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_scene_time_move_speed_check_open);
  }
  security_config->is_scene_time_move_speed_check_open = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    564);
  v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[37])"is_scene_time_move_speed_check_open:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 29) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_open >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_scene_time_move_speed_check_open);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_scene_time_move_speed_check_open);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 570: range 000000000CE0E13E-000000000CE0E4D0
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#11}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-E4h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#11}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  value = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = value != 0;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_kick_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_kick_player >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_scene_time_move_speed_check_kick_player);
  }
  security_config->is_scene_time_move_speed_check_kick_player = v6;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    574);
  v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[44])"is_scene_time_move_speed_check_kick_player:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_kick_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 28) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_kick_player >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_scene_time_move_speed_check_kick_player);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_scene_time_move_speed_check_kick_player);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 580: range 000000000CE0E4D2-000000000CE0E856
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#12}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#12}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_drag_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 27) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_drag_player >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_scene_time_move_speed_check_drag_player);
  }
  security_config->is_scene_time_move_speed_check_drag_player = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    583);
  v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[44])"is_scene_time_move_speed_check_drag_player:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_drag_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 27) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_scene_time_move_speed_check_drag_player >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_scene_time_move_speed_check_drag_player);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_scene_time_move_speed_check_drag_player);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 589: range 000000000CE0E858-000000000CE0EB97
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#13}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  _BOOL4 v6; // ecx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#13}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->client_report_move_speed_over_limit_max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&security_config->client_report_move_speed_over_limit_max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&security_config->client_report_move_speed_over_limit_max_count);
  }
  security_config->client_report_move_speed_over_limit_max_count = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    592);
  v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[47])"client_report_move_speed_over_limit_max_count:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v7,
    &security_config->client_report_move_speed_over_limit_max_count);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 599: range 000000000CE0EB98-000000000CE0EF20
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#14}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-E4h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#14}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  value = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = value != 0;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_segment_crc_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_segment_crc_open >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_segment_crc_open);
  }
  security_config->is_segment_crc_open = v6;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    603);
  v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[21])"is_segment_crc_open:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_segment_crc_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_segment_crc_open >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_segment_crc_open);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_segment_crc_open);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 609: range 000000000CE0EF22-000000000CE0F2AA
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#15}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  unsigned int value; // [rsp+2Ch] [rbp-E4h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#15}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  value = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  v6 = value != 0;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_checksum_version_not_found_segment_crc_default_open >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 101) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_checksum_version_not_found_segment_crc_default_open >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_checksum_version_not_found_segment_crc_default_open);
  }
  security_config->is_checksum_version_not_found_segment_crc_default_open = v6;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    613);
  v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[56])"is_checksum_version_not_found_segment_crc_default_open:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_checksum_version_not_found_segment_crc_default_open >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 101) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_checksum_version_not_found_segment_crc_default_open >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_checksum_version_not_found_segment_crc_default_open);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_checksum_version_not_found_segment_crc_default_open);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 619: range 000000000CE0F2AC-000000000CE0F5E3
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#16}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // edx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#16}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->segment_crc_max_interact_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&security_config->segment_crc_max_interact_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&security_config->segment_crc_max_interact_count);
  }
  security_config->segment_crc_max_interact_count = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    622);
  v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[32])"segment_crc_max_interact_count:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v7,
    &security_config->segment_crc_max_interact_count);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 628: range 000000000CE0F5E4-000000000CE0F809
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#17}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int result; // eax
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#17}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_has_segment_crc_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_has_segment_crc_config >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_has_segment_crc_config);
  }
  security_config->is_has_segment_crc_config = 1;
  if ( SecurityUtilsHelper::loadSegmentCrcPlatformConfig(ptree, &security_config->segment_crc_config_map) )
  {
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      633);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v3 + 32),
      (const char (*)[58])"loadSegmentCrcPlatformConfig fail, node: SegmentCrcConfig");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 641: range 000000000CE0F80A-000000000CE104F9
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#18}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // cl
  unsigned __int64 v8; // rax
  bool v9; // r15
  common::milog::MiLogStream *v10; // rax
  int32_t StringHash; // edx
  const std::string *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<int const,std::string >,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // edx
  int v20; // edx
  common::milog::MiLogStream *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-2E0h]
  const std::string *ability_name_str; // [rsp+28h] [rbp-2D8h]
  char v28[720]; // [rsp+30h] [rbp-2D0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(672LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 21 ability_name_hash:653 96 8 15 __fo"
                        "r_begin:651 128 8 13 __for_end:651 160 24 21 whitelist_str_vec:645 224 32 9 <unknown> 288 32 17 "
                        "whitelist_str:644 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 60"
                        "8 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#18}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -234556927;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -202116109;
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 224),
    "<xmlattr>.is_open",
    (const std::allocator<char> *)(v4 + 32));
  v7 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v4 + 224), 1);
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_ability_config_hash_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 20) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_ability_config_hash_check_open >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_ability_config_hash_check_open);
  }
  security_config->is_ability_config_hash_check_open = v7;
  std::string::~string((void *)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 352),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v4 + 48));
  if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 288, 32LL);
  }
  common::tools::PTree::getValue((std::string *)(v4 + 288), ptree, (const std::string *)(v4 + 352));
  std::string::~string((void *)(v4 + 352));
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  v8 = ((v4 + 160) >> 3) + 2147450880;
  *(_WORD *)v8 = 0;
  *(_BYTE *)(v8 + 2) = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 160));
  *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 416),
    ",",
    (const std::allocator<char> *)(v4 + 64));
  v9 = common::tools::StringUtils::split(
         (const std::string *)(v4 + 288),
         (const std::string *)(v4 + 416),
         (std::vector<std::string> *)(v4 + 160),
         1) != 0;
  std::string::~string((void *)(v4 + 416));
  *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      648);
    v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)(v4 + 480),
            (const char (*)[27])"split fail, whitelist_str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v4 + 288));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v4 + 160);
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v4 + 96) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v4 + 128) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v4 + 96),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v4 + 128)) )
    {
      ability_name_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v4 + 96));
      *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
      StringHash = common::tools::StringUtils::getStringHash(ability_name_str);
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 80);
      *(_DWORD *)(v4 + 80) = StringHash;
      v13 = std::unordered_map<int,std::string>::emplace<int &,std::string const&>(
              &security_config->ability_config_hash_whitelist_map,
              (int *)(v4 + 80),
              ability_name_str,
              (int *)&security_config->ability_config_hash_whitelist_map,
              v12);
      if ( !v13.second )
      {
        *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/security_utils.cpp",
          "operator()",
          656);
        v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v4 + 544),
                (const char (*)[29])"duplicate ability_name_hash:");
        v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v4 + 80));
        v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v15,
                (const char (*)[19])" ability_name_str:");
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, ability_name_str);
        v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v17,
                (const char (*)[20])" in whiltelist_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v4 + 288));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
        *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v19 != 1 )
      {
        v20 = 0;
        goto LABEL_29;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v4 + 96));
    }
    v20 = 1;
LABEL_29:
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v20 == 1 )
    {
      *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 608),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "operator()",
        661);
      v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)(v4 + 608),
              (const char (*)[35])"is_ability_config_hash_check_open:");
      if ( *(_BYTE *)(((unsigned __int64)&security_config->is_ability_config_hash_check_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)security_config - 20) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_ability_config_hash_check_open >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load1(&security_config->is_ability_config_hash_check_open);
      }
      v22 = common::milog::MiLogStream::operator<<(v21, security_config->is_ability_config_hash_check_open);
      v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v22,
              (const char (*)[36])" ability_config_hash_whitelist_map:");
      common::milog::MiLogStream::operator<<<int,std::string>(v23, &security_config->ability_config_hash_whitelist_map);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 608));
      *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 160));
  std::string::~string((void *)(v4 + 288));
  result = v3;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 668: range 000000000CE104FA-000000000CE10874
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#19}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // dl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#19}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(char *)(((unsigned __int64)&security_config->is_enable_client_hash_debug >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&security_config->is_enable_client_hash_debug);
  security_config->is_enable_client_hash_debug = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    671);
  v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[29])"is_enable_client_hash_debug:");
  if ( *(char *)(((unsigned __int64)&security_config->is_enable_client_hash_debug >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&security_config->is_enable_client_hash_debug);
  common::milog::MiLogStream::operator<<(v7, security_config->is_enable_client_hash_debug);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 677: range 000000000CE10876-000000000CE10BDE
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#20}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  float v6; // xmm0_4
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#20}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = (float)(int)common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->unity_engine_timescale_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->unity_engine_timescale_limit >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->unity_engine_timescale_limit);
  }
  security_config->unity_engine_timescale_limit = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    680);
  v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[30])"unity_engine_timescale_limit:");
  common::milog::MiLogStream::operator<<<float,(float *)0>(v7, &security_config->unity_engine_timescale_limit);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 686: range 000000000CE10BE0-000000000CE10F5A
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#21}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // dl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#21}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(char *)(((unsigned __int64)&security_config->is_forbid_monster_disallowed_death >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&security_config->is_forbid_monster_disallowed_death);
  security_config->is_forbid_monster_disallowed_death = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    689);
  v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[36])"is_forbid_monster_disallowed_death:");
  if ( *(char *)(((unsigned __int64)&security_config->is_forbid_monster_disallowed_death >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&security_config->is_forbid_monster_disallowed_death);
  common::milog::MiLogStream::operator<<(v7, security_config->is_forbid_monster_disallowed_death);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 695: range 000000000CE10F5C-000000000CE112E0
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#22}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#22}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_move_back_monster_on_forbid_death >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_move_back_monster_on_forbid_death >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_move_back_monster_on_forbid_death);
  }
  security_config->is_move_back_monster_on_forbid_death = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    698);
  v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[38])"is_move_back_monster_on_forbid_death:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_move_back_monster_on_forbid_death >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_move_back_monster_on_forbid_death >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_move_back_monster_on_forbid_death);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_move_back_monster_on_forbid_death);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 704: range 000000000CE112E2-000000000CE11666
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#23}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#23}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_revive_monster_on_forbid_death >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 50) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_revive_monster_on_forbid_death >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_revive_monster_on_forbid_death);
  }
  security_config->is_revive_monster_on_forbid_death = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    707);
  v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[35])"is_revive_monster_on_forbid_death:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_revive_monster_on_forbid_death >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 50) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_revive_monster_on_forbid_death >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_revive_monster_on_forbid_death);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_revive_monster_on_forbid_death);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 713: range 000000000CE11668-000000000CE119EC
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#24}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#24}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_use_server_override_map);
  }
  security_config->is_use_server_override_map = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    716);
  v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[28])"is_use_server_override_map:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_use_server_override_map);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_use_server_override_map);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 722: range 000000000CE119EE-000000000CE11D72
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#25}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#25}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_use_server_dynamic_value);
  }
  security_config->is_use_server_dynamic_value = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    725);
  v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[29])"is_use_server_dynamic_value:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_use_server_dynamic_value);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_use_server_dynamic_value);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 731: range 000000000CE11D74-000000000CE120F8
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#26}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // cl
  common::milog::MiLogStream *v7; // rcx
  int result; // eax
  char v10[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#26}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.value",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_mouse_macro_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_mouse_macro_check_open >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->is_mouse_macro_check_open);
  }
  security_config->is_mouse_macro_check_open = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    734);
  v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[27])"is_mouse_macro_check_open:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_mouse_macro_check_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_mouse_macro_check_open >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_mouse_macro_check_open);
  }
  common::milog::MiLogStream::operator<<(v7, security_config->is_mouse_macro_check_open);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 740: range 000000000CE120FA-000000000CE1384B
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#27}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  bool v10; // dl
  bool v11; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  EnvironmentErrorConfig *v23; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,EnvironmentErrorConfig> >,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned __int64 v27; // rax
  _BOOL4 v29; // [rsp+4h] [rbp-59Ch]
  int v30; // [rsp+4h] [rbp-59Ch]
  int v31; // [rsp+4h] [rbp-59Ch]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+28h] [rbp-578h]
  std::_List_iterator<std::pair<std::string,common::tools::PTree> >::reference v34; // [rsp+30h] [rbp-570h]
  std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *node_name_str; // [rsp+38h] [rbp-568h]
  std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *environment_platform_config_pt; // [rsp+40h] [rbp-560h]
  char v37[1360]; // [rsp+50h] [rbp-550h] BYREF

  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1312LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 4 1"
                        "7 platform_type:747 144 8 15 __for_begin:742 176 8 13 __for_end:742 208 8 9 <unknown> 240 24 9 <"
                        "unknown> 304 32 21 platform_type_str:746 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown"
                        "> 560 32 19 white_regex_str:755 624 32 9 <unknown> 688 32 9 <unknown> 752 32 19 black_regex_str:"
                        "757 816 32 9 <unknown> 880 32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unkn"
                        "own> 1136 32 9 <unknown> 1200 80 10 config:753";
  *(_QWORD *)(v4 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#27}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234753535;
  v6[536862723] = -234753535;
  v6[536862724] = 61956;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862725] = -234881024;
  v6[536862726] = 62194;
  v6[536862726] = -234881024;
  v6[536862727] = 62194;
  v6[536862728] = -218959360;
  v6[536862729] = 62194;
  v6[536862730] = -219021312;
  v6[536862731] = 62194;
  v6[536862732] = -219021312;
  v6[536862733] = 62194;
  v6[536862734] = -219021312;
  v6[536862735] = 62194;
  v6[536862736] = -219021312;
  v6[536862737] = 62194;
  v6[536862738] = -219021312;
  v6[536862739] = 62194;
  v6[536862740] = -219021312;
  v6[536862741] = 62194;
  v6[536862742] = -219021312;
  v6[536862743] = 62194;
  v6[536862744] = -219021312;
  v6[536862745] = 62194;
  v6[536862746] = -219021312;
  v6[536862747] = 62194;
  v6[536862748] = -219021312;
  v6[536862749] = 62194;
  v6[536862750] = -219021312;
  v6[536862751] = 62194;
  v6[536862752] = -219021312;
  v6[536862753] = 62194;
  v6[536862754] = -219021312;
  v6[536862755] = 62194;
  v6[536862756] = -219021312;
  v6[536862757] = 62194;
  v6[536862760] = -202116109;
  if ( *(char *)(((v4 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 263) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 7) & 7) >= *(_BYTE *)(((v4 + 263) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 240, 24LL);
  }
  common::tools::PTree::getAllChild[abi:cxx11](
    (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 240),
    ptree);
  __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 240);
  if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v4 + 144) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range);
  if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v4 + 176) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range);
  while ( std::operator!=(
            (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v4 + 144),
            (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v4 + 176)) )
  {
    v34 = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v4 + 144));
    node_name_str = (std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *)std::get<0ul,std::string,common::tools::PTree>(v34);
    environment_platform_config_pt = (std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *)std::get<1ul,std::string,common::tools::PTree>(v34);
    if ( std::operator==<char>(node_name_str, "EnvironmentPlatformConfig") )
    {
      *(_DWORD *)(((v4 + 304) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v4 + 368) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v4 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v4 + 368),
        "<xmlattr>.platform_type",
        (const std::allocator<char> *)(v4 + 48));
      if ( *(char *)(((v4 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 79) & 7) >= *(_BYTE *)(((v4 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 304, 32LL);
      }
      common::tools::PTree::get<std::string>(
        (std::string *)(v4 + 304),
        environment_platform_config_pt,
        (const std::string *)(v4 + 368));
      std::string::~string((void *)(v4 + 368));
      *(_DWORD *)(((v4 + 368) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v4 + 48);
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 128);
      *(_DWORD *)(v4 + 128) = 0;
      if ( !proto::PlatformType_Parse((const std::string *)(v4 + 304), (proto::PlatformType *)(v4 + 128)) )
      {
        *(_DWORD *)(((v4 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 463) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 80 + 31) & 7) >= *(_BYTE *)(((v4 + 463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 432, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/security_utils.cpp",
          "operator()",
          750);
        v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               (common::milog::MiLogStream *const)(v4 + 432),
               (const char (*)[23])"unknown platform type:");
        v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v4 + 304));
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v8,
          (const char (*)[27])" in EnvironmentErrorConfig");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 432));
        *(_DWORD *)(((v4 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v29 = 0;
      }
      else
      {
        v9 = ((v4 + 1200) >> 3) + 2147450880;
        *(_DWORD *)v9 = 0;
        *(_DWORD *)(v9 + 4) = 0;
        *(_WORD *)(v9 + 8) = 0;
        EnvironmentErrorConfig::EnvironmentErrorConfig((EnvironmentErrorConfig *const)(v4 + 1200));
        *(_DWORD *)(((v4 + 496) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v4 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v4 + 496),
          "<xmlattr>.is_open",
          (const std::allocator<char> *)(v4 + 64));
        v10 = common::tools::PTree::get<bool>(environment_platform_config_pt, (const std::string *)(v4 + 496));
        if ( *(char *)(((v4 + 1200) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v4 + 1200);
        *(_BYTE *)(v4 + 1200) = v10;
        std::string::~string((void *)(v4 + 496));
        *(_DWORD *)(((v4 + 496) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v4 + 64);
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v4 + 560) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 624) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v4 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v4 + 624),
          "<xmlattr>.white_regex",
          (const std::allocator<char> *)(v4 + 80));
        if ( *(char *)(((v4 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 79) & 7) >= *(_BYTE *)(((v4 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 560, 32LL);
        }
        common::tools::PTree::get<std::string>(
          (std::string *)(v4 + 560),
          environment_platform_config_pt,
          (const std::string *)(v4 + 624));
        std::string::~string((void *)(v4 + 624));
        *(_DWORD *)(((v4 + 624) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v4 + 80);
        *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v4 + 688) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v4 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v4 + 688),
          "<xmlattr>.is_check_black_regex",
          (const std::allocator<char> *)(v4 + 96));
        v11 = common::tools::PTree::get<bool>(environment_platform_config_pt, (const std::string *)(v4 + 688));
        if ( *(char *)(((v4 + 1240) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v4 + 1240);
        *(_BYTE *)(v4 + 1240) = v11;
        std::string::~string((void *)(v4 + 688));
        *(_DWORD *)(((v4 + 688) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v4 + 96);
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v4 + 752) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v4 + 816) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v4 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v4 + 816),
          "<xmlattr>.black_regex",
          (const std::allocator<char> *)(v4 + 112));
        if ( *(char *)(((v4 + 752) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 783) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 16 + 31) & 7) >= *(_BYTE *)(((v4 + 783) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 752, 32LL);
        }
        common::tools::PTree::get<std::string>(
          (std::string *)(v4 + 752),
          environment_platform_config_pt,
          (const std::string *)(v4 + 816));
        std::string::~string((void *)(v4 + 816));
        *(_DWORD *)(((v4 + 816) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v4 + 112);
        *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_DWORD *)(((v4 + 880) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 880) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 911) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 113) & 7) >= *(_BYTE *)(((v4 + 911) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 880, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 880),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/security_utils.cpp",
          "operator()",
          758);
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v4 + 880),
                (const char (*)[38])"load EnvironmentErrorConfig platform:");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v4 + 304));
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v13,
                (const char (*)[16])" platform_type:");
        v15 = common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
                v14,
                (const proto::PlatformType *)(v4 + 128));
        v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" is_open:");
        if ( *(char *)(((v4 + 1200) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v4 + 1200);
        v17 = common::milog::MiLogStream::operator<<(v16, *(_BYTE *)(v4 + 1200));
        v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v17,
                (const char (*)[23])" is_check_black_regex:");
        if ( *(char *)(((v4 + 1240) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v4 + 1240);
        v19 = common::milog::MiLogStream::operator<<(v18, *(_BYTE *)(v4 + 1240));
        v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v19,
                (const char (*)[18])" white_regex_str:");
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v4 + 560));
        v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v21,
                (const char (*)[18])" black_regex_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v4 + 752));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 880));
        *(_DWORD *)(((v4 + 880) >> 3) + 0x7FFF8000) = -117901064;
        *(_DWORD *)(((v4 + 944) >> 3) + 0x7FFF8000) = 0;
        std::basic_regex<char,std::regex_traits<char>>::basic_regex<std::char_traits<char>,std::allocator<char>>(
          (std::basic_regex<char,std::regex_traits<char> > *const)(v4 + 944),
          (const std::string *)(v4 + 560),
          (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
        std::basic_regex<char,std::regex_traits<char>>::operator=(
          (std::basic_regex<char,std::regex_traits<char> > *const)(v4 + 1208),
          (std::basic_regex<char,std::regex_traits<char> > *)(v4 + 944));
        std::basic_regex<char,std::regex_traits<char>>::~basic_regex((std::basic_regex<char,std::regex_traits<char> > *const)(v4 + 944));
        *(_DWORD *)(((v4 + 944) >> 3) + 0x7FFF8000) = -117901064;
        *(_DWORD *)(((v4 + 1008) >> 3) + 0x7FFF8000) = 0;
        std::basic_regex<char,std::regex_traits<char>>::basic_regex<std::char_traits<char>,std::allocator<char>>(
          (std::basic_regex<char,std::regex_traits<char> > *const)(v4 + 1008),
          (const std::string *)(v4 + 752),
          (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
        std::basic_regex<char,std::regex_traits<char>>::operator=(
          (std::basic_regex<char,std::regex_traits<char> > *const)(v4 + 1248),
          (std::basic_regex<char,std::regex_traits<char> > *)(v4 + 1008));
        std::basic_regex<char,std::regex_traits<char>>::~basic_regex((std::basic_regex<char,std::regex_traits<char> > *const)(v4 + 1008));
        *(_DWORD *)(((v4 + 1008) >> 3) + 0x7FFF8000) = -117901064;
        v24 = std::map<unsigned int,EnvironmentErrorConfig>::emplace<proto::PlatformType &,EnvironmentErrorConfig&>(
                &security_config->environment_config_map,
                (proto::PlatformType *)(v4 + 128),
                (EnvironmentErrorConfig *)(v4 + 1200),
                (proto::PlatformType *)&security_config->environment_config_map,
                v23);
        if ( !v24.second )
        {
          *(_DWORD *)(((v4 + 1136) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 1136) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 1167) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 113) & 7) >= *(_BYTE *)(((v4 + 1167) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 1136, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 1136),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/security_utils.cpp",
            "operator()",
            773);
          v25 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  (common::milog::MiLogStream *const)(v4 + 1136),
                  (const char (*)[25])"duplicate platform_type:");
          v26 = common::milog::MiLogStream::operator<<<proto::PlatformType,(proto::PlatformType*)0>(
                  v25,
                  (const proto::PlatformType *)(v4 + 128));
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v26,
            (const char (*)[27])" in EnvironmentErrorConfig");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1136));
          *(_DWORD *)(((v4 + 1136) >> 3) + 0x7FFF8000) = -117901064;
          v3 = -1;
          v30 = 0;
        }
        else
        {
          v30 = 1;
        }
        std::string::~string((void *)(v4 + 752));
        std::string::~string((void *)(v4 + 560));
        EnvironmentErrorConfig::~EnvironmentErrorConfig((EnvironmentErrorConfig *const)(v4 + 1200));
        v29 = v30 == 1;
      }
      std::string::~string((void *)(v4 + 304));
      *(_DWORD *)(((v4 + 304) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
      v27 = ((v4 + 1200) >> 3) + 2147450880;
      *(_DWORD *)v27 = -117901064;
      *(_DWORD *)(v27 + 4) = -117901064;
      *(_WORD *)(v27 + 8) = -1800;
      *(_DWORD *)(((v4 + 560) >> 3) + 0x7FFF8000) = -117901064;
      *(_DWORD *)(((v4 + 752) >> 3) + 0x7FFF8000) = -117901064;
      if ( !v29 )
      {
        v31 = 0;
        goto LABEL_45;
      }
    }
    std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v4 + 144));
  }
  v31 = 1;
LABEL_45:
  std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v4 + 240));
  if ( v31 == 1 )
    v3 = 0;
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF809C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 164) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1312LL, v37);
  }
  return v3;
};

// Line 783: range 000000000CE1384C-000000000CE13A2E
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#28}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int result; // eax
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#28}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( SecurityUtilsHelper::loadSafeServerConfig(ptree, &security_config->safe_server_config) )
  {
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      787);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v3 + 32),
      (const char (*)[26])"loadSafeServerConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 795: range 000000000CE13A30-000000000CE1449F
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#29}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // cl
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int result; // eax
  CheckQiandaoguaConfig *config; // [rsp+28h] [rbp-208h]
  char v21[512]; // [rsp+30h] [rbp-200h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#29}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234753535;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  config = &security_config->check_qiandaogua_config;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "<xmlattr>.is_enable",
    (const std::allocator<char> *)(v3 + 32));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 88) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->check_qiandaogua_config);
  }
  config->is_enable = v6;
  std::string::~string((void *)(v3 + 96));
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "<xmlattr>.attack_count_limit",
    (const std::allocator<char> *)(v3 + 48));
  v7 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 160));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.attack_count_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 88 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.attack_count_limit >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->check_qiandaogua_config.attack_count_limit);
  }
  security_config->check_qiandaogua_config.attack_count_limit = v7;
  std::string::~string((void *)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "<xmlattr>.record_entry_limit",
    (const std::allocator<char> *)(v3 + 64));
  v8 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 224));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.record_entry_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 88 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.record_entry_limit >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->check_qiandaogua_config.record_entry_limit);
  }
  security_config->check_qiandaogua_config.record_entry_limit = v8;
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "<xmlattr>.anticheat_log_limit",
    (const std::allocator<char> *)(v3 + 80));
  v9 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 288));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.anticheat_log_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 88 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.anticheat_log_limit >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->check_qiandaogua_config.anticheat_log_limit);
  }
  security_config->check_qiandaogua_config.anticheat_log_limit = v9;
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 80);
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
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
    "src/security_utils.cpp",
    "operator()",
    802);
  v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          (common::milog::MiLogStream *const)(v3 + 352),
          (const char (*)[26])"check_qiandaogua_config: ");
  v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" is_enable:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 88) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(config);
  }
  v12 = common::milog::MiLogStream::operator<<(v11, config->is_enable);
  v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v12, (const char (*)[21])" attack_count_limit:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v13,
          &security_config->check_qiandaogua_config.attack_count_limit);
  v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v14, (const char (*)[21])" record_entry_limit:");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v15,
          &security_config->check_qiandaogua_config.record_entry_limit);
  v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v16,
          (const char (*)[22])" anticheat_log_limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v17,
    &security_config->check_qiandaogua_config.anticheat_log_limit);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.record_entry_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 88 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.record_entry_limit >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&security_config->check_qiandaogua_config.record_entry_limit);
  }
  if ( security_config->check_qiandaogua_config.record_entry_limit > 0x3E8 )
    goto LABEL_22;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.anticheat_log_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 88 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->check_qiandaogua_config.anticheat_log_limit >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&security_config->check_qiandaogua_config.anticheat_log_limit);
  }
  if ( security_config->check_qiandaogua_config.anticheat_log_limit <= 0x2710 )
  {
    result = 0;
  }
  else
  {
LABEL_22:
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      809);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      (common::milog::MiLogStream *const)(v3 + 416),
      (const char (*)[60])"record_entry_limit or anticheat_log_limit >= 1000, too big!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    result = -1;
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
  return result;
};

// Line 817: range 000000000CE144A0-000000000CE14B39
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#30}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  double v6; // xmm0_8
  unsigned int v7; // edx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int result; // eax
  ClientTotalTickTimeConfig *config; // [rsp+28h] [rbp-168h]
  char v16[352]; // [rsp+30h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#30}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  config = &security_config->client_total_tick_time_config;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.max_delay_time",
    (const std::allocator<char> *)(v3 + 32));
  v6 = (double)(int)common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->client_total_tick_time_config >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  config->max_delay_time = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 128),
    "<xmlattr>.anticheat_log_limit",
    (const std::allocator<char> *)(v3 + 48));
  v7 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->client_total_tick_time_config.anticheat_log_limit >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&security_config->client_total_tick_time_config.anticheat_log_limit >> 3)
                + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&security_config->client_total_tick_time_config.anticheat_log_limit);
  }
  security_config->client_total_tick_time_config.anticheat_log_limit = v7;
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    822);
  v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[47])"client_total_tick_time_config: max_delay_time:");
  v9 = common::milog::MiLogStream::operator<<<double,(double *)0>(v8, &config->max_delay_time);
  v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v9, (const char (*)[22])" anticheat_log_limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v10,
    &security_config->client_total_tick_time_config.anticheat_log_limit);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((unsigned __int64)&security_config->client_total_tick_time_config.anticheat_log_limit >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&security_config->client_total_tick_time_config.anticheat_log_limit >> 3)
                + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&security_config->client_total_tick_time_config.anticheat_log_limit);
  }
  if ( security_config->client_total_tick_time_config.anticheat_log_limit <= 0x2710 )
  {
    result = 0;
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
      "src/security_utils.cpp",
      "operator()",
      825);
    v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[21])"anticheat_log_limit:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v11,
            &security_config->client_total_tick_time_config.anticheat_log_limit);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" too big!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    result = -1;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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

// Line 833: range 000000000CE14B3A-000000000CE15451
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#31}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // dl
  unsigned int v7; // edx
  unsigned int v8; // ecx
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int result; // eax
  ClientServerGlobalValueConfig *config; // [rsp+28h] [rbp-208h]
  char v19[512]; // [rsp+30h] [rbp-200h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#31}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234753535;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  config = &security_config->client_server_global_value_config;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "<xmlattr>.is_open",
    (const std::allocator<char> *)(v3 + 32));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 96));
  if ( *(char *)(((unsigned __int64)&security_config->client_server_global_value_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(config);
  config->is_open = v6;
  std::string::~string((void *)(v3 + 96));
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "<xmlattr>.sgv_name",
    (const std::allocator<char> *)(v3 + 48));
  if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 224, 32LL);
  }
  common::tools::PTree::get<std::string>((std::string *)(v3 + 224), ptree, (const std::string *)(v3 + 160));
  std::string::operator=(&security_config->client_server_global_value_config.sgv_name, v3 + 224);
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "<xmlattr>.timeout_seconds",
    (const std::allocator<char> *)(v3 + 64));
  v7 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 288));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->client_server_global_value_config.timeout_seconds >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&security_config->client_server_global_value_config.timeout_seconds >> 3)
                + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&security_config->client_server_global_value_config.timeout_seconds);
  }
  security_config->client_server_global_value_config.timeout_seconds = v7;
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 352),
    "<xmlattr>.anticheat_log_limit",
    (const std::allocator<char> *)(v3 + 80));
  v8 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 352));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->client_server_global_value_config.anticheat_log_limit >> 3)
                + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 56 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->client_server_global_value_config.anticheat_log_limit >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->client_server_global_value_config.anticheat_log_limit);
  }
  security_config->client_server_global_value_config.anticheat_log_limit = v8;
  std::string::~string((void *)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 80);
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 416, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 416),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/security_utils.cpp",
    "operator()",
    840);
  v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         (common::milog::MiLogStream *const)(v3 + 416),
         (const char (*)[44])"client_server_global_value_config: is_open:");
  if ( *(char *)(((unsigned __int64)config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(config);
  v10 = common::milog::MiLogStream::operator<<(v9, config->is_open);
  v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" sgv_name:");
  v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v11,
          &security_config->client_server_global_value_config.sgv_name);
  v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])" timeout_seconds:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v13,
          &security_config->client_server_global_value_config.timeout_seconds);
  v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v14,
          (const char (*)[22])" anticheat_log_limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v15,
    &security_config->client_server_global_value_config.anticheat_log_limit);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
  result = 0;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
  return result;
};

// Line 847: range 000000000CE15452-000000000CE15CD8
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#32}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // cl
  float v8; // ecx
  float v9; // ecx
  unsigned int v10; // ecx
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int result; // eax
  StaminaCheckConfig *config; // [rsp+28h] [rbp-1C8h]
  char v21[448]; // [rsp+30h] [rbp-1C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9"
                        " <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#32}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -234753535;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -202116109;
  config = &security_config->stamina_check_config;
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 96),
    "<xmlattr>.is_enable",
    (const std::allocator<char> *)(v4 + 32));
  v7 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v4 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 8) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->stamina_check_config);
  }
  config->is_enable = v7;
  std::string::~string((void *)(v4 + 96));
  *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    "<xmlattr>.record_limit",
    (const std::allocator<char> *)(v4 + 48));
  *(float *)v3.m128i_i32 = common::tools::PTree::get<float>(ptree, (const std::string *)(v4 + 160));
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config.record_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config.record_limit >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->stamina_check_config.record_limit);
  }
  security_config->stamina_check_config.record_limit = v8;
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 224),
    "<xmlattr>.low_limit",
    (const std::allocator<char> *)(v4 + 64));
  *(float *)v3.m128i_i32 = common::tools::PTree::get<float>(ptree, (const std::string *)(v4 + 224));
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config.low_limit >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)security_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config.low_limit >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->stamina_check_config.low_limit);
  }
  security_config->stamina_check_config.low_limit = v9;
  std::string::~string((void *)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 288),
    "<xmlattr>.anticheat_log_limit",
    (const std::allocator<char> *)(v4 + 80));
  v10 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v4 + 288));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config.anticheat_log_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config.anticheat_log_limit >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->stamina_check_config.anticheat_log_limit);
  }
  security_config->stamina_check_config.anticheat_log_limit = v10;
  std::string::~string((void *)(v4 + 288));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 80);
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 352, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 352),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/security_utils.cpp",
    "operator()",
    854);
  v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v4 + 352),
          (const char (*)[32])"stamina_check_config is_enable:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 8) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->stamina_check_config >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(config);
  }
  v12 = common::milog::MiLogStream::operator<<(v11, config->is_enable);
  v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" record_limit:");
  v14 = common::milog::MiLogStream::operator<<<float,(float *)0>(
          v13,
          &security_config->stamina_check_config.record_limit);
  v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" low_limit:");
  v16 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, &security_config->stamina_check_config.low_limit);
  v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v16,
          (const char (*)[22])" anticheat_log_limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v17,
    &security_config->stamina_check_config.anticheat_log_limit);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
  result = 0;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
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
  return result;
};

// Line 861: range 000000000CE15CDA-000000000CE16DE7
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#33}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int result; // eax
  uint64_t v7; // rax
  uint64_t v8; // rax
  bool v9; // dl
  uint64_t v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  char v36[832]; // [rsp+30h] [rbp-340h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <u"
                        "nknown> 736 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#33}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234753535;
  v5[536862724] = -234753535;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -202116109;
  if ( SecurityUtilsHelper::loadBaseAntiCheatLogConfig(ptree, &security_config->packet_cost_time_exceed_limit_config) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      866);
    common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[69])"packet_cost_time_exceed_limit_config loadBaseAntiCheatLogConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    result = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 224),
      "<xmlattr>.check_interval_ms",
      (const std::allocator<char> *)(v3 + 48));
    v7 = common::tools::PTree::get<unsigned long>(ptree, (const std::string *)(v3 + 224));
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.check_interval_ms >> 3)
                  + 0x7FFF8000) )
      v7 = __asan_report_store8();
    security_config->packet_cost_time_exceed_limit_config.check_interval_ms = v7;
    std::string::~string((void *)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 288),
      "<xmlattr>.cost_time_percent",
      (const std::allocator<char> *)(v3 + 64));
    v8 = common::tools::PTree::get<unsigned long>(ptree, (const std::string *)(v3 + 288));
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.cost_time_percent >> 3)
                  + 0x7FFF8000) )
      v8 = __asan_report_store8();
    security_config->packet_cost_time_exceed_limit_config.cost_time_percent = v8;
    std::string::~string((void *)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 64);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 80);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 352),
      "<xmlattr>.is_enable_kick",
      (const std::allocator<char> *)(v3 + 80));
    v9 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 352));
    if ( *(char *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.is_enable_kick >> 3)
                 + 0x7FFF8000) < 0 )
      __asan_report_store1(&security_config->packet_cost_time_exceed_limit_config.is_enable_kick);
    security_config->packet_cost_time_exceed_limit_config.is_enable_kick = v9;
    std::string::~string((void *)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 80);
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 96);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 416),
      "<xmlattr>.kick_time_percent",
      (const std::allocator<char> *)(v3 + 96));
    v10 = common::tools::PTree::get<unsigned long>(ptree, (const std::string *)(v3 + 416));
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.kick_time_percent >> 3)
                  + 0x7FFF8000) )
      v10 = __asan_report_store8();
    security_config->packet_cost_time_exceed_limit_config.kick_time_percent = v10;
    std::string::~string((void *)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 96);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 112);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 480),
      "<xmlattr>.check_kick_interval",
      (const std::allocator<char> *)(v3 + 112));
    v11 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 480));
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.check_kick_interval >> 3)
                  + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.check_kick_interval >> 3)
                  + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&security_config->packet_cost_time_exceed_limit_config.check_kick_interval);
    }
    security_config->packet_cost_time_exceed_limit_config.check_kick_interval = v11;
    std::string::~string((void *)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 112);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 544),
      "<xmlattr>.trigger_kick_count",
      (const std::allocator<char> *)(v3 + 128));
    v12 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 544));
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.trigger_kick_count >> 3)
                  + 0x7FFF8000) != 0
      && (char)((((_BYTE)security_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.trigger_kick_count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&security_config->packet_cost_time_exceed_limit_config.trigger_kick_count);
    }
    security_config->packet_cost_time_exceed_limit_config.trigger_kick_count = v12;
    std::string::~string((void *)(v3 + 544));
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 128);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 144);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 608),
      "<xmlattr>.thread_kick_interval",
      (const std::allocator<char> *)(v3 + 144));
    v13 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 608));
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.thread_kick_interval >> 3)
                  + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.thread_kick_interval >> 3)
                  + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&security_config->packet_cost_time_exceed_limit_config.thread_kick_interval);
    }
    security_config->packet_cost_time_exceed_limit_config.thread_kick_interval = v13;
    std::string::~string((void *)(v3 + 608));
    *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 144);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.check_interval_ms >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&security_config->packet_cost_time_exceed_limit_config.check_interval_ms);
    if ( !security_config->packet_cost_time_exceed_limit_config.check_interval_ms )
      goto LABEL_34;
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.cost_time_percent >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&security_config->packet_cost_time_exceed_limit_config.cost_time_percent);
    if ( !security_config->packet_cost_time_exceed_limit_config.cost_time_percent
      || security_config->packet_cost_time_exceed_limit_config.cost_time_percent > 0x64 )
    {
      goto LABEL_34;
    }
    if ( *(_BYTE *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.kick_time_percent >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&security_config->packet_cost_time_exceed_limit_config.kick_time_percent);
    if ( security_config->packet_cost_time_exceed_limit_config.kick_time_percent
      && security_config->packet_cost_time_exceed_limit_config.kick_time_percent <= 0x64
      && security_config->packet_cost_time_exceed_limit_config.kick_time_percent >= security_config->packet_cost_time_exceed_limit_config.cost_time_percent )
    {
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "operator()",
        885);
      v20 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)(v3 + 736),
              (const char (*)[38])"packet_cost_time_exceed_limit_config ");
      v21 = common::milog::MiLogStream::operator<<<PacketCostTimeExceedLimitConfig,(PacketCostTimeExceedLimitConfig*)0>(
              v20,
              &security_config->packet_cost_time_exceed_limit_config);
      v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v21,
              (const char (*)[20])" check_interval_ms:");
      v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v22,
              &security_config->packet_cost_time_exceed_limit_config.check_interval_ms);
      v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v23,
              (const char (*)[20])" cost_time_percent:");
      v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v24,
              &security_config->packet_cost_time_exceed_limit_config.cost_time_percent);
      v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])" is_enable_kick:");
      if ( *(char *)(((unsigned __int64)&security_config->packet_cost_time_exceed_limit_config.is_enable_kick >> 3)
                   + 0x7FFF8000) < 0 )
        __asan_report_load1(&security_config->packet_cost_time_exceed_limit_config.is_enable_kick);
      v27 = common::milog::MiLogStream::operator<<(
              v26,
              security_config->packet_cost_time_exceed_limit_config.is_enable_kick);
      v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v27,
              (const char (*)[20])" kick_time_percent:");
      v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v28,
              &security_config->packet_cost_time_exceed_limit_config.kick_time_percent);
      v30 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v29,
              (const char (*)[22])" check_kick_interval:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v30,
              &security_config->packet_cost_time_exceed_limit_config.check_kick_interval);
      v32 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v31,
              (const char (*)[21])" trigger_kick_count:");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v32,
              &security_config->packet_cost_time_exceed_limit_config.trigger_kick_count);
      v34 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v33,
              (const char (*)[23])" thread_kick_interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v34,
        &security_config->packet_cost_time_exceed_limit_config.thread_kick_interval);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      result = 0;
    }
    else
    {
LABEL_34:
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/security_utils.cpp",
        "operator()",
        879);
      v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[49])"packet_cost_time_exceed_limit_config is invalid!");
      v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v14,
              (const char (*)[20])" check_interval_ms:");
      v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v15,
              &security_config->packet_cost_time_exceed_limit_config.check_interval_ms);
      v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v16,
              (const char (*)[20])" cost_time_percent:");
      v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v17,
              &security_config->packet_cost_time_exceed_limit_config.cost_time_percent);
      v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v18,
              (const char (*)[20])" kick_time_percent:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v19,
        &security_config->packet_cost_time_exceed_limit_config.kick_time_percent);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      result = -1;
    }
  }
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 899: range 000000000CE16DE8-000000000CE170F1
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#34}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int result; // eax
  common::milog::MiLogStream *v7; // rdx
  char v9[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#34}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  if ( SecurityUtilsHelper::loadBaseAntiCheatLogConfig(ptree, &security_config->recv_packet_freq_exceed_limit_config) )
  {
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      904);
    common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
      (common::milog::MiLogStream *const)(v3 + 32),
      (const char (*)[69])"recv_packet_freq_exceed_limit_config loadBaseAntiCheatLogConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    result = -1;
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "operator()",
      907);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[38])"recv_packet_freq_exceed_limit_config ");
    common::milog::MiLogStream::operator<<<RecvPacketFreqExceedLimitConfig,(RecvPacketFreqExceedLimitConfig*)0>(
      v7,
      &security_config->recv_packet_freq_exceed_limit_config);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = 0;
  }
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 913: range 000000000CE170F2-000000000CE173FB
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#35}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int result; // eax
  common::milog::MiLogStream *v7; // rdx
  char v9[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#35}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  if ( SecurityUtilsHelper::loadBaseAntiCheatLogConfig(ptree, &security_config->single_packet_freq_exceed_limit_config) )
  {
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      918);
    common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
      (common::milog::MiLogStream *const)(v3 + 32),
      (const char (*)[71])"single_packet_freq_exceed_limit_config loadBaseAntiCheatLogConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    result = -1;
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "operator()",
      921);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[40])"single_packet_freq_exceed_limit_config ");
    common::milog::MiLogStream::operator<<<SinglePacketFreqExceedLimitConfig,(SinglePacketFreqExceedLimitConfig*)0>(
      v7,
      &security_config->single_packet_freq_exceed_limit_config);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = 0;
  }
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 927: range 000000000CE173FC-000000000CE178A0
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#36}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int result; // eax
  unsigned int v7; // ecx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char v12[288]; // [rsp+30h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#36}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  if ( SecurityUtilsHelper::loadBaseAntiCheatLogConfig(
         ptree,
         (BaseAntiCheatLogConfig *)&security_config->gadget_interact_beyond_check_distance_config) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "operator()",
      932);
    common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
      (common::milog::MiLogStream *const)(v3 + 64),
      (const char (*)[77])"gadget_interact_beyond_check_distance_config loadBaseAntiCheatLogConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 128),
      "<xmlattr>.min_record_count",
      (const std::allocator<char> *)(v3 + 48));
    v7 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&security_config->gadget_interact_beyond_check_distance_config.min_record_count >> 3)
                  + 0x7FFF8000) != 0
      && (char)((((_BYTE)security_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->gadget_interact_beyond_check_distance_config.min_record_count >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&security_config->gadget_interact_beyond_check_distance_config.min_record_count);
    }
    security_config->gadget_interact_beyond_check_distance_config.min_record_count = v7;
    std::string::~string((void *)(v3 + 128));
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
      1u,
      "src/security_utils.cpp",
      "operator()",
      936);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[46])"gadget_interact_beyond_check_distance_config ");
    v9 = common::milog::MiLogStream::operator<<<GadgetInteractBeyondCheckDistanceConfig,(GadgetInteractBeyondCheckDistanceConfig*)0>(
           v8,
           &security_config->gadget_interact_beyond_check_distance_config);
    v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" min_record_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v10,
      &security_config->gadget_interact_beyond_check_distance_config.min_record_count);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0;
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 943: range 000000000CE178A2-000000000CE17DC2
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#37}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // cl
  unsigned int v7; // ecx
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int result; // eax
  LuaShellSecurityConfig *config; // [rsp+28h] [rbp-128h]
  char v14[288]; // [rsp+30h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#37}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  config = &security_config->lua_shell_security_config;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    "<xmlattr>.is_check_timeout_open",
    (const std::allocator<char> *)(v3 + 32));
  v6 = common::tools::PTree::get<bool>(ptree, (const std::string *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->lua_shell_security_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 104) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->lua_shell_security_config >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store1(&security_config->lua_shell_security_config);
  }
  config->is_check_timeout_open = v6;
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 128),
    "<xmlattr>.lua_shell_timeout_seconds",
    (const std::allocator<char> *)(v3 + 48));
  v7 = common::tools::PTree::get<unsigned int>(ptree, (const std::string *)(v3 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->lua_shell_security_config.lua_shell_timeout_seconds >> 3)
                + 0x7FFF8000) != 0
    && (char)((((_BYTE)security_config - 104 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->lua_shell_security_config.lua_shell_timeout_seconds >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&security_config->lua_shell_security_config.lua_shell_timeout_seconds);
  }
  security_config->lua_shell_security_config.lua_shell_timeout_seconds = v7;
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "src/security_utils.cpp",
    "operator()",
    948);
  v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[49])"lua_shell_security_config is_check_timeout_open:");
  if ( *(_BYTE *)(((unsigned __int64)&security_config->lua_shell_security_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config - 104) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->lua_shell_security_config >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load1(config);
  }
  v9 = common::milog::MiLogStream::operator<<(v8, config->is_check_timeout_open);
  v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          v9,
          (const char (*)[28])" lua_shell_timeout_seconds:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v10,
    &security_config->lua_shell_security_config.lua_shell_timeout_seconds);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  result = 0;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 955: range 000000000CE17DC4-000000000CE1826A
int __cdecl SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#38}::operator()(
        const SecurityUtils::loadSecurityConfig::<lambda(const common::tools::PTree&, SecurityConfig&)> *const __closure,
        const common::tools::PTree *ptree,
        SecurityConfig *security_config)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int result; // eax
  float v8; // ecx
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v13[288]; // [rsp+30h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = SecurityUtils::loadSecurityConfig(common::tools::PTree const&,SecurityConfig &)::{lambda(common::tools::PTree const&,SecurityConfig &)#38}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  if ( SecurityUtilsHelper::loadBaseAntiCheatLogConfig(
         ptree,
         (BaseAntiCheatLogConfig *)&security_config->attack_damage_report_config) )
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
      "src/security_utils.cpp",
      "operator()",
      960);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      (common::milog::MiLogStream *const)(v4 + 64),
      (const char (*)[60])"attack_damage_report_config loadBaseAntiCheatLogConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = -1;
  }
  else
  {
    std::allocator<char>::allocator(v4 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 128),
      "<xmlattr>.min_report_damage",
      (const std::allocator<char> *)(v4 + 48));
    *(float *)v3.m128i_i32 = common::tools::PTree::get<float>(ptree, (const std::string *)(v4 + 128));
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    if ( *(_BYTE *)(((unsigned __int64)&security_config->attack_damage_report_config.min_report_damage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)security_config - 96 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&security_config->attack_damage_report_config.min_report_damage >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&security_config->attack_damage_report_config.min_report_damage);
    }
    security_config->attack_damage_report_config.min_report_damage = v8;
    std::string::~string((void *)(v4 + 128));
    *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 48);
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "operator()",
      964);
    v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[30])"attack_damage_report_config: ");
    v10 = common::milog::MiLogStream::operator<<<AttackDamageReportConfig,(AttackDamageReportConfig*)0>(
            v9,
            &security_config->attack_damage_report_config);
    v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v10,
            (const char (*)[20])" min_report_damage:");
    common::milog::MiLogStream::operator<<<float,(float *)0>(
      v11,
      &security_config->attack_damage_report_config.min_report_damage);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    result = 0;
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 1016: range 000000000CE1BFFC-000000000CE1C3D6
std::map<unsigned int,std::set<std::string>> *__cdecl SecurityUtils::getCrcVersionMap[abi:cxx11](
        std::map<unsigned int,std::set<std::string>> *retstr,
        const SecurityConfig *security_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::set<std::string> *v5; // rdx
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>>> *__for_range; // [rsp+10h] [rbp-100h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> >,false,false>::reference v8; // [rsp+18h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> > >::type *platform_type; // [rsp+20h] [rbp-F0h]
  const std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> > >::type *__for_range_0; // [rsp+30h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,false,true>::reference v11; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> > >::type *client_version_str; // [rsp+40h] [rbp-D0h]
  char v13[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 16 __for_begin:1018 64 8 14 __for_end:1018 96 8 16 __for_begin:1020 128 8 14 __for_end:1020";
  *(_QWORD *)(v2 + 16) = SecurityUtils::getCrcVersionMap[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  std::map<unsigned int,std::set<std::string>>::map(retstr);
  __for_range = &security_config->platform_segment_crc_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> >,false> *)(v2 + 64)) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> >,false,false> *const)(v2 + 32));
    platform_type = std::get<0ul,unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>(v8);
    __for_range_0 = std::get<1ul,unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>(v8);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>>::const_iterator *)(v2 + 128) = std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,true> *)(v2 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,true> *)(v2 + 128)) )
    {
      v11 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,false,true> *const)(v2 + 96));
      client_version_str = std::get<0ul,std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>(v11);
      std::get<1ul,std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>(v11);
      v5 = std::map<unsigned int,std::set<std::string>>::operator[](retstr, platform_type);
      std::set<std::string>::insert(v5, client_version_str);
      std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,false,true> *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> >,false,false> *const)(v2 + 32));
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 1030: range 000000000CE1C3D8-000000000CE1C474
int32_t __cdecl SecurityUtils::genAntiOfflineCheckInfoOnLogin(
        uint32_t security_level,
        uint32_t platform_type,
        std::string *cmd_buffer_str,
        std::string *check_info_str,
        int32_t *result)
{
  int32_t v6; // ecx
  uint32_t machine_type; // [rsp+2Ch] [rbp-4h]

  machine_type = SecurityUtilsHelper::getPlatformMatchinType(platform_type);
  if ( !machine_type )
    return 34;
  v6 = SecurityUtilsHelper::internalGenSecurityCheckInfo(
         (SecurityUtilsHelper::GenRandomCmdFunc)GetRandomCmdForLogin,
         security_level,
         machine_type,
         cmd_buffer_str,
         check_info_str);
  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(result);
  }
  *result = v6;
  return 0;
};

// Line 1043: range 000000000CE1C476-000000000CE1CD86
bool __cdecl SecurityUtils::verifyAndRecordAntiOfflineCheckInfo(
        const std::string *check_info,
        const std::string *reply_buffer,
        const SecurityAntiOfflineLevelConfig *anti_offline_level_config,
        proto::SecurityAntiOfflineDataBin *data_bin,
        proto_log::AntiCheatBodyAntiOfflineResult *result_log,
        uint32_t *result_type)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  BYTE *v9; // r14
  uint32_t v10; // r15d
  BYTE *v11; // rax
  google::protobuf::uint32 v12; // edx
  google::protobuf::uint32 v13; // edx
  uint32_t v14; // ecx
  char v15; // al
  google::protobuf::uint32 v16; // edx
  uint32_t v17; // eax
  google::protobuf::uint32 v18; // edx
  google::protobuf::uint32 v19; // edx
  google::protobuf::uint32 v20; // edx
  google::protobuf::uint32 v21; // edx
  uint32_t v22; // ecx
  char v23; // al
  google::protobuf::uint32 v24; // edx
  google::protobuf::uint32 v25; // edx
  google::protobuf::uint32 v26; // edx
  google::protobuf::uint32 v27; // edx
  google::protobuf::uint32 v28; // edx
  google::protobuf::uint32 v29; // edx
  google::protobuf::uint32 v30; // edx
  google::protobuf::uint32 v31; // edx
  bool result; // al
  uint32_t uiCheckInfo; // [rsp+Ch] [rbp-B4h]
  int check_result; // [rsp+48h] [rbp-78h]
  uint32_t old_security_level; // [rsp+4Ch] [rbp-74h]
  char v40[112]; // [rsp+50h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 4 18 verify_result:1046";
  *(_QWORD *)(v6 + 16) = SecurityUtils::verifyAndRecordAntiOfflineCheckInfo;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(result_type);
  }
  *result_type = 0;
  check_result = 0;
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v6 + 32);
  *(_DWORD *)(v6 + 32) = 0;
  if ( (unsigned __int8)std::string::empty(reply_buffer) )
  {
    if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(result_type);
    }
    *result_type = 2;
  }
  else
  {
    uiCheckInfo = std::string::size(check_info);
    v9 = (BYTE *)std::string::c_str(check_info);
    v10 = std::string::size(reply_buffer);
    v11 = (BYTE *)std::string::c_str(reply_buffer);
    check_result = CheckCmdResultValid(v11, v10, v9, uiCheckInfo, (int *)(v6 + 32));
    if ( check_result )
    {
      if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(result_type);
      }
      *result_type = 3;
    }
    else
    {
      if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v6 + 32);
      if ( *(_DWORD *)(v6 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(result_type);
        }
        *result_type = 4;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(result_type);
        }
        *result_type = 1;
      }
    }
  }
  old_security_level = proto::SecurityAntiOfflineDataBin::security_level(data_bin);
  if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result_type);
  }
  if ( *result_type == 1 )
  {
    v12 = proto::SecurityAntiOfflineDataBin::succ_num(data_bin) + 1;
    proto::SecurityAntiOfflineDataBin::set_succ_num(data_bin, v12);
    v13 = proto::SecurityAntiOfflineDataBin::cur_succ_num(data_bin) + 1;
    proto::SecurityAntiOfflineDataBin::set_cur_succ_num(data_bin, v13);
    proto::SecurityAntiOfflineDataBin::set_cur_fail_num(data_bin, 0);
    if ( !proto::SecurityAntiOfflineDataBin::security_level(data_bin) )
      goto LABEL_36;
    if ( *(_BYTE *)(((unsigned __int64)anti_offline_level_config >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)anti_offline_level_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)anti_offline_level_config >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(anti_offline_level_config);
    }
    if ( !anti_offline_level_config->down_grade_num )
      goto LABEL_36;
    v14 = proto::SecurityAntiOfflineDataBin::cur_succ_num(data_bin);
    if ( *(_BYTE *)(((unsigned __int64)anti_offline_level_config >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)anti_offline_level_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)anti_offline_level_config >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(anti_offline_level_config);
    }
    if ( v14 >= anti_offline_level_config->down_grade_num )
      v15 = 1;
    else
LABEL_36:
      v15 = 0;
    if ( v15 )
    {
      proto::SecurityAntiOfflineDataBin::set_cur_succ_num(data_bin, 0);
      v16 = proto::SecurityAntiOfflineDataBin::security_level(data_bin) - 1;
      proto::SecurityAntiOfflineDataBin::set_security_level(data_bin, v16);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(result_type);
    }
    v17 = *result_type;
    if ( *result_type == 4 )
    {
      v20 = proto::SecurityAntiOfflineDataBin::verify_fail_num(data_bin) + 1;
      proto::SecurityAntiOfflineDataBin::set_verify_fail_num(data_bin, v20);
    }
    else if ( v17 <= 4 )
    {
      if ( v17 == 2 )
      {
        v18 = proto::SecurityAntiOfflineDataBin::empty_num(data_bin) + 1;
        proto::SecurityAntiOfflineDataBin::set_empty_num(data_bin, v18);
      }
      else if ( v17 == 3 )
      {
        v19 = proto::SecurityAntiOfflineDataBin::decrypt_fail_num(data_bin) + 1;
        proto::SecurityAntiOfflineDataBin::set_decrypt_fail_num(data_bin, v19);
      }
    }
    proto::SecurityAntiOfflineDataBin::set_cur_succ_num(data_bin, 0);
    v21 = proto::SecurityAntiOfflineDataBin::cur_fail_num(data_bin) + 1;
    proto::SecurityAntiOfflineDataBin::set_cur_fail_num(data_bin, v21);
    if ( proto::SecurityAntiOfflineDataBin::security_level(data_bin) > 3 )
      goto LABEL_57;
    if ( *(_BYTE *)(((unsigned __int64)&anti_offline_level_config->up_grade_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)anti_offline_level_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&anti_offline_level_config->up_grade_num >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&anti_offline_level_config->up_grade_num);
    }
    if ( !anti_offline_level_config->up_grade_num )
      goto LABEL_57;
    v22 = proto::SecurityAntiOfflineDataBin::cur_fail_num(data_bin);
    if ( *(_BYTE *)(((unsigned __int64)&anti_offline_level_config->up_grade_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)anti_offline_level_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&anti_offline_level_config->up_grade_num >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&anti_offline_level_config->up_grade_num);
    }
    if ( v22 >= anti_offline_level_config->up_grade_num )
      v23 = 1;
    else
LABEL_57:
      v23 = 0;
    if ( v23 )
    {
      proto::SecurityAntiOfflineDataBin::set_cur_fail_num(data_bin, 0);
      v24 = proto::SecurityAntiOfflineDataBin::security_level(data_bin) + 1;
      proto::SecurityAntiOfflineDataBin::set_security_level(data_bin, v24);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result_type);
  }
  proto_log::AntiCheatBodyAntiOfflineResult::set_result_type(result_log, *result_type);
  proto_log::AntiCheatBodyAntiOfflineResult::set_check_result(result_log, check_result);
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v6 + 32);
  proto_log::AntiCheatBodyAntiOfflineResult::set_verify_result(result_log, *(_DWORD *)(v6 + 32));
  proto_log::AntiCheatBodyAntiOfflineResult::set_old_security_level(result_log, old_security_level);
  v25 = proto::SecurityAntiOfflineDataBin::security_level(data_bin);
  proto_log::AntiCheatBodyAntiOfflineResult::set_cur_security_level(result_log, v25);
  v26 = proto::SecurityAntiOfflineDataBin::succ_num(data_bin);
  proto_log::AntiCheatBodyAntiOfflineResult::set_succ_num(result_log, v26);
  v27 = proto::SecurityAntiOfflineDataBin::empty_num(data_bin);
  proto_log::AntiCheatBodyAntiOfflineResult::set_empty_num(result_log, v27);
  v28 = proto::SecurityAntiOfflineDataBin::decrypt_fail_num(data_bin);
  proto_log::AntiCheatBodyAntiOfflineResult::set_decrypt_fail_num(result_log, v28);
  v29 = proto::SecurityAntiOfflineDataBin::verify_fail_num(data_bin);
  proto_log::AntiCheatBodyAntiOfflineResult::set_verify_fail_num(result_log, v29);
  v30 = proto::SecurityAntiOfflineDataBin::cur_succ_num(data_bin);
  proto_log::AntiCheatBodyAntiOfflineResult::set_cur_succ_num(result_log, v30);
  v31 = proto::SecurityAntiOfflineDataBin::cur_fail_num(data_bin);
  proto_log::AntiCheatBodyAntiOfflineResult::set_cur_fail_num(result_log, v31);
  if ( *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)result_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result_type);
  }
  result = *result_type == 1;
  if ( v40 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1123: range 000000000CE1CD88-000000000CE1CDA2
void __cdecl SecurityChannel::~SecurityChannel(SecurityChannel *const this)
{
  SecurityChannel::unInit(this);
};

// Line 1129: range 000000000CE1CDA4-000000000CE1CF7D
void __cdecl SecurityChannel::unInit(SecurityChannel *const this)
{
  stSCChannelInfo *sc_channel_info_ptr; // rax
  stSCChannelInfo *v2; // rax
  stSCChannelInfo *v3; // rax
  __int64 v4; // rax
  stSCChannelInfo *v5; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->sc_channel_info_ptr_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    sc_channel_info_ptr = this->sc_channel_info_ptr_;
    if ( *(_BYTE *)(((unsigned __int64)&this->sc_channel_info_ptr_->pRandomKey >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->sc_channel_info_ptr_->pRandomKey);
    if ( sc_channel_info_ptr->pRandomKey )
    {
      v2 = this->sc_channel_info_ptr_;
      if ( *(_BYTE *)(((unsigned __int64)&this->sc_channel_info_ptr_->pRandomKey >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->sc_channel_info_ptr_->pRandomKey);
      if ( v2->pRandomKey )
      {
        v3 = this->sc_channel_info_ptr_;
        if ( *(_BYTE *)(((unsigned __int64)&this->sc_channel_info_ptr_->pRandomKey >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->sc_channel_info_ptr_->pRandomKey);
        operator delete[](v3->pRandomKey);
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v4 = (__int64)this->sc_channel_info_ptr_;
      if ( *(_BYTE *)(((unsigned __int64)&this->sc_channel_info_ptr_->pRandomKey >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)(v4 + 2592) = 0LL;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = this->sc_channel_info_ptr_;
    if ( this->sc_channel_info_ptr_ )
    {
      stSCChannelInfo::~stSCChannelInfo(this->sc_channel_info_ptr_);
      operator delete(v5, 0xA28uLL);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->sc_channel_info_ptr_ = 0LL;
  }
};

// Line 1145: range 000000000CE1CF7E-000000000CE1D4E9
int32_t __cdecl SecurityUtils::genSecurityChannelInfoOnLogin(
        SecurityChannel *security_channel,
        std::string *encrypted_channel_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  stSCChannelInfo *v5; // rax
  stSCChannelInfo *v6; // r14
  int32_t result; // eax
  __int64 sc_channel_info_ptr; // rax
  __int64 v9; // rdx
  int ret; // [rsp+1Ch] [rbp-134h]
  char v11[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 9 <unknown> 64 8 13 info_ptr:1157 96 8 13 info_len:1158 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SecurityUtils::genSecurityChannelInfoOnLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)security_channel >> 3) + 0x7FFF8000) )
    __asan_report_load8(security_channel);
  if ( security_channel->sc_channel_info_ptr_ )
    SecurityChannel::unInit(security_channel);
  v5 = (stSCChannelInfo *)operator new(0xA28uLL, &std::nothrow);
  v6 = v5;
  if ( v5 )
    stSCChannelInfo::stSCChannelInfo(v5);
  if ( *(_BYTE *)(((unsigned __int64)security_channel >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  security_channel->sc_channel_info_ptr_ = v6;
  if ( security_channel->sc_channel_info_ptr_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)security_channel >> 3) + 0x7FFF8000) )
      __asan_report_load8(security_channel);
    sc_channel_info_ptr = (__int64)security_channel->sc_channel_info_ptr_;
    if ( *(_BYTE *)(((unsigned __int64)&security_channel->sc_channel_info_ptr_->pRandomKey >> 3) + 0x7FFF8000) )
      sc_channel_info_ptr = __asan_report_store8();
    *(_QWORD *)(sc_channel_info_ptr + 2592) = 0LL;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v2 + 64) = 0LL;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v2 + 96) = 0LL;
    ret = InitChannelInfo(security_channel->sc_channel_info_ptr_, (uint8_t **)(v2 + 64), (size_t *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 64);
    if ( *(_QWORD *)(v2 + 64) )
    {
      std::allocator<char>::allocator(v2 + 48);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 96);
      v9 = *(_QWORD *)(v2 + 96);
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 64);
      std::string::basic_string(v2 + 192, *(_QWORD *)(v2 + 64), v9, v2 + 48);
      std::string::operator=(encrypted_channel_info, v2 + 192);
      std::string::~string((void *)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 64);
      if ( *(_QWORD *)(v2 + 64) )
        operator delete[](*(void **)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v2 + 64) = 0LL;
    }
    result = ret;
  }
  else
  {
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/security_utils.cpp",
      "genSecurityChannelInfoOnLogin",
      1153);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[29])"create sc_channel_info fail!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1171: range 000000000CE1D4EA-000000000CE1D7DC
int32_t __cdecl SecurityUtils::verifySecurityChannelReportOnPingReq(
        SecurityChannel *security_channel,
        const std::string *report_str,
        std::vector<std::string> *result_vec,
        uint64_t *expect_salt,
        uint64_t *actual_salt)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  int32_t result; // eax
  size_t v9; // r13
  const char *v10; // rsi
  int ret; // [rsp+3Ch] [rbp-84h]
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = SecurityUtils::verifySecurityChannelReportOnPingReq;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)security_channel >> 3) + 0x7FFF8000) )
    __asan_report_load8(security_channel);
  if ( security_channel->sc_channel_info_ptr_ )
  {
    v9 = std::string::size(report_str);
    v10 = (const char *)std::string::data(report_str);
    if ( *(_BYTE *)(((unsigned __int64)security_channel >> 3) + 0x7FFF8000) )
      __asan_report_load8(security_channel);
    ret = DecryptClientReport(security_channel->sc_channel_info_ptr_, v10, v9, result_vec, expect_salt, actual_salt);
    if ( ret != -2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)expect_salt >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *expect_salt = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)actual_salt >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *actual_salt = 0LL;
    }
    result = ret;
  }
  else
  {
    if ( *(char *)(((v5 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 63) & 7) >= *(_BYTE *)(((v5 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/security_utils.cpp",
      "verifySecurityChannelReportOnPingReq",
      1174);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)(v5 + 32),
      (const char (*)[21])"channel_info is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 32));
    result = -1;
  }
  if ( v15 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1188: range 000000000CE1D7DE-000000000CE1D966
bool __cdecl SecurityUtils::checkAndUpdateAntiCheatLogCountRecord(
        const BaseAntiCheatLogConfig *config,
        const uint32_t now,
        AntiCheatLogRecord *record)
{
  uint32_t last_log_time; // ecx
  uint32_t log_count; // ecx

  if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(record);
  }
  last_log_time = record->last_log_time;
  if ( *(_BYTE *)(((unsigned __int64)&config->log_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->log_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->log_interval);
  }
  if ( now >= last_log_time + config->log_interval )
  {
    record->last_log_time = now;
    if ( *(_BYTE *)(((unsigned __int64)&record->log_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->log_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&record->log_count);
    }
    record->log_count = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&record->log_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->log_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&record->log_count);
  }
  log_count = record->log_count;
  if ( *(_BYTE *)(((unsigned __int64)&config->log_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->log_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->log_limit);
  }
  if ( log_count >= config->log_limit )
    return 0;
  ++record->log_count;
  return 1;
};

// Line 1208: range 000000000CE1D968-000000000CE1DB4B
int32_t __cdecl SegmentCRCNode::setLeftChild(SegmentCRCNode *const this, SegmentCRCNodePtr *p_node)
{
  std::shared_ptr<SegmentCRCNode> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  int32_t v6; // r14d
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (std::shared_ptr<SegmentCRCNode> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::shared_ptr<SegmentCRCNode> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"2 32 16 9 <unknown> 64 16 9 <unknown>";
  v2[1]._M_ptr = (std::__shared_ptr<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2>::element_type *)SegmentCRCNode::setLeftChild;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::shared_ptr<SegmentCRCNode>::shared_ptr(v2 + 2, p_node);
  v5 = !SegmentCRCNode::canBeLeftChild(this, v2 + 2);
  std::shared_ptr<SegmentCRCNode>::~shared_ptr(v2 + 2);
  *(_WORD *)(((unsigned __int64)&v2[2] >> 3) + 0x7FFF8000) = -1800;
  if ( v5 )
  {
    v6 = -1;
  }
  else
  {
    *(_WORD *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = 0;
    std::shared_ptr<SegmentCRCNode>::shared_ptr(v2 + 4, p_node);
    v6 = SegmentCRCNode::setNodeToTarget(this, v2 + 4, &this->left_);
    std::shared_ptr<SegmentCRCNode>::~shared_ptr(v2 + 4);
  }
  result = v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1215: range 000000000CE1DB4C-000000000CE1DD2F
int32_t __cdecl SegmentCRCNode::setRightChild(SegmentCRCNode *const this, SegmentCRCNodePtr *p_node)
{
  std::shared_ptr<SegmentCRCNode> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  int32_t v6; // r14d
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (std::shared_ptr<SegmentCRCNode> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::shared_ptr<SegmentCRCNode> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"2 32 16 9 <unknown> 64 16 9 <unknown>";
  v2[1]._M_ptr = (std::__shared_ptr<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2>::element_type *)SegmentCRCNode::setRightChild;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::shared_ptr<SegmentCRCNode>::shared_ptr(v2 + 2, p_node);
  v5 = !SegmentCRCNode::canBeRightChild(this, v2 + 2);
  std::shared_ptr<SegmentCRCNode>::~shared_ptr(v2 + 2);
  *(_WORD *)(((unsigned __int64)&v2[2] >> 3) + 0x7FFF8000) = -1800;
  if ( v5 )
  {
    v6 = -1;
  }
  else
  {
    *(_WORD *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = 0;
    std::shared_ptr<SegmentCRCNode>::shared_ptr(v2 + 4, p_node);
    v6 = SegmentCRCNode::setNodeToTarget(this, v2 + 4, &this->right_);
    std::shared_ptr<SegmentCRCNode>::~shared_ptr(v2 + 4);
  }
  result = v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1222: range 000000000CE1DD30-000000000CE1DD9E
int32_t __cdecl SegmentCRCNode::setNodeToTarget(
        SegmentCRCNode *const this,
        SegmentCRCNodePtr *p_node,
        SegmentCRCNodePtr *target)
{
  if ( std::operator!=<SegmentCRCNode>(target, 0LL) || std::operator==<SegmentCRCNode>(p_node, 0LL) )
    return -1;
  std::shared_ptr<SegmentCRCNode>::operator=(target, p_node);
  return 0;
};

// Line 1232: range 000000000CE1DDA0-000000000CE1E390
bool __cdecl SegmentCRCNode::canBeLeftChild(SegmentCRCNode *const this, SegmentCRCNodePtr *p_node)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  SegmentCRCNode *v6; // rax
  uint32_t Offset; // r14d
  common::milog::MiLogStream *v8; // r14
  SegmentCRCNode *v9; // rax
  uint32_t v10; // edx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  uint32_t v13; // edx
  SegmentCRCNode *v14; // rax
  uint32_t Size; // r14d
  common::milog::MiLogStream *v16; // r14
  SegmentCRCNode *v17; // rax
  uint32_t v18; // edx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  uint32_t v21; // edx
  char v22[272]; // [rsp+10h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SegmentCRCNode::canBeLeftChild;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( std::operator==<SegmentCRCNode>(p_node, 0LL) )
  {
    result = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    Offset = SegmentCRCNode::getOffset(v6);
    if ( Offset == SegmentCRCNode::getOffset(this) )
    {
      v14 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      Size = SegmentCRCNode::getSize(v14);
      if ( Size == SegmentCRCNode::getSize(this) >> 1 )
      {
        result = 1;
      }
      else
      {
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/security_utils.cpp",
          "canBeLeftChild",
          1243);
        v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[49])byte_1A28EE60);
        v17 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        v18 = SegmentCRCNode::getSize(v17);
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 64);
        *(_DWORD *)(v2 + 64) = v18;
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 64));
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" size:");
        v21 = SegmentCRCNode::getSize(this);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = v21;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 80));
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        result = 0;
      }
    }
    else
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "canBeLeftChild",
        1237);
      v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[53])byte_1A28EDC0);
      v9 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      v10 = SegmentCRCNode::getOffset(v9);
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 32);
      *(_DWORD *)(v2 + 32) = v10;
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" offset:");
      v13 = SegmentCRCNode::getOffset(this);
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48);
      *(_DWORD *)(v2 + 48) = v13;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      result = 0;
    }
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1251: range 000000000CE1E392-000000000CE1EBCD
bool __cdecl SegmentCRCNode::canBeRightChild(SegmentCRCNode *const this, SegmentCRCNodePtr *p_node)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  SegmentCRCNode *v6; // rax
  uint32_t Offset; // r14d
  uint32_t v8; // r15d
  common::milog::MiLogStream *v9; // r14
  SegmentCRCNode *v10; // rax
  uint32_t v11; // edx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  uint32_t v14; // edx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  uint32_t v17; // edx
  SegmentCRCNode *v18; // rax
  uint32_t v19; // r14d
  uint32_t v20; // r15d
  SegmentCRCNode *v21; // rax
  common::milog::MiLogStream *v22; // r14
  SegmentCRCNode *v23; // rax
  uint32_t Size; // edx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  uint32_t v27; // edx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  SegmentCRCNode *v30; // rax
  uint32_t v31; // edx
  bool result; // al
  char v33[336]; // [rsp+20h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <"
                        "unknown> 128 16 15 left_child:1261 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SegmentCRCNode::canBeRightChild;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( std::operator==<SegmentCRCNode>(p_node, 0LL) )
  {
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    Offset = SegmentCRCNode::getOffset(v6);
    v8 = SegmentCRCNode::getOffset(this);
    if ( Offset == v8 + (SegmentCRCNode::getSize(this) >> 1) )
    {
      if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 128, 0LL);
      SegmentCRCNode::getLeftChild((SegmentCRCNode *const)(v2 + 128));
      if ( !std::operator!=<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v2 + 128), 0LL)
        || (v18 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node),
            v19 = SegmentCRCNode::getSize(v18),
            v20 = SegmentCRCNode::getSize(this),
            v21 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128)),
            v19 == v20 - SegmentCRCNode::getSize(v21)) )
      {
        v5 = 1;
      }
      else
      {
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/security_utils.cpp",
          "canBeRightChild",
          1266);
        v22 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[61])byte_1A28F060);
        v23 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        Size = SegmentCRCNode::getSize(v23);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80);
        *(_DWORD *)(v2 + 80) = Size;
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 80));
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v25, (const char (*)[16])byte_1A28F0C0);
        v27 = SegmentCRCNode::getSize(this);
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 96);
        *(_DWORD *)(v2 + 96) = v27;
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v2 + 96));
        v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v28, (const char (*)[15])byte_1A28F100);
        v30 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v31 = SegmentCRCNode::getSize(v30);
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 112);
        *(_DWORD *)(v2 + 112) = v31;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v2 + 112));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v5 = 0;
      }
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v2 + 128));
    }
    else
    {
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "canBeRightChild",
        1256);
      v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[60])byte_1A28F000);
      v10 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      v11 = SegmentCRCNode::getOffset(v10);
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 32);
      *(_DWORD *)(v2 + 32) = v11;
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" offset:");
      v14 = SegmentCRCNode::getOffset(this);
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48);
      *(_DWORD *)(v2 + 48) = v14;
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" size:");
      v17 = SegmentCRCNode::getSize(this);
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64);
      *(_DWORD *)(v2 + 64) = v17;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      v5 = 0;
    }
  }
  result = v5;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1276: range 000000000CE1EBCE-000000000CE1EE6D
void __cdecl SegmentCRCTree::SegmentCRCTree(SegmentCRCTree *const this, SegmentCRCNodePtr *p_node)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SegmentCRCNode *v5; // rax
  uint32_t Size; // edx
  SegmentCRCNode *v7; // rax
  uint32_t Offset; // edx
  std::pair<unsigned int,unsigned int> *v9; // rcx
  std::shared_ptr<SegmentCRCNode> *v10; // r8
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 9 <unknown> 48 4 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SegmentCRCTree::SegmentCRCTree;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  std::shared_ptr<SegmentCRCNode>::shared_ptr(&this->root_, p_node);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<SegmentCRCNode>>>>::unordered_map(&this->segment_crc_map_);
  if ( std::operator!=<SegmentCRCNode>(&this->root_, 0LL) )
  {
    v5 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    Size = SegmentCRCNode::getSize(v5);
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48);
    *(_DWORD *)(v2 + 48) = Size;
    v7 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    Offset = SegmentCRCNode::getOffset(v7);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32);
    *(_DWORD *)(v2 + 32) = Offset;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::pair<unsigned int,unsigned int> *)(v2 + 64) = std::make_pair<unsigned int,unsigned int>(
                                                           (unsigned int *)(v2 + 32),
                                                           (unsigned int *)(v2 + 48));
    std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<SegmentCRCNode>>>>::emplace<std::pair<unsigned int,unsigned int>,std::shared_ptr<SegmentCRCNode> &>(
      &this->segment_crc_map_,
      (std::pair<unsigned int,unsigned int> *)(v2 + 64),
      &this->root_,
      v9,
      v10);
  }
  if ( v11 == (char *)v2 )
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
};

// Line 1285: range 000000000CE1EE6E-000000000CE1F28A
SegmentCRCTree *__fastcall SegmentCRCTree::getNode(SegmentCRCTree *const this, __int64 offset, uint32_t size, int a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> > > > *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v15[272]; // [rsp+20h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 11 offset:1284 48 4 9 size:1284 64 8 9 iter:1286 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = SegmentCRCTree::getNode;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 32) = size;
  *(_DWORD *)(v4 + 48) = a4;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::pair<unsigned int,unsigned int> *)(v4 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v4 + 32),
                                                         (unsigned int *)(v4 + 48));
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> > > >::iterator *)(v4 + 64) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<SegmentCRCNode>>>>::find((std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> > > > *const)(offset + 16), (const std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> > > >::key_type *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  v7 = (std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> > > > *)(offset + 16);
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> > > >::iterator *)(v4 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<SegmentCRCNode>>>>::end(v7);
  v8 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> >,true> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> >,true> *)(v4 + 128));
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "getNode",
      1289);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v4 + 160),
           (const char (*)[32])byte_1A28F240);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" size:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<SegmentCRCNode>::shared_ptr(&this->root_, 0LL);
  }
  else
  {
    std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode> >,false,true> *const)(v4 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v4 + 128);
    std::weak_ptr<SegmentCRCNode>::lock((const std::weak_ptr<SegmentCRCNode> *const)this);
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return this;
};

// Line 1298: range 000000000CE1F28C-000000000CE1F54C
// local variable allocation has failed, the output may be wrong!
bool __cdecl SegmentCRCTree::isNodeLeaf(SegmentCRCTree *const this, uint32_t offset, uint32_t size)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char v6; // r14
  char v7; // r15
  bool result; // al
  bool v9; // [rsp+Fh] [rbp-C1h]
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 13 node_ptr:1299 64 16 9 <unknown> 96 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SegmentCRCTree::isNodeLeaf;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 32, *(_QWORD *)&offset);
  SegmentCRCTree::getNode((SegmentCRCTree *const)(v3 + 32), (__int64)this, offset, size);
  if ( std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v3 + 32), 0LL) )
  {
    v9 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 64, 0LL);
    SegmentCRCNode::getLeftChild((SegmentCRCNode *const)(v3 + 64));
    if ( !std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v3 + 64), 0LL) )
      goto LABEL_15;
    std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 96, 0LL);
    SegmentCRCNode::getRightChild((SegmentCRCNode *const)(v3 + 96));
    v6 = 1;
    v7 = 1;
    if ( std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v3 + 96), 0LL) )
      v9 = 1;
    else
LABEL_15:
      v9 = 0;
    if ( v7 )
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 96));
    if ( v6 )
      *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 64));
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
  }
  std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 32));
  result = v9;
  if ( v11 == (char *)v3 )
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
  return result;
};

// Line 1306: range 000000000CE1F54E-000000000CE1FD20
int32_t __cdecl SegmentCRCTree::setNodeLeftChild(
        SegmentCRCTree *const this,
        SegmentCRCNodePtr *p_node,
        SegmentCRCNodePtr *p_child)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::shared_ptr<SegmentCRCNode> *v6; // r8
  const std::_Placeholder<1> *v7; // r9
  int32_t result; // eax
  common::milog::MiLogStream *v10; // r14
  SegmentCRCNode *v11; // rax
  uint32_t Offset; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  SegmentCRCNode *v15; // rax
  uint32_t Size; // edx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  SegmentCRCNode *v19; // rax
  uint32_t v20; // edx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  SegmentCRCNode *v23; // rax
  uint32_t v24; // edx
  int ret; // [rsp+2Ch] [rbp-194h]
  char v27[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 16 9 <unknown> 128 16 9"
                        " <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SegmentCRCTree::setNodeLeftChild;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  if ( std::operator==<SegmentCRCNode>(p_node, 0LL) || std::operator==<SegmentCRCNode>(p_child, 0LL) )
  {
    result = -1;
  }
  else
  {
    if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 96, 0LL);
    *(_QWORD *)(v3 + 96) = SegmentCRCNode::setLeftChild;
    *(_QWORD *)(v3 + 104) = 0LL;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    std::bind<int (SegmentCRCNode::*)(std::shared_ptr<SegmentCRCNode>),std::shared_ptr<SegmentCRCNode>&,std::_Placeholder<1> const&>(
      (std::_Bind_helper<false,int (SegmentCRCNode::*)(std::shared_ptr<SegmentCRCNode>),std::shared_ptr<SegmentCRCNode>&,const std::_Placeholder<1>&>::type *)(v3 + 160),
      (int (**)(SegmentCRCNode *, std::shared_ptr<SegmentCRCNode>))(v3 + 96),
      p_node,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v6,
      v7);
    std::function<int ()(std::shared_ptr<SegmentCRCNode>)>::function<std::_Bind<int (SegmentCRCNode::*)(std::shared_ptr<SegmentCRCNode>) ()(std::shared_ptr<SegmentCRCNode>,std::_Placeholder<1>)>,void,void>(
      (std::function<int(std::shared_ptr<SegmentCRCNode>)> *const)(v3 + 224),
      (std::_Bind<int (SegmentCRCNode::*(std::shared_ptr<SegmentCRCNode>,std::_Placeholder<1>))(std::shared_ptr<SegmentCRCNode>)> *)(v3 + 160));
    std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 128), p_child);
    ret = SegmentCRCTree::setNodeChild(
            this,
            (SegmentCRCNodePtr *)(v3 + 128),
            (std::function<int(std::shared_ptr<SegmentCRCNode>)> *)(v3 + 224));
    std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 128));
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
    std::function<int ()(std::shared_ptr<SegmentCRCNode>)>::~function((std::function<int(std::shared_ptr<SegmentCRCNode>)> *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::_Bind<int (SegmentCRCNode::*)(std::shared_ptr<SegmentCRCNode>) ()(std::shared_ptr<SegmentCRCNode>,std::_Placeholder<1>)>::~_Bind((std::_Bind<int (SegmentCRCNode::*(std::shared_ptr<SegmentCRCNode>,std::_Placeholder<1>))(std::shared_ptr<SegmentCRCNode>)> *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( ret )
    {
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
        1u,
        "src/security_utils.cpp",
        "setNodeLeftChild",
        1312);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[41])byte_1A28F3C0);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v11 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      Offset = SegmentCRCNode::getOffset(v11);
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32);
      *(_DWORD *)(v3 + 32) = Offset;
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" size:");
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v15 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      Size = SegmentCRCNode::getSize(v15);
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48);
      *(_DWORD *)(v3 + 48) = Size;
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v17, (const char (*)[18])byte_1A28F420);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v19 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_child);
      v20 = SegmentCRCNode::getOffset(v19);
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64);
      *(_DWORD *)(v3 + 64) = v20;
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" size:");
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v23 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_child);
      v24 = SegmentCRCNode::getSize(v23);
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = v24;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 80));
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      result = ret;
    }
    else
    {
      result = 0;
    }
  }
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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
  return result;
};

// Line 1321: range 000000000CE1FD22-000000000CE204F4
int32_t __cdecl SegmentCRCTree::setNodeRightChild(
        SegmentCRCTree *const this,
        SegmentCRCNodePtr *p_node,
        SegmentCRCNodePtr *p_child)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::shared_ptr<SegmentCRCNode> *v6; // r8
  const std::_Placeholder<1> *v7; // r9
  int32_t result; // eax
  common::milog::MiLogStream *v10; // r14
  SegmentCRCNode *v11; // rax
  uint32_t Offset; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  SegmentCRCNode *v15; // rax
  uint32_t Size; // edx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  SegmentCRCNode *v19; // rax
  uint32_t v20; // edx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  SegmentCRCNode *v23; // rax
  uint32_t v24; // edx
  int ret; // [rsp+2Ch] [rbp-194h]
  char v27[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 16 9 <unknown> 128 16 9"
                        " <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SegmentCRCTree::setNodeRightChild;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  if ( std::operator==<SegmentCRCNode>(p_node, 0LL) || std::operator==<SegmentCRCNode>(p_child, 0LL) )
  {
    result = -1;
  }
  else
  {
    if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 96, 0LL);
    *(_QWORD *)(v3 + 96) = SegmentCRCNode::setRightChild;
    *(_QWORD *)(v3 + 104) = 0LL;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    std::bind<int (SegmentCRCNode::*)(std::shared_ptr<SegmentCRCNode>),std::shared_ptr<SegmentCRCNode>&,std::_Placeholder<1> const&>(
      (std::_Bind_helper<false,int (SegmentCRCNode::*)(std::shared_ptr<SegmentCRCNode>),std::shared_ptr<SegmentCRCNode>&,const std::_Placeholder<1>&>::type *)(v3 + 160),
      (int (**)(SegmentCRCNode *, std::shared_ptr<SegmentCRCNode>))(v3 + 96),
      p_node,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v6,
      v7);
    std::function<int ()(std::shared_ptr<SegmentCRCNode>)>::function<std::_Bind<int (SegmentCRCNode::*)(std::shared_ptr<SegmentCRCNode>) ()(std::shared_ptr<SegmentCRCNode>,std::_Placeholder<1>)>,void,void>(
      (std::function<int(std::shared_ptr<SegmentCRCNode>)> *const)(v3 + 224),
      (std::_Bind<int (SegmentCRCNode::*(std::shared_ptr<SegmentCRCNode>,std::_Placeholder<1>))(std::shared_ptr<SegmentCRCNode>)> *)(v3 + 160));
    std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 128), p_child);
    ret = SegmentCRCTree::setNodeChild(
            this,
            (SegmentCRCNodePtr *)(v3 + 128),
            (std::function<int(std::shared_ptr<SegmentCRCNode>)> *)(v3 + 224));
    std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 128));
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
    std::function<int ()(std::shared_ptr<SegmentCRCNode>)>::~function((std::function<int(std::shared_ptr<SegmentCRCNode>)> *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::_Bind<int (SegmentCRCNode::*)(std::shared_ptr<SegmentCRCNode>) ()(std::shared_ptr<SegmentCRCNode>,std::_Placeholder<1>)>::~_Bind((std::_Bind<int (SegmentCRCNode::*(std::shared_ptr<SegmentCRCNode>,std::_Placeholder<1>))(std::shared_ptr<SegmentCRCNode>)> *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( ret )
    {
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
        1u,
        "src/security_utils.cpp",
        "setNodeRightChild",
        1327);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[41])byte_1A28F4A0);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v11 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      Offset = SegmentCRCNode::getOffset(v11);
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32);
      *(_DWORD *)(v3 + 32) = Offset;
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" size:");
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v15 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      Size = SegmentCRCNode::getSize(v15);
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48);
      *(_DWORD *)(v3 + 48) = Size;
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v17, (const char (*)[18])byte_1A28F420);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v19 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_child);
      v20 = SegmentCRCNode::getOffset(v19);
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64);
      *(_DWORD *)(v3 + 64) = v20;
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" size:");
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v23 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_child);
      v24 = SegmentCRCNode::getSize(v23);
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = v24;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 80));
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      result = ret;
    }
    else
    {
      result = 0;
    }
  }
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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
  return result;
};

// Line 1336: range 000000000CE204F6-000000000CE207E1
int32_t __cdecl SegmentCRCTree::setNodeChild(
        SegmentCRCTree *const this,
        SegmentCRCNodePtr *p_child,
        std::function<int(std::shared_ptr<SegmentCRCNode>)> *p_set_child_func)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t result; // eax
  SegmentCRCNode *v7; // rax
  uint32_t Size; // edx
  SegmentCRCNode *v9; // rax
  uint32_t Offset; // edx
  std::shared_ptr<SegmentCRCNode> *v11; // r8
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  char v14[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 9 <unknown> 48 4 9 <unknown> 64 8 9 <unknown> 96 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SegmentCRCTree::setNodeChild;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  if ( std::operator==<SegmentCRCNode>(p_child, 0LL) )
  {
    result = -1;
  }
  else
  {
    std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 96), p_child);
    ret = std::function<int ()(std::shared_ptr<SegmentCRCNode>)>::operator()(
            p_set_child_func,
            (std::shared_ptr<SegmentCRCNode> *)(v3 + 96));
    std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v3 + 96));
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( ret )
    {
      result = ret;
    }
    else
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_child);
      Size = SegmentCRCNode::getSize(v7);
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48);
      *(_DWORD *)(v3 + 48) = Size;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v9 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_child);
      Offset = SegmentCRCNode::getOffset(v9);
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32);
      *(_DWORD *)(v3 + 32) = Offset;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = std::make_pair<unsigned int,unsigned int>(
                                                             (unsigned int *)(v3 + 32),
                                                             (unsigned int *)(v3 + 48));
      std::unordered_map<std::pair<unsigned int,unsigned int>,std::weak_ptr<SegmentCRCNode>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::weak_ptr<SegmentCRCNode>>>>::emplace<std::pair<unsigned int,unsigned int>,std::shared_ptr<SegmentCRCNode> &>(
        &this->segment_crc_map_,
        (std::pair<unsigned int,unsigned int> *)(v3 + 64),
        p_child,
        (std::pair<unsigned int,unsigned int> *)(v3 + 64),
        v11);
      result = 0;
    }
  }
  if ( v14 == (char *)v3 )
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
  return result;
};

// Line 1350: range 000000000CE207E2-000000000CE20E35
SegmentCRCTreePtr __cdecl SegmentCRCMgr::generateSegmentCRCTree(const std::string *file_path)
{
  const std::string *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  SegmentCRCTreePtr result; // rax
  char v11[1344]; // [rsp+10h] [rbp-540h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1312LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 16 13 tree_ptr:1359 80 16 9 <unknown> 112 32 9 <unknown> 176 32 9 <unknown> 240 40 9 root:1"
                        "362 320 272 11 reader:1361 656 520 16 file_stream:1352";
  *(_QWORD *)(v2 + 16) = SegmentCRCMgr::generateSegmentCRCTree;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862738] = -219021312;
  v4[536862739] = -218959118;
  v4[536862740] = 62194;
  v4[536862756] = -218103808;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  v4[536862760] = -202116109;
  v5 = std::string::c_str();
  std::ifstream::basic_ifstream(v2 + 656, v5, 8LL);
  if ( (unsigned __int8)std::ifstream::is_open(v2 + 656) != 1 )
  {
    if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 112, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 112),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "generateSegmentCRCTree",
      1355);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           (common::milog::MiLogStream *const)(v2 + 112),
           (const char (*)[25])byte_1A28F620);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, v1);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])byte_1A28F660);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)file_path, 0LL);
  }
  else
  {
    std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v2 + 48), 0LL);
    Json::Reader::Reader((Json::Reader *)(v2 + 320));
    Json::Value::Value(v2 + 240, 0LL);
    if ( (unsigned __int8)Json::Reader::parse(
                            (Json::Reader *)(v2 + 320),
                            (std::istream *)(v2 + 656),
                            (Json::Value *)(v2 + 240),
                            1) )
    {
      if ( *(_WORD *)(((v2 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 80, v2 + 656);
      SegmentCRCMgr::generateSegmentCRCTree((Json::Value *)(v2 + 80));
      std::shared_ptr<SegmentCRCTree>::operator=(
        (std::shared_ptr<SegmentCRCTree> *const)(v2 + 48),
        (std::shared_ptr<SegmentCRCTree> *)(v2 + 80));
      std::shared_ptr<SegmentCRCTree>::~shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v2 + 80));
      *(_WORD *)(((v2 + 80) >> 3) + 0x7FFF8000) = -1800;
    }
    else
    {
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "generateSegmentCRCTree",
        1372);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[23])byte_1A28F6A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v1);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1A28F660);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::ifstream::close(v2 + 656);
    std::shared_ptr<SegmentCRCTree>::shared_ptr(
      (std::shared_ptr<SegmentCRCTree> *const)file_path,
      (std::shared_ptr<SegmentCRCTree> *)(v2 + 48));
    Json::Value::~Value((Json::Value_0 *const)(v2 + 240));
    Json::Reader::~Reader((Json::Reader *const)(v2 + 320));
    std::shared_ptr<SegmentCRCTree>::~shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v2 + 48));
  }
  std::ifstream::~ifstream(v2 + 656);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A0) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1312LL, v11);
  }
  result._M_ptr = (std::__shared_ptr<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2>::element_type *)file_path;
  return result;
};

// Line 1383: range 000000000CE20E36-000000000CE20FB7
bool __cdecl SegmentCRCMgr::checkCRCIsValid(
        SegmentCRCTreePtr *p_tree,
        uint32_t offset,
        uint32_t size,
        const std::string *crc)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  bool v7; // r14
  std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rsi
  SegmentCRCNode *v9; // rax
  const std::string *v10; // rdx
  bool result; // al
  char v15[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 node_ptr:1386";
  *(_QWORD *)(v4 + 16) = SegmentCRCMgr::checkCRCIsValid;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( std::operator==<SegmentCRCTree>(p_tree, 0LL) )
  {
    v7 = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_tree);
    if ( *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v4 + 32, v8);
    SegmentCRCTree::getNode((SegmentCRCTree *const)(v4 + 32), (__int64)v8, offset, size);
    if ( std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v4 + 32), 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v9 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v10 = SegmentCRCNode::getCRC[abi:cxx11](v9);
      v7 = std::operator==<char>(v10, crc);
    }
    std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v4 + 32));
  }
  result = v7;
  if ( v15 == (char *)v4 )
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

// Line 1396: range 000000000CE20FB8-000000000CE2188B
__int64 __fastcall SegmentCRCMgr::getNodeChildsOffsetAndSize(
        const std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false> *p_tree,
        uint32_t offset,
        uint32_t size,
        unsigned __int64 left_offset,
        unsigned __int64 left_size,
        unsigned __int64 right_offset,
        uint32_t *right_size)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  unsigned int v10; // r14d
  std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdi
  int v12; // ecx
  uint32_t v13; // edx
  __int64 v14; // rsi
  char v15; // r15
  char v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  SegmentCRCNode *v21; // rax
  uint32_t v22; // ecx
  char v23; // dl
  std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rsi
  std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  SegmentCRCNode *v26; // rax
  uint32_t v27; // ecx
  char v28; // dl
  std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rsi
  std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  SegmentCRCNode *v31; // rax
  uint32_t v32; // ecx
  char v33; // dl
  std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rsi
  SegmentCRCNode *v35; // rax
  uint32_t v36; // ecx
  __int64 result; // rax
  char v38; // [rsp+15h] [rbp-1BBh]
  char v39; // [rsp+16h] [rbp-1BAh]
  char v40; // [rsp+17h] [rbp-1B9h]
  char v45[400]; // [rsp+40h] [rbp-190h] BYREF

  v7 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(352LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "10 32 4 11 offset:1393 48 4 9 size:1393 64 16 13 node_ptr:1399 96 16 9 <unknown> 128 16 9 <unkno"
                        "wn> 160 16 9 <unknown> 192 16 9 <unknown> 224 16 9 <unknown> 256 16 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v7 + 16) = SegmentCRCMgr::getNodeChildsOffsetAndSize;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -219021312;
  v9[536862723] = -219021312;
  v9[536862724] = -219021312;
  v9[536862725] = -219021312;
  v9[536862726] = -219021312;
  v9[536862727] = -219021312;
  v9[536862728] = -219021312;
  v9[536862730] = -202116109;
  *(_DWORD *)(v7 + 32) = offset;
  *(_DWORD *)(v7 + 48) = size;
  if ( std::operator==<SegmentCRCTree>((const std::shared_ptr<SegmentCRCTree> *)p_tree, 0LL) )
  {
    v10 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_tree);
    v12 = *(_DWORD *)(v7 + 48);
    v13 = *(_DWORD *)(v7 + 32);
    v14 = *(unsigned __int16 *)(((v7 + 64) >> 3) + 0x7FFF8000);
    if ( (_WORD)v14 )
    {
      v11 = (std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)(v7 + 64);
      __asan_report_store16(v7 + 64, v14);
    }
    SegmentCRCTree::getNode((SegmentCRCTree *const)(v7 + 64), (__int64)v11, v13, v12);
    v15 = 0;
    v40 = 0;
    v39 = 0;
    v38 = 0;
    if ( std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v7 + 64), 0LL) )
      goto LABEL_15;
    std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    if ( *(_WORD *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v7 + 96, 0LL);
    SegmentCRCNode::getLeftChild((SegmentCRCNode *const)(v7 + 96));
    v15 = 1;
    v40 = 1;
    if ( std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v7 + 96), 0LL) )
      goto LABEL_15;
    std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    if ( *(_WORD *)(((v7 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v7 + 128, 0LL);
    SegmentCRCNode::getRightChild((SegmentCRCNode *const)(v7 + 128));
    v39 = 1;
    v38 = 1;
    if ( std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v7 + 128), 0LL) )
LABEL_15:
      v16 = 1;
    else
      v16 = 0;
    if ( v38 )
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v7 + 128));
    if ( v39 )
      *(_WORD *)(((v7 + 128) >> 3) + 0x7FFF8000) = -1800;
    if ( v40 )
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v7 + 96));
    if ( v15 )
      *(_WORD *)(((v7 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( v16 )
    {
      *(_DWORD *)(((v7 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v7 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v7 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v7 + 63) & 7) >= *(_BYTE *)(((v7 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v7 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v7 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "getNodeChildsOffsetAndSize",
        1402);
      v17 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              (common::milog::MiLogStream *const)(v7 + 288),
              (const char (*)[69])byte_1A28F820);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v7 + 32));
      v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])"size:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v7 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 288));
      *(_DWORD *)(((v7 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v10 = -1;
    }
    else
    {
      *(_WORD *)(((v7 + 160) >> 3) + 0x7FFF8000) = 0;
      v20 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
      if ( *(_WORD *)(((v7 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v7 + 160, 0LL);
      v24 = v20;
      SegmentCRCNode::getLeftChild((SegmentCRCNode *const)(v7 + 160));
      v21 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 160));
      v22 = SegmentCRCNode::getOffset(v21);
      v23 = *(_BYTE *)((left_offset >> 3) + 0x7FFF8000);
      LOBYTE(v24) = v23 != 0;
      if ( v23 != 0 && (char)((left_offset & 7) + 3) >= v23 )
        __asan_report_store4(left_offset);
      *(_DWORD *)left_offset = v22;
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v7 + 160));
      *(_WORD *)(((v7 + 160) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v7 + 192) >> 3) + 0x7FFF8000) = 0;
      v25 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
      if ( *(_WORD *)(((v7 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v7 + 192, v24);
      v29 = v25;
      SegmentCRCNode::getLeftChild((SegmentCRCNode *const)(v7 + 192));
      v26 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 192));
      v27 = SegmentCRCNode::getSize(v26);
      v28 = *(_BYTE *)((left_size >> 3) + 0x7FFF8000);
      LOBYTE(v29) = v28 != 0;
      if ( v28 != 0 && (char)((left_size & 7) + 3) >= v28 )
        __asan_report_store4(left_size);
      *(_DWORD *)left_size = v27;
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v7 + 192));
      *(_WORD *)(((v7 + 192) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v7 + 224) >> 3) + 0x7FFF8000) = 0;
      v30 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
      if ( *(_WORD *)(((v7 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v7 + 224, v29);
      v34 = v30;
      SegmentCRCNode::getRightChild((SegmentCRCNode *const)(v7 + 224));
      v31 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 224));
      v32 = SegmentCRCNode::getOffset(v31);
      v33 = *(_BYTE *)((right_offset >> 3) + 0x7FFF8000);
      LOBYTE(v34) = v33 != 0;
      if ( v33 != 0 && (char)((right_offset & 7) + 3) >= v33 )
        __asan_report_store4(right_offset);
      *(_DWORD *)right_offset = v32;
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v7 + 224));
      *(_WORD *)(((v7 + 224) >> 3) + 0x7FFF8000) = -1800;
      *(_WORD *)(((v7 + 256) >> 3) + 0x7FFF8000) = 0;
      std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
      if ( *(_WORD *)(((v7 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v7 + 256, v34);
      SegmentCRCNode::getRightChild((SegmentCRCNode *const)(v7 + 256));
      v35 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 256));
      v36 = SegmentCRCNode::getSize(v35);
      if ( *(_BYTE *)(((unsigned __int64)right_size >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)right_size & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right_size >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(right_size);
      }
      *right_size = v36;
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v7 + 256));
      *(_WORD *)(((v7 + 256) >> 3) + 0x7FFF8000) = -1800;
      v10 = 0;
    }
    std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v7 + 64));
  }
  result = v10;
  if ( v45 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1416: range 000000000CE2188C-000000000CE22E06
SegmentCRCTreePtr __cdecl SegmentCRCMgr::generateSegmentCRCTree(Json::Value *root)
{
  const Json::Value_0 *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Json::Value_0::ArrayIndex v5; // ecx
  Json::Value_0::ArrayIndex v6; // ecx
  int v7; // eax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rsi
  int v11; // r14d
  common::milog::MiLogStream *v12; // r14
  SegmentCRCNode *v13; // rax
  uint32_t Offset; // edx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  SegmentCRCNode *v17; // rax
  uint32_t Size; // edx
  common::milog::MiLogStream *v19; // r14
  SegmentCRCNode *v20; // rax
  uint32_t v21; // edx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  SegmentCRCNode *v24; // rax
  uint32_t v25; // edx
  int v26; // r14d
  int v27; // eax
  unsigned __int64 v28; // rax
  uint32_t v29; // ecx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  uint32_t v35; // edx
  SegmentCRCTreePtr result; // rax
  Json::Value *roota; // [rsp+0h] [rbp-3B0h]
  uint32_t depth; // [rsp+10h] [rbp-3A0h]
  uint32_t j; // [rsp+14h] [rbp-39Ch]
  unsigned int cur_depth_node_count; // [rsp+18h] [rbp-398h]
  int ret; // [rsp+1Ch] [rbp-394h]
  char v42[912]; // [rsp+20h] [rbp-390h] BYREF

  roota = (Json::Value *)v1;
  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 32 4 15 node_count:1429 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 1"
                        "12 4 9 <unknown> 128 4 9 <unknown> 144 16 9 tree:1424 176 16 19 tmp_left_child:1432 208 16 9 nod"
                        "e:1442 240 16 9 <unknown> 272 16 9 <unknown> 304 16 9 <unknown> 336 16 9 <unknown> 368 32 9 <unk"
                        "nown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unkn"
                        "own> 752 80 17 parent_queue:1426";
  *(_QWORD *)(v2 + 16) = SegmentCRCMgr::generateSegmentCRCTree;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862729] = 62194;
  v4[536862730] = 62194;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862746] = -202116109;
  if ( !Json::Value::isArray(v1) )
  {
    if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 368, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "generateSegmentCRCTree",
      1419);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)(v2 + 368),
      (const char (*)[23])byte_1A28FAA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)root, 0LL);
  }
  else
  {
    std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v2 + 144), 0LL);
    std::queue<std::shared_ptr<SegmentCRCNode>>::queue<std::deque<std::shared_ptr<SegmentCRCNode>>,void>((std::queue<std::shared_ptr<SegmentCRCNode>> *const)(v2 + 752));
    depth = 1;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32);
    *(_DWORD *)(v2 + 32) = 0;
    while ( 1 )
    {
      v5 = Json::Value::size((const Json::Value_0 *const)roota);
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      if ( v5 <= *(_DWORD *)(v2 + 32) )
        break;
      *(_WORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v2 + 176), 0LL);
      cur_depth_node_count = SegmentCRCMgr::calcFullBTreeDepthNodesNum(depth);
      for ( j = 0; cur_depth_node_count > j; ++j )
      {
        v6 = Json::Value::size((const Json::Value_0 *const)roota);
        if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 32);
        if ( v6 > *(_DWORD *)(v2 + 32) )
        {
          *(_WORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 32);
          v8 = *(unsigned int *)(v2 + 32);
          Json::Value::operator[](roota, v8);
          if ( *(_WORD *)(((v2 + 208) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v2 + 208, v8);
          SegmentCRCMgr::generateSegmentCRCNode((Json::Value *)(v2 + 208));
          if ( std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v2 + 208), 0LL) )
          {
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 432, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 432),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "src/security_utils.cpp",
              "generateSegmentCRCTree",
              1445);
            v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                   (common::milog::MiLogStream *const)(v2 + 432),
                   (const char (*)[40])byte_1A28FAE0);
            *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 32);
            v10 = Json::Value::operator[](roota, *(unsigned int *)(v2 + 32));
            if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
            {
              v10 = 32LL;
              __asan_report_store_n(v2 + 496, 32LL);
            }
            Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 496), (Json::Value_0 *)v10);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 496));
            std::string::~string((void *)(v2 + 496));
            *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)root, 0LL);
            v11 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 32);
            ++*(_DWORD *)(v2 + 32);
            std::queue<std::shared_ptr<SegmentCRCNode>>::push(
              (std::queue<std::shared_ptr<SegmentCRCNode>> *const)(v2 + 752),
              (const std::queue<std::shared_ptr<SegmentCRCNode>>::value_type *)(v2 + 208));
            if ( depth == 1 )
            {
              *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
              *(_WORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
              std::shared_ptr<SegmentCRCNode>::shared_ptr(
                (std::shared_ptr<SegmentCRCNode> *const)(v2 + 240),
                (const std::shared_ptr<SegmentCRCNode> *)(v2 + 208));
              if ( *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) )
                __asan_report_store16(v2 + 272, v2 + 208);
              SegmentCRCMgr::setNodeAsTreeRoot((SegmentCRCNodePtr *)(v2 + 272));
              std::shared_ptr<SegmentCRCTree>::operator=(
                (std::shared_ptr<SegmentCRCTree> *const)(v2 + 144),
                (std::shared_ptr<SegmentCRCTree> *)(v2 + 272));
              std::shared_ptr<SegmentCRCTree>::~shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v2 + 272));
              *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -1800;
              std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v2 + 240));
              *(_WORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -1800;
              if ( std::operator==<SegmentCRCTree>((const std::shared_ptr<SegmentCRCTree> *)(v2 + 144), 0LL) )
              {
                *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 560, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 560),
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "src/security_utils.cpp",
                  "generateSegmentCRCTree",
                  1461);
                v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                        (common::milog::MiLogStream *const)(v2 + 560),
                        (const char (*)[53])byte_1A28FB40);
                *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
                v13 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                Offset = SegmentCRCNode::getOffset(v13);
                if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v2 + 48);
                *(_DWORD *)(v2 + 48) = Offset;
                v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v12,
                        (const unsigned int *)(v2 + 48));
                v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" size:");
                *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
                v17 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                Size = SegmentCRCNode::getSize(v17);
                if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v2 + 64);
                *(_DWORD *)(v2 + 64) = Size;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 64));
                *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
                *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
                std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)root, 0LL);
                v11 = 0;
              }
              else
              {
                v11 = 1;
              }
            }
            else
            {
              *(_WORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
              std::shared_ptr<SegmentCRCTree>::shared_ptr(
                (std::shared_ptr<SegmentCRCTree> *const)(v2 + 336),
                (const std::shared_ptr<SegmentCRCTree> *)(v2 + 144));
              *(_WORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
              std::shared_ptr<SegmentCRCNode>::shared_ptr(
                (std::shared_ptr<SegmentCRCNode> *const)(v2 + 304),
                (const std::shared_ptr<SegmentCRCNode> *)(v2 + 208));
              ret = SegmentCRCMgr::setNodeAsChild(
                      (SegmentCRCNodePtr *)(v2 + 304),
                      (SegmentCRCTreePtr *)(v2 + 336),
                      (std::queue<std::shared_ptr<SegmentCRCNode>> *)(v2 + 752),
                      (SegmentCRCNodePtr *)(v2 + 176),
                      j);
              std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v2 + 304));
              *(_WORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -1800;
              std::shared_ptr<SegmentCRCTree>::~shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v2 + 336));
              *(_WORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -1800;
              if ( ret )
              {
                *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 624, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 624),
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "src/security_utils.cpp",
                  "generateSegmentCRCTree",
                  1474);
                v19 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        (common::milog::MiLogStream *const)(v2 + 624),
                        (const char (*)[47])byte_1A28FBA0);
                *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                v20 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                v21 = SegmentCRCNode::getOffset(v20);
                if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v2 + 80);
                *(_DWORD *)(v2 + 80) = v21;
                v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v2 + 80));
                v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" size:");
                *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
                v24 = std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                v25 = SegmentCRCNode::getSize(v24);
                if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v2 + 96);
                *(_DWORD *)(v2 + 96) = v25;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 96));
                *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
                *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
                std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)root, 0LL);
                v11 = 0;
              }
              else
              {
                v11 = 2;
              }
            }
          }
          std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v2 + 208));
          if ( v11 )
          {
            if ( v11 == 2 )
              v7 = 3;
            else
              v7 = 2;
          }
          else
          {
            v7 = 1;
          }
        }
        else
        {
          v7 = 0;
        }
        *(_WORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = -1800;
        if ( !v7 )
        {
          v26 = 0;
          goto LABEL_66;
        }
        if ( v7 == 1 )
        {
          v26 = 1;
          goto LABEL_66;
        }
      }
      ++depth;
      v26 = 2;
LABEL_66:
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v2 + 176));
      if ( v26 )
        v27 = v26 == 2 ? 2 : 1;
      else
        v27 = 0;
      *(_WORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -1800;
      if ( !v27 )
        break;
      if ( v27 != 2 )
        goto LABEL_85;
    }
    *(_WORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    v28 = ((v2 + 752) >> 3) + 2147450880;
    *(_DWORD *)v28 = 0;
    *(_DWORD *)(v28 + 4) = 0;
    *(_WORD *)(v28 + 8) = 0;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v29 = SegmentCRCMgr::calcFullBTreeNodesNum(depth - 1);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    if ( v29 == *(_DWORD *)(v2 + 32) )
    {
      std::shared_ptr<SegmentCRCTree>::shared_ptr(
        (std::shared_ptr<SegmentCRCTree> *const)root,
        (std::shared_ptr<SegmentCRCTree> *)(v2 + 144));
    }
    else
    {
      *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 688, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 688),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "generateSegmentCRCTree",
        1488);
      v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v2 + 688),
              (const char (*)[17])byte_1A28FC00);
      v31 = common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(v2 + 32));
      v32 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v31, (const char (*)[2])" ");
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112);
      *(_DWORD *)(v2 + 112) = depth - 1;
      v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, (const int *)(v2 + 112));
      v34 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v33, (const char (*)[32])byte_1A28FC80);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
      v35 = SegmentCRCMgr::calcFullBTreeNodesNum(depth - 1);
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128);
      *(_DWORD *)(v2 + 128) = v35;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 128));
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
      *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)root, 0LL);
    }
LABEL_85:
    std::queue<std::shared_ptr<SegmentCRCNode>>::~queue((std::queue<std::shared_ptr<SegmentCRCNode>> *const)(v2 + 752));
    std::shared_ptr<SegmentCRCTree>::~shared_ptr((std::shared_ptr<SegmentCRCTree> *const)(v2 + 144));
  }
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL);
    memset(
      result._M_refcount._M_pi,
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - LODWORD(result._M_refcount._M_pi) + 96) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2>::element_type *)root;
  return result;
};

// Line 1497: range 000000000CE22E08-000000000CE2357F
SegmentCRCNodePtr __cdecl SegmentCRCMgr::generateSegmentCRCNode(Json::Value *elem)
{
  const Json::Value_0 *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  SegmentCRCNodePtr result; // rax
  __int64 v7; // rsi
  int v8; // esi
  __int64 v9; // rsi
  int v10; // esi
  __int64 v11; // rsi
  std::remove_reference<std::string >::type *v12; // rsi
  unsigned int *v13; // rcx
  unsigned int *v14; // r8
  std::string *v15; // r9
  Json::Value *elema; // [rsp+10h] [rbp-1D0h]
  char v17[432]; // [rsp+30h] [rbp-1B0h] BYREF

  elema = (Json::Value *)v1;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 11 offset:1504 48 4 9 size:1504 64 32 9 <unknown> 128 32 8 crc:1505 192 32 9 <unknown> 25"
                        "6 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SegmentCRCMgr::generateSegmentCRCNode;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !Json::Value::isArray(v1) || Json::Value::size(v1) != 3 )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "generateSegmentCRCNode",
      1500);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[48])byte_1A28FDA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)elem, 0LL);
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32);
    *(_DWORD *)(v2 + 32) = 0;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48);
    *(_DWORD *)(v2 + 48) = 0;
    std::string::basic_string(v2 + 128);
    v7 = Json::Value::operator[](v1);
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      v7 = 32LL;
      __asan_report_store_n(v2 + 192, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 192), (Json::Value_0 *)v7);
    v8 = std::stol((const std::string *)(v2 + 192), 0LL, 16);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32);
    *(_DWORD *)(v2 + 32) = v8;
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    v9 = Json::Value::operator[](elema);
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      v9 = 32LL;
      __asan_report_store_n(v2 + 256, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 256), (Json::Value_0 *)v9);
    v10 = std::stol((const std::string *)(v2 + 256), 0LL, 16);
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48);
    *(_DWORD *)(v2 + 48) = v10;
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    v11 = Json::Value::operator[](elema);
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      v11 = 32LL;
      __asan_report_store_n(v2 + 320, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 320), (Json::Value_0 *)v11);
    v12 = std::move<std::string>((std::string *)(v2 + 320));
    std::string::operator=(v2 + 128, v12);
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v13 = (unsigned int *)std::move<std::string &>((std::string *)(v2 + 128));
    if ( *(_WORD *)(((unsigned __int64)elem >> 3) + 0x7FFF8000) )
      __asan_report_store16(elem, v12);
    std::make_shared<SegmentCRCNode,unsigned int &,unsigned int &,std::string>(
      (unsigned int *)elem,
      (unsigned int *)(v2 + 32),
      (std::string *)(v2 + 48),
      v13,
      v14,
      v15);
    std::string::~string((void *)(v2 + 128));
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SegmentCRCNode,(__gnu_cxx::_Lock_policy)2>::element_type *)elem;
  return result;
};

// Line 1521: range 000000000CE23580-000000000CE235F2
SegmentCRCTreePtr __cdecl SegmentCRCMgr::setNodeAsTreeRoot(SegmentCRCNodePtr *p_node)
{
  std::shared_ptr<SegmentCRCNode> *v1; // rsi
  SegmentCRCTreePtr result; // rax

  if ( std::operator==<SegmentCRCNode>(v1, 0LL) )
  {
    std::shared_ptr<SegmentCRCTree>::shared_ptr((std::shared_ptr<SegmentCRCTree> *const)p_node, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)p_node >> 3) + 0x7FFF8000) )
      __asan_report_store16(p_node, 0LL);
    result = std::make_shared<SegmentCRCTree,std::shared_ptr<SegmentCRCNode> &>(p_node, v1);
  }
  result._M_ptr = (std::__shared_ptr<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2>::element_type *)p_node;
  return result;
};

// Line 1529: range 000000000CE235F4-000000000CE24031
__int64 __fastcall SegmentCRCMgr::setNodeAsChild(
        SegmentCRCNodePtr *p_node,
        SegmentCRCTreePtr *p_tree,
        std::queue<std::shared_ptr<SegmentCRCNode>> *parent_queue,
        SegmentCRCNodePtr *tmp_left_child,
        uint32_t cur_depth_index)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v10; // rax
  std::shared_ptr<SegmentCRCNode> *v11; // rax
  common::milog::MiLogStream *v12; // rax
  _BOOL4 v13; // eax
  const std::shared_ptr<SegmentCRCNode> *v14; // rax
  int v15; // r15d
  SegmentCRCTree *v16; // r15
  SegmentCRCTree *v17; // r15
  __int64 result; // rax
  int ret; // [rsp+3Ch] [rbp-234h]
  int reta; // [rsp+3Ch] [rbp-234h]
  char v24[560]; // [rsp+40h] [rbp-230h] BYREF

  v6 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(512LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "11 48 4 20 cur_depth_index:1528 64 16 11 parent:1564 96 16 9 <unknown> 128 16 9 <unknown> 160 16"
                        " 9 <unknown> 192 16 9 <unknown> 224 16 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = SegmentCRCMgr::setNodeAsChild;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862725] = -219021312;
  v8[536862726] = -219021312;
  v8[536862727] = -219021312;
  v8[536862729] = -218959118;
  v8[536862731] = -218959118;
  v8[536862733] = -218959118;
  v8[536862735] = -202116109;
  *(_DWORD *)(v6 + 48) = cur_depth_index;
  if ( std::operator==<SegmentCRCNode>(p_node, 0LL) || std::operator==<SegmentCRCTree>(p_tree, 0LL) )
  {
    v5 = -1;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v6 + 48) & 1) == 0 )
  {
    if ( std::operator!=<SegmentCRCNode>(tmp_left_child, 0LL) )
    {
      if ( *(char *)(((v6 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "setNodeAsChild",
        1539);
      v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              (common::milog::MiLogStream *const)(v6 + 256),
              (const char (*)[62])byte_1A28FF20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 256));
      v5 = -1;
      goto LABEL_36;
    }
    v11 = std::move<std::shared_ptr<SegmentCRCNode> &>(p_node);
    std::shared_ptr<SegmentCRCNode>::operator=(tmp_left_child, v11);
LABEL_35:
    v5 = 0;
    goto LABEL_36;
  }
  if ( std::operator==<SegmentCRCNode>(tmp_left_child, 0LL) )
  {
    if ( *(char *)(((v6 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "setNodeAsChild",
      1553);
    v12 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            (common::milog::MiLogStream *const)(v6 + 320),
            (const char (*)[59])byte_1A28FF80);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 320));
    v5 = -1;
    v13 = 0;
  }
  else if ( std::queue<std::shared_ptr<SegmentCRCNode>>::empty(parent_queue) )
  {
    if ( *(char *)(((v6 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/security_utils.cpp",
      "setNodeAsChild",
      1560);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
      (common::milog::MiLogStream *const)(v6 + 384),
      (const char (*)[22])byte_1A28FFE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 384));
    v5 = -1;
    v13 = 0;
  }
  else
  {
    v14 = std::queue<std::shared_ptr<SegmentCRCNode>>::front(parent_queue);
    std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 64), v14);
    if ( std::operator==<SegmentCRCNode>((const std::shared_ptr<SegmentCRCNode> *)(v6 + 64), 0LL) )
    {
      if ( *(char *)(((v6 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 64 + 31) & 7) >= *(_BYTE *)(((v6 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/security_utils.cpp",
        "setNodeAsChild",
        1567);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v6 + 448),
        (const char (*)[37])byte_1A290020);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 448));
      *(_DWORD *)(((v6 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
      v15 = 0;
    }
    else
    {
      std::queue<std::shared_ptr<SegmentCRCNode>>::pop(parent_queue);
      v16 = std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_tree);
      std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 128), tmp_left_child);
      std::shared_ptr<SegmentCRCNode>::shared_ptr(
        (std::shared_ptr<SegmentCRCNode> *const)(v6 + 96),
        (const std::shared_ptr<SegmentCRCNode> *)(v6 + 64));
      ret = SegmentCRCTree::setNodeLeftChild(v16, (SegmentCRCNodePtr *)(v6 + 96), (SegmentCRCNodePtr *)(v6 + 128));
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 96));
      *(_WORD *)(((v6 + 96) >> 3) + 0x7FFF8000) = -1800;
      std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 128));
      *(_WORD *)(((v6 + 128) >> 3) + 0x7FFF8000) = -1800;
      if ( ret )
      {
        v5 = -1;
        v15 = 0;
      }
      else
      {
        v17 = std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SegmentCRCTree,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_tree);
        *(_WORD *)(((v6 + 192) >> 3) + 0x7FFF8000) = 0;
        std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 192), p_node);
        *(_WORD *)(((v6 + 160) >> 3) + 0x7FFF8000) = 0;
        std::shared_ptr<SegmentCRCNode>::shared_ptr(
          (std::shared_ptr<SegmentCRCNode> *const)(v6 + 160),
          (const std::shared_ptr<SegmentCRCNode> *)(v6 + 64));
        reta = SegmentCRCTree::setNodeRightChild(v17, (SegmentCRCNodePtr *)(v6 + 160), (SegmentCRCNodePtr *)(v6 + 192));
        std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 160));
        *(_WORD *)(((v6 + 160) >> 3) + 0x7FFF8000) = -1800;
        std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 192));
        *(_WORD *)(((v6 + 192) >> 3) + 0x7FFF8000) = -1800;
        if ( reta )
        {
          v5 = -1;
          v15 = 0;
        }
        else
        {
          *(_WORD *)(((v6 + 224) >> 3) + 0x7FFF8000) = 0;
          std::shared_ptr<SegmentCRCNode>::shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 224), 0LL);
          std::shared_ptr<SegmentCRCNode>::operator=(tmp_left_child, (std::shared_ptr<SegmentCRCNode> *)(v6 + 224));
          std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 224));
          *(_WORD *)(((v6 + 224) >> 3) + 0x7FFF8000) = -1800;
          v15 = 1;
        }
      }
    }
    std::shared_ptr<SegmentCRCNode>::~shared_ptr((std::shared_ptr<SegmentCRCNode> *const)(v6 + 64));
    v13 = v15 == 1;
  }
  if ( v13 )
    goto LABEL_35;
LABEL_36:
  result = v5;
  if ( v24 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF803C) = 0;
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
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1589: range 000000000CE24032-000000000CE24055
uint32_t __cdecl SegmentCRCMgr::calcFullBTreeDepthNodesNum(uint32_t depth)
{
  return (int)std::pow<int,unsigned int>(2, depth - 1);
};

// Line 1594: range 000000000CE24056-000000000CE24082
uint32_t __cdecl SegmentCRCMgr::calcFullBTreeNodesNum(uint32_t depth)
{
  return (int)(std::pow<int,unsigned int>(2, depth) - 1.0);
};

// Line 1596: range 000000000CE320F3-000000000CE32107
void __cdecl GLOBAL__sub_I_security_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1596: range 000000000CE31F52-000000000CE320F2
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  const char *v9; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/security_utils.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      v7 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v7 )
      {
        v8 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v8 = 1;
        v9 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v9;
      }
    }
    __asan_after_dynamic_init();
  }
};
