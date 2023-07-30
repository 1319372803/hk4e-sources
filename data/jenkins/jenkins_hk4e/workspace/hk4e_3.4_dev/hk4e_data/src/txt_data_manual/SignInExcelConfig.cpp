// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/SignInExcelConfig.cpp

// Line 21: range 000000000CB00540-000000000CB0079D
int32_t __cdecl SignInExcelConfigMgr::rewriteConfig(SignInExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  int v6; // r14d
  int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  char v10[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SignInExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = SignInExcelConfigMgr::rewriteSignInCondConfig(this, txt_config_mgr) != 0;
  v6 = v5 | (SignInExcelConfigMgr::rewriteSignInDayConfig(this, txt_config_mgr) != 0);
  v7 = (SignInExcelConfigMgr::rewriteSignInPeriodConfig(this, txt_config_mgr) != 0) | v6;
  if ( v7 | (SignInExcelConfigMgr::rewriteBonusActivityConfig(this, txt_config_mgr) != 0) )
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
      "./src/txt_data_manual/SignInExcelConfig.cpp",
      "rewriteConfig",
      27);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v8, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
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

// Line 34: range 000000000CB0079E-000000000CB009FB
int32_t __cdecl SignInExcelConfigMgr::checkConfig(SignInExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  int v6; // r14d
  int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  char v10[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SignInExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = SignInExcelConfigMgr::checkSignInCondConfig(this, txt_config_mgr) != 0;
  v6 = v5 | (SignInExcelConfigMgr::checkSignInDayConfig(this, txt_config_mgr) != 0);
  v7 = (SignInExcelConfigMgr::checkSignInPeriodConfig(this, txt_config_mgr) != 0) | v6;
  if ( v7 | (SignInExcelConfigMgr::checkBonusActivityConfig(this, txt_config_mgr) != 0) )
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
      "./src/txt_data_manual/SignInExcelConfig.cpp",
      "checkConfig",
      40);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])"checkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
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

// Line 48: range 000000000CB009FC-000000000CB00CEE
const data::SignInDayExcelConfig *__fastcall SignInExcelConfigMgr::findSignIdRewardItemConfig(
        const SignInExcelConfigMgr *const this,
        __int64 config_id,
        uint32_t day_count)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>> *p_id_day_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::SignInDayExcelConfig *result; // rax
  bool v10; // al
  std::unordered_map<unsigned int,data::SignInDayExcelConfig> *day_item_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 config_id:47 48 4 12 day_count:47 64 8 18 config_map_iter:49 96 8 9 <unknown> 128 8 7 "
                        "iter:55 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SignInExcelConfigMgr::findSignIdRewardItemConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = config_id;
  *(_DWORD *)(v3 + 48) = day_count;
  p_id_day_config_map = &this->id_day_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, config_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::find(p_id_day_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->id_day_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    day_item_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,data::SignInDayExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::SignInDayExcelConfig>::find(
                                                                                                   day_item_map,
                                                                                                   (const std::unordered_map<unsigned int,data::SignInDayExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<unsigned int,data::SignInDayExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::SignInDayExcelConfig>::end(day_item_map);
    v10 = std::__detail::operator==<std::pair<unsigned int const,data::SignInDayExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInDayExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInDayExcelConfig>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInDayExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInDayExcelConfig>,false,false> *const)(v3 + 128))->second;
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

// Line 65: range 000000000CB00CF0-000000000CB00ED3
int32_t __cdecl SignInExcelConfigMgr::rewriteSignInCondConfig(
        SignInExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::SignInCondExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::SignInCondExcelConfig> >::type *cond_config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:66 64 8 12 __for_end:66";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>::__node_type *)SignInExcelConfigMgr::rewriteSignInCondConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->sign_in_cond_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::SignInCondExcelConfig>(__in);
    cond_config = std::get<1ul,unsigned int const,data::SignInCondExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::SignInCondConfig,data::SignInCondType data::SignInCondConfig::*>(
      &cond_config->cond_list,
      (data::SignInCondType *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 74: range 000000000CB00ED4-000000000CB013BC
int32_t __cdecl SignInExcelConfigMgr::checkSignInCondConfig(
        const SignInExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::SignInCondExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::SignInCondExcelConfig> >::type *config_id; // [rsp+30h] [rbp-120h]
  std::vector<data::SignInCondConfig> *__for_range_0; // [rsp+40h] [rbp-110h]
  const data::SignInCondConfig *cond; // [rsp+48h] [rbp-108h]
  char v19[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:76 64 8 12 __for_end:76 96 8 14 __for_begin:79 128 8 12 __for_end:79 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SignInExcelConfigMgr::checkSignInCondConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->sign_in_cond_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SignInCondExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SignInCondExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false> *)(v2 + 64)) )
      break;
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,data::SignInCondExcelConfig>(v15);
    __for_range_0 = &std::get<1ul,unsigned int const,data::SignInCondExcelConfig>(v15)->cond_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::SignInCondConfig>::const_iterator *)(v2 + 96) = std::vector<data::SignInCondConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::SignInCondConfig>::const_iterator *)(v2 + 128) = std::vector<data::SignInCondConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::SignInCondConfig*,std::vector<data::SignInCondConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::SignInCondConfig*,std::vector<data::SignInCondConfig> > *)(v2 + 128)) )
    {
      cond = __gnu_cxx::__normal_iterator<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::SignInCondConfig*,std::vector<data::SignInCondConfig> > *const)(v2 + 96));
      if ( SignInExcelConfigMgr::checkSignInCondConfig(this, txt_config_mgr, cond) )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/SignInExcelConfig.cpp",
          "checkSignInCondConfig",
          83);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])byte_1A1205C0);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, config_id);
        v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])byte_1A120600);
        v10 = common::milog::MiLogStream::operator<<<data::SignInCondType,(data::SignInCondType*)0>(v9, &cond->type);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1A120640);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::SignInCondConfig*,std::vector<data::SignInCondConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 93: range 000000000CB013BE-000000000CB0176D
int32_t __cdecl SignInExcelConfigMgr::rewriteSignInDayConfig(
        SignInExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  data::SignInDayExcelConfig *v11; // rdx
  int32_t result; // eax
  data::SignInDayExcelConfigVec *__for_range; // [rsp+18h] [rbp-E8h]
  data::SignInDayExcelConfig *day_config; // [rsp+20h] [rbp-E0h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::mapped_type *day_config_map; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:94 64 8 12 __for_end:94 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SignInExcelConfigMgr::rewriteSignInDayConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->sign_in_day_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::SignInDayExcelConfig>::iterator *)(v3 + 32) = std::vector<data::SignInDayExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::SignInDayExcelConfig>::iterator *)(v3 + 64) = std::vector<data::SignInDayExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::SignInDayExcelConfig *,std::vector<data::SignInDayExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::SignInDayExcelConfig*,std::vector<data::SignInDayExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::SignInDayExcelConfig*,std::vector<data::SignInDayExcelConfig> > *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    day_config = __gnu_cxx::__normal_iterator<data::SignInDayExcelConfig *,std::vector<data::SignInDayExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::SignInDayExcelConfig*,std::vector<data::SignInDayExcelConfig> > *const)(v3 + 32));
    common::tools::MiscUtils::removeEmptyElement<data::SignInRewardItemConfig,unsigned int data::SignInRewardItemConfig::*>(
      &day_config->reward_item_list,
      (unsigned int *)8);
    day_config_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::operator[](
                       &this->id_day_config_map_,
                       &day_config->config_id);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::SignInDayExcelConfig>,unsigned int>(
           day_config_map,
           &day_config->day_count) )
    {
      break;
    }
    v11 = std::unordered_map<unsigned int,data::SignInDayExcelConfig>::operator[](
            day_config_map,
            &day_config->day_count);
    data::SignInDayExcelConfig::operator=(v11, day_config);
    __gnu_cxx::__normal_iterator<data::SignInDayExcelConfig *,std::vector<data::SignInDayExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::SignInDayExcelConfig*,std::vector<data::SignInDayExcelConfig> > *const)(v3 + 32));
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
    "./src/txt_data_manual/SignInExcelConfig.cpp",
    "rewriteSignInDayConfig",
    100);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v6, (const char (*)[37])byte_1A120700);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &day_config->config_id);
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" day_count:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &day_config->day_count);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_16:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 109: range 000000000CB0176E-000000000CB0301E
int32_t __cdecl SignInExcelConfigMgr::checkSignInDayConfig(
        const SignInExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SignInCondExcelConfigMap *p_sign_in_cond_excel_config_map; // rsi
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>> *p_id_day_config_map; // rsi
  char *v7; // rsi
  std::vector<unsigned int>::iterator v8; // rax
  std::insert_iterator<std::vector<unsigned int> > v9; // rax
  std::vector<unsigned int> *container; // r14
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v12; // rax
  std::insert_iterator<std::vector<unsigned int> > v13; // r8
  std::vector<unsigned int>::iterator v14; // rax
  std::insert_iterator<std::vector<unsigned int> > v15; // rax
  std::vector<unsigned int> *v16; // r14
  unsigned int *v17; // r15
  std::vector<unsigned int>::iterator v18; // rax
  std::insert_iterator<std::vector<unsigned int> > v19; // r8
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t v22; // r14d
  unsigned __int64 v23; // rax
  data::SignInCondExcelConfigMap *v24; // rdx
  data::SignInCondExcelConfigMap *v25; // rdx
  char *v26; // rsi
  bool v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  std::unordered_map<unsigned int,data::SignInDayExcelConfig>::size_type v30; // rcx
  char v31; // al
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  uint32_t total_day_count; // ecx
  char v35; // al
  char *v36; // rsi
  bool v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInDayExcelConfig>,false,false>::pointer v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  unsigned __int64 v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  int v54; // eax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  unsigned __int64 v57; // rax
  unsigned int *__last2; // [rsp+8h] [rbp-4A8h]
  unsigned int *__last2a; // [rsp+8h] [rbp-4A8h]
  unsigned int *__first2; // [rsp+10h] [rbp-4A0h]
  unsigned int *__first2a; // [rsp+10h] [rbp-4A0h]
  unsigned int *__last1; // [rsp+18h] [rbp-498h]
  unsigned int *__last1a; // [rsp+18h] [rbp-498h]
  int32_t ret; // [rsp+3Ch] [rbp-474h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>> *__for_range; // [rsp+40h] [rbp-470h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false,false>::reference v68; // [rsp+48h] [rbp-468h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> > >::type *config_id; // [rsp+50h] [rbp-460h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> > >::type *day_config_map; // [rsp+58h] [rbp-458h]
  data::SignInCondExcelConfig *cond_config; // [rsp+60h] [rbp-450h]
  const data::SignInDayExcelConfig *day_config; // [rsp+68h] [rbp-448h]
  const std::vector<data::SignInRewardItemConfig> *__for_range_0; // [rsp+70h] [rbp-440h]
  const data::SignInRewardItemConfig *reward_item_config; // [rsp+78h] [rbp-438h]
  char v75[1072]; // [rsp+80h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 32 4 13 day_count:139 48 8 15 __for_begin:122 80 8 13 __for_end:122 112 8 8 iter:124 144 8 9 "
                        "<unknown> 176 8 8 iter:141 208 8 9 <unknown> 240 8 15 __for_begin:156 272 8 13 __for_end:156 304"
                        " 24 8 vec1:111 368 24 8 vec2:112 432 24 12 diff_vec:115 496 32 9 <unknown> 560 32 9 <unknown> 62"
                        "4 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 32 9 <unknown> 944"
                        " 40 18 item_param_bin:159";
  *(_QWORD *)(v2 + 16) = SignInExcelConfigMgr::checkSignInDayConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
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
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862732] = -218959360;
  v4[536862733] = 62194;
  v4[536862734] = -218959360;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862744] = -219021312;
  v4[536862745] = 62194;
  v4[536862746] = -219021312;
  v4[536862747] = 62194;
  v4[536862748] = -219021312;
  v4[536862749] = 62194;
  v4[536862750] = -218103808;
  v4[536862751] = -202116109;
  p_sign_in_cond_excel_config_map = &this->sign_in_cond_excel_config_map;
  if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 327) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 71) & 7) >= *(_BYTE *)(((v2 + 327) >> 3) + 0x7FFF8000) )
  {
    p_sign_in_cond_excel_config_map = (data::SignInCondExcelConfigMap *)24;
    __asan_report_store_n(v2 + 304, 24LL);
  }
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::SignInCondExcelConfig>>(
    (std::vector<unsigned int> *)(v2 + 304),
    p_sign_in_cond_excel_config_map);
  p_id_day_config_map = &this->id_day_config_map_;
  if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 391) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 121) & 7) >= *(_BYTE *)(((v2 + 391) >> 3) + 0x7FFF8000) )
  {
    p_id_day_config_map = (std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>> *)24;
    __asan_report_store_n(v2 + 368, 24LL);
  }
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>>(
    (std::vector<unsigned int> *)(v2 + 368),
    p_id_day_config_map);
  v7 = (char *)(v2 + 368);
  if ( std::operator!=<unsigned int,std::allocator<unsigned int>>(
         (const std::vector<unsigned int> *)(v2 + 304),
         (const std::vector<unsigned int> *)(v2 + 368)) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 432));
    v8._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 432))._M_current;
    v9 = std::inserter<std::vector<unsigned int>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
           (std::vector<unsigned int> *)(v2 + 432),
           v8);
    container = v9.container;
    M_current = v9.iter._M_current;
    __last2 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 368))._M_current;
    __first2 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 368))._M_current;
    __last1 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 304))._M_current;
    v12._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 304))._M_current;
    v13.container = container;
    v13.iter._M_current = M_current;
    std::set_difference<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::insert_iterator<std::vector<unsigned int>>>(
      v12,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last1,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__first2,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last2,
      v13);
    v14._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 432))._M_current;
    v15 = std::inserter<std::vector<unsigned int>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
            (std::vector<unsigned int> *)(v2 + 432),
            v14);
    v16 = v15.container;
    v17 = v15.iter._M_current;
    __last2a = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 304))._M_current;
    __first2a = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 304))._M_current;
    __last1a = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 368))._M_current;
    v18._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 368))._M_current;
    v19.container = v16;
    v19.iter._M_current = v17;
    std::set_difference<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::insert_iterator<std::vector<unsigned int>>>(
      v18,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last1a,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__first2a,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last2a,
      v19);
    if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 496, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 496),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SignInExcelConfig.cpp",
      "checkSignInDayConfig",
      118);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 496),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v20, (const char (*)[64])byte_1A120980);
    common::milog::MiLogStream::operator<<<unsigned int>(v21, (const std::vector<unsigned int> *)(v2 + 432));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
    *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
    v22 = -1;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 432));
    v23 = ((v2 + 432) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
  }
  else
  {
    ret = 0;
    __for_range = &this->id_day_config_map_;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 48, v7);
    *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 80, v7);
    *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false> *)(v2 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false> *)(v2 + 80)) )
    {
      v68 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false,false> *const)(v2 + 48));
      config_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>(v68);
      day_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>(v68);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      v24 = &this->sign_in_cond_excel_config_map;
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 112, v2 + 80);
      *(std::unordered_map<unsigned int,data::SignInCondExcelConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::find(v24, config_id);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
      v25 = &this->sign_in_cond_excel_config_map;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 144, config_id);
      *(std::unordered_map<unsigned int,data::SignInCondExcelConfig>::const_iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::end(v25);
      v26 = (char *)(v2 + 144);
      v27 = std::__detail::operator==<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false> *)(v2 + 112),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false> *)(v2 + 144));
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
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
          4u,
          "./src/txt_data_manual/SignInExcelConfig.cpp",
          "checkSignInDayConfig",
          127);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v28, (const char (*)[62])byte_1A1209E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        cond_config = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *const)(v2 + 112))->second;
        v30 = std::unordered_map<unsigned int,data::SignInDayExcelConfig>::size(day_config_map);
        v31 = *(_BYTE *)(((unsigned __int64)&cond_config->total_day_count >> 3) + 0x7FFF8000);
        LOBYTE(v26) = v31 != 0;
        if ( v31 != 0 && v31 <= 3 )
          __asan_report_load4(&cond_config->total_day_count);
        if ( v30 == cond_config->total_day_count )
        {
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 32, v26);
          for ( *(_DWORD *)(v2 + 32) = 1; ; ++*(_DWORD *)(v2 + 32) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&cond_config->total_day_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&cond_config->total_day_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&cond_config->total_day_count);
            }
            total_day_count = cond_config->total_day_count;
            v35 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
            LOBYTE(v26) = v35 != 0;
            if ( v35 != 0 && v35 <= 3 )
              __asan_report_load4(v2 + 32);
            if ( total_day_count < *(_DWORD *)(v2 + 32) )
              break;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 176, v26);
            *(std::unordered_map<unsigned int,data::SignInDayExcelConfig>::const_iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::SignInDayExcelConfig>::find(day_config_map, (const std::unordered_map<unsigned int,data::SignInDayExcelConfig>::key_type *)(v2 + 32));
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 208, v2 + 32);
            *(std::unordered_map<unsigned int,data::SignInDayExcelConfig>::const_iterator *)(v2 + 208) = std::unordered_map<unsigned int,data::SignInDayExcelConfig>::end(day_config_map);
            v36 = (char *)(v2 + 208);
            v37 = std::__detail::operator==<std::pair<unsigned int const,data::SignInDayExcelConfig>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInDayExcelConfig>,false> *)(v2 + 176),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInDayExcelConfig>,false> *)(v2 + 208));
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
            if ( v37 )
            {
              *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 688, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 688),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/SignInExcelConfig.cpp",
                "checkSignInDayConfig",
                144);
              v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 688),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v39 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v38,
                      (const char (*)[10])byte_1A120AC0);
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v39,
                      (const unsigned int *)(v2 + 32));
              v41 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      v40,
                      (const char (*)[26])byte_1A120B00);
              v26 = (char *)config_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, config_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
              *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              v42 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInDayExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInDayExcelConfig>,false,false> *const)(v2 + 176));
              day_config = &v42->second;
              if ( std::vector<data::SignInRewardItemConfig>::empty(&v42->second.reward_item_list) )
              {
                *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 752) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 752, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 752),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/SignInExcelConfig.cpp",
                  "checkSignInDayConfig",
                  152);
                v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 752),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v44 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        v43,
                        (const char (*)[30])byte_1A120B40);
                v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, config_id);
                v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v45,
                        (const char (*)[12])" day_count:");
                v26 = (char *)(v2 + 32);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v46,
                  (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
                *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              else
              {
                __for_range_0 = &day_config->reward_item_list;
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 240, v36);
                *(std::vector<data::SignInRewardItemConfig>::const_iterator *)(v2 + 240) = std::vector<data::SignInRewardItemConfig>::begin(__for_range_0);
                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 272, v36);
                *(std::vector<data::SignInRewardItemConfig>::const_iterator *)(v2 + 272) = std::vector<data::SignInRewardItemConfig>::end(__for_range_0);
                while ( 1 )
                {
                  v26 = (char *)(v2 + 272);
                  if ( !__gnu_cxx::operator!=<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>(
                          (const __gnu_cxx::__normal_iterator<const data::SignInRewardItemConfig*,std::vector<data::SignInRewardItemConfig> > *)(v2 + 240),
                          (const __gnu_cxx::__normal_iterator<const data::SignInRewardItemConfig*,std::vector<data::SignInRewardItemConfig> > *)(v2 + 272)) )
                    break;
                  reward_item_config = __gnu_cxx::__normal_iterator<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::SignInRewardItemConfig*,std::vector<data::SignInRewardItemConfig> > *const)(v2 + 240));
                  v47 = ((v2 + 944) >> 3) + 2147450880;
                  *(_DWORD *)v47 = 0;
                  *(_BYTE *)(v47 + 4) = 0;
                  proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v2 + 944));
                  if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&reward_item_config->item_id);
                  }
                  proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v2 + 944), reward_item_config->item_id);
                  if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->count >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)reward_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->count >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4(&reward_item_config->count);
                  }
                  proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v2 + 944), reward_item_config->count);
                  if ( TxtConfigMgr::checkItemParamBin(
                         txt_config_mgr,
                         (const proto::ItemParamBin *)(v2 + 944),
                         ITEM_LIMIT_SIGN_IN) )
                  {
                    *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 816) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 816, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 816),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/SignInExcelConfig.cpp",
                      "checkSignInDayConfig",
                      164);
                    v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 816),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v49 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v48,
                            (const char (*)[8])"ItemID:");
                    v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v49,
                            &reward_item_config->item_id);
                    v51 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v50,
                            (const char (*)[9])byte_1A120BC0);
                    v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v51,
                            &reward_item_config->count);
                    v53 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                            v52,
                            (const char (*)[25])byte_1A120C00);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, config_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 816));
                    *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  else
                  {
                    v54 = *(unsigned __int8 *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000);
                    if ( (_BYTE)v54 != 0 && (char)v54 <= 3 )
                      __asan_report_load4(&reward_item_config->item_id);
                    if ( !TxtConfigMgr::isItemAllowedByOutputControl(
                            txt_config_mgr,
                            reward_item_config->item_id,
                            ITEM_LIMIT_SIGN_IN) )
                    {
                      *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 880) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 880, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 880),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/SignInExcelConfig.cpp",
                        "checkSignInDayConfig",
                        171);
                      v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 880),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v56 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                              v55,
                              (const char (*)[42])byte_1A120C40);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v56,
                        &reward_item_config->item_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 880));
                      *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v2 + 944));
                  v57 = ((v2 + 944) >> 3) + 2147450880;
                  *(_DWORD *)v57 = -117901064;
                  *(_BYTE *)(v57 + 4) = -8;
                  __gnu_cxx::__normal_iterator<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::SignInRewardItemConfig*,std::vector<data::SignInRewardItemConfig> > *const)(v2 + 240));
                }
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
              }
            }
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 32);
          }
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
        }
        else
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
            4u,
            "./src/txt_data_manual/SignInExcelConfig.cpp",
            "checkSignInDayConfig",
            135);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 624),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v33 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(v32, (const char (*)[76])byte_1A120A40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
          *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false,false> *const)(v2 + 48));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    v22 = ret;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 368));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 304));
  if ( v75 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 128) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v22;
};

// Line 183: range 000000000CB03020-000000000CB03032
int32_t __cdecl SignInExcelConfigMgr::rewriteSignInPeriodConfig(
        SignInExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 188: range 000000000CB03034-000000000CB03046
int32_t __cdecl SignInExcelConfigMgr::checkSignInPeriodConfig(
        const SignInExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 194: range 000000000CB03048-000000000CB03419
int32_t __cdecl SignInExcelConfigMgr::rewriteBonusActivityConfig(
        SignInExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::BonusActivityExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BonusActivityExcelConfig> >::type *bonus_activity_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::BonusActivityExcelConfig> >::type *bonus_activity_config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:196 64 8 13 __for_end:196 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SignInExcelConfigMgr::rewriteBonusActivityConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->bonus_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false> *const)(v2 + 32));
    bonus_activity_id = std::get<0ul,unsigned int const,data::BonusActivityExcelConfig>(__in);
    bonus_activity_config = std::get<1ul,unsigned int const,data::BonusActivityExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::SignInCondConfig,data::SignInCondType data::SignInCondConfig::*>(
      &bonus_activity_config->cond_list,
      (data::SignInCondType *)8);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &bonus_activity_config->reward_item_list,
      (unsigned int *)8);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    v6 = (data::WatcherConfig *)bonus_activity_config;
    if ( *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bonus_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      p_watcher_config_mgr = (WatcherExcelConfigMgr *)bonus_activity_id;
      __asan_report_load4(bonus_activity_id);
    }
    if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, *bonus_activity_id, v6) )
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/SignInExcelConfig.cpp",
        "rewriteBonusActivityConfig",
        202);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             v7,
             (const char (*)[44])"addWatcherConfig failed, bonus_activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, bonus_activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v15 == (char *)v2 )
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
  return result;
};

// Line 210: range 000000000CB0341A-000000000CB04001
int32_t __cdecl SignInExcelConfigMgr::checkBonusActivityConfig(
        const SignInExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned __int64 v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-274h]
  data::BonusActivityExcelConfigMap *__for_range; // [rsp+20h] [rbp-270h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false>::reference v27; // [rsp+28h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,data::BonusActivityExcelConfig> >::type *bonus_activity_id; // [rsp+30h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BonusActivityExcelConfig> >::type *bonus_activity_config; // [rsp+38h] [rbp-258h]
  const std::vector<data::SignInCondConfig> *__for_range_0; // [rsp+40h] [rbp-250h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+48h] [rbp-248h]
  const data::IdCountConfig *id_count_config; // [rsp+50h] [rbp-240h]
  const data::SignInCondConfig *cond; // [rsp+58h] [rbp-238h]
  char v34[560]; // [rsp+60h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 8 15 __for_begin:212 80 8 13 __for_end:212 112 8 15 __for_begin:215 144 8 13 __for_end:215"
                        " 176 8 15 __for_begin:225 208 8 13 __for_end:225 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 "
                        "<unknown> 432 40 18 item_param_bin:228";
  *(_QWORD *)(v2 + 16) = SignInExcelConfigMgr::checkBonusActivityConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
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
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->bonus_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false> *)(v2 + 80)) )
      break;
    v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false> *const)(v2 + 48));
    bonus_activity_id = std::get<0ul,unsigned int const,data::BonusActivityExcelConfig>(v27);
    bonus_activity_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BonusActivityExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BonusActivityExcelConfig>(v27);
    __for_range_0 = &bonus_activity_config->cond_list;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v5);
    *(std::vector<data::SignInCondConfig>::const_iterator *)(v2 + 112) = std::vector<data::SignInCondConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v5);
    *(std::vector<data::SignInCondConfig>::const_iterator *)(v2 + 144) = std::vector<data::SignInCondConfig>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 144);
      if ( !__gnu_cxx::operator!=<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::SignInCondConfig*,std::vector<data::SignInCondConfig> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<const data::SignInCondConfig*,std::vector<data::SignInCondConfig> > *)(v2 + 144)) )
        break;
      cond = __gnu_cxx::__normal_iterator<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::SignInCondConfig*,std::vector<data::SignInCondConfig> > *const)(v2 + 112));
      if ( SignInExcelConfigMgr::checkSignInCondConfig(this, txt_config_mgr, cond) )
      {
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/SignInExcelConfig.cpp",
          "checkBonusActivityConfig",
          219);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 240),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])"BonusActivityID:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, bonus_activity_id);
        v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v9, (const char (*)[23])byte_1A120600);
        v11 = common::milog::MiLogStream::operator<<<data::SignInCondType,(data::SignInCondType*)0>(v10, &cond->type);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])byte_1A120640);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::SignInCondConfig*,std::vector<data::SignInCondConfig> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &bonus_activity_config->reward_item_list;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v6);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 176) = std::vector<data::IdCountConfig>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v6);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 208) = std::vector<data::IdCountConfig>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 176),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 208)) )
    {
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 176));
      v12 = ((v2 + 432) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_BYTE *)(v12 + 4) = 0;
      proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v2 + 432));
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v2 + 432), id_count_config->id);
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v2 + 432), id_count_config->count);
      if ( TxtConfigMgr::checkItemParamBin(
             txt_config_mgr,
             (const proto::ItemParamBin *)(v2 + 432),
             ITEM_LIMIT_BONUS_ACTIVITY) )
      {
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/SignInExcelConfig.cpp",
          "checkBonusActivityConfig",
          233);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])"ItemID:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &id_count_config->id);
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])byte_1A120BC0);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &id_count_config->count);
        v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v17, (const char (*)[31])byte_1A120F20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, bonus_activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v19 = *(unsigned __int8 *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000);
        if ( (_BYTE)v19 != 0 && (char)v19 <= 3 )
          __asan_report_load4(&id_count_config->id);
        if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, id_count_config->id, ITEM_LIMIT_BONUS_ACTIVITY) )
        {
          *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 368, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 368),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/SignInExcelConfig.cpp",
            "checkBonusActivityConfig",
            240);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v20, (const char (*)[47])byte_1A120F60);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &id_count_config->id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
          *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v2 + 432));
      v22 = ((v2 + 432) >> 3) + 2147450880;
      *(_DWORD *)v22 = -117901064;
      *(_BYTE *)(v22 + 4) = -8;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 176));
    }
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false> *const)(v2 + 48));
  }
  result = ret;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 251: range 000000000CB04002-000000000CB04DB8
int32_t __cdecl SignInExcelConfigMgr::checkSignInCondConfig(
        const SignInExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::SignInCondConfig *cond)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  std::vector<int>::const_reference v8; // rax
  unsigned int *v9; // rdx
  __int64 v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  std::vector<int>::const_reference v14; // rax
  unsigned int *v15; // rdx
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  std::vector<int>::const_reference v20; // rax
  unsigned int *v21; // rdx
  __int64 v22; // rsi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // eax
  std::vector<int>::const_reference v26; // rax
  unsigned int *v27; // rdx
  __int64 v28; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // eax
  std::vector<int>::const_reference v32; // rax
  unsigned int *v33; // rdx
  __int64 v34; // rsi
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int v37; // eax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int32_t result; // eax
  char v43[624]; // [rsp+20h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "12 48 4 16 player_level:261 64 4 12 quest_id:271 80 4 19 parent_quest_id:281 96 4 24 average_ava"
                        "tar_level:291 112 4 20 max_avatar_level:301 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unkn"
                        "own> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = SignInExcelConfigMgr::checkSignInCondConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
  if ( std::vector<int>::empty(&cond->param_list) )
  {
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
      "./src/txt_data_manual/SignInExcelConfig.cpp",
      "checkSignInCondConfig",
      254);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v7, (const char (*)[25])"cond.param_list is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    v3 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond->type);
    }
    switch ( cond->type )
    {
      case SIGN_IN_COND_PLAYER_LEVEL:
        v8 = std::vector<int>::operator[](&cond->param_list, 0LL);
        v9 = (unsigned int *)v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        v10 = *v9;
        if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 48, v10);
        *(_DWORD *)(v4 + 48) = v10;
        if ( data::PlayerExcelConfigMgrBase::findPlayerLevelExcelConfig(
               &txt_config_mgr->player_config_mgr,
               *(unsigned int *)(v4 + 48)) )
        {
          v13 = 1;
        }
        else
        {
          if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/SignInExcelConfig.cpp",
            "checkSignInCondConfig",
            264);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  v11,
                  (const char (*)[47])"findPlayerLevelExcelConfig fail, player_level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
          v3 = -1;
          v13 = 0;
        }
        if ( v13 )
          goto LABEL_69;
        break;
      case SIGN_IN_COND_FINISH_QUEST:
        v14 = std::vector<int>::operator[](&cond->param_list, 0LL);
        v15 = (unsigned int *)v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        v16 = *v15;
        if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 64, v16);
        *(_DWORD *)(v4 + 64) = v16;
        if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(
               &txt_config_mgr->quest_config_mgr,
               *(unsigned int *)(v4 + 64)) )
        {
          v19 = 1;
        }
        else
        {
          if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/SignInExcelConfig.cpp",
            "checkSignInCondConfig",
            274);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v17,
                  (const char (*)[37])"findQuestExcelConfig fail, quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
          v3 = -1;
          v19 = 0;
        }
        if ( v19 )
          goto LABEL_69;
        break;
      case SIGN_IN_COND_FINISH_PARENT_QUEST:
        v20 = std::vector<int>::operator[](&cond->param_list, 0LL);
        v21 = (unsigned int *)v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        v22 = *v21;
        if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 80, v22);
        *(_DWORD *)(v4 + 80) = v22;
        if ( data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
               &txt_config_mgr->quest_config_mgr,
               *(unsigned int *)(v4 + 80)) )
        {
          v25 = 1;
        }
        else
        {
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
            "./src/txt_data_manual/SignInExcelConfig.cpp",
            "checkSignInCondConfig",
            284);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  v23,
                  (const char (*)[48])"findMainQuestExcelConfig fail, parent_quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
          v3 = -1;
          v25 = 0;
        }
        if ( v25 )
          goto LABEL_69;
        break;
      case SIGN_IN_COND_AVERAGE_AVATAR_LEVEL:
        v26 = std::vector<int>::operator[](&cond->param_list, 0LL);
        v27 = (unsigned int *)v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        v28 = *v27;
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 96, v28);
        *(_DWORD *)(v4 + 96) = v28;
        if ( data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(
               &txt_config_mgr->avatar_config_mgr,
               *(unsigned int *)(v4 + 96)) )
        {
          v31 = 1;
        }
        else
        {
          if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 384, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 384),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/SignInExcelConfig.cpp",
            "checkSignInCondConfig",
            294);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  v29,
                  (const char (*)[55])"findAvatarLevelExcelConfig fail, average_avatar_level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v4 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
          v3 = -1;
          v31 = 0;
        }
        if ( v31 )
          goto LABEL_69;
        break;
      case SIGN_IN_COND_MAX_AVATAR_LEVEL:
        v32 = std::vector<int>::operator[](&cond->param_list, 0LL);
        v33 = (unsigned int *)v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        v34 = *v33;
        if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 112, v34);
        *(_DWORD *)(v4 + 112) = v34;
        if ( data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(
               &txt_config_mgr->avatar_config_mgr,
               *(unsigned int *)(v4 + 112)) )
        {
          v37 = 1;
        }
        else
        {
          if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/SignInExcelConfig.cpp",
            "checkSignInCondConfig",
            304);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  v35,
                  (const char (*)[51])"findAvatarLevelExcelConfig fail, max_avatar_level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
          v3 = -1;
          v37 = 0;
        }
        if ( v37 )
          goto LABEL_69;
        break;
      case SIGN_IN_COND_AVATAR_NUM:
LABEL_69:
        v3 = 0;
        break;
      default:
        if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/SignInExcelConfig.cpp",
          "checkSignInCondConfig",
          314);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v38, (const char (*)[35])byte_1A121300);
        common::milog::MiLogStream::operator<<<data::SignInCondType,(data::SignInCondType*)0>(v39, &cond->type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
        v3 = -1;
        break;
    }
  }
  result = v3;
  if ( v43 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};
