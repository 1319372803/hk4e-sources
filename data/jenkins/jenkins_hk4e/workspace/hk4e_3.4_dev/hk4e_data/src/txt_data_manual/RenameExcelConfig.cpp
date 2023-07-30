// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RenameExcelConfig.cpp

// Line 20: range 0000000014644988-0000000014644CAC
int32_t __cdecl RenameExcelConfigMgr::rewriteConfig(RenameExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RenameExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( RenameExcelConfigMgr::rewriteAvatarRenameConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/RenameExcelConfig.cpp",
      "rewriteConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v5,
      (const char (*)[33])"rewriteAvatarRenameConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( RenameExcelConfigMgr::rewriteAvatarInvalidNameConfig(this, txt_config_mgr) )
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
      4u,
      "./src/txt_data_manual/RenameExcelConfig.cpp",
      "rewriteConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v7,
      (const char (*)[38])"rewriteAvatarInvalidNameConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 37: range 0000000014644CAE-0000000014644FD2
int32_t __cdecl RenameExcelConfigMgr::checkConfig(RenameExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RenameExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( RenameExcelConfigMgr::checkAvatarRenameConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/RenameExcelConfig.cpp",
      "checkConfig",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])"checkAvatarRenameConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( RenameExcelConfigMgr::checkAvatarInvalidNameConfig(this, txt_config_mgr) )
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
      4u,
      "./src/txt_data_manual/RenameExcelConfig.cpp",
      "checkConfig",
      47);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v7,
      (const char (*)[36])"checkAvatarInvalidNameConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 54: range 0000000014644FD4-0000000014645323
int32_t __cdecl RenameExcelConfigMgr::rewriteAvatarRenameConfig(
        RenameExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::AvatarRenameExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::AvatarRenameExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarRenameExcelConfig> >::type *rename_config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:55 64 8 12 __for_end:55 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RenameExcelConfigMgr::rewriteAvatarRenameConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->avatar_rename_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarRenameExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AvatarRenameExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarRenameExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarRenameExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::AvatarRenameExcelConfig>(v13);
    rename_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarRenameExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarRenameExcelConfig>(v13);
    v7 = std::map<unsigned int,data::AvatarRenameExcelConfig>::emplace<unsigned int const&,data::AvatarRenameExcelConfig const&>(
           &this->avatar_id_to_rename_config_map,
           &rename_config->related_avatar_id,
           rename_config,
           (const unsigned int *)&this->avatar_id_to_rename_config_map,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/RenameExcelConfig.cpp",
    "rewriteAvatarRenameConfig",
    59);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         v8,
         (const char (*)[38])"[AVATAR_RENAME] duplicate avatar_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &rename_config->related_avatar_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_16:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
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

// Line 67: range 0000000014645324-0000000014645CCB
int32_t __cdecl RenameExcelConfigMgr::rewriteAvatarInvalidNameConfig(
        RenameExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t *p_related_avatar_id; // rsi
  common::milog::MiLogStream *v14; // rax
  std::pair<std::_Rb_tree_const_iterator<std::string >,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-22Ch]
  data::AvatarInappropriateNameExcelConfigMap *__for_range; // [rsp+18h] [rbp-228h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig>,false,false>::reference v21; // [rsp+20h] [rbp-220h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-210h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-208h]
  data::AvatarRenameExcelConfig *rename_config_ptr; // [rsp+40h] [rbp-200h]
  std::map<unsigned int,std::set<std::string>>::mapped_type *target_set; // [rsp+48h] [rbp-1F8h]
  const std::vector<std::string> *__for_range_1; // [rsp+50h] [rbp-1F0h]
  const std::string *invalid_name; // [rsp+58h] [rbp-1E8h]
  char v28[480]; // [rsp+60h] [rbp-1E0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 12 rename_id:71 64 8 14 __for_begin:69 96 8 12 __for_end:69 128 8 14 __for_begin:71 160 "
                        "8 12 __for_end:71 192 8 14 __for_begin:81 224 8 12 __for_end:81 256 32 9 <unknown> 320 32 9 <unk"
                        "nown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RenameExcelConfigMgr::rewriteAvatarInvalidNameConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  ret = 0;
  __for_range = &this->avatar_inappropriate_name_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarInappropriateNameExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarInappropriateNameExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarInappropriateNameExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarInappropriateNameExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig>,false> *)(v2 + 96)) )
      break;
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::AvatarInappropriateNameExcelConfig>(v21);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarInappropriateNameExcelConfig>(v21);
    __for_range_0 = &excel_config->rename_id_list;
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
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v9;
      rename_config_ptr = data::RenameExcelConfigMgrBase::findAvatarRenameExcelConfig(this, *(unsigned int *)(v2 + 48));
      if ( rename_config_ptr )
      {
        p_related_avatar_id = &rename_config_ptr->related_avatar_id;
        target_set = std::map<unsigned int,std::set<std::string>>::operator[](
                       &this->avatar_id_to_invalid_name_set_map,
                       &rename_config_ptr->related_avatar_id);
        __for_range_1 = &excel_config->invalid_name_list;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, p_related_avatar_id);
        *(std::vector<std::string>::const_iterator *)(v2 + 192) = std::vector<std::string>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, p_related_avatar_id);
        *(std::vector<std::string>::const_iterator *)(v2 + 224) = std::vector<std::string>::end(__for_range_1);
        while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 192),
                  (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 224)) )
        {
          invalid_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 192));
          if ( (unsigned __int8)std::string::empty() )
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
              "./src/txt_data_manual/RenameExcelConfig.cpp",
              "rewriteAvatarInvalidNameConfig",
              85);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              v14,
              (const char (*)[55])"[AVATAR_RENAME] IP inappropriate name cannot be empty!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            v15 = std::set<std::string>::insert(target_set, invalid_name);
            if ( !v15.second )
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
                "./src/txt_data_manual/RenameExcelConfig.cpp",
                "rewriteAvatarInvalidNameConfig",
                91);
              v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v17 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      v16,
                      (const char (*)[50])"[AVATAR_RENAME] duplicate IP inappropriate name: ");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, invalid_name);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 192));
        }
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      }
      else
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
          "./src/txt_data_manual/RenameExcelConfig.cpp",
          "rewriteAvatarInvalidNameConfig",
          76);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v11,
                (const char (*)[40])"[AVATAR_RENAME] cannot find rename_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarInappropriateNameExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v28 == (char *)v2 )
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

// Line 102: range 0000000014645CCC-0000000014646D38
int32_t __cdecl RenameExcelConfigMgr::checkAvatarRenameConfig(
        const RenameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  QuestExcelConfigMgr *v13; // rcx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  QuestExcelConfigMgr *v17; // rdx
  QuestExcelConfigMgr *v18; // rdx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  MailExcelConfigMgr *p_mail_config_mgr; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  MailExcelConfigMgr *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  MailExcelConfigMgr *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rax
  int32_t result; // eax
  data::AvatarRenameExcelConfigMap *__for_range; // [rsp+30h] [rbp-2D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false>::reference v37; // [rsp+38h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarRenameExcelConfig> >::type *rename_config; // [rsp+48h] [rbp-2B8h]
  char v39[688]; // [rsp+50h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 8 15 __for_begin:107 64 8 13 __for_end:107 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <u"
                        "nknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <un"
                        "known> 576 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RenameExcelConfigMgr::checkAvatarRenameConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  __for_range = &this->avatar_rename_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarRenameExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AvatarRenameExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarRenameExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarRenameExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_76;
    }
    v37 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::AvatarRenameExcelConfig>(v37);
    rename_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarRenameExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarRenameExcelConfig>(v37);
    p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->related_avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rename_config->related_avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rename_config->related_avatar_id);
    }
    if ( !data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, rename_config->related_avatar_id) )
    {
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
        "./src/txt_data_manual/RenameExcelConfig.cpp",
        "checkAvatarRenameConfig",
        111);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             v7,
             (const char (*)[61])"[AVATAR_RENAME] cannot find valid avatar config, avatar_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &rename_config->related_avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rename_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config->type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&rename_config->type);
    }
    if ( rename_config->type != AVATAR_RENAME_TYPE_WANDERER )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->rename_item_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rename_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config->rename_item_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&rename_config->rename_item_id);
    }
    if ( !ItemExcelConfigMgr::findItemConfig(&txt_config_mgr->item_config_mgr, rename_config->rename_item_id) )
    {
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
        "./src/txt_data_manual/RenameExcelConfig.cpp",
        "checkAvatarRenameConfig",
        120);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              v10,
              (const char (*)[57])"[AVATAR_RENAME] cannot find valid item config, item_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &rename_config->rename_item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->rename_pre_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rename_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config->rename_pre_quest_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&rename_config->rename_pre_quest_id);
    }
    if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, rename_config->rename_pre_quest_id) )
      goto LABEL_32;
    v13 = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->rename_pre_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rename_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config->rename_pre_quest_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&rename_config->rename_pre_quest_id);
    }
    if ( data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(v13, rename_config->rename_pre_quest_id) )
LABEL_32:
      v14 = 0;
    else
      v14 = 1;
    if ( v14 )
    {
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
        "./src/txt_data_manual/RenameExcelConfig.cpp",
        "checkAvatarRenameConfig",
        125);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              v15,
              (const char (*)[63])"[AVATAR_RENAME] cannot find valid pre-quest config, quest_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &rename_config->rename_pre_quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    v17 = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->rename_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rename_config->rename_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rename_config->rename_quest_id);
    }
    if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(v17, rename_config->rename_quest_id) )
      goto LABEL_44;
    v18 = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->rename_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rename_config->rename_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rename_config->rename_quest_id);
    }
    if ( data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(v18, rename_config->rename_quest_id) )
LABEL_44:
      v19 = 0;
    else
      v19 = 1;
    if ( v19 )
    {
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
        "./src/txt_data_manual/RenameExcelConfig.cpp",
        "checkAvatarRenameConfig",
        130);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              v20,
              (const char (*)[59])"[AVATAR_RENAME] cannot find valid quest config, quest_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &rename_config->rename_pre_quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    p_mail_config_mgr = &txt_config_mgr->mail_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->audit_fail_mail_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rename_config->audit_fail_mail_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rename_config->audit_fail_mail_id);
    }
    if ( !data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, rename_config->audit_fail_mail_id) )
    {
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
        "./src/txt_data_manual/RenameExcelConfig.cpp",
        "checkAvatarRenameConfig",
        135);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              v23,
              (const char (*)[54])"[AVATAR_RENAME] cannot find valid mail config, mail: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &rename_config->audit_fail_mail_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    v25 = &txt_config_mgr->mail_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->reset_mail_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rename_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config->reset_mail_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&rename_config->reset_mail_id);
    }
    if ( !data::MailExcelConfigMgrBase::findMailExcelConfig(v25, rename_config->reset_mail_id) )
    {
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
        "./src/txt_data_manual/RenameExcelConfig.cpp",
        "checkAvatarRenameConfig",
        140);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              v26,
              (const char (*)[54])"[AVATAR_RENAME] cannot find valid mail config, mail: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &rename_config->reset_mail_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    v28 = &txt_config_mgr->mail_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&rename_config->ip_reset_mail_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rename_config->ip_reset_mail_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rename_config->ip_reset_mail_id);
    }
    if ( !data::MailExcelConfigMgrBase::findMailExcelConfig(v28, rename_config->ip_reset_mail_id) )
    {
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
        "./src/txt_data_manual/RenameExcelConfig.cpp",
        "checkAvatarRenameConfig",
        145);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              v29,
              (const char (*)[54])"[AVATAR_RENAME] cannot find valid mail config, mail: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &rename_config->ip_reset_mail_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/RenameExcelConfig.cpp",
    "checkAvatarRenameConfig",
    152);
  v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 576),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v32 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v31,
          (const char (*)[31])"[AVATAR_RENAME] unknown type: ");
  v33 = (((_BYTE)rename_config + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&rename_config->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rename_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rename_config->type >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&rename_config->type);
  }
  v34 = (__int64)data::enumValToStr(rename_config->type, v33);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    v34 = __asan_report_store8(v3 + 96, v33);
  *(_QWORD *)(v3 + 96) = v34;
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v32, (const char *const *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
  v2 = -1;
  v9 = 0;
LABEL_76:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
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
  }
  return result;
};

// Line 161: range 0000000014646D3A-0000000014647110
int32_t __cdecl RenameExcelConfigMgr::checkAvatarInvalidNameConfig(
        const RenameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::set<std::string>::size_type v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  int32_t result; // eax
  std::map<unsigned int,std::set<std::string>> *__for_range; // [rsp+10h] [rbp-110h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string> > >::reference v14; // [rsp+18h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<std::string> > >::type *avatar_id; // [rsp+20h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<std::string> > >::type *invalid_name_set; // [rsp+28h] [rbp-F8h]
  char v17[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:162 64 8 13 __for_end:162 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RenameExcelConfigMgr::checkAvatarInvalidNameConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->avatar_id_to_invalid_name_set_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::map<unsigned int,std::set<std::string>>::const_iterator *)(v3 + 32) = std::map<unsigned int,std::set<std::string>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::set<std::string>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::set<std::string>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string> > >::_Self *)(v3 + 32),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string> > >::_Self *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string> > > *const)(v3 + 32));
    avatar_id = std::get<0ul,unsigned int const,std::set<std::string>>(v14);
    invalid_name_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<std::string> > >::type *)std::get<1ul,unsigned int const,std::set<std::string>>(v14);
    if ( std::set<std::string>::size(invalid_name_set) > 0x1388 )
      break;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string> > > *const)(v3 + 32));
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
    "./src/txt_data_manual/RenameExcelConfig.cpp",
    "checkAvatarInvalidNameConfig",
    167);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v6, (const char (*)[48])byte_1ADCCD00);
  v8 = std::set<std::string>::size(invalid_name_set);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8(v3 + 96, byte_1ADCCD00);
  *(_QWORD *)(v3 + 96) = v8;
  v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 96));
  v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", avatar_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, avatar_id);
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  v2 = -1;
  v11 = 0;
LABEL_18:
  if ( v11 == 1 )
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

// Line 175: range 0000000014647112-00000000146472CD
const data::AvatarRenameExcelConfig *__fastcall RenameExcelConfigMgr::findAvatarRenameExcelConfigByAvatarId(
        const RenameExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::AvatarRenameExcelConfig> *p_avatar_id_to_rename_config_map; // rdx
  std::map<unsigned int,data::AvatarRenameExcelConfig> *v6; // rdx
  bool v7; // al
  const data::AvatarRenameExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:174 64 8 8 iter:176 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RenameExcelConfigMgr::findAvatarRenameExcelConfigByAvatarId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_id_to_rename_config_map = &this->avatar_id_to_rename_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::map<unsigned int,data::AvatarRenameExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::AvatarRenameExcelConfig>::find(
                                                                                         p_avatar_id_to_rename_config_map,
                                                                                         (const std::map<unsigned int,data::AvatarRenameExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_id_to_rename_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::AvatarRenameExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::AvatarRenameExcelConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AvatarRenameExcelConfig> > *const)(v2 + 64))->second;
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

// Line 185: range 00000000146472CE-000000001464748F
const std::set<std::string> *__fastcall RenameExcelConfigMgr::findAvatarInvalidNameByAvatarId[abi:cxx11](
        const RenameExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<std::string>> *p_avatar_id_to_invalid_name_set_map; // rdx
  std::map<unsigned int,std::set<std::string>> *v6; // rdx
  bool v7; // al
  const std::set<std::string> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:184 64 8 8 iter:186 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RenameExcelConfigMgr::findAvatarInvalidNameByAvatarId[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_id_to_invalid_name_set_map = &this->avatar_id_to_invalid_name_set_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::map<unsigned int,std::set<std::string>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<std::string>>::find(
                                                                                 p_avatar_id_to_invalid_name_set_map,
                                                                                 (const std::map<unsigned int,std::set<std::string>>::key_type *)(v2 + 48));
  v6 = &this->avatar_id_to_invalid_name_set_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<std::string>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<std::string>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::string> > > *const)(v2 + 64))->second;
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
