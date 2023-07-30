// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GroupTagExcelConfig.cpp

// Line 19: range 0000000014467EFE-00000000144684F9
int32_t __cdecl GroupTagExcelConfigMgr::checkConfig(
        GroupTagExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  std::pair<std::_Rb_tree_const_iterator<std::string >,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  data::GroupTagExcelConfigMap *__for_range; // [rsp+10h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupTagExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GroupTagExcelConfig> >::type *config; // [rsp+28h] [rbp-178h]
  char v16[368]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 8 14 __for_begin:21 80 8 12 __for_end:21 112 32 9 <unknown> 176 32 9 <unknown> 240 48 15 tag_name_set:20";
  *(_QWORD *)(v3 + 16) = GroupTagExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862729] = -202116109;
  std::set<std::string>::set((std::set<std::string> *const)(v3 + 240));
  __for_range = &this->group_tag_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GroupTagExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::GroupTagExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GroupTagExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::GroupTagExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GroupTagExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GroupTagExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GroupTagExcelConfig>,false> *)(v3 + 80)) )
    {
      v8 = 1;
      goto LABEL_20;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupTagExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupTagExcelConfig>,false,false> *const)(v3 + 48));
    std::get<0ul,unsigned int const,data::GroupTagExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GroupTagExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GroupTagExcelConfig>(v14);
    if ( !GroupTagExcelConfigMgr::isGroupTag(&config->tag_name) )
    {
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GroupTagExcelConfig.cpp",
        "checkConfig",
        25);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             v6,
             (const char (*)[24])"invalid group tag name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &config->tag_name);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_20;
    }
    v9 = std::set<std::string>::insert((std::set<std::string> *const)(v3 + 240), &config->tag_name);
    if ( !v9.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupTagExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupTagExcelConfig>,false,false> *const)(v3 + 48));
  }
  if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 176, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 176),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/GroupTagExcelConfig.cpp",
    "checkConfig",
    30);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 176),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v10,
          (const char (*)[26])"duplicate group tag name:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &config->tag_name);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
  *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v8 = 0;
LABEL_20:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
    v2 = 0;
  std::set<std::string>::~set((std::set<std::string> *const)(v3 + 240));
  result = v2;
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
