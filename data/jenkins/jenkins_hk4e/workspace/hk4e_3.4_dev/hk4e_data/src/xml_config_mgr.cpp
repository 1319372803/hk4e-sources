// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/xml_config_mgr.cpp

// Line 20: range 000000000CD5B724-000000000CD5B742
void __cdecl XmlConfigMgr::XmlConfigMgr(XmlConfigMgr *const this)
{
  BehaviorTreeConfigMgr::BehaviorTreeConfigMgr(&this->behavior_tree_mgr);
};

// Line 26: range 000000000CD5B744-000000000CD5B757
HK4EDesignConfig *__cdecl XmlConfigMgr::getConfig(XmlConfigMgr *const this)
{
  return (HK4EDesignConfig *)&this[-1561].behavior_tree_mgr.behavior_tree_map_._M_h._M_bucket_count;
};

// Line 31: range 000000000CD5B758-000000000CD5B76B
const HK4EDesignConfig *__cdecl XmlConfigMgr::getConfig(const XmlConfigMgr *const this)
{
  return (const HK4EDesignConfig *)&this[-1561].behavior_tree_mgr.behavior_tree_map_._M_h._M_bucket_count;
};

// Line 37: range 000000000CD5B76C-000000000CD5B78A
void __cdecl XmlConfigMgr::clear(XmlConfigMgr *const this)
{
  BehaviorTreeConfigMgr::clear(&this->behavior_tree_mgr);
};

// Line 43: range 000000000CD5B78C-000000000CD5B7C9
int32_t __cdecl XmlConfigMgr::loadAllXml(XmlConfigMgr *const this, HK4EDesignConfig *config)
{
  if ( BehaviorTreeConfigMgr::loadConfig(&this->behavior_tree_mgr, config) )
    return -1;
  else
    return 0;
};

// Line 53: range 000000000CD5B7CA-000000000CD5B7D8
int32_t __cdecl XmlConfigMgr::rewriteConfig(XmlConfigMgr *const this)
{
  return 0;
};

// Line 59: range 000000000CD5B7DA-000000000CD5B80C
int32_t __cdecl XmlConfigMgr::checkConfig(XmlConfigMgr *const this)
{
  if ( BehaviorTreeConfigMgr::checkConfig(&this->behavior_tree_mgr) )
    return -1;
  else
    return 0;
};

// Line 69: range 000000000CD5B80E-000000000CD5B81C
int32_t __cdecl XmlConfigMgr::finalConfig(XmlConfigMgr *const this)
{
  return 0;
};

// Line 74: range 000000000CD5B81E-000000000CD5D66C
int32_t __cdecl BehaviorTreeConfigMgr::loadConfig(BehaviorTreeConfigMgr *const this, HK4EDesignConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  char *v10; // rsi
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference v11; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<std::string>::reference v15; // rax
  std::string *p_gcg_card_ai_base_dir; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  BehaviorTreeConfig *v19; // rax
  std::shared_ptr<BehaviorTreeConfig> *v20; // r8
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::string *v23; // rsi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::size_type v45; // rax
  int32_t ret; // [rsp+14h] [rbp-68Ch]
  std::vector<std::string> *__for_range; // [rsp+18h] [rbp-688h]
  data::GCGGameExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-678h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::reference v51; // [rsp+30h] [rbp-670h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGGameExcelConfig> >::type *game_id; // [rsp+38h] [rbp-668h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGGameExcelConfig> >::type *game_config; // [rsp+40h] [rbp-660h]
  data::GCGDeckExcelConfig *deck_config_ptr; // [rsp+48h] [rbp-658h]
  char v55[1616]; // [rsp+50h] [rbp-650h] BYREF

  v2 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1568LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "28 48 1 9 <unknown> 64 1 9 <unknown> 80 8 14 __for_begin:83 112 8 12 __for_end:83 144 8 15 __for"
                        "_begin:120 176 8 13 __for_end:120 208 8 9 <unknown> 240 16 19 tree_config_ptr:100 272 24 11 file"
                        "_vec:77 336 24 16 file_name_vec:86 400 32 9 <unknown> 464 32 9 <unknown> 528 32 16 xml_file_path"
                        ":83 592 32 17 tree_file_name:85 656 32 9 <unknown> 720 32 9 <unknown> 784 32 12 tree_name:94 848"
                        " 32 9 <unknown> 912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 11"
                        "68 32 9 <unknown> 1232 32 9 <unknown> 1296 32 13 tree_name:143 1360 32 9 <unknown> 1424 32 9 <un"
                        "known> 1488 48 17 ai_config_set:118";
  *(_QWORD *)(v2 + 16) = BehaviorTreeConfigMgr::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61953;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862731] = -218959360;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862745] = -219021312;
  v4[536862746] = 62194;
  v4[536862747] = -219021312;
  v4[536862748] = 62194;
  v4[536862749] = -219021312;
  v4[536862750] = 62194;
  v4[536862751] = -219021312;
  v4[536862752] = 62194;
  v4[536862753] = -219021312;
  v4[536862754] = 62194;
  v4[536862755] = -219021312;
  v4[536862756] = 62194;
  v4[536862757] = -219021312;
  v4[536862758] = 62194;
  v4[536862759] = -219021312;
  v4[536862760] = 62194;
  v4[536862761] = -219021312;
  v4[536862762] = 62194;
  v4[536862763] = -219021312;
  v4[536862764] = 62194;
  v4[536862765] = -219021312;
  v4[536862766] = 62194;
  v4[536862768] = -202116109;
  ret = 0;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 272));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 400),
    ".xml",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (char *)(v2 + 400);
  v6 = common::tools::FileUtils::getAllFilesWithExtension(
         &config->gcg_card_ai_base_dir,
         (const std::string *)(v2 + 400),
         (std::vector<std::string> *)(v2 + 272)) != 0;
  std::string::~string((void *)(v2 + 400));
  *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 464, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 464),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/xml_config_mgr.cpp",
      "loadConfig",
      80);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 464),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1A1907A0);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &config->gcg_card_ai_base_dir);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
    *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
    v9 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v2 + 272);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 80, v5);
    *(std::vector<std::string>::iterator *)(v2 + 80) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v5);
    *(std::vector<std::string>::iterator *)(v2 + 112) = std::vector<std::string>::end(__for_range);
    while ( 1 )
    {
      v10 = (char *)(v2 + 112);
      if ( !__gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 80),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 112)) )
        break;
      *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
      v11 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 80));
      std::string::basic_string(v2 + 528, v11);
      *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 592, 32LL);
      }
      common::tools::FileUtils::getFileNameByPath((std::string *)(v2 + 592), (const std::string *)(v2 + 528));
      v12 = ((v2 + 336) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 336));
      *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 656),
        ".",
        (const std::allocator<char> *)(v2 + 64));
      common::tools::StringUtils::splitToList(
        (const std::string *)(v2 + 592),
        (const std::string *)(v2 + 656),
        (std::vector<std::string> *)(v2 + 336),
        0);
      std::string::~string((void *)(v2 + 656));
      *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 336)) == 2 )
      {
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = 0;
        v15 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 336), 0LL);
        std::string::basic_string(v2 + 784, v15);
        if ( !std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::count(
                &this->behavior_tree_map_,
                (const std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::key_type *)(v2 + 784)) )
        {
          *(_WORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
          p_gcg_card_ai_base_dir = &config->gcg_card_ai_base_dir;
          if ( *(_WORD *)(((v2 + 240) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          common::tools::perf::make_shared<BehaviorTreeConfig,std::string &>(
            (common::tools::perf::allocator<BehaviorTreeConfig,BehaviorTreeConfig> *)(v2 + 240),
            p_gcg_card_ai_base_dir);
          if ( std::operator==<BehaviorTreeConfig>((const std::shared_ptr<BehaviorTreeConfig> *)(v2 + 240), 0LL) )
          {
            *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 848) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 879) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 879) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 848, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 848),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/xml_config_mgr.cpp",
              "loadConfig",
              103);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 848),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    v17,
                    (const char (*)[61])"loadConfig create BehaviorTreeConfig failed, tree_file_name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v2 + 592));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 848));
            *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            v19 = std::__shared_ptr_access<BehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 240));
            if ( BehaviorTreeConfig::loadFromFile(v19, (const std::string *)(v2 + 592)) )
            {
              *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 912) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 943) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 943) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 912, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 912),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/xml_config_mgr.cpp",
                "loadConfig",
                109);
              v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 912),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v22 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      v21,
                      (const char (*)[26])"loadConfig err, filename:");
              *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = 0;
              v23 = &config->gcg_card_ai_base_dir;
              if ( *(char *)(((v2 + 976) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1007) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 1007) >> 3) + 0x7FFF8000) )
              {
                v23 = (std::string *)32;
                __asan_report_store_n(v2 + 976, 32LL);
              }
              std::operator+<char>((std::string *)(v2 + 976), v23, (const std::string *)(v2 + 592));
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v2 + 976));
              std::string::~string((void *)(v2 + 976));
              *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = -117901064;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 912));
              *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::emplace<std::string&,std::shared_ptr<BehaviorTreeConfig>&>(
                &this->behavior_tree_map_,
                (std::string *)(v2 + 784),
                (std::shared_ptr<BehaviorTreeConfig> *)(v2 + 240),
                (std::string *)(v2 + 784),
                v20);
              *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1040) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1071) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1071) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1040, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1040),
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/xml_config_mgr.cpp",
                "loadConfig",
                114);
              v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v2 + 1040),
                      (const char (*)[22])"loadConfig tree_name:");
              v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v24,
                      (const std::string *)(v2 + 784));
              v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v25,
                      (const char (*)[13])", file_name:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)(v2 + 592));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1040));
              *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          std::shared_ptr<BehaviorTreeConfig>::~shared_ptr((std::shared_ptr<BehaviorTreeConfig> *const)(v2 + 240));
        }
        std::string::~string((void *)(v2 + 784));
      }
      else
      {
        *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 720, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 720),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/xml_config_mgr.cpp",
          "loadConfig",
          90);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 720),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v13, (const char (*)[37])byte_1A190840);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v2 + 592));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
        *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 336));
      std::string::~string((void *)(v2 + 592));
      std::string::~string((void *)(v2 + 528));
      *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
      v27 = ((v2 + 336) >> 3) + 2147450880;
      *(_WORD *)v27 = -1800;
      *(_BYTE *)(v27 + 2) = -8;
      *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
      *(_WORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -1800;
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 80));
    }
    *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    v28 = ((v2 + 1488) >> 3) + 2147450880;
    *(_DWORD *)v28 = 0;
    *(_WORD *)(v28 + 4) = 0;
    std::set<std::string>::set((std::set<std::string> *const)(v2 + 1488));
    __for_range_0 = &config->txt_config_mgr.gcg_game_config_mgr.gcg_game_excel_config_map;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v10);
    *(std::unordered_map<unsigned int,data::GCGGameExcelConfig>::iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::GCGGameExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v10);
    *(std::unordered_map<unsigned int,data::GCGGameExcelConfig>::iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::GCGGameExcelConfig>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGGameExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameExcelConfig>,false> *)(v2 + 144),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameExcelConfig>,false> *)(v2 + 176)) )
    {
      v51 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false> *const)(v2 + 144));
      game_id = std::get<0ul,unsigned int const,data::GCGGameExcelConfig>(v51);
      game_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGGameExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGGameExcelConfig>(v51);
      if ( *(_BYTE *)(((unsigned __int64)&game_config->game_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&game_config->game_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&game_config->game_type);
      }
      if ( game_config->game_type == AI || game_config->game_type == PVE )
      {
        if ( *(_BYTE *)(((unsigned __int64)&game_config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)game_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_config->enemy_card_group_id >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&game_config->enemy_card_group_id);
        }
        if ( game_config->enemy_card_group_id )
        {
          p_gcg_game_config_mgr = &config->txt_config_mgr.gcg_game_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&game_config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)game_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_config->enemy_card_group_id >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&game_config->enemy_card_group_id);
          }
          deck_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                              p_gcg_game_config_mgr,
                              game_config->enemy_card_group_id);
          if ( deck_config_ptr )
          {
            if ( (unsigned __int8)std::string::empty() )
            {
              *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1232) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1232, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1232),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/xml_config_mgr.cpp",
                "loadConfig",
                139);
              v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1232),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v39 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      v38,
                      (const char (*)[44])byte_1A190AC0);
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v39,
                      &game_config->enemy_card_group_id);
              v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, game_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1232));
              *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = 0;
              std::string::basic_string(v2 + 1296, &deck_config_ptr->behavior_tree_file_name);
              if ( !std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::count(
                      &this->behavior_tree_map_,
                      (const std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::key_type *)(v2 + 1296)) )
              {
                *(_DWORD *)(((v2 + 1360) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1360) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1391) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1391) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1360, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1360),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/xml_config_mgr.cpp",
                  "loadConfig",
                  147);
                v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1360),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v43 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        v42,
                        (const char (*)[40])byte_1A190B60);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v43,
                  (const std::string *)(v2 + 1296));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1360));
                *(_DWORD *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              std::string::~string((void *)(v2 + 1296));
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1168) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1199) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 1199) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1168, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1168),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/xml_config_mgr.cpp",
              "loadConfig",
              133);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1168),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v33,
                    (const char (*)[20])"loadConfig game_id:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, game_id);
            v36 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v35,
                    (const char (*)[23])", enemy_card_group_id:");
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    &game_config->enemy_card_group_id);
            common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v37, (const char (*)[15])" config failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1168));
            *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 1104) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1104) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1104, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1104),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/xml_config_mgr.cpp",
            "loadConfig",
            126);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1104),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v29,
                  (const char (*)[20])"loadConfig game_id:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, game_id);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            v31,
            (const char (*)[30])", enemy_card_group_id is zero");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1104));
          *(_DWORD *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false> *const)(v2 + 144));
    }
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( ret )
    {
      v9 = ret;
    }
    else
    {
      *(_DWORD *)(((v2 + 1424) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1424) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1424, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1424),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/xml_config_mgr.cpp",
        "loadConfig",
        157);
      v44 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)(v2 + 1424),
              (const char (*)[46])"loadConfig succ tree size behavior_tree_map_:");
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      v45 = std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::size(&this->behavior_tree_map_);
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        v45 = __asan_report_store8(v2 + 208, "loadConfig succ tree size behavior_tree_map_:");
      *(_QWORD *)(v2 + 208) = v45;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v44,
        (const unsigned __int64 *)(v2 + 208));
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1424));
      *(_DWORD *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -117901064;
      v9 = 0;
    }
    std::set<std::string>::~set((std::set<std::string> *const)(v2 + 1488));
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 272));
  if ( v55 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 188) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1568LL, v55);
  }
  return v9;
};

// Line 162: range 000000000CD5D66E-000000000CD5D9C2
int32_t __cdecl BehaviorTreeConfigMgr::checkConfig(BehaviorTreeConfigMgr *const this)
{
  __int64 v1; // rsi
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  BehaviorTreeConfig *v9; // rax
  int32_t result; // eax
  std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<BehaviorTreeConfig> >,false,true>::reference __in; // [rsp+18h] [rbp-E8h]
  const std::string *file_name; // [rsp+20h] [rbp-E0h]
  const std::shared_ptr<BehaviorTreeConfig> *behavior_config_ptr; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:163 64 8 13 __for_end:163 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BehaviorTreeConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, v1);
  *(std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::iterator *)(v3 + 32) = std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::begin(&this->behavior_tree_map_);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v1);
  *(std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::iterator *)(v3 + 64) = std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::end(&this->behavior_tree_map_);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<BehaviorTreeConfig>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<BehaviorTreeConfig> >,true> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<BehaviorTreeConfig> >,true> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_18;
    }
    __in = std::__detail::_Node_iterator<std::pair<std::string const,std::shared_ptr<BehaviorTreeConfig>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<BehaviorTreeConfig> >,false,true> *const)(v3 + 32));
    file_name = std::get<0ul,std::string const,std::shared_ptr<BehaviorTreeConfig>>(__in);
    behavior_config_ptr = std::get<1ul,std::string const,std::shared_ptr<BehaviorTreeConfig>>(__in);
    if ( std::operator==<BehaviorTreeConfig>(behavior_config_ptr, 0LL) )
      break;
    v9 = std::__shared_ptr_access<BehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)behavior_config_ptr);
    if ( BehaviorTreeConfig::checkConfig(v9) )
    {
      v2 = -1;
      v8 = 0;
      goto LABEL_18;
    }
    std::__detail::_Node_iterator<std::pair<std::string const,std::shared_ptr<BehaviorTreeConfig>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<BehaviorTreeConfig> >,false,true> *const)(v3 + 32));
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
    "./src/xml_config_mgr.cpp",
    "checkConfig",
    167);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
         v6,
         (const char (*)[55])"checkConfig behavior_config_ptr is nullptr, file_name:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, file_name);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v8 = 0;
LABEL_18:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 179: range 000000000CD5D9C4-000000000CD5DA1C
const BehaviorTreeConfig *__cdecl BehaviorTreeConfigMgr::findConfig(
        const BehaviorTreeConfigMgr *const this,
        const std::string *tree_id)
{
  const std::shared_ptr<BehaviorTreeConfig> *config; // [rsp+18h] [rbp-8h]

  if ( !std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::count(&this->behavior_tree_map_, tree_id) )
    return 0LL;
  config = std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::at(&this->behavior_tree_map_, tree_id);
  return std::__shared_ptr<BehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2>::get(config);
};
