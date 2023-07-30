// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp

// Line 18: range 000000000CB2B7CE-000000000CB2B9D9
int32_t __cdecl TrialAvatarActivityExcelConfigMgr::rewriteConfig(
        TrialAvatarActivityExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = TrialAvatarActivityExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TrialAvatarActivityExcelConfigMgr::rewriteTrialConfig(this, txt_config_mgr)
    || TrialAvatarActivityExcelConfigMgr::rewriteTrialAvatarConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
      "rewriteConfig",
      21);
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

// Line 28: range 000000000CB2B9DA-000000000CB2BBE5
int32_t __cdecl TrialAvatarActivityExcelConfigMgr::checkConfig(
        TrialAvatarActivityExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = TrialAvatarActivityExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TrialAvatarActivityExcelConfigMgr::checkTrialConfig(this, txt_config_mgr)
    || TrialAvatarActivityExcelConfigMgr::checkTrialAvatarConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
      "checkConfig",
      31);
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

// Line 38: range 000000000CB2BBE6-000000000CB2C38E
int32_t __cdecl TrialAvatarActivityExcelConfigMgr::rewriteTrialConfig(
        TrialAvatarActivityExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::vector<unsigned int>::size_type v6; // rax
  std::vector<unsigned int>::size_type v7; // rax
  const unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rax
  std::vector<unsigned int>::const_reference v10; // rax
  _DWORD *v11; // rdx
  const std::unordered_set<unsigned int>::key_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  const unsigned int *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int v18; // r14d
  const std::unordered_set<unsigned int>::value_type *v19; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v20; // rax
  int *v21; // rdx
  int v22; // r14d
  std::unordered_map<unsigned int,unsigned int> *v23; // r15
  const std::unordered_map<unsigned int,unsigned int>::key_type *v24; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v25; // rax
  _DWORD *v26; // rdx
  char v27; // cl
  unsigned __int64 v28; // rax
  int v29; // eax
  int32_t result; // eax
  int32_t v31; // [rsp+Ch] [rbp-1B4h]
  uint32_t idx; // [rsp+28h] [rbp-198h]
  uint32_t size; // [rsp+2Ch] [rbp-194h]
  data::TrialAvatarActivityExcelConfigMap *__for_range; // [rsp+30h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig>,false,false>::reference v35; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig> >::type *schedule_id; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig> >::type *config; // [rsp+48h] [rbp-178h]
  char v38[368]; // [rsp+50h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 14 __for_begin:39 64 8 12 __for_end:39 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 56 16 trial_idx_set:42";
  *(_QWORD *)(v2 + 16) = TrialAvatarActivityExcelConfigMgr::rewriteTrialConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  __for_range = &this->trial_avatar_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TrialAvatarActivityExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::TrialAvatarActivityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TrialAvatarActivityExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TrialAvatarActivityExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig>,false> *)(v2 + 64)) )
      break;
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig>,false,false> *const)(v2 + 32));
    schedule_id = std::get<0ul,unsigned int const,data::TrialAvatarActivityExcelConfig>(v35);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TrialAvatarActivityExcelConfig>(v35);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v6 = std::vector<unsigned int>::size(&config->reward_id_list);
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store8(v2 + 128, v5);
    *(_QWORD *)(v2 + 128) = v6;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    v7 = std::vector<unsigned int>::size(&config->avatar_index_id_list);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v2 + 96, v5);
    *(_QWORD *)(v2 + 96) = v7;
    v8 = std::min<unsigned long>((const unsigned __int64 *)(v2 + 96), (const unsigned __int64 *)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    size = *v8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    v9 = ((v2 + 224) >> 3) + 2147450880;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 4) = 0;
    *(_BYTE *)(v9 + 6) = 0;
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 224));
    for ( idx = 0; ; ++idx )
    {
      if ( idx >= size )
      {
        v18 = 1;
        goto LABEL_32;
      }
      v10 = std::vector<unsigned int>::operator[](&config->avatar_index_id_list, idx);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( *v11 )
        break;
LABEL_30:
      ;
    }
    v12 = std::vector<unsigned int>::operator[](&config->avatar_index_id_list, idx);
    if ( !std::unordered_set<unsigned int>::count((const std::unordered_set<unsigned int> *const)(v2 + 224), v12) )
    {
      v19 = std::vector<unsigned int>::operator[](&config->avatar_index_id_list, idx);
      std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v2 + 224), v19);
      v20 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &config->reward_id_list,
                                                                                                  idx);
      v21 = (int *)v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      v22 = *v21;
      v23 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
              &this->schedule_trial_reward_map,
              schedule_id);
      v24 = std::vector<unsigned int>::operator[](&config->avatar_index_id_list, idx);
      v25 = std::unordered_map<unsigned int,unsigned int>::operator[](v23, v24);
      v26 = v25;
      v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
      if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
      {
        LOBYTE(v24) = v27 != 0;
        __asan_report_store4(v25, v24);
      }
      *v26 = v22;
      goto LABEL_30;
    }
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
      "rewriteTrialConfig",
      51);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 160),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v13, (const char (*)[54])byte_1A128BC0);
    v15 = std::vector<unsigned int>::operator[](&config->avatar_index_id_list, idx);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, v15);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])byte_1A128C20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, schedule_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v31 = -1;
    v18 = 0;
LABEL_32:
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 224));
    v28 = ((v2 + 224) >> 3) + 2147450880;
    *(_DWORD *)v28 = -117901064;
    *(_WORD *)(v28 + 4) = -1800;
    *(_BYTE *)(v28 + 6) = -8;
    if ( v18 != 1 )
    {
      v29 = 0;
      goto LABEL_36;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityExcelConfig>,false,false> *const)(v2 + 32));
  }
  v29 = 1;
LABEL_36:
  if ( v29 == 1 )
    v31 = 0;
  result = v31;
  if ( v38 == (char *)v2 )
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

// Line 64: range 000000000CB2C390-000000000CB2CC4F
int32_t __cdecl TrialAvatarActivityExcelConfigMgr::checkTrialConfig(
        TrialAvatarActivityExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *__for_range; // [rsp+10h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false>::reference v23; // [rsp+18h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *schedule_id; // [rsp+20h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *trial_config_map; // [rsp+28h] [rbp-1B8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v26; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *trial_config_idx; // [rsp+40h] [rbp-1A0h]
  uint32_t *reward_id; // [rsp+48h] [rbp-198h]
  char v29[400]; // [rsp+50h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 14 __for_begin:65 64 8 12 __for_end:65 96 8 14 __for_begin:72 128 8 12 __for_end:72 160 3"
                        "2 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TrialAvatarActivityExcelConfigMgr::checkTrialConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->schedule_trial_reward_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_38;
    }
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v3 + 32));
    schedule_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v23);
    trial_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v23);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    v7 = *schedule_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(p_new_activity_config_mgr, v7) )
      break;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v7);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::begin(trial_config_map);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v7);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,unsigned int>::end(trial_config_map);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 128)) )
      {
        v15 = 1;
        goto LABEL_34;
      }
      v26 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
      trial_config_idx = std::get<0ul,unsigned int const,unsigned int>(v26);
      reward_id = (uint32_t *)std::get<1ul,unsigned int const,unsigned int>(v26);
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>,unsigned int>(
              &this->trial_avatar_config_map,
              trial_config_idx) )
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
          "checkTrialConfig",
          76);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v11, (const char (*)[52])byte_1A128D80);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, trial_config_idx);
        v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])byte_1A128DE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
        goto LABEL_34;
      }
      if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              *reward_id,
                              ITEM_LIMIT_ACTIVITY_TRIAL_AVATAR) != 1 )
        break;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
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
      "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
      "checkTrialConfig",
      81);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v16, (const char (*)[70])byte_1A128E20);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, trial_config_idx);
    v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])byte_1A128DE0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, schedule_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v15 = 0;
LABEL_34:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v10 = 0;
      goto LABEL_38;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
    "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
    "checkTrialConfig",
    69);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v8, (const char (*)[32])byte_1A128D40);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v10 = 0;
LABEL_38:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 90: range 000000000CB2CC50-000000000CB2DA40
int32_t __cdecl TrialAvatarActivityExcelConfigMgr::rewriteTrialAvatarConfig(
        TrialAvatarActivityExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  bool v7; // r15
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r15d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  uint32_t trial_avatar_index_id; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t dungeon_id; // ecx
  char v21; // al
  uint32_t trial_avatar_id; // ecx
  char v23; // dl
  std::vector<unsigned int> *v24; // rax
  data::ActivityTrialAvatarConfig *v25; // r15
  data::ActivityTrialAvatarConfig *v26; // rax
  uint32_t v27; // r15d
  uint32_t *p_dungeon_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v29; // rax
  uint32_t *v30; // rdx
  char v31; // cl
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v33; // rcx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // r15d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // edx
  int32_t result; // eax
  data::TrialAvatarActivityDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-2A8h]
  uint32_t *id; // [rsp+30h] [rbp-2A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig> >::type *config; // [rsp+38h] [rbp-298h]
  char v47[656]; // [rsp+40h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 9 <unknown> 48 8 14 __for_begin:92 80 8 12 __for_end:92 112 24 16 avatar_id_vec:94 176 3"
                        "2 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 40 17 avatar_config:1"
                        "07 512 56 18 dungeon_idx_set:91";
  *(_QWORD *)(v3 + 16) = TrialAvatarActivityExcelConfigMgr::rewriteTrialAvatarConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 512));
  __for_range = &this->trial_avatar_activity_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TrialAvatarActivityDataExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::TrialAvatarActivityDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TrialAvatarActivityDataExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::TrialAvatarActivityDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig>,false> *)(v3 + 80)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig>,false,false> *const)(v3 + 48));
    id = std::get<0ul,unsigned int const,data::TrialAvatarActivityDataExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::TrialAvatarActivityDataExcelConfig>(__in);
    v6 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 112));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 176),
      ",",
      (const std::allocator<char> *)(v3 + 32));
    v7 = common::tools::StringUtils::splitToList<unsigned int>(
           &config->battle_avatars_list,
           (const std::string *)(v3 + 176),
           (std::vector<unsigned int> *)(v3 + 112),
           1) != 0;
    std::string::~string((void *)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 32);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
        "rewriteTrialAvatarConfig",
        97);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v8, (const char (*)[63])byte_1A128FC0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->trial_avatar_index_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else if ( std::unordered_set<unsigned int>::count(
                (const std::unordered_set<unsigned int> *const)(v3 + 512),
                &config->dungeon_id) )
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
        "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
        "rewriteTrialAvatarConfig",
        102);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 304),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v11, (const char (*)[45])byte_1A129020);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->dungeon_id);
      v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1A129080);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->trial_avatar_index_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v3 + 512), &config->dungeon_id);
      v15 = ((v3 + 432) >> 3) + 2147450880;
      *(_DWORD *)v15 = 0;
      *(_BYTE *)(v15 + 4) = 0;
      data::ActivityTrialAvatarConfig::ActivityTrialAvatarConfig((data::ActivityTrialAvatarConfig *const)(v3 + 432));
      v16 = (((_BYTE)config + 108) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->trial_avatar_index_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->trial_avatar_index_id >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->trial_avatar_index_id);
      }
      trial_avatar_index_id = config->trial_avatar_index_id;
      v18 = *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v16) = v18 != 0;
        __asan_report_store4(v3 + 432, v16);
      }
      *(_DWORD *)(v3 + 432) = trial_avatar_index_id;
      v19 = (((_BYTE)config + 116) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->dungeon_id);
      }
      dungeon_id = config->dungeon_id;
      v21 = *(_BYTE *)(((v3 + 440) >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v19) = v21 != 0;
        __asan_report_store4(v3 + 440, v19);
      }
      *(_DWORD *)(v3 + 440) = dungeon_id;
      if ( *(_BYTE *)(((unsigned __int64)&config->trial_avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->trial_avatar_id);
      }
      trial_avatar_id = config->trial_avatar_id;
      v23 = *(_BYTE *)(((v3 + 436) >> 3) + 0x7FFF8000);
      if ( v23 != 0 && (char)(((v3 - 76) & 7) + 3) >= v23 )
      {
        LOBYTE(v19) = v23 != 0;
        __asan_report_store4(v3 + 436, v19);
      }
      *(_DWORD *)(v3 + 436) = trial_avatar_id;
      v24 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v3 + 112));
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 448), v24);
      v25 = std::move<data::ActivityTrialAvatarConfig &>((data::ActivityTrialAvatarConfig *)(v3 + 432));
      v26 = std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::operator[](
              &this->trial_avatar_config_map,
              &config->trial_avatar_index_id);
      data::ActivityTrialAvatarConfig::operator=(v26, v25);
      if ( *(_BYTE *)(((unsigned __int64)&config->trial_avatar_index_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->trial_avatar_index_id >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->trial_avatar_index_id);
      }
      v27 = config->trial_avatar_index_id;
      p_dungeon_id = &config->dungeon_id;
      v29 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->dungeon_to_trial_map, &config->dungeon_id);
      v30 = v29;
      v31 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
      if ( v31 != 0 && (char)(((unsigned __int8)v29 & 7) + 3) >= v31 )
      {
        LOBYTE(p_dungeon_id) = v31 != 0;
        __asan_report_store4(v29, p_dungeon_id);
      }
      *v30 = v27;
      p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
      v33 = (data::WatcherConfig *)config;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        p_watcher_config_mgr = (WatcherExcelConfigMgr *)id;
        __asan_report_load4(id);
      }
      if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, *id, v33) )
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
          "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
          "rewriteTrialAvatarConfig",
          118);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v34,
                (const char (*)[29])"addWatcherConfig failed, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &config->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v36 = 0;
      }
      else
      {
        v36 = 1;
      }
      data::ActivityTrialAvatarConfig::~ActivityTrialAvatarConfig((data::ActivityTrialAvatarConfig *const)(v3 + 432));
      v10 = v36 == 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 112));
    v37 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v37 = -1800;
    *(_BYTE *)(v37 + 2) = -8;
    v38 = ((v3 + 432) >> 3) + 2147450880;
    *(_DWORD *)v38 = -117901064;
    *(_BYTE *)(v38 + 4) = -8;
    if ( !v10 )
    {
      v39 = 0;
      goto LABEL_46;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarActivityDataExcelConfig>,false,false> *const)(v3 + 48));
  }
  v39 = 1;
LABEL_46:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v39 == 1 )
    v2 = 0;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 512));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
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
  return result;
};

// Line 126: range 000000000CB2DA42-000000000CB2E2DB
int32_t __cdecl TrialAvatarActivityExcelConfigMgr::checkTrialAvatarConfig(
        TrialAvatarActivityExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_trial_avatar_id; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig> *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false,false>::reference v24; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityTrialAvatarConfig> >::type *trial_config_id; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityTrialAvatarConfig> >::type *config; // [rsp+30h] [rbp-1C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v28[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 13 avatar_id:134 64 8 15 __for_begin:127 96 8 13 __for_end:127 128 8 15 __for_begin:134 1"
                        "60 8 13 __for_end:134 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TrialAvatarActivityExcelConfigMgr::checkTrialAvatarConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->trial_avatar_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_40;
    }
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false,false> *const)(v3 + 64));
    trial_config_id = std::get<0ul,unsigned int const,data::ActivityTrialAvatarConfig>(v24);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityTrialAvatarConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityTrialAvatarConfig>(v24);
    p_trial_avatar_id = &config->trial_avatar_id;
    if ( !common::tools::MiscUtils::isContains<unsigned int>(&config->avatar_id_vec, &config->trial_avatar_id) )
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
        "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
        "checkTrialAvatarConfig",
        131);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v7, (const char (*)[78])byte_1A1291C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, trial_config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v9 = 0;
      goto LABEL_40;
    }
    __for_range_0 = &config->avatar_id_vec;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_trial_avatar_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_trial_avatar_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v17 = 1;
        goto LABEL_30;
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
      if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
              &txt_config_mgr->trial_avatar_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
      "checkTrialAvatarConfig",
      138);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v15, (const char (*)[48])byte_1A129240);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v9 = 0;
      goto LABEL_40;
    }
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->dungeon_id);
    }
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, config->dungeon_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/TrialAvatarActivityExcelConfig.cpp",
    "checkTrialAvatarConfig",
    144);
  v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v20 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v19, (const char (*)[42])byte_1A1292A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->dungeon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  v2 = -1;
  v9 = 0;
LABEL_40:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
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

// Line 152: range 000000000CB2E2DC-000000000CB2E49D
const data::ActivityTrialAvatarConfig *__fastcall TrialAvatarActivityExcelConfigMgr::findActivityTrialAvatarConfig(
        const TrialAvatarActivityExcelConfigMgr *const this,
        __int64 trial_config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig> *p_trial_avatar_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig> *v6; // rdx
  bool v7; // al
  const data::ActivityTrialAvatarConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 trial_config_id:151 64 8 8 iter:153 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TrialAvatarActivityExcelConfigMgr::findActivityTrialAvatarConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = trial_config_id;
  p_trial_avatar_config_map = &this->trial_avatar_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, trial_config_id);
  *(std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::find(
                                                                                                     p_trial_avatar_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::key_type *)(v2 + 48));
  v6 = &this->trial_avatar_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false,false> *const)(v2 + 64))->second;
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
