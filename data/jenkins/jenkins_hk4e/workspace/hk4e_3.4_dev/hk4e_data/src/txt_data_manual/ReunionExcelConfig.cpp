// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ReunionExcelConfig.cpp

// Line 18: range 000000001464FE6E-0000000014650418
int32_t __cdecl ReunionExcelConfigMgr::rewriteConfig(ReunionExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char v10[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ReunionExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ReunionExcelConfigMgr::rewriteReunionSignInConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ReunionExcelConfig.cpp",
      "rewriteConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"rewriteReunionSignInConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ReunionExcelConfigMgr::rewriteReunionMissionConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ReunionExcelConfig.cpp",
      "rewriteConfig",
      26);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v7,
      (const char (*)[35])"rewriteReunionMissionConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ReunionExcelConfigMgr::rewriteReunionWatcherConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ReunionExcelConfig.cpp",
      "rewriteConfig",
      31);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v8,
      (const char (*)[35])"rewriteReunionWatcherConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ReunionExcelConfigMgr::rewriteReunionPrivilegeConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ReunionExcelConfig.cpp",
      "rewriteConfig",
      36);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v9,
      (const char (*)[37])"rewriteReunionPrivilegeConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 42: range 000000001465041A-0000000014650806
int32_t __cdecl ReunionExcelConfigMgr::rewriteReunionSignInConfig(
        ReunionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  data::ReunionSignInExcelConfig **M_current; // r14
  std::vector<data::ReunionSignInExcelConfig*>::iterator v7; // rax
  ReunionExcelConfigMgr::rewriteReunionSignInConfig::<lambda(auto:41, auto:42)> v8; // dl
  int32_t result; // eax
  data::ReunionSignInExcelConfigVec *__for_range; // [rsp+18h] [rbp-128h]
  std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>> *__for_range_0; // [rsp+20h] [rbp-120h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > >::reference __in; // [rsp+28h] [rbp-118h]
  std::vector<data::ReunionSignInExcelConfig*> *config_vec_0; // [rsp+38h] [rbp-108h]
  data::ReunionSignInExcelConfig *sign_in_config; // [rsp+40h] [rbp-100h]
  std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>>::mapped_type *config_vec; // [rsp+48h] [rbp-F8h]
  char v16[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:43 64 8 12 __for_end:43 96 8 9 <unknown> 128 8 14 __for_begin:48 160 8 12 __for_end:48";
  *(_QWORD *)(v2 + 16) = ReunionExcelConfigMgr::rewriteReunionSignInConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  __for_range = &this->reunion_sign_in_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::ReunionSignInExcelConfig>::iterator *)(v2 + 32) = std::vector<data::ReunionSignInExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::ReunionSignInExcelConfig>::iterator *)(v2 + 64) = std::vector<data::ReunionSignInExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !__gnu_cxx::operator!=<data::ReunionSignInExcelConfig *,std::vector<data::ReunionSignInExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ReunionSignInExcelConfig*,std::vector<data::ReunionSignInExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::ReunionSignInExcelConfig*,std::vector<data::ReunionSignInExcelConfig> > *)(v2 + 64)) )
      break;
    sign_in_config = __gnu_cxx::__normal_iterator<data::ReunionSignInExcelConfig *,std::vector<data::ReunionSignInExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ReunionSignInExcelConfig*,std::vector<data::ReunionSignInExcelConfig> > *const)(v2 + 32));
    config_vec = std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig *>>::operator[](
                   &this->reunion_sign_in_config_map,
                   &sign_in_config->id);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, &sign_in_config->id);
    *(_QWORD *)(v2 + 96) = sign_in_config;
    std::vector<data::ReunionSignInExcelConfig *>::push_back(
      config_vec,
      (std::vector<data::ReunionSignInExcelConfig*>::value_type *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<data::ReunionSignInExcelConfig *,std::vector<data::ReunionSignInExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ReunionSignInExcelConfig*,std::vector<data::ReunionSignInExcelConfig> > *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->reunion_sign_in_config_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>>::iterator *)(v2 + 128) = std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig *>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>>::iterator *)(v2 + 160) = std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig *>>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > >::_Self *)(v2 + 128),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > >::_Self *)(v2 + 160)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig *>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > > *const)(v2 + 128));
    std::get<0ul,unsigned int const,std::vector<data::ReunionSignInExcelConfig *>>(__in);
    config_vec_0 = std::get<1ul,unsigned int const,std::vector<data::ReunionSignInExcelConfig *>>(__in);
    M_current = std::vector<data::ReunionSignInExcelConfig *>::end(config_vec_0)._M_current;
    v7._M_current = std::vector<data::ReunionSignInExcelConfig *>::begin(config_vec_0)._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::ReunionSignInExcelConfig___std::vector_data::ReunionSignInExcelConfig_____ReunionExcelConfigMgr::rewriteReunionSignInConfig_TxtConfigMgr__::_lambda_auto_41_auto_42____(
      v7,
      (__gnu_cxx::__normal_iterator<data::ReunionSignInExcelConfig**,std::vector<data::ReunionSignInExcelConfig*> >)M_current,
      v8);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig *>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > > *const)(v2 + 128));
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

// Line 50: range 000000001472C43C-000000001472C4FD
bool __cdecl ReunionExcelConfigMgr::rewriteReunionSignInConfig::_lambda_auto_41__auto_42__::operator()_data::ReunionSignInExcelConfig__data::ReunionSignInExcelConfig__(
        const ReunionExcelConfigMgr::rewriteReunionSignInConfig::<lambda(auto:41, auto:42)> *const __closure,
        data::ReunionSignInExcelConfig *a_ptr,
        data::ReunionSignInExcelConfig *b_ptr)
{
  uint32_t day_index; // ecx

  if ( !a_ptr )
    return 0;
  if ( !b_ptr )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&a_ptr->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a_ptr->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a_ptr->day_index);
  }
  day_index = a_ptr->day_index;
  if ( *(_BYTE *)(((unsigned __int64)&b_ptr->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b_ptr->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&b_ptr->day_index);
  }
  return day_index < b_ptr->day_index;
};

// Line 67: range 0000000014650808-00000000146518CF
int32_t __cdecl ReunionExcelConfigMgr::rewriteReunionWatcherConfig(
        ReunionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  _BOOL4 v10; // edx
  unsigned __int64 v11; // rax
  bool v12; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // rax
  bool v17; // r15
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // r15d
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int>::reference v23; // rax
  unsigned int *v24; // rdx
  unsigned int v25; // r15d
  std::vector<unsigned int>::reference v26; // rax
  unsigned int *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned int *v30; // r15
  unsigned int *v31; // rcx
  unsigned int *v32; // r8
  unsigned __int64 v33; // rax
  int v34; // edx
  unsigned __int64 v35; // rax
  int v36; // eax
  data::ReunionWatcherExcelConfigMap *__for_range; // [rsp+20h] [rbp-370h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionWatcherExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-368h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReunionWatcherExcelConfig> >::type *id; // [rsp+30h] [rbp-360h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReunionWatcherExcelConfig> >::type *watcher_config; // [rsp+38h] [rbp-358h]
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::mapped_type *level_range_vec; // [rsp+40h] [rbp-350h]
  std::vector<std::string> *__for_range_0; // [rsp+48h] [rbp-348h]
  const std::string *raw_range_str; // [rsp+50h] [rbp-340h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *watcher_group_set; // [rsp+58h] [rbp-338h]
  char v47[816]; // [rsp+60h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 8 14 __for_begin:68 96 8 12 __for_end:68 128 8 14 __for_"
                        "begin:82 160 8 12 __for_end:82 192 24 20 raw_range_str_vec:75 256 24 12 range_vec:84 320 32 9 <u"
                        "nknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <un"
                        "known> 704 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReunionExcelConfigMgr::rewriteReunionWatcherConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -202116109;
  __for_range = &this->reunion_watcher_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReunionWatcherExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ReunionWatcherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReunionWatcherExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ReunionWatcherExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReunionWatcherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionWatcherExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionWatcherExcelConfig>,false> *)(v3 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionWatcherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionWatcherExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ReunionWatcherExcelConfig>(__in);
    watcher_config = std::get<1ul,unsigned int const,data::ReunionWatcherExcelConfig>(__in);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    v7 = (data::WatcherConfig *)watcher_config;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      p_watcher_config_mgr = (WatcherExcelConfigMgr *)id;
      __asan_report_load4(id);
    }
    if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, *id, v7) )
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
        "./src/txt_data_manual/ReunionExcelConfig.cpp",
        "rewriteReunionWatcherConfig",
        72);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             v8,
             (const char (*)[29])"addWatcherConfig failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v11 = ((v3 + 192) >> 3) + 2147450880;
      *(_WORD *)v11 = 0;
      *(_BYTE *)(v11 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 192));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 384),
        ";",
        (const std::allocator<char> *)(v3 + 32));
      v12 = common::tools::StringUtils::splitToList(
              &watcher_config->activate_level_range,
              (const std::string *)(v3 + 384),
              (std::vector<std::string> *)(v3 + 192),
              0) != 0;
      std::string::~string((void *)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v12 )
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
          "./src/txt_data_manual/ReunionExcelConfig.cpp",
          "rewriteReunionWatcherConfig",
          78);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v13,
                (const char (*)[21])"splitToList failed, ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &watcher_config->activate_level_range);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        level_range_vec = std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::operator[](
                            &this->reunion_watcher_level_range_map,
                            id);
        __for_range_0 = (std::vector<std::string> *)(v3 + 192);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, id);
        *(std::vector<std::string>::iterator *)(v3 + 128) = std::vector<std::string>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, id);
        *(std::vector<std::string>::iterator *)(v3 + 160) = std::vector<std::string>::end(__for_range_0);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 128),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 160)) )
        {
          raw_range_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
          v16 = ((v3 + 256) >> 3) + 2147450880;
          *(_WORD *)v16 = 0;
          *(_BYTE *)(v16 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 256));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 48);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 512),
            ",",
            (const std::allocator<char> *)(v3 + 48));
          v17 = common::tools::StringUtils::splitToList<unsigned int>(
                  raw_range_str,
                  (const std::string *)(v3 + 512),
                  (std::vector<unsigned int> *)(v3 + 256),
                  0) != 0;
          std::string::~string((void *)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 48);
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v17 )
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
              "./src/txt_data_manual/ReunionExcelConfig.cpp",
              "rewriteReunionWatcherConfig",
              87);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v18,
                    (const char (*)[21])"splitToList failed, ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, raw_range_str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v20 = 0;
          }
          else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 256)) == 2 )
          {
            v23 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 256), 0LL);
            v24 = v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            v25 = *v24;
            v26 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 256), 1uLL);
            v27 = v26;
            if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v26);
            }
            if ( v25 <= *v27 )
            {
              v30 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 256), 1uLL);
              v31 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 256), 0LL);
              std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int &,unsigned int &>(
                level_range_vec,
                v31,
                v30,
                v31,
                v32);
              v20 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 704, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 704),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ReunionExcelConfig.cpp",
                "rewriteReunionWatcherConfig",
                97);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 704),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v28,
                      (const char (*)[39])byte_1ADCEA80);
              common::milog::MiLogStream::operator<<<unsigned int>(v29, (const std::vector<unsigned int> *)(v3 + 256));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
              *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v20 = 0;
            }
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
              "./src/txt_data_manual/ReunionExcelConfig.cpp",
              "rewriteReunionWatcherConfig",
              92);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v21,
                    (const char (*)[21])byte_1ADCEA40);
            common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::vector<unsigned int> *)(v3 + 256));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
            *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v20 = 0;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 256));
          v33 = ((v3 + 256) >> 3) + 2147450880;
          *(_WORD *)v33 = -1800;
          *(_BYTE *)(v33 + 2) = -8;
          if ( v20 != 1 )
          {
            v34 = 0;
            goto LABEL_47;
          }
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
        }
        v34 = 1;
LABEL_47:
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v34 == 1 )
        {
          watcher_group_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                                &this->reunion_massion_watcher_group_map,
                                &watcher_config->watcher_group_id);
          if ( *(char *)(((unsigned __int64)&watcher_config->is_disuse >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(
              &watcher_config->is_disuse,
              &watcher_config->watcher_group_id,
              &watcher_config->is_disuse);
          if ( !watcher_config->is_disuse )
            std::set<unsigned int>::insert(watcher_group_set, id);
          v15 = 1;
        }
        else
        {
          v15 = 0;
        }
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 192));
      v10 = v15 == 1;
    }
    v35 = ((v3 + 192) >> 3) + 2147450880;
    *(_WORD *)v35 = -1800;
    *(_BYTE *)(v35 + 2) = -8;
    if ( !v10 )
    {
      v36 = 0;
      goto LABEL_59;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionWatcherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionWatcherExcelConfig>,false,false> *const)(v3 + 64));
  }
  v36 = 1;
LABEL_59:
  if ( v36 == 1 )
    v2 = 0;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 113: range 00000000146518D0-0000000014652430
int32_t __cdecl ReunionExcelConfigMgr::rewriteReunionMissionConfig(
        ReunionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *p_finish_reward_id_list; // rsi
  std::vector<unsigned int>::reference v6; // rax
  uint32_t *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  std::vector<unsigned int>::reference v12; // rax
  uint32_t *v13; // rdx
  char v14; // cl
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::vector<unsigned int>::size_type v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  char *v22; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-228h]
  uint32_t prev_score; // [rsp+1Ch] [rbp-224h]
  size_t i; // [rsp+20h] [rbp-220h]
  data::ReunionMissionExcelConfigMap *__for_range; // [rsp+28h] [rbp-218h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionMissionExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-210h]
  const unsigned int *id; // [rsp+38h] [rbp-208h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReunionMissionExcelConfig> >::type *config; // [rsp+40h] [rbp-200h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1F8h]
  char v42[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 13 reward_id:139 64 8 15 __for_begin:115 96 8 13 __for_end:115 128 8 15 __for_begin:139 1"
                        "60 8 13 __for_end:139 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReunionExcelConfigMgr::rewriteReunionMissionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  ret = 0;
  __for_range = &this->reunion_mission_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReunionMissionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ReunionMissionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReunionMissionExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ReunionMissionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_finish_reward_id_list = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ReunionMissionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionMissionExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionMissionExcelConfig>,false> *)(v2 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionMissionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionMissionExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ReunionMissionExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ReunionMissionExcelConfig>(__in);
    prev_score = 0;
    for ( i = 0LL; i < std::vector<unsigned int>::size(&config->target_score_list); ++i )
    {
      v6 = std::vector<unsigned int>::operator[](&config->target_score_list, i);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      if ( prev_score <= *v7 )
      {
        p_finish_reward_id_list = (char *)i;
        v12 = std::vector<unsigned int>::operator[](&config->target_score_list, i);
        v13 = v12;
        v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
        LOBYTE(p_finish_reward_id_list) = v14 != 0;
        if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
          __asan_report_load4(v12);
        prev_score = *v13;
      }
      else
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ReunionExcelConfig.cpp",
          "rewriteReunionMissionConfig",
          122);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v8, (const char (*)[38])byte_1ADCEC00);
        v10 = common::milog::MiLogStream::operator<<<unsigned int>(v9, &config->target_score_list);
        v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v10, (const char (*)[5])" id:");
        p_finish_reward_id_list = (char *)id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( !std::vector<unsigned int>::size(&config->target_score_list) )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ReunionExcelConfig.cpp",
        "rewriteReunionMissionConfig",
        130);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v15, (const char (*)[42])byte_1ADCEC60);
      p_finish_reward_id_list = (char *)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v17 = std::vector<unsigned int>::size(&config->target_score_list);
    if ( v17 != std::vector<unsigned int>::size(&config->finish_reward_id_list) )
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
        "./src/txt_data_manual/ReunionExcelConfig.cpp",
        "rewriteReunionMissionConfig",
        135);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v18, (const char (*)[60])byte_1ADCECC0);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
      v21 = common::milog::MiLogStream::operator<<<unsigned int>(v20, &config->target_score_list);
      p_finish_reward_id_list = (char *)&config->finish_reward_id_list;
      common::milog::MiLogStream::operator<<<unsigned int>(v21, &config->finish_reward_id_list);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->finish_reward_id_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, p_finish_reward_id_list);
    *(std::vector<unsigned int>::iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, p_finish_reward_id_list);
    *(std::vector<unsigned int>::iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v22 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v23 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
      v24 = (int *)v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v22) = v26 != 0;
        __asan_report_store4(v2 + 48, v22);
      }
      *(_DWORD *)(v2 + 48) = v25;
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              *(_DWORD *)(v2 + 48),
                              ITEM_LIMIT_REUNION_REWARD) != 1 )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ReunionExcelConfig.cpp",
          "rewriteReunionMissionConfig",
          143);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v27, (const char (*)[4])"ID:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
        v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])byte_1ADCED60);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])byte_1ADCEDA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionMissionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionMissionExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v42 == (char *)v2 )
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

// Line 152: range 0000000014652432-0000000014653663
int32_t __cdecl ReunionExcelConfigMgr::rewriteReunionPrivilegeConfig(
        ReunionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  data::ReunionPrivilegeType type; // eax
  const char *v10; // rax
  char *v11; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // edx
  int v15; // eax
  data::ReunionPrivilegeType v16; // ecx
  char v17; // al
  char *v18; // rsi
  int v19; // ecx
  char v20; // al
  int v21; // eax
  unsigned __int64 v22; // rax
  char *v23; // rsi
  bool v24; // r15
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  _BOOL4 v27; // r15d
  data::ReunionPrivilegeType v28; // ecx
  char v29; // al
  char *v30; // rsi
  const char *v31; // rax
  char *v32; // rsi
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  char v38; // al
  int v39; // edx
  unsigned __int64 v40; // rax
  int32_t result; // eax
  data::ReunionPrivilegeExcelConfigMap *__for_range; // [rsp+28h] [rbp-368h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig>,false,false>::reference v43; // [rsp+30h] [rbp-360h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig> >::type *id; // [rsp+38h] [rbp-358h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig> >::type *config; // [rsp+40h] [rbp-350h]
  std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::mapped_type *id_map; // [rsp+48h] [rbp-348h]
  const std::vector<data::ReunionPrivilegeConfig> *__for_range_0; // [rsp+50h] [rbp-340h]
  const data::ReunionPrivilegeConfig *privilege_config; // [rsp+58h] [rbp-338h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *type_set_0; // [rsp+60h] [rbp-330h]
  std::vector<std::string> *__for_range_1; // [rsp+68h] [rbp-328h]
  const std::string *raw_str; // [rsp+70h] [rbp-320h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *type_set; // [rsp+78h] [rbp-318h]
  char v53[784]; // [rsp+80h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 48 1 9 <unknown> 64 4 16 dungeon_type:167 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown>"
                        " 128 4 16 blossom_type:188 144 4 9 <unknown> 160 8 15 __for_begin:153 192 8 13 __for_end:153 224"
                        " 8 15 __for_begin:161 256 8 13 __for_end:161 288 8 15 __for_begin:186 320 8 13 __for_end:186 352"
                        " 24 11 raw_vec:179 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 6"
                        "72 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReunionExcelConfigMgr::rewriteReunionPrivilegeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -202116109;
  __for_range = &this->reunion_privilege_excel_config_map;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReunionPrivilegeExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::ReunionPrivilegeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReunionPrivilegeExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::ReunionPrivilegeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig>,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig>,false> *)(v3 + 192)) )
    {
      v8 = 1;
      goto LABEL_82;
    }
    v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig>,false,false> *const)(v3 + 160));
    id = std::get<0ul,unsigned int const,data::ReunionPrivilegeExcelConfig>(v43);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReunionPrivilegeExcelConfig>(v43);
    if ( *(_BYTE *)(((unsigned __int64)&config->total_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->total_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->total_num);
    }
    if ( !config->total_num )
      break;
    id_map = std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::operator[](
               &this->reunion_privilege_type_map,
               id);
    __for_range_0 = &config->privilege_type;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, id);
    *(std::vector<data::ReunionPrivilegeConfig>::const_iterator *)(v3 + 224) = std::vector<data::ReunionPrivilegeConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, id);
    *(std::vector<data::ReunionPrivilegeConfig>::const_iterator *)(v3 + 256) = std::vector<data::ReunionPrivilegeConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::ReunionPrivilegeConfig const*,std::vector<data::ReunionPrivilegeConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ReunionPrivilegeConfig*,std::vector<data::ReunionPrivilegeConfig> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<const data::ReunionPrivilegeConfig*,std::vector<data::ReunionPrivilegeConfig> > *)(v3 + 256)) )
    {
      privilege_config = __gnu_cxx::__normal_iterator<data::ReunionPrivilegeConfig const*,std::vector<data::ReunionPrivilegeConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ReunionPrivilegeConfig*,std::vector<data::ReunionPrivilegeConfig> > *const)(v3 + 224));
      if ( *(_BYTE *)(((unsigned __int64)&privilege_config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&privilege_config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&privilege_config->type);
      }
      type = privilege_config->type;
      if ( type == REUNION_PRIVILEGE_TYPE_DUNGEON )
      {
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, v3 + 256);
        *(_DWORD *)(v3 + 64) = 0;
        v10 = (const char *)std::string::c_str(&privilege_config->sub_type);
        v11 = (char *)(v3 + 64);
        if ( (unsigned int)data::enumNameToVal(v10, v3 + 64) )
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
            "./src/txt_data_manual/ReunionExcelConfig.cpp",
            "rewriteReunionPrivilegeConfig",
            170);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v12,
                  (const char (*)[23])"enumNameToVal failed, ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &privilege_config->sub_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          v15 = *(unsigned __int8 *)(((unsigned __int64)&privilege_config->type >> 3) + 0x7FFF8000);
          if ( (_BYTE)v15 != 0 && (char)v15 <= 3 )
            __asan_report_load4(&privilege_config->type);
          v16 = privilege_config->type;
          v17 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          if ( v17 != 0 && v17 <= 3 )
          {
            LOBYTE(v11) = v17 != 0;
            __asan_report_store4(v3 + 80, v11);
          }
          *(_DWORD *)(v3 + 80) = v16;
          v18 = (char *)(v3 + 80);
          type_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                       id_map,
                       (std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 80));
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          v19 = *(_DWORD *)(v3 + 64);
          v20 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
          if ( v20 != 0 && v20 <= 3 )
          {
            LOBYTE(v18) = v20 != 0;
            __asan_report_store4(v3 + 96, v18);
          }
          *(_DWORD *)(v3 + 96) = v19;
          std::set<unsigned int>::insert(type_set, (std::set<unsigned int>::value_type *)(v3 + 96));
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
          v14 = 1;
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( !v14 )
        {
          v21 = 0;
          goto LABEL_78;
        }
      }
      else if ( type == REUNION_PRIVILEGE_TYPE_BLOSSOM )
      {
        v22 = ((v3 + 352) >> 3) + 2147450880;
        *(_WORD *)v22 = 0;
        *(_BYTE *)(v22 + 2) = 0;
        std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 352));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 544),
          ";",
          (const std::allocator<char> *)(v3 + 48));
        v23 = (char *)(v3 + 544);
        v24 = common::tools::StringUtils::splitToList(
                &privilege_config->sub_type,
                (const std::string *)(v3 + 544),
                (std::vector<std::string> *)(v3 + 352),
                0) != 0;
        std::string::~string((void *)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 48);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v24 )
        {
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ReunionExcelConfig.cpp",
            "rewriteReunionPrivilegeConfig",
            182);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v25,
                  (const char (*)[21])"splitToList failed, ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, &privilege_config->sub_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v27 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((unsigned __int64)&privilege_config->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&privilege_config->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&privilege_config->type);
          }
          v28 = privilege_config->type;
          v29 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
          if ( v29 != 0 && v29 <= 3 )
          {
            LOBYTE(v23) = v29 != 0;
            __asan_report_store4(v3 + 112, v23);
          }
          *(_DWORD *)(v3 + 112) = v28;
          v30 = (char *)(v3 + 112);
          type_set_0 = std::map<unsigned int,std::set<unsigned int>>::operator[](
                         id_map,
                         (std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 112));
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          __for_range_1 = (std::vector<std::string> *)(v3 + 352);
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, v30);
          *(std::vector<std::string>::iterator *)(v3 + 288) = std::vector<std::string>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 320, v30);
          *(std::vector<std::string>::iterator *)(v3 + 320) = std::vector<std::string>::end(__for_range_1);
          while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                    (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 288),
                    (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 320)) )
          {
            raw_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 288));
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 128, v3 + 320);
            *(_DWORD *)(v3 + 128) = 0;
            v31 = (const char *)std::string::c_str(raw_str);
            v32 = (char *)(v3 + 128);
            if ( (unsigned int)data::enumNameToVal(v31, v3 + 128) )
            {
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 672, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 672),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ReunionExcelConfig.cpp",
                "rewriteReunionPrivilegeConfig",
                191);
              v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v34 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v33,
                      (const char (*)[23])"enumNameToVal failed, ");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, raw_str);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v35 = 0;
            }
            else
            {
              *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
              v36 = *(unsigned __int8 *)(((v3 + 128) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v36 != 0 && (char)v36 <= 3 )
                __asan_report_load4(v3 + 128);
              v37 = *(_DWORD *)(v3 + 128);
              v38 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
              if ( v38 != 0 && v38 <= 3 )
              {
                LOBYTE(v32) = v38 != 0;
                __asan_report_store4(v3 + 144, v32);
              }
              *(_DWORD *)(v3 + 144) = v37;
              std::set<unsigned int>::insert(type_set_0, (std::set<unsigned int>::value_type *)(v3 + 144));
              *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
              v35 = 1;
            }
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v35 != 1 )
            {
              v39 = 0;
              goto LABEL_73;
            }
            __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 288));
          }
          v39 = 1;
LABEL_73:
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
          v27 = v39 == 1;
        }
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 352));
        v40 = ((v3 + 352) >> 3) + 2147450880;
        *(_WORD *)v40 = -1800;
        *(_BYTE *)(v40 + 2) = -8;
        if ( !v27 )
        {
          v21 = 0;
          goto LABEL_78;
        }
      }
      __gnu_cxx::__normal_iterator<data::ReunionPrivilegeConfig const*,std::vector<data::ReunionPrivilegeConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ReunionPrivilegeConfig*,std::vector<data::ReunionPrivilegeConfig> > *const)(v3 + 224));
    }
    v21 = 1;
LABEL_78:
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v8 = 0;
      goto LABEL_82;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReunionPrivilegeExcelConfig>,false,false> *const)(v3 + 160));
  }
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
    "./src/txt_data_manual/ReunionExcelConfig.cpp",
    "rewriteReunionPrivilegeConfig",
    157);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 416),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v6, (const char (*)[38])byte_1ADCEFC0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
  v2 = -1;
  v8 = 0;
LABEL_82:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 207: range 0000000014653664-0000000014653855
int32_t __cdecl ReunionExcelConfigMgr::checkConfig(
        ReunionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-84h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReunionExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  ret = 0;
  if ( ReunionExcelConfigMgr::checkReunionWatcherDataExcelConfig(this, txt_config_mgr) )
  {
    ret = -1;
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
      "./src/txt_data_manual/ReunionExcelConfig.cpp",
      "checkConfig",
      213);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"checkReunionWatcherDataExcelConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
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

// Line 219: range 0000000014653856-0000000014653BAB
int32_t __cdecl ReunionExcelConfigMgr::checkReunionWatcherDataExcelConfig(
        ReunionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  std::map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+20h] [rbp-E0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *watcher_group_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *watcher_group_set; // [rsp+38h] [rbp-C8h]
  char v14[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:221 64 8 13 __for_end:221 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReunionExcelConfigMgr::checkReunionWatcherDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->reunion_massion_watcher_group_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64)) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 32));
    watcher_group_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v11);
    watcher_group_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v11);
    if ( std::set<unsigned int>::empty(watcher_group_set) )
    {
      ret = -1;
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
        "./src/txt_data_manual/ReunionExcelConfig.cpp",
        "checkReunionWatcherDataExcelConfig",
        227);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             v5,
             (const char (*)[27])"Reunion WatcherGroup id : ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, watcher_group_id);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v7,
        (const char (*)[26])" has no available watcher");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

// Line 234: range 0000000014653BAC-0000000014653DF3
const data::ReunionSignInExcelConfig *__fastcall ReunionExcelConfigMgr::findReunionSignInExcelConfigByDayIndex(
        const ReunionExcelConfigMgr *const this,
        __int64 sign_in_group_id,
        uint32_t day_index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>> *p_reunion_sign_in_config_map; // rdx
  std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>> *v7; // rdx
  bool v8; // al
  const data::ReunionSignInExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > >::pointer v10; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > >::pointer v11; // rax
  std::vector<data::ReunionSignInExcelConfig*>::const_reference v12; // rax
  char v14[176]; // [rsp+10h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 20 sign_in_group_id:233 64 8 8 iter:235 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReunionExcelConfigMgr::findReunionSignInExcelConfigByDayIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = sign_in_group_id;
  p_reunion_sign_in_config_map = &this->reunion_sign_in_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, sign_in_group_id);
  *(std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig *>>::find(p_reunion_sign_in_config_map, (const std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>>::key_type *)(v3 + 48));
  v7 = &this->reunion_sign_in_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig*>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig *>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else if ( day_index )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig *>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > > *const)(v3 + 64));
    if ( day_index <= std::vector<data::ReunionSignInExcelConfig *>::size(&v10->second) )
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig *>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReunionSignInExcelConfig*> > > *const)(v3 + 64));
      v12 = std::vector<data::ReunionSignInExcelConfig *>::operator[](&v11->second, day_index - 1);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v12);
      result = *v12;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
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

// Line 252: range 0000000014653DF4-0000000014653FB5
const std::set<unsigned int> *__fastcall ReunionExcelConfigMgr::findReunionMissionWatcherSet(
        const ReunionExcelConfigMgr *const this,
        __int64 watcher_group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_reunion_massion_watcher_group_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 watcher_group_id:251 64 8 8 iter:253 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReunionExcelConfigMgr::findReunionMissionWatcherSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_group_id;
  p_reunion_massion_watcher_group_map = &this->reunion_massion_watcher_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_group_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_reunion_massion_watcher_group_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->reunion_massion_watcher_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 262: range 0000000014653FB6-0000000014654378
__int64 __fastcall ReunionExcelConfigMgr::isLevelInWatcherLevelRange(
        const ReunionExcelConfigMgr *const this,
        __int64 watcher_id,
        uint32_t player_level)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>> *p_reunion_watcher_level_range_map; // rdx
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  int v11; // eax
  __int64 result; // rax
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+10h] [rbp-110h]
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >::reference v15; // [rsp+18h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *lower; // [rsp+20h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *upper; // [rsp+28h] [rbp-F8h]
  char v18[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 14 watcher_id:261 64 8 8 iter:263 96 8 9 <unknown> 128 8 15 __for_begin:268 160 8 13 __for_end:268";
  *(_QWORD *)(v4 + 16) = ReunionExcelConfigMgr::isLevelInWatcherLevelRange;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = watcher_id;
  p_reunion_watcher_level_range_map = &this->reunion_watcher_level_range_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, watcher_id);
  *(std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v4 + 64) = std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::find(p_reunion_watcher_level_range_map, (const std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::key_type *)(v4 + 48));
  v8 = &this->reunion_watcher_level_range_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::end(v8);
  v9 = (char *)(v4 + 96);
  v10 = std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::_Self *)(v4 + 64),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::_Self *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    v3 = 1;
  }
  else
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > > *const)(v4 + 64))->second;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v9);
    *(std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)(v4 + 128) = std::vector<std::pair<unsigned int,unsigned int>>::begin(__for_range);
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v9);
    *(std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)(v4 + 160) = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v4 + 128),
              (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v4 + 160)) )
    {
      v15 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v4 + 128));
      lower = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v15);
      upper = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v15);
      if ( *(_BYTE *)(((unsigned __int64)lower >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)lower & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lower >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(lower);
      }
      if ( player_level >= *lower )
      {
        if ( *(_BYTE *)(((unsigned __int64)upper >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)upper & 7) + 3) >= *(_BYTE *)(((unsigned __int64)upper >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(upper);
        }
        if ( player_level < *upper )
        {
          v3 = 1;
          v11 = 0;
          goto LABEL_25;
        }
      }
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v4 + 128));
    }
    v11 = 1;
LABEL_25:
    if ( v11 == 1 )
      v3 = 0;
  }
  result = v3;
  if ( v18 == (char *)v4 )
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

// Line 279: range 000000001465437A-000000001465452D
const data::ReunionScheduleExcelConfig *__cdecl ReunionExcelConfigMgr::findCurVersionReunionScheduleConfig(
        const ReunionExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::ReunionScheduleExcelConfig *result; // rax
  data::ReunionScheduleExcelConfigMap *p_reunion_schedule_excel_config_map; // rdx
  data::ReunionScheduleExcelConfigMap *v7; // rdx
  bool v8; // al
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false>::__node_type *)"2 32 8 8 iter:285 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false>::__node_type *)ReunionExcelConfigMgr::findCurVersionReunionScheduleConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( std::unordered_map<unsigned int,data::ReunionScheduleExcelConfig>::size(&this->reunion_schedule_excel_config_map) == 1 )
  {
    p_reunion_schedule_excel_config_map = &this->reunion_schedule_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[4], v1);
    v2[4]._M_cur = std::unordered_map<unsigned int,data::ReunionScheduleExcelConfig>::begin(p_reunion_schedule_excel_config_map)._M_cur;
    v7 = &this->reunion_schedule_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[8], v1);
    v2[8]._M_cur = std::unordered_map<unsigned int,data::ReunionScheduleExcelConfig>::end(v7)._M_cur;
    v8 = std::__detail::operator==<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false>(v2 + 4, v2 + 8);
    *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
      result = 0LL;
    else
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false,false>::operator->(v2 + 4)->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReunionScheduleExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 295: range 000000001465452E-000000001465493B
bool __fastcall ReunionExcelConfigMgr::isPrivilegeTypeMatch(
        const ReunionExcelConfigMgr *const this,
        __int64 privilege_id,
        uint32_t privilege_type,
        uint32_t sub_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>> *p_reunion_privilege_type_map; // rdx
  std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>> *v8; // rdx
  bool v9; // al
  bool result; // al
  std::map<unsigned int,std::set<unsigned int>> *p_second; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v12; // rdx
  char *v13; // rsi
  bool v14; // al
  std::set<unsigned int> *v15; // rdx
  std::set<unsigned int> *v16; // rdx
  char v19[320]; // [rsp+20h] [rbp-140h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 16 privilege_id:294 64 4 18 privilege_type:294 80 4 12 sub_type:294 96 8 11 id_iter:296 1"
                        "28 8 9 <unknown> 160 8 17 sub_type_iter:301 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ReunionExcelConfigMgr::isPrivilegeTypeMatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -202116352;
  *(_DWORD *)(v4 + 48) = privilege_id;
  *(_DWORD *)(v4 + 64) = privilege_type;
  *(_DWORD *)(v4 + 80) = sub_type;
  p_reunion_privilege_type_map = &this->reunion_privilege_type_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, privilege_id);
  *(std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::find(p_reunion_privilege_type_map, (const std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::key_type *)(v4 + 48));
  v8 = &this->reunion_privilege_type_map;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v4 + 48);
  *(std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v4 + 128) = std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::end(v8);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *)(v4 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *)(v4 + 128));
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0;
  }
  else
  {
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>> > > *const)(v4 + 96))->second;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v4 + 128);
    *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v4 + 160) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                     p_second,
                                                                                     (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v4 + 64));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    v12 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>> > > *const)(v4 + 96))->second;
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 192, v4 + 64);
    *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v4 + 192) = std::map<unsigned int,std::set<unsigned int>>::end(v12);
    v13 = (char *)(v4 + 192);
    v14 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v4 + 160),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v4 + 192));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      result = 0;
    }
    else
    {
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      v15 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v4 + 160))->second;
      if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 256, v13);
      *(std::set<unsigned int>::iterator *)(v4 + 256) = std::set<unsigned int>::end(v15);
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      v16 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v4 + 160))->second;
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 224, v13);
      *(std::set<unsigned int>::const_iterator *)(v4 + 224) = std::set<unsigned int>::find(
                                                                v16,
                                                                (const std::set<unsigned int>::key_type *)(v4 + 80));
      result = std::operator!=(
                 (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v4 + 224),
                 (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v4 + 256));
    }
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 310: range 000000001465493C-0000000014654B91
__int64 __fastcall ReunionExcelConfigMgr::getDailyBonusCountLimit(
        const ReunionExcelConfigMgr *const this,
        uint32_t privilege_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::ReunionPrivilegeExcelConfig *privilege_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 privilege_id:309 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReunionExcelConfigMgr::getDailyBonusCountLimit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = privilege_id;
  privilege_config_ptr = data::ReunionExcelConfigMgrBase::findReunionPrivilegeExcelConfig(
                           this,
                           *(unsigned int *)(v2 + 48));
  if ( privilege_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->daily_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)privilege_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->daily_num >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&privilege_config_ptr->daily_num);
    }
    result = privilege_config_ptr->daily_num;
  }
  else
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
      3u,
      "./src/txt_data_manual/ReunionExcelConfig.cpp",
      "getDailyBonusCountLimit",
      314);
    v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[54])"findReunionPrivilegeExcelConfig failed, privilege_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
