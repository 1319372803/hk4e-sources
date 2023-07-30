// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBlessingExcelConfig.cpp

// Line 18: range 0000000012AC0264-0000000012AC06D9
int32_t __cdecl ActivityBlessingExcelConfigMgr::checkConfig(
        ActivityBlessingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityBlessingExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivityBlessingExcelConfigMgr::checkBlessingScanExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "checkConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v5,
      (const char (*)[36])"checkBlessingScanExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityBlessingExcelConfigMgr::checkBlessingScanTypeExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "checkConfig",
      26);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])"checkBlessingScanTypeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityBlessingExcelConfigMgr::checkBlessingScanDropExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "checkConfig",
      31);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v8,
      (const char (*)[40])"checkBlessingScanDropExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 38: range 0000000012AC06DA-0000000012AC0C84
int32_t __cdecl ActivityBlessingExcelConfigMgr::rewriteConfig(
        ActivityBlessingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityBlessingExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityBlessingExcelConfigMgr::rewriteBlessingScanExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "rewriteConfig",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v5,
      (const char (*)[38])"rewriteBlessingScanExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityBlessingExcelConfigMgr::rewriteBlessingScanPicExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "rewriteConfig",
      46);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"rewriteBlessingScanPicExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityBlessingExcelConfigMgr::rewriteBlessingScanTypeExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "rewriteConfig",
      51);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v8,
      (const char (*)[42])"rewriteBlessingScanTypeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityBlessingExcelConfigMgr::rewriteBlessingScanDropExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "rewriteConfig",
      56);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v9,
      (const char (*)[42])"rewriteBlessingScanDropExcelConfig failed");
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

// Line 63: range 0000000012AC0C86-0000000012AC137E
int32_t __cdecl ActivityBlessingExcelConfigMgr::rewriteBlessingScanExcelConfig(
        ActivityBlessingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  const unsigned int *p_ref_id; // rcx
  __int64 scan_type; // rsi
  const unsigned int *v11; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  int32_t result; // eax
  data::BlessingScanExcelConfigMap *__for_range; // [rsp+10h] [rbp-180h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false>::reference v20; // [rsp+18h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlessingScanExcelConfig> >::type *id; // [rsp+20h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanExcelConfig> >::type *config; // [rsp+28h] [rbp-168h]
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >>::mapped_type *scan_map; // [rsp+30h] [rbp-160h]
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *scan_id_vec; // [rsp+38h] [rbp-158h]
  char v25[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 9 <unknown> 64 8 14 __for_begin:64 96 8 12 __for_end:64 128 8 18 type_value_pair:72 160 3"
                        "2 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlessingExcelConfigMgr::rewriteBlessingScanExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->blessing_scan_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlessingScanExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BlessingScanExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false> *)(v3 + 96)) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::BlessingScanExcelConfig>(v20);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlessingScanExcelConfig>(v20);
    scan_map = std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::operator[](
                 &this->blessing_scan_type_map,
                 &config->type_id);
    if ( *(_BYTE *)(((unsigned __int64)&config->scan_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->scan_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->scan_type);
    }
    if ( config->scan_type )
    {
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      p_ref_id = &config->ref_id;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&config->scan_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->scan_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->scan_type);
      }
      scan_type = (unsigned int)config->scan_type;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, scan_type);
      *(_DWORD *)(v3 + 48) = scan_type;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, scan_type);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 128) = std::make_pair<unsigned int,unsigned int const&>(
                                                              (unsigned int *)(v3 + 48),
                                                              p_ref_id);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v12 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>&,unsigned int const&>(
              scan_map,
              (std::pair<unsigned int,unsigned int> *)(v3 + 128),
              id,
              (std::pair<unsigned int,unsigned int> *)(v3 + 128),
              v11);
      if ( !v12.second )
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
          "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
          "rewriteBlessingScanExcelConfig",
          75);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v13, (const char (*)[29])byte_1AA1EFE0);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->type_id);
        v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v15,
                (const char (*)[18])" type_value_pair:");
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v16,
          (const std::pair<unsigned int,unsigned int> *)(v3 + 128));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v8 = 0;
      }
      else
      {
        scan_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                        &this->scan_type_id_scan_id_map,
                        &config->type_id);
        std::vector<unsigned int>::push_back(scan_id_vec, id);
        v8 = 1;
      }
    }
    else
    {
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
        "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
        "rewriteBlessingScanExcelConfig",
        69);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v6, (const char (*)[35])byte_1AA1EF80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v8 != 1 )
    {
      v17 = 0;
      goto LABEL_31;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false> *const)(v3 + 64));
  }
  v17 = 1;
LABEL_31:
  if ( v17 == 1 )
    v2 = 0;
  result = v2;
  if ( v25 == (char *)v3 )
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
  return result;
};

// Line 85: range 0000000012AC1380-0000000012AC16C3
int32_t __cdecl ActivityBlessingExcelConfigMgr::rewriteBlessingScanPicExcelConfig(
        ActivityBlessingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  data::BlessingScanPicExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanPicExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlessingScanPicExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:86 64 8 12 __for_end:86 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlessingExcelConfigMgr::rewriteBlessingScanPicExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->blessing_scan_pic_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanPicExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BlessingScanPicExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanPicExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlessingScanPicExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlessingScanPicExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanPicExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanPicExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanPicExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanPicExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::BlessingScanPicExcelConfig>(v12);
    std::get<1ul,unsigned int const,data::BlessingScanPicExcelConfig>(v12);
    v6 = std::set<unsigned int>::emplace<unsigned int const&>(
           &this->pic_id_set,
           id,
           (const unsigned int *)&this->pic_id_set);
    if ( !v6.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanPicExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanPicExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
    "rewriteBlessingScanPicExcelConfig",
    90);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])byte_1AA1F100);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
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

// Line 98: range 0000000012AC16C4-0000000012AC1B67
int32_t __cdecl ActivityBlessingExcelConfigMgr::rewriteBlessingScanTypeExcelConfig(
        ActivityBlessingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  std::pair<unsigned int,unsigned int> *M_current; // r14
  std::vector<std::pair<unsigned int,unsigned int>>::iterator v7; // rax
  ActivityBlessingExcelConfigMgr::rewriteBlessingScanTypeExcelConfig::<lambda(auto:23&, auto:24&)> v8; // dl
  int32_t result; // eax
  data::BlessingScanTypeExcelConfigMap *__for_range; // [rsp+10h] [rbp-150h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+18h] [rbp-148h]
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >::reference v12; // [rsp+20h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *id_0; // [rsp+28h] [rbp-138h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false>::reference v14; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlessingScanTypeExcelConfig> >::type *id; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanTypeExcelConfig> >::type *config; // [rsp+48h] [rbp-118h]
  char v17[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:100 64 8 13 __for_end:100 96 8 15 __for_begin:107 128 8 13 __for_end:107 1"
                        "60 24 25 scan_type_priority_vec:99";
  *(_QWORD *)(v2 + 16) = ActivityBlessingExcelConfigMgr::rewriteBlessingScanTypeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160));
  __for_range = &this->blessing_scan_type_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false> *)(v2 + 64)) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::BlessingScanTypeExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanTypeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlessingScanTypeExcelConfig>(v14);
    std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int const&,unsigned int const&>(
      (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160),
      id,
      &config->priority,
      id,
      v5);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<std::pair<unsigned int,unsigned int>>::end((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160))._M_current;
  v7._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160))._M_current;
  std::sort___gnu_cxx::__normal_iterator_std::pair_unsigned_int_unsigned_int___std::vector_std::pair_unsigned_int_unsigned_int______ActivityBlessingExcelConfigMgr::rewriteBlessingScanTypeExcelConfig_TxtConfigMgr__::_lambda_auto_23__auto_24_____(
    v7,
    (__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)M_current,
    v8);
  __for_range_0 = (std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 160);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, M_current);
  *(std::vector<std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 96) = std::vector<std::pair<unsigned int,unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, M_current);
  *(std::vector<std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 128) = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_0);
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v2 + 96),
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v2 + 128)) )
  {
    v12 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v2 + 96));
    id_0 = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v12);
    std::get<1ul,unsigned int,unsigned int>(v12);
    std::vector<unsigned int>::push_back(&this->blessing_type_id_vec, id_0);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 160));
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 104: range 0000000012EA53B0-0000000012EA544F
bool __cdecl ActivityBlessingExcelConfigMgr::rewriteBlessingScanTypeExcelConfig::_lambda_auto_23___auto_24___::operator()_std::pair_unsigned_int_unsigned_int__std::pair_unsigned_int_unsigned_int___(
        const ActivityBlessingExcelConfigMgr::rewriteBlessingScanTypeExcelConfig::<lambda(auto:23&, auto:24&)> *const __closure,
        std::pair<unsigned int,unsigned int> *lhs,
        std::pair<unsigned int,unsigned int> *rhs)
{
  unsigned int second; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->second);
  }
  second = lhs->second;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->second);
  }
  return second < rhs->second;
};

// Line 115: range 0000000012AC1B68-0000000012AC1ED0
int32_t __cdecl ActivityBlessingExcelConfigMgr::rewriteBlessingScanDropExcelConfig(
        ActivityBlessingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  data::BlessingScanDropExcelConfigMap *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanDropExcelConfig>,false,false>::reference v12; // [rsp+20h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlessingScanDropExcelConfig> >::type *id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanDropExcelConfig> >::type *config; // [rsp+30h] [rbp-E0h]
  std::map<unsigned int,std::unordered_set<unsigned int>>::mapped_type *drop_set; // [rsp+38h] [rbp-D8h]
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:116 64 8 13 __for_end:116 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlessingExcelConfigMgr::rewriteBlessingScanDropExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->blessing_scan_drop_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanDropExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BlessingScanDropExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanDropExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlessingScanDropExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlessingScanDropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanDropExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanDropExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanDropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanDropExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::BlessingScanDropExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanDropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlessingScanDropExcelConfig>(v12);
    drop_set = std::map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                 &this->up_pool_drop_map,
                 &config->up_pool_id);
    v6 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(drop_set, id, id);
    if ( !v6.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanDropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanDropExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
    "rewriteBlessingScanDropExcelConfig",
    121);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v7, (const char (*)[28])byte_1AA1F280);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
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

// Line 129: range 0000000012AC1ED2-0000000012AC3015
int32_t __cdecl ActivityBlessingExcelConfigMgr::checkBlessingScanExcelConfig(
        ActivityBlessingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  data::BlessingScanType scan_type; // eax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  __int64 ref_id; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // edx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  std::vector<unsigned int> *__for_range; // [rsp+10h] [rbp-350h]
  data::BlessingScanTypeExcelConfig *config_ptr; // [rsp+18h] [rbp-348h]
  data::BlessingScanExcelConfigMap *__for_range_0; // [rsp+20h] [rbp-340h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false>::reference v35; // [rsp+28h] [rbp-338h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanExcelConfig> >::type *config; // [rsp+38h] [rbp-328h]
  const std::vector<data::BlessingPicUpConfig> *__for_range_1; // [rsp+40h] [rbp-320h]
  const data::BlessingPicUpConfig *up_config; // [rsp+48h] [rbp-318h]
  char v39[784]; // [rsp+50h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 18 config_type_id:131 64 8 15 __for_begin:131 96 8 13 __for_end:131 128 8 15 __for_begin"
                        ":141 160 8 13 __for_end:141 192 8 15 __for_begin:167 224 8 13 __for_end:167 256 32 9 <unknown> 3"
                        "20 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 64"
                        "0 56 20 scan_type_id_set:130";
  *(_QWORD *)(v3 + 16) = ActivityBlessingExcelConfigMgr::checkBlessingScanExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 640));
  __for_range = &this->blessing_type_id_vec;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<unsigned int>::iterator *)(v3 + 64) = std::vector<unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<unsigned int>::iterator *)(v3 + 96) = std::vector<unsigned int>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96)) )
    {
      v13 = 1;
      goto LABEL_20;
    }
    v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 64));
    v8 = (int *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = *v8;
    v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v6) = v10 != 0;
      __asan_report_store4(v3 + 48, v6);
    }
    *(_DWORD *)(v3 + 48) = v9;
    config_ptr = data::ActivityBlessingExcelConfigMgrBase::findBlessingScanTypeExcelConfig(
                   this,
                   *(unsigned int *)(v3 + 48));
    if ( !config_ptr )
      break;
    std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v3 + 640), &config_ptr->type_id);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 64));
  }
  if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 256, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
    "checkBlessingScanExcelConfig",
    136);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])byte_1AA1F440);
  v6 = (char *)(v3 + 48);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v13 = 0;
LABEL_20:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v13 != 1 )
    goto LABEL_72;
  __for_range_0 = &this->blessing_scan_excel_config_map;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,data::BlessingScanExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::BlessingScanExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,data::BlessingScanExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::BlessingScanExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false> *)(v3 + 160)) )
    {
      v19 = 1;
      goto LABEL_70;
    }
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false> *const)(v3 + 128));
    std::get<0ul,unsigned int const,data::BlessingScanExcelConfig>(v35);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlessingScanExcelConfig>(v35);
    if ( *(_BYTE *)(((unsigned __int64)&config->scan_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->scan_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->scan_type);
    }
    scan_type = config->scan_type;
    if ( scan_type == BLESSING_SCAN_TYPE_MONSTER )
      break;
    if ( scan_type != BLESSING_SCAN_TYPE_GATHER )
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
        "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
        "checkBlessingScanExcelConfig",
        164);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v23, (const char (*)[31])byte_1AA1F520);
      common::milog::MiLogStream::operator<<<data::BlessingScanType,(data::BlessingScanType*)0>(v24, &config->scan_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v19 = 0;
      goto LABEL_70;
    }
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->ref_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->ref_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->ref_id);
    }
    ref_id = config->ref_id;
    if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, ref_id) )
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
        "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
        "checkBlessingScanExcelConfig",
        158);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v21, (const char (*)[25])byte_1AA1F4E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->ref_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v19 = 0;
      goto LABEL_70;
    }
LABEL_47:
    __for_range_1 = &config->pic_up_config;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, ref_id);
    *(std::vector<data::BlessingPicUpConfig>::const_iterator *)(v3 + 192) = std::vector<data::BlessingPicUpConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, ref_id);
    *(std::vector<data::BlessingPicUpConfig>::const_iterator *)(v3 + 224) = std::vector<data::BlessingPicUpConfig>::end(__for_range_1);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::BlessingPicUpConfig const*,std::vector<data::BlessingPicUpConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::BlessingPicUpConfig*,std::vector<data::BlessingPicUpConfig> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<const data::BlessingPicUpConfig*,std::vector<data::BlessingPicUpConfig> > *)(v3 + 224)) )
      {
        v27 = 1;
        goto LABEL_62;
      }
      up_config = __gnu_cxx::__normal_iterator<data::BlessingPicUpConfig const*,std::vector<data::BlessingPicUpConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::BlessingPicUpConfig*,std::vector<data::BlessingPicUpConfig> > *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&up_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&up_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&up_config->id);
      }
      if ( up_config->id
        && !data::ActivityBlessingExcelConfigMgrBase::findBlessingScanPicExcelConfig(this, up_config->id) )
      {
        break;
      }
      __gnu_cxx::__normal_iterator<data::BlessingPicUpConfig const*,std::vector<data::BlessingPicUpConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::BlessingPicUpConfig*,std::vector<data::BlessingPicUpConfig> > *const)(v3 + 192));
    }
    *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 512, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "checkBlessingScanExcelConfig",
      173);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 512),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v26 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v25, (const char (*)[24])byte_1AA1F560);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &up_config->id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
    *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v27 = 0;
LABEL_62:
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v27 != 1 )
    {
      v19 = 0;
      goto LABEL_70;
    }
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            (std::unordered_set<unsigned int> *)(v3 + 640),
            &config->type_id) )
    {
      *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
        "checkBlessingScanExcelConfig",
        180);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v28, (const char (*)[31])byte_1AA1F5A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &config->type_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
      *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v19 = 0;
      goto LABEL_70;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanExcelConfig>,false,false> *const)(v3 + 128));
  }
  p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&config->ref_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->ref_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->ref_id);
  }
  ref_id = config->ref_id;
  if ( data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, ref_id) )
    goto LABEL_47;
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 320, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 320),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
    "checkBlessingScanExcelConfig",
    149);
  v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v17, (const char (*)[24])byte_1AA1F4A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->ref_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v19 = 0;
LABEL_70:
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v19 == 1 )
    v2 = 0;
LABEL_72:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 640));
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
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

// Line 188: range 0000000012AC3016-0000000012AC3709
int32_t __cdecl ActivityBlessingExcelConfigMgr::checkBlessingScanTypeExcelConfig(
        ActivityBlessingExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // edx
  int v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  data::BlessingScanTypeExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false>::reference v20; // [rsp+20h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanTypeExcelConfig> >::type *config; // [rsp+30h] [rbp-180h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  char v23[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 11 pool_id:191 64 8 15 __for_begin:189 96 8 13 __for_end:189 128 8 15 __for_begin:191 160"
                        " 8 13 __for_end:191 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlessingExcelConfigMgr::checkBlessingScanTypeExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->blessing_scan_type_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false> *)(v3 + 96)) )
    {
      v15 = 1;
      goto LABEL_34;
    }
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::BlessingScanTypeExcelConfig>(v20);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlessingScanTypeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlessingScanTypeExcelConfig>(v20);
    __for_range_0 = &config->up_pool_id;
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
        v14 = 1;
        goto LABEL_26;
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
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::unordered_set<unsigned int>>,unsigned int>(
              &this->up_pool_drop_map,
              (const unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "checkBlessingScanTypeExcelConfig",
      195);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v12, (const char (*)[27])byte_1AA1F6E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v14 != 1 )
    {
      v15 = 0;
      goto LABEL_34;
    }
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::vector<unsigned int>>,unsigned int>(
            &this->scan_type_id_scan_id_map,
            &config->type_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlessingScanTypeExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
    "checkBlessingScanTypeExcelConfig",
    201);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v16, (const char (*)[31])byte_1AA1F5A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->type_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v15 = 0;
LABEL_34:
  if ( v15 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
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

// Line 209: range 0000000012AC370A-0000000012AC3E3F
int32_t __cdecl ActivityBlessingExcelConfigMgr::checkBlessingScanDropExcelConfig(
        ActivityBlessingExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  ActivityBlessingExcelConfigMgr *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  int32_t result; // eax
  std::map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+10h] [rbp-1A0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::reference v21; // [rsp+18h] [rbp-198h]
  const std::tuple_element<1,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *__for_range_0; // [rsp+30h] [rbp-180h]
  data::BlessingScanDropExcelConfig *drop_excel_config_ptr; // [rsp+38h] [rbp-178h]
  char v24[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 11 drop_id:212 64 8 15 __for_begin:210 96 8 13 __for_end:210 128 8 15 __for_begin:212 160"
                        " 8 13 __for_end:212 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlessingExcelConfigMgr::checkBlessingScanDropExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->up_pool_drop_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::unordered_set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v3 + 96) = std::map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v3 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v3 + 96)) )
      break;
    v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > > *const)(v3 + 64));
    std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v21);
    __for_range_0 = std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v21);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 128) = std::unordered_set<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 160) = std::unordered_set<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 160)) )
      {
        v14 = 1;
        goto LABEL_32;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v3 + 128));
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
      drop_excel_config_ptr = data::ActivityBlessingExcelConfigMgrBase::findBlessingScanDropExcelConfig(
                                this,
                                *(unsigned int *)(v3 + 48));
      if ( !drop_excel_config_ptr )
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
          "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
          "checkBlessingScanDropExcelConfig",
          217);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v12, (const char (*)[23])byte_1AA1F820);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_32;
      }
      v15 = this;
      if ( *(_BYTE *)(((unsigned __int64)&drop_excel_config_ptr->pic_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&drop_excel_config_ptr->pic_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&drop_excel_config_ptr->pic_id);
      }
      if ( !data::ActivityBlessingExcelConfigMgrBase::findBlessingScanPicExcelConfig(v15, drop_excel_config_ptr->pic_id) )
        break;
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v3 + 128));
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
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "checkBlessingScanDropExcelConfig",
      222);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v16, (const char (*)[24])byte_1AA1F560);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &drop_excel_config_ptr->pic_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v14 != 1 )
    {
      v18 = 0;
      goto LABEL_36;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > > *const)(v3 + 64));
  }
  v18 = 1;
LABEL_36:
  if ( v18 == 1 )
    v2 = 0;
  result = v2;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 231: range 0000000012AC3E40-0000000012AC421A
const data::BlessingScanTypeExcelConfig *__fastcall ActivityBlessingExcelConfigMgr::findBlessingScanTypeConfigByDayIndex(
        const ActivityBlessingExcelConfigMgr *const this,
        uint32_t day_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::BlessingScanTypeExcelConfig *result; // rax
  std::vector<unsigned int>::size_type v6; // r15
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int>::const_reference v10; // rax
  unsigned int *v11; // rdx
  char v12[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 day_index:230 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBlessingExcelConfigMgr::findBlessingScanTypeConfigByDayIndex;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = day_index;
  if ( *(_DWORD *)(v2 + 48) )
  {
    v6 = (unsigned int)(*(_DWORD *)(v2 + 48) - 1);
    if ( v6 < std::vector<unsigned int>::size(&this->blessing_type_id_vec) )
    {
      v10 = std::vector<unsigned int>::operator[](&this->blessing_type_id_vec, (unsigned int)(*(_DWORD *)(v2 + 48) - 1));
      v11 = (unsigned int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      result = data::ActivityBlessingExcelConfigMgrBase::findBlessingScanTypeExcelConfig(this, *v11);
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
        3u,
        "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
        "findBlessingScanTypeConfigByDayIndex",
        240);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[27])"invalid index,  day_index:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v8,
             (const char (*)[23])" blessing_type_id_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v9, &this->blessing_type_id_vec);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = 0LL;
    }
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
      "./src/txt_data_manual/ActivityBlessingExcelConfig.cpp",
      "findBlessingScanTypeConfigByDayIndex",
      234);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[25])"day index cannot be zero");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 249: range 0000000012AC421C-0000000012AC45D2
__int64 __fastcall ActivityBlessingExcelConfigMgr::findScanIdByEntityData(
        const ActivityBlessingExcelConfigMgr *const this,
        __int64 type_id,
        uint32_t entity_type,
        uint32_t config_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >> *p_blessing_scan_type_map; // rdx
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >> *v8; // rdx
  bool v9; // al
  __int64 result; // rax
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_second; // rdx
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *v12; // rdx
  bool v13; // al
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>::pointer v14; // rdx
  unsigned int *v15; // rax
  char v18[288]; // [rsp+20h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 11 type_id:248 64 4 15 entity_type:248 80 4 13 config_id:248 96 8 16 type_id_iter:250 128"
                        " 8 9 <unknown> 160 8 26 entity_type_value_pair:256 192 8 15 entity_iter:257 224 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityBlessingExcelConfigMgr::findScanIdByEntityData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -202116352;
  *(_DWORD *)(v4 + 48) = type_id;
  *(_DWORD *)(v4 + 64) = entity_type;
  *(_DWORD *)(v4 + 80) = config_id;
  p_blessing_scan_type_map = &this->blessing_scan_type_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, type_id);
  *(std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::find(p_blessing_scan_type_map, (const std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >>::key_type *)(v4 + 48));
  v8 = &this->blessing_scan_type_map;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v4 + 48);
  *(std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >>::const_iterator *)(v4 + 128) = std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::end(v8);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > >::_Self *)(v4 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > >::_Self *)(v4 + 128));
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v4 + 128);
    *(std::pair<unsigned int,unsigned int> *)(v4 + 160) = std::make_pair<unsigned int &,unsigned int &>(
                                                            (unsigned int *)(v4 + 64),
                                                            (unsigned int *)(v4 + 80));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > > *const)(v4 + 96))->second;
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 192, v4 + 80);
    *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v4 + 192) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::find(p_second, (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v4 + 160));
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
    v12 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > > *const)(v4 + 96))->second;
    if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 224, v4 + 160);
    *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v4 + 224) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(v12);
    v13 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v4 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v4 + 224));
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      result = 0LL;
    }
    else
    {
      v14 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v4 + 192));
      v15 = &v14->second;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      result = v14->second;
    }
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 266: range 0000000012AC45D4-0000000012AC4795
const std::unordered_set<unsigned int> *__fastcall ActivityBlessingExcelConfigMgr::findScanDropIdByUpPoolId(
        const ActivityBlessingExcelConfigMgr *const this,
        __int64 up_pool_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::unordered_set<unsigned int>> *p_up_pool_drop_map; // rdx
  std::map<unsigned int,std::unordered_set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::unordered_set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 up_pool_id:265 64 8 8 iter:267 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBlessingExcelConfigMgr::findScanDropIdByUpPoolId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = up_pool_id;
  p_up_pool_drop_map = &this->up_pool_drop_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, up_pool_id);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::unordered_set<unsigned int>>::find(
                                                                                            p_up_pool_drop_map,
                                                                                            (const std::map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->up_pool_drop_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > > *const)(v2 + 64))->second;
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
