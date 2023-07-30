// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarExcelConfig.cpp

// Line 20: range 0000000012E67756-0000000012E6799B
int32_t __cdecl AvatarExcelConfigMgr::rewriteConfig(AvatarExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( AvatarExcelConfigMgr::rewriteAvatarExcelConfig(this, txt_config_mgr)
    || AvatarExcelConfigMgr::rewriteAvatarLevelExcelConfig(this, txt_config_mgr)
    || AvatarExcelConfigMgr::rewriteAvatarFetterLevelExcelConfig(this, txt_config_mgr)
    || AvatarExcelConfigMgr::rewriteAvatarPromoteExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/AvatarExcelConfig.cpp",
      "rewriteConfig",
      26);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v6,
      (const char (*)[32])"rewriteAvatarExcelConfig failed");
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

// Line 34: range 0000000012E6799C-0000000012E67BA7
int32_t __cdecl AvatarExcelConfigMgr::checkConfig(AvatarExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( AvatarExcelConfigMgr::checkAvatarExcelConfig(this, txt_config_mgr)
    || AvatarExcelConfigMgr::checkAvatarPromoteExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/AvatarExcelConfig.cpp",
      "checkConfig",
      38);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v6,
      (const char (*)[30])"checkAvatarExcelConfig failed");
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

// Line 46: range 0000000012E67BA8-0000000012E67BF4
uint32_t __cdecl AvatarExcelConfigMgr::getAvatarMaxLevel(const AvatarExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_max_level);
  }
  return this->avatar_max_level;
};

// Line 51: range 0000000012E67BF6-0000000012E68087
__int64 __fastcall AvatarExcelConfigMgr::getAvatarMaxPromoteLevel(
        const AvatarExcelConfigMgr *const this,
        uint32_t avatar_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::map<unsigned int,unsigned int> *p_max_avatar_promote_level_map; // rdx
  const std::map<unsigned int,unsigned int>::key_type *p_avatar_promote_id; // rcx
  __int64 v9; // rsi
  const std::map<unsigned int,unsigned int>::key_type *v10; // rsi
  std::map<unsigned int,unsigned int> *v11; // rdx
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v15; // rdx
  unsigned int *p_second; // rax
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-128h]
  char v18[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 avatar_id:50 64 8 7 iter:59 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::getAvatarMaxPromoteLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  *(_DWORD *)(v2 + 48) = avatar_id;
  avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( avatar_config_ptr )
  {
    p_max_avatar_promote_level_map = &this->max_avatar_promote_level_map;
    p_avatar_promote_id = &avatar_config_ptr->avatar_promote_id;
    v9 = *(unsigned __int8 *)(((v2 + 64) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 )
      __asan_report_store8(v2 + 64, v9);
    v10 = p_avatar_promote_id;
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          p_max_avatar_promote_level_map,
                                                                          p_avatar_promote_id);
    v11 = &this->max_avatar_promote_level_map;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v10);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
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
        3u,
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "getAvatarMaxPromoteLevel",
        62);
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[19])"avatar_promote_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              &avatar_config_ptr->avatar_promote_id);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        v14,
        (const char (*)[38])" not in max_avatar_promote_level_map ");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0LL;
    }
    else
    {
      v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
      p_second = &v15->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = v15->second;
    }
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
      "./src/txt_data_manual/AvatarExcelConfig.cpp",
      "getAvatarMaxPromoteLevel",
      55);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[39])"findAvatarExcelConfig fail, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 70: range 0000000012E68088-0000000012E68300
const data::AvatarPromoteExcelConfig *__fastcall AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(
        const AvatarExcelConfigMgr *const this,
        uint32_t avatar_id,
        uint32_t promote_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::AvatarPromoteExcelConfig *result; // rax
  const unsigned int *p_avatar_promote_id; // rdx
  std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> *p_avatar_promote_config_map; // rdx
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-D8h]
  char v11[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 promote_level:69 64 8 7 iter:76 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 48) = promote_level;
  avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(this, avatar_id);
  if ( avatar_config_ptr )
  {
    p_avatar_promote_id = &avatar_config_ptr->avatar_promote_id;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, avatar_id);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int const&,unsigned int &>(
                                                           p_avatar_promote_id,
                                                           (unsigned int *)(v3 + 48));
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v3 + 48);
    *(std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::const_iterator *)(v3 + 64) = std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::find(&this->avatar_promote_config_map, (const std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::key_type *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_avatar_promote_config_map = &this->avatar_promote_config_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::const_iterator *)(v3 + 128) = std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::end(p_avatar_promote_config_map);
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> >::_Self *)(v3 + 128)) )
    {
      result = 0LL;
    }
    else
    {
      result = &std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> > *const)(v3 + 64))->second;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 81: range 0000000012E68302-0000000012E6898F
__int64 __fastcall AvatarExcelConfigMgr::findPromoteLevelByAvatarIdAndLevel(
        const AvatarExcelConfigMgr *const this,
        uint32_t avatar_id,
        uint32_t level,
        unsigned __int64 promote_level)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  uint32_t avatar_promote_id; // ecx
  uint32_t v9; // r14d
  uint32_t *p_unlock_max_level; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  uint32_t *v12; // rdx
  char v13; // cl
  char *v14; // rsi
  bool v15; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v16; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v19; // dl
  __int64 v20; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v21; // rdx
  unsigned int *v22; // rax
  uint32_t v23; // ecx
  char v24; // dl
  __int64 result; // rax
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+28h] [rbp-148h]
  data::AvatarPromoteExcelConfigVec *__for_range; // [rsp+30h] [rbp-140h]
  const data::AvatarPromoteExcelConfig *config; // [rsp+38h] [rbp-138h]
  char v31[304]; // [rsp+40h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 8 level:80 48 8 14 __for_begin:88 80 8 12 __for_end:88 112 8 5 it:99 144 8 9 <unknown> 17"
                        "6 48 33 max_level_to_promote_level_map:87";
  *(_QWORD *)(v4 + 16) = AvatarExcelConfigMgr::findPromoteLevelByAvatarIdAndLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 32) = level;
  avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(this, avatar_id);
  if ( avatar_config_ptr )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 176));
    __for_range = &this->avatar_promote_excel_config_vec;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 48, avatar_id);
    *(std::vector<data::AvatarPromoteExcelConfig>::const_iterator *)(v4 + 48) = std::vector<data::AvatarPromoteExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 80, avatar_id);
    *(std::vector<data::AvatarPromoteExcelConfig>::const_iterator *)(v4 + 80) = std::vector<data::AvatarPromoteExcelConfig>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::AvatarPromoteExcelConfig const*,std::vector<data::AvatarPromoteExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *)(v4 + 48),
              (const __gnu_cxx::__normal_iterator<const data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *)(v4 + 80)) )
    {
      config = __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig const*,std::vector<data::AvatarPromoteExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *const)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&config->avatar_promote_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->avatar_promote_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->avatar_promote_id);
      }
      avatar_promote_id = config->avatar_promote_id;
      if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_promote_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_promote_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&avatar_config_ptr->avatar_promote_id);
      }
      if ( avatar_promote_id == avatar_config_ptr->avatar_promote_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->promote_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->promote_level >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->promote_level);
        }
        v9 = config->promote_level;
        p_unlock_max_level = &config->unlock_max_level;
        v11 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v4 + 176),
                &config->unlock_max_level);
        v12 = v11;
        v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
        {
          LOBYTE(p_unlock_max_level) = v13 != 0;
          __asan_report_store4(v11, p_unlock_max_level);
        }
        *v12 = v9;
      }
      __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig const*,std::vector<data::AvatarPromoteExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *const)(v4 + 48));
    }
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v4 + 176)) )
    {
      v7 = -1;
    }
    else
    {
      *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 112, v4 + 80);
      *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 112) = std::map<unsigned int,unsigned int>::lower_bound(
                                                                       (std::map<unsigned int,unsigned int> *const)(v4 + 176),
                                                                       (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 32));
      *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 144, v4 + 32);
      *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 144) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v4 + 176));
      v14 = (char *)(v4 + 144);
      v15 = std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 112),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 144));
      *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
      {
        v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 112));
        p_second = &v16->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        second = v16->second;
        v19 = *(_BYTE *)((promote_level >> 3) + 0x7FFF8000);
        if ( v19 != 0 && (char)((promote_level & 7) + 3) >= v19 )
        {
          LOBYTE(v14) = v19 != 0;
          __asan_report_store4(promote_level, v14);
        }
        *(_DWORD *)promote_level = second;
      }
      else
      {
        v20 = 0LL;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator--(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 112),
          0);
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 112));
        v22 = &v21->second;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        v23 = v21->second;
        v24 = *(_BYTE *)((promote_level >> 3) + 0x7FFF8000);
        if ( v24 != 0 && (char)((promote_level & 7) + 3) >= v24 )
        {
          LOBYTE(v20) = v24 != 0;
          __asan_report_store4(promote_level, v20);
        }
        *(_DWORD *)promote_level = v23;
      }
      v7 = 0;
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 176));
  }
  else
  {
    v7 = -1;
  }
  result = v7;
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 115: range 0000000012E68990-0000000012E68BDE
__int64 __fastcall AvatarExcelConfigMgr::findFetterExpByFetterLevel(
        const AvatarExcelConfigMgr *const this,
        __int64 fetter_level,
        unsigned __int64 level_exp)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,unsigned int> *p_fetter_level_to_exp_map; // rdx
  std::map<unsigned int,unsigned int> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v14; // dl
  char v16[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 fetter_level:114 64 8 8 iter:116 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarExcelConfigMgr::findFetterExpByFetterLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = fetter_level;
  p_fetter_level_to_exp_map = &this->fetter_level_to_exp_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, fetter_level);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_fetter_level_to_exp_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->fetter_level_to_exp_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v11->second;
    v14 = *(_BYTE *)((level_exp >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)((level_exp & 7) + 3) >= v14 )
    {
      LOBYTE(v8) = v14 != 0;
      __asan_report_store4(level_exp, v8);
    }
    *(_DWORD *)level_exp = second;
    result = 0LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 126: range 0000000012E68BE0-0000000012E68E2E
__int64 __fastcall AvatarExcelConfigMgr::findTotalFetterExpByFetterLevel(
        const AvatarExcelConfigMgr *const this,
        __int64 fetter_level,
        unsigned __int64 total_exp)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,unsigned int> *p_fetter_level_to_total_exp_map; // rdx
  std::map<unsigned int,unsigned int> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v14; // dl
  char v16[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 fetter_level:125 64 8 8 iter:127 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarExcelConfigMgr::findTotalFetterExpByFetterLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = fetter_level;
  p_fetter_level_to_total_exp_map = &this->fetter_level_to_total_exp_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, fetter_level);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_fetter_level_to_total_exp_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->fetter_level_to_total_exp_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v11->second;
    v14 = *(_BYTE *)((total_exp >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)((total_exp & 7) + 3) >= v14 )
    {
      LOBYTE(v8) = v14 != 0;
      __asan_report_store4(total_exp, v8);
    }
    *(_DWORD *)total_exp = second;
    result = 0LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 137: range 0000000012E68E30-0000000012E6901E
__int64 __fastcall AvatarExcelConfigMgr::getTotalExpToLevel(const AvatarExcelConfigMgr *const this, __int64 level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_level_total_exp_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 level:136 64 8 8 iter:138 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::getTotalExpToLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level;
  p_level_total_exp_map = &this->level_total_exp_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_level_total_exp_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->level_total_exp_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96)) )
  {
    result = 0LL;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 144: range 0000000012E69020-0000000012E691E1
const std::map<data::FightPropType,float> *__fastcall AvatarExcelConfigMgr::findBaseLevelProp(
        const AvatarExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::map<data::FightPropType,float>> *p_base_level_prop_map; // rdx
  std::unordered_map<unsigned int,std::map<data::FightPropType,float>> *v6; // rdx
  bool v7; // al
  const std::map<data::FightPropType,float> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:143 64 8 8 iter:145 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::findBaseLevelProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_base_level_prop_map = &this->base_level_prop_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::find(p_base_level_prop_map, (const std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::key_type *)(v2 + 48));
  v6 = &this->base_level_prop_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::map<data::FightPropType,float>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::FightPropType,float> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::FightPropType,float> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::FightPropType,float>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::FightPropType,float> >,false,false> *const)(v2 + 64))->second;
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

// Line 154: range 0000000012E6927E-0000000012E6EBF7
int32_t __cdecl AvatarExcelConfigMgr::rewriteAvatarExcelConfig(
        AvatarExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  float *v7; // r8
  float *p_hp_base; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v9; // rax
  float *v10; // r8
  common::milog::MiLogStream *v11; // rax
  const char *v12; // rsi
  common::milog::MiLogStream *v13; // rcx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  _BOOL4 v17; // r15d
  float *p_attack_base; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v19; // rax
  float *v20; // r8
  common::milog::MiLogStream *v21; // rax
  const char *v22; // rsi
  common::milog::MiLogStream *v23; // rcx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  float *p_defense_base; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v28; // rax
  float *v29; // r8
  common::milog::MiLogStream *v30; // rax
  const char *v31; // rsi
  common::milog::MiLogStream *v32; // rcx
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  float *p_critical; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v37; // rax
  float *v38; // r8
  common::milog::MiLogStream *v39; // rax
  const char *v40; // rsi
  common::milog::MiLogStream *v41; // rcx
  char v42; // al
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  float *p_anti_critical; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v46; // rax
  float *v47; // r8
  common::milog::MiLogStream *v48; // rax
  const char *v49; // rsi
  common::milog::MiLogStream *v50; // rcx
  char v51; // al
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  float *p_critical_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v55; // rax
  float *v56; // r8
  common::milog::MiLogStream *v57; // rax
  const char *v58; // rsi
  common::milog::MiLogStream *v59; // rcx
  char v60; // al
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  float *p_fire_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v64; // rax
  float *v65; // r8
  common::milog::MiLogStream *v66; // rax
  const char *v67; // rsi
  common::milog::MiLogStream *v68; // rcx
  char v69; // al
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  float *p_fire_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v73; // rax
  float *v74; // r8
  common::milog::MiLogStream *v75; // rax
  const char *v76; // rsi
  common::milog::MiLogStream *v77; // rcx
  char v78; // al
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  float *p_grass_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v82; // rax
  float *v83; // r8
  common::milog::MiLogStream *v84; // rax
  const char *v85; // rsi
  common::milog::MiLogStream *v86; // rcx
  char v87; // al
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  float *p_grass_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v91; // rax
  float *v92; // r8
  common::milog::MiLogStream *v93; // rax
  const char *v94; // rsi
  common::milog::MiLogStream *v95; // rcx
  char v96; // al
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  float *p_water_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v100; // rax
  float *v101; // r8
  common::milog::MiLogStream *v102; // rax
  const char *v103; // rsi
  common::milog::MiLogStream *v104; // rcx
  char v105; // al
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  float *p_water_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v109; // rax
  float *v110; // r8
  common::milog::MiLogStream *v111; // rax
  const char *v112; // rsi
  common::milog::MiLogStream *v113; // rcx
  char v114; // al
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  float *p_elec_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v118; // rax
  float *v119; // r8
  common::milog::MiLogStream *v120; // rax
  const char *v121; // rsi
  common::milog::MiLogStream *v122; // rcx
  char v123; // al
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  float *p_elec_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v127; // rax
  float *v128; // r8
  common::milog::MiLogStream *v129; // rax
  const char *v130; // rsi
  common::milog::MiLogStream *v131; // rcx
  char v132; // al
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  float *p_wind_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v136; // rax
  float *v137; // r8
  common::milog::MiLogStream *v138; // rax
  const char *v139; // rsi
  common::milog::MiLogStream *v140; // rcx
  char v141; // al
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  float *p_wind_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v145; // rax
  float *v146; // r8
  common::milog::MiLogStream *v147; // rax
  const char *v148; // rsi
  common::milog::MiLogStream *v149; // rcx
  char v150; // al
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  float *p_ice_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v154; // rax
  float *v155; // r8
  common::milog::MiLogStream *v156; // rax
  const char *v157; // rsi
  common::milog::MiLogStream *v158; // rcx
  char v159; // al
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  float *p_ice_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v163; // rax
  float *v164; // r8
  common::milog::MiLogStream *v165; // rax
  const char *v166; // rsi
  common::milog::MiLogStream *v167; // rcx
  char v168; // al
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  float *p_rock_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v172; // rax
  float *v173; // r8
  common::milog::MiLogStream *v174; // rax
  const char *v175; // rsi
  common::milog::MiLogStream *v176; // rcx
  char v177; // al
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  float *p_rock_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v181; // rax
  float *v182; // r8
  common::milog::MiLogStream *v183; // rax
  const char *v184; // rsi
  common::milog::MiLogStream *v185; // rcx
  char v186; // al
  common::milog::MiLogStream *v187; // rax
  common::milog::MiLogStream *v188; // rax
  float *p_element_mastery; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v190; // rax
  float *v191; // r8
  common::milog::MiLogStream *v192; // rax
  const char *v193; // rsi
  common::milog::MiLogStream *v194; // rcx
  char v195; // al
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // rax
  float *p_physical_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v199; // rax
  float *v200; // r8
  common::milog::MiLogStream *v201; // rax
  const char *v202; // rsi
  common::milog::MiLogStream *v203; // rcx
  char v204; // al
  common::milog::MiLogStream *v205; // rax
  common::milog::MiLogStream *v206; // rax
  float *p_physical_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v208; // rax
  common::milog::MiLogStream *v209; // rax
  const char *v210; // rsi
  common::milog::MiLogStream *v211; // rcx
  char v212; // al
  common::milog::MiLogStream *v213; // rax
  common::milog::MiLogStream *v214; // rax
  std::map<data::FightPropType,float> *v215; // rdx
  const unsigned int *v216; // rcx
  std::map<data::FightPropType,float> *v217; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<data::FightPropType,float> >,false,false>,bool> v218; // rax
  common::milog::MiLogStream *v219; // rax
  common::milog::MiLogStream *v220; // rdx
  std::vector<unsigned int>::size_type v221; // r15
  common::milog::MiLogStream *v222; // rax
  common::milog::MiLogStream *v223; // rdx
  unsigned __int64 v224; // rax
  unsigned int *v225; // r15
  unsigned int *v226; // rax
  unsigned int *v227; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v228; // rax
  common::milog::MiLogStream *v229; // rax
  common::milog::MiLogStream *v230; // r14
  const unsigned int *v231; // rax
  common::milog::MiLogStream *v232; // rax
  common::milog::MiLogStream *v233; // rdx
  _BOOL4 v234; // r15d
  std::unordered_map<unsigned int,unsigned int> *v235; // rdx
  const unsigned int *v236; // rcx
  std::unordered_map<unsigned int,unsigned int> *v237; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false>,bool> v238; // rax
  common::milog::MiLogStream *v239; // rax
  common::milog::MiLogStream *v240; // rdx
  TxtConfigMgr *v241; // rsi
  data::ElementType inited; // edx
  data::ElementType *v243; // r8
  char v244; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElementType>,false,false>,bool> v245; // rax
  common::milog::MiLogStream *v246; // rax
  common::milog::MiLogStream *v247; // rdx
  std::string *v248; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> v249; // rax
  common::milog::MiLogStream *v250; // rax
  common::milog::MiLogStream *v251; // rax
  int v252; // r15d
  unsigned __int64 v253; // rax
  unsigned __int64 v254; // rax
  int v255; // eax
  uint32_t idx; // [rsp+3Ch] [rbp-F54h]
  data::AvatarExcelConfigMap *__for_range; // [rsp+40h] [rbp-F50h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::reference __in; // [rsp+48h] [rbp-F48h]
  const unsigned int *avatar_id; // [rsp+50h] [rbp-F40h]
  std::tuple_element<1,std::pair<unsigned int const,data::AvatarExcelConfig> >::type *avatar_config; // [rsp+58h] [rbp-F38h]
  char v263[3888]; // [rsp+60h] [rbp-F30h] BYREF

  v3 = (unsigned __int64)v263;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(3840LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "93 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 54"
                        "4 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 "
                        "<unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkno"
                        "wn> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 80"
                        "0 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 13 elem_type:229 864 8 15 __for_begin:"
                        "157 896 8 13 __for_end:157 928 8 39 append_hash_str_with_path_decorator:238 960 32 9 <unknown> 1"
                        "024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknow"
                        "n> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <un"
                        "known> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9"
                        " <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 "
                        "32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2"
                        "560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknow"
                        "n> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 12 hash_str:254 3136 32 9"
                        " <unknown> 3200 48 17 base_prop_map:161 3280 56 22 promote_reward_map:212 3376 392 6 ss:237";
  *(_QWORD *)(v3 + 16) = AvatarExcelConfigMgr::rewriteAvatarExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234753535;
  v5[536862723] = -234556927;
  v5[536862724] = -234556924;
  v5[536862725] = -234556924;
  v5[536862726] = -234556924;
  v5[536862727] = -234556924;
  v5[536862728] = -234556924;
  v5[536862729] = -234556924;
  v5[536862730] = -234556924;
  v5[536862731] = -234556924;
  v5[536862732] = -234556924;
  v5[536862733] = -234556924;
  v5[536862734] = -234556924;
  v5[536862735] = -234556924;
  v5[536862736] = -234556924;
  v5[536862737] = -234556924;
  v5[536862738] = -234556924;
  v5[536862739] = -234556924;
  v5[536862740] = -234556924;
  v5[536862741] = -234556924;
  v5[536862742] = -234556924;
  v5[536862743] = -234556924;
  v5[536862744] = -234556924;
  v5[536862745] = -234556924;
  v5[536862746] = -234556924;
  v5[536862747] = -218959360;
  v5[536862748] = -218959360;
  v5[536862749] = -218959360;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -218959118;
  v5[536862763] = -218959118;
  v5[536862765] = -218959118;
  v5[536862767] = -218959118;
  v5[536862769] = -218959118;
  v5[536862771] = -218959118;
  v5[536862773] = -218959118;
  v5[536862775] = -218959118;
  v5[536862777] = -218959118;
  v5[536862779] = -218959118;
  v5[536862781] = -218959118;
  v5[536862783] = -218959118;
  v5[536862785] = -218959118;
  v5[536862787] = -218959118;
  v5[536862789] = -218959118;
  v5[536862791] = -218959118;
  v5[536862793] = -218959118;
  v5[536862795] = -218959118;
  v5[536862797] = -218959118;
  v5[536862799] = -218959118;
  v5[536862801] = -218959118;
  v5[536862803] = -218959118;
  v5[536862805] = -218959118;
  v5[536862807] = -218959118;
  v5[536862809] = -218959118;
  v5[536862811] = -218959118;
  v5[536862813] = -218959118;
  v5[536862815] = -218959118;
  v5[536862817] = -218959118;
  v5[536862819] = -218959118;
  v5[536862821] = -219021312;
  v5[536862822] = 62194;
  v5[536862824] = -218959360;
  v5[536862825] = 62194;
  v5[536862837] = -218103808;
  v5[536862838] = -202116109;
  v5[536862839] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_use_avatar_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->formal_use_avatar_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->formal_use_avatar_count_, txt_config_mgr);
  }
  this->formal_use_avatar_count_ = 0;
  __for_range = &this->avatar_excel_config_map;
  if ( *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 864, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::iterator *)(v3 + 864) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 896, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::iterator *)(v3 + 896) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v3 + 864),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v3 + 896)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false> *const)(v3 + 864));
    avatar_id = std::get<0ul,unsigned int const,data::AvatarExcelConfig>(__in);
    avatar_config = std::get<1ul,unsigned int const,data::AvatarExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::FightPropGrowConfig,data::FightPropType data::FightPropGrowConfig::*>(
      &avatar_config->prop_grow_curves,
      (data::FightPropType *)8);
    v6 = ((v3 + 3200) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v3 + 3200));
    p_hp_base = &avatar_config->hp_base;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 112, p_hp_base);
    *(_DWORD *)(v3 + 112) = 1;
    v9 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
           (std::map<data::FightPropType,float> *const)(v3 + 3200),
           (data::FightPropType *)(v3 + 112),
           p_hp_base,
           (data::FightPropType *)(v3 + 112),
           v7);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    if ( !v9.second )
    {
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 960, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 960),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "rewriteAvatarExcelConfig",
        170);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 960),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = "duplicate prop_type:";
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])"duplicate prop_type:");
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
      v14 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v12) = v14 != 0;
        __asan_report_store4(v3 + 128, v12);
      }
      *(_DWORD *)(v3 + 128) = 1;
      v15 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
              v13,
              (const data::FightPropType *)(v3 + 128));
      v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" value:");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v16, &avatar_config->hp_base);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
    }
    else
    {
      p_attack_base = &avatar_config->attack_base;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 144, p_attack_base);
      *(_DWORD *)(v3 + 144) = 4;
      v19 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
              (std::map<data::FightPropType,float> *const)(v3 + 3200),
              (data::FightPropType *)(v3 + 144),
              p_attack_base,
              (data::FightPropType *)(v3 + 144),
              v10);
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( !v19.second )
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
          "./src/txt_data_manual/AvatarExcelConfig.cpp",
          "rewriteAvatarExcelConfig",
          171);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1024),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = "duplicate prop_type:";
        v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v21,
                (const char (*)[21])"duplicate prop_type:");
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
        v24 = *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000);
        if ( v24 != 0 && v24 <= 3 )
        {
          LOBYTE(v22) = v24 != 0;
          __asan_report_store4(v3 + 160, v22);
        }
        *(_DWORD *)(v3 + 160) = 4;
        v25 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                v23,
                (const data::FightPropType *)(v3 + 160));
        v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" value:");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v26, &avatar_config->attack_base);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
        *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
      }
      else
      {
        p_defense_base = &avatar_config->defense_base;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 176, p_defense_base);
        *(_DWORD *)(v3 + 176) = 7;
        v28 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                (std::map<data::FightPropType,float> *const)(v3 + 3200),
                (data::FightPropType *)(v3 + 176),
                p_defense_base,
                (data::FightPropType *)(v3 + 176),
                v20);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        if ( !v28.second )
        {
          *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1088, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1088),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarExcelConfig.cpp",
            "rewriteAvatarExcelConfig",
            172);
          v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1088),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v31 = "duplicate prop_type:";
          v32 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v30,
                  (const char (*)[21])"duplicate prop_type:");
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 4;
          v33 = *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000);
          if ( v33 != 0 && v33 <= 3 )
          {
            LOBYTE(v31) = v33 != 0;
            __asan_report_store4(v3 + 192, v31);
          }
          *(_DWORD *)(v3 + 192) = 7;
          v34 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                  v32,
                  (const data::FightPropType *)(v3 + 192));
          v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])" value:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v35, &avatar_config->defense_base);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
          *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
        }
        else
        {
          p_critical = &avatar_config->critical;
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 208, p_critical);
          *(_DWORD *)(v3 + 208) = 20;
          v37 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                  (std::map<data::FightPropType,float> *const)(v3 + 3200),
                  (data::FightPropType *)(v3 + 208),
                  p_critical,
                  (data::FightPropType *)(v3 + 208),
                  v29);
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( !v37.second )
          {
            *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1152, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1152),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/AvatarExcelConfig.cpp",
              "rewriteAvatarExcelConfig",
              173);
            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1152),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v40 = "duplicate prop_type:";
            v41 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v39,
                    (const char (*)[21])"duplicate prop_type:");
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 4;
            v42 = *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000);
            if ( v42 != 0 && v42 <= 3 )
            {
              LOBYTE(v40) = v42 != 0;
              __asan_report_store4(v3 + 224, v40);
            }
            *(_DWORD *)(v3 + 224) = 20;
            v43 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                    v41,
                    (const data::FightPropType *)(v3 + 224));
            v44 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])" value:");
            common::milog::MiLogStream::operator<<<float,(float *)0>(v44, &avatar_config->critical);
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
            *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v17 = 0;
          }
          else
          {
            p_anti_critical = &avatar_config->anti_critical;
            *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 240, p_anti_critical);
            *(_DWORD *)(v3 + 240) = 21;
            v46 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                    (std::map<data::FightPropType,float> *const)(v3 + 3200),
                    (data::FightPropType *)(v3 + 240),
                    p_anti_critical,
                    (data::FightPropType *)(v3 + 240),
                    v38);
            *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
            if ( !v46.second )
            {
              *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1216, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1216),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/AvatarExcelConfig.cpp",
                "rewriteAvatarExcelConfig",
                174);
              v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1216),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v49 = "duplicate prop_type:";
              v50 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v48,
                      (const char (*)[21])"duplicate prop_type:");
              *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 4;
              v51 = *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000);
              if ( v51 != 0 && v51 <= 3 )
              {
                LOBYTE(v49) = v51 != 0;
                __asan_report_store4(v3 + 256, v49);
              }
              *(_DWORD *)(v3 + 256) = 21;
              v52 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                      v50,
                      (const data::FightPropType *)(v3 + 256));
              v53 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v52, (const char (*)[8])" value:");
              common::milog::MiLogStream::operator<<<float,(float *)0>(v53, &avatar_config->anti_critical);
              *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
              *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v17 = 0;
            }
            else
            {
              p_critical_hurt = &avatar_config->critical_hurt;
              *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 272, p_critical_hurt);
              *(_DWORD *)(v3 + 272) = 22;
              v55 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                      (std::map<data::FightPropType,float> *const)(v3 + 3200),
                      (data::FightPropType *)(v3 + 272),
                      p_critical_hurt,
                      (data::FightPropType *)(v3 + 272),
                      v47);
              *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
              if ( !v55.second )
              {
                *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1280, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1280),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/AvatarExcelConfig.cpp",
                  "rewriteAvatarExcelConfig",
                  175);
                v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1280),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v58 = "duplicate prop_type:";
                v59 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        v57,
                        (const char (*)[21])"duplicate prop_type:");
                *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 4;
                v60 = *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000);
                if ( v60 != 0 && v60 <= 3 )
                {
                  LOBYTE(v58) = v60 != 0;
                  __asan_report_store4(v3 + 288, v58);
                }
                *(_DWORD *)(v3 + 288) = 22;
                v61 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                        v59,
                        (const data::FightPropType *)(v3 + 288));
                v62 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v61, (const char (*)[8])" value:");
                common::milog::MiLogStream::operator<<<float,(float *)0>(v62, &avatar_config->critical_hurt);
                *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
                *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v17 = 0;
              }
              else
              {
                p_fire_sub_hurt = &avatar_config->fire_sub_hurt;
                *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v3 + 304, p_fire_sub_hurt);
                *(_DWORD *)(v3 + 304) = 50;
                v64 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                        (std::map<data::FightPropType,float> *const)(v3 + 3200),
                        (data::FightPropType *)(v3 + 304),
                        p_fire_sub_hurt,
                        (data::FightPropType *)(v3 + 304),
                        v56);
                *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
                if ( !v64.second )
                {
                  *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1344, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1344),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/AvatarExcelConfig.cpp",
                    "rewriteAvatarExcelConfig",
                    176);
                  v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1344),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v67 = "duplicate prop_type:";
                  v68 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          v66,
                          (const char (*)[21])"duplicate prop_type:");
                  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 4;
                  v69 = *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000);
                  if ( v69 != 0 && v69 <= 3 )
                  {
                    LOBYTE(v67) = v69 != 0;
                    __asan_report_store4(v3 + 320, v67);
                  }
                  *(_DWORD *)(v3 + 320) = 50;
                  v70 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                          v68,
                          (const data::FightPropType *)(v3 + 320));
                  v71 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v70, (const char (*)[8])" value:");
                  common::milog::MiLogStream::operator<<<float,(float *)0>(v71, &avatar_config->fire_sub_hurt);
                  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
                  *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v17 = 0;
                }
                else
                {
                  p_fire_add_hurt = &avatar_config->fire_add_hurt;
                  *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(v3 + 336, p_fire_add_hurt);
                  }
                  *(_DWORD *)(v3 + 336) = 40;
                  v73 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                          (std::map<data::FightPropType,float> *const)(v3 + 3200),
                          (data::FightPropType *)(v3 + 336),
                          p_fire_add_hurt,
                          (data::FightPropType *)(v3 + 336),
                          v65);
                  *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
                  if ( !v73.second )
                  {
                    *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1408) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1408, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1408),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/AvatarExcelConfig.cpp",
                      "rewriteAvatarExcelConfig",
                      177);
                    v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1408),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v76 = "duplicate prop_type:";
                    v77 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                            v75,
                            (const char (*)[21])"duplicate prop_type:");
                    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 4;
                    v78 = *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000);
                    if ( v78 != 0 && v78 <= 3 )
                    {
                      LOBYTE(v76) = v78 != 0;
                      __asan_report_store4(v3 + 352, v76);
                    }
                    *(_DWORD *)(v3 + 352) = 40;
                    v79 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                            v77,
                            (const data::FightPropType *)(v3 + 352));
                    v80 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v79,
                            (const char (*)[8])" value:");
                    common::milog::MiLogStream::operator<<<float,(float *)0>(v80, &avatar_config->fire_add_hurt);
                    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1408));
                    *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v17 = 0;
                  }
                  else
                  {
                    p_grass_sub_hurt = &avatar_config->grass_sub_hurt;
                    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v3 + 368, p_grass_sub_hurt);
                    }
                    *(_DWORD *)(v3 + 368) = 53;
                    v82 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                            (std::map<data::FightPropType,float> *const)(v3 + 3200),
                            (data::FightPropType *)(v3 + 368),
                            p_grass_sub_hurt,
                            (data::FightPropType *)(v3 + 368),
                            v74);
                    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
                    if ( !v82.second )
                    {
                      *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 1472, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 1472),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/AvatarExcelConfig.cpp",
                        "rewriteAvatarExcelConfig",
                        178);
                      v84 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1472),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v85 = "duplicate prop_type:";
                      v86 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                              v84,
                              (const char (*)[21])"duplicate prop_type:");
                      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 4;
                      v87 = *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000);
                      if ( v87 != 0 && v87 <= 3 )
                      {
                        LOBYTE(v85) = v87 != 0;
                        __asan_report_store4(v3 + 384, v85);
                      }
                      *(_DWORD *)(v3 + 384) = 53;
                      v88 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                              v86,
                              (const data::FightPropType *)(v3 + 384));
                      v89 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v88,
                              (const char (*)[8])" value:");
                      common::milog::MiLogStream::operator<<<float,(float *)0>(v89, &avatar_config->grass_sub_hurt);
                      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
                      *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v17 = 0;
                    }
                    else
                    {
                      p_grass_add_hurt = &avatar_config->grass_add_hurt;
                      *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 4;
                      if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(v3 + 400, p_grass_add_hurt);
                      }
                      *(_DWORD *)(v3 + 400) = 43;
                      v91 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                              (std::map<data::FightPropType,float> *const)(v3 + 3200),
                              (data::FightPropType *)(v3 + 400),
                              p_grass_add_hurt,
                              (data::FightPropType *)(v3 + 400),
                              v83);
                      *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
                      if ( !v91.second )
                      {
                        *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 1536) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 1536, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 1536),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/AvatarExcelConfig.cpp",
                          "rewriteAvatarExcelConfig",
                          179);
                        v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 1536),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v94 = "duplicate prop_type:";
                        v95 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                v93,
                                (const char (*)[21])"duplicate prop_type:");
                        *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 4;
                        v96 = *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000);
                        if ( v96 != 0 && v96 <= 3 )
                        {
                          LOBYTE(v94) = v96 != 0;
                          __asan_report_store4(v3 + 416, v94);
                        }
                        *(_DWORD *)(v3 + 416) = 43;
                        v97 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                v95,
                                (const data::FightPropType *)(v3 + 416));
                        v98 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                v97,
                                (const char (*)[8])" value:");
                        common::milog::MiLogStream::operator<<<float,(float *)0>(v98, &avatar_config->grass_add_hurt);
                        *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1536));
                        *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v17 = 0;
                      }
                      else
                      {
                        p_water_sub_hurt = &avatar_config->water_sub_hurt;
                        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 4;
                        if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(v3 + 432, p_water_sub_hurt);
                        }
                        *(_DWORD *)(v3 + 432) = 52;
                        v100 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                 (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                 (data::FightPropType *)(v3 + 432),
                                 p_water_sub_hurt,
                                 (data::FightPropType *)(v3 + 432),
                                 v92);
                        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
                        if ( !v100.second )
                        {
                          *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v3 + 1600) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 1600, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 1600),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/AvatarExcelConfig.cpp",
                            "rewriteAvatarExcelConfig",
                            180);
                          v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v3 + 1600),
                                   (const char (*)[16])"[CONFIG_ERROR] ");
                          v103 = "duplicate prop_type:";
                          v104 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                   v102,
                                   (const char (*)[21])"duplicate prop_type:");
                          *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 4;
                          v105 = *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000);
                          if ( v105 != 0 && v105 <= 3 )
                          {
                            LOBYTE(v103) = v105 != 0;
                            __asan_report_store4(v3 + 448, v103);
                          }
                          *(_DWORD *)(v3 + 448) = 52;
                          v106 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                   v104,
                                   (const data::FightPropType *)(v3 + 448));
                          v107 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                   v106,
                                   (const char (*)[8])" value:");
                          common::milog::MiLogStream::operator<<<float,(float *)0>(v107, &avatar_config->water_sub_hurt);
                          *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1600));
                          *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v17 = 0;
                        }
                        else
                        {
                          p_water_add_hurt = &avatar_config->water_add_hurt;
                          *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 4;
                          if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_store4(v3 + 464, p_water_add_hurt);
                          }
                          *(_DWORD *)(v3 + 464) = 42;
                          v109 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                   (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                   (data::FightPropType *)(v3 + 464),
                                   p_water_add_hurt,
                                   (data::FightPropType *)(v3 + 464),
                                   v101);
                          *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
                          if ( !v109.second )
                          {
                            *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v3 + 1664) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) != 0
                              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v3 + 1664, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v3 + 1664),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_manual/AvatarExcelConfig.cpp",
                              "rewriteAvatarExcelConfig",
                              181);
                            v111 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v3 + 1664),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
                            v112 = "duplicate prop_type:";
                            v113 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                     v111,
                                     (const char (*)[21])"duplicate prop_type:");
                            *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 4;
                            v114 = *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000);
                            if ( v114 != 0 && v114 <= 3 )
                            {
                              LOBYTE(v112) = v114 != 0;
                              __asan_report_store4(v3 + 480, v112);
                            }
                            *(_DWORD *)(v3 + 480) = 42;
                            v115 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                     v113,
                                     (const data::FightPropType *)(v3 + 480));
                            v116 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                     v115,
                                     (const char (*)[8])" value:");
                            common::milog::MiLogStream::operator<<<float,(float *)0>(
                              v116,
                              &avatar_config->water_add_hurt);
                            *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1664));
                            *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                            v2 = -1;
                            v17 = 0;
                          }
                          else
                          {
                            p_elec_sub_hurt = &avatar_config->elec_sub_hurt;
                            *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 4;
                            if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_store4(v3 + 496, p_elec_sub_hurt);
                            }
                            *(_DWORD *)(v3 + 496) = 51;
                            v118 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                     (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                     (data::FightPropType *)(v3 + 496),
                                     p_elec_sub_hurt,
                                     (data::FightPropType *)(v3 + 496),
                                     v110);
                            *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
                            if ( !v118.second )
                            {
                              *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v3 + 1728) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) != 0
                                && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v3 + 1728, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v3 + 1728),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                "rewriteAvatarExcelConfig",
                                182);
                              v120 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v3 + 1728),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v121 = "duplicate prop_type:";
                              v122 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                       v120,
                                       (const char (*)[21])"duplicate prop_type:");
                              *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 4;
                              v123 = *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000);
                              if ( v123 != 0 && v123 <= 3 )
                              {
                                LOBYTE(v121) = v123 != 0;
                                __asan_report_store4(v3 + 512, v121);
                              }
                              *(_DWORD *)(v3 + 512) = 51;
                              v124 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                       v122,
                                       (const data::FightPropType *)(v3 + 512));
                              v125 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                       v124,
                                       (const char (*)[8])" value:");
                              common::milog::MiLogStream::operator<<<float,(float *)0>(
                                v125,
                                &avatar_config->elec_sub_hurt);
                              *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1728));
                              *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                              v2 = -1;
                              v17 = 0;
                            }
                            else
                            {
                              p_elec_add_hurt = &avatar_config->elec_add_hurt;
                              *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 4;
                              if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_store4(v3 + 528, p_elec_add_hurt);
                              }
                              *(_DWORD *)(v3 + 528) = 41;
                              v127 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                       (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                       (data::FightPropType *)(v3 + 528),
                                       p_elec_add_hurt,
                                       (data::FightPropType *)(v3 + 528),
                                       v119);
                              *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = -8;
                              if ( !v127.second )
                              {
                                *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v3 + 1792) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v3 + 1792, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v3 + 1792),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                  "rewriteAvatarExcelConfig",
                                  183);
                                v129 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v3 + 1792),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                v130 = "duplicate prop_type:";
                                v131 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                         v129,
                                         (const char (*)[21])"duplicate prop_type:");
                                *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 4;
                                v132 = *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000);
                                if ( v132 != 0 && v132 <= 3 )
                                {
                                  LOBYTE(v130) = v132 != 0;
                                  __asan_report_store4(v3 + 544, v130);
                                }
                                *(_DWORD *)(v3 + 544) = 41;
                                v133 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                         v131,
                                         (const data::FightPropType *)(v3 + 544));
                                v134 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                         v133,
                                         (const char (*)[8])" value:");
                                common::milog::MiLogStream::operator<<<float,(float *)0>(
                                  v134,
                                  &avatar_config->elec_add_hurt);
                                *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1792));
                                *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                                v2 = -1;
                                v17 = 0;
                              }
                              else
                              {
                                p_wind_sub_hurt = &avatar_config->wind_sub_hurt;
                                *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 4;
                                if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) != 0
                                  && *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) <= 3 )
                                {
                                  __asan_report_store4(v3 + 560, p_wind_sub_hurt);
                                }
                                *(_DWORD *)(v3 + 560) = 54;
                                v136 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                         (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                         (data::FightPropType *)(v3 + 560),
                                         p_wind_sub_hurt,
                                         (data::FightPropType *)(v3 + 560),
                                         v128);
                                *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = -8;
                                if ( !v136.second )
                                {
                                  *(_DWORD *)(((v3 + 1856) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v3 + 1856) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v3 + 1856, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v3 + 1856),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                    "rewriteAvatarExcelConfig",
                                    184);
                                  v138 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                           (common::milog::MiLogStream *const)(v3 + 1856),
                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                  v139 = "duplicate prop_type:";
                                  v140 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                           v138,
                                           (const char (*)[21])"duplicate prop_type:");
                                  *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 4;
                                  v141 = *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000);
                                  if ( v141 != 0 && v141 <= 3 )
                                  {
                                    LOBYTE(v139) = v141 != 0;
                                    __asan_report_store4(v3 + 576, v139);
                                  }
                                  *(_DWORD *)(v3 + 576) = 54;
                                  v142 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                           v140,
                                           (const data::FightPropType *)(v3 + 576));
                                  v143 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                           v142,
                                           (const char (*)[8])" value:");
                                  common::milog::MiLogStream::operator<<<float,(float *)0>(
                                    v143,
                                    &avatar_config->wind_sub_hurt);
                                  *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1856));
                                  *(_DWORD *)(((v3 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                                  v2 = -1;
                                  v17 = 0;
                                }
                                else
                                {
                                  p_wind_add_hurt = &avatar_config->wind_add_hurt;
                                  *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = 4;
                                  if ( *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) != 0
                                    && *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) <= 3 )
                                  {
                                    __asan_report_store4(v3 + 592, p_wind_add_hurt);
                                  }
                                  *(_DWORD *)(v3 + 592) = 44;
                                  v145 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                           (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                           (data::FightPropType *)(v3 + 592),
                                           p_wind_add_hurt,
                                           (data::FightPropType *)(v3 + 592),
                                           v137);
                                  *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = -8;
                                  if ( !v145.second )
                                  {
                                    *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v3 + 1920) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v3 + 1920, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v3 + 1920),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                      "rewriteAvatarExcelConfig",
                                      185);
                                    v147 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                             (common::milog::MiLogStream *const)(v3 + 1920),
                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                    v148 = "duplicate prop_type:";
                                    v149 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                             v147,
                                             (const char (*)[21])"duplicate prop_type:");
                                    *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 4;
                                    v150 = *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000);
                                    if ( v150 != 0 && v150 <= 3 )
                                    {
                                      LOBYTE(v148) = v150 != 0;
                                      __asan_report_store4(v3 + 608, v148);
                                    }
                                    *(_DWORD *)(v3 + 608) = 44;
                                    v151 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                             v149,
                                             (const data::FightPropType *)(v3 + 608));
                                    v152 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                             v151,
                                             (const char (*)[8])" value:");
                                    common::milog::MiLogStream::operator<<<float,(float *)0>(
                                      v152,
                                      &avatar_config->wind_add_hurt);
                                    *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1920));
                                    *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                                    v2 = -1;
                                    v17 = 0;
                                  }
                                  else
                                  {
                                    p_ice_sub_hurt = &avatar_config->ice_sub_hurt;
                                    *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = 4;
                                    if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) != 0
                                      && *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) <= 3 )
                                    {
                                      __asan_report_store4(v3 + 624, p_ice_sub_hurt);
                                    }
                                    *(_DWORD *)(v3 + 624) = 56;
                                    v154 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                             (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                             (data::FightPropType *)(v3 + 624),
                                             p_ice_sub_hurt,
                                             (data::FightPropType *)(v3 + 624),
                                             v146);
                                    *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = -8;
                                    if ( !v154.second )
                                    {
                                      *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v3 + 1984) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 1984, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 1984),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                        "rewriteAvatarExcelConfig",
                                        186);
                                      v156 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                               (common::milog::MiLogStream *const)(v3 + 1984),
                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                      v157 = "duplicate prop_type:";
                                      v158 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                               v156,
                                               (const char (*)[21])"duplicate prop_type:");
                                      *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 4;
                                      v159 = *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000);
                                      if ( v159 != 0 && v159 <= 3 )
                                      {
                                        LOBYTE(v157) = v159 != 0;
                                        __asan_report_store4(v3 + 640, v157);
                                      }
                                      *(_DWORD *)(v3 + 640) = 56;
                                      v160 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                               v158,
                                               (const data::FightPropType *)(v3 + 640));
                                      v161 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                               v160,
                                               (const char (*)[8])" value:");
                                      common::milog::MiLogStream::operator<<<float,(float *)0>(
                                        v161,
                                        &avatar_config->ice_sub_hurt);
                                      *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1984));
                                      *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                                      v2 = -1;
                                      v17 = 0;
                                    }
                                    else
                                    {
                                      p_ice_add_hurt = &avatar_config->ice_add_hurt;
                                      *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = 4;
                                      if ( *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) != 0
                                        && *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) <= 3 )
                                      {
                                        __asan_report_store4(v3 + 656, p_ice_add_hurt);
                                      }
                                      *(_DWORD *)(v3 + 656) = 46;
                                      v163 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                               (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                               (data::FightPropType *)(v3 + 656),
                                               p_ice_add_hurt,
                                               (data::FightPropType *)(v3 + 656),
                                               v155);
                                      *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = -8;
                                      if ( !v163.second )
                                      {
                                        *(_DWORD *)(((v3 + 2048) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v3 + 2048) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v3 + 2079) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2079) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v3 + 2048, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v3 + 2048),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                          "rewriteAvatarExcelConfig",
                                          187);
                                        v165 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                 (common::milog::MiLogStream *const)(v3 + 2048),
                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                        v166 = "duplicate prop_type:";
                                        v167 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                 v165,
                                                 (const char (*)[21])"duplicate prop_type:");
                                        *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = 4;
                                        v168 = *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000);
                                        if ( v168 != 0 && v168 <= 3 )
                                        {
                                          LOBYTE(v166) = v168 != 0;
                                          __asan_report_store4(v3 + 672, v166);
                                        }
                                        *(_DWORD *)(v3 + 672) = 46;
                                        v169 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                 v167,
                                                 (const data::FightPropType *)(v3 + 672));
                                        v170 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                 v169,
                                                 (const char (*)[8])" value:");
                                        common::milog::MiLogStream::operator<<<float,(float *)0>(
                                          v170,
                                          &avatar_config->ice_add_hurt);
                                        *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = -8;
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2048));
                                        *(_DWORD *)(((v3 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                                        v2 = -1;
                                        v17 = 0;
                                      }
                                      else
                                      {
                                        p_rock_sub_hurt = &avatar_config->rock_sub_hurt;
                                        *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) = 4;
                                        if ( *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) != 0
                                          && *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) <= 3 )
                                        {
                                          __asan_report_store4(v3 + 688, p_rock_sub_hurt);
                                        }
                                        *(_DWORD *)(v3 + 688) = 55;
                                        v172 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                 (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                                 (data::FightPropType *)(v3 + 688),
                                                 p_rock_sub_hurt,
                                                 (data::FightPropType *)(v3 + 688),
                                                 v164);
                                        *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) = -8;
                                        if ( !v172.second )
                                        {
                                          *(_DWORD *)(((v3 + 2112) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v3 + 2112) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v3 + 2143) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2143) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v3 + 2112, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v3 + 2112),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                            "rewriteAvatarExcelConfig",
                                            188);
                                          v174 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                   (common::milog::MiLogStream *const)(v3 + 2112),
                                                   (const char (*)[16])"[CONFIG_ERROR] ");
                                          v175 = "duplicate prop_type:";
                                          v176 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                   v174,
                                                   (const char (*)[21])"duplicate prop_type:");
                                          *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = 4;
                                          v177 = *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000);
                                          if ( v177 != 0 && v177 <= 3 )
                                          {
                                            LOBYTE(v175) = v177 != 0;
                                            __asan_report_store4(v3 + 704, v175);
                                          }
                                          *(_DWORD *)(v3 + 704) = 55;
                                          v178 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                   v176,
                                                   (const data::FightPropType *)(v3 + 704));
                                          v179 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                   v178,
                                                   (const char (*)[8])" value:");
                                          common::milog::MiLogStream::operator<<<float,(float *)0>(
                                            v179,
                                            &avatar_config->rock_sub_hurt);
                                          *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = -8;
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2112));
                                          *(_DWORD *)(((v3 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                                          v2 = -1;
                                          v17 = 0;
                                        }
                                        else
                                        {
                                          p_rock_add_hurt = &avatar_config->rock_add_hurt;
                                          *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) = 4;
                                          if ( *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) != 0
                                            && *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) <= 3 )
                                          {
                                            __asan_report_store4(v3 + 720, p_rock_add_hurt);
                                          }
                                          *(_DWORD *)(v3 + 720) = 45;
                                          v181 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                   (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                                   (data::FightPropType *)(v3 + 720),
                                                   p_rock_add_hurt,
                                                   (data::FightPropType *)(v3 + 720),
                                                   v173);
                                          *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) = -8;
                                          if ( !v181.second )
                                          {
                                            *(_DWORD *)(((v3 + 2176) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v3 + 2176) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v3 + 2207) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2207) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v3 + 2176, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v3 + 2176),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                              "rewriteAvatarExcelConfig",
                                              189);
                                            v183 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                     (common::milog::MiLogStream *const)(v3 + 2176),
                                                     (const char (*)[16])"[CONFIG_ERROR] ");
                                            v184 = "duplicate prop_type:";
                                            v185 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                     v183,
                                                     (const char (*)[21])"duplicate prop_type:");
                                            *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = 4;
                                            v186 = *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000);
                                            if ( v186 != 0 && v186 <= 3 )
                                            {
                                              LOBYTE(v184) = v186 != 0;
                                              __asan_report_store4(v3 + 736, v184);
                                            }
                                            *(_DWORD *)(v3 + 736) = 45;
                                            v187 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                     v185,
                                                     (const data::FightPropType *)(v3 + 736));
                                            v188 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                     v187,
                                                     (const char (*)[8])" value:");
                                            common::milog::MiLogStream::operator<<<float,(float *)0>(
                                              v188,
                                              &avatar_config->rock_add_hurt);
                                            *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = -8;
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2176));
                                            *(_DWORD *)(((v3 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                                            v2 = -1;
                                            v17 = 0;
                                          }
                                          else
                                          {
                                            p_element_mastery = &avatar_config->element_mastery;
                                            *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) = 4;
                                            if ( *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) != 0
                                              && *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) <= 3 )
                                            {
                                              __asan_report_store4(v3 + 752, p_element_mastery);
                                            }
                                            *(_DWORD *)(v3 + 752) = 28;
                                            v190 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                     (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                                     (data::FightPropType *)(v3 + 752),
                                                     p_element_mastery,
                                                     (data::FightPropType *)(v3 + 752),
                                                     v182);
                                            *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) = -8;
                                            if ( !v190.second )
                                            {
                                              *(_DWORD *)(((v3 + 2240) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v3 + 2240) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v3 + 2271) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 2271) >> 3)
                                                                                          + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v3 + 2240, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v3 + 2240),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                "rewriteAvatarExcelConfig",
                                                190);
                                              v192 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                       (common::milog::MiLogStream *const)(v3 + 2240),
                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                              v193 = "duplicate prop_type:";
                                              v194 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                       v192,
                                                       (const char (*)[21])"duplicate prop_type:");
                                              *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = 4;
                                              v195 = *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000);
                                              if ( v195 != 0 && v195 <= 3 )
                                              {
                                                LOBYTE(v193) = v195 != 0;
                                                __asan_report_store4(v3 + 768, v193);
                                              }
                                              *(_DWORD *)(v3 + 768) = 28;
                                              v196 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                       v194,
                                                       (const data::FightPropType *)(v3 + 768));
                                              v197 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                       v196,
                                                       (const char (*)[8])" value:");
                                              common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                v197,
                                                &avatar_config->element_mastery);
                                              *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = -8;
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2240));
                                              *(_DWORD *)(((v3 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                                              v2 = -1;
                                              v17 = 0;
                                            }
                                            else
                                            {
                                              p_physical_sub_hurt = &avatar_config->physical_sub_hurt;
                                              *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) = 4;
                                              if ( *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) != 0
                                                && *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) <= 3 )
                                              {
                                                __asan_report_store4(v3 + 784, p_physical_sub_hurt);
                                              }
                                              *(_DWORD *)(v3 + 784) = 29;
                                              v199 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                       (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                                       (data::FightPropType *)(v3 + 784),
                                                       p_physical_sub_hurt,
                                                       (data::FightPropType *)(v3 + 784),
                                                       v191);
                                              *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) = -8;
                                              if ( !v199.second )
                                              {
                                                *(_DWORD *)(((v3 + 2304) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v3 + 2304) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v3 + 2335) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2335) >> 3) + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v3 + 2304, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v3 + 2304),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                  "rewriteAvatarExcelConfig",
                                                  191);
                                                v201 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                         (common::milog::MiLogStream *const)(v3 + 2304),
                                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                                v202 = "duplicate prop_type:";
                                                v203 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                         v201,
                                                         (const char (*)[21])"duplicate prop_type:");
                                                *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = 4;
                                                v204 = *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000);
                                                if ( v204 != 0 && v204 <= 3 )
                                                {
                                                  LOBYTE(v202) = v204 != 0;
                                                  __asan_report_store4(v3 + 800, v202);
                                                }
                                                *(_DWORD *)(v3 + 800) = 29;
                                                v205 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                         v203,
                                                         (const data::FightPropType *)(v3 + 800));
                                                v206 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                         v205,
                                                         (const char (*)[8])" value:");
                                                common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                  v206,
                                                  &avatar_config->physical_sub_hurt);
                                                *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = -8;
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2304));
                                                *(_DWORD *)(((v3 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                                                v2 = -1;
                                                v17 = 0;
                                              }
                                              else
                                              {
                                                p_physical_add_hurt = &avatar_config->physical_add_hurt;
                                                *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) = 4;
                                                if ( *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) != 0
                                                  && *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) <= 3 )
                                                {
                                                  __asan_report_store4(v3 + 816, p_physical_add_hurt);
                                                }
                                                *(_DWORD *)(v3 + 816) = 30;
                                                v208 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                         (std::map<data::FightPropType,float> *const)(v3 + 3200),
                                                         (data::FightPropType *)(v3 + 816),
                                                         p_physical_add_hurt,
                                                         (data::FightPropType *)(v3 + 816),
                                                         v200);
                                                *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) = -8;
                                                if ( !v208.second )
                                                {
                                                  *(_DWORD *)(((v3 + 2368) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v3 + 2368) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v3 + 2399) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2399) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v3 + 2368, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v3 + 2368),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                    "rewriteAvatarExcelConfig",
                                                    192);
                                                  v209 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                           (common::milog::MiLogStream *const)(v3 + 2368),
                                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                                  v210 = "duplicate prop_type:";
                                                  v211 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                           v209,
                                                           (const char (*)[21])"duplicate prop_type:");
                                                  *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = 4;
                                                  v212 = *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000);
                                                  if ( v212 != 0 && v212 <= 3 )
                                                  {
                                                    LOBYTE(v210) = v212 != 0;
                                                    __asan_report_store4(v3 + 832, v210);
                                                  }
                                                  *(_DWORD *)(v3 + 832) = 30;
                                                  v213 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                           v211,
                                                           (const data::FightPropType *)(v3 + 832));
                                                  v214 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                           v213,
                                                           (const char (*)[8])" value:");
                                                  common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                    v214,
                                                    &avatar_config->physical_add_hurt);
                                                  *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = -8;
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2368));
                                                  *(_DWORD *)(((v3 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                                                  v2 = -1;
                                                  v17 = 0;
                                                }
                                                else
                                                {
                                                  v215 = std::move<std::map<data::FightPropType,float> &>((std::map<data::FightPropType,float> *)(v3 + 3200));
                                                  v218 = std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::emplace<unsigned int const&,std::map<data::FightPropType,float>>(
                                                           &this->base_level_prop_map_,
                                                           avatar_id,
                                                           v215,
                                                           v216,
                                                           v217);
                                                  if ( !v218.second )
                                                  {
                                                    *(_DWORD *)(((v3 + 2432) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v3 + 2432) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v3 + 2463) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2463) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v3 + 2432, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v3 + 2432),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                      "rewriteAvatarExcelConfig",
                                                      198);
                                                    v219 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                             (common::milog::MiLogStream *const)(v3 + 2432),
                                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                                    v220 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                             v219,
                                                             (const char (*)[21])"duplicate avatar_id:");
                                                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                      v220,
                                                      avatar_id);
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2432));
                                                    *(_DWORD *)(((v3 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                                                    v2 = -1;
                                                    v17 = 0;
                                                  }
                                                  else
                                                  {
                                                    if ( *(_BYTE *)(((unsigned __int64)&avatar_config->use_type >> 3)
                                                                  + 0x7FFF8000) != 0
                                                      && (char)((((_BYTE)avatar_config - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config->use_type >> 3) + 0x7FFF8000) )
                                                    {
                                                      __asan_report_load4(&avatar_config->use_type);
                                                    }
                                                    if ( avatar_config->use_type == AVATAR_FORMAL )
                                                    {
                                                      if ( *(_BYTE *)(((unsigned __int64)&this->formal_use_avatar_count_ >> 3)
                                                                    + 0x7FFF8000) != 0
                                                        && *(_BYTE *)(((unsigned __int64)&this->formal_use_avatar_count_ >> 3)
                                                                    + 0x7FFF8000) <= 3 )
                                                      {
                                                        __asan_report_load4(&this->formal_use_avatar_count_);
                                                      }
                                                      ++this->formal_use_avatar_count_;
                                                    }
                                                    v221 = std::vector<unsigned int>::size(&avatar_config->avatar_promote_reward_level_list);
                                                    if ( v221 == std::vector<unsigned int>::size(&avatar_config->avatar_promote_reward_id_list) )
                                                    {
                                                      v224 = ((v3 + 3280) >> 3) + 2147450880;
                                                      *(_DWORD *)v224 = 0;
                                                      *(_WORD *)(v224 + 4) = 0;
                                                      *(_BYTE *)(v224 + 6) = 0;
                                                      std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 3280));
                                                      for ( idx = 0;
                                                            idx < std::vector<unsigned int>::size(&avatar_config->avatar_promote_reward_level_list);
                                                            ++idx )
                                                      {
                                                        v225 = std::vector<unsigned int>::operator[](
                                                                 &avatar_config->avatar_promote_reward_id_list,
                                                                 idx);
                                                        v226 = std::vector<unsigned int>::operator[](
                                                                 &avatar_config->avatar_promote_reward_level_list,
                                                                 idx);
                                                        v228 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                                                                 (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 3280),
                                                                 v226,
                                                                 v225,
                                                                 v226,
                                                                 v227);
                                                        if ( !v228.second )
                                                        {
                                                          *(_DWORD *)(((v3 + 2560) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v3 + 2560) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v3 + 2591) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2591) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v3 + 2560, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v3 + 2560),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                            "rewriteAvatarExcelConfig",
                                                            219);
                                                          v229 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                   (common::milog::MiLogStream *const)(v3 + 2560),
                                                                   (const char (*)[16])"[CONFIG_ERROR] ");
                                                          v230 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                                                   v229,
                                                                   (const char (*)[25])"duplicate promote_level:");
                                                          v231 = std::vector<unsigned int>::operator[](
                                                                   &avatar_config->avatar_promote_reward_level_list,
                                                                   idx);
                                                          v232 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                   v230,
                                                                   v231);
                                                          v233 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                                                   v232,
                                                                   (const char (*)[13])", avatar_id:");
                                                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                            v233,
                                                            avatar_id);
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2560));
                                                          *(_DWORD *)(((v3 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                                                          v2 = -1;
                                                          v234 = 0;
                                                          goto LABEL_241;
                                                        }
                                                      }
                                                      v235 = std::move<std::unordered_map<unsigned int,unsigned int> &>((std::unordered_map<unsigned int,unsigned int> *)(v3 + 3280));
                                                      v238 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::emplace<unsigned int const&,std::unordered_map<unsigned int,unsigned int>>(
                                                               &this->avatar_promote_reward_map,
                                                               avatar_id,
                                                               v235,
                                                               v236,
                                                               v237);
                                                      if ( !v238.second )
                                                      {
                                                        *(_DWORD *)(((v3 + 2624) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v3 + 2624) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v3 + 2655) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2655) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v3 + 2624, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v3 + 2624),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                          "rewriteAvatarExcelConfig",
                                                          225);
                                                        v239 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                 (common::milog::MiLogStream *const)(v3 + 2624),
                                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                                        v240 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                                 v239,
                                                                 (const char (*)[21])"duplicate avatar_id:");
                                                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                          v240,
                                                          avatar_id);
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2624));
                                                        *(_DWORD *)(((v3 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                                        v2 = -1;
                                                        v234 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) = 4;
                                                        if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
                                                          && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
                                                        {
                                                          __asan_report_load4(avatar_id);
                                                        }
                                                        v241 = txt_config_mgr;
                                                        inited = AvatarExcelConfigMgr::calAvatarInitElemType(
                                                                   this,
                                                                   txt_config_mgr,
                                                                   *avatar_id);
                                                        v244 = *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000);
                                                        if ( v244 != 0 && v244 <= 3 )
                                                        {
                                                          LOBYTE(v241) = v244 != 0;
                                                          __asan_report_store4(v3 + 848, v241);
                                                        }
                                                        *(_DWORD *)(v3 + 848) = inited;
                                                        v245 = std::unordered_map<unsigned int,data::ElementType>::emplace<unsigned int const&,data::ElementType&>(
                                                                 &this->avatar_init_elem_type_map,
                                                                 avatar_id,
                                                                 (data::ElementType *)(v3 + 848),
                                                                 (const unsigned int *)&this->avatar_init_elem_type_map,
                                                                 v243);
                                                        if ( !v245.second )
                                                        {
                                                          *(_DWORD *)(((v3 + 2688) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v3 + 2688) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v3 + 2719) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2719) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v3 + 2688, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v3 + 2688),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                            "rewriteAvatarExcelConfig",
                                                            232);
                                                          v246 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                   (common::milog::MiLogStream *const)(v3 + 2688),
                                                                   (const char (*)[16])"[CONFIG_ERROR] ");
                                                          v247 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                                   v246,
                                                                   (const char (*)[21])"duplicate avatar_id:");
                                                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                            v247,
                                                            avatar_id);
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2688));
                                                          *(_DWORD *)(((v3 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                                                          v2 = -1;
                                                          v234 = 0;
                                                        }
                                                        else
                                                        {
                                                          __asan_unpoison_stack_memory(v3 + 3376, 392LL);
                                                          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 3376);
                                                          *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) )
                                                            __asan_report_store8(v3 + 928, 392LL);
                                                          *(_QWORD *)(v3 + 928) = v3 + 3376;
                                                          if ( *(_BYTE *)(((unsigned __int64)&avatar_config->id >> 3)
                                                                        + 0x7FFF8000) != 0
                                                            && *(_BYTE *)(((unsigned __int64)&avatar_config->id >> 3)
                                                                        + 0x7FFF8000) <= 3 )
                                                          {
                                                            __asan_report_load4(&avatar_config->id);
                                                          }
                                                          std::ostream::operator<<(v3 + 3392, avatar_config->id);
                                                          *(_DWORD *)(((v3 + 2752) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v3 + 32);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v3 + 2752),
                                                            "prefab_path",
                                                            (const std::allocator<char> *)(v3 + 32));
                                                          AvatarExcelConfigMgr::rewriteAvatarExcelConfig(TxtConfigMgr &)::{lambda(std::string const&,std::string const&,std::string const&,unsigned long &)#1}::operator()(
                                                            (const AvatarExcelConfigMgr::rewriteAvatarExcelConfig::<lambda(const string&, const string&, const string&, uint64_t&)> *const)(v3 + 928),
                                                            (const std::string *)(v3 + 2752),
                                                            &avatar_config->prefab_path,
                                                            &avatar_config->prefab_path_path_decorator,
                                                            &avatar_config->prefab_path_hash);
                                                          std::string::~string((void *)(v3 + 2752));
                                                          *(_DWORD *)(((v3 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v3 + 32);
                                                          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
                                                          *(_DWORD *)(((v3 + 2816) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v3 + 48);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v3 + 2816),
                                                            "prefab_path_remote",
                                                            (const std::allocator<char> *)(v3 + 48));
                                                          AvatarExcelConfigMgr::rewriteAvatarExcelConfig(TxtConfigMgr &)::{lambda(std::string const&,std::string const&,std::string const&,unsigned long &)#1}::operator()(
                                                            (const AvatarExcelConfigMgr::rewriteAvatarExcelConfig::<lambda(const string&, const string&, const string&, uint64_t&)> *const)(v3 + 928),
                                                            (const std::string *)(v3 + 2816),
                                                            &avatar_config->prefab_path_remote,
                                                            &avatar_config->prefab_path_remote_path_decorator,
                                                            &avatar_config->prefab_path_remote_hash);
                                                          std::string::~string((void *)(v3 + 2816));
                                                          *(_DWORD *)(((v3 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v3 + 48);
                                                          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                                                          *(_DWORD *)(((v3 + 2880) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v3 + 64);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v3 + 2880),
                                                            "controller_path",
                                                            (const std::allocator<char> *)(v3 + 64));
                                                          AvatarExcelConfigMgr::rewriteAvatarExcelConfig(TxtConfigMgr &)::{lambda(std::string const&,std::string const&,std::string const&,unsigned long &)#1}::operator()(
                                                            (const AvatarExcelConfigMgr::rewriteAvatarExcelConfig::<lambda(const string&, const string&, const string&, uint64_t&)> *const)(v3 + 928),
                                                            (const std::string *)(v3 + 2880),
                                                            &avatar_config->controller_path,
                                                            &avatar_config->controller_path_path_decorator,
                                                            &avatar_config->controller_path_hash);
                                                          std::string::~string((void *)(v3 + 2880));
                                                          *(_DWORD *)(((v3 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v3 + 64);
                                                          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                                                          *(_DWORD *)(((v3 + 2944) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v3 + 80);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v3 + 2944),
                                                            "controller_path_remote",
                                                            (const std::allocator<char> *)(v3 + 80));
                                                          AvatarExcelConfigMgr::rewriteAvatarExcelConfig(TxtConfigMgr &)::{lambda(std::string const&,std::string const&,std::string const&,unsigned long &)#1}::operator()(
                                                            (const AvatarExcelConfigMgr::rewriteAvatarExcelConfig::<lambda(const string&, const string&, const string&, uint64_t&)> *const)(v3 + 928),
                                                            (const std::string *)(v3 + 2944),
                                                            &avatar_config->controller_path_remote,
                                                            &avatar_config->controller_path_remote_path_decorator,
                                                            &avatar_config->controller_path_remote_hash);
                                                          std::string::~string((void *)(v3 + 2944));
                                                          *(_DWORD *)(((v3 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v3 + 80);
                                                          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
                                                          *(_DWORD *)(((v3 + 3008) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v3 + 96);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v3 + 3008),
                                                            "combat_config",
                                                            (const std::allocator<char> *)(v3 + 96));
                                                          AvatarExcelConfigMgr::rewriteAvatarExcelConfig(TxtConfigMgr &)::{lambda(std::string const&,std::string const&,std::string const&,unsigned long &)#1}::operator()(
                                                            (const AvatarExcelConfigMgr::rewriteAvatarExcelConfig::<lambda(const string&, const string&, const string&, uint64_t&)> *const)(v3 + 928),
                                                            (const std::string *)(v3 + 3008),
                                                            &avatar_config->combat_config,
                                                            &avatar_config->combat_config_path_decorator,
                                                            &avatar_config->combat_config_hash);
                                                          std::string::~string((void *)(v3 + 3008));
                                                          *(_DWORD *)(((v3 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v3 + 96);
                                                          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                                                          *(_DWORD *)(((v3 + 3072) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v3 + 3072) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v3 + 3103) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 3103) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v3 + 3072, 32LL);
                                                          }
                                                          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(
                                                            v3 + 3072,
                                                            v3 + 3376);
                                                          v249 = std::unordered_map<unsigned int,std::string>::emplace<unsigned int &,std::string&>(
                                                                   &this->avatar_excel_config_hash_map,
                                                                   &avatar_config->id,
                                                                   (std::string *)(v3 + 3072),
                                                                   (unsigned int *)&this->avatar_excel_config_hash_map,
                                                                   v248);
                                                          if ( !v249.second )
                                                          {
                                                            *(_DWORD *)(((v3 + 3136) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v3 + 3136) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v3 + 3167) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 3167) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v3 + 3136, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v3 + 3136),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                              "rewriteAvatarExcelConfig",
                                                              257);
                                                            v250 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                     (common::milog::MiLogStream *const)(v3 + 3136),
                                                                     (const char (*)[16])"[CONFIG_ERROR] ");
                                                            v251 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                                     v250,
                                                                     (const char (*)[21])"duplicate avatar_id:");
                                                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                              v251,
                                                              &avatar_config->id);
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3136));
                                                            *(_DWORD *)(((v3 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                                            v2 = -1;
                                                            v252 = 0;
                                                          }
                                                          else
                                                          {
                                                            v252 = 1;
                                                          }
                                                          std::string::~string((void *)(v3 + 3072));
                                                          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 3376);
                                                          v234 = v252 == 1;
                                                        }
                                                      }
LABEL_241:
                                                      std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 3280));
                                                      v17 = v234;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v3 + 2496) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v3 + 2496) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v3 + 2527) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 2527) >> 3)
                                                                                                  + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v3 + 2496, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v3 + 2496),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_manual/AvatarExcelConfig.cpp",
                                                        "rewriteAvatarExcelConfig",
                                                        209);
                                                      v222 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                               (common::milog::MiLogStream *const)(v3 + 2496),
                                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                                      v223 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                                                               v222,
                                                               (const char (*)[82])byte_1AABAE60);
                                                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                        v223,
                                                        avatar_id);
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2496));
                                                      *(_DWORD *)(((v3 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                                      v2 = -1;
                                                      v17 = 0;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v3 + 3200));
    v253 = ((v3 + 3200) >> 3) + 2147450880;
    *(_DWORD *)v253 = -117901064;
    *(_WORD *)(v253 + 4) = -1800;
    v254 = ((v3 + 3280) >> 3) + 2147450880;
    *(_DWORD *)v254 = -117901064;
    *(_WORD *)(v254 + 4) = -1800;
    *(_BYTE *)(v254 + 6) = -8;
    *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) = -8;
    __asan_poison_stack_memory(v3 + 3376, 392LL);
    *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 3072) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v17 )
    {
      v255 = 0;
      goto LABEL_246;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false> *const)(v3 + 864));
  }
  v255 = 1;
LABEL_246:
  if ( v255 == 1 )
    v2 = 0;
  if ( v263 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF81D8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 480) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 3840LL, v263);
  }
  return v2;
};

// Line 238: range 0000000012E691E2-0000000012E6927C
void __cdecl AvatarExcelConfigMgr::rewriteAvatarExcelConfig(TxtConfigMgr &)::{lambda(std::string const&,std::string const&,std::string const&,unsigned long &)#1}::operator()(
        const AvatarExcelConfigMgr::rewriteAvatarExcelConfig::<lambda(const string&, const string&, const string&, uint64_t&)> *const __closure,
        const std::string *field_name,
        const std::string *content,
        const std::string *path_decorator,
        uint64_t *hash_val)
{
  uint64_t v6; // rdx

  v6 = AvatarExcelConfigMgr::calcPrefabPathHash(content, path_decorator);
  if ( *(_BYTE *)(((unsigned __int64)hash_val >> 3) + 0x7FFF8000) )
    __asan_report_store8(hash_val, path_decorator);
  *hash_val = v6;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::ostream::operator<<((char *)__closure->__ss + 16, *hash_val);
};

// Line 267: range 0000000012E6EBF8-0000000012E6F117
uint64_t __cdecl AvatarExcelConfigMgr::calcPrefabPathHash(
        const std::string *content,
        const std::string *path_decorator)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint64_t v5; // r14
  __int64 v6; // r14
  __int64 v7; // rsi
  char *v8; // rsi
  __gnu_cxx::__normal_iterator<char const*,std::string >::reference v9; // rax
  _BYTE *v10; // rdx
  char v11; // cl
  unsigned __int64 v12; // rax
  __int64 v14; // rsi
  std::vector<unsigned char>::reference v15; // rax
  unsigned __int8 *v16; // rdx
  char v17; // cl
  uint64_t result; // rax
  uint32_t i; // [rsp+14h] [rbp-12Ch]
  uint64_t hash_val; // [rsp+18h] [rbp-128h]
  size_t fixbuflen; // [rsp+20h] [rbp-120h]
  char v23[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:275 64 8 13 __for_end:275 96 24 11 md5_vec:294 160 32 12 path_str:273";
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::calcPrefabPathHash;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  hash_val = 0LL;
  if ( (unsigned __int8)std::string::empty() )
  {
    v5 = 0LL;
  }
  else
  {
    std::string::basic_string(v2 + 160);
    v6 = std::string::size(path_decorator);
    v7 = v6 + std::string::size(content);
    std::string::reserve(v2 + 160, v7);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, v7);
    *(_QWORD *)(v2 + 32) = std::string::begin(path_decorator);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v7);
    *(_QWORD *)(v2 + 64) = std::string::end(path_decorator);
    while ( 1 )
    {
      v8 = (char *)(v2 + 64);
      if ( !__gnu_cxx::operator!=<char const*,std::string>(
              (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 32),
              (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 64)) )
        break;
      v9 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator*((const __gnu_cxx::__normal_iterator<char const*,std::string > *const)(v2 + 32));
      v10 = v9;
      v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( v11 != 0 && ((unsigned __int8)v9 & 7) >= v11 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_load1(v9, v8, v9);
      }
      if ( *v10 == 42 )
        std::string::operator+=(v2 + 160, content);
      else
        std::string::operator+=(v2 + 160, (unsigned int)(char)*v10);
      __gnu_cxx::__normal_iterator<char const*,std::string>::operator++((__gnu_cxx::__normal_iterator<char const*,std::string > *const)(v2 + 32));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    for ( fixbuflen = 256LL; fixbuflen < std::string::size(v2 + 160); fixbuflen *= 2LL )
      ;
    std::string::resize(v2 + 160, fixbuflen, 0LL);
    v12 = ((v2 + 96) >> 3) + 2147450880;
    *(_WORD *)v12 = 0;
    *(_BYTE *)(v12 + 2) = 0;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 119) & 7) >= *(_BYTE *)(((v2 + 119) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 24LL);
    }
    common::tools::StringUtils::calcBinaryMD5((std::vector<unsigned char> *)(v2 + 96), (const std::string *)(v2 + 160));
    for ( i = 0; i < std::vector<unsigned char>::size((const std::vector<unsigned char> *const)(v2 + 96)) && i <= 7; ++i )
    {
      v14 = i;
      v15 = std::vector<unsigned char>::operator[]((std::vector<unsigned char> *const)(v2 + 96), i);
      v16 = v15;
      v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && ((unsigned __int8)v15 & 7) >= v17 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_load1(v15, v14, v15);
      }
      hash_val += (unsigned __int64)*v16 << (8 * (unsigned __int8)i);
    }
    v5 = hash_val;
    std::vector<unsigned char>::~vector((std::vector<unsigned char> *const)(v2 + 96));
    std::string::~string((void *)(v2 + 160));
  }
  result = v5;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 303: range 0000000012E6F118-0000000012E6FAC1
int32_t __cdecl AvatarExcelConfigMgr::rewriteAvatarLevelExcelConfig(
        AvatarExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t avatar_max_level; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // edx
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  uint32_t *v12; // rdx
  char v13; // cl
  const unsigned int *v14; // rsi
  data::AvatarLevelExcelConfigMap *p_avatar_level_excel_config_map; // rdx
  data::AvatarLevelExcelConfigMap *v16; // rdx
  bool v17; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false>::pointer v18; // rdx
  uint32_t *p_exp; // rax
  int v20; // edx
  int32_t result; // eax
  uint32_t total_exp; // [rsp+2Ch] [rbp-1E4h]
  data::AvatarLevelExcelConfigMap *__for_range; // [rsp+30h] [rbp-1E0h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1D8h]
  std::_Rb_tree_const_iterator<unsigned int>::reference level_0; // [rsp+40h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false>::reference __in; // [rsp+48h] [rbp-1C8h]
  uint32_t *level; // [rsp+50h] [rbp-1C0h]
  char v28[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 18 expected_level:314 48 8 15 __for_begin:305 80 8 13 __for_end:305 112 8 15 __for_begin:"
                        "316 144 8 13 __for_end:316 176 8 8 iter:325 208 8 9 <unknown> 240 32 9 <unknown> 304 48 13 level_set:304";
  *(_QWORD *)(v3 + 16) = AvatarExcelConfigMgr::rewriteAvatarLevelExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
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
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 304));
  __for_range = &this->avatar_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false> *)(v3 + 80)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false> *const)(v3 + 48));
    level = std::get<0ul,unsigned int const,data::AvatarLevelExcelConfig>(__in);
    std::get<1ul,unsigned int const,data::AvatarLevelExcelConfig>(__in);
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 304), level);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_max_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_max_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->avatar_max_level);
    }
    avatar_max_level = this->avatar_max_level;
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    if ( avatar_max_level < *level )
      this->avatar_max_level = *level;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false> *const)(v3 + 48));
  }
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, v6);
  *(_DWORD *)(v3 + 32) = 0;
  total_exp = 0;
  __for_range_0 = (std::set<unsigned int> *)(v3 + 304);
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, v6);
  *(std::set<unsigned int>::iterator *)(v3 + 112) = std::set<unsigned int>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, v6);
  *(std::set<unsigned int>::iterator *)(v3 + 144) = std::set<unsigned int>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 112),
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 144)) )
  {
    level_0 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 112));
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    ++*(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)level_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level_0);
    }
    if ( *level_0 == *(_DWORD *)(v3 + 32) )
    {
      v14 = level_0;
      v11 = std::map<unsigned int,unsigned int>::operator[](&this->level_total_exp_map, level_0);
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      LOBYTE(v14) = v13 != 0;
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
        __asan_report_store4(v11, v14);
      *v12 = total_exp;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      p_avatar_level_excel_config_map = &this->avatar_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 176, v14);
      *(std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::iterator *)(v3 + 176) = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::find(
                                                                                                 p_avatar_level_excel_config_map,
                                                                                                 level_0);
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      v16 = &this->avatar_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 208, level_0);
      *(std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::iterator *)(v3 + 208) = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::end(v16);
      v17 = std::__detail::operator!=<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false> *)(v3 + 176),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false> *)(v3 + 208));
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
      if ( v17 )
      {
        v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false> *const)(v3 + 176));
        p_exp = &v18->second.exp;
        if ( *(_BYTE *)(((unsigned __int64)p_exp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_exp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_exp >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_exp);
        }
        total_exp += v18->second.exp;
      }
      v10 = 1;
    }
    else
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "rewriteAvatarLevelExcelConfig",
        321);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             v8,
             (const char (*)[33])"miss avatar level config, level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v10 != 1 )
    {
      v20 = 0;
      goto LABEL_48;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 112));
  }
  v20 = 1;
LABEL_48:
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
  if ( v20 == 1 )
    v2 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 304));
  result = v2;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 336: range 0000000012E6FAC2-0000000012E70750
int32_t __cdecl AvatarExcelConfigMgr::rewriteAvatarFetterLevelExcelConfig(
        AvatarExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  size_t v5; // rsi
  std::vector<data::AvatarFettersLevelExcelConfig>::reference v6; // rax
  uint32_t fetter_level; // ecx
  char v8; // al
  size_t v9; // rsi
  std::vector<data::AvatarFettersLevelExcelConfig>::reference v10; // rdx
  uint32_t *p_need_exp; // rax
  uint32_t need_exp; // ecx
  char v13; // al
  uint32_t *p_avatar_max_fetter_level; // rsi
  uint32_t *v15; // rax
  unsigned int *v16; // r8
  uint32_t *v17; // rdx
  uint32_t v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::map<unsigned int,unsigned int>::size_type v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::map<unsigned int,unsigned int> *p_fetter_level_to_total_exp_map; // rcx
  char v30; // al
  std::map<unsigned int,unsigned int>::mapped_type *v31; // rax
  _DWORD *v32; // rdx
  char v33; // cl
  char *v34; // rsi
  uint32_t avatar_max_fetter_level; // ecx
  std::map<unsigned int,unsigned int> *v36; // rcx
  __int64 v37; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v38; // rax
  int *v39; // rdx
  int v40; // r14d
  std::map<unsigned int,unsigned int> *p_fetter_level_to_exp_map; // rcx
  __int64 v42; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v43; // rax
  _DWORD *v44; // rdx
  int v45; // r14d
  char *v46; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v47; // rax
  _DWORD *v48; // rdx
  char v49; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-17Ch]
  size_t i; // [rsp+18h] [rbp-178h]
  char v53[368]; // [rsp+20h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 9 level:342 48 4 7 exp:343 64 4 9 <unknown> 80 4 9 level:362 96 4 9 <unknown> 112 4 9 <un"
                        "known> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::rewriteAvatarFetterLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  std::map<unsigned int,unsigned int>::clear(&this->fetter_level_to_exp_map);
  std::map<unsigned int,unsigned int>::clear(&this->fetter_level_to_total_exp_map);
  for ( i = 0LL;
        i < std::vector<data::AvatarFettersLevelExcelConfig>::size(&this->avatar_fetters_level_excel_config_vec);
        ++i )
  {
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v5 = i;
    v6 = std::vector<data::AvatarFettersLevelExcelConfig>::operator[](&this->avatar_fetters_level_excel_config_vec, i);
    if ( *(_BYTE *)(((unsigned __int64)&v6->fetter_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->fetter_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v6->fetter_level);
    }
    fetter_level = v6->fetter_level;
    v8 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v2 + 32, v5);
    }
    *(_DWORD *)(v2 + 32) = fetter_level;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    v9 = i;
    v10 = std::vector<data::AvatarFettersLevelExcelConfig>::operator[](&this->avatar_fetters_level_excel_config_vec, i);
    p_need_exp = &v10->need_exp;
    if ( *(_BYTE *)(((unsigned __int64)p_need_exp >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_need_exp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_need_exp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_need_exp);
    }
    need_exp = v10->need_exp;
    v13 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(v9) = v13 != 0;
      __asan_report_store4(v2 + 48, v9);
    }
    *(_DWORD *)(v2 + 48) = need_exp;
    p_avatar_max_fetter_level = &this->avatar_max_fetter_level;
    v15 = (uint32_t *)std::max<unsigned int>((const unsigned int *)(v2 + 32), &this->avatar_max_fetter_level);
    v17 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v18 = *v17;
    v19 = *(_BYTE *)(((unsigned __int64)&this->avatar_max_fetter_level >> 3) + 0x7FFF8000);
    if ( v19 != 0 && v19 <= 3 )
    {
      LOBYTE(p_avatar_max_fetter_level) = v19 != 0;
      __asan_report_store4(&this->avatar_max_fetter_level, p_avatar_max_fetter_level);
    }
    this->avatar_max_fetter_level = v18;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    if ( !*(_DWORD *)(v2 + 32) )
    {
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "rewriteAvatarFetterLevelExcelConfig",
        347);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v20, (const char (*)[17])byte_1AABB380);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    txt_config_mgr = (TxtConfigMgr *)(v2 + 32);
    v21 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
            &this->fetter_level_to_exp_map,
            (unsigned int *)(v2 + 32),
            (unsigned int *)(v2 + 48),
            (unsigned int *)&this->fetter_level_to_exp_map,
            v16);
    if ( !v21.second )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "rewriteAvatarFetterLevelExcelConfig",
        352);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v22, (const char (*)[28])byte_1AABB3C0);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 32));
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" exp:");
      txt_config_mgr = (TxtConfigMgr *)(v2 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  }
  v26 = std::map<unsigned int,unsigned int>::size(&this->fetter_level_to_exp_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_max_fetter_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_max_fetter_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_max_fetter_level);
  }
  if ( v26 != this->avatar_max_fetter_level )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarExcelConfig.cpp",
      "rewriteAvatarFetterLevelExcelConfig",
      358);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v28 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v27, (const char (*)[40])byte_1AABB440);
    txt_config_mgr = (TxtConfigMgr *)&this->avatar_max_fetter_level;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->avatar_max_fetter_level);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  p_fetter_level_to_total_exp_map = &this->fetter_level_to_total_exp_map;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
  v30 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(txt_config_mgr) = v30 != 0;
    __asan_report_store4(v2 + 64, txt_config_mgr);
  }
  *(_DWORD *)(v2 + 64) = 1;
  v34 = (char *)(v2 + 64);
  v31 = std::map<unsigned int,unsigned int>::operator[](
          p_fetter_level_to_total_exp_map,
          (std::map<unsigned int,unsigned int>::key_type *)(v2 + 64));
  v32 = v31;
  v33 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v33 != 0;
  if ( v33 != 0 && (char)(((unsigned __int8)v31 & 7) + 3) >= v33 )
    __asan_report_store4(v31, v34);
  *v32 = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 80, v34);
  for ( *(_DWORD *)(v2 + 80) = 2; ; ++*(_DWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_max_fetter_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_max_fetter_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->avatar_max_fetter_level);
    }
    avatar_max_fetter_level = this->avatar_max_fetter_level;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 80);
    if ( avatar_max_fetter_level < *(_DWORD *)(v2 + 80) )
      break;
    v36 = &this->fetter_level_to_total_exp_map;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
    v37 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 96, v37);
    *(_DWORD *)(v2 + 96) = v37;
    v38 = std::map<unsigned int,unsigned int>::operator[](
            v36,
            (std::map<unsigned int,unsigned int>::key_type *)(v2 + 96));
    v39 = (int *)v38;
    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v38);
    }
    v40 = *v39;
    p_fetter_level_to_exp_map = &this->fetter_level_to_exp_map;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 80);
    v42 = (unsigned int)(*(_DWORD *)(v2 + 80) - 1);
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 112, v42);
    *(_DWORD *)(v2 + 112) = v42;
    v43 = std::map<unsigned int,unsigned int>::operator[](
            p_fetter_level_to_exp_map,
            (std::map<unsigned int,unsigned int>::key_type *)(v2 + 112));
    v44 = v43;
    if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v43);
    }
    v45 = *v44 + v40;
    v46 = (char *)(v2 + 80);
    v47 = std::map<unsigned int,unsigned int>::operator[](
            &this->fetter_level_to_total_exp_map,
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
    v48 = v47;
    v49 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
    if ( v49 != 0 && (char)(((unsigned __int8)v47 & 7) + 3) >= v49 )
    {
      LOBYTE(v46) = v49 != 0;
      __asan_report_store4(v47, v46);
    }
    *v48 = v45;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 80);
  }
  result = ret;
  if ( v53 == (char *)v2 )
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

// Line 371: range 0000000012E70752-0000000012E70CFD
int32_t __cdecl AvatarExcelConfigMgr::rewriteAvatarPromoteExcelConfig(
        AvatarExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *p_promote_level; // rcx
  unsigned int *p_avatar_promote_id; // rdx
  __int64 v8; // rsi
  data::AvatarPromoteExcelConfig *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // edx
  uint32_t *v16; // rsi
  uint32_t *v17; // rax
  uint32_t *v18; // rdx
  uint32_t v19; // ecx
  char v20; // dl
  uint32_t *v21; // rsi
  uint32_t *v22; // rax
  uint32_t *v23; // rdx
  uint32_t v24; // ecx
  char v25; // al
  int v26; // eax
  int32_t result; // eax
  data::AvatarPromoteExcelConfigVec *__for_range; // [rsp+18h] [rbp-108h]
  data::AvatarPromoteExcelConfig *avatar_promote_config; // [rsp+20h] [rbp-100h]
  uint32_t *max_promote_level; // [rsp+28h] [rbp-F8h]
  char v31[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:372 64 8 13 __for_end:372 96 8 7 key:377 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarExcelConfigMgr::rewriteAvatarPromoteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->avatar_promote_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::AvatarPromoteExcelConfig>::iterator *)(v3 + 32) = std::vector<data::AvatarPromoteExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::AvatarPromoteExcelConfig>::iterator *)(v3 + 64) = std::vector<data::AvatarPromoteExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::AvatarPromoteExcelConfig *,std::vector<data::AvatarPromoteExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *)(v3 + 64)) )
  {
    avatar_promote_config = __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig *,std::vector<data::AvatarPromoteExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *const)(v3 + 32));
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &avatar_promote_config->cost_items,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::PropValConfig,data::FightPropType data::PropValConfig::*>(
      &avatar_promote_config->add_props,
      (data::FightPropType *)8);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_promote_level = &avatar_promote_config->promote_level;
    p_avatar_promote_id = &avatar_promote_config->avatar_promote_id;
    v8 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      __asan_report_store8(v3 + 96, v8);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                           p_avatar_promote_id,
                                                           p_promote_level);
    v10 = std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::emplace<std::pair<unsigned int,unsigned int>&,data::AvatarPromoteExcelConfig&>(
            &this->avatar_promote_config_map,
            (std::pair<unsigned int,unsigned int> *)(v3 + 96),
            avatar_promote_config,
            (std::pair<unsigned int,unsigned int> *)&this->avatar_promote_config_map,
            v9);
    if ( !v10.second )
    {
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
        4u,
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "rewriteAvatarPromoteExcelConfig",
        380);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v11, (const char (*)[42])byte_1AABB540);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v12,
              &avatar_promote_config->avatar_promote_id);
      v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])byte_1AABB5A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &avatar_promote_config->promote_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v15 = 0;
    }
    else
    {
      max_promote_level = std::map<unsigned int,unsigned int>::operator[](
                            &this->max_avatar_promote_level_map,
                            &avatar_promote_config->avatar_promote_id);
      v16 = &avatar_promote_config->promote_level;
      v17 = (uint32_t *)std::max<unsigned int>(max_promote_level, &avatar_promote_config->promote_level);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((unsigned __int64)max_promote_level >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)max_promote_level & 7) + 3) >= v20 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(max_promote_level, v16);
      }
      *max_promote_level = v19;
      v21 = max_promote_level;
      v22 = (uint32_t *)std::max<unsigned int>(&this->avatar_max_promote_level, max_promote_level);
      v23 = v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      v24 = *v23;
      v25 = *(_BYTE *)(((unsigned __int64)&this->avatar_max_promote_level >> 3) + 0x7FFF8000);
      if ( v25 != 0 && v25 <= 3 )
      {
        LOBYTE(v21) = v25 != 0;
        __asan_report_store4(&this->avatar_max_promote_level, v21);
      }
      this->avatar_max_promote_level = v24;
      v15 = 1;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v26 = 0;
      goto LABEL_29;
    }
    __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig *,std::vector<data::AvatarPromoteExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *const)(v3 + 32));
  }
  v26 = 1;
LABEL_29:
  if ( v26 == 1 )
    v2 = 0;
  result = v2;
  if ( v31 == (char *)v3 )
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

// Line 396: range 0000000012E70CFE-0000000012E72918
int32_t __cdecl AvatarExcelConfigMgr::checkAvatarExcelConfig(
        AvatarExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t *p_skill_depot_id; // rsi
  uint32_t skill_depot_id; // ecx
  char v17; // dl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  char *v22; // rsi
  unsigned int *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  AvatarSkillExcelConfigMgr *v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned int v32; // ecx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  FeatureTagExcelConfigMgr *p_feature_tag_config_mgr; // rcx
  __int64 feature_tag_group_id; // rsi
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  char *v45; // rsi
  uint32_t v46; // esi
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  int v51; // edx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  int v56; // edx
  int v57; // eax
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // rcx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // rcx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  int32_t ret; // [rsp+1Ch] [rbp-4A4h]
  data::AvatarExcelConfigMap *__for_range; // [rsp+20h] [rbp-4A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::reference v71; // [rsp+28h] [rbp-498h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarExcelConfig> >::type *avatar_id; // [rsp+30h] [rbp-490h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarExcelConfig> >::type *avatar_config; // [rsp+38h] [rbp-488h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-480h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *__for_range_1; // [rsp+50h] [rbp-470h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false>::reference v76; // [rsp+58h] [rbp-468h]
  uint32_t *avatar_id_0; // [rsp+60h] [rbp-460h]
  const std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *__for_range_2; // [rsp+70h] [rbp-450h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v79; // [rsp+78h] [rbp-448h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *promote_level; // [rsp+80h] [rbp-440h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *reward_id; // [rsp+88h] [rbp-438h]
  char v82[1072]; // [rsp+90h] [rbp-430h] BYREF

  v3 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(1024LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 48 4 18 skill_depot_id:415 64 8 15 __for_begin:398 96 8 13 __for_end:398 128 8 15 __for_begin"
                        ":415 160 8 13 __for_end:415 192 8 15 __for_begin:441 224 8 13 __for_end:441 256 8 15 __for_begin"
                        ":443 288 8 13 __for_end:443 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <u"
                        "nknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <un"
                        "known> 896 32 9 <unknown> 960 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarExcelConfigMgr::checkAvatarExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -202116109;
  ret = 0;
  __for_range = &this->avatar_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v3 + 96)) )
  {
    v71 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false> *const)(v3 + 64));
    avatar_id = std::get<0ul,unsigned int const,data::AvatarExcelConfig>(v71);
    avatar_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarExcelConfig>(v71);
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
            &this->max_avatar_promote_level_map,
            &avatar_config->avatar_promote_id) )
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
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "checkAvatarExcelConfig",
        402);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])byte_1AABB7E0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &avatar_config->avatar_promote_id);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])byte_1AABB820);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_avatar_skill_config_mgr = &txt_config_mgr->avatar_skill_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config->skill_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config->skill_depot_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config->skill_depot_id);
    }
    if ( !data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
            p_avatar_skill_config_mgr,
            avatar_config->skill_depot_id) )
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
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "checkAvatarExcelConfig",
        407);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v11, (const char (*)[37])byte_1AABB860);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, avatar_id);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" SkillDepotId:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &avatar_config->skill_depot_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_skill_depot_id = (uint32_t *)((((_BYTE)avatar_config + 60) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config->skill_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config->skill_depot_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config->skill_depot_id);
    }
    skill_depot_id = avatar_config->skill_depot_id;
    v17 = *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000);
    LOBYTE(p_skill_depot_id) = v17 != 0;
    if ( v17 != 0 && (char)(((unsigned __int8)avatar_id & 7) + 3) >= v17 )
      __asan_report_load4(avatar_id);
    if ( skill_depot_id == *avatar_id )
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
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "checkAvatarExcelConfig",
        412);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v18, (const char (*)[41])byte_1AABB900);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, avatar_id);
      v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" SkillDepotId:");
      p_skill_depot_id = &avatar_config->skill_depot_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &avatar_config->skill_depot_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &avatar_config->cand_skill_depot_ids;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_skill_depot_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_skill_depot_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v22 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v23 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v24 = (int *)v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v22) = v26 != 0;
        __asan_report_store4(v3 + 48, v22);
      }
      *(_DWORD *)(v3 + 48) = v25;
      v27 = &txt_config_mgr->avatar_skill_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&avatar_config->skill_depot_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config->skill_depot_id >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&avatar_config->skill_depot_id);
      }
      if ( !data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(v27, avatar_config->skill_depot_id) )
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
          "./src/txt_data_manual/AvatarExcelConfig.cpp",
          "checkAvatarExcelConfig",
          419);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v28, (const char (*)[37])byte_1AABB860);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, avatar_id);
        v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])" SkillDepotId:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(avatar_id);
      }
      v32 = *avatar_id;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( v32 == *(_DWORD *)(v3 + 48) )
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
          "./src/txt_data_manual/AvatarExcelConfig.cpp",
          "checkAvatarExcelConfig",
          424);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v33, (const char (*)[41])byte_1AABB900);
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, avatar_id);
        v36 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v35, (const char (*)[15])" SkillDepotId:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &avatar_config->skill_depot_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config->initial_weapon >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config->initial_weapon >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config->initial_weapon);
    }
    if ( !avatar_config->initial_weapon
      || !data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(
            &txt_config_mgr->weapon_config_mgr,
            avatar_config->initial_weapon) )
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
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "checkAvatarExcelConfig",
        430);
      v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 640),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v39 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v38, (const char (*)[40])byte_1AABB960);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
      *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_feature_tag_config_mgr = &txt_config_mgr->feature_tag_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config->feature_tag_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config->feature_tag_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config->feature_tag_group_id);
    }
    feature_tag_group_id = avatar_config->feature_tag_group_id;
    if ( !data::FeatureTagExcelConfigMgrBase::findFeatureTagGroupExcelConfig(
            p_feature_tag_config_mgr,
            feature_tag_group_id) )
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
        3u,
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "checkAvatarExcelConfig",
        437);
      v42 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[37])byte_1AABB9C0);
      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, avatar_id);
      v44 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v43,
              (const char (*)[23])" feature_tag_group_id:");
      feature_tag_group_id = (__int64)&avatar_config->feature_tag_group_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &avatar_config->feature_tag_group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_1 = &this->avatar_promote_reward_map;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, feature_tag_group_id);
    *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, feature_tag_group_id);
    *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(__for_range_1);
    while ( 1 )
    {
      v45 = (char *)(v3 + 224);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v3 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v3 + 224)) )
        break;
      v76 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v3 + 192));
      avatar_id_0 = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v76);
      __for_range_2 = std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v76);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v45);
      *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 256) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v45);
      *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 288) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_2);
      while ( 1 )
      {
        if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 256),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 288)) )
        {
          v51 = 1;
          goto LABEL_97;
        }
        v79 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 256));
        promote_level = std::get<0ul,unsigned int const,unsigned int>(v79);
        reward_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v79);
        if ( *(_BYTE *)(((unsigned __int64)promote_level >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)promote_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)promote_level >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(promote_level);
        }
        v46 = *promote_level;
        if ( *(_BYTE *)(((unsigned __int64)avatar_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)avatar_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id_0 >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(avatar_id_0);
        }
        if ( !AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(this, *avatar_id_0, v46) )
          break;
        if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(reward_id);
        }
        if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                txt_config_mgr,
                                *reward_id,
                                ITEM_LIMIT_AVATAR_PROMOTE_REWARD) != 1 )
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
            "./src/txt_data_manual/AvatarExcelConfig.cpp",
            "checkAvatarExcelConfig",
            452);
          v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v53 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  v52,
                  (const char (*)[54])"isValidRewardIdAndMatchItemLimitType fail, reward_id:");
          v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, reward_id);
          v55 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v54, (const char (*)[11])" AvatarId:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, avatar_id_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
          *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 256));
      }
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
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "checkAvatarExcelConfig",
        447);
      v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 768),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v48 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v47, (const char (*)[49])byte_1AABBA60);
      v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, avatar_id_0);
      v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v49, (const char (*)[16])", PromoteLevel:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, promote_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v51 = 0;
LABEL_97:
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v51 != 1 )
      {
        v56 = 0;
        goto LABEL_101;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v3 + 192));
    }
    v56 = 1;
LABEL_101:
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v56 != 1 )
    {
      v57 = 0;
      goto LABEL_120;
    }
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config->use_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config->use_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config->use_type);
    }
    if ( avatar_config->use_type == AVATAR_FORMAL )
    {
      p_avatar_fashion_config_mgr = &txt_config_mgr->avatar_fashion_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(avatar_id);
      }
      if ( !AvatarFashionExcelConfigMgr::getAvatarDefaultCostumeId(p_avatar_fashion_config_mgr, *avatar_id) )
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
          "./src/txt_data_manual/AvatarExcelConfig.cpp",
          "checkAvatarExcelConfig",
          462);
        v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v60 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v59, (const char (*)[47])byte_1AABBB40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, avatar_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    p_const_value_config_mgr = &txt_config_mgr->const_value_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config->quality_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config->quality_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config->quality_type);
    }
    if ( !ConstValueExcelConfigMgr::isContainsAvatarQualityType(p_const_value_config_mgr, avatar_config->quality_type) )
    {
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 960, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 960),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "checkAvatarExcelConfig",
        470);
      v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 960),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v62, (const char (*)[16])byte_1AABBBA0);
      v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, avatar_id);
      v65 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v64, (const char (*)[18])byte_1AABBBE0);
      v66 = common::milog::MiLogStream::operator<<<data::QualityType,(data::QualityType*)0>(
              v65,
              &avatar_config->quality_type);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v66, (const char (*)[50])byte_1AABBC20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false> *const)(v3 + 64));
  }
  v57 = 1;
LABEL_120:
  if ( v57 == 1 )
    v2 = ret;
  if ( v82 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 128) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 480: range 0000000012E7291A-0000000012E73419
int32_t __cdecl AvatarExcelConfigMgr::checkAvatarPromoteExcelConfig(
        const AvatarExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v7; // rdx
  __int64 v8; // rsi
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v9; // ecx
  char v10; // al
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int v17; // edx
  char *v18; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // edx
  int v26; // eax
  int32_t result; // eax
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+18h] [rbp-228h]
  const unsigned int *avatar_promote_id; // [rsp+20h] [rbp-220h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *max_avatar_promote_id; // [rsp+28h] [rbp-218h]
  data::AvatarPromoteExcelConfigVec *__for_range_0; // [rsp+30h] [rbp-210h]
  const data::AvatarPromoteExcelConfig *avatar_promote_config; // [rsp+38h] [rbp-208h]
  const std::vector<data::PropValConfig> *__for_range_1; // [rsp+40h] [rbp-200h]
  const data::PropValConfig *prop_val_config; // [rsp+48h] [rbp-1F8h]
  char v35[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 4 24 avatar_promote_level:483 64 8 9 <unknown> 96 8 15 __for_begin:481 128 8 13 __for_end:"
                        "481 160 8 9 <unknown> 192 8 15 __for_begin:494 224 8 13 __for_end:494 256 8 15 __for_begin:496 2"
                        "88 8 13 __for_end:496 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarExcelConfigMgr::checkAvatarPromoteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  __for_range = &this->max_avatar_promote_level_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128)) )
      break;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    v8 = ((_DWORD)v7 + 7) & 7;
    if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
    {
      v8 = 8LL;
      __asan_report_load_n(v7, 8LL);
    }
    *(std::pair<unsigned int const,unsigned int> *)(v3 + 64) = *v7;
    avatar_promote_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 64));
    max_avatar_promote_id = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 64));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v8);
    for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
    {
      v6 = (char *)(((unsigned __int8)max_avatar_promote_id & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)max_avatar_promote_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)max_avatar_promote_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_avatar_promote_id >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(max_avatar_promote_id);
      }
      v9 = *max_avatar_promote_id;
      v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v10 != 0;
      if ( v10 != 0 && v10 <= 3 )
        __asan_report_load4(v3 + 48);
      if ( v9 < *(_DWORD *)(v3 + 48) )
      {
        v16 = 1;
        goto LABEL_32;
      }
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v6);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = std::make_pair<unsigned int const&,unsigned int &>(
                                                              avatar_promote_id,
                                                              (unsigned int *)(v3 + 48));
      v11 = common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> const,std::pair<unsigned int,unsigned int>>(
              &this->avatar_promote_config_map,
              (const std::pair<unsigned int,unsigned int> *)(v3 + 160));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( !v11 )
        break;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
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
      "./src/txt_data_manual/AvatarExcelConfig.cpp",
      "checkAvatarPromoteExcelConfig",
      487);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v12, (const char (*)[48])byte_1AABBDC0);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, avatar_promote_id);
    v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])byte_1AABB5A0);
    v6 = (char *)(v3 + 48);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v17 = 0;
      goto LABEL_36;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
  }
  v17 = 1;
LABEL_36:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v17 == 1 )
  {
    __for_range_0 = &this->avatar_promote_excel_config_vec;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<data::AvatarPromoteExcelConfig>::const_iterator *)(v3 + 192) = std::vector<data::AvatarPromoteExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::vector<data::AvatarPromoteExcelConfig>::const_iterator *)(v3 + 224) = std::vector<data::AvatarPromoteExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      v18 = (char *)(v3 + 224);
      if ( !__gnu_cxx::operator!=<data::AvatarPromoteExcelConfig const*,std::vector<data::AvatarPromoteExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<const data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *)(v3 + 224)) )
        break;
      avatar_promote_config = __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig const*,std::vector<data::AvatarPromoteExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *const)(v3 + 192));
      __for_range_1 = &avatar_promote_config->add_props;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v18);
      *(std::vector<data::PropValConfig>::const_iterator *)(v3 + 256) = std::vector<data::PropValConfig>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v18);
      *(std::vector<data::PropValConfig>::const_iterator *)(v3 + 288) = std::vector<data::PropValConfig>::end(__for_range_1);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::PropValConfig const*,std::vector<data::PropValConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::PropValConfig*,std::vector<data::PropValConfig> > *)(v3 + 256),
                (const __gnu_cxx::__normal_iterator<const data::PropValConfig*,std::vector<data::PropValConfig> > *)(v3 + 288)) )
        {
          v25 = 1;
          goto LABEL_57;
        }
        prop_val_config = __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::PropValConfig*,std::vector<data::PropValConfig> > *const)(v3 + 256));
        if ( *(_BYTE *)(((unsigned __int64)&prop_val_config->prop_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&prop_val_config->prop_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&prop_val_config->prop_type);
        }
        if ( prop_val_config->prop_type > (unsigned int)(FIGHT_PROP_MAX_ELEC_ENERGY|FIGHT_PROP_DEFENCE_IGNORE_DELTA|0x380) )
          break;
        __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::PropValConfig*,std::vector<data::PropValConfig> > *const)(v3 + 256));
      }
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
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "checkAvatarPromoteExcelConfig",
        500);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v19, (const char (*)[46])byte_1AABBE20);
      v21 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
              v20,
              &prop_val_config->prop_type);
      v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v21, (const char (*)[19])byte_1AABBE80);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v22,
              &avatar_promote_config->avatar_promote_id);
      v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v23, (const char (*)[17])byte_1AABB5A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &avatar_promote_config->promote_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v25 = 0;
LABEL_57:
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v25 != 1 )
      {
        v26 = 0;
        goto LABEL_61;
      }
      __gnu_cxx::__normal_iterator<data::AvatarPromoteExcelConfig const*,std::vector<data::AvatarPromoteExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::AvatarPromoteExcelConfig*,std::vector<data::AvatarPromoteExcelConfig> > *const)(v3 + 192));
    }
    v26 = 1;
LABEL_61:
    if ( v26 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v35 == (char *)v3 )
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

// Line 512: range 0000000012E7341A-0000000012E73886
__int64 __fastcall AvatarExcelConfigMgr::findAvatarPromoteReward(
        const AvatarExcelConfigMgr *const this,
        uint32_t avatar_id,
        uint32_t promote_level,
        unsigned __int64 reward_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  const std::unordered_map<unsigned int,unsigned int> *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const std::unordered_map<unsigned int,unsigned int> *v13; // rax
  char *v14; // rsi
  uint32_t *v15; // rax
  uint32_t *v16; // rdx
  uint32_t v17; // ecx
  char v18; // dl
  char v21[224]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 13 avatar_id:511 48 4 17 promote_level:511 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = AvatarExcelConfigMgr::findAvatarPromoteReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862723] = -218959118;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = avatar_id;
  *(_DWORD *)(v4 + 48) = promote_level;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> const,unsigned int>(
          &this->avatar_promote_reward_map,
          (const unsigned int *)(v4 + 32)) )
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
      3u,
      "./src/txt_data_manual/AvatarExcelConfig.cpp",
      "findAvatarPromoteReward",
      515);
    v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[55])"avatar_promote_reward_map dont have avatar, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::at(
           &this->avatar_promote_reward_map,
           (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v4 + 32));
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
            v9,
            (const unsigned int *)(v4 + 48)) )
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
        3u,
        "./src/txt_data_manual/AvatarExcelConfig.cpp",
        "findAvatarPromoteReward",
        520);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[47])"promote level dont have reward, promote_level:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])", avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v13 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::at(
              &this->avatar_promote_reward_map,
              (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v4 + 32));
      v14 = (char *)(v4 + 48);
      v15 = (uint32_t *)std::unordered_map<unsigned int,unsigned int>::at(
                          v13,
                          (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      v17 = *v16;
      v18 = *(_BYTE *)((reward_id >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)((reward_id & 7) + 3) >= v18 )
      {
        LOBYTE(v14) = v18 != 0;
        __asan_report_store4(reward_id, v14);
      }
      *(_DWORD *)reward_id = v17;
      result = 0LL;
    }
  }
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 528: range 0000000012E73888-0000000012E739EE
data::ElementType __cdecl AvatarExcelConfigMgr::calAvatarInitElemType(
        AvatarExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr,
        uint32_t avatar_id)
{
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  uint32_t energy_skill_id; // [rsp+24h] [rbp-1Ch]
  data::AvatarExcelConfig *avatar_config_ptr; // [rsp+28h] [rbp-18h]
  data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+30h] [rbp-10h]
  data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+38h] [rbp-8h]

  avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(
                        &txt_config_mgr->avatar_config_mgr,
                        avatar_id);
  if ( !avatar_config_ptr )
    return 0;
  p_avatar_skill_config_mgr = &txt_config_mgr->avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)avatar_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&avatar_config_ptr->skill_depot_id);
  }
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    p_avatar_skill_config_mgr,
                                    avatar_config_ptr->skill_depot_id);
  if ( !avatar_skill_depot_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&avatar_skill_depot_config_ptr->energy_skill);
  }
  energy_skill_id = avatar_skill_depot_config_ptr->energy_skill;
  if ( !energy_skill_id )
    return 0;
  avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                              &txt_config_mgr->avatar_skill_config_mgr,
                              energy_skill_id);
  if ( !avatar_skill_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&avatar_skill_config_ptr->cost_elem_type);
  }
  return avatar_skill_config_ptr->cost_elem_type;
};

// Line 557: range 0000000012E739F0-0000000012E73BEB
__int64 __fastcall AvatarExcelConfigMgr::getAvatarInitElemType(
        const AvatarExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ElementType> *p_avatar_init_elem_type_map; // rdx
  std::unordered_map<unsigned int,data::ElementType> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElementType>,false,false>::pointer v8; // rdx
  data::ElementType *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:556 64 8 8 iter:558 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::getAvatarInitElemType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_init_elem_type_map = &this->avatar_init_elem_type_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,data::ElementType>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ElementType>::find(
                                                                                       p_avatar_init_elem_type_map,
                                                                                       (const std::unordered_map<unsigned int,data::ElementType>::key_type *)(v2 + 48));
  v6 = &this->avatar_init_elem_type_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ElementType>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ElementType>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::ElementType>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElementType>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElementType>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElementType>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElementType>,false,false> *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = (unsigned int)v8->second;
  }
  else
  {
    result = 0LL;
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

// Line 568: range 0000000012E73BEC-0000000012E73DAD
const std::string *__fastcall AvatarExcelConfigMgr::getAvatarExcelHashStr[abi:cxx11](
        const AvatarExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::string> *p_avatar_excel_config_hash_map; // rdx
  std::unordered_map<unsigned int,std::string> *v6; // rdx
  bool v7; // al
  const std::string *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:567 64 8 8 iter:569 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarExcelConfigMgr::getAvatarExcelHashStr[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_excel_config_hash_map = &this->avatar_excel_config_hash_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::string>::find(
                                                                                 p_avatar_excel_config_hash_map,
                                                                                 (const std::unordered_map<unsigned int,std::string>::key_type *)(v2 + 48));
  v6 = &this->avatar_excel_config_hash_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::string>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::string>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false> *const)(v2 + 64))->second;
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
