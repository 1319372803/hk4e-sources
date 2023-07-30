// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DropExcelConfig.cpp

// Line 22: range 0000000013A80590-0000000013A807F2
int32_t __cdecl DropExcelConfigMgr::checkConfig(DropExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( DropExcelConfigMgr::checkDropExcelConfig(this, txt_config_mgr)
    || DropExcelConfigMgr::checkDropSubfieldExcelConfig(this, txt_config_mgr)
    || DropExcelConfigMgr::checkEntityDropSubfieldExcelConfig(this, txt_config_mgr)
    || DropExcelConfigMgr::checkAllDropExcelConfig(this, txt_config_mgr)
    || DropExcelConfigMgr::checkTagArrangeLimitExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "checkConfig",
      30);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"checkConfig failed");
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

// Line 38: range 0000000013A807F4-0000000013A80A56
int32_t __cdecl DropExcelConfigMgr::rewriteConfig(DropExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( DropExcelConfigMgr::rewriteDropExcelConfig(this, txt_config_mgr)
    || DropExcelConfigMgr::rewriteDropSubfieldExcelConfig(this, txt_config_mgr)
    || DropExcelConfigMgr::rewriteEntityDropSubfieldExcelConfig(this, txt_config_mgr)
    || DropExcelConfigMgr::rewriteAllDropExcelConfig(this, txt_config_mgr)
    || DropExcelConfigMgr::rewriteTagArrangeLimitExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "rewriteConfig",
      46);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])"rewriteConfig failed");
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

// Line 54: range 0000000013A80A58-0000000013A82568
int32_t __cdecl DropExcelConfigMgr::rewriteDropExcelConfig(
        DropExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *p_num_interval; // rsi
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  int v13; // edi
  __int64 v14; // rsi
  int v15; // ecx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // edi
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  unsigned __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::vector<unsigned int>::reference v33; // rax
  uint32_t *v34; // rdx
  uint32_t v35; // ecx
  char v36; // dl
  std::vector<unsigned int>::reference v37; // rax
  uint32_t *v38; // rdx
  uint32_t v39; // ecx
  char v40; // al
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  unsigned __int64 v45; // rax
  int v46; // eax
  unsigned __int64 v47; // rax
  __int64 p_daily_output_limit_str; // rsi
  int *p_daily_output_limit; // rdx
  unsigned __int64 v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rdx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  unsigned __int64 v56; // rax
  __int64 p_total_output_limit_str; // rsi
  int *p_total_output_limit; // rdx
  unsigned __int64 v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  unsigned __int64 v65; // rax
  __int64 p_activity_output_limit_str; // rsi
  int *p_activity_output_limit; // rdx
  unsigned __int64 v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  int v74; // edx
  bool v76; // [rsp+Ch] [rbp-4B4h]
  int v77; // [rsp+Ch] [rbp-4B4h]
  data::DropExcelConfigMap *__for_range; // [rsp+20h] [rbp-4A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-498h]
  const unsigned int *drop_id; // [rsp+30h] [rbp-490h]
  std::tuple_element<1,std::pair<unsigned int const,data::DropExcelConfig> >::type *node_config; // [rsp+38h] [rbp-488h]
  std::vector<data::DropNode> *__for_range_0; // [rsp+40h] [rbp-480h]
  data::DropNode *drop_node; // [rsp+48h] [rbp-478h]
  char v86[1136]; // [rsp+50h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "22 48 1 9 <unknown> 64 4 15 floating_num:64 80 4 7 ret:102 96 8 14 __for_begin:55 128 8 12 __for"
                        "_end:55 160 8 14 __for_begin:59 192 8 12 __for_end:59 224 16 9 <unknown> 256 16 9 <unknown> 288 "
                        "16 9 <unknown> 320 24 10 num_vec:83 384 24 9 <unknown> 448 24 9 <unknown> 512 24 9 <unknown> 576"
                        " 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 "
                        "32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::rewriteDropExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -219021312;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -202116109;
  __for_range = &this->drop_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::DropExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::DropExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 96));
    drop_id = std::get<0ul,unsigned int const,data::DropExcelConfig>(__in);
    node_config = std::get<1ul,unsigned int const,data::DropExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::DropNode,unsigned int data::DropNode::*>(
      &node_config->nodes,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::DropNode,unsigned int data::DropNode::*>(
      &node_config->nodes,
      (unsigned int *)0x30);
    __for_range_0 = &node_config->nodes;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, 48LL);
    *(std::vector<data::DropNode>::iterator *)(v3 + 160) = std::vector<data::DropNode>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, 48LL);
    *(std::vector<data::DropNode>::iterator *)(v3 + 192) = std::vector<data::DropNode>::end(__for_range_0);
    while ( 1 )
    {
      p_num_interval = (std::string *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<data::DropNode *,std::vector<data::DropNode>>(
              (const __gnu_cxx::__normal_iterator<data::DropNode*,std::vector<data::DropNode> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<data::DropNode*,std::vector<data::DropNode> > *)(v3 + 192)) )
        break;
      drop_node = __gnu_cxx::__normal_iterator<data::DropNode *,std::vector<data::DropNode>>::operator*((const __gnu_cxx::__normal_iterator<data::DropNode*,std::vector<data::DropNode> > *const)(v3 + 160));
      if ( std::string::find(&drop_node->num_interval, 46LL, 0LL) == -1 )
      {
        v27 = ((v3 + 320) >> 3) + 2147450880;
        *(_WORD *)v27 = 0;
        *(_BYTE *)(v27 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 320));
        *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 704),
          ";",
          (const std::allocator<char> *)(v3 + 48));
        v76 = common::tools::StringUtils::splitToList<unsigned int>(
                &drop_node->num_interval,
                (const std::string *)(v3 + 704),
                (std::vector<unsigned int> *)(v3 + 320),
                0) != 0;
        std::string::~string((void *)(v3 + 704));
        *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 48);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v76 )
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
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "rewriteDropExcelConfig",
            86);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v28, (const char (*)[16])byte_1AC66F20);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, drop_id);
          v31 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v30, (const char (*)[29])byte_1AC67020);
          p_num_interval = &drop_node->num_interval;
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &drop_node->num_interval);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
          *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v77 = 0;
        }
        else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 320))
               && std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 320)) <= 2 )
        {
          p_num_interval = 0LL;
          v33 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 320), 0LL);
          v34 = v33;
          if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v33);
          }
          v35 = *v34;
          v36 = *(_BYTE *)(((unsigned __int64)&drop_node->min_count >> 3) + 0x7FFF8000);
          if ( v36 != 0 && (char)((((_BYTE)drop_node + 52) & 7) + 3) >= v36 )
          {
            LOBYTE(p_num_interval) = v36 != 0;
            __asan_report_store4(&drop_node->min_count, p_num_interval);
          }
          drop_node->min_count = v35;
          v37 = std::vector<unsigned int>::back((std::vector<unsigned int> *const)(v3 + 320));
          v38 = v37;
          if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v37);
          }
          v39 = *v38;
          v40 = *(_BYTE *)(((unsigned __int64)&drop_node->max_count >> 3) + 0x7FFF8000);
          LOBYTE(p_num_interval) = v40 != 0;
          if ( v40 != 0 && v40 <= 3 )
            __asan_report_store4(&drop_node->max_count, p_num_interval);
          drop_node->max_count = v39;
          v77 = 1;
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
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "rewriteDropExcelConfig",
            96);
          v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v41, (const char (*)[16])byte_1AC66F20);
          v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, drop_id);
          v44 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v43, (const char (*)[26])byte_1AC67060);
          p_num_interval = &drop_node->num_interval;
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, &drop_node->num_interval);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
          *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v77 = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 320));
        v45 = ((v3 + 320) >> 3) + 2147450880;
        *(_WORD *)v45 = -1800;
        *(_BYTE *)(v45 + 2) = -8;
        if ( v77 != 1 )
        {
          v26 = 0;
          goto LABEL_74;
        }
      }
      else
      {
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, 46LL);
        *(_DWORD *)(v3 + 64) = 0;
        if ( common::tools::StringUtils::strToNum<float>(&drop_node->num_interval, (float *)(v3 + 64), 1) )
          goto LABEL_23;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( *(float *)(v3 + 64) < 0.0 )
LABEL_23:
          v7 = 1;
        else
          v7 = 0;
        if ( v7 )
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
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "rewriteDropExcelConfig",
            67);
          v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 576),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])byte_1AC66F20);
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, drop_id);
          v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v10, (const char (*)[41])byte_1AC66F60);
          p_num_interval = &drop_node->num_interval;
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &drop_node->num_interval);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          v13 = (int)*(float *)(v3 + 64);
          v14 = (((_BYTE)drop_node + 52) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&drop_node->min_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)drop_node + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_node->min_count >> 3)
                                                                     + 0x7FFF8000) )
          {
            v13 = (_DWORD)drop_node + 52;
            __asan_report_store4(&drop_node->min_count, v14);
          }
          drop_node->min_count = v13;
          v15 = drop_node->min_count + 1;
          v16 = *(_BYTE *)(((unsigned __int64)&drop_node->max_count >> 3) + 0x7FFF8000);
          if ( v16 != 0 && v16 <= 3 )
          {
            LOBYTE(v14) = v16 != 0;
            __asan_report_store4(&drop_node->max_count, v14);
          }
          drop_node->max_count = v15;
          v17 = ((_BYTE)drop_node + 60) & 7;
          v18 = (*(_BYTE *)(((unsigned __int64)&drop_node->is_floating_number >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&drop_node->is_floating_number >> 3) + 0x7FFF8000));
          if ( (_BYTE)v18 )
            __asan_report_store1(&drop_node->is_floating_number, v17, v18);
          drop_node->is_floating_number = 1;
          v19 = (int)(float)(10000.0 * (float)(*(float *)(v3 + 64) - (float)(int)drop_node->min_count));
          p_num_interval = (std::string *)((((_BYTE)drop_node + 68) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&drop_node->weight_max >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)drop_node + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_node->weight_max >> 3)
                                                                     + 0x7FFF8000) )
          {
            v19 = (_DWORD)drop_node + 68;
            __asan_report_store4(&drop_node->weight_max, p_num_interval);
          }
          drop_node->weight_max = v19;
          v20 = 10000 - drop_node->weight_max;
          v21 = *(_BYTE *)(((unsigned __int64)&drop_node->weight_min >> 3) + 0x7FFF8000);
          LOBYTE(p_num_interval) = v21 != 0;
          if ( v21 != 0 && v21 <= 3 )
            __asan_report_store4(&drop_node->weight_min, p_num_interval);
          drop_node->weight_min = v20;
          if ( drop_node->weight_min || drop_node->weight_max )
          {
            v12 = 1;
          }
          else
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
              "./src/txt_data_manual/DropExcelConfig.cpp",
              "rewriteDropExcelConfig",
              77);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v22,
                    (const char (*)[16])byte_1AC66F20);
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, drop_id);
            v25 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    v24,
                    (const char (*)[42])byte_1AC66FC0);
            p_num_interval = &drop_node->num_interval;
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &drop_node->num_interval);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
            *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v12 = 0;
          }
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v12 != 1 )
        {
          v26 = 0;
          goto LABEL_74;
        }
      }
      __gnu_cxx::__normal_iterator<data::DropNode *,std::vector<data::DropNode>>::operator++((__gnu_cxx::__normal_iterator<data::DropNode*,std::vector<data::DropNode> > *const)(v3 + 160));
    }
    v26 = 1;
LABEL_74:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v26 == 1 )
    {
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80, p_num_interval);
      *(_DWORD *)(v3 + 80) = 0;
      v47 = ((v3 + 384) >> 3) + 2147450880;
      *(_WORD *)v47 = 0;
      *(_BYTE *)(v47 + 2) = 0;
      p_daily_output_limit_str = (__int64)&node_config->daily_output_limit_str;
      if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 407) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 105) & 7) >= *(_BYTE *)(((v3 + 407) >> 3) + 0x7FFF8000) )
      {
        p_daily_output_limit_str = 24LL;
        __asan_report_store_n(v3 + 384, 24LL);
      }
      TxtConfigMgr::makeOptionalLimitConfig(
        (std::pair<int,data::OptionalLimitConfig> *)(v3 + 384),
        (const std::string *)p_daily_output_limit_str);
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      p_daily_output_limit = (int *)&node_config->daily_output_limit;
      if ( *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      std::tie<int,data::OptionalLimitConfig>(
        (int *)(v3 + 224),
        (data::OptionalLimitConfig *)(v3 + 80),
        p_daily_output_limit,
        (data::OptionalLimitConfig *)(v3 + 80));
      std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
        (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 224),
        (std::pair<int,data::OptionalLimitConfig> *)(v3 + 384));
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -1800;
      std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 384));
      v50 = ((v3 + 384) >> 3) + 2147450880;
      *(_WORD *)v50 = -1800;
      *(_BYTE *)(v50 + 2) = -8;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 80);
      if ( *(_DWORD *)(v3 + 80) )
      {
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
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "rewriteDropExcelConfig",
          106);
        v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v51, (const char (*)[16])byte_1AC66F20);
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, drop_id);
        v54 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v53, (const char (*)[21])byte_1AC670A0);
        v55 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v54,
                &node_config->daily_output_limit_str);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v55, (const char (*)[13])byte_1AC670E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 80);
        v2 = *(_DWORD *)(v3 + 80);
        v46 = 0;
      }
      else
      {
        v56 = ((v3 + 448) >> 3) + 2147450880;
        *(_WORD *)v56 = 0;
        *(_BYTE *)(v56 + 2) = 0;
        p_total_output_limit_str = (__int64)&node_config->total_output_limit_str;
        if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 471) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 41) & 7) >= *(_BYTE *)(((v3 + 471) >> 3) + 0x7FFF8000) )
        {
          p_total_output_limit_str = 24LL;
          __asan_report_store_n(v3 + 448, 24LL);
        }
        TxtConfigMgr::makeOptionalLimitConfig(
          (std::pair<int,data::OptionalLimitConfig> *)(v3 + 448),
          (const std::string *)p_total_output_limit_str);
        *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        p_total_output_limit = (int *)&node_config->total_output_limit;
        if ( *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::tie<int,data::OptionalLimitConfig>(
          (int *)(v3 + 256),
          (data::OptionalLimitConfig *)(v3 + 80),
          p_total_output_limit,
          (data::OptionalLimitConfig *)(v3 + 80));
        std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
          (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 256),
          (std::pair<int,data::OptionalLimitConfig> *)(v3 + 448));
        *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -1800;
        std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 448));
        v59 = ((v3 + 448) >> 3) + 2147450880;
        *(_WORD *)v59 = -1800;
        *(_BYTE *)(v59 + 2) = -8;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 80);
        if ( *(_DWORD *)(v3 + 80) )
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
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "rewriteDropExcelConfig",
            112);
          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v60, (const char (*)[16])byte_1AC66F20);
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, drop_id);
          v63 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v62, (const char (*)[21])byte_1AC67120);
          v64 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v63,
                  &node_config->total_output_limit_str);
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v64, (const char (*)[13])byte_1AC670E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
          *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 80);
          v2 = *(_DWORD *)(v3 + 80);
          v46 = 0;
        }
        else
        {
          v65 = ((v3 + 512) >> 3) + 2147450880;
          *(_WORD *)v65 = 0;
          *(_BYTE *)(v65 + 2) = 0;
          p_activity_output_limit_str = (__int64)&node_config->activity_output_limit_str;
          if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 23) & 7) >= *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) )
          {
            p_activity_output_limit_str = 24LL;
            __asan_report_store_n(v3 + 512, 24LL);
          }
          TxtConfigMgr::makeOptionalLimitConfig(
            (std::pair<int,data::OptionalLimitConfig> *)(v3 + 512),
            (const std::string *)p_activity_output_limit_str);
          *(_WORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          p_activity_output_limit = (int *)&node_config->activity_output_limit;
          if ( *(_WORD *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          std::tie<int,data::OptionalLimitConfig>(
            (int *)(v3 + 288),
            (data::OptionalLimitConfig *)(v3 + 80),
            p_activity_output_limit,
            (data::OptionalLimitConfig *)(v3 + 80));
          std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
            (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 288),
            (std::pair<int,data::OptionalLimitConfig> *)(v3 + 512));
          *(_WORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -1800;
          std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 512));
          v68 = ((v3 + 512) >> 3) + 2147450880;
          *(_WORD *)v68 = -1800;
          *(_BYTE *)(v68 + 2) = -8;
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 80);
          if ( *(_DWORD *)(v3 + 80) )
          {
            *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1024, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1024),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DropExcelConfig.cpp",
              "rewriteDropExcelConfig",
              118);
            v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1024),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v69,
                    (const char (*)[16])byte_1AC66F20);
            v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, drop_id);
            v72 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v71,
                    (const char (*)[21])byte_1AC67160);
            v73 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v72,
                    &node_config->activity_output_limit_str);
            common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v73, (const char (*)[13])byte_1AC670E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
            *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            v2 = *(_DWORD *)(v3 + 80);
            v46 = 0;
          }
          else
          {
            v46 = 1;
          }
        }
      }
    }
    else
    {
      v46 = 0;
    }
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v46 != 1 )
    {
      v74 = 0;
      goto LABEL_119;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 96));
  }
  v74 = 1;
LABEL_119:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v74 == 1 )
    v2 = DropExcelConfigMgr::rewriteMaxDropItemMap(this, txt_config_mgr);
  if ( v86 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v86);
  }
  return v2;
};

// Line 127: range 0000000013A83612-0000000013A8415D
int32_t __cdecl DropExcelConfigMgr::rewriteMaxDropItemMap(DropExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  std::unordered_map<unsigned int,unsigned int>::size_type v7; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v8; // rdx
  __int64 v9; // rsi
  __int64 *v10; // rdx
  int32_t result; // eax
  data::DropExcelConfigMap *__for_range; // [rsp+18h] [rbp-298h]
  data::DropExcelConfigMap *__for_range_0; // [rsp+20h] [rbp-290h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::reference v14; // [rsp+28h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,data::DropExcelConfig> >::type *drop_id_0; // [rsp+30h] [rbp-280h]
  std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::mapped_type *id_count_config_vec; // [rsp+40h] [rbp-270h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::mapped_type *item_map; // [rsp+48h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+58h] [rbp-258h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+60h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::reference v20; // [rsp+68h] [rbp-248h]
  unsigned int *drop_id; // [rsp+70h] [rbp-240h]
  char v22[560]; // [rsp+80h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 8 15 __for_begin:199 64 8 13 __for_end:199 96 8 15 __for_begin:204 128 8 13 __for_end:204 "
                        "160 8 9 <unknown> 192 8 15 __for_begin:209 224 8 13 __for_end:209 256 16 19 id_count_config:211 "
                        "288 32 8 calc:130 352 32 9 <unknown> 416 56 12 memo_map:129";
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::rewriteMaxDropItemMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -219021312;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *const)(v2 + 416));
  std::function<std::unordered_map<unsigned int,unsigned int> const& ()(unsigned int)>::function((std::function<const std::unordered_map<unsigned int,unsigned int>&(unsigned int)> *const)(v2 + 288));
  if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 352, txt_config_mgr);
  *(_QWORD *)(v2 + 352) = this;
  if ( *(_BYTE *)(((v2 + 360) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 360, txt_config_mgr);
  *(_QWORD *)(v2 + 360) = v2 + 416;
  if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 368, txt_config_mgr);
  *(_QWORD *)(v2 + 368) = v2 + 288;
  if ( *(_BYTE *)(((v2 + 376) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 376, txt_config_mgr);
  *(_QWORD *)(v2 + 376) = txt_config_mgr;
  v5 = (char *)(v2 + 352);
  std::function<std::unordered_map<unsigned int,unsigned int> const& ()(unsigned int)>::operator=<DropExcelConfigMgr::rewriteMaxDropItemMap(TxtConfigMgr &)::{lambda(unsigned int)#1}>(
    (std::function<const std::unordered_map<unsigned int,unsigned int>&(unsigned int)> *const)(v2 + 288),
    (DropExcelConfigMgr::rewriteMaxDropItemMap::<lambda(uint32_t)> *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  __for_range = &this->drop_excel_config_map;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v5);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::DropExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DropExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v2 + 64)) )
      break;
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v2 + 32));
    drop_id = std::get<0ul,unsigned int const,data::DropExcelConfig>(v20);
    std::get<1ul,unsigned int const,data::DropExcelConfig>(v20);
    if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(drop_id);
    }
    std::function<std::unordered_map<unsigned int,unsigned int> const& ()(unsigned int)>::operator()(
      (const std::function<const std::unordered_map<unsigned int,unsigned int>&(unsigned int)> *const)(v2 + 288),
      *drop_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->drop_excel_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v6);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DropExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v6);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::DropExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v2 + 128)) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v2 + 96));
    drop_id_0 = std::get<0ul,unsigned int const,data::DropExcelConfig>(v14);
    std::get<1ul,unsigned int const,data::DropExcelConfig>(v14);
    id_count_config_vec = std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::operator[](
                            &this->max_drop_item_map,
                            drop_id_0);
    item_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                 (std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *const)(v2 + 416),
                 drop_id_0);
    v7 = std::unordered_map<unsigned int,unsigned int>::size(item_map);
    std::vector<data::IdCountConfig>::reserve(id_count_config_vec, v7);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v7);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 192) = std::unordered_map<unsigned int,unsigned int>::begin(item_map);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v7);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 224) = std::unordered_map<unsigned int,unsigned int>::end(item_map);
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 224)) )
    {
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v2 + 224);
      v9 = ((_DWORD)v8 + 7) & 7;
      if ( ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v8 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) )
      {
        v9 = 8LL;
        __asan_report_load_n(v8, 8LL);
      }
      *(std::pair<unsigned int const,unsigned int> *)(v2 + 160) = *v8;
      item_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 160));
      item_count = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 160));
      *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      v10 = &`vtable for'data::IdCountConfig + 2;
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 256, v9);
      *(_QWORD *)(v2 + 256) = v10;
      if ( *(_BYTE *)(((v2 + 264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 264, v9);
      *(_DWORD *)(v2 + 264) = 0;
      if ( *(_BYTE *)(((v2 + 268) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 + 12) & 7) + 3) >= *(_BYTE *)(((v2 + 268) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 268, (((_BYTE)v2 + 12) & 7u) + 3);
      }
      *(_DWORD *)(v2 + 268) = 0;
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id);
      }
      *(_DWORD *)(v2 + 264) = *item_id;
      if ( *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_count);
      }
      *(_DWORD *)(v2 + 268) = *item_count;
      std::vector<data::IdCountConfig>::push_back(
        id_count_config_vec,
        (const std::vector<data::IdCountConfig>::value_type *)(v2 + 256));
      data::IdCountConfig::~IdCountConfig((data::IdCountConfig *const)(v2 + 256));
      *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -1800;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  std::function<std::unordered_map<unsigned int,unsigned int> const& ()(unsigned int)>::~function((std::function<const std::unordered_map<unsigned int,unsigned int>&(unsigned int)> *const)(v2 + 288));
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *const)(v2 + 416));
  result = 0;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 132: range 0000000013A8256A-0000000013A83611
const DropExcelConfigMgr::rewriteMaxDropItemMap::<lambda(uint32_t)>::ItemMap *__fastcall DropExcelConfigMgr::rewriteMaxDropItemMap(TxtConfigMgr &)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        __int64 drop_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *v5; // rax
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *v6; // rax
  bool v7; // al
  const DropExcelConfigMgr::rewriteMaxDropItemMap::<lambda(uint32_t)>::ItemMap *result; // rax
  __int64 v9; // rsi
  data::DropRandomType random_type; // eax
  DropExcelConfigMgr *v11; // rdi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rax
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // r14d
  uint32_t *v16; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  char v19; // cl
  std::function<const std::unordered_map<unsigned int,unsigned int>&(unsigned int)> *v20; // rdx
  __int64 v21; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v22; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v23; // rax
  __int64 v24; // rsi
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v25; // ecx
  int v26; // ecx
  char v27; // al
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v28; // rax
  unsigned int *v29; // rax
  int *v30; // rdx
  int v31; // r14d
  const std::unordered_map<unsigned int,unsigned int>::key_type *v32; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v33; // rax
  _DWORD *v34; // rdx
  char v35; // cl
  DropExcelConfigMgr *p_id; // rdi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v37; // rax
  unsigned int *v38; // rax
  int *v39; // rdx
  int v40; // r14d
  uint32_t *v41; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v42; // rax
  _DWORD *v43; // rdx
  char v44; // cl
  std::function<const std::unordered_map<unsigned int,unsigned int>&(unsigned int)> *v45; // rdx
  __int64 id; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v47; // rdx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v48; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type v49; // esi
  int v50; // edi
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::mapped_type *item_map; // [rsp+10h] [rbp-260h]
  data::DropExcelConfig *drop_config_ptr; // [rsp+18h] [rbp-258h]
  const std::vector<data::DropNode> *__for_range_1; // [rsp+20h] [rbp-250h]
  const data::DropNode *child_node_0; // [rsp+28h] [rbp-248h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+38h] [rbp-238h]
  const std::unordered_map<unsigned int,unsigned int>::key_type *item_id_0; // [rsp+40h] [rbp-230h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *item_count_0; // [rsp+48h] [rbp-228h]
  const std::vector<data::DropNode> *__for_range; // [rsp+50h] [rbp-220h]
  const data::DropNode *child_node; // [rsp+58h] [rbp-218h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+68h] [rbp-208h]
  const std::unordered_map<unsigned int,unsigned int>::key_type *item_id; // [rsp+70h] [rbp-200h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+78h] [rbp-1F8h]
  char v64[496]; // [rsp+80h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 4 9 <unknown> 48 4 11 drop_id:132 64 8 8 iter:134 96 8 9 <unknown> 128 8 15 __for_begin:15"
                        "1 160 8 13 __for_end:151 192 8 9 <unknown> 224 8 15 __for_begin:164 256 8 13 __for_end:164 288 8"
                        " 15 __for_begin:172 320 8 13 __for_end:172 352 8 9 <unknown> 384 8 15 __for_begin:185 416 8 13 __for_end:185";
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::rewriteMaxDropItemMap(TxtConfigMgr &)::{lambda(unsigned int)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
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
  v4[536862733] = -202116352;
  *(_DWORD *)(v2 + 48) = drop_id;
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  v5 = *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> **)(__closure + 8);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    v5 = (std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *)__asan_report_store8(
                                                                                             v2 + 64,
                                                                                             drop_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(v5, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> **)(__closure + 8);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    v6 = (std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *)__asan_report_store8(
                                                                                             v2 + 96,
                                                                                             v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure + 8);
    item_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                 *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *const *)(__closure + 8),
                 (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(
                        *(data::DropExcelConfigMgrBase *const *)__closure,
                        *(unsigned int *)(v2 + 48));
    if ( drop_config_ptr )
    {
      v9 = (((_BYTE)drop_config_ptr + 68) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->random_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)drop_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_config_ptr->random_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&drop_config_ptr->random_type);
      }
      random_type = drop_config_ptr->random_type;
      if ( random_type )
      {
        if ( random_type == DROP_RANDOM_INDEPENDENT )
        {
          __for_range_1 = &drop_config_ptr->nodes;
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 288, v9);
          *(std::vector<data::DropNode>::const_iterator *)(v2 + 288) = std::vector<data::DropNode>::begin(__for_range_1);
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 320, v9);
          *(std::vector<data::DropNode>::const_iterator *)(v2 + 320) = std::vector<data::DropNode>::end(__for_range_1);
          while ( __gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(
                    (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v2 + 288),
                    (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v2 + 320)) )
          {
            child_node_0 = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v2 + 288));
            if ( *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&child_node_0->weight);
            }
            if ( child_node_0->weight )
            {
              if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
                __asan_report_load8(__closure);
              p_id = *(DropExcelConfigMgr **)__closure;
              if ( *(_BYTE *)(((unsigned __int64)&child_node_0->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&child_node_0->id >> 3) + 0x7FFF8000) <= 3 )
              {
                p_id = (DropExcelConfigMgr *)&child_node_0->id;
                __asan_report_load4(&child_node_0->id);
              }
              if ( data::DropExcelConfigMgrBase::findDropExcelConfig(p_id, child_node_0->id) )
              {
                if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(__closure + 16);
                v45 = *(std::function<const std::unordered_map<unsigned int,unsigned int>&(unsigned int)> **)(__closure + 16);
                if ( *(_BYTE *)(((unsigned __int64)&child_node_0->id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&child_node_0->id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&child_node_0->id);
                }
                id = child_node_0->id;
                __for_range_2 = std::function<std::unordered_map<unsigned int,unsigned int> const& ()(unsigned int)>::operator()(
                                  v45,
                                  id);
                *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 384, id);
                *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 384) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_2);
                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 416, id);
                *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 416) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_2);
                while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 384),
                          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 416)) )
                {
                  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
                  v47 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 384));
                  if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 352, v2 + 416);
                  if ( ((unsigned __int8)v47 & 7) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&v47->second + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)v47 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v47->second + 3) >> 3)
                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load_n(v47, 8LL);
                  }
                  *(std::pair<unsigned int const,unsigned int> *)(v2 + 352) = *v47;
                  item_id_0 = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 352));
                  item_count_0 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 352));
                  v48 = std::unordered_map<unsigned int,unsigned int>::operator[](item_map, item_id_0);
                  if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v48);
                  }
                  v49 = *v48;
                  if ( *(_BYTE *)(((unsigned __int64)item_count_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)item_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count_0 >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4(item_count_0);
                  }
                  v50 = *item_count_0;
                  if ( *(_BYTE *)(((unsigned __int64)&child_node_0->max_count >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&child_node_0->max_count >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v50 = (_DWORD)child_node_0 + 56;
                    __asan_report_load4(&child_node_0->max_count);
                  }
                  *v48 = v49 + v50 * child_node_0->max_count;
                  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 384));
                }
                *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
              }
              else
              {
                v37 = std::unordered_map<unsigned int,unsigned int>::operator[](item_map, &child_node_0->id);
                v38 = (unsigned int *)std::max<unsigned int>(v37, &child_node_0->max_count);
                v39 = (int *)v38;
                if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v38);
                }
                v40 = *v39;
                v41 = &child_node_0->id;
                v42 = std::unordered_map<unsigned int,unsigned int>::operator[](item_map, &child_node_0->id);
                v43 = v42;
                v44 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
                if ( v44 != 0 && (char)(((unsigned __int8)v42 & 7) + 3) >= v44 )
                {
                  LOBYTE(v41) = v44 != 0;
                  __asan_report_store4(v42, v41);
                }
                *v43 = v40;
              }
            }
            __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++((__gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v2 + 288));
          }
        }
      }
      else
      {
        __for_range = &drop_config_ptr->nodes;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v9);
        *(std::vector<data::DropNode>::const_iterator *)(v2 + 128) = std::vector<data::DropNode>::begin(__for_range);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v9);
        *(std::vector<data::DropNode>::const_iterator *)(v2 + 160) = std::vector<data::DropNode>::end(__for_range);
        while ( __gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(
                  (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v2 + 128),
                  (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v2 + 160)) )
        {
          child_node = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&child_node->weight);
          }
          if ( child_node->weight )
          {
            if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure);
            v11 = *(DropExcelConfigMgr **)__closure;
            if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
            {
              v11 = (DropExcelConfigMgr *)&child_node->id;
              __asan_report_load4(&child_node->id);
            }
            if ( data::DropExcelConfigMgrBase::findDropExcelConfig(v11, child_node->id) )
            {
              if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
                __asan_report_load8(__closure + 16);
              v20 = *(std::function<const std::unordered_map<unsigned int,unsigned int>&(unsigned int)> **)(__closure + 16);
              if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&child_node->id);
              }
              v21 = child_node->id;
              __for_range_0 = std::function<std::unordered_map<unsigned int,unsigned int> const& ()(unsigned int)>::operator()(
                                v20,
                                v21);
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 224, v21);
              *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 224) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_0);
              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 256, v21);
              *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 256) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0);
              while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                        (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 224),
                        (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 256)) )
              {
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
                v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 224));
                if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 192, v2 + 256);
                if ( ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&v22->second + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v22 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v22->second + 3) >> 3)
                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load_n(v22, 8LL);
                }
                *(std::pair<unsigned int const,unsigned int> *)(v2 + 192) = *v22;
                item_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 192));
                v23 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 192));
                item_count = v23;
                *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
                v24 = ((unsigned __int8)v23 & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v23);
                }
                v25 = *item_count;
                if ( *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&child_node->max_count);
                }
                v26 = child_node->max_count * v25;
                v27 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
                if ( v27 != 0 && v27 <= 3 )
                {
                  LOBYTE(v24) = v27 != 0;
                  __asan_report_store4(v2 + 32, v24);
                }
                *(_DWORD *)(v2 + 32) = v26;
                v28 = std::unordered_map<unsigned int,unsigned int>::operator[](item_map, item_id);
                v29 = (unsigned int *)std::max<unsigned int>(v28, (const unsigned int *)(v2 + 32));
                v30 = (int *)v29;
                if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v29);
                }
                v31 = *v30;
                v32 = item_id;
                v33 = std::unordered_map<unsigned int,unsigned int>::operator[](item_map, item_id);
                v34 = v33;
                v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
                if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
                {
                  LOBYTE(v32) = v35 != 0;
                  __asan_report_store4(v33, v32);
                }
                *v34 = v31;
                *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
                std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 224));
              }
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
            }
            else
            {
              v12 = std::unordered_map<unsigned int,unsigned int>::operator[](item_map, &child_node->id);
              v13 = (unsigned int *)std::max<unsigned int>(v12, &child_node->max_count);
              v14 = (int *)v13;
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v13);
              }
              v15 = *v14;
              v16 = &child_node->id;
              v17 = std::unordered_map<unsigned int,unsigned int>::operator[](item_map, &child_node->id);
              v18 = v17;
              v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
              if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
              {
                LOBYTE(v16) = v19 != 0;
                __asan_report_store4(v17, v16);
              }
              *v18 = v15;
            }
          }
          __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++((__gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v2 + 128));
        }
      }
      result = item_map;
    }
    else
    {
      result = item_map;
    }
  }
  if ( v64 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 223: range 0000000013A841FE-0000000013A845AF
int32_t __cdecl DropExcelConfigMgr::rewriteDropSubfieldExcelConfig(
        DropExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  data::DropSubfieldExcelConfig *M_current; // r14
  std::vector<data::DropSubfieldExcelConfig>::iterator v7; // rax
  DropExcelConfigMgr::rewriteDropSubfieldExcelConfig::<lambda(const data::DropSubfieldExcelConfig&, const data::DropSubfieldExcelConfig&)> v8; // dl
  int32_t result; // eax
  data::DropSubfieldExcelConfigVec *__for_range; // [rsp+18h] [rbp-128h]
  std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>> *__for_range_0; // [rsp+20h] [rbp-120h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::reference __in; // [rsp+28h] [rbp-118h]
  std::vector<data::DropSubfieldExcelConfig> *subfield_vec_0; // [rsp+38h] [rbp-108h]
  const data::DropSubfieldExcelConfig *config; // [rsp+40h] [rbp-100h]
  std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::mapped_type *subfield_vec; // [rsp+48h] [rbp-F8h]
  char v16[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 10 funtor:230 64 8 15 __for_begin:225 96 8 13 __for_end:225 128 8 15 __for_begin:234 160 "
                        "8 13 __for_end:234";
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::rewriteDropSubfieldExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::clear(&this->drop_subfield_list_map);
  __for_range = &this->drop_subfield_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::DropSubfieldExcelConfig>::iterator *)(v2 + 64) = std::vector<data::DropSubfieldExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::vector<data::DropSubfieldExcelConfig>::iterator *)(v2 + 96) = std::vector<data::DropSubfieldExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !__gnu_cxx::operator!=<data::DropSubfieldExcelConfig *,std::vector<data::DropSubfieldExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *)(v2 + 96)) )
      break;
    config = __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig *,std::vector<data::DropSubfieldExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *const)(v2 + 64));
    subfield_vec = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::operator[](
                     &this->drop_subfield_list_map,
                     &config->id);
    std::vector<data::DropSubfieldExcelConfig>::push_back(subfield_vec, config);
    __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig *,std::vector<data::DropSubfieldExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  __for_range_0 = &this->drop_subfield_list_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::iterator *)(v2 + 128) = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::iterator *)(v2 + 160) = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::_Self *)(v2 + 128),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::_Self *)(v2 + 160)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > > *const)(v2 + 128));
    std::get<0ul,unsigned int const,std::vector<data::DropSubfieldExcelConfig>>(__in);
    subfield_vec_0 = std::get<1ul,unsigned int const,std::vector<data::DropSubfieldExcelConfig>>(__in);
    M_current = std::vector<data::DropSubfieldExcelConfig>::end(subfield_vec_0)._M_current;
    v7._M_current = std::vector<data::DropSubfieldExcelConfig>::begin(subfield_vec_0)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig *,std::vector<data::DropSubfieldExcelConfig>>,DropExcelConfigMgr::rewriteDropSubfieldExcelConfig(TxtConfigMgr &)::{lambda(data::DropSubfieldExcelConfig const&,data::DropSubfieldExcelConfig const&)#1}>(
      v7,
      (__gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> >)M_current,
      v8);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > > *const)(v2 + 128));
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

// Line 230: range 0000000013A8415E-0000000013A841FD
bool __cdecl DropExcelConfigMgr::rewriteDropSubfieldExcelConfig(TxtConfigMgr &)::{lambda(data::DropSubfieldExcelConfig const&,data::DropSubfieldExcelConfig const&)#1}::operator()(
        const DropExcelConfigMgr::rewriteDropSubfieldExcelConfig::<lambda(const data::DropSubfieldExcelConfig&, const data::DropSubfieldExcelConfig&)> *const __closure,
        const data::DropSubfieldExcelConfig *left,
        const data::DropSubfieldExcelConfig *right)
{
  uint32_t max_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&left->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->max_level);
  }
  max_level = left->max_level;
  if ( *(_BYTE *)(((unsigned __int64)&right->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->max_level);
  }
  return max_level < right->max_level;
};

// Line 242: range 0000000013A845B0-0000000013A84D1B
int32_t __cdecl DropExcelConfigMgr::rewriteEntityDropSubfieldExcelConfig(
        DropExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::EntityDropSubfieldExcelConfig *v6; // r8
  uint32_t *p_daily_max_count; // rax
  __int64 v8; // rsi
  uint32_t SubfieldDropDailyLimit; // ecx
  char v10; // dl
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  data::EntityDropSubfieldExcelConfigVec *__for_range; // [rsp+10h] [rbp-160h]
  data::EntityDropSubfieldExcelConfig *config; // [rsp+18h] [rbp-158h]
  char v26[336]; // [rsp+20h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:245 64 8 13 __for_end:245 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::rewriteEntityDropSubfieldExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::clear(&this->monster_drop_subfield_map);
  std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::clear(&this->gadget_drop_subfield_map);
  __for_range = &this->entity_drop_subfield_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::EntityDropSubfieldExcelConfig>::iterator *)(v3 + 32) = std::vector<data::EntityDropSubfieldExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::EntityDropSubfieldExcelConfig>::iterator *)(v3 + 64) = std::vector<data::EntityDropSubfieldExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::EntityDropSubfieldExcelConfig *,std::vector<data::EntityDropSubfieldExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::EntityDropSubfieldExcelConfig*,std::vector<data::EntityDropSubfieldExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::EntityDropSubfieldExcelConfig*,std::vector<data::EntityDropSubfieldExcelConfig> > *)(v3 + 64)) )
    {
      v15 = 1;
      goto LABEL_35;
    }
    config = __gnu_cxx::__normal_iterator<data::EntityDropSubfieldExcelConfig *,std::vector<data::EntityDropSubfieldExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::EntityDropSubfieldExcelConfig*,std::vector<data::EntityDropSubfieldExcelConfig> > *const)(v3 + 32));
    p_daily_max_count = &config->daily_max_count;
    v8 = (((_BYTE)config + 44) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_daily_max_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_daily_max_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_daily_max_count >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_daily_max_count);
    }
    if ( !config->daily_max_count )
    {
      SubfieldDropDailyLimit = ConstValueExcelConfigMgr::getSubfieldDropDailyLimit(&txt_config_mgr->const_value_config_mgr);
      v10 = *(_BYTE *)(((unsigned __int64)&config->daily_max_count >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)config + 44) & 7) + 3) >= v10 )
      {
        LOBYTE(v8) = v10 != 0;
        __asan_report_store4(&config->daily_max_count, v8);
      }
      config->daily_max_count = SubfieldDropDailyLimit;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->entity_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->entity_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->entity_type);
    }
    if ( config->entity_type == DATA_ENTITY_MONSTER )
    {
      v11 = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::emplace<unsigned int &,data::EntityDropSubfieldExcelConfig&>(
              &this->monster_drop_subfield_map,
              &config->entity_id,
              config,
              (unsigned int *)&this->monster_drop_subfield_map,
              v6);
      if ( !v11.second )
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
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "rewriteEntityDropSubfieldExcelConfig",
          255);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 96),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])byte_1AC67520);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->entity_id);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])byte_1AC67560);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v2 = -1;
        v15 = 0;
        goto LABEL_35;
      }
      goto LABEL_33;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->entity_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->entity_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->entity_type);
    }
    if ( config->entity_type != DATA_ENTITY_GADGET )
      break;
    v16 = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::emplace<unsigned int &,data::EntityDropSubfieldExcelConfig&>(
            &this->gadget_drop_subfield_map,
            &config->entity_id,
            config,
            (unsigned int *)&this->gadget_drop_subfield_map,
            v6);
    if ( !v16.second )
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
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "rewriteEntityDropSubfieldExcelConfig",
        263);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])byte_1AC67520);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->entity_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])byte_1AC67560);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v15 = 0;
      goto LABEL_35;
    }
LABEL_33:
    __gnu_cxx::__normal_iterator<data::EntityDropSubfieldExcelConfig *,std::vector<data::EntityDropSubfieldExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::EntityDropSubfieldExcelConfig*,std::vector<data::EntityDropSubfieldExcelConfig> > *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/DropExcelConfig.cpp",
    "rewriteEntityDropSubfieldExcelConfig",
    269);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v20, (const char (*)[26])byte_1AC675A0);
  common::milog::MiLogStream::operator<<<data::DataEntityType,(data::DataEntityType*)0>(v21, &config->entity_type);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v15 = 0;
LABEL_35:
  if ( v15 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
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
  return result;
};

// Line 277: range 0000000013A84D1C-0000000013A87BEF
int32_t __cdecl DropExcelConfigMgr::checkDropExcelConfig(
        DropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  uint32_t min_level; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  ItemExcelConfigMgr *v33; // rcx
  const HK4EDesignConfig *Config; // rcx
  uint32_t max_count; // ecx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  _BOOL4 v44; // eax
  unsigned __int64 v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int v51; // r15d
  __int64 v52; // rsi
  __int64 v53; // rdx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  unsigned __int64 v70; // rdx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rdx
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  DropExcelConfigMgr *v79; // rdx
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rdx
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  data::DropNodeType node_type; // ecx
  uint32_t level; // ecx
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rdx
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rdx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rcx
  ReliquaryExcelConfigMgr *v104; // rcx
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rdx
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rax
  uint32_t total_weight; // [rsp+28h] [rbp-6E8h]
  int32_t ret; // [rsp+2Ch] [rbp-6E4h]
  data::DropExcelConfigMap *__for_range; // [rsp+30h] [rbp-6E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::reference v119; // [rsp+38h] [rbp-6D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::DropExcelConfig> >::type *drop_id; // [rsp+40h] [rbp-6D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DropExcelConfig> >::type *drop_config; // [rsp+48h] [rbp-6C8h]
  const std::vector<data::DropNode> *__for_range_0; // [rsp+50h] [rbp-6C0h]
  const data::DropNode *child_node; // [rsp+58h] [rbp-6B8h]
  const data::ItemConfig *item_config_ptr; // [rsp+60h] [rbp-6B0h]
  data::DropExcelConfig *child_drop_config_ptr; // [rsp+68h] [rbp-6A8h]
  const ItemOutputLimitConfig *limit_config_ptr; // [rsp+70h] [rbp-6A0h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+78h] [rbp-698h]
  data::DropExcelConfigMap *__for_range_1; // [rsp+80h] [rbp-690h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::reference v129; // [rsp+88h] [rbp-688h]
  std::tuple_element<0,std::pair<unsigned int const,data::DropExcelConfig> >::type *drop_id_0; // [rsp+90h] [rbp-680h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DropExcelConfig> >::type *drop_config_0; // [rsp+98h] [rbp-678h]
  std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::mapped_type *__for_range_2; // [rsp+A0h] [rbp-670h]
  const data::IdCountConfig *id_count_config; // [rsp+A8h] [rbp-668h]
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+B0h] [rbp-660h]
  const data::ReliquarySetExcelConfig *reliquary_set_config_ptr; // [rsp+B8h] [rbp-658h]
  char v136[1616]; // [rsp+C0h] [rbp-650h] BYREF

  v3 = (unsigned __int64)v136;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1568LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "27 48 8 15 __for_begin:278 80 8 13 __for_end:278 112 8 15 __for_begin:303 144 8 13 __for_end:303"
                        " 176 8 15 __for_begin:437 208 8 13 __for_end:437 240 8 15 __for_begin:445 272 8 13 __for_end:445"
                        " 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> "
                        "624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 32 9 <unknown> 9"
                        "44 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unknown> 1136 32 9 <unknown> 1200 32 9 <unknown"
                        "> 1264 32 9 <unknown> 1328 40 18 item_param_bin:341 1408 48 38 guarantee_reliquary_equip_type_se"
                        "t:443 1488 48 30 guarantee_reliquary_id_set:444";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::checkDropExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862748] = -219021312;
  v5[536862749] = 62194;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862752] = -219021312;
  v5[536862753] = 62194;
  v5[536862754] = -219021312;
  v5[536862755] = 62194;
  v5[536862756] = -219021312;
  v5[536862757] = 62194;
  v5[536862758] = -219021312;
  v5[536862759] = 62194;
  v5[536862760] = -219021312;
  v5[536862761] = 62194;
  v5[536862762] = -234881024;
  v5[536862763] = -218959118;
  v5[536862765] = -219021312;
  v5[536862766] = 62194;
  v5[536862768] = -202116109;
  __for_range = &this->drop_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::DropExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::DropExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 80)) )
    {
      v10 = 1;
      goto LABEL_160;
    }
    v119 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 48));
    drop_id = std::get<0ul,unsigned int const,data::DropExcelConfig>(v119);
    drop_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DropExcelConfig>(v119);
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(drop_id);
    }
    if ( ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *drop_id) )
    {
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkDropExcelConfig",
        283);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 304),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])byte_1AC66F20);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, drop_id);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v9, (const char (*)[28])byte_1AC678A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_160;
    }
    if ( *(_BYTE *)(((unsigned __int64)&drop_config->min_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)drop_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_config->min_level >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&drop_config->min_level);
    }
    min_level = drop_config->min_level;
    if ( *(_BYTE *)(((unsigned __int64)&drop_config->max_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&drop_config->max_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&drop_config->max_level);
    }
    if ( min_level > drop_config->max_level )
    {
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkDropExcelConfig",
        290);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 368),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])byte_1AC678E0);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, drop_id);
      v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v14, (const char (*)[23])byte_1AC67920);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])byte_1AC67960);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &drop_config->min_level);
      v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])byte_1AC679A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &drop_config->max_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_160;
    }
    if ( *(_BYTE *)(((unsigned __int64)&drop_config->item_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&drop_config->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&drop_config->item_limit_type);
    }
    if ( TxtConfigMgr::checkOutputControlConfig(txt_config_mgr, drop_config, drop_config->item_limit_type) )
      break;
    total_weight = 0;
    __for_range_0 = &drop_config->nodes;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, drop_config);
    *(std::vector<data::DropNode>::const_iterator *)(v3 + 112) = std::vector<data::DropNode>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, drop_config);
    *(std::vector<data::DropNode>::const_iterator *)(v3 + 144) = std::vector<data::DropNode>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(
              (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v3 + 144)) )
      {
        v26 = 1;
        goto LABEL_156;
      }
      child_node = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&drop_config->random_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)drop_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_config->random_type >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&drop_config->random_type);
      }
      if ( drop_config->random_type )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&child_node->weight);
      }
      if ( total_weight > child_node->weight + total_weight )
      {
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "checkDropExcelConfig",
          310);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 496),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])byte_1AC66F20);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, drop_id);
        v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])byte_1AC67A40);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &child_node->id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v25, (const char (*)[20])byte_1AC67A80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
        goto LABEL_156;
      }
      if ( *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&child_node->weight);
      }
      total_weight += child_node->weight;
LABEL_54:
      v33 = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&child_node->id);
      }
      item_config_ptr = ItemExcelConfigMgr::findItemConfig(v33, child_node->id);
      if ( item_config_ptr )
      {
        Config = TxtConfigMgr::getConfig(txt_config_mgr);
        if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&child_node->id);
        }
        limit_config_ptr = HK4EDesignConfig::findItemOutputLimitConfig(Config, child_node->id);
        if ( limit_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&child_node->max_count);
          }
          max_count = child_node->max_count;
          if ( *(_BYTE *)(((unsigned __int64)&limit_config_ptr->drop_item_count_limit >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)limit_config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit_config_ptr->drop_item_count_limit >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&limit_config_ptr->drop_item_count_limit);
          }
          if ( max_count > limit_config_ptr->drop_item_count_limit )
          {
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 624, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 624),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DropExcelConfig.cpp",
              "checkDropExcelConfig",
              335);
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 624),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v37 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v36,
                    (const char (*)[20])byte_1AC67B00);
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, drop_id);
            v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v38,
                    (const char (*)[18])byte_1AC67B40);
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &child_node->id);
            v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                    v40,
                    (const char (*)[10])byte_1AC67B80);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &child_node->max_count);
            v43 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v42,
                    (const char (*)[25])byte_1AC67BC0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v43,
              &limit_config_ptr->drop_item_count_limit);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v44 = 0;
LABEL_114:
            v70 = ((v3 + 1328) >> 3) + 2147450880;
            *(_DWORD *)v70 = -117901064;
            *(_BYTE *)(v70 + 4) = -8;
            if ( !v44 )
            {
              v26 = 0;
              goto LABEL_156;
            }
            goto LABEL_154;
          }
        }
        v45 = ((v3 + 1328) >> 3) + 2147450880;
        *(_DWORD *)v45 = 0;
        *(_BYTE *)(v45 + 4) = 0;
        proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v3 + 1328));
        if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&child_node->id);
        }
        proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v3 + 1328), child_node->id);
        if ( *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&child_node->max_count);
        }
        proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v3 + 1328), child_node->max_count);
        if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&item_config_ptr->item_type);
        }
        if ( item_config_ptr->item_type == ITEM_WEAPON )
          proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v3 + 1328), 1u);
        if ( *(_BYTE *)(((unsigned __int64)&drop_config->item_limit_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&drop_config->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&drop_config->item_limit_type);
        }
        if ( TxtConfigMgr::checkItemParamBin(
               txt_config_mgr,
               (const proto::ItemParamBin *)(v3 + 1328),
               drop_config->item_limit_type) )
        {
          *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 688, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 688),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "checkDropExcelConfig",
            350);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 688),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v47 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v46, (const char (*)[20])byte_1AC67B00);
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, drop_id);
          v49 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v48, (const char (*)[12])byte_1AC67C00);
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &child_node->id);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v50, (const char (*)[20])byte_1AC67C40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
          *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v51 = 0;
        }
        else
        {
          v52 = ((_BYTE)drop_config + 108) & 7;
          v53 = (*(_BYTE *)(((unsigned __int64)&drop_config->is_need_gadget_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v52 >= *(_BYTE *)(((unsigned __int64)&drop_config->is_need_gadget_id >> 3) + 0x7FFF8000));
          if ( (_BYTE)v53 )
            __asan_report_load1(&drop_config->is_need_gadget_id, v52, v53);
          if ( !drop_config->is_need_gadget_id )
            goto LABEL_88;
          if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&item_config_ptr->item_type);
          }
          if ( item_config_ptr->item_type == ITEM_VIRTUAL )
          {
LABEL_88:
            v51 = 1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&item_config_ptr->item_type);
            }
            if ( item_config_ptr->item_type != ITEM_MATERIAL )
              goto LABEL_102;
            p_material_config_mgr = &txt_config_mgr->material_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&child_node->id);
            }
            material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                    p_material_config_mgr,
                                    child_node->id);
            if ( !material_config_ptr )
            {
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 752, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 752),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/DropExcelConfig.cpp",
                "checkDropExcelConfig",
                365);
              v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 752),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v55,
                      (const char (*)[16])byte_1AC66F20);
              v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, drop_id);
              v58 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v57,
                      (const char (*)[13])byte_1AC67C80);
              v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &child_node->id);
              common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v59, (const char (*)[26])byte_1AC67CC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v51 = 0;
              goto LABEL_113;
            }
            v60 = ((_BYTE)material_config_ptr - 124) & 7;
            v61 = (*(_BYTE *)(((unsigned __int64)&material_config_ptr->auto_enter_bag >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v60 >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->auto_enter_bag >> 3) + 0x7FFF8000));
            if ( (_BYTE)v61 )
              __asan_report_load1(&material_config_ptr->auto_enter_bag, v60, v61);
            if ( !material_config_ptr->auto_enter_bag )
            {
LABEL_102:
              if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&item_config_ptr->gadget_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&item_config_ptr->gadget_id);
              }
              if ( !item_config_ptr->gadget_id
                || !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                      &txt_config_mgr->gadget_config_mgr,
                      item_config_ptr->gadget_id) )
              {
                *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 816, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 816),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/DropExcelConfig.cpp",
                  "checkDropExcelConfig",
                  377);
                v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 816),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v63,
                        (const char (*)[16])byte_1AC66F20);
                v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, drop_id);
                v66 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v65,
                        (const char (*)[13])byte_1AC67C80);
                v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &child_node->id);
                v68 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v67,
                        (const char (*)[20])byte_1AC67D00);
                v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v68,
                        &item_config_ptr->gadget_id);
                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v69, (const char (*)[11])byte_1AC67D40);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
                *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v51 = 0;
              }
              else
              {
                v51 = 1;
              }
              goto LABEL_113;
            }
            v51 = 1;
          }
        }
LABEL_113:
        proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v3 + 1328));
        v44 = v51 != 0;
        goto LABEL_114;
      }
      if ( *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&child_node->max_count);
      }
      if ( child_node->max_count > 0x63 || !child_node->max_count )
        goto LABEL_123;
      if ( *(_BYTE *)(((unsigned __int64)&child_node->min_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)child_node + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_node->min_count >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&child_node->min_count);
      }
      if ( child_node->min_count > child_node->max_count )
      {
LABEL_123:
        *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 880) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 880, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 880),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "checkDropExcelConfig",
          390);
        v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 880),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v71, (const char (*)[16])byte_1AC66F20);
        v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, drop_id);
        v74 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v73, (const char (*)[14])byte_1AC67A40);
        v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, &child_node->id);
        v76 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v75, (const char (*)[23])byte_1AC67D80);
        v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, &child_node->min_count);
        v78 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v77, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, &child_node->max_count);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 880));
        *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
        goto LABEL_156;
      }
      v79 = this;
      if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&child_node->id);
      }
      child_drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(v79, child_node->id);
      if ( !child_drop_config_ptr )
      {
        *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 944) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 944, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 944),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "checkDropExcelConfig",
          399);
        v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 944),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v80, (const char (*)[16])byte_1AC66F20);
        v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, drop_id);
        v83 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v82, (const char (*)[14])byte_1AC67A40);
        v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, &child_node->id);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v84, (const char (*)[26])byte_1AC67DC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 944));
        *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
        goto LABEL_156;
      }
      if ( *(_BYTE *)(((unsigned __int64)&drop_config->node_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&drop_config->node_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&drop_config->node_type);
      }
      node_type = drop_config->node_type;
      if ( *(_BYTE *)(((unsigned __int64)&child_drop_config_ptr->node_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_drop_config_ptr->node_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&child_drop_config_ptr->node_type);
      }
      if ( node_type == child_drop_config_ptr->node_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&child_drop_config_ptr->level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&child_drop_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&child_drop_config_ptr->level);
        }
        level = child_drop_config_ptr->level;
        if ( *(_BYTE *)(((unsigned __int64)&drop_config->level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&drop_config->level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&drop_config->level);
        }
        if ( level <= drop_config->level )
        {
          *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1008) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1008, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1008),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "checkDropExcelConfig",
            410);
          v87 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1008),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v88 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v87, (const char (*)[31])byte_1AC67E00);
          v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, drop_id);
          v90 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v89, (const char (*)[11])byte_1AC67E40);
          v91 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v90, &drop_config->level);
          v92 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v91, (const char (*)[14])byte_1AC67A40);
          v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v92, &child_node->id);
          v94 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v93, (const char (*)[11])byte_1AC67E40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, &child_drop_config_ptr->level);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1008));
          *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v26 = 0;
          goto LABEL_156;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&drop_config->node_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&drop_config->node_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&drop_config->node_type);
        }
        if ( drop_config->node_type == DROP_NODE_LEAF )
        {
          if ( *(_BYTE *)(((unsigned __int64)&child_drop_config_ptr->node_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&child_drop_config_ptr->node_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&child_drop_config_ptr->node_type);
          }
          if ( child_drop_config_ptr->node_type == DROP_NODE_TREE )
          {
            *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1072) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1103) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1103) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1072, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1072),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DropExcelConfig.cpp",
              "checkDropExcelConfig",
              417);
            v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1072),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v96 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    v95,
                    (const char (*)[55])byte_1AC67E80);
            v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, drop_id);
            v98 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v97,
                    (const char (*)[14])byte_1AC67A40);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, &child_node->id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1072));
            *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v26 = 0;
            goto LABEL_156;
          }
        }
      }
LABEL_154:
      __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++((__gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v3 + 112));
    }
    if ( *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&child_node->weight);
    }
    if ( child_node->weight <= 0x2710 )
      goto LABEL_54;
    *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 560, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 560),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "checkDropExcelConfig",
      319);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 560),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v27, (const char (*)[16])byte_1AC66F20);
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, drop_id);
    v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v29, (const char (*)[14])byte_1AC67A40);
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &child_node->id);
    v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v31, (const char (*)[17])byte_1AC67AC0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &child_node->weight);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
    *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
LABEL_156:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v26 != 1 )
    {
      v10 = 0;
      goto LABEL_160;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 48));
  }
  *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 432, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 432),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/DropExcelConfig.cpp",
    "checkDropExcelConfig",
    298);
  v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v19, (const char (*)[40])byte_1AC679E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, drop_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
  *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_160:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
    if ( DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig(this, txt_config_mgr) )
    {
      *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1136) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1136, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1136),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkDropExcelConfig",
        425);
      v99 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1136),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v99, (const char (*)[25])byte_1AC67EE0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1136));
      v2 = -1;
    }
    else if ( DropExcelConfigMgr::checkIsDropTreeHasLoop(this, txt_config_mgr) )
    {
      *(_DWORD *)(((v3 + 1200) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1200) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1231) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1231) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1200, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1200),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkDropExcelConfig",
        431);
      v100 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 1200),
               (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v100, (const char (*)[19])byte_1AC67F20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1200));
      v2 = -1;
    }
    else
    {
      ret = 0;
      __for_range_1 = &this->drop_excel_config_map;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 176, txt_config_mgr);
      *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 176) = std::unordered_map<unsigned int,data::DropExcelConfig>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 208, txt_config_mgr);
      *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 208) = std::unordered_map<unsigned int,data::DropExcelConfig>::end(__for_range_1);
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::DropExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 176),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 208)) )
      {
        v129 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 176));
        drop_id_0 = std::get<0ul,unsigned int const,data::DropExcelConfig>(v129);
        drop_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::DropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DropExcelConfig>(v129);
        if ( *(char *)(((unsigned __int64)&drop_config_0->total_output_limit.is_unlimited >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(
            &drop_config_0->total_output_limit.is_unlimited,
            v3 + 208,
            &drop_config_0->total_output_limit.is_unlimited);
        if ( drop_config_0->total_output_limit.is_unlimited )
        {
          v101 = ((v3 + 1408) >> 3) + 2147450880;
          *(_DWORD *)v101 = 0;
          *(_WORD *)(v101 + 4) = 0;
          std::set<data::EquipType>::set((std::set<data::EquipType> *const)(v3 + 1408));
          v102 = ((v3 + 1488) >> 3) + 2147450880;
          *(_DWORD *)v102 = 0;
          *(_WORD *)(v102 + 4) = 0;
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1488));
          __for_range_2 = std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::operator[](
                            &this->max_drop_item_map,
                            drop_id_0);
          *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 240, drop_id_0);
          *(std::vector<data::IdCountConfig>::iterator *)(v3 + 240) = std::vector<data::IdCountConfig>::begin(__for_range_2);
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 272, drop_id_0);
          *(std::vector<data::IdCountConfig>::iterator *)(v3 + 272) = std::vector<data::IdCountConfig>::end(__for_range_2);
          while ( __gnu_cxx::operator!=<data::IdCountConfig *,std::vector<data::IdCountConfig>>(
                    (const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 240),
                    (const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 272)) )
          {
            id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 240));
            p_reliquary_config_mgr = &txt_config_mgr->reliquary_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&id_count_config->id);
            }
            reliquary_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(
                                     p_reliquary_config_mgr,
                                     id_count_config->id);
            if ( reliquary_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&reliquary_config_ptr->rank_level);
              }
              if ( reliquary_config_ptr->rank_level > 4
                && common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                     &txt_config_mgr->reliquary_config_mgr.guaranteed_main_prop_depot_id_set,
                     &reliquary_config_ptr->main_prop_depot_id) )
              {
                v104 = &txt_config_mgr->reliquary_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->set_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->set_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&reliquary_config_ptr->set_id);
                }
                reliquary_set_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquarySetExcelConfig(
                                             v104,
                                             reliquary_config_ptr->set_id);
                if ( reliquary_set_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&reliquary_set_config_ptr->guarantee_depot_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)reliquary_set_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reliquary_set_config_ptr->guarantee_depot_id >> 3)
                                                                                            + 0x7FFF8000) )
                  {
                    __asan_report_load4(&reliquary_set_config_ptr->guarantee_depot_id);
                  }
                  if ( reliquary_set_config_ptr->guarantee_depot_id )
                  {
                    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 1488), &id_count_config->id);
                    std::set<data::EquipType>::insert(
                      (std::set<data::EquipType> *const)(v3 + 1408),
                      &reliquary_config_ptr->equip_type);
                  }
                }
              }
            }
            __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 240));
          }
          *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
          if ( !std::set<data::EquipType>::empty((const std::set<data::EquipType> *const)(v3 + 1408))
            && std::operator!=<data::EquipType,std::less<data::EquipType>,std::allocator<data::EquipType>>(
                 (const std::set<data::EquipType> *)(v3 + 1408),
                 &ReliquaryExcelConfigMgr::reliquary_equip_type_set) )
          {
            *(_DWORD *)(((v3 + 1264) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1264) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1295) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1295) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1264, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1264),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DropExcelConfig.cpp",
              "checkDropExcelConfig",
              466);
            v106 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1264),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v107 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v106, (const char (*)[9])"drop_id:");
            v108 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v107, drop_id_0);
            v109 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                     v108,
                     (const char (*)[37])" guarantee_reliquary_equip_type_set:");
            v110 = common::milog::MiLogStream::operator<<<data::EquipType>(
                     v109,
                     (const std::set<data::EquipType> *)(v3 + 1408));
            v111 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                     v110,
                     (const char (*)[29])" guarantee_reliquary_id_set:");
            common::milog::MiLogStream::operator<<<unsigned int>(v111, (const std::set<unsigned int> *)(v3 + 1488));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1264));
            *(_DWORD *)(((v3 + 1264) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1488));
          std::set<data::EquipType>::~set((std::set<data::EquipType> *const)(v3 + 1408));
        }
        v112 = ((v3 + 1408) >> 3) + 2147450880;
        *(_DWORD *)v112 = -117901064;
        *(_WORD *)(v112 + 4) = -1800;
        v113 = ((v3 + 1488) >> 3) + 2147450880;
        *(_DWORD *)v113 = -117901064;
        *(_WORD *)(v113 + 4) = -1800;
        std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 176));
      }
      v2 = ret;
    }
  }
  if ( v136 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 196) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1568LL, v136);
  }
  return v2;
};

// Line 477: range 0000000013A88C64-0000000013A89545
int32_t __cdecl DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig(
        DropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // edx
  int32_t result; // eax
  data::DropExcelConfigMap *__for_range; // [rsp+10h] [rbp-270h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::reference v21; // [rsp+18h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,data::DropExcelConfig> >::type *drop_id; // [rsp+20h] [rbp-260h]
  char v23[592]; // [rsp+30h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 15 __for_begin:551 64 8 13 __for_end:551 96 8 14 random_num:553 128 24 9 <unknown> 192 24"
                        " 9 <unknown> 256 32 8 calc:479 320 32 10 report:524 384 32 9 <unknown> 448 56 12 memo_map:478";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  std::unordered_map<unsigned int,double>::unordered_map((std::unordered_map<unsigned int,double> *const)(v3 + 448));
  std::function<double ()(unsigned int)>::function((std::function<double(unsigned int)> *const)(v3 + 256));
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(_QWORD *)(v3 + 128) = this;
  if ( *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 136, txt_config_mgr);
  *(_QWORD *)(v3 + 136) = v3 + 448;
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, txt_config_mgr);
  *(_QWORD *)(v3 + 144) = v3 + 256;
  v6 = (char *)(v3 + 128);
  std::function<double ()(unsigned int)>::operator=<DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig(TxtConfigMgr const&)::{lambda(unsigned int)#1}>(
    (std::function<double(unsigned int)> *const)(v3 + 256),
    (DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig::<lambda(uint32_t)> *)(v3 + 128));
  v7 = ((v3 + 128) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  std::function<void ()(unsigned int,unsigned int)>::function((std::function<void(unsigned int,unsigned int)> *const)(v3 + 320));
  v8 = ((v3 + 192) >> 3) + 2147450880;
  *(_WORD *)v8 = 0;
  *(_BYTE *)(v8 + 2) = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v6);
  *(_QWORD *)(v3 + 192) = this;
  if ( *(_BYTE *)(((v3 + 200) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 200, v6);
  *(_QWORD *)(v3 + 200) = v3 + 256;
  if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 208, v6);
  *(_QWORD *)(v3 + 208) = v3 + 320;
  v9 = (char *)(v3 + 192);
  std::function<void ()(unsigned int,unsigned int)>::operator=<DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig(TxtConfigMgr const&)::{lambda(unsigned int,unsigned int)#2}>(
    (std::function<void(unsigned int,unsigned int)> *const)(v3 + 320),
    (DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig::<lambda(uint32_t, uint32_t)> *)(v3 + 192));
  v10 = ((v3 + 192) >> 3) + 2147450880;
  *(_WORD *)v10 = -1800;
  *(_BYTE *)(v10 + 2) = -8;
  __for_range = &this->drop_excel_config_map;
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, v9);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DropExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v9);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DropExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 64)) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 32));
    drop_id = std::get<0ul,unsigned int const,data::DropExcelConfig>(v21);
    std::get<1ul,unsigned int const,data::DropExcelConfig>(v21);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(drop_id);
    }
    v11 = *drop_id;
    v12 = std::function<double ()(unsigned int)>::operator()(
            (const std::function<double(unsigned int)> *const)(v3 + 256),
            v11);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_store8(v3 + 96, v11);
    *(_QWORD *)(v3 + 96) = v12;
    if ( *(double *)(v3 + 96) <= 1000.0 )
    {
      v17 = 1;
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
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkIsDropMaxRandomNumTooBig",
        556);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v13, (const char (*)[42])byte_1AC68360);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, drop_id);
      v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v15, (const char (*)[27])byte_1AC683C0);
      common::milog::MiLogStream::operator<<<double,(double *)0>(v16, (const double *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(drop_id);
      }
      std::function<void ()(unsigned int,unsigned int)>::operator()(
        (const std::function<void(unsigned int,unsigned int)> *const)(v3 + 320),
        *drop_id,
        0);
      v2 = -1;
      v17 = 0;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_37;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 32));
  }
  v18 = 1;
LABEL_37:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v18 == 1 )
    v2 = 0;
  std::function<void ()(unsigned int,unsigned int)>::~function((std::function<void(unsigned int,unsigned int)> *const)(v3 + 320));
  std::function<double ()(unsigned int)>::~function((std::function<double(unsigned int)> *const)(v3 + 256));
  std::unordered_map<unsigned int,double>::~unordered_map((std::unordered_map<unsigned int,double> *const)(v3 + 448));
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
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

// Line 480: range 0000000013A87BF0-0000000013A88623
double __fastcall DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig(TxtConfigMgr const&)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t drop_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  double result; // xmm0_8
  std::unordered_map<unsigned int,double> *v7; // rax
  std::unordered_map<unsigned int,double> *v8; // rax
  bool v9; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,double>,false,false>::pointer v10; // rax
  __int64 v11; // rsi
  data::DropRandomType random_type; // eax
  std::function<double(unsigned int)> *v13; // rdx
  __int64 id; // rsi
  double v15; // xmm1_8
  double v16; // xmm0_8
  const double *v17; // rax
  __int64 v18; // xmm0_8
  std::function<double(unsigned int)> *v19; // rdx
  double v20; // xmm1_8
  double v21; // xmm1_8
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-1A8h]
  data::DropExcelConfig *drop_config_ptr; // [rsp+28h] [rbp-188h]
  const std::vector<data::DropNode> *__for_range_0; // [rsp+30h] [rbp-180h]
  const data::DropNode *child_node_0; // [rsp+38h] [rbp-178h]
  const std::vector<data::DropNode> *__for_range; // [rsp+40h] [rbp-170h]
  const data::DropNode *child_node; // [rsp+48h] [rbp-168h]
  char v29[352]; // [rsp+50h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 11 drop_id:480 64 8 8 iter:488 96 8 9 <unknown> 128 8 18 max_random_num:494 160 8 15 __fo"
                        "r_begin:498 192 8 13 __for_end:498 224 8 9 <unknown> 256 8 15 __for_begin:508 288 8 13 __for_end:508";
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig(TxtConfigMgr const&)::{lambda(unsigned int)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -202116352;
  *(_DWORD *)(v2 + 48) = drop_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v5 = *(unsigned int *)(v2 + 48);
  drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(
                      *(data::DropExcelConfigMgrBase *const *)__closure,
                      v5);
  if ( drop_config_ptr )
  {
    if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure + 8);
    v7 = *(std::unordered_map<unsigned int,double> **)(__closure + 8);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      v7 = (std::unordered_map<unsigned int,double> *)__asan_report_store8(v2 + 64, v5);
    *(std::unordered_map<unsigned int,double>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,double>::find(
                                                                        v7,
                                                                        (const std::unordered_map<unsigned int,double>::key_type *)(v2 + 48));
    v8 = *(std::unordered_map<unsigned int,double> **)(__closure + 8);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      v8 = (std::unordered_map<unsigned int,double> *)__asan_report_store8(v2 + 96, v2 + 48);
    *(std::unordered_map<unsigned int,double>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,double>::end(v8);
    v9 = std::__detail::operator!=<std::pair<unsigned int const,double>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,double>,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,double>,false> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,double>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,double>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v10->second);
      result = v10->second;
    }
    else
    {
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v2 + 96);
      *(_QWORD *)(v2 + 128) = 0LL;
      v11 = (((_BYTE)drop_config_ptr + 68) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->random_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)drop_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_config_ptr->random_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&drop_config_ptr->random_type);
      }
      random_type = drop_config_ptr->random_type;
      if ( random_type )
      {
        if ( random_type == DROP_RANDOM_INDEPENDENT )
        {
          __for_range_0 = &drop_config_ptr->nodes;
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 256, v11);
          *(std::vector<data::DropNode>::const_iterator *)(v2 + 256) = std::vector<data::DropNode>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 288, v11);
          *(std::vector<data::DropNode>::const_iterator *)(v2 + 288) = std::vector<data::DropNode>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(
                    (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v2 + 256),
                    (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v2 + 288)) )
          {
            child_node_0 = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v2 + 256));
            if ( *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&child_node_0->weight >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&child_node_0->weight);
            }
            if ( child_node_0->weight )
            {
              if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_load8(v2 + 128);
              *(double *)(v2 + 128) = *(double *)(v2 + 128) + 1.0;
              if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
                __asan_report_load8(__closure + 16);
              v19 = *(std::function<double(unsigned int)> **)(__closure + 16);
              if ( *(_BYTE *)(((unsigned __int64)&child_node_0->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&child_node_0->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&child_node_0->id);
              }
              v20 = std::function<double ()(unsigned int)>::operator()(v19, child_node_0->id);
              if ( *(_BYTE *)(((unsigned __int64)&child_node_0->max_count >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&child_node_0->max_count >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&child_node_0->max_count);
              }
              v21 = v20 * (double)(int)child_node_0->max_count;
              if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_load8(v2 + 128);
              *(double *)(v2 + 128) = *(double *)(v2 + 128) + v21;
            }
            __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++((__gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v2 + 256));
          }
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
        }
      }
      else
      {
        __for_range = &drop_config_ptr->nodes;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v11);
        *(std::vector<data::DropNode>::const_iterator *)(v2 + 160) = std::vector<data::DropNode>::begin(__for_range);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v11);
        *(std::vector<data::DropNode>::const_iterator *)(v2 + 192) = std::vector<data::DropNode>::end(__for_range);
        while ( __gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(
                  (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v2 + 160),
                  (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v2 + 192)) )
        {
          child_node = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v2 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&child_node->weight);
          }
          if ( child_node->weight )
          {
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure + 16);
            v13 = *(std::function<double(unsigned int)> **)(__closure + 16);
            if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&child_node->id);
            }
            id = child_node->id;
            v15 = std::function<double ()(unsigned int)>::operator()(v13, id);
            if ( *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&child_node->max_count);
            }
            v16 = (double)(int)child_node->max_count * v15;
            if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 224, id);
            *(double *)(v2 + 224) = v16;
            v17 = std::max<double>((const double *)(v2 + 128), (const double *)(v2 + 224));
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v17);
            v18 = *(_QWORD *)v17;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 128, v2 + 224);
            *(_QWORD *)(v2 + 128) = v18;
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
          }
          __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++((__gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v2 + 160));
        }
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v2 + 128);
        *(double *)(v2 + 128) = *(double *)(v2 + 128) + 1.0;
      }
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 128);
      v23 = *(_QWORD *)(v2 + 128);
      if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 8);
      v22 = (unsigned __int64)std::unordered_map<unsigned int,double>::operator[](
                                *(std::unordered_map<unsigned int,double> *const *)(__closure + 8),
                                (const std::unordered_map<unsigned int,double>::key_type *)(v2 + 48));
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_store8(v22, v2 + 48);
      *(_QWORD *)v22 = v23;
      result = *(double *)v22;
    }
  }
  else
  {
    result = 0.0;
  }
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 525: range 0000000013A88624-0000000013A88C62
void __fastcall DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig(TxtConfigMgr const&)::{lambda(unsigned int,unsigned int)#2}::operator()(
        unsigned __int64 __closure,
        uint32_t drop_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 v13; // rsi
  std::function<void(unsigned int,unsigned int)> *v14; // rcx
  data::DropExcelConfig *drop_config_ptr; // [rsp+18h] [rbp-168h]
  const std::vector<data::DropNode> *__for_range; // [rsp+20h] [rbp-160h]
  const data::DropNode *child_node; // [rsp+28h] [rbp-158h]
  char v19[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 1 9 <unknown> 48 4 11 drop_id:525 64 8 14 random_num:527 96 8 15 __for_begin:541 128 8 13 _"
                        "_for_end:541 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::checkIsDropMaxRandomNumTooBig(TxtConfigMgr const&)::{lambda(unsigned int,unsigned int)#2}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = drop_id;
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  v6 = *(unsigned int *)(v3 + 48);
  v7 = std::function<double ()(unsigned int)>::operator()(
         *(const std::function<double(unsigned int)> *const *)(__closure + 8),
         v6);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8(v3 + 64, v6);
  *(_QWORD *)(v3 + 64) = v7;
  if ( *(double *)(v3 + 64) != 0.0 )
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
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "operator()",
      533);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    std::allocator<char>::allocator(v3 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 224),
      4 * level,
      32,
      (const std::allocator<char> *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 224));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"drop_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" rand_num:");
    common::milog::MiLogStream::operator<<<double,(double *)0>(v12, (const double *)(v3 + 64));
    std::string::~string((void *)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 32);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v13 = *(unsigned int *)(v3 + 48);
    drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(
                        *(data::DropExcelConfigMgrBase *const *)__closure,
                        v13);
    if ( drop_config_ptr )
    {
      __for_range = &drop_config_ptr->nodes;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v13);
      *(std::vector<data::DropNode>::const_iterator *)(v3 + 96) = std::vector<data::DropNode>::begin(__for_range);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v13);
      *(std::vector<data::DropNode>::const_iterator *)(v3 + 128) = std::vector<data::DropNode>::end(__for_range);
      while ( __gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(
                (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v3 + 128)) )
      {
        child_node = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&child_node->weight);
        }
        if ( child_node->weight )
        {
          if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure + 16);
          v14 = *(std::function<void(unsigned int,unsigned int)> **)(__closure + 16);
          if ( *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&child_node->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&child_node->id);
          }
          std::function<void ()(unsigned int,unsigned int)>::operator()(v14, child_node->id, level + 1);
        }
        __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++((__gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v3 + 96));
      }
    }
  }
  if ( v19 == (char *)v3 )
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
};

// Line 567: range 0000000013A8A5F0-0000000013A8ABBB
int32_t __cdecl DropExcelConfigMgr::checkIsDropTreeHasLoop(
        DropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned __int64 v7; // rax
  int v8; // edx
  int32_t result; // eax
  data::DropExcelConfigMap *__for_range; // [rsp+10h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-208h]
  unsigned int *drop_id; // [rsp+20h] [rbp-200h]
  char v13[496]; // [rsp+30h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 8 15 __for_begin:645 80 8 13 __for_end:645 112 32 7 dfs:571 176 40 9 <unknown> 256 56 15 vi"
                        "sited_set:568 352 56 15 stacked_set:569";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::checkIsDropTreeHasLoop;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 256));
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 352));
  std::function<int ()(unsigned int)>::function((std::function<int(unsigned int)> *const)(v3 + 112));
  if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 176, txt_config_mgr);
  *(_QWORD *)(v3 + 176) = v3 + 112;
  if ( *(_BYTE *)(((v3 + 184) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 184, txt_config_mgr);
  *(_QWORD *)(v3 + 184) = v3 + 256;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(_QWORD *)(v3 + 192) = v3 + 352;
  if ( *(_BYTE *)(((v3 + 200) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 200, txt_config_mgr);
  *(_QWORD *)(v3 + 200) = txt_config_mgr;
  if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 208, txt_config_mgr);
  *(_QWORD *)(v3 + 208) = this;
  v6 = (char *)(v3 + 176);
  std::function<int ()(unsigned int)>::operator=<DropExcelConfigMgr::checkIsDropTreeHasLoop(TxtConfigMgr const&)::{lambda(unsigned int)#1}>(
    (std::function<int(unsigned int)> *const)(v3 + 112),
    (DropExcelConfigMgr::checkIsDropTreeHasLoop::<lambda(uint32_t)> *)(v3 + 176));
  v7 = ((v3 + 176) >> 3) + 2147450880;
  *(_DWORD *)v7 = -117901064;
  *(_BYTE *)(v7 + 4) = -8;
  __for_range = &this->drop_excel_config_map;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, v6);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::DropExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, v6);
  *(std::unordered_map<unsigned int,data::DropExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::DropExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DropExcelConfig>,false> *)(v3 + 80)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 48));
    drop_id = std::get<0ul,unsigned int const,data::DropExcelConfig>(v11);
    std::get<1ul,unsigned int const,data::DropExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(drop_id);
    }
    if ( std::function<int ()(unsigned int)>::operator()(
           (const std::function<int(unsigned int)> *const)(v3 + 112),
           *drop_id) )
    {
      v2 = -1;
      v8 = 0;
      goto LABEL_26;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DropExcelConfig>,false,false> *const)(v3 + 48));
  }
  v8 = 1;
LABEL_26:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
    v2 = 0;
  std::function<int ()(unsigned int)>::~function((std::function<int(unsigned int)> *const)(v3 + 112));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 352));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 256));
  result = v2;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 572: range 0000000013A89546-0000000013A8A5EF
__int64 __fastcall DropExcelConfigMgr::checkIsDropTreeHasLoop(TxtConfigMgr const&)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t drop_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  std::vector<std::string> *p_use_param; // rsi
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  __int64 v14; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  char *v17; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  int32_t ret; // [rsp+14h] [rbp-2CCh]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+18h] [rbp-2C8h]
  data::DropExcelConfig *drop_config_ptr; // [rsp+20h] [rbp-2C0h]
  const std::vector<data::DropNode> *__for_range_0; // [rsp+28h] [rbp-2B8h]
  const data::DropNode *child_node; // [rsp+30h] [rbp-2B0h]
  const std::vector<data::ItemUseConfig> *__for_range; // [rsp+38h] [rbp-2A8h]
  const data::ItemUseConfig *item_use_config; // [rsp+40h] [rbp-2A0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-298h]
  char v38[656]; // [rsp+50h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 15 sub_drop_id:595 64 4 15 sub_drop_id:624 80 4 11 drop_id:572 96 8 15 __for_begin:589 1"
                        "28 8 13 __for_end:589 160 8 15 __for_begin:609 192 8 13 __for_end:609 224 8 15 __for_begin:624 2"
                        "56 8 13 __for_end:624 288 24 19 sub_drop_id_vec:585 352 32 9 <unknown> 416 32 9 <unknown> 480 32"
                        " 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::checkIsDropTreeHasLoop(TxtConfigMgr const&)::{lambda(unsigned int)#1}::operator();
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
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  *(_DWORD *)(v3 + 80) = drop_id;
  if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 16);
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         *(std::unordered_set<unsigned int> **)(__closure + 16),
         (const unsigned int *)(v3 + 80)) )
  {
    v2 = -1;
    goto LABEL_95;
  }
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         *(std::unordered_set<unsigned int> **)(__closure + 8),
         (const unsigned int *)(v3 + 80)) )
  {
    v2 = 0;
    goto LABEL_95;
  }
  if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 16);
  std::unordered_set<unsigned int>::insert(
    *(std::unordered_set<unsigned int> *const *)(__closure + 16),
    (const std::unordered_set<unsigned int>::value_type *)(v3 + 80));
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  std::unordered_set<unsigned int>::insert(
    *(std::unordered_set<unsigned int> *const *)(__closure + 8),
    (const std::unordered_set<unsigned int>::value_type *)(v3 + 80));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 288));
  if ( *(_BYTE *)(((__closure + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 24);
  v6 = *(unsigned int *)(v3 + 80);
  material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                          (const data::MaterialExcelConfigMgrBase *const)(*(_QWORD *)(__closure + 24) + 6936LL),
                          v6);
  if ( material_config_ptr )
  {
    __for_range = &material_config_ptr->item_use;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 96) = std::vector<data::ItemUseConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 128) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( 1 )
    {
      p_use_param = (std::vector<std::string> *)(v3 + 128);
      if ( !__gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 128)) )
        break;
      item_use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&item_use_config->use_op);
      }
      if ( item_use_config->use_op == ITEM_USE_OPEN_RANDOM_CHEST )
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48, p_use_param);
        *(_DWORD *)(v3 + 48) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
               &item_use_config->use_param,
               (unsigned int *)(v3 + 48)) )
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
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "operator()",
            598);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 352),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v9,
                  (const char (*)[27])"strVecToNum fail, item_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v3 + 80));
          v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" use_param:");
          p_use_param = &item_use_config->use_param;
          common::milog::MiLogStream::operator<<<std::string>(v12, &item_use_config->use_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -2;
          v8 = 1;
        }
        else
        {
          p_use_param = (std::vector<std::string> *)(v3 + 48);
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v3 + 288),
            (const std::vector<unsigned int>::value_type *)(v3 + 48));
          v8 = 2;
        }
      }
      else
      {
        v8 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 && v8 != 2 )
      {
        v13 = 0;
        goto LABEL_41;
      }
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 96));
    }
    v13 = 1;
LABEL_41:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
      goto LABEL_94;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((__closure + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 32);
  v14 = *(unsigned int *)(v3 + 80);
  drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(
                      *(data::DropExcelConfigMgrBase *const *)(__closure + 32),
                      v14);
  if ( drop_config_ptr )
  {
    __for_range_0 = &drop_config_ptr->nodes;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v14);
    *(std::vector<data::DropNode>::const_iterator *)(v3 + 160) = std::vector<data::DropNode>::begin(__for_range_0);
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v14);
    *(std::vector<data::DropNode>::const_iterator *)(v3 + 192) = std::vector<data::DropNode>::end(__for_range_0);
    while ( 1 )
    {
      p_use_param = (std::vector<std::string> *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<data::DropNode const*,std::vector<data::DropNode>>(
              (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *)(v3 + 192)) )
        break;
      child_node = __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&child_node->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&child_node->weight);
      }
      if ( child_node->weight )
      {
        if ( *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&child_node->max_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&child_node->max_count);
        }
        if ( child_node->max_count )
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 288), &child_node->id);
      }
      __gnu_cxx::__normal_iterator<data::DropNode const*,std::vector<data::DropNode>>::operator++((__gnu_cxx::__normal_iterator<const data::DropNode*,std::vector<data::DropNode> > *const)(v3 + 160));
    }
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((__closure + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 24);
  p_use_param = (std::vector<std::string> *)*(unsigned int *)(v3 + 80);
  if ( ItemExcelConfigMgr::findItemConfig(
         (const ItemExcelConfigMgr *const)(*(_QWORD *)(__closure + 24) + 6880LL),
         (uint32_t)p_use_param) )
  {
LABEL_67:
    __for_range_1 = (std::vector<unsigned int> *)(v3 + 288);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, p_use_param);
    *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_use_param);
    *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v17 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256)) )
      {
        v28 = 1;
        goto LABEL_90;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v18 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
      v19 = (int *)v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      v20 = *v19;
      v21 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v17) = v21 != 0;
        __asan_report_store4(v3 + 64, v17);
      }
      *(_DWORD *)(v3 + 64) = v20;
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      ret = std::function<int ()(unsigned int)>::operator()(
              *(const std::function<int(unsigned int)> *const *)__closure,
              *(_DWORD *)(v3 + 64));
      if ( ret )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
    }
    if ( ret == -1 )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "operator()",
        631);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v22, (const char (*)[30])byte_1AC68600);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 80));
      v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])" -> ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "operator()",
        635);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v26, (const char (*)[33])byte_1AC68680);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
    }
    v2 = ret;
    v28 = 0;
LABEL_90:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v28 == 1 )
    {
      if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 16);
      std::unordered_set<unsigned int>::erase(
        *(std::unordered_set<unsigned int> *const *)(__closure + 16),
        (const std::unordered_set<unsigned int>::key_type *)(v3 + 80));
      v2 = 0;
    }
    goto LABEL_94;
  }
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
    "./src/txt_data_manual/DropExcelConfig.cpp",
    "operator()",
    619);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          v15,
          (const char (*)[30])"findItemConfig fail, item_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 80));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
  *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -2;
LABEL_94:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
LABEL_95:
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
  return v2;
};

// Line 657: range 0000000013A8ABBC-0000000013A8B62D
int32_t __cdecl DropExcelConfigMgr::checkDropSubfieldExcelConfig(
        DropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned __int64 v7; // rax
  uint32_t *p_max_level; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  int v20; // eax
  int32_t result; // eax
  uint32_t last_level; // [rsp+2Ch] [rbp-224h]
  std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>> *__for_range; // [rsp+30h] [rbp-220h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::reference v25; // [rsp+38h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::type *drop_subfield_id; // [rsp+40h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::type *subfield_vec; // [rsp+48h] [rbp-208h]
  const data::DropSubfieldExcelConfig *config; // [rsp+58h] [rbp-1F8h]
  char v29[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 8 15 __for_begin:658 80 8 13 __for_end:658 112 8 15 __for_begin:662 144 8 13 __for_end:662 "
                        "176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 48 23 item_limit_type_set:661";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::checkDropSubfieldExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862733] = -202116109;
  __for_range = &this->drop_subfield_list_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::iterator *)(v3 + 48) = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::iterator *)(v3 + 80) = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::_Self *)(v3 + 48),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::_Self *)(v3 + 80)) )
      break;
    v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > > *const)(v3 + 48));
    drop_subfield_id = std::get<0ul,unsigned int const,std::vector<data::DropSubfieldExcelConfig>>(v25);
    subfield_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::DropSubfieldExcelConfig>>(v25);
    last_level = 0;
    v7 = ((v3 + 368) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_WORD *)(v7 + 4) = 0;
    std::set<data::ItemLimitType>::set((std::set<data::ItemLimitType> *const)(v3 + 368));
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v6);
    *(std::vector<data::DropSubfieldExcelConfig>::const_iterator *)(v3 + 112) = std::vector<data::DropSubfieldExcelConfig>::begin(subfield_vec);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::vector<data::DropSubfieldExcelConfig>::const_iterator *)(v3 + 144) = std::vector<data::DropSubfieldExcelConfig>::end(subfield_vec);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::DropSubfieldExcelConfig const*,std::vector<data::DropSubfieldExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<const data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *)(v3 + 144)) )
      {
        v10 = 1;
        goto LABEL_36;
      }
      config = __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig const*,std::vector<data::DropSubfieldExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *const)(v3 + 112));
      p_max_level = &config->max_level;
      if ( *(_BYTE *)(((unsigned __int64)p_max_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_max_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_max_level);
      }
      if ( last_level >= config->max_level )
      {
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "checkDropSubfieldExcelConfig",
          666);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 176),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v9, (const char (*)[25])byte_1AC68880);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_36;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->max_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->max_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->max_level);
      }
      last_level = config->max_level;
      if ( *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->drop_id);
      }
      if ( config->drop_id && !DropExcelConfigMgr::isValidDropId(txt_config_mgr, config->drop_id) )
        break;
      std::set<data::ItemLimitType>::insert((std::set<data::ItemLimitType> *const)(v3 + 368), &config->item_limit_type);
      __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig const*,std::vector<data::DropSubfieldExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *const)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "checkDropSubfieldExcelConfig",
      673);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 240),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])"drop_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->drop_id);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])byte_1AC65560);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v10 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
    {
      if ( std::set<data::ItemLimitType>::size((const std::set<data::ItemLimitType> *const)(v3 + 368)) == 1 )
      {
        v15 = 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "checkDropSubfieldExcelConfig",
          682);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v16,
                (const char (*)[18])"drop_subfield_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, drop_subfield_id);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v18, (const char (*)[23])byte_1AC68940);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
    }
    else
    {
      v15 = 0;
    }
    std::set<data::ItemLimitType>::~set((std::set<data::ItemLimitType> *const)(v3 + 368));
    v19 = ((v3 + 368) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_WORD *)(v19 + 4) = -1800;
    if ( v15 != 1 )
    {
      v20 = 0;
      goto LABEL_47;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > > *const)(v3 + 48));
  }
  v20 = 1;
LABEL_47:
  if ( v20 == 1 )
    v2 = 0;
  result = v2;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 690: range 0000000013A8B62E-0000000013A8C3CD
int32_t __cdecl DropExcelConfigMgr::checkEntityDropSubfieldExcelConfig(
        DropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  __int64 v19; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  int v23; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  int32_t result; // eax
  std::map<unsigned int,data::EntityDropSubfieldExcelConfig> *__for_range; // [rsp+10h] [rbp-2B0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::reference v32; // [rsp+18h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::type *monster_id; // [rsp+20h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::type *config; // [rsp+28h] [rbp-298h]
  const std::vector<data::DropSubfieldEntry> *__for_range_0; // [rsp+30h] [rbp-290h]
  const data::DropSubfieldEntry *entry_config; // [rsp+38h] [rbp-288h]
  std::map<unsigned int,data::EntityDropSubfieldExcelConfig> *__for_range_1; // [rsp+40h] [rbp-280h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::reference v38; // [rsp+48h] [rbp-278h]
  std::tuple_element<0,std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::type *gadget_id; // [rsp+50h] [rbp-270h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::type *config_0; // [rsp+58h] [rbp-268h]
  const std::vector<data::DropSubfieldEntry> *__for_range_2; // [rsp+60h] [rbp-260h]
  const data::DropSubfieldEntry *entry_config_0; // [rsp+68h] [rbp-258h]
  char v43[592]; // [rsp+70h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 8 15 __for_begin:691 64 8 13 __for_end:691 96 8 15 __for_begin:698 128 8 13 __for_end:698 "
                        "160 8 15 __for_begin:707 192 8 13 __for_end:707 224 8 15 __for_begin:714 256 8 13 __for_end:714 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::checkEntityDropSubfieldExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  __for_range = &this->monster_drop_subfield_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::iterator *)(v3 + 32) = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::iterator *)(v3 + 64) = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 64);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::_Self *)(v3 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::_Self *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_38;
    }
    v32 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> > *const)(v3 + 32));
    monster_id = std::get<0ul,unsigned int const,data::EntityDropSubfieldExcelConfig>(v32);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EntityDropSubfieldExcelConfig>(v32);
    p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)monster_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(monster_id);
    }
    v8 = *monster_id;
    if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, v8) )
      break;
    __for_range_0 = &config->subfield_vec;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v8);
    *(std::vector<data::DropSubfieldEntry>::const_iterator *)(v3 + 96) = std::vector<data::DropSubfieldEntry>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::DropSubfieldEntry>::const_iterator *)(v3 + 128) = std::vector<data::DropSubfieldEntry>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 128);
      if ( !__gnu_cxx::operator!=<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>(
              (const __gnu_cxx::__normal_iterator<const data::DropSubfieldEntry*,std::vector<data::DropSubfieldEntry> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::DropSubfieldEntry*,std::vector<data::DropSubfieldEntry> > *)(v3 + 128)) )
      {
        v17 = 1;
        goto LABEL_34;
      }
      entry_config = __gnu_cxx::__normal_iterator<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropSubfieldEntry*,std::vector<data::DropSubfieldEntry> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&entry_config->drop_subfield_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config->drop_subfield_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config->drop_subfield_id);
      }
      if ( entry_config->drop_subfield_id
        && !DropExcelConfigMgr::findDropSubfieldExcelConfig(this, entry_config->drop_subfield_id) )
      {
        break;
      }
      __gnu_cxx::__normal_iterator<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>::operator++((__gnu_cxx::__normal_iterator<const data::DropSubfieldEntry*,std::vector<data::DropSubfieldEntry> > *const)(v3 + 96));
    }
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
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "checkEntityDropSubfieldExcelConfig",
      702);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v14, (const char (*)[20])byte_1AC68B00);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &entry_config->drop_subfield_id);
    v6 = byte_1AC65560;
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])byte_1AC65560);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_34:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v12 = 0;
      goto LABEL_38;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> > *const)(v3 + 32));
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
    "./src/txt_data_manual/DropExcelConfig.cpp",
    "checkEntityDropSubfieldExcelConfig",
    695);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 288),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AC67520);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, monster_id);
  v6 = byte_1AC65560;
  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])byte_1AC65560);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v12 = 0;
LABEL_38:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v12 == 1 )
  {
    __for_range_1 = &this->gadget_drop_subfield_map;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::iterator *)(v3 + 160) = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::iterator *)(v3 + 192) = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::end(__for_range_1);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::_Self *)(v3 + 160),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::_Self *)(v3 + 192)) )
      {
        v23 = 1;
        goto LABEL_73;
      }
      v38 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> > *const)(v3 + 160));
      gadget_id = std::get<0ul,unsigned int const,data::EntityDropSubfieldExcelConfig>(v38);
      config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EntityDropSubfieldExcelConfig>(v38);
      p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(gadget_id);
      }
      v19 = *gadget_id;
      if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, v19) )
        break;
      __for_range_2 = &config_0->subfield_vec;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v19);
      *(std::vector<data::DropSubfieldEntry>::const_iterator *)(v3 + 224) = std::vector<data::DropSubfieldEntry>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v19);
      *(std::vector<data::DropSubfieldEntry>::const_iterator *)(v3 + 256) = std::vector<data::DropSubfieldEntry>::end(__for_range_2);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>(
                (const __gnu_cxx::__normal_iterator<const data::DropSubfieldEntry*,std::vector<data::DropSubfieldEntry> > *)(v3 + 224),
                (const __gnu_cxx::__normal_iterator<const data::DropSubfieldEntry*,std::vector<data::DropSubfieldEntry> > *)(v3 + 256)) )
        {
          v28 = 1;
          goto LABEL_69;
        }
        entry_config_0 = __gnu_cxx::__normal_iterator<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropSubfieldEntry*,std::vector<data::DropSubfieldEntry> > *const)(v3 + 224));
        if ( *(_BYTE *)(((unsigned __int64)&entry_config_0->drop_subfield_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&entry_config_0->drop_subfield_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&entry_config_0->drop_subfield_id);
        }
        if ( entry_config_0->drop_subfield_id
          && !DropExcelConfigMgr::findDropSubfieldExcelConfig(this, entry_config_0->drop_subfield_id) )
        {
          break;
        }
        __gnu_cxx::__normal_iterator<data::DropSubfieldEntry const*,std::vector<data::DropSubfieldEntry>>::operator++((__gnu_cxx::__normal_iterator<const data::DropSubfieldEntry*,std::vector<data::DropSubfieldEntry> > *const)(v3 + 224));
      }
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
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkEntityDropSubfieldExcelConfig",
        718);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v25, (const char (*)[20])byte_1AC68B00);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v26,
              &entry_config_0->drop_subfield_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])byte_1AC65560);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v28 = 0;
LABEL_69:
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v28 != 1 )
      {
        v23 = 0;
        goto LABEL_73;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> > *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "checkEntityDropSubfieldExcelConfig",
      711);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])byte_1AC68B40);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, gadget_id);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])byte_1AC65560);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    v2 = -1;
    v23 = 0;
LABEL_73:
    if ( v23 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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

// Line 727: range 0000000013A8C3CE-0000000013A8C58F
const std::vector<data::DropSubfieldExcelConfig> *__fastcall DropExcelConfigMgr::findDropSubfieldExcelConfig(
        const DropExcelConfigMgr *const this,
        __int64 drop_subfield_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>> *p_drop_subfield_list_map; // rdx
  std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>> *v6; // rdx
  bool v7; // al
  const std::vector<data::DropSubfieldExcelConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 drop_subfield_id:726 64 8 8 iter:728 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::findDropSubfieldExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = drop_subfield_id;
  p_drop_subfield_list_map = &this->drop_subfield_list_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, drop_subfield_id);
  *(std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::find(p_drop_subfield_list_map, (const std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->drop_subfield_list_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > > *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 738: range 0000000013A8C590-0000000013A8CBFE
const DropExcelConfigMgr *__fastcall DropExcelConfigMgr::findSubfieldDropIdAndItemLimit(
        const DropExcelConfigMgr *const this,
        __int64 subfield_id,
        uint32_t level,
        uint32_t a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>> *v7; // rdx
  const std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  const unsigned int *v11; // r8
  const data::ItemLimitType *v12; // r9
  uint32_t *p_max_level; // rax
  int v14; // edx
  int *v15; // r8
  data::ItemLimitType *v16; // r9
  data::ItemLimitType *v18; // [rsp+0h] [rbp-190h]
  std::vector<data::DropSubfieldExcelConfig> *__for_range; // [rsp+20h] [rbp-170h]
  const data::DropSubfieldExcelConfig *config; // [rsp+28h] [rbp-168h]
  char v23[352]; // [rsp+30h] [rbp-160h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 15 subfield_id:737 "
                        "128 8 8 iter:739 160 8 9 <unknown> 192 8 15 __for_begin:742 224 8 13 __for_end:742 256 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DropExcelConfigMgr::findSubfieldDropIdAndItemLimit;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 112) = level;
  v7 = (const std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>> *)(subfield_id + 184);
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, subfield_id);
  *(std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::const_iterator *)(v4 + 128) = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::find(v7, (const std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::key_type *)(v4 + 112));
  v8 = (const std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>> *)(subfield_id + 184);
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 160, v4 + 112);
  *(std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::const_iterator *)(v4 + 160) = std::map<unsigned int,std::vector<data::DropSubfieldExcelConfig>>::end(v8);
  v9 = (char *)(v4 + 160);
  v10 = std::operator!=(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::_Self *)(v4 + 128),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > >::_Self *)(v4 + 160));
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( !v10 )
    goto LABEL_24;
  __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DropSubfieldExcelConfig> > > *const)(v4 + 128))->second;
  *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 192, v9);
  *(std::vector<data::DropSubfieldExcelConfig>::const_iterator *)(v4 + 192) = std::vector<data::DropSubfieldExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 224, v9);
  *(std::vector<data::DropSubfieldExcelConfig>::const_iterator *)(v4 + 224) = std::vector<data::DropSubfieldExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::DropSubfieldExcelConfig const*,std::vector<data::DropSubfieldExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *)(v4 + 192),
            (const __gnu_cxx::__normal_iterator<const data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *)(v4 + 224)) )
    {
      v14 = 1;
      goto LABEL_23;
    }
    config = __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig const*,std::vector<data::DropSubfieldExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *const)(v4 + 192));
    p_max_level = &config->max_level;
    if ( *(_BYTE *)(((unsigned __int64)p_max_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_max_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_max_level);
    }
    if ( a4 <= config->max_level )
      break;
    __gnu_cxx::__normal_iterator<data::DropSubfieldExcelConfig const*,std::vector<data::DropSubfieldExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DropSubfieldExcelConfig*,std::vector<data::DropSubfieldExcelConfig> > *const)(v4 + 192));
  }
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 48, (((_BYTE)config + 12) & 7u) + 3);
  *(_DWORD *)(v4 + 48) = 0;
  std::tuple<int,unsigned int,data::ItemLimitType>::tuple<int,unsigned int const&,data::ItemLimitType const&,true>(
    (std::tuple<int,unsigned int,data::ItemLimitType> *const)this,
    (int *)(v4 + 48),
    (int *)&config->drop_id,
    (const unsigned int *)&config->item_limit_type,
    v11,
    v12,
    v18);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  v14 = 0;
LABEL_23:
  *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
  if ( v14 == 1 )
  {
LABEL_24:
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "findSubfieldDropIdAndItemLimit",
      750);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      (common::milog::MiLogStream *const)(v4 + 256),
      (const char (*)[57])"findDropId not found right level DropSubfieldExcelConfig");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 64, "findDropId not found right level DropSubfieldExcelConfig");
    *(_DWORD *)(v4 + 64) = -1;
    *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 80, "findDropId not found right level DropSubfieldExcelConfig");
    *(_DWORD *)(v4 + 80) = 0;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 96, "findDropId not found right level DropSubfieldExcelConfig");
    *(_DWORD *)(v4 + 96) = 0;
    std::tuple<int,unsigned int,data::ItemLimitType>::tuple<int,int,data::ItemLimitType,true>(
      (std::tuple<int,unsigned int,data::ItemLimitType> *const)this,
      (int *)(v4 + 64),
      (int *)(v4 + 80),
      (int *)(v4 + 96),
      v15,
      v16,
      v18);
  }
  if ( v23 == (char *)v4 )
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
  return this;
};

// Line 755: range 0000000013A8CC00-0000000013A8CF0C
const data::EntityDropSubfieldExcelConfig *__fastcall DropExcelConfigMgr::findEntityDropSubfieldConfig(
        const DropExcelConfigMgr *const this,
        __int64 entity_type,
        uint32_t config_id)
{
  data::EntityDropSubfieldExcelConfig *p_second; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,data::EntityDropSubfieldExcelConfig> *p_gadget_drop_subfield_map; // rdx
  std::map<unsigned int,data::EntityDropSubfieldExcelConfig> *v8; // rdx
  bool v9; // al
  int v10; // eax
  std::map<unsigned int,data::EntityDropSubfieldExcelConfig> *p_monster_drop_subfield_map; // rdx
  std::map<unsigned int,data::EntityDropSubfieldExcelConfig> *v12; // rdx
  bool v13; // al
  int v14; // eax
  const data::EntityDropSubfieldExcelConfig *result; // rax
  char v17[240]; // [rsp+10h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 config_id:754 64 8 8 iter:758 96 8 9 <unknown> 128 8 8 iter:766 160 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DropExcelConfigMgr::findEntityDropSubfieldConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = config_id;
  if ( (_DWORD)entity_type == 4 )
  {
    p_gadget_drop_subfield_map = &this->gadget_drop_subfield_map;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, entity_type);
    *(std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::const_iterator *)(v4 + 64) = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::find(
                                                                                                 p_gadget_drop_subfield_map,
                                                                                                 (const std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::key_type *)(v4 + 48));
    v8 = &this->gadget_drop_subfield_map;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, v4 + 48);
    *(std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::const_iterator *)(v4 + 96) = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::end(v8);
    v9 = std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::_Self *)(v4 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::_Self *)(v4 + 96));
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> > *const)(v4 + 64))->second;
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    if ( v10 != 1 )
      goto LABEL_24;
LABEL_23:
    p_second = 0LL;
    goto LABEL_24;
  }
  if ( (_DWORD)entity_type != 2 )
    goto LABEL_23;
  p_monster_drop_subfield_map = &this->monster_drop_subfield_map;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, entity_type);
  *(std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::const_iterator *)(v4 + 128) = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::find(
                                                                                                p_monster_drop_subfield_map,
                                                                                                (const std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::key_type *)(v4 + 48));
  v12 = &this->monster_drop_subfield_map;
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 160, v4 + 48);
  *(std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::const_iterator *)(v4 + 160) = std::map<unsigned int,data::EntityDropSubfieldExcelConfig>::end(v12);
  v13 = std::operator!=(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::_Self *)(v4 + 128),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> >::_Self *)(v4 + 160));
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v13 )
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::EntityDropSubfieldExcelConfig> > *const)(v4 + 128))->second;
    v14 = 0;
  }
  else
  {
    v14 = 1;
  }
  if ( v14 == 1 )
    goto LABEL_23;
LABEL_24:
  result = p_second;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 777: range 0000000013C79D2A-0000000013C7A6F1
int32_t __cdecl DropExcelConfigMgr::rewriteDropTagExcelConfig<data::ChestDropExcelConfig>(
        TxtConfigMgr *txt_config_mgr,
        const std::string *table_name,
        const std::vector<data::ChestDropExcelConfig> *drop_config_vec,
        std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>> *drop_config_map)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t *p_min_level; // rsi
  const data::ChestDropExcelConfig *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  char *v17; // rsi
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  int v22; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::pointer v23; // rax
  char v24; // dl
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  int32_t result; // eax
  const data::ChestDropExcelConfig *config; // [rsp+40h] [rbp-200h]
  std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::mapped_type *drop_map; // [rsp+48h] [rbp-1F8h]
  std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true>::reference v36; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> > >::type *drop_tag; // [rsp+60h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> > >::type *level_config_map; // [rsp+68h] [rbp-1D8h]
  char v39[464]; // [rsp+70h] [rbp-1D0h] BYREF

  v5 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(416LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 32 8 15 __for_begin:780 64 8 13 __for_end:780 96 8 15 __for_begin:789 128 8 13 __for_end:789 1"
                        "60 8 8 iter:796 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = DropExcelConfigMgr::rewriteDropTagExcelConfig<data::ChestDropExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862728] = -218959118;
  v7[536862730] = -218959118;
  v7[536862732] = -202116109;
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 32, table_name);
  *(std::vector<data::ChestDropExcelConfig>::const_iterator *)(v5 + 32) = std::vector<data::ChestDropExcelConfig>::begin(drop_config_vec);
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, table_name);
  *(std::vector<data::ChestDropExcelConfig>::const_iterator *)(v5 + 64) = std::vector<data::ChestDropExcelConfig>::end(drop_config_vec);
  while ( 1 )
  {
    p_min_level = (uint32_t *)(v5 + 64);
    if ( !__gnu_cxx::operator!=<data::ChestDropExcelConfig const*,std::vector<data::ChestDropExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::ChestDropExcelConfig*,std::vector<data::ChestDropExcelConfig> > *)(v5 + 32),
            (const __gnu_cxx::__normal_iterator<const data::ChestDropExcelConfig*,std::vector<data::ChestDropExcelConfig> > *)(v5 + 64)) )
    {
      v16 = 1;
      goto LABEL_16;
    }
    config = __gnu_cxx::__normal_iterator<data::ChestDropExcelConfig const*,std::vector<data::ChestDropExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ChestDropExcelConfig*,std::vector<data::ChestDropExcelConfig> > *const)(v5 + 32));
    drop_map = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::operator[](
                 drop_config_map,
                 &config->drop_tag);
    v10 = std::map<unsigned int,data::ChestDropExcelConfig>::emplace<unsigned int const&,data::ChestDropExcelConfig const&>(
            drop_map,
            &config->min_level,
            config,
            &config->min_level,
            v9);
    if ( !v10.second )
      break;
    __gnu_cxx::__normal_iterator<data::ChestDropExcelConfig const*,std::vector<data::ChestDropExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ChestDropExcelConfig*,std::vector<data::ChestDropExcelConfig> > *const)(v5 + 32));
  }
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
    "./src/txt_data_manual/DropExcelConfig.cpp",
    "rewriteDropTagExcelConfig",
    785);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v5 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, table_name);
  v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])byte_1AC69020);
  v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &config->drop_tag);
  v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v14, (const char (*)[26])byte_1ACA7720);
  p_min_level = &config->min_level;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->min_level);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
  *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v4 = -1;
  v16 = 0;
LABEL_16:
  *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
  {
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, p_min_level);
    *(std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::iterator *)(v5 + 96) = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::begin(drop_config_map);
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, p_min_level);
    *(std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::iterator *)(v5 + 128) = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::end(drop_config_map);
    while ( 1 )
    {
      v17 = (char *)(v5 + 128);
      if ( !std::__detail::operator!=<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,true> *)(v5 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,true> *)(v5 + 128)) )
        break;
      v36 = std::__detail::_Node_iterator<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true> *const)(v5 + 96));
      drop_tag = std::get<0ul,std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>(v36);
      level_config_map = (std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> > >::type *)std::get<1ul,std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>(v36);
      if ( std::map<unsigned int,data::ChestDropExcelConfig>::empty(level_config_map) )
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
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "rewriteDropTagExcelConfig",
          793);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, table_name);
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])byte_1AC69020);
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, drop_tag);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])byte_1ACA7760);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 288));
        *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
        v22 = 0;
      }
      else
      {
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 160, v17);
        *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v5 + 160) = std::map<unsigned int,data::ChestDropExcelConfig>::begin(level_config_map);
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 192, v17);
        *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v5 + 192) = std::map<unsigned int,data::ChestDropExcelConfig>::end(level_config_map);
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v5 + 160),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v5 + 192)) )
        {
          goto LABEL_35;
        }
        v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v23);
        }
        if ( v23->first == 1 )
          v24 = 0;
        else
LABEL_35:
          v24 = 1;
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v24 )
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
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "rewriteDropTagExcelConfig",
            799);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, table_name);
          v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])byte_1AC69020);
          v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, drop_tag);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v28, (const char (*)[30])byte_1ACA77A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
          *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v22 = 0;
        }
        else
        {
          v22 = 1;
        }
      }
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v22 != 1 )
      {
        v29 = 0;
        goto LABEL_46;
      }
      std::__detail::_Node_iterator<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true> *const)(v5 + 96));
    }
    v29 = 1;
LABEL_46:
    if ( v29 == 1 )
      v4 = 0;
  }
  result = v4;
  if ( v39 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 777: range 0000000013C7A726-0000000013C7B0ED
int32_t __cdecl DropExcelConfigMgr::rewriteDropTagExcelConfig<data::MonsterDropExcelConfig>(
        TxtConfigMgr *txt_config_mgr,
        const std::string *table_name,
        const std::vector<data::MonsterDropExcelConfig> *drop_config_vec,
        std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>> *drop_config_map)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t *p_min_level; // rsi
  const data::MonsterDropExcelConfig *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  char *v17; // rsi
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  int v22; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::pointer v23; // rax
  char v24; // dl
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  int32_t result; // eax
  const data::MonsterDropExcelConfig *config; // [rsp+40h] [rbp-200h]
  std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::mapped_type *drop_map; // [rsp+48h] [rbp-1F8h]
  std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,false,true>::reference v36; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> > >::type *drop_tag; // [rsp+60h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> > >::type *level_config_map; // [rsp+68h] [rbp-1D8h]
  char v39[464]; // [rsp+70h] [rbp-1D0h] BYREF

  v5 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(416LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 32 8 15 __for_begin:780 64 8 13 __for_end:780 96 8 15 __for_begin:789 128 8 13 __for_end:789 1"
                        "60 8 8 iter:796 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = DropExcelConfigMgr::rewriteDropTagExcelConfig<data::MonsterDropExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862728] = -218959118;
  v7[536862730] = -218959118;
  v7[536862732] = -202116109;
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 32, table_name);
  *(std::vector<data::MonsterDropExcelConfig>::const_iterator *)(v5 + 32) = std::vector<data::MonsterDropExcelConfig>::begin(drop_config_vec);
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, table_name);
  *(std::vector<data::MonsterDropExcelConfig>::const_iterator *)(v5 + 64) = std::vector<data::MonsterDropExcelConfig>::end(drop_config_vec);
  while ( 1 )
  {
    p_min_level = (uint32_t *)(v5 + 64);
    if ( !__gnu_cxx::operator!=<data::MonsterDropExcelConfig const*,std::vector<data::MonsterDropExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::MonsterDropExcelConfig*,std::vector<data::MonsterDropExcelConfig> > *)(v5 + 32),
            (const __gnu_cxx::__normal_iterator<const data::MonsterDropExcelConfig*,std::vector<data::MonsterDropExcelConfig> > *)(v5 + 64)) )
    {
      v16 = 1;
      goto LABEL_16;
    }
    config = __gnu_cxx::__normal_iterator<data::MonsterDropExcelConfig const*,std::vector<data::MonsterDropExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MonsterDropExcelConfig*,std::vector<data::MonsterDropExcelConfig> > *const)(v5 + 32));
    drop_map = std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::operator[](
                 drop_config_map,
                 &config->drop_tag);
    v10 = std::map<unsigned int,data::MonsterDropExcelConfig>::emplace<unsigned int const&,data::MonsterDropExcelConfig const&>(
            drop_map,
            &config->min_level,
            config,
            &config->min_level,
            v9);
    if ( !v10.second )
      break;
    __gnu_cxx::__normal_iterator<data::MonsterDropExcelConfig const*,std::vector<data::MonsterDropExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::MonsterDropExcelConfig*,std::vector<data::MonsterDropExcelConfig> > *const)(v5 + 32));
  }
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
    "./src/txt_data_manual/DropExcelConfig.cpp",
    "rewriteDropTagExcelConfig",
    785);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v5 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, table_name);
  v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])byte_1AC69020);
  v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &config->drop_tag);
  v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v14, (const char (*)[26])byte_1ACA7720);
  p_min_level = &config->min_level;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->min_level);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
  *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v4 = -1;
  v16 = 0;
LABEL_16:
  *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
  {
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, p_min_level);
    *(std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::iterator *)(v5 + 96) = std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::begin(drop_config_map);
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, p_min_level);
    *(std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::iterator *)(v5 + 128) = std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::end(drop_config_map);
    while ( 1 )
    {
      v17 = (char *)(v5 + 128);
      if ( !std::__detail::operator!=<std::pair<std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,true> *)(v5 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,true> *)(v5 + 128)) )
        break;
      v36 = std::__detail::_Node_iterator<std::pair<std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,false,true> *const)(v5 + 96));
      drop_tag = std::get<0ul,std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>(v36);
      level_config_map = (std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> > >::type *)std::get<1ul,std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>(v36);
      if ( std::map<unsigned int,data::MonsterDropExcelConfig>::empty(level_config_map) )
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
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "rewriteDropTagExcelConfig",
          793);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, table_name);
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])byte_1AC69020);
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, drop_tag);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])byte_1ACA7760);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 288));
        *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
        v22 = 0;
      }
      else
      {
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 160, v17);
        *(std::map<unsigned int,data::MonsterDropExcelConfig>::const_iterator *)(v5 + 160) = std::map<unsigned int,data::MonsterDropExcelConfig>::begin(level_config_map);
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 192, v17);
        *(std::map<unsigned int,data::MonsterDropExcelConfig>::const_iterator *)(v5 + 192) = std::map<unsigned int,data::MonsterDropExcelConfig>::end(level_config_map);
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::_Self *)(v5 + 160),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::_Self *)(v5 + 192)) )
        {
          goto LABEL_35;
        }
        v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> > *const)(v5 + 160));
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v23);
        }
        if ( v23->first == 1 )
          v24 = 0;
        else
LABEL_35:
          v24 = 1;
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v24 )
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
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "rewriteDropTagExcelConfig",
            799);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, table_name);
          v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])byte_1AC69020);
          v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, drop_tag);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v28, (const char (*)[30])byte_1ACA77A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
          *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v22 = 0;
        }
        else
        {
          v22 = 1;
        }
      }
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v22 != 1 )
      {
        v29 = 0;
        goto LABEL_46;
      }
      std::__detail::_Node_iterator<std::pair<std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,false,true> *const)(v5 + 96));
    }
    v29 = 1;
LABEL_46:
    if ( v29 == 1 )
      v4 = 0;
  }
  result = v4;
  if ( v39 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 807: range 0000000013A8CF0E-0000000013A8DDA2
int32_t __cdecl DropExcelConfigMgr::rewriteAllDropExcelConfig(
        DropExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r14
  char *v5; // rsi
  bool v6; // r12
  std::string *v7; // rsi
  const std::string *v8; // r8
  std::unordered_map<std::string,std::string> *p_chest_drop_tag_category_map; // rcx
  const std::string *p_category; // rdx
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> >::type *v11; // rax
  char v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  std::unordered_map<std::string,std::string> *v15; // rdx
  std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>::pointer v16; // rax
  char v17; // dl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  int v23; // edx
  __int64 StringHash; // rsi
  const std::string *v25; // r8
  std::unordered_map<unsigned int,std::string> *p_monster_drop_tag_hash_map; // rcx
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> >::type *v27; // rax
  char v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdx
  std::unordered_map<unsigned int,std::string> *v31; // rdx
  std::string *p_second; // rdx
  char v33; // dl
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>::pointer v38; // rax
  int v39; // edx
  int v40; // eax
  char v42; // [rsp+16h] [rbp-2FAh]
  char v43; // [rsp+17h] [rbp-2F9h]
  char v44; // [rsp+18h] [rbp-2F8h]
  char v45; // [rsp+19h] [rbp-2F7h]
  int32_t v46; // [rsp+1Ch] [rbp-2F4h]
  data::ChestDropExcelConfigVec *__for_range; // [rsp+38h] [rbp-2D8h]
  const data::ChestDropExcelConfig *drop_excel_config; // [rsp+40h] [rbp-2D0h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> >::type *iter; // [rsp+48h] [rbp-2C8h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> >::type *succ; // [rsp+50h] [rbp-2C0h]
  data::MonsterDropExcelConfigVec *__for_range_0; // [rsp+58h] [rbp-2B8h]
  std::string *drop_tag; // [rsp+68h] [rbp-2A8h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> >::type *iter_0; // [rsp+70h] [rbp-2A0h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> >::type *succ_0; // [rsp+78h] [rbp-298h]
  char v56[656]; // [rsp+80h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 4 17 drop_tag_hash:826 96 8 15 __for_begin:813 128 8 13 "
                        "__for_end:813 160 8 9 <unknown> 192 8 15 __for_begin:823 224 8 13 __for_end:823 256 8 9 <unknown"
                        "> 288 16 9 <unknown> 320 16 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>"
                        " 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::rewriteAllDropExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    "ChestDropData.txt",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (char *)(v2 + 352);
  v6 = 1;
  if ( !DropExcelConfigMgr::rewriteDropTagExcelConfig<data::ChestDropExcelConfig>(
          txt_config_mgr,
          (const std::string *)(v2 + 352),
          &this->chest_drop_excel_config_vec,
          &this->chest_drop_map) )
  {
    std::allocator<char>::allocator(v2 + 64);
    v45 = 1;
    v44 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 416),
      "MonsterDropData.txt",
      (const std::allocator<char> *)(v2 + 64));
    v43 = 1;
    v42 = 1;
    v5 = (char *)(v2 + 416);
    if ( !DropExcelConfigMgr::rewriteDropTagExcelConfig<data::MonsterDropExcelConfig>(
            txt_config_mgr,
            (const std::string *)(v2 + 416),
            &this->monster_drop_excel_config_vec,
            &this->monster_drop_map) )
      v6 = 0;
  }
  if ( v42 )
    std::string::~string((void *)(v2 + 416));
  if ( v43 )
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  if ( v44 )
    std::allocator<char>::~allocator(v2 + 64);
  if ( v45 )
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    v46 = -1;
  }
  else
  {
    __for_range = &this->chest_drop_excel_config_vec;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::ChestDropExcelConfig>::iterator *)(v2 + 96) = std::vector<data::ChestDropExcelConfig>::begin(__for_range);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::ChestDropExcelConfig>::iterator *)(v2 + 128) = std::vector<data::ChestDropExcelConfig>::end(__for_range);
    while ( 1 )
    {
      v7 = (std::string *)(v2 + 128);
      if ( !__gnu_cxx::operator!=<data::ChestDropExcelConfig *,std::vector<data::ChestDropExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::ChestDropExcelConfig*,std::vector<data::ChestDropExcelConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::ChestDropExcelConfig*,std::vector<data::ChestDropExcelConfig> > *)(v2 + 128)) )
        break;
      drop_excel_config = __gnu_cxx::__normal_iterator<data::ChestDropExcelConfig *,std::vector<data::ChestDropExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ChestDropExcelConfig*,std::vector<data::ChestDropExcelConfig> > *const)(v2 + 96));
      *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      p_chest_drop_tag_category_map = &this->chest_drop_tag_category_map;
      p_category = &drop_excel_config->category;
      if ( *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      *(std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> *)(v2 + 288) = std::unordered_map<std::string,std::string>::emplace<std::string const&,std::string const&>(p_chest_drop_tag_category_map, &drop_excel_config->drop_tag, p_category, (const std::string *)p_chest_drop_tag_category_map, v8);
      iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<std::string const,std::string>,false,true>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> *)(v2 + 288));
      v11 = std::get<1ul,std::__detail::_Node_iterator<std::pair<std::string const,std::string>,false,true>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> *)(v2 + 288));
      succ = v11;
      v12 = 0;
      v13 = (unsigned __int8)v11 & 7;
      v14 = (*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000));
      if ( (_BYTE)v14 )
        __asan_report_load1(v11, v13, v14);
      if ( *succ )
        goto LABEL_34;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      v15 = &this->chest_drop_tag_category_map;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v13);
      *(std::unordered_map<std::string,std::string>::iterator *)(v2 + 160) = std::unordered_map<std::string,std::string>::end(v15);
      v12 = 1;
      if ( std::__detail::operator!=<std::pair<std::string const,std::string>,true>(
             iter,
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true> *)(v2 + 160))
        && (v16 = std::__detail::_Node_iterator<std::pair<std::string const,std::string>,false,true>::operator->(iter),
            std::operator!=<char>(&v16->second, &drop_excel_config->category)) )
      {
        v17 = 1;
      }
      else
      {
LABEL_34:
        v17 = 0;
      }
      if ( v12 )
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v17 )
      {
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
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "rewriteAllDropExcelConfig",
          818);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])"drop_tag:");
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &drop_excel_config->drop_tag);
        v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v20, (const char (*)[31])byte_1AC68FE0);
        v7 = &drop_excel_config->category;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &drop_excel_config->category);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v46 = -1;
        v22 = 0;
      }
      else
      {
        v7 = &drop_excel_config->category;
        std::unordered_set<std::string>::insert(&this->chest_drop_category_set, &drop_excel_config->category);
        v22 = 1;
      }
      *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -1800;
      if ( v22 != 1 )
      {
        v23 = 0;
        goto LABEL_46;
      }
      __gnu_cxx::__normal_iterator<data::ChestDropExcelConfig *,std::vector<data::ChestDropExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ChestDropExcelConfig*,std::vector<data::ChestDropExcelConfig> > *const)(v2 + 96));
    }
    v23 = 1;
LABEL_46:
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v23 == 1 )
    {
      __for_range_0 = &this->monster_drop_excel_config_vec;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v7);
      *(std::vector<data::MonsterDropExcelConfig>::iterator *)(v2 + 192) = std::vector<data::MonsterDropExcelConfig>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v7);
      *(std::vector<data::MonsterDropExcelConfig>::iterator *)(v2 + 224) = std::vector<data::MonsterDropExcelConfig>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<data::MonsterDropExcelConfig *,std::vector<data::MonsterDropExcelConfig>>(
                (const __gnu_cxx::__normal_iterator<data::MonsterDropExcelConfig*,std::vector<data::MonsterDropExcelConfig> > *)(v2 + 192),
                (const __gnu_cxx::__normal_iterator<data::MonsterDropExcelConfig*,std::vector<data::MonsterDropExcelConfig> > *)(v2 + 224)) )
      {
        drop_tag = &__gnu_cxx::__normal_iterator<data::MonsterDropExcelConfig *,std::vector<data::MonsterDropExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::MonsterDropExcelConfig*,std::vector<data::MonsterDropExcelConfig> > *const)(v2 + 192))->drop_tag;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        StringHash = (unsigned int)getStringHash(drop_tag);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80, StringHash);
        *(_DWORD *)(v2 + 80) = StringHash;
        *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        p_monster_drop_tag_hash_map = &this->monster_drop_tag_hash_map;
        if ( *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> *)(v2 + 320) = std::unordered_map<unsigned int,std::string>::emplace<unsigned int &,std::string const&>(p_monster_drop_tag_hash_map, (unsigned int *)(v2 + 80), drop_tag, (unsigned int *)p_monster_drop_tag_hash_map, v25);
        iter_0 = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> *)(v2 + 320));
        v27 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> *)(v2 + 320));
        succ_0 = v27;
        v28 = 0;
        v29 = (unsigned __int8)v27 & 7;
        v30 = (*(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000));
        if ( (_BYTE)v30 )
          __asan_report_load1(v27, v29, v30);
        if ( *succ_0 )
          goto LABEL_65;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        v31 = &this->monster_drop_tag_hash_map;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, v29);
        *(std::unordered_map<unsigned int,std::string>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,std::string>::end(v31);
        v28 = 1;
        if ( std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
               iter_0,
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 256))
          && (p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->(iter_0)->second,
              std::operator!=<char>(p_second, drop_tag)) )
        {
          v33 = 1;
        }
        else
        {
LABEL_65:
          v33 = 0;
        }
        if ( v28 )
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( v33 )
        {
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
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "rewriteAllDropExcelConfig",
            830);
          v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])byte_1AC69020);
          v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, drop_tag);
          v37 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v36, (const char (*)[41])byte_1AC69060);
          v38 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->(iter_0);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &v38->second);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v46 = -1;
          v39 = 0;
        }
        else
        {
          v39 = 1;
        }
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -1800;
        if ( v39 != 1 )
        {
          v40 = 0;
          goto LABEL_77;
        }
        __gnu_cxx::__normal_iterator<data::MonsterDropExcelConfig *,std::vector<data::MonsterDropExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::MonsterDropExcelConfig*,std::vector<data::MonsterDropExcelConfig> > *const)(v2 + 192));
      }
      v40 = 1;
LABEL_77:
      if ( v40 == 1 )
        v46 = 0;
    }
  }
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
  return v46;
};

// Line 839: range 0000000013C7B73C-0000000013C7C8B9
int32_t __cdecl DropExcelConfigMgr::checkDropTagExcelConfig<data::ChestDropExcelConfig>(
        const TxtConfigMgr *txt_config_mgr,
        const std::string *table_name,
        const std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>> *entity_drop_map,
        std::unordered_map<std::string,data::ItemLimitType> *drop_tag_item_limit_type_map)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char *v8; // rsi
  uint32_t *p_drop_count; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  _BOOL4 v25; // edx
  unsigned __int64 v26; // rax
  uint32_t *p_drop_id; // rsi
  DropExcelConfigMgr *p_drop_config_mgr; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  int v32; // r15d
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  bool v35; // al
  const data::ItemLimitType *v36; // rdx
  const data::ItemLimitType *v37; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  unsigned __int64 v41; // rax
  int v42; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true>::reference v47; // [rsp+40h] [rbp-350h]
  std::tuple_element<0,std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> > >::type *drop_tag; // [rsp+48h] [rbp-348h]
  std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> > >::type *drop_map; // [rsp+50h] [rbp-340h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::reference v50; // [rsp+60h] [rbp-330h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChestDropExcelConfig> >::type *index; // [rsp+68h] [rbp-328h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChestDropExcelConfig> >::type *config; // [rsp+70h] [rbp-320h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::reference v53; // [rsp+80h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChestDropExcelConfig> >::type *config_0; // [rsp+90h] [rbp-300h]
  const data::DropExcelConfig *drop_config_ptr; // [rsp+98h] [rbp-2F8h]
  char v56[752]; // [rsp+A0h] [rbp-2F0h] BYREF

  v5 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(704LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "14 48 8 15 __for_begin:842 80 8 13 __for_end:842 112 8 15 __for_begin:844 144 8 13 __for_end:844"
                        " 176 8 15 __for_begin:867 208 8 13 __for_end:867 240 8 8 iter:885 272 8 9 <unknown> 304 32 9 <un"
                        "known> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 48 23 ite"
                        "m_limit_type_set:866";
  *(_QWORD *)(v5 + 16) = DropExcelConfigMgr::checkDropTagExcelConfig<data::ChestDropExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862726] = -234881024;
  v7[536862727] = 62194;
  v7[536862727] = -234881024;
  v7[536862728] = 62194;
  v7[536862728] = -234881024;
  v7[536862729] = 62194;
  v7[536862730] = -219021312;
  v7[536862731] = 62194;
  v7[536862732] = -219021312;
  v7[536862733] = 62194;
  v7[536862734] = -219021312;
  v7[536862735] = 62194;
  v7[536862736] = -219021312;
  v7[536862737] = 62194;
  v7[536862738] = -219021312;
  v7[536862739] = 62194;
  v7[536862741] = -202116109;
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 48, table_name);
  *(std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::const_iterator *)(v5 + 48) = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::begin(entity_drop_map);
  if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 80, table_name);
  *(std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::const_iterator *)(v5 + 80) = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::end(entity_drop_map);
  while ( 1 )
  {
    v8 = (char *)(v5 + 80);
    if ( !std::__detail::operator!=<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,true> *)(v5 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,true> *)(v5 + 80)) )
      break;
    v47 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true> *const)(v5 + 48));
    drop_tag = std::get<0ul,std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>(v47);
    drop_map = (std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> > >::type *)std::get<1ul,std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>(v47);
    *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 112, v8);
    *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v5 + 112) = std::map<unsigned int,data::ChestDropExcelConfig>::begin(drop_map);
    *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 144, v8);
    *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v5 + 144) = std::map<unsigned int,data::ChestDropExcelConfig>::end(drop_map);
    while ( 1 )
    {
      p_drop_count = (uint32_t *)(v5 + 144);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v5 + 112),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v5 + 144)) )
      {
        v17 = 1;
        goto LABEL_34;
      }
      v50 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v5 + 112));
      index = std::get<0ul,unsigned int const,data::ChestDropExcelConfig>(v50);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChestDropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChestDropExcelConfig>(v50);
      if ( *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->drop_id);
      }
      if ( config->drop_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->drop_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->drop_count >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->drop_count);
        }
        if ( !config->drop_count || config->drop_count > 0x64 )
        {
          *(_DWORD *)(((v5 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 79) & 7) >= *(_BYTE *)(((v5 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "checkDropTagExcelConfig",
            853);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 304),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, table_name);
          v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])byte_1ACA7960);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, index);
          v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])byte_1AC69020);
          v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &config->drop_tag);
          v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v15, (const char (*)[23])byte_1AC67D80);
          p_drop_count = &config->drop_count;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->drop_count);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 304));
          *(_DWORD *)(((v5 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v17 = 0;
          goto LABEL_34;
        }
        if ( *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->drop_id);
        }
        if ( !DropExcelConfigMgr::isValidDropId(txt_config_mgr, config->drop_id) )
          break;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v5 + 112));
    }
    *(_DWORD *)(((v5 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 113) & 7) >= *(_BYTE *)(((v5 + 399) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 368, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "checkDropTagExcelConfig",
      860);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 368),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, table_name);
    v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])byte_1ACA7960);
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, index);
    v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])byte_1AC69020);
    v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &config->drop_tag);
    v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v23, (const char (*)[19])byte_1ACA79A0);
    p_drop_count = &config->drop_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->drop_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 368));
    *(_DWORD *)(((v5 + 368) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
    v17 = 0;
LABEL_34:
    *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v17 == 1 )
    {
      v26 = ((v5 + 624) >> 3) + 2147450880;
      *(_DWORD *)v26 = 0;
      *(_WORD *)(v26 + 4) = 0;
      std::set<data::ItemLimitType>::set((std::set<data::ItemLimitType> *const)(v5 + 624));
      *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 176, p_drop_count);
      *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v5 + 176) = std::map<unsigned int,data::ChestDropExcelConfig>::begin(drop_map);
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 208, p_drop_count);
      *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v5 + 208) = std::map<unsigned int,data::ChestDropExcelConfig>::end(drop_map);
      while ( 1 )
      {
        p_drop_id = (uint32_t *)(v5 + 208);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v5 + 176),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v5 + 208)) )
        {
          v31 = 1;
          goto LABEL_54;
        }
        v53 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v5 + 176));
        std::get<0ul,unsigned int const,data::ChestDropExcelConfig>(v53);
        config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::ChestDropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChestDropExcelConfig>(v53);
        p_drop_config_mgr = &txt_config_mgr->drop_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config_0->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_0->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_0->drop_id);
        }
        drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(p_drop_config_mgr, config_0->drop_id);
        if ( !drop_config_ptr )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&drop_config_ptr->item_limit_type);
        }
        if ( drop_config_ptr->item_limit_type )
          std::set<data::ItemLimitType>::insert(
            (std::set<data::ItemLimitType> *const)(v5 + 624),
            &drop_config_ptr->item_limit_type);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v5 + 176));
      }
      *(_DWORD *)(((v5 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 80 + 31) & 7) >= *(_BYTE *)(((v5 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkDropTagExcelConfig",
        872);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 432),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v29, (const char (*)[31])byte_1ACA79E0);
      p_drop_id = &config_0->drop_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config_0->drop_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 432));
      *(_DWORD *)(((v5 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
      v31 = 0;
LABEL_54:
      *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = -8;
      if ( v31 == 1 )
      {
        if ( std::set<data::ItemLimitType>::size((const std::set<data::ItemLimitType> *const)(v5 + 624)) <= 1 )
        {
          *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 240, p_drop_id);
          *(std::set<data::ItemLimitType>::iterator *)(v5 + 240) = std::set<data::ItemLimitType>::begin((const std::set<data::ItemLimitType> *const)(v5 + 624));
          *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 272, p_drop_id);
          *(std::set<data::ItemLimitType>::iterator *)(v5 + 272) = std::set<data::ItemLimitType>::end((const std::set<data::ItemLimitType> *const)(v5 + 624));
          v35 = std::operator!=(
                  (const std::_Rb_tree_const_iterator<data::ItemLimitType>::_Self *)(v5 + 240),
                  (const std::_Rb_tree_const_iterator<data::ItemLimitType>::_Self *)(v5 + 272));
          *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = -8;
          if ( v35
            && (v36 = std::_Rb_tree_const_iterator<data::ItemLimitType>::operator*((const std::_Rb_tree_const_iterator<data::ItemLimitType> *const)(v5 + 240)),
                v38 = std::unordered_map<std::string,data::ItemLimitType>::emplace<std::string const&,data::ItemLimitType const&>(
                        drop_tag_item_limit_type_map,
                        drop_tag,
                        v36,
                        drop_tag,
                        v37),
                !v38.second) )
          {
            *(_DWORD *)(((v5 + 560) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 560) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 591) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 79) & 7) >= *(_BYTE *)(((v5 + 591) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 560, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 560),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DropExcelConfig.cpp",
              "checkDropTagExcelConfig",
              890);
            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 560),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v40 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v39,
                    (const char (*)[19])byte_1ACA7AA0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, drop_tag);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 560));
            *(_DWORD *)(((v5 + 560) >> 3) + 0x7FFF8000) = -117901064;
            v4 = -1;
            v32 = 0;
          }
          else
          {
            v32 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v5 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 79) & 7) >= *(_BYTE *)(((v5 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "checkDropTagExcelConfig",
            882);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 496),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v33, (const char (*)[67])byte_1ACA7A20);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, drop_tag);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 496));
          *(_DWORD *)(((v5 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v32 = 0;
        }
      }
      else
      {
        v32 = 0;
      }
      std::set<data::ItemLimitType>::~set((std::set<data::ItemLimitType> *const)(v5 + 624));
      v25 = v32 == 1;
    }
    else
    {
      v25 = 0;
    }
    v41 = ((v5 + 624) >> 3) + 2147450880;
    *(_DWORD *)v41 = -117901064;
    *(_WORD *)(v41 + 4) = -1800;
    *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( !v25 )
    {
      v42 = 0;
      goto LABEL_75;
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true> *const)(v5 + 48));
  }
  v42 = 1;
LABEL_75:
  if ( v42 == 1 )
    v4 = 0;
  if ( v56 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 839: range 0000000013C7C8EE-0000000013C7DA6B
int32_t __cdecl DropExcelConfigMgr::checkDropTagExcelConfig<data::MonsterDropExcelConfig>(
        const TxtConfigMgr *txt_config_mgr,
        const std::string *table_name,
        const std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>> *entity_drop_map,
        std::unordered_map<std::string,data::ItemLimitType> *drop_tag_item_limit_type_map)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char *v8; // rsi
  uint32_t *p_drop_count; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  _BOOL4 v25; // edx
  unsigned __int64 v26; // rax
  uint32_t *p_drop_id; // rsi
  DropExcelConfigMgr *p_drop_config_mgr; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  int v32; // r15d
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  bool v35; // al
  const data::ItemLimitType *v36; // rdx
  const data::ItemLimitType *v37; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  unsigned __int64 v41; // rax
  int v42; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,false,true>::reference v47; // [rsp+40h] [rbp-350h]
  std::tuple_element<0,std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> > >::type *drop_tag; // [rsp+48h] [rbp-348h]
  std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> > >::type *drop_map; // [rsp+50h] [rbp-340h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::reference v50; // [rsp+60h] [rbp-330h]
  std::tuple_element<0,std::pair<unsigned int const,data::MonsterDropExcelConfig> >::type *index; // [rsp+68h] [rbp-328h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MonsterDropExcelConfig> >::type *config; // [rsp+70h] [rbp-320h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::reference v53; // [rsp+80h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MonsterDropExcelConfig> >::type *config_0; // [rsp+90h] [rbp-300h]
  const data::DropExcelConfig *drop_config_ptr; // [rsp+98h] [rbp-2F8h]
  char v56[752]; // [rsp+A0h] [rbp-2F0h] BYREF

  v5 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(704LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "14 48 8 15 __for_begin:842 80 8 13 __for_end:842 112 8 15 __for_begin:844 144 8 13 __for_end:844"
                        " 176 8 15 __for_begin:867 208 8 13 __for_end:867 240 8 8 iter:885 272 8 9 <unknown> 304 32 9 <un"
                        "known> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 48 23 ite"
                        "m_limit_type_set:866";
  *(_QWORD *)(v5 + 16) = DropExcelConfigMgr::checkDropTagExcelConfig<data::MonsterDropExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862726] = -234881024;
  v7[536862727] = 62194;
  v7[536862727] = -234881024;
  v7[536862728] = 62194;
  v7[536862728] = -234881024;
  v7[536862729] = 62194;
  v7[536862730] = -219021312;
  v7[536862731] = 62194;
  v7[536862732] = -219021312;
  v7[536862733] = 62194;
  v7[536862734] = -219021312;
  v7[536862735] = 62194;
  v7[536862736] = -219021312;
  v7[536862737] = 62194;
  v7[536862738] = -219021312;
  v7[536862739] = 62194;
  v7[536862741] = -202116109;
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 48, table_name);
  *(std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::const_iterator *)(v5 + 48) = std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::begin(entity_drop_map);
  if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 80, table_name);
  *(std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::const_iterator *)(v5 + 80) = std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::end(entity_drop_map);
  while ( 1 )
  {
    v8 = (char *)(v5 + 80);
    if ( !std::__detail::operator!=<std::pair<std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,true> *)(v5 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,true> *)(v5 + 80)) )
      break;
    v47 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,false,true> *const)(v5 + 48));
    drop_tag = std::get<0ul,std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>(v47);
    drop_map = (std::tuple_element<1,const std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> > >::type *)std::get<1ul,std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>(v47);
    *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 112, v8);
    *(std::map<unsigned int,data::MonsterDropExcelConfig>::const_iterator *)(v5 + 112) = std::map<unsigned int,data::MonsterDropExcelConfig>::begin(drop_map);
    *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 144, v8);
    *(std::map<unsigned int,data::MonsterDropExcelConfig>::const_iterator *)(v5 + 144) = std::map<unsigned int,data::MonsterDropExcelConfig>::end(drop_map);
    while ( 1 )
    {
      p_drop_count = (uint32_t *)(v5 + 144);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::_Self *)(v5 + 112),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::_Self *)(v5 + 144)) )
      {
        v17 = 1;
        goto LABEL_34;
      }
      v50 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> > *const)(v5 + 112));
      index = std::get<0ul,unsigned int const,data::MonsterDropExcelConfig>(v50);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::MonsterDropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MonsterDropExcelConfig>(v50);
      if ( *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->drop_id);
      }
      if ( config->drop_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->drop_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->drop_count >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->drop_count);
        }
        if ( !config->drop_count || config->drop_count > 0x64 )
        {
          *(_DWORD *)(((v5 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 79) & 7) >= *(_BYTE *)(((v5 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "checkDropTagExcelConfig",
            853);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 304),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, table_name);
          v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])byte_1ACA7960);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, index);
          v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])byte_1AC69020);
          v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &config->drop_tag);
          v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v15, (const char (*)[23])byte_1AC67D80);
          p_drop_count = &config->drop_count;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->drop_count);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 304));
          *(_DWORD *)(((v5 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v17 = 0;
          goto LABEL_34;
        }
        if ( *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->drop_id);
        }
        if ( !DropExcelConfigMgr::isValidDropId(txt_config_mgr, config->drop_id) )
          break;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> > *const)(v5 + 112));
    }
    *(_DWORD *)(((v5 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 113) & 7) >= *(_BYTE *)(((v5 + 399) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 368, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "checkDropTagExcelConfig",
      860);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 368),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, table_name);
    v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])byte_1ACA7960);
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, index);
    v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])byte_1AC69020);
    v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &config->drop_tag);
    v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v23, (const char (*)[19])byte_1ACA79A0);
    p_drop_count = &config->drop_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->drop_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 368));
    *(_DWORD *)(((v5 + 368) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
    v17 = 0;
LABEL_34:
    *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v17 == 1 )
    {
      v26 = ((v5 + 624) >> 3) + 2147450880;
      *(_DWORD *)v26 = 0;
      *(_WORD *)(v26 + 4) = 0;
      std::set<data::ItemLimitType>::set((std::set<data::ItemLimitType> *const)(v5 + 624));
      *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 176, p_drop_count);
      *(std::map<unsigned int,data::MonsterDropExcelConfig>::const_iterator *)(v5 + 176) = std::map<unsigned int,data::MonsterDropExcelConfig>::begin(drop_map);
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 208, p_drop_count);
      *(std::map<unsigned int,data::MonsterDropExcelConfig>::const_iterator *)(v5 + 208) = std::map<unsigned int,data::MonsterDropExcelConfig>::end(drop_map);
      while ( 1 )
      {
        p_drop_id = (uint32_t *)(v5 + 208);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::_Self *)(v5 + 176),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::_Self *)(v5 + 208)) )
        {
          v31 = 1;
          goto LABEL_54;
        }
        v53 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> > *const)(v5 + 176));
        std::get<0ul,unsigned int const,data::MonsterDropExcelConfig>(v53);
        config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::MonsterDropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MonsterDropExcelConfig>(v53);
        p_drop_config_mgr = &txt_config_mgr->drop_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config_0->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_0->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_0->drop_id);
        }
        drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(p_drop_config_mgr, config_0->drop_id);
        if ( !drop_config_ptr )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&drop_config_ptr->item_limit_type);
        }
        if ( drop_config_ptr->item_limit_type )
          std::set<data::ItemLimitType>::insert(
            (std::set<data::ItemLimitType> *const)(v5 + 624),
            &drop_config_ptr->item_limit_type);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> > *const)(v5 + 176));
      }
      *(_DWORD *)(((v5 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 80 + 31) & 7) >= *(_BYTE *)(((v5 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkDropTagExcelConfig",
        872);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 432),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v29, (const char (*)[31])byte_1ACA79E0);
      p_drop_id = &config_0->drop_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config_0->drop_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 432));
      *(_DWORD *)(((v5 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
      v31 = 0;
LABEL_54:
      *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = -8;
      if ( v31 == 1 )
      {
        if ( std::set<data::ItemLimitType>::size((const std::set<data::ItemLimitType> *const)(v5 + 624)) <= 1 )
        {
          *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 240, p_drop_id);
          *(std::set<data::ItemLimitType>::iterator *)(v5 + 240) = std::set<data::ItemLimitType>::begin((const std::set<data::ItemLimitType> *const)(v5 + 624));
          *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 272, p_drop_id);
          *(std::set<data::ItemLimitType>::iterator *)(v5 + 272) = std::set<data::ItemLimitType>::end((const std::set<data::ItemLimitType> *const)(v5 + 624));
          v35 = std::operator!=(
                  (const std::_Rb_tree_const_iterator<data::ItemLimitType>::_Self *)(v5 + 240),
                  (const std::_Rb_tree_const_iterator<data::ItemLimitType>::_Self *)(v5 + 272));
          *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = -8;
          if ( v35
            && (v36 = std::_Rb_tree_const_iterator<data::ItemLimitType>::operator*((const std::_Rb_tree_const_iterator<data::ItemLimitType> *const)(v5 + 240)),
                v38 = std::unordered_map<std::string,data::ItemLimitType>::emplace<std::string const&,data::ItemLimitType const&>(
                        drop_tag_item_limit_type_map,
                        drop_tag,
                        v36,
                        drop_tag,
                        v37),
                !v38.second) )
          {
            *(_DWORD *)(((v5 + 560) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 560) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 591) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 79) & 7) >= *(_BYTE *)(((v5 + 591) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 560, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 560),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DropExcelConfig.cpp",
              "checkDropTagExcelConfig",
              890);
            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 560),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v40 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v39,
                    (const char (*)[19])byte_1ACA7AA0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, drop_tag);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 560));
            *(_DWORD *)(((v5 + 560) >> 3) + 0x7FFF8000) = -117901064;
            v4 = -1;
            v32 = 0;
          }
          else
          {
            v32 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v5 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 79) & 7) >= *(_BYTE *)(((v5 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "checkDropTagExcelConfig",
            882);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 496),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v33, (const char (*)[67])byte_1ACA7A20);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, drop_tag);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 496));
          *(_DWORD *)(((v5 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v32 = 0;
        }
      }
      else
      {
        v32 = 0;
      }
      std::set<data::ItemLimitType>::~set((std::set<data::ItemLimitType> *const)(v5 + 624));
      v25 = v32 == 1;
    }
    else
    {
      v25 = 0;
    }
    v41 = ((v5 + 624) >> 3) + 2147450880;
    *(_DWORD *)v41 = -117901064;
    *(_WORD *)(v41 + 4) = -1800;
    *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( !v25 )
    {
      v42 = 0;
      goto LABEL_75;
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,false,true> *const)(v5 + 48));
  }
  v42 = 1;
LABEL_75:
  if ( v42 == 1 )
    v4 = 0;
  if ( v56 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 899: range 0000000013A8DDA4-0000000013A8E6DF
int32_t __cdecl DropExcelConfigMgr::checkAllDropExcelConfig(
        DropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r13
  char *v5; // rsi
  bool v6; // r12
  int32_t result; // eax
  char *v8; // rsi
  data::ItemLimitType item_limit_type; // edx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  char v17; // [rsp+Ah] [rbp-216h]
  char v18; // [rsp+Bh] [rbp-215h]
  char v19; // [rsp+Ch] [rbp-214h]
  char v20; // [rsp+Dh] [rbp-213h]
  int32_t ret; // [rsp+2Ch] [rbp-1F4h]
  std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>> *__for_range; // [rsp+30h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true>::reference v24; // [rsp+38h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> > >::type *drop_tag; // [rsp+40h] [rbp-1E0h]
  const std::tuple_element<1,std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> > >::type *__for_range_0; // [rsp+50h] [rbp-1D0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::reference v27; // [rsp+58h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChestDropExcelConfig> >::type *min_level; // [rsp+60h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChestDropExcelConfig> >::type *config; // [rsp+68h] [rbp-1B8h]
  char v30[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 __for_begin:907 96 8 13 __for_end:907 128 8 15 __for"
                        "_begin:909 160 8 13 __for_end:909 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::checkAllDropExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "ChestDropData.txt",
    (const std::allocator<char> *)(v2 + 32));
  v5 = (char *)(v2 + 192);
  v6 = 1;
  if ( !DropExcelConfigMgr::checkDropTagExcelConfig<data::ChestDropExcelConfig>(
          txt_config_mgr,
          (const std::string *)(v2 + 192),
          &this->chest_drop_map,
          &this->chest_drop_tag_item_limit_type_map) )
  {
    std::allocator<char>::allocator(v2 + 48);
    v20 = 1;
    v19 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "MonsterDropData.txt",
      (const std::allocator<char> *)(v2 + 48));
    v18 = 1;
    v17 = 1;
    v5 = (char *)(v2 + 256);
    if ( !DropExcelConfigMgr::checkDropTagExcelConfig<data::MonsterDropExcelConfig>(
            txt_config_mgr,
            (const std::string *)(v2 + 256),
            &this->monster_drop_map,
            &this->monster_drop_tag_item_limit_type_map) )
      v6 = 0;
  }
  if ( v17 )
    std::string::~string((void *)(v2 + 256));
  if ( v18 )
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  if ( v19 )
    std::allocator<char>::~allocator(v2 + 48);
  if ( v20 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    result = -1;
  }
  else
  {
    ret = 0;
    __for_range = &this->chest_drop_map;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v5);
    *(std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::iterator *)(v2 + 64) = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::begin(__for_range);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::iterator *)(v2 + 96) = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::end(__for_range);
    while ( 1 )
    {
      v8 = (char *)(v2 + 96);
      if ( !std::__detail::operator!=<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,true> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,true> *)(v2 + 96)) )
        break;
      v24 = std::__detail::_Node_iterator<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true> *const)(v2 + 64));
      drop_tag = std::get<0ul,std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>(v24);
      __for_range_0 = std::get<1ul,std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>(v24);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v8);
      *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v2 + 128) = std::map<unsigned int,data::ChestDropExcelConfig>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v8);
      *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v2 + 160) = std::map<unsigned int,data::ChestDropExcelConfig>::end(__for_range_0);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v2 + 128),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v2 + 160)) )
      {
        v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v2 + 128));
        min_level = std::get<0ul,unsigned int const,data::ChestDropExcelConfig>(v27);
        config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChestDropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChestDropExcelConfig>(v27);
        if ( *(_BYTE *)(((unsigned __int64)&config->item_limit_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->item_limit_type);
        }
        item_limit_type = config->item_limit_type;
        if ( *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->drop_id);
        }
        if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                                txt_config_mgr,
                                config->drop_id,
                                item_limit_type) != 1 )
        {
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "checkAllDropExcelConfig",
            913);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])"drop_tag:");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, drop_tag);
          v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" min_level:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, min_level);
          v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" drop_id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->drop_id);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v16, (const char (*)[23])byte_1AC69200);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_iterator<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true> *const)(v2 + 64));
    }
    result = ret;
  }
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  return result;
};

// Line 922: range 0000000013A8E6E0-0000000013A8E736
bool __cdecl DropExcelConfigMgr::isValidDropId(const TxtConfigMgr *txt_config_mgr, uint32_t drop_id)
{
  return ItemExcelConfigMgr::findItemConfig(&txt_config_mgr->item_config_mgr, drop_id)
      || data::DropExcelConfigMgrBase::findDropExcelConfig(&txt_config_mgr->drop_config_mgr, drop_id);
};

// Line 928: range 0000000013A8E738-0000000013A8EA2B
const data::ChestDropExcelConfig *__fastcall DropExcelConfigMgr::findChestDropConfig(
        const DropExcelConfigMgr *const this,
        __int64 level,
        const std::string *drop_tag)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>> *p_chest_drop_map; // rdx
  std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::ChestDropExcelConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::ChestDropExcelConfig> *drop_map; // [rsp+28h] [rbp-E8h]
  char v13[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 9 level:927 64 8 17 drop_map_iter:929 96 8 9 <unknown> 128 8 8 iter:936 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::findChestDropConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = level;
  p_chest_drop_map = &this->chest_drop_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, level);
  *(std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::find(p_chest_drop_map, drop_tag);
  v7 = &this->chest_drop_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, drop_tag);
  *(std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<std::string,std::map<unsigned int,data::ChestDropExcelConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,true> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,true> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    drop_map = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::map<unsigned int,data::ChestDropExcelConfig>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::map<unsigned int,data::ChestDropExcelConfig> >,false,true> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::ChestDropExcelConfig>::upper_bound(
                                                                                         drop_map,
                                                                                         (const std::map<unsigned int,data::ChestDropExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::ChestDropExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::ChestDropExcelConfig>::begin(drop_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0LL;
    }
    else
    {
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v3 + 128));
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChestDropExcelConfig> > *const)(v3 + 128))->second;
    }
  }
  if ( v13 == (char *)v3 )
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

// Line 949: range 0000000013A8EA2C-0000000013A8ED1F
const data::MonsterDropExcelConfig *__fastcall DropExcelConfigMgr::findMonsterDropConfig(
        const DropExcelConfigMgr *const this,
        __int64 level,
        const std::string *drop_tag)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>> *p_monster_drop_map; // rdx
  std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::MonsterDropExcelConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::MonsterDropExcelConfig> *drop_map; // [rsp+28h] [rbp-E8h]
  char v13[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 9 level:948 64 8 17 drop_map_iter:950 96 8 9 <unknown> 128 8 8 iter:957 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::findMonsterDropConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = level;
  p_monster_drop_map = &this->monster_drop_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, level);
  *(std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::find(p_monster_drop_map, drop_tag);
  v7 = &this->monster_drop_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, drop_tag);
  *(std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<std::string,std::map<unsigned int,data::MonsterDropExcelConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,true> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,true> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    drop_map = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::map<unsigned int,data::MonsterDropExcelConfig>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::map<unsigned int,data::MonsterDropExcelConfig> >,false,true> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::MonsterDropExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::MonsterDropExcelConfig>::upper_bound(
                                                                                           drop_map,
                                                                                           (const std::map<unsigned int,data::MonsterDropExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::MonsterDropExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::MonsterDropExcelConfig>::begin(drop_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0LL;
    }
    else
    {
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> > *const)(v3 + 128));
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MonsterDropExcelConfig> > *const)(v3 + 128))->second;
    }
  }
  if ( v13 == (char *)v3 )
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

// Line 970: range 0000000013A8ED20-0000000013A8EEF3
data::ItemLimitType __cdecl DropExcelConfigMgr::findChestDropTagItemLimitType(
        const DropExcelConfigMgr *const this,
        const std::string *drop_tag)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,data::ItemLimitType> *p_chest_drop_tag_item_limit_type_map; // rdx
  std::unordered_map<std::string,data::ItemLimitType> *v6; // rdx
  bool v7; // al
  data::ItemLimitType result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>::pointer v9; // rax
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)"2 32 8 8 iter:971 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)DropExcelConfigMgr::findChestDropTagItemLimitType;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_chest_drop_tag_item_limit_type_map = &this->chest_drop_tag_item_limit_type_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], drop_tag);
  v2[4]._M_cur = std::unordered_map<std::string,data::ItemLimitType>::find(
                   p_chest_drop_tag_item_limit_type_map,
                   drop_tag)._M_cur;
  v6 = &this->chest_drop_tag_item_limit_type_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], drop_tag);
  v2[8]._M_cur = std::unordered_map<std::string,data::ItemLimitType>::end(v6)._M_cur;
  v7 = std::__detail::operator==<std::pair<std::string const,data::ItemLimitType>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = ITEM_LIMIT_NONE;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>::operator->(v2 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second);
    }
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 980: range 0000000013A8EEF4-0000000013A8F0C7
data::ItemLimitType __cdecl DropExcelConfigMgr::findMonsterDropTagItemLimitType(
        const DropExcelConfigMgr *const this,
        const std::string *drop_tag)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,data::ItemLimitType> *p_monster_drop_tag_item_limit_type_map; // rdx
  std::unordered_map<std::string,data::ItemLimitType> *v6; // rdx
  bool v7; // al
  data::ItemLimitType result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>::pointer v9; // rax
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)"2 32 8 8 iter:981 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)DropExcelConfigMgr::findMonsterDropTagItemLimitType;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_monster_drop_tag_item_limit_type_map = &this->monster_drop_tag_item_limit_type_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], drop_tag);
  v2[4]._M_cur = std::unordered_map<std::string,data::ItemLimitType>::find(
                   p_monster_drop_tag_item_limit_type_map,
                   drop_tag)._M_cur;
  v6 = &this->monster_drop_tag_item_limit_type_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], drop_tag);
  v2[8]._M_cur = std::unordered_map<std::string,data::ItemLimitType>::end(v6)._M_cur;
  v7 = std::__detail::operator==<std::pair<std::string const,data::ItemLimitType>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = ITEM_LIMIT_NONE;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>::operator->(v2 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second);
    }
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 990: range 0000000013A8F0C8-0000000013A8F2C6
const std::string *__cdecl DropExcelConfigMgr::getChestDropCategory(
        const DropExcelConfigMgr *const this,
        const std::string *drop_tag)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,std::string> *p_chest_drop_tag_category_map; // rdx
  std::unordered_map<std::string,std::string> *v6; // rdx
  bool v7; // al
  const std::string *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)"2 32 8 8 iter:991 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)DropExcelConfigMgr::getChestDropCategory;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_chest_drop_tag_category_map = &this->chest_drop_tag_category_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], drop_tag);
  v2[4]._M_cur = std::unordered_map<std::string,std::string>::find(p_chest_drop_tag_category_map, drop_tag)._M_cur;
  v6 = &this->chest_drop_tag_category_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], drop_tag);
  v2[8]._M_cur = std::unordered_map<std::string,std::string>::end(v6)._M_cur;
  v7 = std::__detail::operator==<std::pair<std::string const,std::string>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    if ( !(_BYTE)`guard variable for'DropExcelConfigMgr::getChestDropCategory(std::string const&)::empty_str
      && __cxa_guard_acquire(&`guard variable for'DropExcelConfigMgr::getChestDropCategory(std::string const&)::empty_str) )
    {
      std::string::basic_string(&DropExcelConfigMgr::getChestDropCategory(std::string const&)const::empty_str);
      __cxa_guard_release(&`guard variable for'DropExcelConfigMgr::getChestDropCategory(std::string const&)::empty_str);
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        &DropExcelConfigMgr::getChestDropCategory(std::string const&)const::empty_str,
        &_dso_handle);
    }
    result = &DropExcelConfigMgr::getChestDropCategory(std::string const&)const::empty_str;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::string>,false,true>::operator->(v2 + 4)->second;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1001: range 0000000013A8F2C8-0000000013A8F2DA
int32_t __cdecl DropExcelConfigMgr::rewriteTagArrangeLimitExcelConfig(
        DropExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1006: range 0000000013A8F2DC-0000000013A8F406
void __fastcall DropExcelConfigMgr::recordQuestGroup(
        const DropExcelConfigMgr *const this,
        uint32_t quest_id,
        uint32_t group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_set<unsigned int> *v6; // rax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 quest_id:1005 64 4 13 group_id:1005";
  *(_QWORD *)(v3 + 16) = DropExcelConfigMgr::recordQuestGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = quest_id;
  *(_DWORD *)(v3 + 64) = group_id;
  v6 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
         &this->quest_group_map_,
         (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 48));
  std::unordered_set<unsigned int>::insert(v6, (const std::unordered_set<unsigned int>::value_type *)(v3 + 64));
  if ( v8 == (char *)v3 )
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

// Line 1011: range 0000000013A8F408-0000000013A8F59B
__int64 __fastcall DropExcelConfigMgr::recordDropTagCountMap(
        DropExcelConfigMgr *const this,
        const std::string *drop_tag,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>> *v8; // r14
  unsigned int *v9; // r8
  unsigned int *v10; // r9
  std::pair<std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >,bool> v11; // rax
  __int64 result; // rax
  unsigned int *v13; // [rsp+0h] [rbp-D0h]
  char v16[176]; // [rsp+20h] [rbp-B0h] BYREF

  HIDWORD(v13) = config_id;
  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 13 scene_id:1010 64 4 13 group_id:1010 80 4 14 config_id:1010 96 12 9 <unknown>";
  *(_QWORD *)(v5 + 16) = DropExcelConfigMgr::recordDropTagCountMap;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -202177536;
  *(_DWORD *)(v5 + 48) = scene_id;
  *(_DWORD *)(v5 + 64) = group_id;
  *(_DWORD *)(v5 + 80) = HIDWORD(v13);
  v8 = std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator[](
         &this->drop_tag_group_entity_indices_map_,
         drop_tag);
  std::tuple<unsigned int,unsigned int,unsigned int>::tuple<unsigned int &,unsigned int &,unsigned int &,true>(
    (std::tuple<unsigned int,unsigned int,unsigned int> *const)(v5 + 96),
    (unsigned int *)(v5 + 48),
    (unsigned int *)(v5 + 64),
    (unsigned int *)(v5 + 80),
    v9,
    v10,
    v13);
  v11 = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::insert(
          v8,
          (std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::value_type *)(v5 + 96));
  if ( !v11.second )
    result = 0xFFFFFFFFLL;
  else
    result = 0LL;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1020: range 0000000013A8F59C-0000000013A8F8A2
__int64 __fastcall DropExcelConfigMgr::recordGatherPointTypeCountMap(
        DropExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr,
        uint32_t point_type,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>> *v12; // r14
  unsigned int *v13; // r8
  unsigned int *v14; // r9
  std::pair<std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >,bool> v15; // rax
  unsigned int *v16; // [rsp+0h] [rbp-120h]
  data::GatherExcelConfig *gather_config_ptr; // [rsp+28h] [rbp-F8h]
  char v20[240]; // [rsp+30h] [rbp-F0h] BYREF

  v16 = (unsigned int *)__PAIR64__(group_id, config_id);
  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 32 4 15 point_type:1019 48 4 13 scene_id:1019 64 4 13 group_id:1019 80 4 14 config_id:1019 96 "
                        "12 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = DropExcelConfigMgr::recordGatherPointTypeCountMap;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -234556924;
  v8[536862723] = -219020288;
  v8[536862725] = -202116109;
  *(_DWORD *)(v6 + 32) = point_type;
  *(_DWORD *)(v6 + 48) = scene_id;
  *(_DWORD *)(v6 + 64) = HIDWORD(v16);
  *(_DWORD *)(v6 + 80) = (_DWORD)v16;
  gather_config_ptr = data::GatherExcelConfigMgrBase::findGatherExcelConfig(
                        &txt_config_mgr->gather_config_mgr,
                        *(unsigned int *)(v6 + 32));
  if ( gather_config_ptr )
  {
    v12 = std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator[](
            &this->gadget_id_group_entity_indices_map_,
            &gather_config_ptr->gadget_id);
    std::tuple<unsigned int,unsigned int,unsigned int>::tuple<unsigned int &,unsigned int &,unsigned int &,true>(
      (std::tuple<unsigned int,unsigned int,unsigned int> *const)(v6 + 96),
      (unsigned int *)(v6 + 48),
      (unsigned int *)(v6 + 64),
      (unsigned int *)(v6 + 80),
      v13,
      v14,
      v16);
    v15 = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::insert(
            v12,
            (std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::value_type *)(v6 + 96));
    if ( !v15.second )
      result = 0xFFFFFFFFLL;
    else
      result = 0LL;
  }
  else
  {
    if ( *(char *)(((v6 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DropExcelConfig.cpp",
      "recordGatherPointTypeCountMap",
      1024);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v6 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v9,
            (const char (*)[40])"findGatherExcelConfig fail, point_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 128));
    result = 0xFFFFFFFFLL;
  }
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1035: range 0000000013C7F014-0000000013C7F8E4
int32_t __cdecl DropExcelConfigMgr::moveActivityGroupToTempMap<std::string>(
        const std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *group_version_map,
        std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>> *output_group_entity_indices_map,
        std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *temp_version_group_entity_map)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::const_iterator v7; // rsi
  char *v8; // rsi
  bool v9; // al
  const std::tuple<unsigned int,unsigned int,unsigned int> *v10; // rax
  std::__tuple_element_t_22 *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  bool v15; // al
  int v16; // eax
  std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *v17; // rdx
  std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> *v18; // r14
  const std::tuple<unsigned int,unsigned int,unsigned int> *v19; // rcx
  const std::shared_ptr<DropExcelConfigMgr::GroupReferrer> *v20; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  int v26; // edx
  int v27; // edx
  int v28; // eax
  int32_t result; // eax
  std::__detail::_Node_iterator<std::pair<const std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,false,true>::reference __in; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> > >::type *output_index; // [rsp+30h] [rbp-1E0h]
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>> *group_entity_set; // [rsp+38h] [rbp-1D8h]
  std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> *__for_range_0; // [rsp+40h] [rbp-1D0h]
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,false,true>::reference v35; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *version; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *referrer_ptr; // [rsp+58h] [rbp-1B8h]
  char v38[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 13 group_id:1043 64 8 16 __for_begin:1039 96 8 14 __for_end:1039 128 8 22 group_entity_i"
                        "ter:1041 160 8 9 <unknown> 192 8 9 iter:1044 224 8 9 <unknown> 256 8 16 __for_begin:1050 288 8 1"
                        "4 __for_end:1050 320 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DropExcelConfigMgr::moveActivityGroupToTempMap<std::string>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862731] = -202116109;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, output_group_entity_indices_map);
  *(std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::iterator *)(v4 + 64) = std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::begin(output_group_entity_indices_map);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, output_group_entity_indices_map);
  *(std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::iterator *)(v4 + 96) = std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::end(output_group_entity_indices_map);
  while ( 1 )
  {
    v7._M_node = (std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr)(v4 + 96);
    if ( !std::__detail::operator!=<std::pair<std::string const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,true> *)(v4 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,true> *)(v4 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<std::string const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,false,true> *const)(v4 + 64));
    output_index = std::get<0ul,std::string const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>(__in);
    group_entity_set = std::get<1ul,std::string const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>(__in);
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v7._M_node);
    *(std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v4 + 128) = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(group_entity_set);
    while ( 1 )
    {
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 160, v7._M_node);
      *(std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v4 + 160) = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::end(group_entity_set);
      v8 = (char *)(v4 + 160);
      v9 = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Self *)(v4 + 128),
             (const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Self *)(v4 + 160));
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( !v9 )
        break;
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> > *const)(v4 + 128));
      v11 = (std::__tuple_element_t_22 *)std::get<1ul,unsigned int,unsigned int,unsigned int>(v10);
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v14 != 0;
      if ( v14 != 0 && v14 <= 3 )
        __asan_report_store4(v4 + 48, v8);
      *(_DWORD *)(v4 + 48) = v13;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, v8);
      *(std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::const_iterator *)(v4 + 192) = std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::find(group_version_map, (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::key_type *)(v4 + 48));
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 224, v4 + 48);
      *(std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::const_iterator *)(v4 + 224) = std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::end(group_version_map);
      v7._M_node = (std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr)(v4 + 224);
      v15 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> >,false> *)(v4 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> >,false> *)(v4 + 224));
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
      {
        std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> > *const)(v4 + 128));
        v16 = 0;
      }
      else
      {
        __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> >,false,false> *const)(v4 + 192))->second;
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 256, v7._M_node);
        *(std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::const_iterator *)(v4 + 256) = std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::begin(__for_range_0);
        *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 288, v7._M_node);
        *(std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::const_iterator *)(v4 + 288) = std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::end(__for_range_0);
        while ( 1 )
        {
          v7._M_node = (std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr)(v4 + 288);
          if ( !std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,true> *)(v4 + 256),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,true> *)(v4 + 288)) )
          {
            v26 = 1;
            goto LABEL_38;
          }
          v35 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,false,true> *const)(v4 + 256));
          version = std::get<0ul,std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>(v35);
          referrer_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *)std::get<1ul,std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>(v35);
          v17 = std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>>::operator[](
                  temp_version_group_entity_map,
                  version);
          v18 = std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::operator[](
                  v17,
                  output_index);
          v19 = std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> > *const)(v4 + 128));
          v21 = std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::emplace<std::tuple<unsigned int,unsigned int,unsigned int> const&,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> const&>(
                  v18,
                  v19,
                  referrer_ptr,
                  v19,
                  v20);
          if ( !v21.second )
            break;
          std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,false,true> *const)(v4 + 256));
        }
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "moveActivityGroupToTempMap",
          1054);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v22,
                (const char (*)[23])"emplace fail, version:");
        v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, version);
        v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])" output_index:");
        v7._M_node = (std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr)output_index;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, output_index);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v26 = 0;
LABEL_38:
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( v26 == 1 )
        {
          if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 128, v7._M_node);
          v7._M_node = *(std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr *)(v4 + 128);
          *(std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v4 + 128) = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::erase[abi:cxx11](
                                                                                                    group_entity_set,
                                                                                                    v7);
          v16 = 2;
        }
        else
        {
          v16 = 1;
        }
      }
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v16 && v16 != 2 )
      {
        v27 = 0;
        goto LABEL_47;
      }
    }
    v27 = 1;
LABEL_47:
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v27 != 1 )
    {
      v28 = 0;
      goto LABEL_51;
    }
    std::__detail::_Node_iterator<std::pair<std::string const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,false,true> *const)(v4 + 64));
  }
  v28 = 1;
LABEL_51:
  if ( v28 == 1 )
    v3 = 0;
  result = v3;
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 1035: range 0000000013C7F91A-0000000013C801EA
int32_t __cdecl DropExcelConfigMgr::moveActivityGroupToTempMap<unsigned int>(
        const std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *group_version_map,
        std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>> *output_group_entity_indices_map,
        std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *temp_version_group_entity_map)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::const_iterator v7; // rsi
  char *v8; // rsi
  bool v9; // al
  const std::tuple<unsigned int,unsigned int,unsigned int> *v10; // rax
  std::__tuple_element_t_22 *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  bool v15; // al
  int v16; // eax
  std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *v17; // rdx
  std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> *v18; // r14
  const std::tuple<unsigned int,unsigned int,unsigned int> *v19; // rcx
  const std::shared_ptr<DropExcelConfigMgr::GroupReferrer> *v20; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  int v26; // edx
  int v27; // edx
  int v28; // eax
  int32_t result; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,false,false>::reference __in; // [rsp+28h] [rbp-1E8h]
  const std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::key_type *output_index; // [rsp+30h] [rbp-1E0h]
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>> *group_entity_set; // [rsp+38h] [rbp-1D8h]
  std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> *__for_range_0; // [rsp+40h] [rbp-1D0h]
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,false,true>::reference v35; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *version; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *referrer_ptr; // [rsp+58h] [rbp-1B8h]
  char v38[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 13 group_id:1043 64 8 16 __for_begin:1039 96 8 14 __for_end:1039 128 8 22 group_entity_i"
                        "ter:1041 160 8 9 <unknown> 192 8 9 iter:1044 224 8 9 <unknown> 256 8 16 __for_begin:1050 288 8 1"
                        "4 __for_end:1050 320 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DropExcelConfigMgr::moveActivityGroupToTempMap<unsigned int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862731] = -202116109;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, output_group_entity_indices_map);
  *(std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::begin(output_group_entity_indices_map);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, output_group_entity_indices_map);
  *(std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::end(output_group_entity_indices_map);
  while ( 1 )
  {
    v7._M_node = (std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr)(v4 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,false> *)(v4 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,false> *)(v4 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,false,false> *const)(v4 + 64));
    output_index = std::get<0ul,unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>(__in);
    group_entity_set = std::get<1ul,unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>(__in);
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v7._M_node);
    *(std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v4 + 128) = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(group_entity_set);
    while ( 1 )
    {
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 160, v7._M_node);
      *(std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v4 + 160) = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::end(group_entity_set);
      v8 = (char *)(v4 + 160);
      v9 = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Self *)(v4 + 128),
             (const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Self *)(v4 + 160));
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( !v9 )
        break;
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> > *const)(v4 + 128));
      v11 = (std::__tuple_element_t_22 *)std::get<1ul,unsigned int,unsigned int,unsigned int>(v10);
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v14 != 0;
      if ( v14 != 0 && v14 <= 3 )
        __asan_report_store4(v4 + 48, v8);
      *(_DWORD *)(v4 + 48) = v13;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, v8);
      *(std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::const_iterator *)(v4 + 192) = std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::find(group_version_map, (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::key_type *)(v4 + 48));
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 224, v4 + 48);
      *(std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::const_iterator *)(v4 + 224) = std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::end(group_version_map);
      v7._M_node = (std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr)(v4 + 224);
      v15 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> >,false> *)(v4 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> >,false> *)(v4 + 224));
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
      {
        std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> > *const)(v4 + 128));
        v16 = 0;
      }
      else
      {
        __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> >,false,false> *const)(v4 + 192))->second;
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 256, v7._M_node);
        *(std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::const_iterator *)(v4 + 256) = std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::begin(__for_range_0);
        *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 288, v7._M_node);
        *(std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::const_iterator *)(v4 + 288) = std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::end(__for_range_0);
        while ( 1 )
        {
          v7._M_node = (std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr)(v4 + 288);
          if ( !std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,true> *)(v4 + 256),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,true> *)(v4 + 288)) )
          {
            v26 = 1;
            goto LABEL_38;
          }
          v35 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,false,true> *const)(v4 + 256));
          version = std::get<0ul,std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>(v35);
          referrer_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *)std::get<1ul,std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>(v35);
          v17 = std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>>::operator[](
                  temp_version_group_entity_map,
                  version);
          v18 = std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::operator[](
                  v17,
                  output_index);
          v19 = std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> > *const)(v4 + 128));
          v21 = std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::emplace<std::tuple<unsigned int,unsigned int,unsigned int> const&,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> const&>(
                  v18,
                  v19,
                  referrer_ptr,
                  v19,
                  v20);
          if ( !v21.second )
            break;
          std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> >,false,true> *const)(v4 + 256));
        }
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "moveActivityGroupToTempMap",
          1054);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v22,
                (const char (*)[23])"emplace fail, version:");
        v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, version);
        v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])" output_index:");
        v7._M_node = (std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr)output_index;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, output_index);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v26 = 0;
LABEL_38:
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( v26 == 1 )
        {
          if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 128, v7._M_node);
          v7._M_node = *(std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Base_ptr *)(v4 + 128);
          *(std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v4 + 128) = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::erase[abi:cxx11](
                                                                                                    group_entity_set,
                                                                                                    v7);
          v16 = 2;
        }
        else
        {
          v16 = 1;
        }
      }
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v16 && v16 != 2 )
      {
        v27 = 0;
        goto LABEL_47;
      }
    }
    v27 = 1;
LABEL_47:
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v27 != 1 )
    {
      v28 = 0;
      goto LABEL_51;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> >,false,false> *const)(v4 + 64));
  }
  v28 = 1;
LABEL_51:
  if ( v28 == 1 )
    v3 = 0;
  result = v3;
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 1065: range 0000000013A9100E-0000000013A946A8
int32_t __cdecl DropExcelConfigMgr::checkTagArrangeLimitExcelConfig(
        DropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // r14d
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v12; // rsi
  _BOOL4 v13; // r14d
  char *v14; // rsi
  uint32_t activity_id; // ecx
  char v16; // al
  __int64 v17; // rsi
  unsigned int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  _BOOL4 v26; // edx
  unsigned __int64 v27; // rax
  std::vector<data::NewActivityExec> *p_meet_exec; // rcx
  std::vector<data::NewActivityExec> *p_expire_exec; // rcx
  int type; // eax
  std::set<unsigned int>::iterator v31; // rax
  std::insert_iterator<std::set<unsigned int> > v32; // rax
  std::set<unsigned int> *v33; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::vector<std::string>::const_iterator v35; // rax
  std::insert_iterator<std::set<unsigned int> > v36; // rdx
  unsigned __int64 v37; // rax
  std::vector<unsigned int>::iterator v38; // rax
  std::insert_iterator<std::vector<unsigned int> > v39; // rax
  std::vector<unsigned int> *container; // r14
  unsigned int *M_current; // r15
  std::vector<std::string>::const_iterator v42; // rax
  std::insert_iterator<std::vector<unsigned int> > v43; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  int v54; // edx
  const unsigned int *v55; // r14
  std::vector<unsigned int>::const_iterator v56; // rax
  _BOOL4 v57; // r14d
  unsigned __int64 v58; // rax
  int v59; // edx
  unsigned __int64 v60; // rax
  std::vector<unsigned int> *v61; // r15
  const std::string *v62; // r14
  std::vector<std::string>::const_iterator v63; // rax
  char *v64; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v65; // rax
  int *v66; // rdx
  int v67; // ecx
  char v68; // al
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::unordered_set<unsigned int>::const_iterator v70; // rax
  unsigned __int64 v71; // rax
  _BOOL4 v72; // r14d
  unsigned int *v73; // rax
  int *v74; // rdx
  int v75; // ecx
  char v76; // al
  std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> *v77; // rax
  common::milog::MiLogStream *v78; // rax
  int v79; // edx
  std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rcx
  unsigned int *v81; // r8
  unsigned __int64 v82; // rax
  int v83; // edx
  int v84; // edx
  const HK4EDesignConfig *Config; // rax
  char *v86; // rsi
  int v87; // eax
  uint32_t v88; // esi
  int v89; // r14d
  std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> *v90; // rax
  std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::mapped_type *v91; // rsi
  common::milog::MiLogStream *v92; // rax
  __int64 v93; // rax
  char v94; // dl
  _BOOL8 v95; // rdx
  int v96; // edx
  int v97; // edx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax
  void *p_drop_tag_group_entity_indices_map; // rsi
  common::milog::MiLogStream *v102; // rax
  unsigned __int64 v103; // rax
  common::milog::MiLogStream *v104; // rdx
  data::DropLimitType v105; // eax
  std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  int v115; // edx
  int v116; // edx
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rax
  const std::string *__lasta; // [rsp+8h] [rbp-B48h]
  const std::string *__last; // [rsp+8h] [rbp-B48h]
  int32_t v122; // [rsp+1Ch] [rbp-B34h]
  int32_t ret; // [rsp+3Ch] [rbp-B14h]
  const std::vector<data::NewActivityExec> **__for_begin; // [rsp+40h] [rbp-B10h]
  data::NewActivityScheduleExcelConfigMap *__for_range; // [rsp+48h] [rbp-B08h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::reference v127; // [rsp+50h] [rbp-B00h]
  std::tuple_element<0,std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *schedule_id; // [rsp+58h] [rbp-AF8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *schedule_config; // [rsp+60h] [rbp-AF0h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-AE8h]
  const data::NewActivityCondExcelConfig *cond_ptr; // [rsp+70h] [rbp-AE0h]
  std::initializer_list<const std::vector<data::NewActivityExec>*>::const_iterator __for_end; // [rsp+80h] [rbp-AD0h]
  const std::vector<data::NewActivityExec> *exec_vec_ptr; // [rsp+88h] [rbp-AC8h]
  const data::NewActivityExec *exec; // [rsp+98h] [rbp-AB8h]
  std::vector<unsigned int> *__for_range_3; // [rsp+A0h] [rbp-AB0h]
  const data::NewActivityTimeGroupExcelConfig *time_group_config_ptr; // [rsp+A8h] [rbp-AA8h]
  std::vector<unsigned int> *__for_range_4; // [rsp+B0h] [rbp-AA0h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::mapped_type *quest_group_id_set; // [rsp+B8h] [rbp-A98h]
  std::set<unsigned int> *__for_range_5; // [rsp+C0h] [rbp-A90h]
  std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::mapped_type *referrer_ptr; // [rsp+C8h] [rbp-A88h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+D0h] [rbp-A80h]
  const std::unordered_map<unsigned int,SceneScriptConfig> *__for_range_6; // [rsp+D8h] [rbp-A78h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false>::reference v143; // [rsp+E0h] [rbp-A70h]
  std::unordered_map<unsigned int,GroupInfoScriptConfig> *__for_range_7; // [rsp+F8h] [rbp-A58h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::reference v145; // [rsp+100h] [rbp-A50h]
  std::tuple_element<0,std::pair<unsigned int const,GroupInfoScriptConfig> >::type *group_id; // [rsp+108h] [rbp-A48h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupInfoScriptConfig> >::type *group_info_script_config; // [rsp+110h] [rbp-A40h]
  std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::mapped_type *referrer_ptr_0; // [rsp+118h] [rbp-A38h]
  std::set<std::string> *__for_range_8; // [rsp+120h] [rbp-A30h]
  const std::string *version; // [rsp+128h] [rbp-A28h]
  data::TagArrangeLimitConfigVec *__for_range_9; // [rsp+130h] [rbp-A20h]
  const data::TagArrangeLimitConfig *limit_config; // [rsp+138h] [rbp-A18h]
  std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::mapped_type *normal_entity_set_0; // [rsp+140h] [rbp-A10h]
  std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::mapped_type *activity_entity_map_0; // [rsp+148h] [rbp-A08h]
  std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::mapped_type *normal_entity_set; // [rsp+150h] [rbp-A00h]
  std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::mapped_type *activity_entity_map; // [rsp+158h] [rbp-9F8h]
  char v157[2544]; // [rsp+160h] [rbp-9F0h] BYREF

  v2 = (unsigned __int64)v157;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2496LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "53 48 4 16 activity_id:1083 64 4 12 cond_id:1084 80 4 18 time_group_id:1111 96 4 13 quest_id:112"
                        "7 112 4 13 group_id:1139 128 4 14 gadget_id:1262 144 8 16 __for_begin:1069 176 8 14 __for_end:10"
                        "69 208 8 16 __for_begin:1084 240 8 14 __for_end:1084 272 8 16 __for_begin:1099 304 8 14 __for_en"
                        "d:1099 336 8 16 __for_begin:1111 368 8 14 __for_end:1111 400 8 16 __for_begin:1127 432 8 14 __fo"
                        "r_end:1127 464 8 16 __for_begin:1139 496 8 14 __for_end:1139 528 8 16 __for_begin:1158 560 8 14 "
                        "__for_end:1158 592 8 16 __for_begin:1160 624 8 14 __for_end:1160 656 8 16 __for_begin:1199 688 8"
                        " 14 __for_end:1199 720 8 16 __for_begin:1246 752 8 14 __for_end:1246 784 16 9 <unknown> 816 16 9"
                        " <unknown> 848 16 9 <unknown> 880 16 9 <unknown> 912 16 28 check_drop_entity_count:1202 944 24 2"
                        "2 time_group_id_vec:1109 1008 24 17 quest_id_vec:1125 1072 32 20 version_pattern:1066 1136 32 12"
                        " version:1071 1200 32 26 pattern_match_results:1074 1264 32 9 <unknown> 1328 32 9 <unknown> 1392"
                        " 32 9 <unknown> 1456 32 9 <unknown> 1520 32 9 <unknown> 1584 32 12 version:1166 1648 32 9 <unkno"
                        "wn> 1712 32 9 <unknown> 1776 32 9 <unknown> 1840 32 9 <unknown> 1904 32 9 <unknown> 1968 48 16 v"
                        "ersion_set:1067 2048 48 17 group_id_set:1092 2128 48 36 checked_normal_limit_config_set:1198 220"
                        "8 56 22 group_version_map:1068 2304 56 46 version_drop_tag_group_entity_indices_map:1187 2400 56"
                        " 47 version_gadget_id_group_entity_indices_map:1188";
  *(_QWORD *)(v2 + 16) = DropExcelConfigMgr::checkTagArrangeLimitExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862730] = -234881024;
  v4[536862731] = 62194;
  v4[536862731] = -234881024;
  v4[536862732] = 62194;
  v4[536862732] = -234881024;
  v4[536862733] = 62194;
  v4[536862733] = -234881024;
  v4[536862734] = 62194;
  v4[536862734] = -234881024;
  v4[536862735] = 62194;
  v4[536862735] = -234881024;
  v4[536862736] = 62194;
  v4[536862736] = -234881024;
  v4[536862737] = 62194;
  v4[536862737] = -234881024;
  v4[536862738] = 62194;
  v4[536862738] = -234881024;
  v4[536862739] = 62194;
  v4[536862739] = -234881024;
  v4[536862740] = 62194;
  v4[536862740] = -234881024;
  v4[536862741] = 62194;
  v4[536862741] = -234881024;
  v4[536862742] = 62194;
  v4[536862742] = -234881024;
  v4[536862743] = 62194;
  v4[536862743] = -234881024;
  v4[536862744] = 62194;
  v4[536862745] = 62194;
  v4[536862746] = 62194;
  v4[536862747] = 62194;
  v4[536862748] = 62194;
  v4[536862749] = 62194;
  v4[536862750] = -218959360;
  v4[536862751] = 62194;
  v4[536862752] = -218959360;
  v4[536862753] = 62194;
  v4[536862754] = -219021312;
  v4[536862755] = 62194;
  v4[536862756] = -219021312;
  v4[536862757] = 62194;
  v4[536862758] = -219021312;
  v4[536862759] = 62194;
  v4[536862760] = -219021312;
  v4[536862761] = 62194;
  v4[536862762] = -219021312;
  v4[536862763] = 62194;
  v4[536862764] = -219021312;
  v4[536862765] = 62194;
  v4[536862766] = -219021312;
  v4[536862767] = 62194;
  v4[536862768] = -219021312;
  v4[536862769] = 62194;
  v4[536862770] = -219021312;
  v4[536862771] = 62194;
  v4[536862772] = -219021312;
  v4[536862773] = 62194;
  v4[536862774] = -219021312;
  v4[536862775] = 62194;
  v4[536862776] = -219021312;
  v4[536862777] = 62194;
  v4[536862778] = -219021312;
  v4[536862779] = 62194;
  v4[536862780] = -219021312;
  v4[536862781] = 62194;
  v4[536862783] = -218959118;
  v4[536862785] = -219021312;
  v4[536862786] = 62194;
  v4[536862788] = -218959118;
  v4[536862790] = -234881024;
  v4[536862791] = -218959118;
  v4[536862793] = -234881024;
  v4[536862794] = -218959118;
  v4[536862796] = -218103808;
  v4[536862797] = -202116109;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex(
    (std::basic_regex<char,std::regex_traits<char> > *const)(v2 + 1072),
    "^\\d+\\.\\d+",
    (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
  std::set<std::string>::set((std::set<std::string> *const)(v2 + 1968));
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::unordered_map((std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *const)(v2 + 2208));
  __for_range = &txt_config_mgr->new_activity_config_mgr.new_activity_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, "^\\d+\\.\\d+");
  *(std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::const_iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 176, "^\\d+\\.\\d+");
  *(std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::const_iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = v2 + 176;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false> *)(v2 + 176)) )
      break;
    v127 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false> *const)(v2 + 144));
    schedule_id = std::get<0ul,unsigned int const,data::NewActivityScheduleExcelConfig>(v127);
    schedule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::NewActivityScheduleExcelConfig>(v127);
    *(_DWORD *)(((v2 + 1136) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 1136);
    if ( (unsigned __int8)std::string::empty() == 1 )
      goto LABEL_24;
    *(_DWORD *)(((v2 + 1200) >> 3) + 0x7FFF8000) = 0;
    std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 1200));
    if ( !std::regex_search<std::char_traits<char>,std::allocator<char>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
            &schedule_config->schedule_version,
            (std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *)(v2 + 1200),
            (const std::basic_regex<char,std::regex_traits<char> > *)(v2 + 1072),
            (std::regex_constants::match_flag_type)0)
      || std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::empty((const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 1200)) )
    {
      *(_DWORD *)(((v2 + 1264) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1264) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1295) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 1295) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1264, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1264),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "checkTagArrangeLimitExcelConfig",
        1077);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1264),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])"invalid version:");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &schedule_config->schedule_version);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" schedule_id:");
      v5 = (__int64)schedule_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1264));
      *(_DWORD *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -117901064;
      v122 = -1;
      v11 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 1328) >> 3) + 0x7FFF8000) = 0;
      v12 = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
              (const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 1200),
              0LL);
      if ( *(char *)(((v2 + 1328) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1359) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1359) >> 3) + 0x7FFF8000) )
      {
        v12 = (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)32;
        __asan_report_store_n(v2 + 1328, 32LL);
      }
      std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator std::string(
        (std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *)(v2 + 1328),
        v12);
      v5 = v2 + 1328;
      std::string::operator=(v2 + 1136, v2 + 1328);
      std::string::~string((void *)(v2 + 1328));
      *(_DWORD *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -117901064;
      v11 = 1;
    }
    std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::~match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v2 + 1200));
    *(_DWORD *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -117901064;
    if ( v11 == 1 )
    {
LABEL_24:
      v14 = (char *)(v2 + 1136);
      std::set<std::string>::insert(
        (std::set<std::string> *const)(v2 + 1968),
        (const std::set<std::string>::value_type *)(v2 + 1136));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->activity_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_config->activity_id);
      }
      activity_id = schedule_config->activity_id;
      v16 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v14) = v16 != 0;
        __asan_report_store4(v2 + 48, v14);
      }
      *(_DWORD *)(v2 + 48) = activity_id;
      v17 = *(unsigned int *)(v2 + 48);
      __for_range_0 = NewActivityExcelConfigMgr::getActivityCondSet(&txt_config_mgr->new_activity_config_mgr, v17);
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, v17);
      *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 208) = std::unordered_set<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 240, v17);
      *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 240) = std::unordered_set<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v5 = v2 + 240;
        if ( !std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 208),
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 240)) )
          break;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v18 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v2 + 208));
        v19 = (int *)v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v20 = *v19;
        v21 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v21 != 0 && v21 <= 3 )
        {
          LOBYTE(v5) = v21 != 0;
          __asan_report_store4(v2 + 64, v5);
        }
        *(_DWORD *)(v2 + 64) = v20;
        v5 = *(unsigned int *)(v2 + 64);
        cond_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                     &txt_config_mgr->new_activity_config_mgr,
                     v5);
        if ( !cond_ptr )
        {
          *(_DWORD *)(((v2 + 1392) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1392) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1423) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 1423) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1392, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1392),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "checkTagArrangeLimitExcelConfig",
            1089);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1392),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  v22,
                  (const char (*)[46])"findNewActivityCondExcelConfig fail, cond_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 64));
          v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v24,
                  (const char (*)[14])" activity_id:");
          v5 = v2 + 48;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1392));
          *(_DWORD *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -117901064;
          v122 = -1;
          v26 = 0;
          goto LABEL_129;
        }
        v27 = ((v2 + 2048) >> 3) + 2147450880;
        *(_DWORD *)v27 = 0;
        *(_WORD *)(v27 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 2048));
        if ( *(_WORD *)(((v2 + 784) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        *(_QWORD *)(v2 + 784) = 0LL;
        *(_QWORD *)(v2 + 792) = 0LL;
        if ( *(_BYTE *)(((v2 + 792) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 792, v5);
        *(_QWORD *)(v2 + 792) = 2LL;
        p_meet_exec = &cond_ptr->meet_exec;
        if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 816, v5);
        *(_QWORD *)(v2 + 816) = p_meet_exec;
        p_expire_exec = &cond_ptr->expire_exec;
        if ( *(_BYTE *)(((v2 + 824) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 824, v5);
        *(_QWORD *)(v2 + 824) = p_expire_exec;
        if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 784, v5);
        *(_QWORD *)(v2 + 784) = v2 + 816;
        __for_begin = (const std::vector<data::NewActivityExec> **)std::initializer_list<std::vector<data::NewActivityExec> const*>::begin((const std::initializer_list<const std::vector<data::NewActivityExec>*> *const)(v2 + 784));
        __for_end = std::initializer_list<std::vector<data::NewActivityExec> const*>::end((const std::initializer_list<const std::vector<data::NewActivityExec>*> *const)(v2 + 784));
        while ( 2 )
        {
          if ( __for_begin != __for_end )
          {
            if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
              __asan_report_load8(__for_begin);
            exec_vec_ptr = *__for_begin;
            if ( !*__for_begin )
              goto LABEL_106;
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 272, v5);
            *(std::vector<data::NewActivityExec>::const_iterator *)(v2 + 272) = std::vector<data::NewActivityExec>::begin(exec_vec_ptr);
            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 304, v5);
            *(std::vector<data::NewActivityExec>::const_iterator *)(v2 + 304) = std::vector<data::NewActivityExec>::end(exec_vec_ptr);
LABEL_62:
            v5 = v2 + 304;
            if ( !__gnu_cxx::operator!=<data::NewActivityExec const*,std::vector<data::NewActivityExec>>(
                    (const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v2 + 272),
                    (const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v2 + 304)) )
            {
              v59 = 1;
LABEL_104:
              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
              if ( v59 != 1 )
              {
                v72 = 0;
                goto LABEL_128;
              }
LABEL_106:
              ++__for_begin;
              continue;
            }
            exec = __gnu_cxx::__normal_iterator<data::NewActivityExec const*,std::vector<data::NewActivityExec>>::operator*((const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v2 + 272));
            if ( *(_BYTE *)(((unsigned __int64)&exec->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&exec->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&exec->type);
            }
            type = exec->type;
            if ( type == 44 )
            {
              v37 = ((v2 + 944) >> 3) + 2147450880;
              *(_WORD *)v37 = 0;
              *(_BYTE *)(v37 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 944));
              v38._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 944))._M_current;
              v39 = std::inserter<std::vector<unsigned int>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                      (std::vector<unsigned int> *)(v2 + 944),
                      v38);
              container = v39.container;
              M_current = v39.iter._M_current;
              __last = std::vector<std::string>::end(&exec->param)._M_current;
              v42._M_current = std::vector<std::string>::begin(&exec->param)._M_current;
              v43.container = container;
              v43.iter._M_current = M_current;
              std::transform<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::insert_iterator<std::vector<unsigned int>>,unsigned int (*)(std::string const&)>(
                v42,
                (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)__last,
                v43,
                (unsigned int (*)(const std::string *))common::tools::Converter<unsigned int>::convertTo);
              __for_range_3 = (std::vector<unsigned int> *)(v2 + 944);
              *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 336, __last);
              *(std::vector<unsigned int>::iterator *)(v2 + 336) = std::vector<unsigned int>::begin(__for_range_3);
              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 368, __last);
              *(std::vector<unsigned int>::iterator *)(v2 + 368) = std::vector<unsigned int>::end(__for_range_3);
              while ( 1 )
              {
                v5 = v2 + 368;
                if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 336),
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 368)) )
                {
                  v54 = 1;
                  goto LABEL_88;
                }
                *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                v44 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 336));
                v45 = (int *)v44;
                if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v44);
                }
                v46 = *v45;
                v47 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
                if ( v47 != 0 && v47 <= 3 )
                {
                  LOBYTE(v5) = v47 != 0;
                  __asan_report_store4(v2 + 80, v5);
                }
                *(_DWORD *)(v2 + 80) = v46;
                time_group_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityTimeGroupExcelConfig(
                                          &txt_config_mgr->new_activity_config_mgr,
                                          *(unsigned int *)(v2 + 80));
                if ( !time_group_config_ptr )
                  break;
                v55 = std::vector<unsigned int>::end(&time_group_config_ptr->group_id_list)._M_current;
                v56._M_current = std::vector<unsigned int>::begin(&time_group_config_ptr->group_id_list)._M_current;
                std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
                  (std::set<unsigned int> *const)(v2 + 2048),
                  v56,
                  (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v55);
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 336));
              }
              *(_DWORD *)(((v2 + 1456) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1456) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1487) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 1487) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1456, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1456),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/DropExcelConfig.cpp",
                "checkTagArrangeLimitExcelConfig",
                1116);
              v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1456),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v49 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      v48,
                      (const char (*)[57])"findNewActivityTimeGroupExcelConfig fail, time_group_id:");
              v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v49,
                      (const unsigned int *)(v2 + 80));
              v51 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v50,
                      (const char (*)[10])" cond_id:");
              v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v51,
                      (const unsigned int *)(v2 + 64));
              v53 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v52,
                      (const char (*)[14])" activity_id:");
              v5 = v2 + 48;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v53,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1456));
              *(_DWORD *)(((v2 + 1456) >> 3) + 0x7FFF8000) = -117901064;
              v122 = -1;
              v54 = 0;
LABEL_88:
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
              v57 = v54 == 1;
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 944));
              v58 = ((v2 + 944) >> 3) + 2147450880;
              *(_WORD *)v58 = -1800;
              *(_BYTE *)(v58 + 2) = -8;
              if ( !v57 )
              {
                v59 = 0;
                goto LABEL_104;
              }
            }
            else if ( type <= 44 )
            {
              if ( type == 17 )
                goto LABEL_71;
              if ( type <= 17 )
              {
                if ( type == 3 )
                {
                  v60 = ((v2 + 1008) >> 3) + 2147450880;
                  *(_WORD *)v60 = 0;
                  *(_BYTE *)(v60 + 2) = 0;
                  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 1008));
                  v61 = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v2 + 1008)).container;
                  v62 = std::vector<std::string>::end(&exec->param)._M_current;
                  v63._M_current = std::vector<std::string>::begin(&exec->param)._M_current;
                  std::transform<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::back_insert_iterator<std::vector<unsigned int>>,unsigned int (*)(std::string const&)>(
                    v63,
                    (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v62,
                    (std::back_insert_iterator<std::vector<unsigned int> >)v61,
                    (unsigned int (*)(const std::string *))common::tools::Converter<unsigned int>::convertTo);
                  __for_range_4 = (std::vector<unsigned int> *)(v2 + 1008);
                  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 400, v62);
                  *(std::vector<unsigned int>::iterator *)(v2 + 400) = std::vector<unsigned int>::begin(__for_range_4);
                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 432, v62);
                  *(std::vector<unsigned int>::iterator *)(v2 + 432) = std::vector<unsigned int>::end(__for_range_4);
                  while ( 1 )
                  {
                    v64 = (char *)(v2 + 432);
                    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 400),
                            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 432)) )
                      break;
                    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
                    v65 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 400));
                    v66 = (int *)v65;
                    if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v65 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v65);
                    }
                    v67 = *v66;
                    v68 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
                    if ( v68 != 0 && v68 <= 3 )
                    {
                      LOBYTE(v64) = v68 != 0;
                      __asan_report_store4(v2 + 96, v64);
                    }
                    *(_DWORD *)(v2 + 96) = v67;
                    quest_group_id_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                                           &this->quest_group_map_,
                                           (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 96));
                    M_cur = std::unordered_set<unsigned int>::end(quest_group_id_set)._M_cur;
                    v70._M_cur = std::unordered_set<unsigned int>::begin(quest_group_id_set)._M_cur;
                    std::set<unsigned int>::insert<std::__detail::_Node_const_iterator<unsigned int,true,false>>(
                      (std::set<unsigned int> *const)(v2 + 2048),
                      v70,
                      (std::__detail::_Node_const_iterator<unsigned int,true,false>)M_cur);
                    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 400));
                  }
                  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 1008));
                  v71 = ((v2 + 1008) >> 3) + 2147450880;
                  *(_WORD *)v71 = -1800;
                  *(_BYTE *)(v71 + 2) = -8;
                }
                else if ( type == 6 )
                {
LABEL_71:
                  v31._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 2048))._M_node;
                  v32 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
                          (std::set<unsigned int> *)(v2 + 2048),
                          v31);
                  v33 = v32.container;
                  M_node = v32.iter._M_node;
                  __lasta = std::vector<std::string>::end(&exec->param)._M_current;
                  v35._M_current = std::vector<std::string>::begin(&exec->param)._M_current;
                  v36.container = v33;
                  v36.iter._M_node = M_node;
                  std::transform<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::insert_iterator<std::set<unsigned int>>,unsigned int (*)(std::string const&)>(
                    v35,
                    (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)__lasta,
                    v36,
                    (unsigned int (*)(const std::string *))common::tools::Converter<unsigned int>::convertTo);
                }
              }
            }
            __gnu_cxx::__normal_iterator<data::NewActivityExec const*,std::vector<data::NewActivityExec>>::operator++((__gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v2 + 272));
            goto LABEL_62;
          }
          break;
        }
        __for_range_5 = (std::set<unsigned int> *)(v2 + 2048);
        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 464, v5);
        *(std::set<unsigned int>::iterator *)(v2 + 464) = std::set<unsigned int>::begin(__for_range_5);
        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 496, v5);
        *(std::set<unsigned int>::iterator *)(v2 + 496) = std::set<unsigned int>::end(__for_range_5);
        while ( 1 )
        {
          v5 = v2 + 496;
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 464),
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 496)) )
          {
            v79 = 1;
            goto LABEL_127;
          }
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
          v73 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 464));
          v74 = (int *)v73;
          if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v73);
          }
          v75 = *v74;
          v76 = *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000);
          if ( v76 != 0 && v76 <= 3 )
          {
            LOBYTE(v5) = v76 != 0;
            __asan_report_store4(v2 + 112, v5);
          }
          *(_DWORD *)(v2 + 112) = v75;
          v77 = std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::operator[](
                  (std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *const)(v2 + 2208),
                  (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::key_type *)(v2 + 112));
          referrer_ptr = std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::operator[](
                           v77,
                           (const std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::key_type *)(v2 + 1136));
          if ( std::operator==<DropExcelConfigMgr::GroupReferrer>(0LL, referrer_ptr) )
          {
            *(_WORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 848) >> 3) + 0x7FFF8000) )
              __asan_report_store16();
            common::tools::perf::make_shared<DropExcelConfigMgr::GroupReferrer>();
            std::shared_ptr<DropExcelConfigMgr::GroupReferrer>::operator=(
              referrer_ptr,
              (std::shared_ptr<DropExcelConfigMgr::GroupReferrer> *)(v2 + 848));
            std::shared_ptr<DropExcelConfigMgr::GroupReferrer>::~shared_ptr((std::shared_ptr<DropExcelConfigMgr::GroupReferrer> *const)(v2 + 848));
            *(_WORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -1800;
          }
          if ( std::operator==<DropExcelConfigMgr::GroupReferrer>(0LL, referrer_ptr) )
            break;
          v80 = std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false> *const)referrer_ptr);
          std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int const&,unsigned int &>(
            &v80->activity_cond_vec,
            schedule_id,
            (unsigned int *)(v2 + 64),
            (const unsigned int *)v80,
            v81);
          std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 464));
        }
        *(_DWORD *)(((v2 + 1520) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1520) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1551) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 1551) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1520, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1520),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "checkTagArrangeLimitExcelConfig",
          1148);
        v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1520),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v5 = (__int64)"group_referrer is null";
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v78,
          (const char (*)[23])"group_referrer is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1520));
        *(_DWORD *)(((v2 + 1520) >> 3) + 0x7FFF8000) = -117901064;
        v122 = -1;
        v79 = 0;
LABEL_127:
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
        v72 = v79 == 1;
LABEL_128:
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 2048));
        v26 = v72;
LABEL_129:
        v82 = ((v2 + 2048) >> 3) + 2147450880;
        *(_DWORD *)v82 = -117901064;
        *(_WORD *)(v82 + 4) = -1800;
        if ( !v26 )
        {
          v83 = 0;
          goto LABEL_133;
        }
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v2 + 208));
      }
      v83 = 1;
LABEL_133:
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      v13 = v83 == 1;
    }
    else
    {
      v13 = 0;
    }
    std::string::~string((void *)(v2 + 1136));
    *(_DWORD *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !v13 )
    {
      v84 = 0;
      goto LABEL_138;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false> *const)(v2 + 144));
  }
  v84 = 1;
LABEL_138:
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  if ( v84 == 1 )
  {
    std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::clear(&this->quest_group_map_);
    Config = TxtConfigMgr::getConfig(txt_config_mgr);
    lua_config_mgr = &Config->lua_config_mgr;
    __for_range_6 = &Config->lua_config_mgr.scene_script_config_map;
    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 528, v5);
    *(std::unordered_map<unsigned int,SceneScriptConfig>::const_iterator *)(v2 + 528) = std::unordered_map<unsigned int,SceneScriptConfig>::begin(__for_range_6);
    *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 560, v5);
    *(std::unordered_map<unsigned int,SceneScriptConfig>::const_iterator *)(v2 + 560) = std::unordered_map<unsigned int,SceneScriptConfig>::end(__for_range_6);
    while ( 1 )
    {
      v86 = (char *)(v2 + 560);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,SceneScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SceneScriptConfig>,false> *)(v2 + 528),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SceneScriptConfig>,false> *)(v2 + 560)) )
        break;
      v143 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false> *const)(v2 + 528));
      std::get<0ul,unsigned int const,SceneScriptConfig>(v143);
      __for_range_7 = &std::get<1ul,unsigned int const,SceneScriptConfig>(v143)->group_info_map;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 592, v86);
      *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator *)(v2 + 592) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::begin(__for_range_7);
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 624, v86);
      *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator *)(v2 + 624) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::end(__for_range_7);
      while ( std::__detail::operator!=<std::pair<unsigned int const,GroupInfoScriptConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v2 + 592),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v2 + 624)) )
      {
        v145 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v2 + 592));
        group_id = std::get<0ul,unsigned int const,GroupInfoScriptConfig>(v145);
        group_info_script_config = (std::tuple_element<1,const std::pair<unsigned int const,GroupInfoScriptConfig> >::type *)std::get<1ul,unsigned int const,GroupInfoScriptConfig>(v145);
        if ( *(_BYTE *)(((unsigned __int64)&group_info_script_config->business_info >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)group_info_script_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_script_config->business_info >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&group_info_script_config->business_info);
        }
        if ( group_info_script_config->business_info.type == 4 )
        {
          *(_DWORD *)(((v2 + 1584) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(group_id);
          }
          v88 = *group_id;
          if ( *(char *)(((v2 + 1584) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1615) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1615) >> 3) + 0x7FFF8000) )
          {
            v88 = 32;
            __asan_report_store_n(v2 + 1584, 32LL);
          }
          LuaConfigMgr::findGroupVersionInGroupsInfo[abi:cxx11]((std::string *)(v2 + 1584), lua_config_mgr, v88);
          if ( (unsigned __int8)std::string::empty() )
          {
            v89 = 0;
          }
          else
          {
            std::set<std::string>::insert(
              (std::set<std::string> *const)(v2 + 1968),
              (const std::set<std::string>::value_type *)(v2 + 1584));
            v90 = std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::operator[](
                    (std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *const)(v2 + 2208),
                    group_id);
            referrer_ptr_0 = std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::operator[](
                               v90,
                               (const std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::key_type *)(v2 + 1584));
            if ( std::operator==<DropExcelConfigMgr::GroupReferrer>(0LL, referrer_ptr_0) )
            {
              *(_WORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = 0;
              if ( *(_WORD *)(((v2 + 880) >> 3) + 0x7FFF8000) )
                __asan_report_store16();
              common::tools::perf::make_shared<DropExcelConfigMgr::GroupReferrer>();
              std::shared_ptr<DropExcelConfigMgr::GroupReferrer>::operator=(
                referrer_ptr_0,
                (std::shared_ptr<DropExcelConfigMgr::GroupReferrer> *)(v2 + 880));
              std::shared_ptr<DropExcelConfigMgr::GroupReferrer>::~shared_ptr((std::shared_ptr<DropExcelConfigMgr::GroupReferrer> *const)(v2 + 880));
              *(_WORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = -1800;
            }
            v91 = referrer_ptr_0;
            if ( std::operator==<DropExcelConfigMgr::GroupReferrer>(0LL, referrer_ptr_0) )
            {
              *(_DWORD *)(((v2 + 1648) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1648) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1679) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 1679) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1648, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1648),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/DropExcelConfig.cpp",
                "checkTagArrangeLimitExcelConfig",
                1179);
              v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1648),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v92,
                (const char (*)[23])"group_referrer is null");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1648));
              *(_DWORD *)(((v2 + 1648) >> 3) + 0x7FFF8000) = -117901064;
              v122 = -1;
              v89 = 1;
            }
            else
            {
              v93 = (__int64)std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false> *const)referrer_ptr_0);
              v94 = *(_BYTE *)(((unsigned __int64)(v93 + 24) >> 3) + 0x7FFF8000);
              LOBYTE(v91) = v94 != 0;
              v95 = v94 < 0;
              if ( v95 )
                v93 = __asan_report_store1(v93 + 24, v91, v95);
              *(_BYTE *)(v93 + 24) = 1;
              v89 = 2;
            }
          }
          std::string::~string((void *)(v2 + 1584));
          if ( v89 )
          {
            if ( v89 == 2 )
              v87 = 2;
            else
              v87 = 1;
          }
          else
          {
            v87 = 0;
          }
        }
        else
        {
          v87 = 0;
        }
        *(_DWORD *)(((v2 + 1584) >> 3) + 0x7FFF8000) = -117901064;
        if ( v87 && v87 != 2 )
        {
          v96 = 0;
          goto LABEL_182;
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v2 + 592));
      }
      v96 = 1;
LABEL_182:
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      if ( v96 != 1 )
      {
        v97 = 0;
        goto LABEL_186;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false> *const)(v2 + 528));
    }
    v97 = 1;
LABEL_186:
    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
    if ( v97 == 1 )
    {
      v98 = ((v2 + 2304) >> 3) + 2147450880;
      *(_DWORD *)v98 = 0;
      *(_WORD *)(v98 + 4) = 0;
      *(_BYTE *)(v98 + 6) = 0;
      std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>>::unordered_map((std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *const)(v2 + 2304));
      v99 = ((v2 + 2400) >> 3) + 2147450880;
      *(_DWORD *)v99 = 0;
      *(_WORD *)(v99 + 4) = 0;
      *(_BYTE *)(v99 + 6) = 0;
      std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>>::unordered_map((std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *const)(v2 + 2400));
      p_drop_tag_group_entity_indices_map = &this->drop_tag_group_entity_indices_map_;
      if ( DropExcelConfigMgr::moveActivityGroupToTempMap<std::string>(
             (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *)(v2 + 2208),
             &this->drop_tag_group_entity_indices_map_,
             (std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *)(v2 + 2304))
        || (p_drop_tag_group_entity_indices_map = &this->gadget_id_group_entity_indices_map_,
            DropExcelConfigMgr::moveActivityGroupToTempMap<unsigned int>(
              (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *)(v2 + 2208),
              &this->gadget_id_group_entity_indices_map_,
              (std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *)(v2 + 2400))) )
      {
        *(_DWORD *)(((v2 + 1712) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1712) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1743) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 1743) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1712, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1712),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "checkTagArrangeLimitExcelConfig",
          1193);
        v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 1712),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          v102,
          (const char (*)[37])"checkTagArrangeLimitExcelConfig fail");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1712));
        *(_DWORD *)(((v2 + 1712) >> 3) + 0x7FFF8000) = -117901064;
        v122 = -1;
        goto LABEL_241;
      }
      ret = 0;
      v103 = ((v2 + 2128) >> 3) + 2147450880;
      *(_DWORD *)v103 = 0;
      *(_WORD *)(v103 + 4) = 0;
      std::set<std::pair<unsigned int,std::string>>::set((std::set<std::pair<unsigned int,std::string >> *const)(v2 + 2128));
      __for_range_8 = (std::set<std::string> *)(v2 + 1968);
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 656, p_drop_tag_group_entity_indices_map);
      *(std::set<std::string>::iterator *)(v2 + 656) = std::set<std::string>::begin(__for_range_8);
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 688, p_drop_tag_group_entity_indices_map);
      *(std::set<std::string>::iterator *)(v2 + 688) = std::set<std::string>::end(__for_range_8);
LABEL_200:
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 656),
             (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 688)) )
      {
        version = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v2 + 656));
        *(_DWORD *)(((v2 + 1776) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1776) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1807) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 1807) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1776, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1776),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "checkTagArrangeLimitExcelConfig",
          1201);
        v104 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                 (common::milog::MiLogStream *const)(v2 + 1776),
                 (const char (*)[9])"version:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v104, version);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1776));
        *(_DWORD *)(((v2 + 1776) >> 3) + 0x7FFF8000) = -117901064;
        *(_WORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 912, version);
        *(_QWORD *)(v2 + 912) = version;
        if ( *(_BYTE *)(((v2 + 920) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 920, version);
        *(_QWORD *)(v2 + 920) = v2 + 2128;
        __for_range_9 = &this->tag_arrange_limit_config_vec;
        *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 720, version);
        *(std::vector<data::TagArrangeLimitConfig>::iterator *)(v2 + 720) = std::vector<data::TagArrangeLimitConfig>::begin(__for_range_9);
        *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 752, version);
        *(std::vector<data::TagArrangeLimitConfig>::iterator *)(v2 + 752) = std::vector<data::TagArrangeLimitConfig>::end(__for_range_9);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<data::TagArrangeLimitConfig *,std::vector<data::TagArrangeLimitConfig>>(
                  (const __gnu_cxx::__normal_iterator<data::TagArrangeLimitConfig*,std::vector<data::TagArrangeLimitConfig> > *)(v2 + 720),
                  (const __gnu_cxx::__normal_iterator<data::TagArrangeLimitConfig*,std::vector<data::TagArrangeLimitConfig> > *)(v2 + 752)) )
          {
            v115 = 1;
            goto LABEL_234;
          }
          limit_config = __gnu_cxx::__normal_iterator<data::TagArrangeLimitConfig *,std::vector<data::TagArrangeLimitConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::TagArrangeLimitConfig*,std::vector<data::TagArrangeLimitConfig> > *const)(v2 + 720));
          if ( *(_BYTE *)(((unsigned __int64)&limit_config->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&limit_config->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&limit_config->type);
          }
          v105 = limit_config->type;
          if ( v105 )
          {
            if ( v105 != DROP_LIMIT_GATHER )
            {
              *(_DWORD *)(((v2 + 1904) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1904) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1935) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 1935) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1904, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1904),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/DropExcelConfig.cpp",
                "checkTagArrangeLimitExcelConfig",
                1278);
              v111 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v2 + 1904),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v112 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                       v111,
                       (const char (*)[14])"unknown type:");
              v113 = common::milog::MiLogStream::operator<<<data::DropLimitType,(data::DropLimitType*)0>(
                       v112,
                       &limit_config->type);
              v114 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v113,
                       (const char (*)[11])" drop_tag:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v114, &limit_config->drop_tag);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1904));
              *(_DWORD *)(((v2 + 1904) >> 3) + 0x7FFF8000) = -117901064;
              v122 = -1;
              v115 = 0;
LABEL_234:
              *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
              *(_WORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = -1800;
              if ( v115 != 1 )
              {
                v116 = 0;
                goto LABEL_238;
              }
              std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v2 + 656));
              goto LABEL_200;
            }
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 128, v2 + 752);
            *(_DWORD *)(v2 + 128) = 0;
            if ( common::tools::StringUtils::strToNum<unsigned int>(
                   &limit_config->drop_tag,
                   (unsigned int *)(v2 + 128),
                   1) )
            {
              *(_DWORD *)(((v2 + 1840) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1840) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1871) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1871) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1840, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1840),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/DropExcelConfig.cpp",
                "checkTagArrangeLimitExcelConfig",
                1265);
              v107 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v2 + 1840),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v108 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                       v107,
                       (const char (*)[17])"parse gadget_id:");
              v109 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v108, &limit_config->drop_tag);
              common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v109, (const char (*)[6])" fail");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1840));
              *(_DWORD *)(((v2 + 1840) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              normal_entity_set_0 = std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator[](
                                      &this->gadget_id_group_entity_indices_map_,
                                      (const std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::key_type *)(v2 + 128));
              v110 = std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>>::operator[](
                       (std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *const)(v2 + 2400),
                       version);
              activity_entity_map_0 = std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::operator[](
                                        v110,
                                        (const std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::key_type *)(v2 + 128));
              if ( DropExcelConfigMgr::checkTagArrangeLimitExcelConfig(TxtConfigMgr const&)::{lambda(data::TagArrangeLimitConfig const&,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> const&,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> const&)#1}::operator()(
                     (const DropExcelConfigMgr::checkTagArrangeLimitExcelConfig::<lambda(const data::TagArrangeLimitConfig&, const std::set<std::tuple<unsigned int, unsigned int, unsigned int>>&, const std::map<std::tuple<unsigned int, unsigned int, unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>&)> *const)(v2 + 912),
                     limit_config,
                     normal_entity_set_0,
                     activity_entity_map_0) )
              {
                ret = -1;
              }
            }
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          }
          else
          {
            normal_entity_set = std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator[](
                                  &this->drop_tag_group_entity_indices_map_,
                                  &limit_config->drop_tag);
            v106 = std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>>::operator[](
                     (std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *const)(v2 + 2304),
                     version);
            activity_entity_map = std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::operator[](
                                    v106,
                                    &limit_config->drop_tag);
            if ( DropExcelConfigMgr::checkTagArrangeLimitExcelConfig(TxtConfigMgr const&)::{lambda(data::TagArrangeLimitConfig const&,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> const&,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> const&)#1}::operator()(
                   (const DropExcelConfigMgr::checkTagArrangeLimitExcelConfig::<lambda(const data::TagArrangeLimitConfig&, const std::set<std::tuple<unsigned int, unsigned int, unsigned int>>&, const std::map<std::tuple<unsigned int, unsigned int, unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>&)> *const)(v2 + 912),
                   limit_config,
                   normal_entity_set,
                   activity_entity_map) )
            {
              ret = -1;
            }
          }
          __gnu_cxx::__normal_iterator<data::TagArrangeLimitConfig *,std::vector<data::TagArrangeLimitConfig>>::operator++((__gnu_cxx::__normal_iterator<data::TagArrangeLimitConfig*,std::vector<data::TagArrangeLimitConfig> > *const)(v2 + 720));
        }
      }
      v116 = 1;
LABEL_238:
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      if ( v116 == 1 )
      {
        std::unordered_map<std::string,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::clear(&this->drop_tag_group_entity_indices_map_);
        std::unordered_map<unsigned int,std::set<std::tuple<unsigned int,unsigned int,unsigned int>>>::clear(&this->gadget_id_group_entity_indices_map_);
        v122 = ret;
      }
      std::set<std::pair<unsigned int,std::string>>::~set((std::set<std::pair<unsigned int,std::string >> *const)(v2 + 2128));
LABEL_241:
      std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>>::~unordered_map((std::unordered_map<std::string,std::unordered_map<unsigned int,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *const)(v2 + 2400));
      std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>>::~unordered_map((std::unordered_map<std::string,std::unordered_map<std::string,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>> *const)(v2 + 2304));
      v117 = ((v2 + 2400) >> 3) + 2147450880;
      *(_DWORD *)v117 = -117901064;
      *(_WORD *)(v117 + 4) = -1800;
      *(_BYTE *)(v117 + 6) = -8;
      v118 = ((v2 + 2128) >> 3) + 2147450880;
      *(_DWORD *)v118 = -117901064;
      *(_WORD *)(v118 + 4) = -1800;
    }
  }
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::~unordered_map((std::unordered_map<unsigned int,std::unordered_map<std::string,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>> *const)(v2 + 2208));
  std::set<std::string>::~set((std::set<std::string> *const)(v2 + 1968));
  std::basic_regex<char,std::regex_traits<char>>::~basic_regex((std::basic_regex<char,std::regex_traits<char> > *const)(v2 + 1072));
  if ( v157 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 248) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80FC) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8104) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF810C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8118) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8124) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF812C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8134) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2496LL, v157);
  }
  return v122;
};

// Line 1202: range 0000000013A8F8A4-0000000013A9100D
int __cdecl DropExcelConfigMgr::checkTagArrangeLimitExcelConfig(TxtConfigMgr const&)::{lambda(data::TagArrangeLimitConfig const&,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> const&,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> const&)#1}::operator()(
        const DropExcelConfigMgr::checkTagArrangeLimitExcelConfig::<lambda(const data::TagArrangeLimitConfig&, const std::set<std::tuple<unsigned int, unsigned int, unsigned int>>&, const std::map<std::tuple<unsigned int, unsigned int, unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>&)> *const __closure,
        const data::TagArrangeLimitConfig *limit_config,
        const std::set<std::tuple<unsigned int,unsigned int,unsigned int>> *normal_entity_set,
        const std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> *activity_entity_map)
{
  int v4; // r15d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::string *p_drop_tag; // rdi
  data::DropLimitType *p_type; // rsi
  int v10; // r14d
  std::set<std::pair<unsigned int,std::string >> *checked_normal_limit_config_set; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::size_type v14; // r14
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::size_type v15; // rcx
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::size_type v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::size_type v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  __int64 v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::size_type v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::size_type v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  char *v54; // rsi
  unsigned __int64 n; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rdx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // r14
  __int64 v74; // rax
  char v75; // dl
  const char *v76; // rsi
  _BOOL8 v77; // rdx
  int result; // eax
  const data::TagArrangeLimitConfig *limit_configa; // [rsp+20h] [rbp-440h]
  std::_Rb_tree_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::reference v83; // [rsp+48h] [rbp-418h]
  std::tuple_element<0,std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *group_entity_index; // [rsp+50h] [rbp-410h]
  std::tuple_element<1,const std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *referrer_ptr; // [rsp+58h] [rbp-408h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *scene_id_0; // [rsp+60h] [rbp-400h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *group_id_0; // [rsp+68h] [rbp-3F8h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *config_id_0; // [rsp+70h] [rbp-3F0h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *scene_id; // [rsp+78h] [rbp-3E8h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *group_id; // [rsp+80h] [rbp-3E0h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *config_id; // [rsp+88h] [rbp-3D8h]
  char v92[976]; // [rsp+90h] [rbp-3D0h] BYREF

  limit_configa = limit_config;
  v5 = (unsigned __int64)v92;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(928LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "20 32 8 16 total_count:1216 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown"
                        "> 192 8 9 <unknown> 224 8 9 <unknown> 256 8 16 __for_begin:1228 288 8 14 __for_end:1228 320 8 16"
                        " __for_begin:1232 352 8 14 __for_end:1232 384 12 9 <unknown> 416 12 9 <unknown> 448 32 9 <unknow"
                        "n> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 40 7 pr:1209 "
                        "848 40 9 <unknown>";
  *(_QWORD *)(v5 + 16) = DropExcelConfigMgr::checkTagArrangeLimitExcelConfig(TxtConfigMgr const&)::{lambda(data::TagArrangeLimitConfig const&,std::set<std::tuple<unsigned int,unsigned int,unsigned int>> const&,std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>> const&)#1}::operator();
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -218959360;
  v7[536862729] = -218959360;
  v7[536862730] = -218959360;
  v7[536862731] = -218959360;
  v7[536862732] = -219020288;
  v7[536862733] = -219020288;
  v7[536862735] = -218959118;
  v7[536862737] = -218959118;
  v7[536862739] = -218959118;
  v7[536862741] = -218959118;
  v7[536862743] = -218959118;
  v7[536862745] = -218959360;
  v7[536862746] = 62194;
  v7[536862747] = -218103808;
  v7[536862748] = -202116109;
  if ( !std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::empty(activity_entity_map) )
    goto LABEL_15;
  p_drop_tag = &limit_config->drop_tag;
  p_type = &limit_config->type;
  if ( *(char *)(((v5 + 768) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 807) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 39) & 7) >= *(_BYTE *)(((v5 + 807) >> 3) + 0x7FFF8000) )
  {
    p_type = (data::DropLimitType *)40;
    p_drop_tag = (std::string *)(v5 + 768);
    __asan_report_store_n(v5 + 768, 40LL);
  }
  std::make_pair<data::DropLimitType const&,std::string const&>(
    (std::pair<data::DropLimitType,std::string > *)(v5 + 768),
    p_type,
    p_drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__checked_normal_limit_config_set >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__checked_normal_limit_config_set);
  limit_config = (const data::TagArrangeLimitConfig *)(v5 + 768);
  if ( common::tools::MiscUtils::isContains<std::set<std::pair<unsigned int,std::string>>,std::pair<data::DropLimitType,std::string>>(
         __closure->__checked_normal_limit_config_set,
         (const std::pair<data::DropLimitType,std::string > *)(v5 + 768)) )
  {
    v4 = 0;
    v10 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__checked_normal_limit_config_set >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__checked_normal_limit_config_set);
    checked_normal_limit_config_set = __closure->__checked_normal_limit_config_set;
    std::pair<unsigned int,std::string>::pair<data::DropLimitType,std::string,true>(
      (std::pair<unsigned int,std::string > *const)(v5 + 848),
      (const std::pair<data::DropLimitType,std::string > *)(v5 + 768));
    limit_config = (const data::TagArrangeLimitConfig *)(v5 + 848);
    std::set<std::pair<unsigned int,std::string>>::insert(
      checked_normal_limit_config_set,
      (std::set<std::pair<unsigned int,std::string >>::value_type *)(v5 + 848));
    std::pair<unsigned int,std::string>::~pair((std::pair<unsigned int,std::string > *const)(v5 + 848));
    v12 = ((v5 + 848) >> 3) + 2147450880;
    *(_DWORD *)v12 = -117901064;
    *(_BYTE *)(v12 + 4) = -8;
    v10 = 1;
  }
  std::pair<data::DropLimitType,std::string>::~pair((std::pair<data::DropLimitType,std::string > *const)(v5 + 768));
  v13 = ((v5 + 768) >> 3) + 2147450880;
  *(_DWORD *)v13 = -117901064;
  *(_BYTE *)(v13 + 4) = -8;
  if ( v10 == 1 )
  {
LABEL_15:
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 0;
    v14 = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::size(normal_entity_set);
    v15 = v14
        + std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::size(activity_entity_map);
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 32, limit_config);
    *(_QWORD *)(v5 + 32) = v15;
    if ( *(_BYTE *)(((unsigned __int64)&limit_configa->arrange_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&limit_configa->arrange_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&limit_configa->arrange_limit);
    }
    if ( (unsigned __int64)limit_configa->arrange_limit < *(_QWORD *)(v5 + 32) )
    {
      *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 96 + 127) & 7) >= *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "operator()",
        1224);
      v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])"version:");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, __closure->__version);
      v37 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])" type:");
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&limit_configa->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&limit_configa->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&limit_configa->type);
      }
      v38 = (__int64)data::enumValToStr(limit_configa->type, (__int64)" type:");
      if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
        v38 = __asan_report_store8(v5 + 160, " type:");
      *(_QWORD *)(v5 + 160) = v38;
      v39 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v37, (const char *const *)(v5 + 160));
      v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v39, (const char (*)[11])" drop_tag:");
      v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, &limit_configa->drop_tag);
      v42 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v41, (const char (*)[13])" check fail.");
      v43 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v42, (const char (*)[8])" limit:");
      v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &limit_configa->arrange_limit);
      v45 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v44, (const char (*)[8])" total:");
      v46 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v45,
              (const unsigned __int64 *)(v5 + 32));
      v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v46, (const char (*)[10])" (normal:");
      *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
      v48 = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::size(normal_entity_set);
      if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
        v48 = __asan_report_store8(v5 + 192, " (normal:");
      *(_QWORD *)(v5 + 192) = v48;
      v49 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v47,
              (const unsigned __int64 *)(v5 + 192));
      v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v49, (const char (*)[11])" activity:");
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
      v51 = std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::size(activity_entity_map);
      if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
        v51 = __asan_report_store8(v5 + 224, " activity:");
      *(_QWORD *)(v5 + 224) = v51;
      v52 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v50,
              (const unsigned __int64 *)(v5 + 224));
      v53 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v52, (const char (*)[2])")");
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v53, (const char (*)[18])" current configs:");
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 512));
      *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 256, " current configs:");
      *(std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v5 + 256) = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(normal_entity_set);
      *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 288, " current configs:");
      *(std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v5 + 288) = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::end(normal_entity_set);
      while ( 1 )
      {
        v54 = (char *)(v5 + 288);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Self *)(v5 + 256),
                (const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> >::_Self *)(v5 + 288)) )
          break;
        *(_WORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = 1024;
        n = (unsigned __int64)std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> > *const)(v5 + 256));
        if ( *(char *)(((v5 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 395) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 117) & 7) >= *(_BYTE *)(((v5 + 395) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 384, 12LL);
        }
        if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(n, 12LL);
        }
        *(_QWORD *)(v5 + 384) = *(_QWORD *)n;
        *(_DWORD *)(v5 + 392) = *(_DWORD *)(n + 8);
        scene_id = std::get<0ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v5 + 384));
        group_id = std::get<1ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v5 + 384));
        config_id = std::get<2ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v5 + 384));
        *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DropExcelConfig.cpp",
          "operator()",
          1230);
        v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v57 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v56, (const char (*)[10])"scene_id:");
        v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, scene_id);
        v59 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v58, (const char (*)[11])" group_id:");
        v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, group_id);
        v61 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v60, (const char (*)[12])" config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 576));
        *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::tuple<unsigned int,unsigned int,unsigned int> > *const)(v5 + 256));
      }
      *(_WORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = -1800;
      *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 320, v54);
      *(std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::const_iterator *)(v5 + 320) = std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::begin(activity_entity_map);
      *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 352, v54);
      *(std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::const_iterator *)(v5 + 352) = std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::end(activity_entity_map);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::_Self *)(v5 + 320),
                (const std::_Rb_tree_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::_Self *)(v5 + 352)) )
      {
        v83 = std::_Rb_tree_const_iterator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > > *const)(v5 + 320));
        group_entity_index = std::get<0ul,std::tuple<unsigned int,unsigned int,unsigned int> const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>(v83);
        referrer_ptr = (std::tuple_element<1,const std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > >::type *)std::get<1ul,std::tuple<unsigned int,unsigned int,unsigned int> const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>(v83);
        *(_WORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = 1024;
        if ( *(char *)(((v5 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 427) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 96 + 11) & 7) >= *(_BYTE *)(((v5 + 427) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 416, 12LL);
        }
        if ( ((unsigned __int8)group_entity_index & 7) >= *(_BYTE *)(((unsigned __int64)group_entity_index >> 3)
                                                                   + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)group_entity_index >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&group_entity_index->std::_Tuple_impl<0,unsigned int,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl
                        + 3) >> 3)
                      + 0x7FFF8000) != 0
          && (((unsigned __int8)group_entity_index + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&group_entity_index->std::_Tuple_impl<0,unsigned int,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl
                                                                            + 3) >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load_n(group_entity_index, 12LL);
        }
        *(std::_Tuple_impl<1,unsigned int,unsigned int> *)(v5 + 416) = group_entity_index->std::_Tuple_impl<1,unsigned int,unsigned int>;
        *(_DWORD *)(v5 + 424) = group_entity_index->std::_Tuple_impl<0,unsigned int,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl;
        scene_id_0 = std::get<0ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v5 + 416));
        group_id_0 = std::get<1ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v5 + 416));
        config_id_0 = std::get<2ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v5 + 416));
        if ( std::operator==<DropExcelConfigMgr::GroupReferrer>(0LL, referrer_ptr) )
        {
          *(_DWORD *)(((v5 + 640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 671) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 640, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 640),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "operator()",
            1237);
          v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v62, (const char (*)[17])"referrer is null");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 640));
          *(_DWORD *)(((v5 + 640) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          *(_DWORD *)(((v5 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 96 + 63) & 7) >= *(_BYTE *)(((v5 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DropExcelConfig.cpp",
            "operator()",
            1240);
          v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v64 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v63, (const char (*)[10])"scene_id:");
          v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, scene_id_0);
          v66 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v65, (const char (*)[11])" group_id:");
          v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, group_id_0);
          v68 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v67, (const char (*)[12])" config_id:");
          v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, config_id_0);
          v70 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  v69,
                  (const char (*)[38])" activity_conds(schedule_id,cond_id):");
          v71 = std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false> *const)referrer_ptr);
          v72 = common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>(
                  v70,
                  &v71->activity_cond_vec);
          v76 = " is_activity_group(source_type=4):";
          v73 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  v72,
                  (const char (*)[35])" is_activity_group(source_type=4):");
          v74 = (__int64)std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DropExcelConfigMgr::GroupReferrer,(__gnu_cxx::_Lock_policy)2,false,false> *const)referrer_ptr);
          v75 = *(_BYTE *)(((unsigned __int64)(v74 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(v76) = v75 != 0;
          v77 = v75 < 0;
          if ( v77 )
            v74 = __asan_report_load1(v74 + 24, v76, v77);
          common::milog::MiLogStream::operator<<(v73, *(_BYTE *)(v74 + 24));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 704));
          *(_DWORD *)(((v5 + 704) >> 3) + 0x7FFF8000) = -117901064;
        }
        *(_WORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = -1800;
        std::_Rb_tree_const_iterator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer> > > *const)(v5 + 320));
      }
      v4 = -1;
    }
    else
    {
      *(_DWORD *)(((v5 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 96 + 63) & 7) >= *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/txt_data_manual/DropExcelConfig.cpp",
        "operator()",
        1219);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
              (common::milog::MiLogStream *const)(v5 + 448),
              (const char (*)[9])"version:");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, __closure->__version);
      v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" type:");
      *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&limit_configa->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&limit_configa->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&limit_configa->type);
      }
      v19 = (__int64)data::enumValToStr(limit_configa->type, (__int64)" type:");
      if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
        v19 = __asan_report_store8(v5 + 64, " type:");
      *(_QWORD *)(v5 + 64) = v19;
      v20 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v5 + 64));
      v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" drop_tag:");
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &limit_configa->drop_tag);
      v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" check ok.");
      v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" limit:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &limit_configa->arrange_limit);
      v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" total:");
      v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v26,
              (const unsigned __int64 *)(v5 + 32));
      v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v27, (const char (*)[10])" (normal:");
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 0;
      v29 = std::set<std::tuple<unsigned int,unsigned int,unsigned int>>::size(normal_entity_set);
      if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
        v29 = __asan_report_store8(v5 + 96, " (normal:");
      *(_QWORD *)(v5 + 96) = v29;
      v30 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v28,
              (const unsigned __int64 *)(v5 + 96));
      v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" activity:");
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      v32 = std::map<std::tuple<unsigned int,unsigned int,unsigned int>,std::shared_ptr<DropExcelConfigMgr::GroupReferrer>>::size(activity_entity_map);
      if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        v32 = __asan_report_store8(v5 + 128, " activity:");
      *(_QWORD *)(v5 + 128) = v32;
      v33 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v31,
              (const unsigned __int64 *)(v5 + 128));
      common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v33, (const char (*)[2])")");
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 448));
      v4 = 0;
    }
  }
  result = v4;
  if ( v92 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF806C) = 0LL;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8070) = -168430091;
  }
  return result;
};
